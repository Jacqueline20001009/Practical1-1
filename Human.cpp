#include<iostream>
#include "Human.h"
using namespace std;
Human::Human(){


}
char Human::makeMove(){
   
    char input;
    bool MakeChoice=false;
    while (MakeChoice==false)
    {
        cout<<"Enter move: ";
        cin>>input;
        if (input=='R'|| input=='P'|| input=='S')
        {
            MakeChoice=true;
        }
        else{
             MakeChoice=false;
        }
        
    }
    return input;
}
 Human::~Human(){

 }
