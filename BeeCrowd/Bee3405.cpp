//Gianlucca Sagio
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,c;
        while (scanf("%d",&n) !=EOF){
            c = 0;
            for(int i=5;i<=n;i=i*5){
                c = c + n/i;
            }
            printf("%d\n",c);
        }


}
