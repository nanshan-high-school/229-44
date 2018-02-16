#include <iostream>
using namespace std;

void dateFirst(int);
void day();

int main() {
  int dateFirstDate;
  cout << "請輸入當月一號星期幾(請輸入阿拉伯數字)\n";
  cin >> dateFirstDate;
  day();
  dateFirst(dateFirstDate);
  
  return 0;
}

void day() {
  char dayyyyyy[] = "一 二 三 四 五 六 七\n";
  cout << dayyyyyy;
  return;
}

void dateFirst(int dateFirstDate) { 
  int spaceTotal, dateLimit;
  switch(dateFirstDate) {
     case 1:
      spaceTotal = 0;
      dateLimit = 8;
      break;
    case 2:
      spaceTotal = 3;
      dateLimit = 7;
      break;
    case 3:
      spaceTotal = 6;
      dateLimit = 6;
      break;
    case 4:
      spaceTotal = 9;
      dateLimit = 5;
      break;
    case 5:
      spaceTotal = 12;
      dateLimit = 4;
      break;
    case 6:
      spaceTotal = 15;
      dateLimit = 3;
      break;
    case 7:
      spaceTotal = 18;
      dateLimit = 2;
      break;
    default:
      cout <<"沒有資料";
      break;
  }
  
  for (int space = 0; space < spaceTotal; space++) {
    cout << " ";
  }
  for (int dateInput = 1; dateInput < dateLimit; dateInput++) {
    cout << dateInput;
    if (dateInput < dateLimit - 1) {
      for (int space = 1; space < 3; space++) {
        cout << " ";
      }
    }
  }
  
  return;
}