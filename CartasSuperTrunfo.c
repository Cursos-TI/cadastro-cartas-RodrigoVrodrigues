#include <stdio.h>

int main() {

    //Declaração das variaveis e tipos das carta
    int   Carta1, _Carta2;
    char  Estado1[20], _Estado2[20];
    char  Codigo1[10], _Codigo2[10];
    char  NomeCidade1[20], _NomeCidade2[20];
    int   Populacao1, _População2;
    float Area1, _Area2;
    float PIB1, _PIB2;
    int   NumerosPontosTuristicos1, _NumerosPontosTuristicos2;



    //Inicio do Input do usuario ( Primeira carta )

    printf("Digite o Numero da primeira carta:");
    scanf("%d", &Carta1);

    printf("Digite o Nome do Estado:");
    scanf("%s", &Estado1);

    printf("Digite o Codigo da carta:");
    scanf("%s", &Codigo1);

    printf("Digite o Nome da Cidade:");
    scanf("%s", &NomeCidade1);

    printf("Digite o número de habitantes da cidade:");
    scanf("%d", &Populacao1);

    printf("Digite a Área (Em Km²):");
    scanf("%f", &Area1);

    printf("Digite o PIB:");
    scanf("%f", &PIB1);

    printf("Número de Pontos Turísticos:");
    scanf("%d", &NumerosPontosTuristicos1);

    printf("\n");
    printf("Atenção!!! Agora iremos cadastrar os dados da segunda Carta \n \n");
    scanf("Digite qualquer tecla para continuar");
    printf("\n");


       //Inicio do Input do usuario ( Segunda carta )

    printf("Digite o Numero da Segunda carta:");
    scanf("%d", &_Carta2);

    printf("Digite o Nome do Segundo Estado:");
    scanf("%s", &_Estado2);

    printf("Digite o Codigo da Segunda carta:");
    scanf("%s", &_Codigo2);

    printf("Digite o Nome da Segunda Cidade:");
    scanf("%s", &_NomeCidade2);

    printf("Digite o número de habitantes da Segunda cidade:");
    scanf("%d", &_População2);

    printf("Digite a Área (Em Km²) da Segunda Carta:");
    scanf("%f", &_Area2);

    printf("Digite o PIB da Segunda carta:  \n");
    scanf("%f", &_PIB2);

    printf("Número de Pontos Turísticos da Segunda carta:");
    scanf("%d", &_NumerosPontosTuristicos2);

    printf("Cadastros Realizados com Sucesso, abaixo segue o detalhamento do cadastro \n");
    printf("\n");

    //Imprimindo o resultado da prmeira carta

    printf("Aqui estão os dados da Primeira Carta: \n\n");
    printf("\n");

    printf("Numero da carta: %d\n", Carta1);
    printf("Estado: %s\n", Estado1);
    printf("Codigo da carta: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", NomeCidade1);
    printf("Número de Habitantes: %d\n", Populacao1);
    printf("Área  %f\n", Area1);
    printf("PIB:  %f\n", PIB1);
    printf("Número de Pontos turísticos: %d\n", NumerosPontosTuristicos1);

    printf("\n");


       //Imprimindo o resultado da segunda carta
    printf("Aqui estão os dados da Segunda Carta: \n\n");
    printf("\n");


    printf("Numero da carta: %d\n", _Carta2);
    printf("Estado: %s\n", _Estado2);
    printf("Codigo da carta: %s\n", _Codigo2);
    printf("Nome da Cidade: %s\n", _NomeCidade2);
    printf("Número de Habitantes: %d\n", _População2);
    printf("Área  %f\n", _Area2);
    printf("PIB:  %f\n", _PIB2);
    printf("Número de Pontos turísticos: %d\n", _NumerosPontosTuristicos2);

    
    


return 0;


}