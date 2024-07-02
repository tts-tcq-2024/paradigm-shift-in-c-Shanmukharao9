#include <stdio.h>
#include <assert.h>

int isInRange(float Value, float Min, float Max){
	return (Value >= Min && Value <= Max);
}

int batteryIsOk(float temperature, float soc, float chargeRate){
	if((isInRange(temperature, 0, 45) && isInRange(soc, 20,80) && chargeRate <= 0.8)){
		printf("Battery in Good condition :)\n"); 
	}else{
		printf("Battery in bad condition :)\n");
	}
}

int main()
{
  assert(batteryIsOk(25, 70, 0.7));
}
