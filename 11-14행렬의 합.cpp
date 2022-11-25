/*#include <stdio.h>

void main(){
	int i, j, m, n;
	float a[10][10], b[10][10];
	long FORLIM, FORLIM1;

	printf(" \n 행의 크기 (m)과 열의 크기(n)을 입력하시오 :  \n");
	scanf_s("%d %d", &m, &n);

	getchar();

	printf("\n행렬 A의 성분 a[i, j]의 값을 입력하시오 : \n");

	FORLIM = m;

	for( i=1; i<=FORLIM; i++) {
		FORLIM1 = n;

		for( j=1; j<=FORLIM1; j++)
			scanf_s("%f", &a[i-1][j-1]);
	}

		printf("\n행렬 B의 성분 b[i, j]의 값을 입력하시오 : \n");

		FORLIM = m;

	for( i=1; i<=FORLIM; i++) {
		FORLIM1 = n;

		for( j=1; j<=FORLIM1; j++)
			scanf_s("%f", &b[i-1][j-1]);
	}

	printf("\n 두 행렬 A, B의 합 \n");

	FORLIM = m;

	for( i=1; i<=FORLIM; i++) {
		FORLIM1 = n;

		for( j=1; j<=FORLIM1; j++)
			printf("%10.3f", a[i-1][j-1]+b[i-1][j-1]);

		putchar('\n');
	}
		putchar('\n');
}*