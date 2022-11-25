#include <stdio.h>
#include <conio.h>

void main() {
	float x[10], f[10][10];
	int i, k, n;

	printf("\n자료의 개수 n을 입력하시오 : ");
	scanf_s("%d", &n);

	printf("\nx y의 값을 차례로 입력하세요 : \n");

	for (i = 1; i <= n; i++)
		scanf_s("%f %f", &x[i], &f[i][0]);

	for (k = 1; k <= n; k++) {
		for (i = k + 1; i <= n; i++)
			f[i][k] = f[i][k - 1] - f[i - 1][k - 1];
	}

	printf("\n              Newton 후향계차표\n");
	printf("==========================================================\n");
	printf("x	y   1제계차	 2제계차  3제계차  4제계차	  \n");
	printf("==========================================================\n");
	for (i = 1; i <= n; i++) {

		printf("%d %8.3f", i, x[i]);
		for (k = 0; k <= i - 1; k++)
			printf("%10.3f", f[i][k]);
		printf("\n");
	}
	printf("==========================================================\n");

	while (1) {

		if (_kbhit() != 0)
			break;
	}

}