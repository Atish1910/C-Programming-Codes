/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Wriete a program which performs addition of two numbers with user input
//
/////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Addition
//  Input :         integer, integer
//  Output :        integer
//  Description :   Performs addition of 2 numbers with user input
//  Author :        Ashish vinayak kamble
//  Date :          18/04/2023
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int No1 = 0;
    int No2 = 0;
    int Ans = 0;

    printf("Enter first number : \n");
    scanf("%d",&No1);

    printf("Enter second number : \n");
    scanf("%d",&No2);
    
    Ans = No1 + No2;

    printf("Addition is : %d\n",Ans);

    return 0;
}