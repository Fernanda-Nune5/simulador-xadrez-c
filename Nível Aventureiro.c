#include <stdio.h>  

int main()
{
//A parte do código em que as peças são Torre, Rainha e Bispo foram someente repetidas do código de Nível Novato, agora será incrementado a peça do Cavalo.
    int horBispo = 1, vertBispo = 1, movRainha = 1, movTorre;
//As variáveis são movCavalo2 para a movimentação de 2 casas da peça e movCavalo1 é a movimentação de 1 casa.
    int movCavalo1;

    // A o estrutura de repetição será o for para a peça Torre, essa peça tem que mover 5 vezes para a direita.

    printf("*****Peça: Torre*****\n");
    for (movTorre = 1; movTorre <= 5; movTorre++)
    {
        printf("Direita: %d° posição\n", movTorre);
    }
    // Espaço usado somente para estética do código.
    printf("\n\n");

    //A peça é o Bispo com o uso do while para os movimentos, o Bispo deverá se mover 5 vez na diagonal para cima e direita.
    // Os eixos são usados para o usuário saber que a peça está se movendo diagonalmente, mas ainda fazendo o movimento simples de ir o cima e o a direita.

    printf("*****Peça: Bispo*****\n");
    while (horBispo <= 5 && vertBispo <= 5)
    {
        printf("Movimento diagonal: cima, direita (%d, %d)\n", horBispo, vertBispo);
        horBispo++;
        vertBispo++;
    }

    // Espaço usado somente para estética do código.
    printf("\n\n");

    // Última peça é a rainha que tem mais liberdade nos movimentos, aqui ela irá se mmover 8 casas para a esquerda usando a estrutura de repetição do-while.
    printf("*****Peça: Rainha*****\n");

    do
    {
        printf("Esquerda: %d° posição\n", movRainha);
        movRainha++;
    } while (movRainha <= 8);

// Espaço usado somente para estética do código.
    printf("\n\n");

//A movimentação do cavalo é em L, duas casa para cima, baixo e uma para esquerda direita.
    printf("*****Peça: Cavalo*****\n");

//Primeiro é usado um for para a última movimentação do cavalo que é uma casa para a esquerda ou direita.
    for (movCavalo1 = 1; movCavalo1 <= 1; movCavalo1++)
    {
        int  movCavalo2 = 1;
        while (movCavalo2 <=2)
        {
            printf("Baixo\n");
            movCavalo2++;
        }
    printf("Esquerda\n");     
    }
    
    return 0;
}