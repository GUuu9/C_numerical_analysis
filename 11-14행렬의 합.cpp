/*#include <stdio.h>

void main(){
	int i, j, m, n;
	float a[10][10], b[10][10];
	long FORLIM, FORLIM1;

	printf(" \n ���� ũ�� (m)�� ���� ũ��(n)�� �Է��Ͻÿ� :  \n");
	scanf_s("%d %d", &m, &n);

	getchar();

	printf("\n��� A�� ���� a[i, j]�� ���� �Է��Ͻÿ� : \n");

	FORLIM = m;

	for( i=1; i<=FORLIM; i++) {
		FORLIM1 = n;

		for( j=1; j<=FORLIM1; j++)
			scanf_s("%f", &a[i-1][j-1]);
	}

		printf("\n��� B�� ���� b[i, j]�� ���� �Է��Ͻÿ� : \n");

		FORLIM = m;

	for( i=1; i<=FORLIM; i++) {
		FORLIM1 = n;

		for( j=1; j<=FORLIM1; j++)
			scanf_s("%f", &b[i-1][j-1]);
	}

	printf("\n �� ��� A, B�� �� \n");

	FORLIM = m;

	for( i=1; i<=FORLIM; i++) {
		FORLIM1 = n;

		for( j=1; j<=FORLIM1; j++)
			printf("%10.3f", a[i-1][j-1]+b[i-1][j-1]);

		putchar('\n');
	}
		putchar('\n');
}*