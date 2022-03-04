#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int exp(int n1, int n2) {

	int result;

	result = pow(n1, n2);

	return result;
}

int main() {

	int b, e;

	printf("Enter the value for which you want to find the exponential value: ");
	scanf_s("%d", &b);
	printf("Enter exponential value: ");
	scanf_s("%d", &e);

	printf("Result: %d\n", exp(b, e));

	system("pause");
}
