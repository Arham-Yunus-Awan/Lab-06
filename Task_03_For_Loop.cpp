#include <iostream>
using namespace std;
int main() {
  int num_rows;
  cout << "Enter row number: ";
  cin >> num_rows;
  for (int i = 1; i <= num_rows;i++){
      for (int j = 1; j <= i; j++){
          cout << i;
      }
      cout << endl;
  }
  return 0;
}
