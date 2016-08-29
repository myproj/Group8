#include "functions.h"

int factorial(int n){
    if(n!=1){
      return(n * factorial(n-1));//comment
    }
    else return 1;
}
