/*#include <stdio.h>

void main(){
	int i, j, k, m, n, r;
	float a[10][10], b[10][10], c[10][10];
	long FORLIM, FORLIM1, FORLIM2;

	printf(" \n 행의 크기 (m)과 열의 크기(n)을 입력하시오 :  \n");
	scanf_s("%d %d", &m, &n);

	getchar();

	printf("\n행렬 (%d x %d) 행렬 A의 성분 a[i, j]의 값을 입력하시오 : \n", m,n);

	FORLIM = m;

	for( i=1; i<=FORLIM; i++) {
		FORLIM1 = n;

		for( j=1; j<=FORLIM1; j++)
			scanf_s("%f", &a[i-1][j-1]);
	}

	printf(" \n 행의 크기 (n)과 열의 크기(r)을 입력하시오 :  \n");
	scanf_s("%d %d", &n, &r);

	printf("\n행렬 (%d x %d) 행렬 B의 성분 a[i, j]의 값을 입력하시오 : \n", n, r);

		FORLIM = n;

	for( i=1; i<=FORLIM; i++) {
		FORLIM1 = r;

		for( j=1; j<=FORLIM1; j++)
			scanf_s("%f", &b[i-1][j-1]);
	}

	for ( i = 1; i <= m; i++) {
		for ( j=1; j<=r; j++)
			c[i-1][j-1] = 0.0;
	}

	printf("\n 두 행렬 A, B의 곱 \n");

	FORLIM = m;

	for( i=1; i<=FORLIM; i++) {
		FORLIM1 = r;

		for( j=1; j<=FORLIM1; j++){
			FORLIM2 = n;
			
			for(k=1; k<=FORLIM2; k++)
				c[i-1][j-1] += a[i-1][k-1]*b[k-1][j-1];
		}
	}

	FORLIM = m;
	
	for( i=1; i<=FORLIM; i++) {
		FORLIM1 = r;

		for( j=1; j<=FORLIM1; j++)
			printf("%12.4f", c[i-1][j-1]);
	
		putchar('\n');
	}

		putchar('\n');
}*/