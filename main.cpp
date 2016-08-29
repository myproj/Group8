#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    int n;
    print_hello();
    cout<< endl;
    cout<<"enter a number"<<endl;
    cin>>n;
    char choice='y';
    while(choice == 'y'){
      if(n>0){
	cout<<"factorial="<<factorial(n)<<endl;
	cout<<"press n to exit \n y to renter:";
	cin>>choice;
      }else{
	cout<<"renter +ve value";
	cin>>n;
      }
    }
}
