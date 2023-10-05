#include <stdio.h>

int pangkat(int base, int power)
{
    int temp = base;

    for (int i = 1; i < power; i++)
    {
        temp = temp * base;
    }
    return temp;
}

int main()
{
    int base, power, res;
    printf("Program untuk melakukan operasi perpangkatan\n");
    printf("-----------------------------------------------\n");
    printf("Format input A B untuk A^B\n");
    printf("-----------------------------------------------\n");
    scanf("%i %i", &base, &power);
    res = pangkat(base, power);
    printf("%i^%i = %i", base, power, res);
}