#include "TestaValidaNumero.h"
#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcimaException.h"
#include <exception>
#include <iostream>

using namespace std;

void TestaValidaNumero::setNumero(int num){
  numero = num;
}

int TestaValidaNumero::getNumero(){
  return numero;
}

void TestaValidaNumero::validaNumero(int num){
  if(numero > 0 && numero <= 100){
    cout << "Numero valido" << endl;
  } else {
    if(numero <= 0){
      throw ValorAbaixoException();
    } else {
        if(numero > 100 && numero < 1000){
          throw ValorAcimaException();
        } else {
            if(numero >= 1000){
              throw ValorMuitoAcimaException();
            }
        }
    }
  }
}
