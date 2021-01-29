
#include <stdio.h>
#include <conio.h>

int a[11][11];
int b[11][11];
// 최대 10*10까지만

int main() {
    int n = 4;
    int num = 1;
    int i, j;
    int key = 1;
    int dir; // 방향키 입력받을 변수

    printf("1~10사이의 정수를 입력 ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= n; ++j) {
            a[i][j] = num;
            num++;
        }
    }

    printf("방향키로 회전하세요 ");

    while (key == 1) {

        printf("\n");
        dir = _getch(); // 왼 75 오 77

        if (dir == 75) {

            for (i = 1; i <= n; ++i) {
                for (j = 1; j <= n; ++j) {
                    b[i][j] = a[j][n + 1 - i];
                }
            }

            for (i = 1; i <= n; ++i) {
                for (j = 1; j <= n; ++j) {
                    a[i][j] = b[i][j];
                    printf("%d ", b[i][j]);
                }
                printf("\n");
            }
        } // dir이 75면 좌회전

        else if (dir == 77) {
            for (i = 1; i <= n; ++i) {
                for (j = 1; j <= n; ++j) {
                    b[i][j] = a[n + 1 - j][i];
                }
            }

            for (i = 1; i <= n; ++i) {
                for (j = 1; j <= n; ++j) {
                    a[i][j] = b[i][j];
                    printf("%d ", b[i][j]);
                }
                printf("\n");
            }
        } // dir이 77이면 우회전

    }
    return 0;
}