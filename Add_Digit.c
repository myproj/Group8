#include<stdio.h>
 
int main()
{
   int n, sum = 0, remainder;
 
   //printf("Enter an integer\n");
   cout<<"Enter an integer\n";
   //scanf("%d",&n);
   cin>>n;
    
   while(n != 0)
   {
      if(n>0){
         remainder = n % 10;
   	  printf("The Remainder is %d\n", remainder);
         sum = sum + remainder;
   	  printf("The Sum is %d\n", sum);
         n = n / 10;
   	  printf("The n is %d\n", n);
      }else{
         remainder = n % 10;
         n = n / 10;
         if(n == 0){
            printf("The Remainder is %d\n", remainder*(-1));
            sum = sum - remainder;
            printf("The Sum is %d\n", sum);
            printf("The n is %d\n", n);
         }
         printf("The Remainder is %d\n", remainder);
         sum = sum + remainder;
         printf("The Sum is %d\n", sum);

         printf("The n is %d\n", n);

      }
   }
 
   printf("Sum of digits of entered number = %d\n",sum);
   return 0;
}
