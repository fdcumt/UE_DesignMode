#include "MySingleton.h"
#include "MyGameInstance.h"

UMySingleton* UMySingleton::m_pSingleton = nullptr;


UMySingleton::UMySingleton(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

UMySingleton* UMySingleton::Instance()
{
	if (m_pSingleton==nullptr) {
		m_pSingleton = NewObject<UMySingleton>(UMyGameInstance::Instance());
	} 
	return m_pSingleton;
}


