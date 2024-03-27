#include <stdio.h>
// 함수 프로토타입 선언
void print_one(int *ptr, int rows);
// main 함수 정의
int main() {
    int one[] = {0, 1, 2, 3, 4}; // 배열 one을 선언하고 초기화
    // 배열 one과 첫 번째 요소의 주소를 출력
    printf("[----- [Jo sung jae] [2023078001] -----]\n");
    printf("one = %p\n", one);
    printf("&one = %p\n", &one);
    printf("&one[0] = %p\n", &one[0]);
    printf("\n");
    printf("------------------------------------\n");
    printf("  print_one(&one[0], 5) \n");
    printf("------------------------------------\n");
    // print_one 함수 호출: 배열의 첫 번째 요소의 주소와 배열의 크기를 전달
    print_one(&one[0], 5);
    printf("------------------------------------\n");
    printf("  print_one(one, 5) \n");
    printf("------------------------------------\n");
    // print_one 함수 재호출: 배열 이름과 배열의 크기를 전달
    print_one(one, 5);
    return 0; // 프로그램 종료
}
// 배열의 요소를 출력하는 함수 정의
void print_one(int *ptr, int rows) {
    int i;
    printf ("Address \t Contents\n");
    // 배열의 각 요소에 대해 주소와 해당 주소의 값 출력
    for (i = 0; i < rows; i++)
        printf("%p \t  %5d\n", ptr + i, *(ptr + i));
    printf("\n");
}
