#include<iostream>
#include<conio.h>
using namespace std;


void addition(int a, int b){


    int sum = a+b;

    cout<<"sum : "<<sum;

    cout<<endl;

}


void addition(int a, int b, int c){



    int sum = a+b+c;

    cout<<"sum : "<<sum;

    cout<<endl;

}




int main(){


//function's-name same but function's parameter number or parameter type different
    addition(3, 5);

    addition(3, 5, 6);



getch();


}
