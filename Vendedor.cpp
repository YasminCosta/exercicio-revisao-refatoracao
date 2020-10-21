#include <string>
#include "Empregado.hpp"
#include <iostream>

class Vendedor : public Empregado {

  public:	
			double quotaMensalVendas;

			double quotaTotalAnual() {
			return quotaMensalVendas * 12;
		}
	void saidaVendedor (double horasTrabalhadas){
    this->saidaEmpregado(horasTrabalhadas);
		std::cout << "Quota vendas: " << this->quotaTotalAnual() << std::endl;
  	std::cout << std::endl;
	}

};

