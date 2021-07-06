// Avatar.cpp
#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include "Avatar.h"
#include "MagicHat.h"
using namespace std;


Avatar::Avatar(){
    m= MagicHat();
    numOfPoints=0;
}

int Avatar::currentPoints(){
    return numOfPoints;
}

bool Avatar::defeats(Situation a){
      
    numOfPoints+=m.useAgainst(a);

    return m.useAgainst(a)>0;

}

//HIIII