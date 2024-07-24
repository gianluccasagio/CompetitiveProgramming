#include <bits/stdc++.h>

using namespace std;

int main(){

    int a;
    scanf("%d",&a);
    char x[1000] ;

    getchar();
    while (a--){
        int c = 0;
        stack <char> p;
        scanf("%s", &x);
        for(int i = 0;x[i]!= '\0' ;i++){
            if(x[i] == '<')
                p.push(x[i]);
            else if(x[i] == '>'){
                if(!p.empty()){
                    p.pop();
                    c++;
                }
            }
        }
        printf("%d\n",c);
    }

return 0;}
