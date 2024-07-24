#include <bits/stdc++.h>

using namespace std;

int main(){

char text[20];
int numero1, numero2,sum;

while(1){
scanf("%d %d",&numero1, &numero2);

if((numero1==0) && (numero2==0)){
    return 0;
}

sum = numero1 + numero2;

sprintf(text, "%d", sum);
int tam = strlen(text);
int i;
for(i=0;i<tam;i++)
{
    if(text[i]!='0')
        printf("%c",text[i]);
}
printf("\n");}
return 0;}
