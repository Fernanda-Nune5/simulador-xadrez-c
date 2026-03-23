#include <stdio.h>

int main()
{

    int horBispo = 1, vertBispo = 1, movRainha = 1, movTorre;

    // A o estrutura de repetição será o for para a peça Torre, essa peça tem que mover 5 vezes para a direita.

    printf("Peça: Torre\n");
    for (movTorre = 1; movTorre <= 5; movTorre++)
    {
        printf("Direita: %d° posição\n", movTorre);
    }
    // Espaço usado somente para estética do código.
    printf("\n\n");

    // o peça é o Bispo com o uso do while para os movimentos, o Bispo deverá se mover 5 vez na diagonal para cima e direita.
    // Os eixos são usados para o usuário saber que a peça está se movendo diagonalmente, mas ainda fazendo o movimento simples de ir o cima e o a direita.

    printf("Peça: Bispo\n");
    while (horBispo <= 5 && vertBispo <= 5)
    {
        printf("Movimento diagonal: cima, direita (%d, %d)\n", horBispo, vertBispo);
        horBispo++;
        vertBispo++;
    }

    // Espaço usado somente para estética do código.
    printf("\n\n");

    // Última peça é a rainha que tem mais liberdade nos movimentos, aqui ela irá se mmover 8 casas para a esquerda usando a estrutura de repetição do-while.
    printf("Peça: Rainha\n");

    do
    {
        printf("Esquerda: %d° posição\n", movRainha);
        movRainha++;
    } while (movRainha <= 8);

    return 0;
}
