#include <stdio.h>
#include <conio.h>

void main() {
	float x[10], f[10][10], a, h, s, value = 0;
	int i, j, k, n;

	printf("�ڷ��� ���� n�� �Է��Ͻÿ� : ");
	scanf_s("%d", &n);
	printf("\n ��ǥ��(x, y)�� �Է��Ͻÿ�. \n");
	for (i = 1; i <= n; i++)
		scanf_s("%f %f", &x[i], &f[i][0]);
	for (k = 1; k <= n; k++) {
		j = n - k;
		for (i = 1; i <= j; i++)
			f[i][k] = (f[i + 1][k - 1] - f[i][k - 1]) / (x[i + k] - x[i]);
	}

	printf("\n				Newton ������ ������\n");
	printf("==========================================================\n");
	printf("	x	y	1������		2������		3������		4������	  \n");
	printf("==========================================================\n");
	for (i = 1; i <= n; i++) {
		j = n - i;
		printf(" %8.4f", x[i]);
		for (k = 0; k <= j; k++)
			printf("%11.5f", f[i][k]);
		printf("\n");
	}
	printf("==========================================================\n");
	printf("\n���������� ����� x ���� �Է��ϼ��� : ");
	scanf_s("%f", &a);
	for (i = 0; i <= n - 1; i++) {
		s = 1;
		for (k = 1; k <= j; k++)
			s = s * (a - x[k]);
		value += s * f[1][i];
	}
	printf("\n x = %f������ ������ �ٻ簪�� \n\n %f \n", a, value);
}