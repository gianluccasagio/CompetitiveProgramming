#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        int n,m;
        scanf("%d %d",&n, &m);

        int alg = m*log10(n)+1;
        /**
         Usando a propriedade que:
         para descobrir a quantidade de algarismos de N^M
         basta fazer: M * log10 ( N ) + 1
        */
        
        printf("%d\n", alg);

    }

return 0;}
