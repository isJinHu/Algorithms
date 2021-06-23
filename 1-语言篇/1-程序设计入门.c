#include <stdio.h>
#include <math.h>
int main()
{
	// # 第一章 程序设计入门

	// # 1.1 算数表达式
	// ps 1-1 输出：整数:%d,实数:%f
	printf("%.2lf\n", 8.0 / 4.0);
	// ps 1-2 整数/整数=整数，整数-浮点数=浮点数
	printf("%.8f\n", 1 + 2 * sqrt(3) / (5 - 0.1));

	// # 1.2 变量及其输入
	// ps 1.2 变量及其输入
	// ps 1-3 输入必须加&
	int a, b;
	// scanf("%d%d", &a, &b);
	// eg.计算圆柱体表面积
	// ps 1-7 尽量使用const声明常数
	const double pi = acos(-1.0);
	double r, h, s1, s2, s;
	// scanf("%lf%lf", &r, &h);
	s1 = pi * r * r;
	s2 = 2 * pi * r * h;
	s = s1 * 2.0 + s2;
	printf("Area= %.3f\n", s);

	// # 1.3 顺序结构程序设计
	// eg.三位数反转
	int n = 100, m;
	m = (n % 10) * 100 + (n / 10 % 10) * 10 + (n / 100);
	printf("%03d\n", m); // 001
	printf("%3d\n", m);	 // __1
	printf("%d\n", m);	 // 1
	// ps KISS原则：keep it simple and stupid
	// eg.交换变量
	printf("%d %d\n", b, a);

	// # 1.4 分支结构程序设计
	// # 1.5 注解与习题
	// ps C89 double输入输出都用lf，C99 double输入lf、输出f
	printf("%f\n", sqrt(-10)); // 不报错
	// printf("%d\n", 1 / 0);		// 报错
	printf("%lf\n", 1.0 / 0.0); // 不报错 1.#IND00
	printf("%lf\n", 0.0 / 0.0); // 不报错 -1.#IND00
	return 0;
}