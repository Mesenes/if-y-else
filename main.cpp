#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int n;
  cout << "introduce un valor :";
  cin >> n;
  if ( n >= -10 and n <10){
    cout<<"El numero esta dentro del intervalo[-10,10]";
  } else {
    cout <<"El numero no esta dentro del intervalo [-10,10]";
  }
}