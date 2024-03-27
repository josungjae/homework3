#include <stdio.h>
#include <stdlib.h>
// main 함수 정의한다.
void main() {
    // 정수형 배열 list 선언 및 초기화한다.
    int list[5];
    // 정수형 포인터 배열 plist 선언한다.
    int *plist[5];
    // list 배열의 0번째 요소에 값 할당한다.
    list[0] = 10;
    // list 배열의 1번째 요소에 값 할당한다.
    list[1] = 11;
    // plist 배열의 0번째 요소에 동적 메모리 할당한다.
    plist[0] = (int*)malloc(sizeof(int));
    // 학번과 이름 출력한다.
    printf("[----- [Jo sung jae] [2023078001] -----]\n");
    // list 배열의 0번째 요소의 값 및 주소 출력한다.
    printf("list[0] \t= %d\n", list[0]);
    printf("list \t\t= %p\n", list);
    printf("&list[0] \t= %p\n", &list[0]);
    printf("list + 0 \t= %p\n", list+0);
    printf("list + 1 \t= %p\n", list+1);
    printf("list + 2 \t= %p\n", list+2);
    printf("list + 3 \t= %p\n", list+3);
    printf("list + 4 \t= %p\n", list+4);
    // list 배열의 4번째 요소의 주소 출력한다.
    printf("&list[4] \t= %p\n", &list[4]);
    // 동적으로 할당된 메모리 해제한다.
    free(plist[0]);
}
