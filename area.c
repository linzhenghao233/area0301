#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(void) {
	double area, circleArea, r;

	printf("����Բ��r�ĳ��ȴ�С��");
	scanf_s("%lf", &r);
	circleArea = PI * r * r;
	area = sqrt(3) * 1.5 * r * r;
	printf("Բ�������СΪ: %g\n�����ڽ������ε����Ϊ: %g\nԲ����� / �����ε����Ϊ: %g%% ",
		circleArea, area, circleArea / area * 100);

	return 0;
}