#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}

#include <stdio.h>

// iniciando a estrutura das carta
typedef struct cidade {
    int populacao;
    float area;
    float pib;
    int pontos_turisticos; 
} cidade; 


int main() {
    //entrada de duas cartas Cidade1, Cidade2;

    //dados carta1

    cidade carta1, carta2;

    printf("cadastro da carta A01:\n") ;
    printf("populacao:") ;
    scanf("%d",&carta1.populacao) ;
    printf("area: ") ;
    scanf("%f", &carta1.area) ;
    printf("PIB: ") ;
    scanf("%f", &carta1.pib) ;
    printf("pontos turisticos: ") ;
    scanf("%d", &carta1.pontos_turisticos) ;

    // dados da carta2
    printf("\ncadastro da carta B02:\n") ;
    printf("populacao") ;
    scanf("%d", &carta2.populacao) ;
    printf("area: ");
    scanf("%f", &carta2.area) ;
    printf("PIB: ") ;
    scanf("%f", &carta2.pib) ;
    printf("pontos turisticos") ;
    scanf("%d", &carta2.pontos_turisticos);

    //dados cadastrados
    printf("\ndados cadastrados:\n") ;

//dados carta 1
    printf("n\carta A01:\n") ;
    printf("populacao: %d\n", carta1.populacao) ;
    printf("area: %.2f\n", carta1.area) ;
    printf("PIB: %.2f\n", carta1.pib) ;
    printf("pontos turisticos: %d\n", carta1.pontos_turisticos) ;


//dados carta 1
    printf("n\carta B02:\n") ;
    printf("populacao: %d\n", carta2.populacao) ;
    printf("area: %.2f\n", carta2.area) ;
    printf("PIB: %.2f\n", carta2.pib) ;
    printf("pontos turisticos: %d\n", carta2.pontos_turisticos) ;

    return 0;


   

}
