#include <stdio.h>
#include <stdlib.h>

int main() {

    int a;

    while(scanf("%d", &a) != EOF) {
        printf("%d\n", a - 1);
    }

    return 0;
}
