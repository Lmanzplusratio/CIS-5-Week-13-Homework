#include <iostream>
#include <string>

// Practice 13 · Part 2 — Isaiah Salvatierra
// CIS 5 Week 13 · The struct your final needs

using std::cout;
using std::cin;
using std::string;
using std::endl;

struct Expense {
  string category;
  double amount;
  int frequency;
};

void printExpense(const Expense& a) {
  cout << "Category: " << a.category << endl << "You spend $" << a.amount << " a month" << endl << "And you do it " << a.frequency   << " times a month" << endl;
}
   
int main() {
 Expense Monthly{"Groceries", 150, 2};
 printExpense(Monthly);
 
  return 0;
}
