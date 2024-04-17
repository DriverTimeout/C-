// CalcExp.cpp
#include "CalcExp.h"

void CalcExp::setValues(double totMiles, double gasPrice, double milesPerGallon, double parkFees, double tollsFees) {
    TotMiles = totMiles;
    GasPrice = gasPrice;
    MilesPerGallon = milesPerGallon;
    ParkFees = parkFees;
    TollsFees = tollsFees;
}

void CalcExp::CalcTotGallons() {
    TotGallons = TotMiles / MilesPerGallon;
}

void CalcExp::CalcGasExp() {
    TotGasExp = TotGallons * GasPrice;
}

void CalcExp::CalcTotExpense() {
    TotExpense = TotGasExp + ParkFees + TollsFees;
}

double CalcExp::getTotMiles() {
    return TotMiles;
}

double CalcExp::getGasPrice() {
    return GasPrice;
}

double CalcExp::getMPG() {
    return MilesPerGallon;
}

double CalcExp::getTotGallons() {
    return TotGallons;
}

double CalcExp::getTotGasExp() {
    return TotGasExp;
}

double CalcExp::getTotExpense() {
    return TotExpense;
}
