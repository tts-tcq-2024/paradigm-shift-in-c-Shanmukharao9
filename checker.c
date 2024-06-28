#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
 
bool batteryTemp(float temperature){
return (temperature >= 0 && temperature <=45);
}
 
bool batterySoc(float soc){
  return (soc>=20 && soc<=80);
}
 
bool batteryChargeRate(float chargeRate){
return (chargeRate<=0.8);
}

int _temperature(batteryTemp){
    printf("Temperature out of range!\n");
    return 0;
}
int _batterySoc(batterySoc){
    printf("State of Charge out of range!\n");
    return 0;
}
int _batteryChargeRate(batteryChargeRate){
    printf("Charge Rate out of range!\n");
    return 0;
}

int batteryIsOk(float temperature, float soc, float chargeRate) {
  return ((batteryTemp(temperature) ? _temperature(temperature):0) || (batterySoc(soc) ? _batterySoc(soc) : 0) || (batteryChargeRate(chargeRate) ? _batteryChargeRate(batteryChargeRate) : 0));
}
 
int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
