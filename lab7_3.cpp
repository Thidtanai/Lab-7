#include <iostream>
#include <string>
using namespace  std;

int age, hi, propertie;
string status;

int main() {
  cout << "Enter your age: ";
  cin >> age;
  if(age <= 20){
    cout << "Enter your height: ";
    cin >> hi;
    if(hi < 160){
      status = "UNFRIEND";
    }else if(hi < 175){
      status = "FRIEND";
    }else{
      cout << "Enter your property: ";
      cin >> propertie;
      if(propertie > 69000000){
        status = "MARRIED";
      }else{
        status = "ONE-NIGHT-STAND";
      }
    }
  }else if(age < 30){
    cout << "Enter your property: ";
    cin >> propertie;
    if(propertie > 10000000){
      status = "BEST FRIEND";
    }else{
      status = "UNFRIEND";
    }
  }else{status = "UNFRIEND";}
  cout << "Your status = " << status;
  return 0;
}