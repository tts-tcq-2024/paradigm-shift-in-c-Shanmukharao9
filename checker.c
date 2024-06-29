#include <stdio.h>
#include <assert.h>

int isInRange(float Value, float Min, float Max){
	return (Value >= Min && Value <= Max);
}

int batteryIsOk(float temperature, float soc, float chargeRate){
	!isInRange(temperature, 0, 45) && printf("Temperature out of range!\n");
	!isInRange(soc, 20, 80) && printf("State of charge out of range!\n");
	chargeRate > 0.8 && printf("Charge Rate out of range!\n");

	return isInRange(temperature, 0, 45) && isInRange(soc, 20,80) && chargeRate <= 0.8 && printf("Battery in Good condition :)\n");
	
}

int main()
{
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
