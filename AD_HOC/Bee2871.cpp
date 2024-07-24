#include <bits/stdc++.h>

using namespace std;

int main(){

    int linha, col;
    float value, menor=0;
    while(scanf("%d %d", &linha, &col) != EOF){

        int aux,litros=0;

        for(int i=0;i<linha;i++){
            for(int j=0;j<col;j++){
                scanf("%d",&aux);
                litros += aux;
            }
        }
        printf("%d saca(s) e %d litro(s)\n",litros/60,litros%60);

    }

return 0;}