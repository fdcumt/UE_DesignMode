#pragma once
#include "MySingleton.generated.h"

UCLASS(BlueprintType, Blueprintable)
class UMySingleton : public UObject
{
	GENERATED_BODY()
public:
	UMySingleton(const FObjectInitializer& ObjectInitializer);
	static UMySingleton* Instance();

private:
	static UMySingleton* m_pSingleton;
};
