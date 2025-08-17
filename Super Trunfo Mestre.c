#include <stdio.h>

int main() {
    //Armazenando os dados de ambas as cartas
    char estado, estado2; 
    char codigo[4], codigo2[4];
    char nome[50], nome2 [50];
    unsigned long int pop, pop2;
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
    scanf ("%lu", &pop);

    printf ("Área em km²:");
    scanf ("%f", &area);

    printf ("PIB: (EM BILHÕES)");
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
    scanf ("%lu", &pop2);

    printf ("Área em km²:");
    scanf ("%f", &area2);

    printf ("PIB: (EM BILHÕES)");
    scanf ("%f", &pb2);

    printf ("Número de pontos turísticos:");
    scanf ("%d", &ponto2);

// CALCULANDO OS DADOS 

   float dens = pop / area;
   float dens2 = pop2 / area2;
   float pibpc = (pb * 1e9) / pop;
   float pibpc2 = (pb2 * 1e9) / pop2;

// CALCULANDO O SUPER PODER
    
    float spoder = (float)pop + area + pb + (float)ponto + pibpc + (1 / dens);
    float spoder2 = (float)pop2 + area2 + pb2 + (float)ponto2 + pibpc2 + (1 / dens2);

// EXIBINDO AS INFORMAÇÕES DAS CARTAS
    printf ("EXIBINDO INFORMAÇÕES DAS CARTAS\n");
    printf ("Carta 01\n");
    printf ("O estado é: %c\n", estado);
    printf ("O Código da carta é: %s\n", codigo);
    printf ("O nome da cidade é: %s\n", nome);
    printf ("População: %lu\n", pop);
    printf ("Área em KM²: %.2f KM²\n", area);
    printf ("PIB: %.2f bilhões de reais\n", pb);
    printf ("Número de pontos turísticos: %d\n", ponto);
    printf ("Densidade Populacional %.2f Habitantes/KM²\n", dens);
    printf ("PIB per Capita %.2f reais\n", pibpc);
    printf ("Super Poder: %f de poder\n", spoder);

    printf ("Carta 02\n");
    printf ("O estado é: %c\n", estado2);
    printf ("O Código da carta é: %s\n", codigo2);
    printf ("O nome da cidade é: %s\n", nome2);
    printf ("População: %lu\n", pop2);
    printf ("Área em KM²: %.2f KM²\n", area2);
    printf ("PIB: %.2f bilhões de reais\n", pb2);
    printf ("Número de pontos turísticos: %d\n", ponto2);
    printf ("Densidade Populacional %.2f Habitantes/KM²\n", dens2);
    printf ("PIB per Capita %.2f reais\n", pibpc2);
    printf ("Super Poder: %f de poder\n", spoder2);

//EXIBINDO RESULTADOS

    printf ("COMPARANDO AS CARTAS\n");
    printf ("1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence\n");
    printf ("População: Carta %d venceu (%d)\n", (pop > pop2) ? 1:2, pop > pop2);
    printf ("Área: Carta %d venceu (%d)\n", (area > area2) ? 1:2, area > area2);
    printf ("PIB: Carta %d venceu (%d)\n", (pb > pb2) ? 1:2, pb > pb2);
    printf ("Pontos turísticos: Carta %d venceu (%d)\n", (ponto > ponto2) ? 1:2, ponto > ponto2);
    printf ("Densidade Populacional: Carta %d venceu (%d)\n", (dens < dens2) ? 1:2, dens < dens2);
    printf ("PIB per Capita: Carta %d venceu (%d)\n", (pibpc > pibpc2) ? 1:2, pibpc > pibpc2);
    printf ("Super Poder: Carta %d venceu (%d)\n", (spoder > spoder2) ? 1:2, spoder > spoder2);
    return 0;


}