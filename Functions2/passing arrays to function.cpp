#include<iostream>
#include<conio.h>
using namespace std;


void displayArray(int av[], int s){

         for(int i=0; i<=s-1; i++){


            cout<<av[i]<<" ";
         }



}




int main(){



    int a[5] = {1, 2, 3, 4, 5};

    displayArray(a, 5);








getch();


}
