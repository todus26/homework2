#include <stdio.h>

int main(){
    char charType;                                                //문자 데이터 유형 선언
    int integerType;                                              //정수 데이터 유형 선언
    float floatType;                                              //실수(단정도 부동 소수점) 데이터 유형 선언
    double doubleType;                                            //실수(배정도 부동 소수점) 데이터 유형 선언

    //위에서 선언한 네 가지 변수의 크기 출력
    printf("----------[정새연] [2023041074]----------\n");
    printf("Size of char: %ld byte\n",sizeof(charType));          //1bytes
    printf("Size of int: %ld bytes\n",sizeof(integerType));       //4bytes
    printf("Size of float: %ld bytes\n",sizeof(floatType));       //4bytes
    printf("Size of double: %ld bytes\n",sizeof(doubleType));     //8bytes
    printf("-----------------------------------------\n");

    //C언어 라이브러리에 존재하는 데이터 유형의 크기 출력(위 출력 결과와 같음)
    printf("Size of char: %ld byte\n",sizeof(char));              //1bytes
    printf("Size of int: %ld bytes\n",sizeof(int));               //4bytes
    printf("Size of float: %ld bytes\n",sizeof(float));           //4bytes
    printf("Size of double: %ld bytes\n",sizeof(double));         //8bytes
    printf("-----------------------------------------\n");

    //포인터의 크기 출력-64bit 머신에서는 포인터 크기는 8bytes
    printf("Size of char*: %ld byte\n",sizeof(char*));            //8bytes
    printf("Size of int*: %ld bytes\n",sizeof(int*));             //8bytes
    printf("Size of float*: %ld bytes\n",sizeof(float*));         //8bytes
    printf("Size of double*: %ld bytes\n",sizeof(double*));       //8bytes

    return 0;
}