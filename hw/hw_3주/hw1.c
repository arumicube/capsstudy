#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int a, int b) {return a + b;}

int subtract(int a, int b) {return a - b;}

int multiply(int a, int b) {return a * b;}

int divide(int a, int b) {return a / b;}

int mod(int a, int b) {return a % b;}

void menu() {
    printf("계산기 프로그램입니다.\n");
    printf("1. 덧셈\n");
    printf("2. 뺄셈\n");
    printf("3. 곱셈\n");
    printf("4. 나눗셈\n");
    printf("5. 나머지\n");
    printf("6. 종료\n");
    printf("======================\n");
    printf("선택하십시오: ");
}

int main() {
    int choice, num1, num2;

    while (1) {
        menu();
        scanf("%d", &choice);

        if (choice < 1 || choice > 6) {
            printf("잘못된 선택입니다. 다시 시도하세요.\n");
            continue;
        }

        if (choice == 6) {
            printf("프로그램을 종료합니다.\n");
            break;
        }

        printf("두 개의 정수를 입력하세요: ");
        scanf("%d %d", &num1, &num2);

        switch (choice) {
        case 1:
            printf("덧셈 결과: %d\n", add(num1, num2));
            break;
        case 2:
            printf("뺄셈 결과: %d\n\n", subtract(num1, num2));
            break;
        case 3:
            printf("곱셈 결과: %d\n\n", multiply(num1, num2));
            break;
        case 4:
            if (num2 == 0) {
                printf("0으로 나눌 수 없습니다.\n");
            }
            else {
                printf("나눗셈 결과: %d\n\n", divide(num1, num2));
            }
            break;
        case 5:
            printf("나머지 결과: %d\n\n", mod(num1, num2));
            break;
        }
    }

    return 0;
}
