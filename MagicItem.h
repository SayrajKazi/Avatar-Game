// MagicItem.h
// MagicHat.h

#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include "Situation.h"

using namespace std;
//#ifndef MAGICITEM_H
//#define MAGICITEM_H
#pragma once
class MagicItem{
        protected:  
                int numObjects;

                 
                 Situation*  tP;

                 

                 

                 



        public:

                MagicItem();
                      ~MagicItem();

               virtual int  useAgainst( Situation a);










};
                


