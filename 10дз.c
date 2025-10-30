#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "RUS");
    int op;
    float a, b, h;
    printf("Выберите операцию:\n");
    printf("1-Площадь\n2-Определение\n3-Нарисовать\n> ");
    scanf("%d", &op);
    if (op == 1) {
        printf("Введите нижнее основание a, верхнее b и высоту h: ");
        scanf("%f %f %f", &a, &b, &h);
        printf("Площадь трапеции = %.2f\n", (a + b) / 2 * h);
    }
    else if (op == 2) {
        printf("Прямоугольная трапеция — четырёхугольник с двумя параллельными сторонами,\n");
        printf("одна из боковых сторон перпендикулярна основаниям.\n");
    }
    else if (op == 3) {
        int i, j;
        printf("Введите нижнее основание a, верхнее b и высоту h: ");
        scanf("%f %f %f", &a, &b, &h);
        float step = (a - b) / h;
        float len = a;
        for (i = 0; i < h; i++) {
            for (j = 0; j < (int)len; j++)
                printf("*");
            printf("\n");
            len -= step;
        }
    }
    else {
        printf("Неверный выбор.\n");
    }
    return 0;
}