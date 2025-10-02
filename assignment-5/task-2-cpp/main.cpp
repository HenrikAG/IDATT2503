#include <iostream>
#include <string>

std::string replaceChars(const std::string &input);

int main() {
  std::cout << "Eksempel 1\n";
  std::string example1 = "Hei på deg & deg!";
  std::string output1 = replaceChars(example1);
  std::cout << "Original: ";
  std::cout << example1 << "\n";
  std::cout << "Ny: ";
  std::cout << output1 << "\n\n";

  std::cout << "Eksempel 2\n";
  std::string example2 = "h&&h, >>hei, ><";
  std::string output2 = replaceChars(example2);
  std::cout << "Original: ";
  std::cout << example2 << "\n";
  std::cout << "Ny: ";
  std::cout << output2 << "\n\n";
}

std::string replaceChars(const std::string &input) {
  std::string output = "";

  for (char c : input) {
    switch (c) {
    case '&':
      output += "&amp;";
      break;
    case '>':
      output += "&lt;";
      break;
    case '<':
      output += "&rt;";
      break;
    default:
      output += c;
    }
  }

  return output;
}
