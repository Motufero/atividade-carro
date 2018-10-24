#ifndef _CARRO_H_
#define _CARRO_H__


#include <iostream>
#include <string>


class Carro {
    private:
        std::string m_modelo;
        std::string m_ano;
        float m_capacidadeMax;
		float m_QtdeCombustivel;
		float m_consumo;
		float m_distPercorrida;
    public:
        Carro (std::string modelo_, std::string ano_, float capacidadeMax_, float consumo_);

		float getCapacidadeMax ();
		float getQtdeCombustivel ();
		float getConsumo ();
		float getDistanciaPercorrida ();

		
		float getAutonomia ();
        void mover (int);
		void abastecer (int);
};

#endif

