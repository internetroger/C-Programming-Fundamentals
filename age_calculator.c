#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int year;
    int age;
    printf("What is the current year?\n");
    scanf("%d", &year);
    printf("What is your age?\n");
    scanf("%d", &age);
    printf("You were born in %d\n", year - age);
    return 0;
}