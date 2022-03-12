#ifndef Referee_h
#define Referee_h

#include "Human.h"
#include "Computer.h"

class Referee{
    
   public: 
    Referee();
    char refGame(Human player1,Computer player2);//player1 is computer term and player2 is Human term
    ~Referee();
    

};
#endif
