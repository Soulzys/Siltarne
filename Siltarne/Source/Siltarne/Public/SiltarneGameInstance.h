#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "SiltarneGameInstance.generated.h"

UCLASS()
class SILTARNE_API USiltarneGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:

	USiltarneGameInstance();

protected:

	virtual void Init() override;

private:

	void OnCreateSessionComplete(FName ServerName, bool Succeeded);
	void OnFindSessionComplete(bool Succeeded);

	UFUNCTION(BlueprintCallable) void CreateServer();
	UFUNCTION(BlueprintCallable) void JoinServer();

private:

	IOnlineSessionPtr m_SessionInterface;
	TSharedPtr<FOnlineSessionSearch> m_SessionSearch;
};
