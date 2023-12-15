// debug1.c
// 이 잘못된 프로그램을 디버그하세요.

#include <stdio.h>

int factorial(int x) {
  if (x == 0) {
    return 1;
  } else {
    return x * factorial(x-1);
  }
}

int main() {
  // 5의 계승값을 구하세요.
  // 5의 계승은 5 x 4 x 3 x 2 x 1이다(5!로 표시).
  
  int x = 5;
  
  printf("The factorial of %d is: %d", x, factorial(x));
  // 예측 출력: The factorial of 5 is 120.
  
  return 0;
}

/*
질문에 답해 주세요.

1. 컴파일할 때 어떤 오류 메시지가 나타났나요?
printf 문이 괄호()를 제대로 닫지 않았다.
2. 프로그램에 어떤 문제가 있었나요?
factorial 함수에서 재귀 호출이 잘못되었습니다. if (x == 0) 일 때 0을 반환하면 안되며, 대신에 1을 반환해야 합니다. printf 함수의 괄호가 닫히지 않았다.
프로그램은 어떻게 수정하셨나요?
3. 프로그램은 어떻게 수정하셨나요?
factorial 함수에서 x == 0 일 때 1을 반환하도록 수정하고, printf 문의 괄호를 닫아서 컴파일 오류를 해결하였습니다.



*/
