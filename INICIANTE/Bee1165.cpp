#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e7+10;
int pr[MAX];

int primo(int n){
if(n<=1){
    printf("%d nao eh primo\n",n);
    return 0;
    }

for (int i = 2;i*i<=n;i++){
    if((n%i)==0){
        printf("%d nao eh primo\n",n);
        return 0;
    }
}
printf("%d eh primo\n",n);
return 0;

}



int main(){

int n=0,m=0;

scanf("%d",&m);

for(int i=0;i<m;i++)
    scanf("%d",&pr[i]);
for(int i=0;i<m;i++)
    int k = primo(pr[i]);


return 0;}