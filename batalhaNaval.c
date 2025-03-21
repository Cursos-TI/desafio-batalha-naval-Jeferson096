#include <stdio.h>


int main() {

    char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};


int tabuleiro[10][10]= {0}; // AS MATRIZES LÊ PRIMEIRAMENTE AS LINHAS E DEPOIS AS COLUNAS

//Navio 1
tabuleiro[0][0] = 3;
tabuleiro[1][1] = 3;
tabuleiro[2][2] = 3;

//Navio 2
tabuleiro[6][6] = 3;
tabuleiro[7][7] = 3;
tabuleiro[8][8] = 3;

//Navio 3
tabuleiro[1][6] = 3;
tabuleiro[2][6] = 3;
tabuleiro[3][6] = 3;

//Navio 4
tabuleiro[7][0] = 3;
tabuleiro[7][1] = 3;
tabuleiro[7][2] = 3;

//Cone representado por 5
tabuleiro[5][5] = 5;
tabuleiro[6][4] = 5; tabuleiro[6][5] = 5; tabuleiro[6][6] = 5;
tabuleiro[7][3] = 5; tabuleiro[7][4] = 5; tabuleiro[7][5] = 5; tabuleiro[7][6] = 5; tabuleiro[7][7] = 5;

//Octaedro representado por 4
tabuleiro[0][8] = 4;
tabuleiro[1][7] = 4;tabuleiro[1][8] = 4;tabuleiro[1][9] = 4;
tabuleiro[2][8] = 4;

//Cruz representado por 9
tabuleiro[1][3] = 9;
tabuleiro[2][3] = 9;
tabuleiro[3][1] = 9;tabuleiro[3][2] = 9;tabuleiro[3][3] = 9;tabuleiro[3][4] = 9;tabuleiro[3][5] = 9;
tabuleiro[4][3] = 9;
tabuleiro[5][3] = 9;


printf("  ");


//linha do tabuleiro

for(int i= 0; i < 10; i++){
    printf(" %c", letras[i]);

}


//coluna do tabuleiro

for(int j= 0; j < 10; j++){
    if( numeros[j] < 10)
        printf("\n %d ", numeros[j]);
    else
        printf("\n%d ", numeros[j]); 

    for(int k= 0; k < 10; k++){
        printf("%d ", tabuleiro[j][k]);
    }
}

   
}
