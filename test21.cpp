#include "Avatar.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include "MagicItem.h"
#include "Situation.h"
#include "MagicHat.h"
using namespace std;

int main(int argc, char *argv[]){
	


Avatar avatar1;
        bool g1;
        bool g2;
        Situation s1 = Situation(2, 15);
        Situation s2 = Situation(1, 20);
        g1 = avatar1.defeats(s1);
        if(g1){
          cout << "Avatar defeats EvilTroll!" << endl;
        }
        g2 = avatar1.defeats(s2);
        if(!g2){
           cout << "Avatar does not defeat BrokenBridge" << endl;
        }
        cout << "Total Points earned by Avatar: " << avatar1.currentPoints() << endl;
        return 1; // NOTE: LEAVE THIS LINE ALONE!
}
