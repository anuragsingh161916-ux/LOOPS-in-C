#include <stdio.h>

int main() {
    int n , i;
    printf("Enter a number : ");
    scanf("%d", &n);

    printf("All the EVEN NUMBERS from 1 to %d are : \n", n);

    for(i=2; i<=n; i+= 2)
    {
        printf("%d\n",i);
    }





    return 0;
}