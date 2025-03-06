#include <iostream>
using namespace std;

class Dog {
  public:
  bool eat() {
    cout<<"a mancat!\n";
    return true;
  };

  int get_age() {
    return age;
  }
  int set_age(int new_age) {
    age = new_age;
    return age;
  }
private:
  int age;
};

int main(){
  Dog dog;
  dog.set_age(10);
  cout<<dog.get_age();
  // dog.eat();
  // Dog dog1 = dog;
  return 0;
}