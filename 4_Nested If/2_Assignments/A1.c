/*
Documentation

Name : S Sanjay kumar
Language : C
Program Name : Find the middle number of given 3 numbers
Sample Inputs : 43 10 25
Sample Output : 25

*/

//preprocessor file

#include <stdio.h>  

//main function where logic executes

int main()
{
    //declaration of the required variable
    int num1,num2,num3,result;
    
    printf("Enter the Three number : ");
    
    //Accepting 3 integer from the user & storing in the variable
    
    scanf("%d %d %d",&num1,&num2,&num3);
    
    //First if condition checking num1 is greatest
    
    if(num1>=num2&&num1>=num3)
    {
        //Nested if: comparing num2 & num3 finding the 2nd largest number
        
        if(num2>=num3){
            result = num2;
        }
        else
        {
            result = num3;
        }
    }
    
    //second if condition checking num2 is the greatest
    
    else if(num2>=num1&&num2>=num3)
    {
        
        //nested if: comparing num2 & num3 and finding the second largest number
        
        if(num1>=num3)
        {
            result = num1;
        }
        else
        {
            result = num3;
        }
    }
    
    // so this else we considering num3 as largested as above we checking for num1 & num2
    
    else
    {
        //nested if : comparing num1 & num2 for finding 2nd largest number
        
        if(num1>=num2)
        {
            result = num1;
        }
        else
        {
            result = num2;
        }
    }
    
    
    //printing the second largest number as output
    
    printf("The middle number is %d",result);
    
    //Successfuly executed the code
    
    return 0;
}