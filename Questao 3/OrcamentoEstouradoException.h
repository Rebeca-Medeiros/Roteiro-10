#ifndef ORCAMENTOESTOURADOEXCEPTION_H
#define ORCAMENTOESTOURADOEXCEPTION_H
#include <exception>
#include <stdexcept>
#include <iostream>

class OrcamentoEstouradoException: public std::runtime_error{
    public:
        OrcamentoEstouradoException();
}

#endif //ORCAMENTOESTOURADOEXCEPTION_H
