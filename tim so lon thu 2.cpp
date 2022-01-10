#include <stdio.h>

int main()
{
    long long a, b, c, d, tam, max;

    printf("Nhap a, b, c, d: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if (a > b)
    {
        tam = a;
        a = b;
        b = tam;
    }
    if (a > c)
    {
        tam = a;
        a = c;
        c = tam;
    }
    if (a > d)
    {
        tam = a;
        a = d;
        d = tam;
    }
    if (b > c)
    {
        tam = b;
        b = c;
        c = tam;
    }
    if (b > d)
    {
        tam = b;
        b = d;
        d = tam;
    }
    if (c > d)
    {
        tam = c;
        c = d;
        d = tam;
    }

    max = d;

    if (c < max)
        printf("%lld\n", c);
    else
        if (b < max)
            printf("%lld\n", b);
        else
            if (a < max)
                printf("%lld\n", a);
            else
                printf("Khong thoa man\n");
    return 0;            
} 
