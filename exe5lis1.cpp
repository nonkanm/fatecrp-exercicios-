// exercicio 5 calcular as raizes de x
#include <iostream>
#include<cmath>
using namespace std;
int main() {
  int a , b, c , x,x1;
  cout << "entre com os valor de a:";
  cin >> a;
  cout << "entre com os valor de b: ";
  cin >> b;
  cout<< " entre com o valor de c: ";
  cin >> c;
  x= (-b-sqrt(b*b-4*a*c))/2*a;
  x1=(-b+sqrt(b*b-4*a*c))/2*a;
  cout << "as raizes de x sao :" << x <<'\n' << x1 << endl; 
  }