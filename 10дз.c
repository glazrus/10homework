#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "RUS");
    int op;
    float a, b, h;
    printf("�������� ��������:\n");
    printf("1-�������\n2-�����������\n3-����������\n> ");
    scanf("%d", &op);
    if (op == 1) {
        printf("������� ������ ��������� a, ������� b � ������ h: ");
        scanf("%f %f %f", &a, &b, &h);
        printf("������� �������� = %.2f\n", (a + b) / 2 * h);
    }
    else if (op == 2) {
        printf("������������� �������� � �������������� � ����� ������������� ���������,\n");
        printf("���� �� ������� ������ ��������������� ����������.\n");
    }
    else if (op == 3) {
        int i, j;
        printf("������� ������ ��������� a, ������� b � ������ h: ");
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
        printf("�������� �����.\n");
    }
    return 0;
}