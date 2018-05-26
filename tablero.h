#ifndef TABLERO_H
#define TABLERO_H

class Tablero{
	private:
		int xinicial;
		int yinicial;
		int xfinal;
		int yfinal;
		int piezacorrecta;
		char matriz[8][8];

	public:
		Tablero();
		void crearMatriz();
		void imprimirMatriz();
		void movimientopieza(int,int,int,int,int);
		void movimientopieza1(int,int,int,int,int);
		~Tablero();




};
#endif
