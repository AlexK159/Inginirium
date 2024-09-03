#include <iostream>
#include <string>

using namespace std;

int main() {
  string input;
  cout << "Ты кто?" << endl;
  getline(cin, input);

  if (input == "я человек" or "Я человек") {
    cout << "А я - компьютер" << endl;
  }

  return 0;
}
