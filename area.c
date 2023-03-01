#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(void) {
	double area, circleArea, r;

	printf("输入圆的r的长度大小：");
	scanf_s("%lf", &r);
	circleArea = PI * r * r;
	area = sqrt(3) * 1.5 * r * r;
	printf("圆的面积大小为: %g\n其正内接六边形的面积为: %g\n圆的面积 / 六边形的面积为: %g%% ",
		circleArea, area, circleArea / area * 100);

	return 0;
}