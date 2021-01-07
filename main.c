#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;

    printf("Enter two int \n");
    scanf("%d%d",&x, &y);

    printf("swap x and y \n");

    z = x;
    x = y;
    y = z;

    printf("swapped value of x is :%d and y is: %d ", x, y);

    return 0;
}
