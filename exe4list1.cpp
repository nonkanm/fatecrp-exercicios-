// exercico 4 redimento 
#include <iostream>
#include<cmath>
using namespace std;
int main() {
  double  p, i,n,j,m;
  cout<< "entre com o valor inicial:";
  cin >> i;
  cout<< "entre com o meses :";
  cin >> n;
  cout<< "entre com os juros ";
  cin >> j;
  m = i*pow((1+j),n);
  cout << "o valor final sera : " << m << endl;
}