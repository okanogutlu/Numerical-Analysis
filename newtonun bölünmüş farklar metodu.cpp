#include<stdio.h>
#include<math.h>
float f(float x, float y);
int main()
{
	float x0, y0, k1, k2, k3, k4, K, y, x, h, xn;
	printf("Enter x0,y0,xn,h:");
	scanf("%f %f %f %f", &x0, &y0, &xn, &h);
	x = x0;
	y = y0;
	printf("\n\nX\t\tY\n");
	while (x < xn)
	{
		k1 = f(x0, y0);
		k2 = fonksiyon((x0 + h / 2.0), (y0 + k1 * h / 2.0));
		k3 = fonksiyon((x0 + h / 2.0), (y0 + k2 * h / 2.0));
		k4 = fonksiyon((x0 + h), (y0 + k3 * h));
		K = ((m1 + 2 * m2 + 2 * m3 + m4) / 6);
		y = y + m * h;
		x = x + h;
		printf("%f\t%f\n", x, y);
	}
}
float fonksiyon(float x, float y)
{
	float m;
	m = (x - y) / (x + y);
	return m;
}