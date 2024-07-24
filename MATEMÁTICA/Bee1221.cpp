#include<bits/stdc++.h>

using namespace std;

int main(){

int n=0;

scanf("%d",&n);
int pr[n];
for(int i=0;i<n;i++){
    scanf("%d",&pr[i]);
}
int j;
for (int i=0;i<n;i++){
    if(pr[i]<=1){
        printf("Not Prime\n");
        break;
    }
    for(j=2;j*j<=pr[i];j++){
        if(pr[i]%j==0){
            printf("Not Prime\n");
            break;
            }
    }
    if(j*j>=pr[i])
    printf("Prime\n");
}

return 0;}
