#include<stdio.h>
int verificarVitoria(char tabela[9]);
int main(){

        printf("Qual é o nome do Jogador 1?\n");
        char n1[50];
        scanf("%s",&n1);

        printf("Qual é o nome do Jogador 2?\n");
        char n2[50];
        scanf("%s",&n2);


    char tabela[] = {'-', '-', '-', '-', '-', '-', '-', '-', '-'};
    char regras[] = {'0','1', '2', '3', '4', '5', '6', '7', '8'};
    int j1;
    int j2;
    int contagem = 0;

do{

   int refreshTable(){
    for(int i = 0; i<9; i++){
            printf("| %c ", regras[i]);

        if(i==2 || i==5 || i==8){
            printf("|\n");
        };
    };
   
   
    printf("\n\n");

        for(int i = 0; i<9; i++){
        
        if(tabela[i]=='-'){
            printf("|   ");
        }else{
           printf("| %c ", tabela[i]); 
        };
        

        if(i==2 || i==5 || i==8){
            printf("|\n");
        };
    };
   };
 
        refreshTable();

        printf("%c\n", n1);
        printf("Indique onde quer jogar o X\n");
        
        scanf("%d", &j1);

        for(int i = 0; i<=9; i++){
            if(j1 == i){
                tabela[i] = 'X';
                break;
            };
        };
        refreshTable();

            if (verificarVitoria(tabela)) {
        printf("%s venceu!\n", n1);
        break;  // Termina o jogo se houver um vencedor
    }
        

                printf("%s\n", n2);
        printf("Indique onde quer jogar o O\n");
        scanf("%d", &j2);

        for(int i = 0; i<=9; i++){
            if(j2 == i){
                tabela[i] = 'O';
                break;
        };
        };
        refreshTable();

            // Verifica se o jogador 2 ganhou
    if (verificarVitoria(tabela)) {
        printf("%c venceu!\n", n2);
        break;  // Termina o jogo se houver um vencedor
    }

    printf("\nO JOGO CHEGOU AO FIM");


        

        }while(1==1);

        printf("\nO JOGO CHEGOU AO FIM");
return 0;
};



int verificarVitoria(char tabela[9]) {
    // Verifica as linhas
    if ((tabela[0] == tabela[1] && tabela[1] == tabela[2] && tabela[0] != '-') || // Linha 1
        (tabela[3] == tabela[4] && tabela[4] == tabela[5] && tabela[3] != '-') || // Linha 2
        (tabela[6] == tabela[7] && tabela[7] == tabela[8] && tabela[6] != '-'))   // Linha 3
        return 1;

    // Verifica as colunas
    if ((tabela[0] == tabela[3] && tabela[3] == tabela[6] && tabela[0] != '-') || // Coluna 1
        (tabela[1] == tabela[4] && tabela[4] == tabela[7] && tabela[1] != '-') || // Coluna 2
        (tabela[2] == tabela[5] && tabela[5] == tabela[8] && tabela[2] != '-'))   // Coluna 3
        return 1;

    // Verifica as diagonais
    if ((tabela[0] == tabela[4] && tabela[4] == tabela[8] && tabela[0] != '-') || // Diagonal principal
        (tabela[2] == tabela[4] && tabela[4] == tabela[6] && tabela[2] != '-'))   // Diagonal secundária
        return 1;

    return 0; // Se não houver vencedor
};

