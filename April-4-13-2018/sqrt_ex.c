#include <stdio.h>
#include <math.h>

int main()
{
    float num = 0;
    printf("%s please enter the number\n", __func__);
    scanf("%f", &num);
    float val = sqrt(num);
    printf("get num %f, its square root %f, val^2 %f\n", num, val, val*val);

    float diff = num - val*val;
    printf("diff(num - sqrt-root^2) %f\n", diff);
    return 0;
}
