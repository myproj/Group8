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
      remainder = n % 10;
	   //printf("The Remainder is %d\n", remainder);
      cout<<"The Remainder is"<<remainder<<"\n";
      sum = sum + remainder;
	   //printf("The Sum is %d\n", sum);
      cout<<"The Sum is"<<sum<<"\n";
      n = n / 10;
	   printf("The n is %d\n", n);
   }
 
   //printf("Sum of digits of entered number = %d\n",sum);
   cout<<"Sum of digits of entered number"<<sum<<"\n";
   //comment added 1
   return 0;
}
