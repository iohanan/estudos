#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int i, j, k;
        for (i = 0; i < n; i++) {
            for (j = 0, k = i + 1; j < n; j++, k++) {
                if (k > n) k = 1;
                printf("%3d", k);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
