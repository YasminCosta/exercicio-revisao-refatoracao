#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  public:
    std::string nome;
    double salarioHora;

    double pagamentoMes(double horasTrabalhadas) {
 
      double totalHoras = horasTrabalhadas;
	  
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > 8) {
        double horaExtra = horasTrabalhadas - 8;
        totalHoras += horaExtra / 2;
      }
	  return totalHoras * salarioHora;
    }

    void saidaEmpregado (double horasTrabalhadas){
      std::cout << "Nome: " << this->nome << std::endl;
      std::cout << "Salario Mes: " << this->pagamentoMes(horasTrabalhadas) << std::endl;
    }
	
};

#endif
