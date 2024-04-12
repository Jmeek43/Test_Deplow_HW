#ifndef HEIGHT_H

#define HEIGHT_H
#include <string>

class Height{
    public:
        double feet;
        double inches;
        double totalInches; //feet + inches = totalInches
        double meters;

        Height(double ft, double in, double mtr, double totIn){
            feet = ft;
            inches = in;
            totalInches = totIn;
            meters = mtr;
        }
        
};



#endif