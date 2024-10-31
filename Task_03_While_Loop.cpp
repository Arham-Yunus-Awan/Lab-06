#include <iostream>
using namespace std;
int main() {
  int num_rows;
  cout << "Enter row number: ";
  cin >> num_rows;
  int i = 1;
  while (i <= num_rows){
      int j = 1;
      while (j <= i){
          cout << i;
          j++;
      }
      cout << endl;
      i++;
  }
  return 0;
}
