#include <iostream>
#include <string>

#include "carro.h"

Carro::Carro (std::string modelo_, std::string ano_, float capacidadeMax_, float consumo_){
	m_modelo = modelo_;
	m_ano = ano_;
	m_capacidadeMax = capacidadeMax_;
	m_consumo = consumo_;
	m_QtdeCombustivel = 0;

	std::cout << " Foi criado um " <<m_modelo<< " ano "<<m_ano<<
	" suporta "<<m_capacidadeMax<<" litros e consome "<<m_consumo<<" Km/L. " <<std::endl;
}

        
float Carro::getCapacidadeMax(){
	return m_capacidadeMax;
}
        
float Carro::getQtdeCombustivel(){
	return m_QtdeCombustivel;
}
        
float Carro::getConsumo(){
	return m_consumo;
}

float Carro::getDistanciaPercorrida (){
	return m_distPercorrida;
}




float Carro::getAutonomia(){
	return (m_QtdeCombustivel-1.0)*m_consumo;
}
        
void Carro::mover(int qntdAndada){
	if (m_QtdeCombustivel >1 && qntdAndada < ((m_QtdeCombustivel-1.0)*m_consumo)){
		m_distPercorrida += qntdAndada;
		m_QtdeCombustivel -= m_consumo;  
	}
	else
		std::cerr << "Combustível insuficiente para andar " << std::endl;
}
        
void Carro::abastecer(int qntdAbastecida){
	if (qntdAbastecida > (m_capacidadeMax-m_QtdeCombustivel)){
		std::cerr << " Impossível abastecer essa quantidade " << std::endl;
	}
	else
		m_QtdeCombustivel += qntdAbastecida;
}
        








