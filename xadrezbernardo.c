#include <stdio.h>

int main() {
    
    int i = 1;

    printf("bispo:\n");

while (i <= 5);{
    printf("%d - direita\n", i);

i++;
}

printf("\n");
printf ("o bispo moveu 5 casas para a diagonal superior. saindo ...\n");
printf("\n");

i = 0;

printf ("torre:\n");

do {
    if (i % 2 != 0){

        printf ("%d - cima direita \n", i);

    }


    i++;

}while (i <= 10);

printf("\n");
printf("a torre moveu 5 casas para a direita. saindo...\n");
printf ("\n");

printf ("rainha:\n");

for (i - 0; i>= -8; i--){
    if (i < 0){
        printf ("%d - esquerda\n, i");
        }

        printf ("\n");
        printf("a rainha moveu 8 casas para a esquerda. saindo...\n");
        printf ("\n");

        return 0;
}