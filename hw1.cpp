#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void SWAP(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void BubbleSort(int a[]) {
    for (int i = 0; i < 6; i++) {
        for (int j = i + 1; j < 6; j++) {
            if (a[i] > a[j])
                SWAP(&a[i], &a[j]);
        }
    }
}
int main(void) {
    int lotto[6] = { 0 };
    int already[46] = { 0 }; //���� �������� ����
    int num;
    srand((unsigned)time(NULL)); //���� �ð����� �õ尪 ����
    for (int i = 0;i < 6;i++) {
        num = rand() % 45 + 1;
        while (already[num]) { num = rand() % 45 + 1; }
        already[num] = 1;
        lotto[i] = num;
    }
    BubbleSort(lotto);
    printf("lotto ��ȣ: ");
        for (int i = 0;i < 6;i++) {
            printf("%d ", lotto[i]);
        }
    printf("�Դϴ�.\n");
    return 0;
}