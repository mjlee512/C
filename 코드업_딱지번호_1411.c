#include<stdio.h>


int main() {
	int n; // 1<=n<=1000 라운드 수
	int a; // 1<=a<=100 // 그림의 갯수 4321순서 X
	int b; // "
	int arr[5] = { 0 };
	int barr[5] = { 0 };
	int i, j;
	int anum, bnum;
	int win = 0; // 1이면 A승 2면 B승 3이면 무승부

	/*  이기는 조건 별4>동3>네2>세1 순서

		1. 별많으면 이김
		2. 동그라미 많으면 이김
		3. 네모 많으면 이김
		4. 세모 많으면 이김
		5. 모든 모양 다 같으면 무승부
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