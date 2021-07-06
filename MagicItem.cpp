// MagicItem.cpp
    // MagitHat.cpp
#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>

#include "MagicItem.h"
#include "Situation.h"

using namespace std;


    MagicItem::MagicItem(){

         numObjects=0;
         
        tP= new Situation[numObjects];
         
}

MagicItem::~MagicItem(){}

int MagicItem::useAgainst(Situation a){
    

    return 0;

}
