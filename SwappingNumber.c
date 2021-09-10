#include<stdio.h>  
 int main()    
{    
int a=5, b=15;      
printf("Before swap a=%d b=%d",a,b);      
a=a+b;//a=20 (5+15)    
b=a-b;//b=5 (20-15)    
a=a-b;//a=15 (20-5)    
printf("\nAfter swap a=%d b=%d",a,b);    
return 0 ;
}
