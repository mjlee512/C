#include<stdio.h>


int main() {
	int n; // 1<=n<=1000 ���� ��
	int a; // 1<=a<=100 // �׸��� ���� 4321���� X
	int b; // "
	int arr[5] = { 0 };
	int barr[5] = { 0 };
	int i, j;
	int anum, bnum;
	int win = 0; // 1�̸� A�� 2�� B�� 3�̸� ���º�

	/*  �̱�� ���� ��4>��3>��2>��1 ����

		1. �������� �̱�
		2. ���׶�� ������ �̱�
		3. �׸� ������ �̱�
		4. ���� ������ �̱�
		5. ��� ��� �� ������ ���º�
	*/

	scanf("%d", &n);

	for (j = 1; j <= n; j++) {
		scanf("%d ", &a);
		for (i = 1; i <= a; i++) {
			scanf("%d", &anum);
			arr[anum] = arr[anum] + 1;
		}
		scanf("%d ", &b);
		for (i = 1; i <= b; i++) {
			scanf("%d", &bnum);
			barr[bnum] = barr[bnum] + 1;
		}

		for (i = 4; i >= 1; i--) {
			if (arr[i] > barr[i]) {
				win = 1;
				break;
			}
			else if (arr[i] < barr[i]) {
				win = 2;
				break;
			}
			else {
				win = 3;
			}
		}

		if (win == 1) {
			printf("A");
		}
		else if (win == 2) {
			printf("B");
		}
		else {
			printf("D");
		}
		printf("\n");

		for (i = 1; i <= 4; i++) {
			arr[i] = 0;
			barr[i] = 0;
		}
	}
	return 0;
}