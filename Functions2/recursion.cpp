#include<iostream>
#include<conio.h>
using namespace std;


int fact(int n){


if(n==1){

    //base-case to stop the function
    return 1;

}else{

               //recursive call
   return n *  fact(n-1);

}



}


int main(){


int f = fact(4);

cout<<"fact : "<<f;









getch();

}
