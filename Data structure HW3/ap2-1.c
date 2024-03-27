#include <stdio.h>
#define MAX_SIZE 100
// 함수 프로토타입 선언한다.
float sum1(float list[], int);
float sum2(float *list, int);
float sum3(int n, float *list);
// 전역 변수 선언한다.
float input[MAX_SIZE], answer;
int i;
// main 함수 정의한다
void main(void) {
    // input 배열에 0부터 MAX_SIZE-1까지의 값을 저장한다.
    for(i=0; i < MAX_SIZE; i++)
        input[i] = i;
    // 함수 호출 전 출력한다.
    printf("[----- [Jo sung jae] [2023078001] -----]\n");
    printf("--------------------------------------\n");
    printf(" sum1(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);
    // sum1 함수 호출 및 결과 출력한다.
    answer = sum1(input, MAX_SIZE);
    printf("The sum is: %f\n\n", answer);
    printf("--------------------------------------\n");
    printf(" sum2(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);
    // sum2 함수 호출 및 결과 출력한다.
    answer = sum2(input, MAX_SIZE);
    printf("The sum is: %f\n\n", answer);
    printf("--------------------------------------\n");
    printf(" sum3(MAX_SIZE, input) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);
    // sum3 함수 호출 및 결과 출력한다.
    answer = sum3(MAX_SIZE, input);
    printf("The sum is: %f\n\n", answer);
}
// sum1 함수 정의: 배열을 전달받음한다.
float sum1(float list[], int n) {
    // list와 &list를 출력하여 주소 확인한다.
    printf("list \t= %p\n", list);
    printf("&list \t= %p\n\n", &list);
    float tempsum = 0;
    // 배열의 합 계산한다.
    for(i = 0; i < n; i++)
        tempsum += list[i];
    return tempsum;
}
// sum2 함수 정의: 포인터를 전달받음한다.
float sum2(float *list, int n) {
    // list와 &list를 출력하여 주소 확인한다.
    printf("list \t= %p\n", list);
    printf("&list \t= %p\n\n", &list);
    float tempsum = 0;
    // 배열의 합 계산한다.
    for(i = 0; i < n; i++)
        tempsum += *(list + i);
    return tempsum;
}
// sum3 함수 정의: 배열 크기와 포인터를 전달받음한다.
float sum3(int n, float *list) {
    // list와 &list를 출력하여 주소 확인한다.
    printf("list \t= %p\n", list);
    printf("&list \t= %p\n\n", &list);
    float tempsum = 0;
    // 배열의 합 계산한다.
    for(i = 0; i < n; i++)
        tempsum += *(list + i);
    return tempsum;
}

