#include <iostream>
#include "Calculator.h"


using namespace std;

int main() {

  double x = 0.0;
  double y = 0.0;
  double result = 0.0;
  char oper = '+';

  cout << "Calculadora \n" << endl;
  cout << "Por favor entre com um operador: formato a+b | a-b | a*b | a/b" << endl;

  Calculator c;
  while (true) {
    cin >> x >> oper >> y;
    result = c.Calculate(x, oper, y);
    cout << "Result is:" << result << endl;
  }

  return 0;
}
