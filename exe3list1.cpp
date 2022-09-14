//exercicio 3 imc 
#include <iostream>
using namespace std;

int main() {
  float p, a,m,d,e;
  cout << "entre com o valor de peso e altura : " << endl;
  cin >> p >> a;
  e= a/100;
 d = e * e;
  m = p/d;
  
  cout << " seu imc é : " << m << endl;
}