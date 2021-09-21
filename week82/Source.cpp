#include <stdio.h>
int main() {
    int A, B, C, D, E, F, G, H, I, J;
    float averag;
    printf("Input height : ");
    scanf_s("%d%d%d%d%d%d%d%d%d%d", &A, &B, &C, &D, &E, &F, &G, &H, &I, &J);
    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", A, B, C, D, E, F, G, H, I, J);
    averag = (A + B + C + D + E + F + G + H + I + J) / 10;
    printf("averag  %.2f cm", averag);
    return 0;

}