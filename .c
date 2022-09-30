#include<locale.h>
#include<stdio.h>
#include<math.h>
int main(void)
{
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;
	setlocale(LC_ALL, "RUS");

	/*puts("Задание 1");
	printf("%c %d %f %lf\n", c, i, f, d);
	scanf("%c%d%f%lf", &c, &i, &f, &d);
	system("pause");
	puts("Задание 1а");
	double A,C;
	int B;
	scanf("%lf", &A);
	B = (int)A;
	C = A - B;
	printf("%d %lf\n", B, C);
	system("pause");

	puts("Задание 2");
	int a = 11, b = 3, x;
	float y;
	double z;
	x = a / b;
	y = a / b;
	z = a / b;
	printf("%d %f %lf\n", x, y, z);
	printf ("%f %lf\n", (float)a / b, (double)a / b);
	system("pause");*/

	puts("Задание 3");
	int n,a,b,o;
	puts("Введите трёхзначное число");
	scanf("%d",&n);
	printf("Ваше число %d\n", n);
	a = fabs(n % 10);
	b = fabs(n / 10 % 10);
	o = fabs(n / 100);
	printf("Последняя цифра %d, первая %d, сумма цифр %d\n", a, o, a+b+o);
	printf("%.2f", (float)o-b-a);
}
