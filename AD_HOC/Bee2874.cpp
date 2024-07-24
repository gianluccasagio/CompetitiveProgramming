#include <bits/stdc++.h>

using namespace std;

int main(){

    long int bin,dec;
    int n;
    while(scanf("%d", &n) != EOF){

        for(int j = 0; j < n; j++){
            scanf("%d",&bin);
            dec=0;
            for(int i = 0; bin > 0; i++){
                dec = dec + pow(2, i) * (bin % 10);
                bin = bin / 10;
                }

            printf("%c",dec);
            }

        printf("\n");
        }

return 0;}