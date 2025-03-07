#include <iostream>
using namespace std;

int main() {
int value;

  for (int i = 1; i <= 5;i++) {
    cout <<"Multiplication: " <<i << "\n";

    for (int j = 1; j <= 10; j++) {
         value = i*j;

      cout << value << "\n";

    }
  }
  return 0;
}
