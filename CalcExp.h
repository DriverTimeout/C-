// CalcExp.h
#ifndef CALCEXP_H
#define CALCEXP_H

class CalcExp {
private:
    double TotMiles;
    double GasPrice;
    double MilesPerGallon;
    double ParkFees;
    double TollsFees;
    double TotGallons;
    double TotGasExp;
    double TotExpense;

public:
    void setValues(double totMiles, double gasPrice, double milesPerGallon, double parkFees, double tollsFees);
    void CalcTotGallons();
    void CalcGasExp();
    void CalcTotExpense();
    double getTotMiles();
    double getGasPrice();
    double getMPG();
    double getTotGallons();
    double getTotGasExp();
    double getTotExpense();
};

#endif // CALCEXP_H
