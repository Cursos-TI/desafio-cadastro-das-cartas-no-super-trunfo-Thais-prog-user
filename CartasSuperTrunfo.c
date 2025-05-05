#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das cartas do jogo.
// Este código serve para o jogador fazer a escolha de quais atributos ele vai comparar.

int main() {
    // Definições de variáveis para cada atributo das cidades.
    char estado1 = 'A', estado2 = 'B';
    char codigo1[10] = "A01", codigo2[10] = "B01";
    char nomeCidade1[20] = "Contagem", nomeCidade2[20] = "Gramado";
    float populacao1 = 621.863, populacao2 = 40.134;
    float area1 = 194.746, area2 = 239.341;
    float pib1 = 36.479, pib2 = 2.658;
    int pontosTuristicos1 = 6 , pontosTuristicos2 = 35;
    float quociente1 = populacao1 / area1;
    float quociente2 = populacao2 / area2;
    float pibPerCapita1 = pib1 / populacao1;
	float pibPerCapita2 = pib2 / populacao2; 
	int escolhaJogador;
	
    
    // Exibição dos dados das duas Cartas
    printf("*** Cartas do jogo! ***\n");
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("Populacao: %.3f\n", populacao1);
    printf("Area ocupada: %.3f km²\n", area1);
    printf("PIB: R$ %.2f bilhoes de reais\n", pib1);
    printf("Quantidade de pontos turisticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f\n", quociente1);
    printf("PIB per capita: %.2f\n" , pibPerCapita1);

    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("Populacao: %.3f\n", populacao2);
    printf("Area ocupada: %.3f km²\n", area2);
    printf("PIB: R$ %.2f milhoes de reais\n", pib2);
    printf("Quantidade de pontos turisticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f\n" , quociente2);
    printf("PIB per capita: %.2f\n" , pibPerCapita2);
    
    
    if(pib1 < pib2){
		printf("\nPIB de Contagem e menor do que o PIB de Gramado\n");
	}
	
	
	//Início dos resultados das comparações das cartas
	printf("\n*** Vamos jogar! ***\n");
    printf("\nSelecione o poder a ser comparado:\n");
    
	printf("\n1. Populacao\n");
	printf("2. Area\n");
	printf("3. PIB\n");
	printf("4. Pontos turisticos\n");
	printf("5. Desidade populaional\n");
	printf("6. PIB per capita\n");
	printf("\nEscolha: ");
    scanf("%d", &escolhaJogador);
    
    
    switch(escolhaJogador)
	{
	case 1:
		printf("1. Populacao - \n");
		break;
	case 2:
		printf("2. Area - \n");
		break;
	case 3:
		printf("3. PIB - \n");
		break;
	case 4:
		printf("4. Pontos turisticos - \n");
		break;
	case 5:
		printf("5. Densidade populacional - \n");
		break;
	case 6: 
		printf("6. PIB per capita - \n");
		break;
	default:	
		printf("Opcao invalida!\n");
		break;
	}
   
   if (escolhaJogador == 1) 
   {
   	printf("Carta 1 venceu! Populacao de Contagem: 621.863\n");
   } 
   if (escolhaJogador == 2)
   {
   	printf("Carta 2 venceu! Area de Gramado: 239.341\n");
   } 
   if (escolhaJogador == 3)
   {
   	printf("Carta 1 venceu! PIB de Contagem: 36.48\n");
   }
   if (escolhaJogador == 4)
   {
   	printf("Carta 2 venceu! Pontos turisticos de Gramado: 35\n");
   }
   if (escolhaJogador == 5)
   {
   	printf("Carta 2 venceu! Densidade populacional de Gramado: 0.17\n");
   }
   if (escolhaJogador == 6)
   {
   	printf("Carta 2 venceu! PIB per capita de Gramado: 0.69\n");
   }	
		
		
	
    return 0;
}
