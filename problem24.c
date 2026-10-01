#include <stdio.h>

int main() {
     int n, i;
     printf("Enter a number : ");
     scanf("%d", &n);

     printf("All the ODD NUMBERS from 1 to %d are: \n", n );

     for ( i = 1; i <= n; i+= 2)
     {
        printf("%d\n", i);
     }
     


    return 0;
}