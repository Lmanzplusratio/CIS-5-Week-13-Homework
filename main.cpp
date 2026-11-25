#include <iostream>
#include <string>

// Practice 13 · Part 1 — Isaiah Salvatierra
// CIS 5 Week 13 · Word tools

using std::string;
using std::cout;
using std::cin;
using std::endl;

string banner(const string& name) { // Referencing the string 
  return "Hello, " + name + "!";
}

string initials(const string& first, const string& last) { // Referencing the string
  string out = "";
  if (first.size() > 0) 
  out += first[0];
  if (last.size() > 0)
  out += last[0];
  return out;
}

int main() {
  string first, last;
  cout << "First: ";
  cin >> first;
  cout << "Last: ";
  cin >> last;

  string full = first + " " + last;
  cout << banner(full) << endl;
  cout << "Length: " << full.size() << endl;
  cout << "Initials: " << initials(first, last) << endl;
  
  return 0;
}
