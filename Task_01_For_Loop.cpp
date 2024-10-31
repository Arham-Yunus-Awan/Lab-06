#include <iostream>
using namespace std;
int main() {
  // Task 1
  for (int i = 1; i < 8;i++){
      for (int j = 1; j <= i; j++){
          cout << "*";
      }
      cout << endl;
  }
  return 0;
}
