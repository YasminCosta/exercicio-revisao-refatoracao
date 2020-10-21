#include "Engenheiro.cpp"
#include "Vendedor.cpp"

int main() {

  Engenheiro eng1;
  eng1.nome = "Joao Snow";
  eng1.salarioHora = 35;
  eng1.projetos = 3;
  //Parâmetro é quantidade de horas trabalhadas 
  eng1.saidaEngenheiro(9.5);
  
  Engenheiro eng2;
  eng2.nome = "Daniela Targaryen";
  eng2.salarioHora = 30;
  eng2.projetos = 1;
  //Parâmetro é quantidade de horas trabalhadas 
  eng2.saidaEngenheiro(8);
  
  Engenheiro eng3;
  eng3.nome = "Bruno Stark";
  eng3.salarioHora = 30;
  eng3.projetos = 2;
  //Parâmetro é quantidade de horas trabalhadas
  eng3.saidaEngenheiro(8);
  
  
  Vendedor vend1;
  vend1.nome = "Tonho Lannister";
  vend1.salarioHora = 20;
  vend1.quotaMensalVendas = 5000;
  //Parâmetro é quantidade de horas trabalhadas
  vend1.saidaVendedor(6);  
  
  Vendedor vend2;
  vend2.nome = "Jose Mormont";
  vend2.salarioHora = 25;
  vend2.quotaMensalVendas = 3000;
  //Parâmetro é quantidade de horas trabalhadas
  vend2.saidaVendedor(8);  
	
  Vendedor vend3;
  vend3.nome = "Sonia Stark";
  vend3.salarioHora = 30;
  vend3.quotaMensalVendas = 4000;
  //Parâmetro é quantidade de horas trabalhadas
  vend3.saidaVendedor(8);
  
  return 0;	
}
