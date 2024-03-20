#include <stdio.h>

int main(){
    int i;                                            //정수형 변수 선언
    int *ptr;                                         //정수형 포인터 변수 선언
    int **dptr;                                       //정수형 이중 포인터 변수 선언
    i = 1234;                                         //i를 1234로 초기화

    //ptr에 주소를 할당하기 전의 값들 출력
    printf("----------[정새연] [2023041074]----------\n");
    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i);                  //i의 값 출력 : 1234
    printf("address of i == %p\n", &i);               //i의 주소 출력
    printf("value of ptr == %p\n", ptr);              //ptr 값 출력(선언 되기 전이라 랜덤 값)
    printf("address of ptr == %p\n", &ptr);           //ptr의 주소 출력

    ptr = &i;                                         //ptr에 i의 주소 할당
    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i);                  //i의 값 출력 : 1234
    printf("address of i == %p\n", &i);               //i의 주소 출력
    printf("value of ptr == %p\n", ptr);              //ptr의 값 출력 : i의 주소
    printf("address of ptr == %p\n", &ptr);           //ptr의 주소 출력(ptr에 i를 할당하기 전과 동일)
    printf("value of *ptr == %d\n", *ptr);            //ptr이 가리키는 값 출력 :i 의 값

    //dptr에 ptr의 주소 할당
    dptr = &ptr;
    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i);                  //i의 값 출력
    printf("address of i == %p\n", &i);               //i의 주소 출력
    printf("value of ptr == %p\n", ptr);              //ptr의 값 출력 : i의 주소
    printf("address of ptr == %p\n", &ptr);           //ptr의 주소 출력
    printf("value of *ptr == %d\n", *ptr);            //ptr이 가리키는 값 출력 : i의 값
    printf("value of dptr == %p\n", dptr);            //dptr의 값 출력 : ptr의 주소
    printf("address of dptr == %p\n", &dptr);         //dptr의 주소 출력
    printf("value of *dptr == %p\n", *dptr);          //dptr이 가리키는 값 출력 : ptr의 값 : i의 주소
    printf("value of **dptr == %d\n", **dptr);        //dptr이 가리키는 ptr이 가리키는 값 : i의 값

    //ptr이 가리키는 값 변경 : i = 7777
    *ptr = 7777;
    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i);                  //변경된 i의 값 출력 : 7777
    printf("value of *ptr == %d\n", *ptr);            //ptr이 가리키는 값 : i의 값 : 7777
    printf("value of **dptr == %d\n", **dptr);        //dptr이 가리키는 ptr의 값 : i의 값 : 7777

    //dptr이 가리키는 ptr이 가리키는 값 변경 : i = 8888
    **dptr = 8888;
    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i);                  //변경된 i의 값 출력 : 8888
    printf("value of *ptr == %d\n", *ptr);            //ptr이 가리키는 값 출력 : i의 값 : 8888
    printf("value of **dptr == %d\n", **dptr);        //dptr이 가리키는 ptr의 값 출력 : i의 값 : 8888

    return 0;
}