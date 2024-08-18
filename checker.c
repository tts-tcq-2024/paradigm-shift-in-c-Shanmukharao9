
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
bool batteryTemperature(float temperature){
return (temperature >= 0 && temperature <=45);
  }
 
 
bool batterySoc(float soc){
  return (soc>=20 && soc<=80);
  }
 
 
bool batteryChargeRate(float chargeRate){
return (chargeRate<=0.8);
   }


bool batteryIsOk(float temperature, float soc, float chargeRate) {
  return (batteryTemperature(temperature)  || batterySoc(soc)  || batteryChargeRate(chargeRate));
}


int main() {
  assert(batteryIsOk(25, 70, 0.7)== true);
  assert(batteryIsOk(25, 70, 0.7)== true);
  assert(!batteryIsOk(50, 85, 0) == false);
  assert(!batteryIsOk(50, 85, 0) == false);
}
