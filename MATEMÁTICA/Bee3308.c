#include <stdio.h>
#include <stdlib.h>

int main() {

    int casas;
    int a1, a2, a3, m;

    scanf("%d", &casas);

    for(int i = 0; i < casas; i++) {
        scanf("%d %d %d %d", &m, &a1, &a2, &a3);

        if((a1 + a2 + a3) == 1 && m == 0) printf("1\n");
        else if((a1 + a2 + a3) == 1 && m == 1) printf("0\n");
        else if((a1 + a2 + a3) == 0 && m == 0) printf("0\n");
        else printf("X\n");    
    }

    return 0;
}
