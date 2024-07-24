#include <bits/stdc++.h>

using namespace std;

int main(){

    int S,B,C;
    int i = 2;
    int mmc = 1;
    float resp;
    scanf("%d %d %d",&S,&B,&C);
    int S1 = S,S2 = B,S3 = C;

    while(S>1 || B>1 || C>1){
        int md1 = S % i;
        int md2 = B % i;
        int md3 = C % i;

        if(md1 == 0){S /= i;}
        if(md2 == 0){B /= i;}
        if(md3 == 0){C /= i;}

        if(md1 && md2 && md3){
            i += 1;
        }else{
            mmc *= i;
        }
    }
    resp = mmc * S1;
    resp = resp / ((resp/S1)+(resp/S2)+(resp/S3));
    printf("%.3f\n",resp);

return 0;}