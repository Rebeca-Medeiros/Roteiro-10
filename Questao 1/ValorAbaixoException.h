#ifndef VALORABAIXOEXCEPTION_H
#define VALORABAIXOEXCEPTION_H
#include <exception>
#include <stdexcept>
#include <iostream>

class ValorAbaixoException: public std::runtime_error{
  public:
    ValorAbaixoException();
};

#endif //VALORABAIXOEXCEPTION_H
