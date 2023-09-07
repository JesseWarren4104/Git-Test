#include <iostream>

using namespace std;

int sum(int n){
  int accumulator = 0;

  for(int i = 1; i <= n; i++){
    accumulator += i;
  }
  
  return accumulator;
}

int product(int n){
  int accumulator = 1;

  for(int i = 1; i <= n; i++){
    accumulator *= i;
  }

  return accumulator;
}

int main() {

  cout << "Enter a number: ";
  int n; cin >> n; cout << endl;

  int answer = sum(n);
  int answer2 = product(n);
  cout << "The sum of the numbers from 1 to " << n << " is: " << answer << endl;
  cout << "The product of the numbers from 1 to " << n << " is: " << answer2 << endl;
  
  return 0;
}


  
