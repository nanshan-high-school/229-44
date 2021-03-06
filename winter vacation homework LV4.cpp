#include <iostream>
using namespace std;

int dateFirst(int);
void day();
int date(int,int,int);

int main() {
  int dateFirstDate, month = 1, year;
  cout << "請輸入年份(西元,阿拉伯數字)\n";
  cin >> year;
  dateFirstDate = dateFirst(year);
  
  for (int dayInput = 1; dayInput < 13; dayInput++) {
    day();
    for (int dateInput1 = 0; dateInput1 < 1; dateInput1++){
      dateFirstDate = date(month,dateFirstDate,year);
      if (month == 12) {
        month = 1;
      } else {
        month++;
      }
    }
  }
  
  return 0;
}

int dateFirst(int year) {
  return (1 + (year - 1900) + (year - 1900) / 4 - (year - 1900) / 100 + year / 400 - 4) % 7;
}

void day() {
  char dayyyyyy[] = "一 二 三 四 五 六 日\n";
  cout << dayyyyyy;
  return;
}

int date(int month,int dateFirstDate,int year) {
  int dateLimit;
  switch(month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      dateLimit = 32;
      break;
    case 4:
    case 6:
    case 9:
    case 11:
      dateLimit = 31;
      break;
    case 2:
      if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        dateLimit = 30;
      } else {
        dateLimit = 29;
      }
      break;
    default:
      break;
  }
  
  int spaceTotal, dateInput3;
  switch(dateFirstDate) {
     case 1:
      spaceTotal = 0;
      dateInput3 = 0;
      break;
    case 2:
      spaceTotal = 3;
      dateInput3 = 6;
      break;
    case 3:
      spaceTotal = 6;
      dateInput3 = 5;
      break;
    case 4:
      spaceTotal = 9;
      dateInput3 = 4;
      break;
    case 5:
      spaceTotal = 12;
      dateInput3 = 3;
      break;
    case 6:
      spaceTotal = 15;
      dateInput3 = 2;
      break;
    case 0:
    case 7:
      spaceTotal = 18;
      dateInput3 = 1;
      break;
    default:
      break;
  }
  
  for (int space = 0; space < spaceTotal; space++) {
    cout << " ";
  }
  
  for (int dateInput2 = 1; dateInput2 < dateLimit; dateInput2++) {
    if (dateInput2 % 7 == dateInput3) {
      cout << dateInput2 << endl;
    } else if (dateInput2 == dateLimit - 1) {
      cout << dateInput2 << endl;
    } else if (dateInput2 > 9) {
      cout << dateInput2;
      for (int space = 1; space < 2; space++) {
        cout << " ";
      }
    } else if (dateInput2 == dateLimit - 1) {
      cout << dateInput2 << endl;
    } else {
      cout << dateInput2;
      for (int space = 1; space < 3; space++) {
        cout << " ";
      }
    }
  }
  
  return ((dateLimit - 1) % 7 + dateFirstDate) % 7;
}