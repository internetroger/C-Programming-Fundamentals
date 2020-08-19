#include <stdio.h>
#include <stdlib.h>

int main() 
{
    float num1;
    float num2;
    printf("Please enter two floating point numbers:\n");
    scanf("%f %f", &num1, &num2);
    if (num1 > num2)
    {
        printf("%f is greater than %f", num1, num2);
    }
    else
    {
        printf("%f is greater than %f", num2, num1);
    }
    
    return 0;
}