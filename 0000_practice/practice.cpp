#include <iostream>
#include <vector>
using namespace std;

int main() {
  int num1 = 10;
  int num2 = 20;
  cout << num1 << ", " << num2 << endl;
  cout << sizeof(num1) << ", " << sizeof(num2) << endl;
  cout << &num1 << ", " << &num2 << endl;
  cout << "------------------------------" << endl;

  int *num3 = new int(10);
  int *num4 = num3;
  cout << num3 << ", " << num4 << endl;
  cout << *num3 << ", " << *num4 << endl;
  cout << sizeof(num3) << ", " << sizeof(num4) << endl;
  cout << &num3 << ", " << &num4 << endl;
  cout << "--------------Pointer modified----------------" << endl;
  *num3 = 30;
  cout << num3 << ", " << num4 << endl;
  cout << *num3 << ", " << *num4 << endl;
  cout << sizeof(num3) << ", " << sizeof(num4) << endl;
  cout << &num3 << ", " << &num4 << endl;
  cout << "------------------------------" << endl;
  return 0;
}