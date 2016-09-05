#include <iostream>
#include <stdio.h>
#include "functions.h"
using namespace std;
int main(){
    int n;
    print_hello();
    cout<< endl;
    
    char choice='y';
    while(choice == 'y'){
      cout<<"enter a number:";//changed bugs here
      cin>>n;
      if(n>0){
	cout<<"factorial="<<factorial(n)<<endl;
	printf("factorial= %d\n",factorial(n));
	cout<<"press n to exit \n y to renter:";
	cin>>choice;
      }else{
	cout<<"renter +ve value";
	cin>>n;
      }
    }
}
