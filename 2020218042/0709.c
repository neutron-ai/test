//********************************************
//File name:0709.c
//Author   :钟梓硕
//Data     :2020/11/19
//Student ID:2020218042
//********************************************

#include "0709.h"

int main(void)
{
    float x, y, cosx, sinx;
    float (*p)(float);
    printf("Please enter x and y:\n");
    scanf("%f%f", &x, &y);

    x = x * PI / 180;
    p = si;
    sinx = (*p)(x);
    y = y * PI / 180;
    p = co;
    cosx = (*p)(y);

    printf("sinx = %f, cosx = %f\n", sinx, cosx);
    printf("sinx + cosy = %f", sinx + cosx);

    return 0;
}

float si(float x)
{
    float fsum, t, a;
    int i;

    t = x;
    fsum = 0.0f;
    a = x;
    for (i = 1; a > 1e-6; i += 2)
    {
        fsum = fsum + t;
        t = -1 * t * x * x / ((i + 1) * (i + 2));
        if (t > 0)
        {
            a = t;
        }
        else
        {
            a = -1 * t;
        }
    }

        return fsum;
}

float co(float x)
{
    float fsum, t, a;
    int i;

    t = 1;
    fsum = 0.0f;
    a = x;
    for (i = 1; a > 1e-6; i += 2)
    {
        fsum = fsum + t;
        t = -1 * t * x * x / (i * (i + 1));
        if (t > 0)
        {
            a = t;
        }
        else
        {
            a = -1 * t;
        }
    }

    return fsum;
}