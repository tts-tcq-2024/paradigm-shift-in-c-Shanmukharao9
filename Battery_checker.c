#include "Battery_checker.h"
#include "Temperature_Rangechecker.h"
#include "SOC_Rangechecker.h"
#include "ChargeRate_Rangechecker.h"

int batteryIsOk(float temperature, float soc, float chargeRate) {
    return isTemperatureOk(temperature) && isSocOk(soc) && isChargeRateOk(chargeRate);
}


