#include "SistemaGerenciaFolha.h"
#include "FuncionarioNaoExisteException.h"
#include <iostream>

using namespace std;

void SistemaGerenciaFolha::setFuncionarios(Funcionario f){
  //int i;
  funcionarios[MAX] = f;
}

Funcionario SistemaGerenciaFolha::getFuncionarios(){
  return funcionarios[MAX];
}

double SistemaGerenciaFolha::calculaValorTotal(){
    double valortotal;
    valortotal = 0;
    
    for(int i = 0; i < MAX; i++){
        valortotal = valortotal + f[i].calculaSalario();
        cout << "O valor total e R$" << valortotal << endl;
    }

}

double SistemaGerenciaFolha::consultaSalarioFuncionario(){
    int i;

    if(MAX <= i){
        throw FuncionarioNaoExisteException();
    } else {
        f[MAX].calculaSalario();
    }

    return 1;
}
