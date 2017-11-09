#ifndef VALORACIMAEXCEPTION_H
#define VALORACIMAEXCEPTION_H
#include <exception>
#include <stdexcept>

class ValorAcimaException: public std::runtime_error{
  public:
    ValorAcimaException();
};

#endif // VALORACIMAEXCEPTION_H
