#include <stdio.h>

int a[101][101] = { 0 };

int main() {
    int x1, y1, x2, y2;
    int cnt = 0;
    int i, j, k;

    /*왼쪽 위 꼭지점(x1, y1)와 오른쪽 아래 꼭지점(x2, y2)가 입력
        1 2 3 4
        2 3 5 7
        3 1 6 5
        7 3 8 6
        = 26
    */

    for (i = 1; i <= 4; ++i) {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        for (k = y1 + 1; k <= y2; ++k) {
            for (j = x1 + 1; j <= x2; ++j) {
                a[k][j] = 1;
            }
        }
    }

    for (k = 1; k <= 100; ++k) {
        for (j = 1; j <= 100; ++j) {
            if (a[k][j] == 1) {
                cnt++;
            }
        }
    }
    printf("%d", cnt);

    return 0;
}