#include "ValorAcimaException.h"
#include <iostream>
#include <stdexcept>

using namespace std;

ValorAcimaException::ValorAcimaException(): runtime_error("Numero invalido(maior que 100 e menor que 1000)"){
  cout << endl;
}
