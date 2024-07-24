#include <bits/stdc++.h>

using namespace std;

int main(){

    int a;
    float lt, q;
    scanf("%d %f %f", &a, &lt, &q);
    vector<string> nomes;
    string n;

    // Lê a linha extra depois do scanf
    cin.ignore();

    while (a--) {
            cin >> n;
            nomes.push_back(n);

    }
    int aux=0;
    while (lt>q){

       lt = lt - q;
        aux++;
        if (aux == nomes.size())
            aux = 0;
    }
    printf("%s %.1f\n",nomes[aux].c_str(),lt);

    return 0;
}
