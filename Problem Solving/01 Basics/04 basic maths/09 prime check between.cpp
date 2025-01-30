#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
  if (num <= 1) {
    return false;
  }
  for (int i = 2; i <= sqrt(num); i++) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int lower, upper;
  cout << "Enter lower limit: ";
  cin >> lower;
  cout << "Enter upper limit: ";
  cin >> upper;
  cout << "Prime numbers between " << lower << " and " << upper << " are: " << endl;
  for (int i = lower; i <= upper; i++) {
    if (isPrime(i)) {
      cout << i << " ";
    }
  }
  cout << endl;
  return 0;
}

