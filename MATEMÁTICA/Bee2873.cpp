#include <bits/stdc++.h>

using namespace std;

int main(){

while(1){

    double A,B,C,D;
    scanf("%lf %lf %lf %lf", &A, &B, &C, &D);

    if(A==0&&B==0&&C==0&&D==0)
        return 0;

    /**
    Usando o teorema de tales de mileto temos que para calcular a altura desse triangulo:
    Altura real da pirâmide =( (Metade da base + Sombra da pirâmide) * Altura da Haste) / Sombra da haste
    */

    double result = (((A/2)+ B)*C)/D;

    printf("%.5lf\n",result);

}


return 0;}
