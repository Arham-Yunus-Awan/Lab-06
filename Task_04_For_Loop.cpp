#include <iostream>
using namespace std;
int main() {
  int num_weeks = 3;
  int i = 1;
  for (int i = 1;i <= num_weeks;i++){
      cout << "Week " << i << endl;
      int j = 1;
      for (int j = 1;j <= 7;j++){
          cout << "\t" << "Day " << j << endl;
          }
  }
  return 0;
}
