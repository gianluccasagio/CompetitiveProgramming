#include <bits/stdc++.h>

using namespace std;

int main(){

    /**
            Ponto maximo de uma parabola:
        como A é sempre menor que 0, a parabola é concava
        para cima, possuindo ponto maximo.
            O calculo desse ponto é feito por -(b^2 - 4ac) / (4a)
    */

    int n;
    scanf("%d",&n);
    for (int i = 0; i < n ; i++){
        int a,b,c;
        float result;
        scanf("%d %d %d",&a,&b,&c);
        result = -(float(b)*float(b) - 4 * float(a)*float(c))/(4*float(a));
        printf("%.2f\n",result);

    }


return 0;}
