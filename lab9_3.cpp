#include<iostream>
#include<string>
using namespace std;

int main(){
  int age, h, b;
  string name;
  cout << "Enter your age: ";
  cin >> age;
  if(age <= 25){
    cout << "Enter your height: ";
    cin >> h;
    if(h < 100){
      name = "Chopper";
    }
    else if(h < 180){
      name = "Usopp";
    }
    else{
      cout << "Enter your bounty: ";
      cin >> b;
      if(b > 1.1e9){
        name = "Zoro";
      }else{
        name = "Sanji";
      }
    }
  }
  else if(age <= 60){
    cout << "Enter your bounty: ";
    cin >> b;
    if(b > 500e6){
      name = "Jinbe";
    }else{
      name = "Franky";
    }
  }else{
    name = "Brook";
  }
  cout << "Your character = " << name;
}
