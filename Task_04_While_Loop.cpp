#include <iostream>
using namespace std;
int main() {
  int num_weeks = 3;
  int i = 1;
  while (i <= num_weeks){
      cout << "Week " << i << endl;
      int j = 1;
      while (j <= 7){
          cout << "\t" << "Day " << j << endl;
          j++;
          }
      i++;
  }
  return 0;
}
