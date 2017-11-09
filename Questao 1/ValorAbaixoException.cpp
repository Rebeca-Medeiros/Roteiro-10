#include "ValorAbaixoException.h"
#include <iostream>
#include <stdexcept>

using namespace std;

ValorAbaixoException::ValorAbaixoException(): runtime_error("Numero invalido(menor que 0)"){
  cout << endl;
}
