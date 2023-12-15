

int add(int a, int b) {
  return a + b;
}

int subtract(int a, int b) {
  return a - b;
}

int multiply(int a, int b) {
  return a * b;
}

int divide(int a, int b) {
  assert(b != 0); 
  return a / b;
}

int factorial(int x) {
  if (x == 0) {
    return 1;
  } else {
    return x * factorial(x - 1);
  }
}