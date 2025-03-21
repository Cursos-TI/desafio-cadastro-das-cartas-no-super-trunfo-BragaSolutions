//DESAFIO SUPER TRUNFO EM C:

    //CRIAR UM PROGRAMA QUE PERMITA AO USUÁRIO INSERIR DADOS EM DUAS CARTAS VIA TERMINAL
    // E EXIBIR ESSAS CARTAS COM AS INFORMAÇÕES INSERIDAS.

    #include <stdio.h>

    int main() {

    //DEFININDO AS VARIÁVEIS PARA A PRIMEIRA CARTA

    char Estado1;
    char Código1[50];
    char Nome1[50];
    int População1;
    float Área1;
    float PIB1;
    int Turismo1;

    // SOLICITANDO DADOS PARA A PRIMEIRA CARTA

    printf("Digite os dados da primeira carta\n");
    
    printf("Estado (A-H): ");
    scanf("%c", &Estado1);

    printf("Código da carta (Ex: A01): ");
    scanf("%s", &Código1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &Nome1);

    printf("Digite a população: ");
    scanf("%d", &População1);
    
    printf("Digite a área (km²): ");
    scanf("%f", &Área1);
    
    printf("Digite o PIB (em bilhões reais): ");
    scanf("%f", &PIB1);
    
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &Turismo1);

    //DEFININDO AS VARIÁVEIS PARA A SEGUNDA CARTA

    char Estado2;
    char Código2[50];
    char Nome2[50];
    int População2;
    float Área2;
    float PIB2;
    int Turismo2;

    // SOLICITANDO DADOS PARA A SEGUNDA CARTA

    printf("\n");

    printf("Digite os dados da segunda carta\n");
    getchar(); //limpar o buffer do teclado
    
    printf("Estado (A-H): ");
    scanf("%c", &Estado2);
    
    printf("Código carta (Ex: A01): ");
    scanf("%s", &Código2);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", &Nome2);
    
    printf("Digite a população: ");
    scanf("%d", &População2);
        
    printf("Digite a área (km²): ");
    scanf("%f", &Área2);
        
    printf("Digite o PIB (em bilhões reais): ");
    scanf("%f", &PIB2);
        
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &Turismo2);

    printf("\n");

    //EXIBINDO AS CARTAS

    printf("SEGUE ABAIXO AS INFORMAÇÕES DAS SUAS CARTAS\n");

    printf("\n");

    printf("Carta 1\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Código1);
    printf("Nome: %s\n", Nome1);
    printf("População: %d\n", População1);
    printf("Área: %.2f km²\n", Área1);
    printf("PIB: %.2f bilhões\n", PIB1);
    printf("Número de pontos turísticos: %d\n", Turismo1);

    printf("\n");

    printf("Carta 2\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Código2);
    printf("Nome: %s\n", Nome2);
    printf("População: %d\n", População2);
    printf("Área: %.2f km²\n", Área2);
    printf("PIB: %.2f bilhões\n", PIB2);
    printf("Número de pontos turísticos: %d\n", Turismo2);
    
    printf("\n");

    printf("OBRIGADO POR JOGAR!");

    return 0;

    }   