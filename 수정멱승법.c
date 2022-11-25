#include <stdio.h>
void swap(float *u, float *v);
void main() {
	float a[10][10], b[10], x[10];
	int i, j, n = 0, loop;

	printf("행렬의 차수를 입력. ");
	scanf_s("%d", &n);

	printf("행렬 A(i,j)의 성분을 입력. \n");
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++)
			scanf_s("%f", &a[i][j]);
	}
	printf("초기치 x(1),...,x(n) 을 입력하시오 : ");

	for (i = 1; i <= n; i++)
		scanf_s("%f", &x[i]);
	printf("\n------------------------------------------------\n");
	printf("i        x(1)            x(2)          x(1)/x(2)\n");
	printf("\n------------------------------------------------\n");
	for (loop = 1; loop <= 15; loop++) {
		for (i = 1; i <= n; i++) {
			b[i] = 0;
			for (j = 1; j <= n; j++)
				b[i] += a[i][j] * x[j];
		}
		for (i = 1; i <= n; i++) {
			for (j = i; j <= n; j++)
				if (x[i] > x[j]) swap(&x[i], &x[j]);
		}

		for (i = 1; i <= n; i++)
			x[i] = b[i] / x[n];


		printf(" %2d", loop);

		for (i = 1; i <= n; i++)
			printf("%12.5f	", x[i]);

		printf("%12.5f\n", x[1] / x[2]);
	}
	printf("\n-----------------------------------------------\n");
	while ((_kbhit()) == 0);
}
void swap(float *u, float *v) {
	float temp;

	temp = *u;
	*u = *v;
	*v = temp;
}