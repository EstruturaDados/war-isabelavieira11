// ============================================================================
//         PROJETO WAR ESTRUTURADO - DESAFIO DE CÓDIGO
// ============================================================================
//   

#include <stdio.h>
#include <string.h>

// Definindo a estrutura Territorio
typedef struct {
    char nome[30];           // Nome do território
    char corExercito[10];    // Cor do exército dominante
    int numeroTropas;        // Número de tropas no território
} Territorio;

int main() {
    // Criando um vetor estático com 5 elementos do tipo Territorio
    Territorio mapa[5];

    // Loop para cadastrar os dados de cada território
    for (int i = 0; i < 5; i++) {
        printf("Cadastro do Território %d:\n", i + 1);

        // Leitura do nome do território
        printf("Nome do território: ");
        fgets(mapa[i].nome, sizeof(mapa[i].nome), stdin);
        mapa[i].nome[strcspn(mapa[i].nome, "\n")] = '\0'; // Remove o '\n' do final

        // Leitura da cor do exército
        printf("Cor do exército dominante: ");
        fgets(mapa[i].corExercito, sizeof(mapa[i].corExercito), stdin);
        mapa[i].corExercito[strcspn(mapa[i].corExercito, "\n")] = '\0';

        // Leitura do número de tropas
        printf("Número de tropas: ");
        scanf("%d", &mapa[i].numeroTropas);
        getchar(); // Limpa o buffer do teclado após scanf

        printf("\n");
    }

    // Exibição organizada do estado atual do mapa
    printf("=== Estado Atual do Mapa ===\n");
    for (int i = 0; i < 5; i++) {
        printf("Território %d:\n", i + 1);
        printf("Nome: %s\n", mapa[i].nome);
        printf("Cor do Exército: %s\n", mapa[i].corExercito);
        printf("Número de Tropas: %d\n", mapa[i].numeroTropas);
        printf("--------------------------\n");
    }

    return 0;
}