/*#include <stdio.h>

void main(){
	int i, j, k, m, n, r;
	float a[10][10], b[10][10], c[10][10];
	long FORLIM, FORLIM1, FORLIM2;

	printf(" \n ���� ũ�� (m)�� ���� ũ��(n)�� �Է��Ͻÿ� :  \n");
	scanf_s("%d %d", &m, &n);

	getchar();

	printf("\n��� (%d x %d) ��� A�� ���� a[i, j]�� ���� �Է��Ͻÿ� : \n", m,n);

	FORLIM = m;

	for( i=1; i<=FORLIM; i++) {
		FORLIM1 = n;

		for( j=1; j<=FORLIM1; j++)
			scanf_s("%f", &a[i-1][j-1]);
	}

	printf(" \n ���� ũ�� (n)�� ���� ũ��(r)�� �Է��Ͻÿ� :  \n");
	scanf_s("%d %d", &n, &r);

	printf("\n��� (%d x %d) ��� B�� ���� a[i, j]�� ���� �Է��Ͻÿ� : \n", n, r);

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

	printf("\n �� ��� A, B�� �� \n");

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