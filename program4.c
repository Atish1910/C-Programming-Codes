

/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Wriete a program which performs addition of two numbers
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Addition
//  Input :         Unsigned integer, Unsigned integer
//  Output :        Unsigned integer
//  Description :   Performs addition of 2 numbers
//  Author :        Ashish vinayak kamble
//  Date :          18/04/2023
//
/////////////////////////////////////////////////////////////////////////////////

unsigned int Addition(unsigned int iValue1, unsigned int iValue2)
{
    unsigned int iResult = 0;
    iResult = iValue1 + iValue2;
    return iResult;
}

/////////////////////////////////////////////////////////////////////////////////
//  Entry Point function
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    unsigned int iNo1 = 0, iNo2 = 0, iAns = 0;

    printf("Enter first number : \n");
    scanf("%d",&iNo1);

    printf("Enter second number : \n");
    scanf("%d",&iNo2);

    iAns = Addition(iNo1, iNo2);

    printf("Addition is : %d \n",iAns);

    return 0;
}