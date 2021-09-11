#include<stdio.h> 
 
 //TO Grading The Kids’ Of Bit Elementary School 
int main() 
{
    float marks;
    char grade;
 
    printf("Enter marks : ");
    scanf("%f", &marks);
    
    //85-100 -> Grade A  70-84 -> Grade B  55-69 -> Grade C  40-54 -> Grade D  Below 40 -> Grade F
    if ( marks >= 85 )
    {
        grade = 'A';
    }
    else if ( marks >= 70 )
    {
        grade = 'B';
    }
    else if ( marks >= 55 )
    {
        grade = 'C';
    }
    else if ( marks >= 40 )
    {
        grade = 'D';
    }
    else 
    {
        grade = 'F';
    }
                    
    printf("Your Grade Is %c", grade);
    
    return 0;
}

