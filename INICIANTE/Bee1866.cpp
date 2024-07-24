#include <bits/stdc++.h>

using namespace std;

int main(){

int counts, numeros, i;

scanf("%d",&counts);
for(i=0; i<counts;i++)
{
    scanf("%d",&numeros);
    if((numeros % 2) == 0)
        printf("0\n");
    else
        printf("1\n");
}
return 0;
}
