#include <stdio.h>
void main() {
    int a, b, lcm;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    lcm = (a > b) ? a : b;
    while (1)
     {
        if (lcm % a == 0 && lcm % b == 0)
        {
            printf("%d", lcm);
            break;
        }
        lcm++;
    }
}
