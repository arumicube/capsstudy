#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //bool을 이용하면 더 편해서 추가시켰습니다.
#include <time.h>

#define SET_COUNT 100
#define NUMBER_COUNT 6
#define MAX_NUMBER 45
bool isDuplicate(int numbers[], int size, int num) {
    for (int i = 0; i < size; i++) {
        if (numbers[i] == num) {
            return true;
        }
    }
    return false;
}
void LottoNumbers() {
    srand((unsigned int)time(NULL));
    printf("로또 번호 생성 결과:\n");

   
    for (int set = 1; set <= SET_COUNT; set++) {
        int numbers[NUMBER_COUNT]; 
        for (int i = 0; i < NUMBER_COUNT; i++) {
            int num = 0;
            do {
              num = rand() % MAX_NUMBER + 1;
            } while (isDuplicate(numbers, i, num));

            numbers[i] = num;
        }

        printf("set %d : ", set);
        for (int i = 0; i < NUMBER_COUNT; i++) {
            printf("%d ", numbers[i]);
        }
        printf("\n");
    }
}

int main() {
    LottoNumbers();
    return 0;
}
