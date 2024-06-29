#include <stdio.h>
#include <assert.h>

int isInRange(float value, float min, float max) {
    return (value >= min && value <= max);
}

void printAbnormalMeasure(const char* measure, int isHigh) {
    printf("Abnormal %s: %s\n", measure, isHigh ? "High" : "Low");
}

int validateTemperature(float temperature) {
    if (!isInRange(temperature, 0, 45)) {
        printf("Temperature out of range!\n");
        printAbnormalMeasure("Temperature", temperature > 45);
        return 0;
    }
    return 1;
}

int validateSoc(float soc) {
    if (!isInRange(soc, 20, 80)) {
        printf("State of Charge out of range!\n");
        printAbnormalMeasure("SOC", soc > 80);
        return 0;
    }
    return 1;
}

int validateChargeRate(float chargeRate) {
    if (chargeRate > 0.8) {
        printf("Charge Rate out of range!\n");
        printAbnormalMeasure("Charge Rate", 1);
        return 0;
    }
    return 1;
}

int batteryIsOk(float temperature, float soc, float chargeRate) {
    return validateTemperature(temperature) &&
           validateSoc(soc) &&
           validateChargeRate(chargeRate);
}

int main() {
    assert(batteryIsOk(25, 70, 0.7));
    assert(!batteryIsOk(50, 85, 0));
    return 0;
}
