#pragma once
#include "Player.h"
class Dartboard
{
    
    public:

        int joebullsuccessrate = 73;
        int sidbullSuccessrate = 71;
        int sidtotalscore = 301;
        int joetotalscore = 301;


        int Dartnum[21] = { 20, 1, 18, 4, 13, 6, 10, 15, 2, 17, 3, 19, 7, 16, 8, 11, 14, 9, 12, 5, 20 }; //add 50 for bullseye into array4
        /*                   0  1   2   3   4  5  6   7   8  9  10  11 12 13 14  15  16 17  18  19 20    */

        Dartboard();
        ~Dartboard();


        int throwdart(char s);
        int throw_bull(int p);
        int throw_treble(int d, int p);
        int throw_double(int d);
        int throw_single(int d);

};

