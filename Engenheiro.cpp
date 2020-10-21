#include <string>
#include "Empregado.hpp"
#include <iostream>

class Engenheiro : public Empregado {

  public:
  	int projetos;
  
    void saidaEngenheiro (double horasTrabalhadas){
      this->saidaEmpregado(horasTrabalhadas);
      std::cout << "Projetos: " << this->projetos << std::endl;
      std::cout << std::endl;
    }
};
