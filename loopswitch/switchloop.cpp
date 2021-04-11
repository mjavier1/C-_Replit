/*
I Request 

*/

#include <iostream>
using namespace std;
int main(){
  cout << "Welcome to Atm" << endl;
  cout <<"*****************" <<endl;
  int balance = 10000, amount;
  char option;
  cout << "for balance enquiry press e " <<endl;
  cout << "for money withdraw1 press w"<<endl;
  cout << "for cash deposite press d"<<endl;
  cout << "for quir press q"<<endl;
  switch(option)
  {
    case'e':
    cout << "\nYour balance is" << balance << endl;
    break;
    case'w':
    cout << "\nenter amount to withdraw" << endl;
    cin >> amount;
    if((amount<=balance) && (amount % 500==0)){
      balance -= amount;
      cout << "\nyour remaing balance is" << balance <<endl;
break;
    }
    else
    cout << "\nEnter vaild amount" <<endl;


  
  break;
  case'd':
  cout << "\nEnter amount to deposite";
  cin >> amount;
  balance =+ amount;
  cout <<"\nyour new balance is " << balance;
break;
case'q':
cout << "\n\nThank" << endl;
break;
default:
cout << "\ninvalid option" <<endl;

  system("pause");
  return 0;
}