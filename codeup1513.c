#include <stdio.h>

int a[100][100] = { 0 };

int main() {
    int n;
    int num = 1;
    int even = 0, odd = 0; // ¦, Ȧ
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
        ó�� �ۼ��� �ڵ�� n�� Ȧ���� �� ���������� �۵�
        ¦���� �� ������ ���ܼ� �����ϴ� k�� Ȧ������ ¦��������
        �̸� �Ǵ��� ���� ¦���� �������� ���� Ȧ���� �������� ��
        ������ �޸� �ϰ� «
     */

    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= n; ++j) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
