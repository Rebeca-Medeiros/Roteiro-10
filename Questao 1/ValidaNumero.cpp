#include "TestaValidaNumero.h"
#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcimaException.h"
#include <iostream>

using namespace std;

int main(){

  int n;
  TestaValidaNumero t;

  cout << "Digite um numero: ";
  cin >> n;

  t.setNumero(n);

  t.validaNumero(t.getNumero());

  return 0;
}
