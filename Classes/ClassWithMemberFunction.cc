//Program to demonstrate a very simple example of a class.
//A better version will be displayed later
//Taken from page 555 of Savitch, 9th edition
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
  cout << "Enter your birthday:\n";
  cout << "Enter the month as a number: ";
  cin >> birthday.month;
  cout << "Enter the day of the month: ";
  cin >> birthday.day;

  cout << "Today's date is ";
  today.output();
  cout << "Your birthday is ";
  birthday.output();

  if(today.month == birthday.month && today.day == birthday.day){
    cout << "Happy Birthday!\n";
  }else{
    cout << "Happy Unbirthday!\n";
  }
  return 0;
}

void DayOfYear::output(void){
  cout << "month = " << month;
  cout << ", day = " << day << endl;
}