#include <stdio.h>
void main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("The first 10 multiples of %d are:\n", a);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d \n", a * i);
    }
}