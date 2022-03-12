#include <iostream>
#include "Computer.h"
#include "Human.h"
#include "Referee.h"

using namespace std;
Referee::Referee(){

    
}
char Referee::Joiner(Human player1,Computer player2){
    char result=' ';
    char N1= player1.makeMove();
    char N2=player2.makeMove();
    if (N1=='R' && N2=='R')
    {
        result='T';
    }
    if(N1=='S' && N2=='S'){
        result='T';
    }
     if(N1=='P' && N2=='P'){
        result='T';
    }
    if (N1=='S' && N2=='P')
    {
        result='W';
    }
    
    if (N1=='P' && N2=='R')
    {
        result='W';
    }
    if (N1=='R' && N2=='S')
    {
        result='W';
    }
    if (N1=='S' && N2=='R')
    {
         result='L';
    }
    
    return result;
    
}
Referee::~Referee(){

}
