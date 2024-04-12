#include "height.h"
#include "weight.h"
#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

double calculateTotalInches(double feet, double inches);
double translateHeight(double inches);
double translateWeight(double pounds);
double calculateBodyMassIndex (double height, double weight);

char male[] = "Y";
bool validEntry = false;

int main(){

    system("cls");

    //initializing everything
    Height personHeight(0.0, 0.0, 0.0, 0.0);
    Weight personWeight(0.0, 0.0, 0.0);

    cout << "\nWELCOME TO THE BODY ANALYZER!\n\n";

    cout << "------------------\n";
    cout << "Enter Height\n";
    cout << "------------------\n";
    cout << "Feet: ";
    cin >> personHeight.feet;
    cout << "Inches: ";
    cin >> personHeight.inches;

    cout << "\n------------------\n";
    cout << "Enter Weight in Pounds (lbs): ";
    cin >> personWeight.pounds;

    personHeight.totalInches = calculateTotalInches(personHeight.feet, personHeight.inches);
    personHeight.meters = translateHeight(personHeight.totalInches);
    personWeight.kilograms = translateWeight(personWeight.pounds);
    personWeight.bodyMassIndex = calculateBodyMassIndex(personHeight.meters, personWeight.kilograms);

    cout << "\n--------------------------------------------------------------------------------------------\n";
    cout << "Ft: " << personHeight.feet << " | In: " << personHeight.inches << " | TotalInches: " << personHeight.totalInches << " | Mtrs: " << personHeight.meters;
    cout << "\nPounds: " << personWeight.pounds << " | Kgs: " << personWeight.kilograms << " | BMI: " << personWeight.bodyMassIndex << endl;
    cout << "--------------------------------------------------------------------------------------------\n\n";

}

double calculateTotalInches(double feet, double inches){
    double totalInches = 0.0;

    totalInches = feet * 12;
    totalInches += inches;

    return totalInches;
}

double translateHeight(double totInches){
    double meters = 0.0;
    double meterDiv = 39.37;

    meters = totInches / meterDiv;

    return meters;
}

double translateWeight(double pounds){
    double kgDiv = 2.205;
    double kgs = 0.0;

    kgs = pounds / kgDiv;

    return kgs;

}

double calculateBodyMassIndex (double height, double weight){
    double bmi = 0.0;
    double sqHeight = 0.0;

    sqHeight = pow(height,2.0);
    bmi = weight / sqHeight;

    return bmi;
}