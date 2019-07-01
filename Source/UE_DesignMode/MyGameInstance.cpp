#include "MyGameInstance.h"

UMyGameInstance* UMyGameInstance::m_pInstance = nullptr;

UMyGameInstance::UMyGameInstance(const FObjectInitializer& ObjectInitializer)
	:UGameInstance(ObjectInitializer)
{

}

void UMyGameInstance::Init()
{
	UGameInstance::Init();
	m_pInstance = this;
}

UMyGameInstance* UMyGameInstance::Instance()
{
	return m_pInstance;
}


