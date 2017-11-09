#include "ValorMuitoAcimaException.h"
#include <iostream>
#include <stdexcept>

using namespace std;

ValorMuitoAcimaException::ValorMuitoAcimaException(): runtime_error("Numero invalido(mair que 1000)"){
  cout << endl;
}
