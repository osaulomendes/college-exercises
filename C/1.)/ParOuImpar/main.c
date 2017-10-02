#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    while (num!=0) {
    printf("Digite um numero (digite 0 pra parar): ");
    scanf("%D", &num);

    if (num%2 > 0) {
        printf("O numero eh impar\n");
    }
    else {
        printf("O numero eh par\n");
    }
    }
}
