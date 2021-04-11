#include <iostream>
using namespace std;
int main(){
int a,*b;
cout << "Enter number";
cin >>a;
b=&a;
cout << "Adress of a is " << b << endl;;
cout << "vaLVUE of a is" << *b <<endl;


 system("pause");
  return 0;

}
