#include <stdio.h>
#include <math.h>

void change(float x[10][10], int m, int n);
int c = 0;

void main() {
	float a, det = 1, x[10][10];
	int i, j, l, m, n;
	printf("\n행렬의 차수를 입력하시오 : ");
	scanf_s("%d", &n);

	printf("\n행렬의 성분 x[i, j]를 입력하시오 : \n");

	for (i =1; i <= n; i++) {
		for (j=1; j <= n; j++)
			scanf("%f", &x[i][j]);
	}

	printf("\n\n");
	
	for(m=1;m<=n;m++) {
		l = m+1;

		if(x[m][m] == 0) change(x, m, n);

		if(det == 0) break;

		for(i =1; i <=n; i++){
			for(j=1;j<=n;j++)
				printf("  %12.5f  ", x[i][j]);

			printf("\n");
		}

		printf("\n");

		for( i = l ; i <= n; i++) {
			a = x[i][m] / x[m][m];

			for (j=1;j<=n;j++)
				x[i][j] -= a* x[m][j];
		}

		det *= pow(-1, c) * x[m][m];
	}

	printf("\n행렬식 = %12.5f\n\n", det);

}

void change(float x[10][10], int m, int n) {
	int i, j, ii;
	float temp;

	c++;

	for(i = m; i<=n; i++){
		ii = i+1;
		if(x[i+1][m] != 0)
			break;
		else
			printf("행렬식의 값은 0. \n");
	}

	for(j=1;j<=n; j++){
		temp = x[m][j];
		x[m][j] = x[ii][j];
		x[ii][j] = temp;
	}
}