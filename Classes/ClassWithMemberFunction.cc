//Program to demonstrate a very simple example of a class.
//A better version will be displayed later
#include<iostream>
using namespace std;

class DayOfYear{
public:
  void output();
  int month;
  int day;
};

int main(void){
  DayOfYear today, birthday;
  cout << "Enter today's date:\n";
  cout << "Enter the month as a number: ";
  cin >> today.month;
  cout << "Enter the day of the month: ";
  cin >> today.day;
}
