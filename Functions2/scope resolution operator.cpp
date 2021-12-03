#include<iostream>
#include<conio.h>
using namespace std;

//outsider variable is called global variable

int x = 10;

int y = 5;



int main(){


//insider variable is called local variable

int x = 5;


cout<<"value of local variable x : "<<x;

cout<<endl;


// :: it's called scope resolution operator we used :: to target global variable

cout<<"value of global variable x : "<< :: x;

cout<<endl;




// changing value of global variable


:: y = 10;

cout<<"changed value of global variable y : "<< :: y;





getch();

}
