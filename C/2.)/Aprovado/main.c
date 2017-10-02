#include <stdio.h>
#include <stdlib.h>

// Programa que recebe 3 notas e checa se o aluno foi aprovado

main()
{
    float nota1, nota2, nota3, media;
    char nome[20];
    printf("Digite o nome do aluno: ");
    scanf("%s", &nome);
    printf("Digite a primeira nota: \n");
            scanf("%f", &nota1);
            printf("Digite a segundaa nota: \n");
           scanf("%f", &nota2);
            printf("Digite a terceira nota: \n");
           scanf("%f", &nota3);
           media <- (nota1+nota2+nota3/3);
           if (media>=6) {
            printf("Parabens, %s, voce foi aprovado\n\n", nome);
           }
           else {
               printf("Infelizmente, %s, voce foi reprovado\n\n", nome);

    }
           }

