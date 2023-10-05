#include <stdio.h>
int deretBil(int n){
    if(n == 1){
        return 1;
    }
    return n*n+deretBil(n-1);
}

int main()
{
    int n;
    printf("Masukkan Suku ke 'n': ");
    scanf("%d", &n);
    int hasil = deretBil(n);
    printf("%d", hasil);
}