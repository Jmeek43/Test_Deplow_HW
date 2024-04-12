#ifndef WEIGHT_H

#define WEIGHT_H
#include <string>

class Weight{
    public:
        double pounds;
        double kilograms;
        double bodyMassIndex;

        Weight(double lbs, double kgs, double bmi){
            pounds = lbs;
            kilograms = kgs;
            bodyMassIndex = bmi;

        }      
};



#endif