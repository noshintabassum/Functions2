#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main(){


    int randomNumber, t;

    cout<<"enter test-case : ";

    cin>>t;

    cout<<endl<<endl;


    //rand() is a built-in function. this function returns a random number . to use rand() you have to add a header-file in your code.

    for(int i=1; i<=t; i++){


    randomNumber = rand();

    cout<<"randomNumber "<<i<<" : "<<randomNumber;

    cout<<endl<<endl;


    }




getch();

}
