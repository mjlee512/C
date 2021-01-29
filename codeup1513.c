#include <stdio.h>

int a[100][100] = { 0 };

int main() {
    int n;
    int num = 1;
    int even = 0, odd = 0; // 짝, 홀
    int i, j, k;

    scanf("%d", &n);

    if ((n + 1) % 2 == 0) {
        even = 1;
    }
    else {
        odd = 1;
    }

    for (k = n + 1; k <= 2 * n; ++k) {
        if (k % 2 == 0) {
            for (i = n; i >= 1; --i) {
                for (j = 1; j <= n; ++j) {
                    if (i + j == k && even == 1) {
                        a[i][j] = num;
                        num++;
                    }
                    else if (i + j == k && odd == 1) {
                        a[j][i] = num;
                        num++;
                    }
                }
            }
        }
        else {
            for (i = 1; i <= n; ++i) {
                for (j = n; j >= 1; --j) {
                    if (i + j == k && even == 1) {
                        a[i][j] = num;
                        num++;
                    }
                    else if (i + j == k && odd == 1) {
                        a[j][i] = num;
                        num++;
                    }
                }
            }
        }
    }
    /*
        처음 작성한 코드는 n이 홀수일 때 정상적으로 작동
        짝수일 때 오류가 생겨서 시작하는 k가 홀수인지 짝수인지를
        미리 판단한 이후 짝수로 시작했을 때와 홀수로 시작했을 때
        연산을 달리 하게 짬
     */

    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= n; ++j) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
