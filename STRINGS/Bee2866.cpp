#include <bits/stdc++.h>

using namespace std;

int main(){

int n;
scanf("%d",&n);
char f[100];

for(int i = 0; i < n; i++){

    scanf("%s", f);
    for(int j = strlen(f); j>=0; j--){
        if(f[j]>=97&&f[j]<=122)
            printf("%c",f[j]);
    }
    printf("\n");


}



return 0;}