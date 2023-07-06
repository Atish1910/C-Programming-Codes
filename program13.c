// Display "Jay Ganesh" 5 times on screen with user input with filter 

#include<stdio.h>


//////////////////////////////////////////////////////////////////////////
//
//  Function name :     Function Outside the main Function with user input with filter 
//  Input :             Integer
//  Output :            Char
//  Description :       Display "Jay Ganesh" 5 times on screen  
//  Author :            Ashish vinayak kamble
//  Date :              25/04/2023
//
//////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)     // Filter
    {
        printf("Please enter the positive number\n");
        return;
    }

    //      1          2        3
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("Jay Ganesh...\n");      // 4
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency of Jay Ganesh statement : \n");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}