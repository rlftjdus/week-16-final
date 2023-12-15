// debug2.c
// 이 프로그램의 목적은 정수를 읽고 이를 인쇄하는 것입니다. 그러나 프로그램 세그먼트 오류가 발생했습니다. 
// gdb를 사용하여 오류를 찾으십시오.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
  int x;
  printf("Please enter an integer : ");
  scanf("%d", &x);
  printf("the integer entered was %d \n", x);
  return EXIT_SUCCESS;
} 


/*
질문에 답해 주세요.

1. 컴파일할 때 어떤 오류 메시지가 나타났나요?
scanf 함수의 인자로 변수 x에 대한 주소가 전달되어야 하는데, 현재는 그냥 값이 전달되고 있습니다. 또한 EXIT_SUCCRSS를 실행하기 위한 <stdlib.h>가 없다.
2. 프로그램에 어떤 문제가 있었나요?
scanf("%d", x);에서 & 연산자를 사용하여 변수 x의 주소를 전달하지 않았습니다. 
3. 프로그램은 어떻게 수정하셨나요?
scanf 함수에  & 연산자를 사용하였습니다. #include <stdlib.h>를 추가했습니다.
*/
