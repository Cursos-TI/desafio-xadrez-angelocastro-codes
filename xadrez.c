#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Para o programa ser portável (tanto para Windows como para Linux)
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

int main() {

    setlocale(LC_ALL, "Portuguese");
    int numeroCasas = 0;
    int opcao = 0;
    int direcaoMovimento = 0;
    
    do {
        printf("Escolha uma opção\n");
        printf("1 - Movimentar a Torre\n");
        printf("2 - Movimentar o Bispo\n");
        printf("3 - Movimentar a Rainha\n");
        printf("4 - Sair\n\n");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: // Movimentar a torre
                printf("Simulando o Movimento da Torre\n");
                printf("Quantas casas a torre deve avançar?\n");
                scanf("%d", &numeroCasas);

                printf("Escolha a direção do movimento\n\n");
                printf("1 - Para Cima\n");
                printf("2 - Para Baixo\n");
                printf("3 - Para a Esquerda\n");
                printf("4 - Para a Direita\n\n");
                scanf("%d", &direcaoMovimento);

                switch(direcaoMovimento) {
                    case 1:
                        for (int i = 0; i < numeroCasas; i++){    
                            printf("Cima\n");
                        }
                        break;
                    case 2:
                        for (int i = 0; i < numeroCasas; i++){    
                            printf("Baixo\n");
                        }
                        break;
                    case 3:
                        for (int i = 0; i < numeroCasas; i++){    
                            printf("Esquerda\n");
                        }
                        break;
                    case 4:
                        for (int i = 0; i < numeroCasas; i++){    
                            printf("Direita\n");
                        } 
                        break;
                    default:
                        printf("Opção inválida!");                                               

                }
                printf("\nConcluído o movimento da torre\n\n");
                break;
            
            case 2: // Movimentar o Bispo
                printf("\n\nSimulando o Movimento do Bispo\n");
                printf("Quantas diagonais o Bispo deve avançar?\n");
                scanf("%d", &numeroCasas);

                printf("Escolha a direção do movimento\n\n");
                printf("1 - Para Cima e Esquerda\n");
                printf("2 - Para Cima e Direita\n");
                printf("3 - Para Baixo e Esquerda\n");
                printf("4 - Para Baixo e Direita\n\n");
                scanf("%d", &direcaoMovimento);

                switch(direcaoMovimento) {
                    case 1: // Para cima e esquerda
                        for (int i = 0; i < numeroCasas; i++){    
                            printf("Cima Esquerda\n");
                        }
                        break;
                    case 2: // Para cima e direita
                        for (int i = 0; i < numeroCasas; i++){    
                            printf("Cima Direita\n");
                        }
                        break;
                    case 3: // Para baixo e esquerda
                        for (int i = 0; i < numeroCasas; i++){    
                            printf("Baixo Esquerda\n");
                        }
                        break;
                    case 4: // Para baixo e direita
                        for (int i = 0; i < numeroCasas; i++){    
                            printf("Baixo Direita\n");
                        } 
                        break;
                    default:
                        printf("Opção inválida!");                                               

                }
                printf("\nConcluído o movimento do Bispo\n\n");
                break;

            case 3: // Movimentar a Rainha
                printf("\n\nSimulando o Movimento da Rainha\n");
                printf("A Rainha deve se movimentar quantas casas?\n");
                scanf("%d", &numeroCasas);

                printf("Escolha a direção do movimento\n\n");
                printf("1 - Para Cima\n");
                printf("2 - Para Baixo\n");
                printf("3 - Para a Esquerda\n");
                printf("4 - Para a Direita\n");
                printf("5 - Para Cima e Esquerda\n");
                printf("6 - Para Cima e Direita\n");
                printf("7 - Para Baixo e Esquerda\n");
                printf("8 - Para Baixo e Direita\n\n");
                scanf("%d", &direcaoMovimento);

                switch(direcaoMovimento) {
                    case 1: // Para cima
                        for (int i = 0; i < numeroCasas; i++) {
                            printf("Cima\n");
                        }
                        break;                       
                    case 2: // Para baixo
                        for (int i = 0; i < numeroCasas; i++) {
                            printf("Baixo\n");
                        }
                        break;
                    case 3: // Para a esquerda
                        for (int i = 0; i < numeroCasas; i++) {
                            printf("Esquerda\n");
                        }
                        break;
                    case 4: // Para a direita
                        for (int i = 0; i < numeroCasas; i++) {
                            printf("Direita\n");
                        }
                        break;
                    case 5: // Para cima e esquerda
                        for (int i = 0; i < numeroCasas; i++){    
                            printf("Cima Esquerda\n");
                        }
                        break;
                    case 6: // Para cima e direita
                        for (int i = 0; i < numeroCasas; i++){    
                            printf("Cima Direita\n");
                        }
                        break;
                    case 7: // Para baixo e esquerda
                        for (int i = 0; i < numeroCasas; i++){    
                            printf("Baixo Esquerda\n");
                        }
                        break;
                    case 8: // Para baixo e direita
                        for (int i = 0; i < numeroCasas; i++){    
                            printf("Baixo Direita\n");
                        } 
                        break;
                    default:
                        printf("Opção inválida!");                                               

                }
                printf("\nConcluído o movimento da Rainha\n\n");
                break;

            case 4: // Sair do programa
                printf("Saindo...\n");
                // Comando para esperar 3 segundos
                #ifdef _WIN32
                    Sleep(1000); // Se Windows, usar milissegundos)
                #else
                    sleep(1);    // Se Linux e McOS, usar segundos
                #endif
                
                exit(0); // Comando para sair do programa

            default:
                printf("Opção inválida! Digite números de 1 a 4\n\n");
        }

    } while (opcao !=4);

    return 0;
}
