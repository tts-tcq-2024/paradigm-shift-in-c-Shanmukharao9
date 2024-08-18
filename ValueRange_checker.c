#include "ValueRange_checker.h"
#include "WarningMessage_printer.h"

int isValueInRange(float value, float min, float max, const char* WarningMessage) {
    if (value < min || value > max) {
        printWarningMessage(WarningMessage);
        return 0;
    }
    return 1;
}

int isChargeRateInRange(float value, float max, const char* WarningMessage) {
    if (value > max) {
        printWarningMessage(WarningMessage);
        return 0;
    }
    return 1;
}

