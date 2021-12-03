#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main(){


int randomNumber, guessNumber, t;


cout<<"enter test-case : ";

cin>>t;

cout<<endl<<endl;

for(int i=1; i<=t; i++){


    cout<<"enter your guess between 1 to 5 : ";

    cin>>guessNumber;





    randomNumber = rand()%5 + 1;

    if(randomNumber == guessNumber){

        cout<<"Woohooooo! You have Won";
    }else{

        cout<<"Oh No! You have Lost";

        cout<<endl;

        cout<<"random number was : "<<randomNumber;

        cout<<endl;

        cout<<"better luck next time";

    }




    cout<<endl<<endl<<endl;



}













getch();


}
