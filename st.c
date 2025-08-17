#include <stdio.h>

int main() {
    //Armazenando os dados de ambas as cartas
    char estado, estado2; 
    char codigo[4], codigo2[4];
    char nome[50], nome2 [50];
    int pop, pop2;
    float area, area2;
    float pb, pb2;
    int ponto, ponto2;

    //Recolhendo os dados da carta 01
    printf ("Carta 01\n");

    printf ("Estado (A-H):");
    scanf (" %c", &estado);

    printf ("Código da carta (EX: A01):");
    scanf ("%3s", codigo);

    printf ("Nome da Cidade:");
    scanf (" %49[^\n]", nome);

    printf ("População:");
    scanf ("%d", &pop);

    printf ("Área em km²:");
    scanf ("%f", &area);

    printf ("PIB:");
    scanf ("%f", &pb);

    printf ("Número de pontos turísticos:");
    scanf ("%d", &ponto);

    //Recolhendo dos dados da carta 02
    printf ("Carta 02\n");

    printf ("Estado (A-H):");
    scanf (" %c", &estado2);

    printf ("Código da carta (EX: A01):");
    scanf ("%3s", codigo2);

    printf ("Nome da Cidade:");
    scanf (" %49[^\n]", nome2);

    printf ("População:");
    scanf ("%d", &pop2);

    printf ("Área em km²:");
    scanf ("%f", &area2);

    printf ("PIB:");
    scanf ("%f", &pb2);

    printf ("Número de pontos turísticos:");
    scanf ("%d", &ponto2);

// EXIBINDO AS INFORMAÇÕES DAS CARTAS
    printf ("EXIBINDO INFORMAÇÕES DAS CARTAS\n");
    printf ("Carta 01\n");
    printf ("O estado é: %c\n", estado);
    printf ("O Código da carta é: %s\n", codigo);
    printf ("O nome da cidade é: %s\n", nome);
    printf ("População: %d\n", pop);
    printf ("Área em KM²: %.2f KM²\n", area);
    printf ("PIB: %.2f bilhões de reais\n", pb);
    printf ("Número de pontos turísticos: %d\n", ponto);

    printf ("Carta 02\n");
    printf ("O estado é: %c\n", estado2);
    printf ("O Código da carta é: %s\n", codigo2);
    printf ("O nome da cidade é: %s\n", nome2);
    printf ("População: %d\n", pop2);
    printf ("Área em KM²: %.2f KM²\n", area2);
    printf ("PIB: %.2f bilhões de reais\n", pb2);
    printf ("Número de pontos turísticos: %d\n", ponto2);
    return 0;

}
