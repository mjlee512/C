
#include <stdio.h>
#include <conio.h>

int a[11][11];
int b[11][11];
// �ִ� 10*10������

int main() {
    int n = 4;
    int num = 1;
    int i, j;
    int key = 1;
    int dir; // ����Ű �Է¹��� ����

    printf("1~10������ ������ �Է� ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= n; ++j) {
            a[i][j] = num;
            num++;
        }
    }

    printf("����Ű�� ȸ���ϼ��� ");

    while (key == 1) {

        printf("\n");
        dir = _getch(); // �� 75 �� 77

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
        } // dir�� 75�� ��ȸ��

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
        } // dir�� 77�̸� ��ȸ��

    }
    return 0;
}