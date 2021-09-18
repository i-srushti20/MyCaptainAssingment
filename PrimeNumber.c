#include<stdio.h>

// Function prototype declaration
int PrimeNum ( int num, int x );
 
int main()
{
    int num, flag;
    
    // Take a number as an input from user
    printf ("Enter A Number : ");
    scanf ("%d", &num);
    
    flag = PrimeNum ( num, num/2 );  // Function call
    
    if ( flag == 1 )
        printf ("%d is a Prime Number\n", num );
    else
        printf ("%d is Not a Prime Number\n", num );
    
    return 0;
}

// Function to check a given number is prime or not using recursion 
int PrimeNum ( int num, int x )
{
	if ( x == 0 )
		return 0;
    if ( x == 1 )
        return 1;
    else
    {
       if ( num % x == 0 )
         return 0;
       else
         return PrimeNum ( num, x-1 ); // Recursive statement
    }
}

