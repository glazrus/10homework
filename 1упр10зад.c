#include <stdio.h>
#include <math.h>
#include <locale.h>

double f1(double x) 
{
    return (x <= 3) ? x * x - 3 * x + 9 : 1.0 / (x * x * x + 3);
}
double f2(double x) 
{
    return x * exp(sin(x * x));
}
int main() 
{
    setlocale(LC_ALL, "RUS");
    double x;
    printf("Введите x: ");
    scanf("%lf", &x);

    double a = f1(x), b = f2(x);

    printf("F1(x)=%.6lf\n", a);
    printf("F2(x)=%.6lf\n", b);
    printf("Произведение=%.6lf\n", a * b);
    printf("Разность квадратов=%.6lf\n", a * a - b * b);
    printf("Удвоенная сумма=%.6lf\n", 2 * (a + b));
    return 0;
}

