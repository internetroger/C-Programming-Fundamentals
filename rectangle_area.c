#include <stdio.h>
#include <stdlib.h>

int main() 
{
    double height;
    double width;
    printf("What is the rectangle's height?\n");
    scanf("%lf", &height);
    printf("What is the rectangle's width?\n");
    scanf("%lf", &width);
    printf("The rectangle's area is %lf\n", width * height);
    return 0;
}