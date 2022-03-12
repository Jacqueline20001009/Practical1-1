#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
using namespace std;

int main(){
Computer player2;
Human player1;
Referee AreFeree;

for (int i = 0; i < 10; i++)
{
    cout<<AreFeree.Joiner(player1,player2)<<endl;
    
}
return 0;

}
