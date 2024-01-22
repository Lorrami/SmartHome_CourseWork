#pragma once

#include "CoreMinimal.h"
#include "Firestore/DocumentReference.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UserSubsystem.generated.h"


UCLASS()
class SMARTHOME_API UUserSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure)
	FString GetUserEmail() const { return UserEmail; }

	UFUNCTION(BlueprintPure)
	FString GetUserId() const { return UserId; }

	UFUNCTION(BlueprintPure)
	bool IsAdmin() const { return bIsAdmin; }

	UFUNCTION(BlueprintPure)
	UFirestoreDocumentReference* GetTemperatureControlPath() const { return TemperatureControlPath; }

	UFUNCTION(BlueprintPure)
	UFirestoreDocumentReference* GetVentilationControlPath() const { return VentilationControlPath; }

	UFUNCTION(BlueprintPure)
	UFirestoreDocumentReference* GetSecurityControlPath() const { return SecurityControlPath; }

	UFUNCTION(BlueprintPure)
	UFirestoreDocumentReference* GetLightControlPath() const { return LightControlPath; }

	UFUNCTION(BlueprintPure)
	UFirestoreDocumentReference* GetWaterControlPath() const { return WaterControlPath; }

	UFUNCTION(BlueprintCallable)
	void SetUserEmail(const FString& Email) { this->UserEmail = Email; }

	UFUNCTION(BlueprintCallable)
	void SetUserId(const FString& Id) { this->UserId = Id; }

	UFUNCTION(BlueprintCallable)
	void SetIsAdmin(const bool State) { this->bIsAdmin = State; }

	UFUNCTION(BlueprintCallable)
	void SetTemperatureControlPath(UFirestoreDocumentReference* Ref) { this->TemperatureControlPath = Ref; }

	UFUNCTION(BlueprintCallable)
	void SetVentilationControlPath(UFirestoreDocumentReference* Ref) { this->VentilationControlPath = Ref; }

	UFUNCTION(BlueprintCallable)
	void SetSecurityControlPath(UFirestoreDocumentReference* Ref) { this->SecurityControlPath = Ref; }

	UFUNCTION(BlueprintCallable)
	void SetLightControlPath(UFirestoreDocumentReference* Ref) { this->LightControlPath = Ref; }

	UFUNCTION(BlueprintCallable)
	void SetWaterControlPath(UFirestoreDocumentReference* Ref) { this->WaterControlPath = Ref; }

private:
	FString UserEmail;
	FString UserId;

	UPROPERTY()
	UFirestoreDocumentReference* TemperatureControlPath = nullptr;

	UPROPERTY()
	UFirestoreDocumentReference* VentilationControlPath = nullptr;

	UPROPERTY()
	UFirestoreDocumentReference* SecurityControlPath = nullptr;

	UPROPERTY()
	UFirestoreDocumentReference* LightControlPath = nullptr;

	UPROPERTY()
	UFirestoreDocumentReference* WaterControlPath = nullptr;
	
	bool bIsAdmin;
	
};
