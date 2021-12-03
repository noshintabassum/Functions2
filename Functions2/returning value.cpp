#include<iostream>
#include<conio.h>
using namespace std;

int sqrt(int);

int main(){


int n, t;


cout<<"enter test-case : ";

cin>>t;

cout<<endl;




for(int i=1; i<=t; i++){


cout<<"enter an int number for test-case "<<i<<" : ";

cin>>n;

int s = sqrt(n);

cout<<endl;
cout<<"sqrt of "<<n<<" : "<<s;
cout<<endl<<endl;


}




getch();

}

int sqrt(int n){


int sqrt = n*n;


return sqrt;


}

