/* 
Documentation

Name         : S Sanjay Kumar
Language     : C
Date         : 10-10-2025
Program Name : to implement itoa function

Sample Input : 

Enter the number : -1234

Sample Output:

Integer to string is -1234


*/

#include <stdio.h>

// Convert integer to string 
void my_itoa(int num, char *str)
{
    int rem = 0, i = 0, flag = 0; //intialize required variable
    
    //check if the number is 0
    
    if(num==0)
    {
        str[0] = '0';
        str[1] = '\0';
        return;
    }
    
    //if the number is negative
    
    if(num < 0)
    {
        num = -(num); //convertig to positive
        flag = 1;
    }
    
    //loop until num is\0
    
    while(num!=0)
    {
        rem= num %10;        //gives remainder of the number
        str[i] = rem + 48;   //converting number to char
        num = num/10;        //removing last value
        i++;                 // incremennt i for further iteration
    }
    
    //if numberfound to be -ve
        
    if(flag == 1)
    {
        str[i]='-'; //storing '-'
        i++;        //incrementing
    }
    
    str[i] = '\0'; //null character at the end of the string

    int j = 0; //intializing j for reverse iteration
    char temp; //intializing temp for swaping the value
    
    //reversing the string
    while(j<i/2)
    {
        temp = str[j];
        str[j] = str[i-j-1];
        str[i-j-1] = temp;
        
        j++;
    }

}

int main()
{
    int num = 0;       //input integer
    char str[20];  // output string

    printf("Enter a number : ");
    scanf("%d", &num);  // Read integer
    //printf("%d\n", num);
    my_itoa(num,str);
    // Print converted string
    printf("Integer to string is %s\n", str);
}