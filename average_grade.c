#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int grade1, grade2, grade3;
    printf("Please input 3 grades:\n");
    scanf("%i %i %i", &grade1, &grade2, &grade3);
    printf("The average grade is: %f\n", (float)(grade1 + grade2 + grade3)/ 3);
    return 0;
}