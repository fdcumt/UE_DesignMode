#pragma once
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

UCLASS(config = Game, transient, BlueprintType, Blueprintable)
class UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	UMyGameInstance(const FObjectInitializer& ObjectInitializer);

public:
	virtual void Init() override;

public:
	static UMyGameInstance* Instance();

private:
	static UMyGameInstance *m_pInstance;
};
