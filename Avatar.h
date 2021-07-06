// Avatar.h
#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include "MagicHat.h"
#include "Situation.h"

using namespace std;
//#ifndef AVATAR_H
//#define AVATAR_H
#pragma once
class Avatar{

                private:
                        
                        MagicHat m;
                        int     numOfPoints;

                public:

                        Avatar();

                        int currentPoints();


                        bool defeats( Situation a);
};
