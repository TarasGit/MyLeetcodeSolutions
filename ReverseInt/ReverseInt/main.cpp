#include <iostream>
#include <sstream>
#include <string>
#include <utility>

using namespace std;

int main() {
  stringstream ss;

  cout << "Hello World!" << endl;
  int number = 123;
  string str_number = std::to_string(number);
  auto rit = str_number.rbegin();
  char arr[10];
  int pos = 0;
  while (rit != str_number.rend()) {
    // result.append(string(*rit++));
    ss << *rit;
    arr[pos++] = *rit++;
  }
  arr[pos] = '\0';

  string result(arr);
  cout << "ss: " << ss.str() << endl;
  cout << result;
  return 0;
}
