// debug3.c
// 프로그램의 목적은 정수 배열을 할당하고 이를 난수로 초기화하는 것입니다.
// 그러나 프로그램 세그먼트 오류가 발생했습니다.
// gdb를 사용하여 오류를 찾으십시오.

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
  printf("%ld \n", INT_MAX);
  int n = INT_MAX;
  int A[n];
  int i = 0;
  while (i<n)
  A[i] = rand()%10;

  return EXIT_SUCCESS;
}

/*
질문에 답해 주세요.

1. 컴파일할 때 어떤 오류 메시지가 나타났나요?
코드를 보면 INT_MAX를 사용하기 위해 헤더 파일 <limits.h>가 포함되지 않았습니다. 또한 EXIT_SUCCESS를 실행할 수 없습니다.
2. 프로그램에 어떤 문제가 있었나요?
A를 선언할 때 크기를 INT_MAX로 지정했습니다. 
3. 프로그램은 어떻게 수정하셨나요?
<limits.h> 헤더를 포함시켜 INT_MAX를 사용할 수 있도록 하고, 배열 A를 수정하였습니다. EXIT_SUCCESS를 실행하기 위해 #include <stdlib.h>를 추가하였습니다.


*/
