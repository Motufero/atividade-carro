#include <iostream>
#include <string>

#include "carro.h"

int main (){

	Carro meuCarro ( " Fusca " ," 1976 ", 40 , 7) ;
	meuCarro.mover(5) ;
	meuCarro.abastecer(35) ;
	std::cout << " Abastecido ! Temos agora " << meuCarro.getQtdeCombustivel()
		<< " litros . " << std::endl ;
	std::cout << " Autonomia atual de " << meuCarro.getAutonomia() << " km . "
		<<std::endl ;
	meuCarro.mover(127.6) ;
	meuCarro.mover(3.2) ;
	std::cout << " Ja percorremos " << meuCarro.getDistanciaPercorrida()
		<< " km " << std::endl ;
	std::cout << " Ainda temos " << meuCarro.getQtdeCombustivel()
		<< " litros . " << std::endl ;
	std::cout << " Autonomia atual de " << meuCarro.getAutonomia() << " km . "
		<< std::endl ;

return 0;
}
