#include <stdio.h>
#include <stdlib.h>

#define A   0.5556
#define B   32
//#define F   200.0

int main()
{
    float f;
    scanf("%f", &f);
    //f=200;
    //printf("Nhiet do trong thang do F: %.2f\n", F);
    //printf("Nhiet do trong thang do C: %.2f\n", A*(F-B));
    printf("Nhiet do trong thang do F: %.2f\n", f);
    //printf("Nhiet do trong thang do C: %.2f\n", A*(f-B));
    float c = A*(f-B);
    printf("Nhiet do trong thang do C: %.2f\n", c);
    return 0;
}
