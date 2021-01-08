#include<stdio.h>


int main() {
	int n; // 전체 장 수
	int num;
	int arr[51] = { 0 };
	int i;

	scanf("%d", &n);

	for (i = 1; i < n; i++) {
		scanf("%d", &num);
		arr[num] = arr[num] + 1;
	}
	for (i = 1; i <= n; i++) {
		if (arr[i] == 0) {
			printf("%d", i);
			break;
		}
	}
	return 0;
}