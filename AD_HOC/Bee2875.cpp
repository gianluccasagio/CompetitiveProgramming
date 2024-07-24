#include <bits/stdc++.h>

using namespace std;

int main(){

    int M, N;
    while(scanf("%d %d", &M, &N) != EOF){
    char mat[M][N];
    int Xaux, Yaux;

    for (int i = 0;i < M;i++){
        for (int j = 0; j < N; j++){
            scanf(" %c",&mat[i][j]);
            if(mat[i][j]=='X'){
                Xaux=i;
                Yaux=j;
            }
        }
    }
    int orient=1;

    while(1){

    if((Xaux != 0)&&(mat[Xaux-1][Yaux]=='0')){//em cima
        switch (orient){
            case 1:
                printf("R R F ");
                orient = 2;
                mat[Xaux-1][Yaux]='1';
                mat[Xaux][Yaux]='1';
                Xaux=Xaux-1;
                break;
            case 2:
                printf("F ");
                orient = 2;
                mat[Xaux-1][Yaux]='1';
                mat[Xaux][Yaux]='1';
                Xaux=Xaux-1;
                break;
            case 3:
                printf("L F ");
                orient = 2;
                mat[Xaux-1][Yaux]='1';
                mat[Xaux][Yaux]='1';
                Xaux=Xaux-1;
                break;
            case 4:
                printf("R F ");
                orient = 2;
                mat[Xaux-1][Yaux]='1';
                mat[Xaux][Yaux]='1';
                Xaux=Xaux-1;
                break;
            }
    }else if((Xaux != (M-1))&&(mat[Xaux+1][Yaux]=='0')){//em baixo
        switch (orient){
            case 1:
                printf("F ");
                orient = 1;
                mat[Xaux+1][Yaux]='1';
                mat[Xaux][Yaux]='1';
                Xaux=Xaux+1;
                break;
            case 2:
                printf("R R F ");
                orient = 1;
                mat[Xaux+1][Yaux]='1';
                mat[Xaux][Yaux]='1';
                Xaux=Xaux+1;
                break;
            case 3:
                printf("R F ");
                orient = 1;
                mat[Xaux+1][Yaux]='1';
                mat[Xaux][Yaux]='1';
                Xaux=Xaux+1;
                break;
            case 4:
                printf("L F ");
                orient = 1;
                mat[Xaux+1][Yaux]='1';
                mat[Xaux][Yaux]='1';
                Xaux=Xaux+1;
                break;
            }
    }else if((mat[Xaux][Yaux-1]=='0')&&Yaux!=0 ){//em esquerda
        switch (orient){
            case 1:
                printf("R F ");
                orient = 4;
                mat[Xaux][Yaux-1]='1';
                mat[Xaux][Yaux]='1';
                Yaux=Yaux-1;
                break;
            case 2:
                printf("L F ");
                orient = 4;
                mat[Xaux][Yaux-1]='1';
                mat[Xaux][Yaux]='1';
                Yaux=Yaux-1;
                break;
            case 3:
                printf("R R F ");
                orient = 4;
                mat[Xaux][Yaux-1]='1';
                mat[Xaux][Yaux]='1';
                Yaux=Yaux-1;
                break;
            case 4:
                printf("F ");
                orient = 4;
                mat[Xaux][Yaux-1]='1';
                mat[Xaux][Yaux]='1';
                Yaux=Yaux-1;
                break;
            }
    }else if((mat[Xaux][Yaux+1]=='0')&& Yaux != N-1){//em direita
        switch (orient){
            case 1:
                printf("L F ");
                orient = 3;
                mat[Xaux][Yaux+1]='1';
                mat[Xaux][Yaux]='1';
                Yaux=Yaux+1;
                break;
            case 2:
                printf("R F ");
                orient = 3;
                mat[Xaux][Yaux+1]='1';
                mat[Xaux][Yaux]='1';
                Yaux=Yaux+1;
                break;
            case 3:
                printf("F ");
                orient = 3;
                mat[Xaux][Yaux+1]='1';
                mat[Xaux][Yaux]='1';
                Yaux=Yaux+1;
                break;
            case 4:
                printf("R R F ");
                orient = 3;
                mat[Xaux][Yaux+1]='1';
                mat[Xaux][Yaux]='1';
                Yaux=Yaux+1;
                break;
            }
    }else{
        printf("E");
        break;
    }
    }
    printf("\n");}
return 0;}
