#ifndef PIEZAS_H
#define PIEZAS_H

class Piezas{
	private:
		int xinicial;
		int yinicial;
		int xfinal;
		int yfinal;

	public:
		Piezas();
		Piezas(int,int,int,int);//constructor sobrecargado
		void movimientopieza();
		~Piezas();




};
#endif
