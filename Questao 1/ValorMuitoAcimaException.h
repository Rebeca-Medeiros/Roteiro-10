#ifndef VALORMUITOACIMAEXCEPTION_H
#define VALORMUITOACIMAEXCEPTION_H
#include <exception>
#include <stdexcept>

class ValorMuitoAcimaException: public std::runtime_error{
  public:
    ValorMuitoAcimaException();
};

#endif //VALORMUITOACIMAEXCEPTION_H
