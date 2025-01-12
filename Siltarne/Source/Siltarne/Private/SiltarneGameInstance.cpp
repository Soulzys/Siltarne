#include "SiltarneGameInstance.h"
#include "OnlineSubsystem.h"
#include "OnlineSessionSettings.h"

USiltarneGameInstance::USiltarneGameInstance()
{

}

void USiltarneGameInstance::Init()
{
	Super::Init();

	if (IOnlineSubsystem* _Subsystem = IOnlineSubsystem::Get())
	{
		m_SessionInterface = _Subsystem->GetSessionInterface();

		if (m_SessionInterface.IsValid())
		{
			// Binds delegates
			m_SessionInterface->OnCreateSessionCompleteDelegates.AddUObject(this, &USiltarneGameInstance::OnCreateSessionComplete) ;
			m_SessionInterface->OnFindSessionsCompleteDelegates .AddUObject(this, &USiltarneGameInstance::OnFindSessionComplete  ) ;
		}
	}
}

void USiltarneGameInstance::OnCreateSessionComplete(FName ServerName, bool Succeeded)
{
	UE_LOG(LogTemp, Warning, TEXT("OnCreateSessionComplete -->> succeeded : %d"), Succeeded);

	if (Succeeded)
	{
		GetWorld()->ServerTravel("/Game/FirstPerson/Maps/FirstPersonMap");
	}
}

void USiltarneGameInstance::OnFindSessionComplete(bool Succeeded)
{
	UE_LOG(LogTemp, Warning, TEXT("Create Server"));

	if (Succeeded)
	{
		TArray<FOnlineSessionSearchResult> _SearchResults = m_SessionSearch->SearchResults;

		UE_LOG(LogTemp, Warning, TEXT("Search results count : %d"), _SearchResults.Num());
	}
}

void USiltarneGameInstance::CreateServer()
{
	UE_LOG(LogTemp, Warning, TEXT("Create Server"));

	FOnlineSessionSettings _SessionSettings;
	_SessionSettings.bAllowJoinInProgress = true;
	_SessionSettings.bIsDedicated = false;
	_SessionSettings.bIsLANMatch = true; // Xincan - this is only LAN because we're testing it. When deployed, set this to false
	_SessionSettings.bShouldAdvertise = true;
	_SessionSettings.bUsesPresence = true;
	_SessionSettings.NumPublicConnections = 5;

	m_SessionInterface->CreateSession(0, "Test Session", _SessionSettings);
}

void USiltarneGameInstance::JoinServer()
{
	m_SessionSearch = MakeShareable(new FOnlineSessionSearch());
	m_SessionSearch->bIsLanQuery = true;
	m_SessionSearch->MaxSearchResults = 10000;
	m_SessionSearch->QuerySettings.Set(SEARCH_PRESENCE, true, EOnlineComparisonOp::Equals);

	m_SessionInterface->FindSessions(0, m_SessionSearch.ToSharedRef());
}
