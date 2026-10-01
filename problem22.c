#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter a number : ");

    scanf("%d", &n);
    printf("All natural numbers from 1 to %d in reverse order are : ", n);
    for (i = n; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}