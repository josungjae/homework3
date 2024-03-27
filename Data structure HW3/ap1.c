#include <stdio.h>
#include <stdlib.h>
// main 함수 정의한다.
void main() {
    // 정수형 배열 list 선언한다.
    int list[5];
    // 포인터 배열 plist 선언 및 초기화한다.
    int *plist[5] = {NULL,};
    // 동적 메모리 할당을 통해 포인터 배열의 첫 번째 요소에 정수형 크기만큼 메모리 할당한다.
    plist[0] = (int *)malloc(sizeof(int));
    // 배열 list의 첫 번째 요소에 값 1 저장한다.
    list[0] = 1;
    // 배열 list의 두 번째 요소에 값 100 저장한다.
    list[1] = 100;
    // 포인터 배열 plist의 첫 번째 요소가 가리키는 메모리에 값 200 저장한다.
    *plist[0] = 200;
    // 학번과 이름 출력한다
    printf("[----- [Jo sung jae] [2023078001] -----]\n");
    // 배열 list의 첫 번째 요소 값 및 주소 출력한다.
    printf("list[0]            = %d\n", list[0]);
    printf("&list[0]           = %p\n", &list[0]);
    printf("list               = %p\n", list);
    printf("&list              = %p\n", &list);
    printf("----------------------------------------\n\n");
    // 배열 list의 두 번째 요소 값 및 주소 출력한다.
    printf("list[1]            = %d\n", list[1]);
    printf("&list[1]           = %p\n", &list[1]);
    printf("*(list+1)          = %d\n", *(list + 1));
    printf("list+1             = %p\n", list+1);
    printf("----------------------------------------\n\n");
    // 포인터 배열 plist의 첫 번째 요소가 가리키는 값 및 주소 출력한다.
    printf("*plist[0]          = %d\n", *plist[0]);
    printf("&plist[0]          = %p\n", &plist[0]);
    printf("&plist             = %p\n", &plist);
    printf("plist              = %p\n", plist);
    printf("plist[0]           = %p\n", plist[0]);
    printf("plist[1]           = %p\n", plist[1]);
    printf("plist[2]           = %p\n", plist[2]);
    printf("plist[3]           = %p\n", plist[3]);
    printf("plist[4]           = %p\n", plist[4]);
    // 동적으로 할당된 메모리 해제한다.
    free(plist[0]);
}