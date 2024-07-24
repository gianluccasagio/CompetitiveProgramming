#include <bits/stdc++.h>

using namespace std;

int main() {

    int r;
    scanf("%d",&r);
    int qi[r];

    for(int i = 0;i<r;i++){
        scanf("%d",&qi[i]);
    }
    for(int i = 0;i<r;i++){
        if(qi[i]>8000)
            printf("Mais de 8000!\n");
        else
            printf("Inseto!\n");
    }
    return 0;
}