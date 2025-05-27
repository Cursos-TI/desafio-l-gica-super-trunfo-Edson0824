#include <stdio.h>
#include <string.h>

typedef struct {
    char estado[50];
    int codigo;
    char nome[50];
    long populacao;
    double area;
    double pib;
    int pontos_turisticos;
} CartaCidade;

// Função para exibir os dados da carta
void mostrarCarta(CartaCidade c) {
    printf("Código: %d\n", c.codigo);
    printf("Cidade: %s\n", c.nome);
    printf("Estado: %s\n", c.estado);
    printf("População: %ld\n", c.populacao);
    printf("Área (km²): %.2lf\n", c.area);
    printf("PIB (em milhões): %.2lf\n", c.pib);
    printf("Pontos Turísticos: %d\n", c.pontos_turisticos);
    printf("\n");
}

int main() {
    CartaCidade carta1, carta2;
    int atributo;

    printf("Cadastro da Carta 1:\n");
    printf("Estado: ");
    fgets(carta1.estado, sizeof(carta1.estado), stdin);
    carta1.estado[strcspn(carta1.estado, "\n")] = '\0'; // remover \n

    printf("Código da carta: ");
    scanf("%d", &carta1.codigo);

    getchar(); // limpar buffer

    printf("Nome da cidade: ");
    fgets(carta1.nome, sizeof(carta1.nome), stdin);
    carta1.nome[strcspn(carta1.nome, "\n")] = '\0';

    printf("População: ");
    scanf("%ld", &carta1.populacao);

    printf("Área (km²): ");
    scanf("%lf", &carta1.area);

    printf("PIB (em milhões): ");
    scanf("%lf", &carta1.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    getchar(); // limpar buffer

    printf("\nCadastro da Carta 2:\n");
    printf("Estado: ");
    fgets(carta2.estado, sizeof(carta2.estado), stdin);
    carta2.estado[strcspn(carta2.estado, "\n")] = '\0';

    printf("Código da carta: ");
    scanf("%d", &carta2.codigo);

    getchar(); // limpar buffer

    printf("Nome da cidade: ");
    fgets(carta2.nome, sizeof(carta2.nome), stdin);
    carta2.nome[strcspn(carta2.nome, "\n")] = '\0';

    printf("População: ");
    scanf("%ld", &carta2.populacao);

    printf("Área (km²): ");
    scanf("%lf", &carta2.area);

    printf("PIB (em milhões): ");
    scanf("%lf", &carta2.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Escolher atributo para comparação
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n");
    printf("Digite o número do atributo: ");
    scanf("%d", &atributo);

    printf("\nCarta 1:\n");
    mostrarCarta(carta1);

    printf("Carta 2:\n");
    mostrarCarta(carta2);

    // Comparação com if e if-else
    printf("Resultado da comparação:\n");
    if (atributo == 1) { // População (menor vence)
        if (carta1.populacao < carta2.populacao) {
            printf("Carta 1 vence (menor população)\n");
        } else if (carta1.populacao > carta2.populacao) {
            printf("Carta 2 vence (menor população)\n");
        } else {
            printf("Empate na população\n");
        }
    } else if (atributo == 2) { // Área (maior vence)
        if (carta1.area > carta2.area) {
            printf("Carta 1 vence (maior área)\n");
        } else if (carta1.area < carta2.area) {
            printf("Carta 2 vence (maior área)\n");
        } else {
            printf("Empate na área\n");
        }
    } else if (atributo == 3) { // PIB (maior vence)
        if (carta1.pib > carta2.pib) {
            printf("Carta 1 vence (maior PIB)\n");
        } else if (carta1.pib < carta2.pib) {
            printf("Carta 2 vence (maior PIB)\n");
        } else {
            printf("Empate no PIB\n");
        }
    } else if (atributo == 4) { // Pontos turísticos (maior vence)
        if (carta1.pontos_turisticos > carta2.pontos_turisticos) {
            printf("Carta 1 vence (maior número de pontos turísticos)\n");
        } else if (carta1.pontos_turisticos < carta2.pontos_turisticos) {
            printf("Carta 2 vence (maior número de pontos turísticos)\n");
        } else {
            printf("Empate no número de pontos turísticos\n");
        }
    } else {
        printf("Opção inválida\n");
    }

    return 0;
}
    
