#include <stdio.h>
 
int main()
{
    long mul, number, k, ll, kk; 
    
    printf("It exists following automorphic numbers smaller than 200000:\n");
 
    for (number = 0; number < 200000; number++)
    {   
    
        for (mul = number, k = 1; (mul /= 10) > 0; k *= 10) 
        {
            ;
        }
        kk = k * 10; 
        mul = 0;
        ll = 10; 
        while(k > 0)
        {
            mul = (mul + (number % (k * 10)) * (number % ll - number % (ll / 10))) % kk; 
            k /= 10; 
            ll *=10;
        }
 
        if(number == mul)
        {
            printf("% ld ", number);
        }
    }   
    //printf("\n");
    putchar('\n');
    return 0;
}