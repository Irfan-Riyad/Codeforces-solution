#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, ans = 0, n;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            scanf("%d", &n);
            if (n == 1)
                ans = abs(i - 3) + abs(j - 3);
        }
    }
    printf("%d\n", ans);

    return 0;
}
