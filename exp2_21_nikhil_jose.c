/***************************************************
* File           : Experiment 2.21
* Description    : C Program to find the number and sum of all intiger between 100&200 which are divisible by 9
* Author         : Nikhil Jose
* Version        : 1.0
* Date           : 05/08/2021
* **************************************************/
#include <stdio.h>
int main()
{
    int i, sum = 0;
    printf("\nNumbers between 100&200 which is divisible by 9:\n");

    for (i = 101; i < 200; i++)
    {
        if (i % 9 == 0)
        {
            printf("%d", i);
            sum = sum + i;
        }
    }
    printf("\nThe sum is %d", sum);

    return 0;
}