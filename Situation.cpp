#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include "Situation.h"


using namespace std;

const int Situation::BrokenBridge=1;
const int Situation::EvilTroll=2;
const int Situation::OminousFog=3;
const int Situation:: FoodPoisoning=4;
const int Situation:: HangNail=5;


 Situation::Situation(){
    sitm=0;
    fNumOfPoints= 0;
}

 Situation::Situation(int s, int f){
    sitm=s;
    fNumOfPoints=f;
}

int Situation::getType(){
   
    switch(sitm)
    {
        case 1:
            return BrokenBridge;
            break;
        case 2:
            return EvilTroll;
            break;
        case 3:
            return OminousFog;
            break;
        case 4:
            return FoodPoisoning;
            break;
        case 5:
            return HangNail;
            break;
        
    }
    return sitm;
}
int Situation::getPoints(){
    return fNumOfPoints;

}