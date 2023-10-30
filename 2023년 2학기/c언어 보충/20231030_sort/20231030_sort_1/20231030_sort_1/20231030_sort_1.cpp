#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void bubble_sort(int arr[], int count) {
    int temp;
    for (int i = 0; i < count; i++) {
        for (int j = 0; j < count - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    FILE* file = fopen("input.txt", "r"); // 파일을 읽기 모드로 열기

    if (file == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    int numArr[10]; // 파일에서 읽어온 숫자를 저장할 배열

    for (int i = 0; i < 10; i++) {
        if (fscanf(file, "%d", &numArr[i]) != 1) {
            printf("파일에서 데이터를 읽는 중 오류가 발생했습니다.\n");
            return 1;
        }
    }

    fclose(file); // 파일 닫기

    bubble_sort(numArr, sizeof(numArr) / sizeof(int));

    for (int i = 0; i < 10; i++) {
        printf("%d ", numArr[i]);
    }

    printf("\n");

    return 0;
}
