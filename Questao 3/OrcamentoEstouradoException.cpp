#include "OrcamentoEstouradoException.h"
#include <iostream>

using namespace std;

OrcamentoEstouradoException::OrcamentoEstouradoException(): runtime_error("O orcamento foi estourado"){
    cout << endl;
}
