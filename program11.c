// Display "Jay Ganesh" 5 times on screen (Outside main function)
 
#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function name :     Function Outside the main Function
//  Input :             Integer
//  Output :            Char
//  Description :       Display "Jay Ganesh" 5 times on screen  
//  Author :            Ashish vinayak kamble
//  Date :              25/04/2023
//
//////////////////////////////////////////////////////////////////////////

void Display()
{
    int iCnt = 0;
    //      1          2        3
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("Jay Ganesh...\n");      // 4
    }
}

int main()
{
    Display();
    
    return 0;
}