#include <stdio.h>

/*
  Função: movTorre
  Objetivo: Simular o movimento da Torre em linha reta para a direita.
  Lógica: Função recursiva que imprime cada casa que a torre anda.
*/
void movTorre(int casasT){
    if (casasT > 0)
    {
        movTorre(casasT - 1); // chama a função diminuindo 1 casa
        printf("Torre andou %d casa(s) para a direita\n", casasT);
    }
}

/*
  Função: movBispo
  Objetivo: Simular o movimento do Bispo na diagonal (cima e direita).
  Lógica: Função recursiva que combina loops aninhados com a recursão.
          Cada passo da diagonal é impresso com contagem crescente.
*/
void movBispo(int casasV, int casasH) {
    if (casasV <= 0 || casasH <= 0)
        return; // condição de parada

    // loop externo - vertical (cima)
    for (int i = 0; i < 1; i++) { 
        // loop interno - horizontal (direita)
        for (int j = 0; j < 1; j++) { 
            int passo = 6 - casasV; // passo crescente, começando de 1
            printf("Passo %d - Movimento diagonal: cima, direita\n", passo);
            casasV--; // reduz casas verticais restantes
            casasH--; // reduz casas horizontais restantes
        }
    }

    movBispo(casasV, casasH); // chamada recursiva para continuar a diagonal
}

/*
  Função: movRainha
  Objetivo: Simular o movimento da Rainha em linha reta.
  Lógica: Função recursiva que imprime cada casa percorrida.
*/
void movRainha(int casasR){
    if (casasR > 0)
    {
        movRainha(casasR - 1);
        printf("Rainha andou %d casa(s)\n", casasR);
    }
}

/*
  Função: movCavalo
  Objetivo: Simular o movimento do Cavalo em "L" (duas casas para cima, uma para a direita).
  Lógica: Combina loops aninhados com recursão para controlar cada passo.
          A ordem de movimento é garantida: cima, cima, direita.
*/
void movCavalo(int cima, int direita) {
    if (cima <= 0 && direita <= 0)
        return; // condição de parada

    // loop vertical - percorre todas as casas para cima
    for (int i = 0; i < cima; i++) {
        printf("Cavalo andou: cima\n");
    }

    // loop horizontal - percorre todas as casas para a direita
    for (int j = 0; j < direita; j++) {
        printf("Cavalo andou: direita\n");
    }

    // chamada recursiva caso queira executar outro movimento em L no futuro
    return;
}

int main(){
    // Torre
    printf("*****Peça: Torre*****\n");
    movTorre(5);

    // Bispo
    printf("\n\n*****Peça: Bispo*****\n");
    movBispo(5, 5);

    // Rainha
    printf("\n\n*****Peça: Rainha*****\n");
    movRainha(8);

    // Cavalo
    printf("\n\n*****Peça: Cavalo*****\n");
    movCavalo(2,1);

    return 0;
}