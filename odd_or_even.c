#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int num;
    printf("Please enter an integer: \n");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
    

    return 0;
}