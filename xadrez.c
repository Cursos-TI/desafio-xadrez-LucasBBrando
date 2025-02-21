#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

//    return 0;
//}
void bispoMove(int walkBispo){
    int upBispo = 0;
    int dBispo = 0;
    if(walkBispo > 0){
        for(int x= 0; x < 1; x++){
            printf("Cima|^| ");
            for(int z = 0; z < 1; z++){
                printf("Direita=>\n");
            }
        }
        upBispo + 1;
        dBispo + 1; 
        bispoMove(walkBispo - 1);
    }
}


int main(){
    
    //Movimento do Bispo
    printf("Movimento da Bispo:\n");
    int passBispo = 5;
    bispoMove(passBispo);
    
    printf("\n");

    //Movimento da Torre
    printf("Movimento da Torre:\n");
    for(int T = 0; T < 5; T++){
        printf("Direita =>\n");
    }

    printf("\n");

    //Movimento da Rainha
    printf("Movimento da Rainha:\n");
    for(int R = 0; R < 8; R++){
        printf("Esquerda<=\n");
    }
    
    printf("\n");

    //Movimento do Cavalo
    printf("Movimento da Cavalo:\n");
    for(int H = 1; H < 4; H++){
        printf("Cima|^|\n");
        if(H == 3){
            do{
                printf("Direita=>\n");
                break;
            }while(H <= 3);
            
        }
    }

}
