// Situation.h
#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>


using namespace std;

#pragma once
class Situation{
    private:

            int sitm;
            int fNumOfPoints;
    
    public:

             Situation();
             Situation(int s, int f);

            int getType();
            int getPoints();
            static const int BrokenBridge ;
            static const int EvilTroll;
            static const int OminousFog;
            static const int FoodPoisoning;
            static const int HangNail;
  
};
