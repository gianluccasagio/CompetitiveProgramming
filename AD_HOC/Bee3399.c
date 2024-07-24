#include <stdio.h>

int main(){

int a, b, c;
int resp;

int value;

scanf("%d %d %d %d",&a, &b, &c, &resp);

value = c - b;

printf("%d\n", ((resp-1) * value) + a);


return 0;}
