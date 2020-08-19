#include <stdio.h>
#include <stdlib.h>

int main() 
{
    double temp;
    int selection;
    printf("Please enter a temperature:\n");
    scanf("%lf", &temp);
    printf("Is this fahrenheit or celsius?\n");
    printf("0 for celsius or 1 for fahrenheit\n");
    scanf("%d", &selection);
    if (selection == 0)
    {
        temp = temp * 1.8 + 32;
        printf("That is %f in fahrenheit.\n", temp);
    } 
    else 
    {
        temp = (temp - 32) / 1.8;
        printf("That is %f in celsius.\n", temp);
    }
    
    return 0;
}