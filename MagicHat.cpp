#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include "MagicHat.h"
#include "MagicItem.h"
#include "Situation.h"
using namespace std;


MagicHat::MagicHat():MagicItem()
{
    numObjects=3;
    tP= new Situation[numObjects];
   Situation s1=  Situation(2, 10);
   Situation s2=  Situation(3, 15);
    //tP= [new situation (situation::EvilTroll,10) , new situation (situation::OminousFog,12)];
    //tP[1]= situation(situation::EvilTroll,10);
    //tP[2]= situation(situation::OminousFog,12);
    for(int i=0; i < numObjects;i++)
    {
        if(i==1){
            tP[i] = s1;
         } else{
             tP[i] = s2 ;
        }
    }
}
   





 MagicHat::~MagicHat()
 {
     delete[] tP;



 }
 int MagicHat::useAgainst(Situation a)
 {
     for(int i=0; i<numObjects; i++ )
     {
        if( tP[i].getType() == a.getType()) 
        {
            return tP[i].getPoints() + tP[i].getPoints();

        
        }

    }
    return 0;
 }

