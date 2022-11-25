#include <stdio.h>

void change(float x[10][10], int m, int n);

void main() {
	float a, x[10][10];
	int n, l, i, j, m;

	printf("\n����� ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n);

	l = n * 2;

	printf("\n����� ���� x(i, j)�� �Է��Ͻÿ� :  \n");

	for(i = 1; i <= n; i++) {
		for (j = 1; j<= n; j++)
			scanf_s("%f", &x[i][j]);
	}

	printf("\n    �����                               \n");
	printf("----------------------------------------------\n");

	for(i=1;i<=n;i++) {                                                                                                                                        
		for(j = 1;j <=n; j++)
			printf(" %12.5f ",  x[i][j]);

		printf("\n");
	}

	printf("----------------------------------------------\n");

	for(i=1;i<=n;i++) {
		for(j = n + 1;j <=l; j++) {
			 x[i][j] =0;

			 if (j == (n+i))
				 x[i][j] = 1;
		}
	}

	for (m = 1; m <= n; m++) {
		if(x[m][m] == 0)
			change(x, m, n);

		if(x[m][m] == 0)
			printf("������� �������� ����. \n");

		for(i = 1; i<= n; i++){
			if( m== i)
				goto multi;

			a = x[i][m] / x[m][m];

multi:;

			for (j = 1; j <=l; j++) {
				x[i][j] -= a* x[m][j];
				printf("%12.5f", x[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}

	for(i=1;i<=n;i++) {
		for(j = n+1;j<=l;j++) 
			x[i][j] /= x[i][i];
	}
	printf("\n    �����                               \n");
	printf("----------------------------------------------\n");


	for(i=1;i<=n;i++) {
		for(j = n+1;j<=l;j++) 
			printf(" %12.5f ", x[i][j]);

		printf("\n");
	}
	printf("----------------------------------------------\n");
}

void change(float x[10][10], int m, int n) {
	int i, j;
	for(i = m; i<= n-1;i++) {
		if(x[i+1][m] != 0) 
			break;

		if (i==n-1)
			return;
	}

	for ( j=1; j<=n*2;j++)
		x[m][j] += x[i+1][j];
}