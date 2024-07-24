#include <bits/stdc++.h>

using namespace std;

int main(){

int n;
int a,b,r,var;
int qtt=0;
char op[1];
scanf("%d",&n);

for(int i =0;i<n;i++){
    scanf("%d %c %d = %d",&a,op,&b,&r);
    if(op[0]=='+'){
        qtt = fabs((a+b)-r);
    }else if(op[0]=='x'){
        qtt = fabs((a*b)-r);
    }else if(op[0]=='-'){
        qtt = fabs((a-b)-r);
    }
    printf("E");
    for(int j=0;j<qtt;j++){
        printf("r");
    }
    printf("ou!\n");
}

return 0;}