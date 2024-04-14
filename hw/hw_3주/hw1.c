#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int a, int b) {return a + b;}

int subtract(int a, int b) {return a - b;}

int multiply(int a, int b) {return a * b;}

int divide(int a, int b) {return a / b;}

int mod(int a, int b) {return a % b;}

void menu() {
    printf("���� ���α׷��Դϴ�.\n");
    printf("1. ����\n");
    printf("2. ����\n");
    printf("3. ����\n");
    printf("4. ������\n");
    printf("5. ������\n");
    printf("6. ����\n");
    printf("======================\n");
    printf("�����Ͻʽÿ�: ");
}

int main() {
    int choice, num1, num2;

    while (1) {
        menu();
        scanf("%d", &choice);

        if (choice < 1 || choice > 6) {
            printf("�߸��� �����Դϴ�. �ٽ� �õ��ϼ���.\n");
            continue;
        }

        if (choice == 6) {
            printf("���α׷��� �����մϴ�.\n");
            break;
        }

        printf("�� ���� ������ �Է��ϼ���: ");
        scanf("%d %d", &num1, &num2);

        switch (choice) {
        case 1:
            printf("���� ���: %d\n", add(num1, num2));
            break;
        case 2:
            printf("���� ���: %d\n\n", subtract(num1, num2));
            break;
        case 3:
            printf("���� ���: %d\n\n", multiply(num1, num2));
            break;
        case 4:
            if (num2 == 0) {
                printf("0���� ���� �� �����ϴ�.\n");
            }
            else {
                printf("������ ���: %d\n\n", divide(num1, num2));
            }
            break;
        case 5:
            printf("������ ���: %d\n\n", mod(num1, num2));
            break;
        }
    }

    return 0;
}
