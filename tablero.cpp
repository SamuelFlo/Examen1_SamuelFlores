#include "tablero.h"
#include <iostream>
#include <cmath>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

Tablero::Tablero(){
}
Tablero::~Tablero(){
}

	
void Tablero::movimientopieza(int xinicial, int yinicial, int xfinal, int yfinal, int piezacorrecta){
	if((matriz[xinicial][yinicial]=='B')){
		if(((abs(xinicial-xfinal)==1)&&(abs(yinicial-yfinal)==1))||((abs(xinicial-xfinal)==2)&&(abs(yinicial-yfinal)==2))){
			if((matriz[xfinal][yfinal]=='N')&&((abs(xinicial-xfinal)==1)&&(abs(yinicial-yfinal)==1))){
				if((abs(xinicial-xfinal)==2)&&(abs(yinicial-yfinal)==2)){
					matriz[xfinal][yfinal]='B';
					matriz[(abs(xinicial-(xfinal-1)))][(abs(yinicial-(yfinal-1)))]='_';
			

				}


			}
			matriz[xfinal][yfinal]='B';
			matriz[xinicial][yinicial]='_';
			for(int i=0;i<8;i++){
				if((xfinal==0)&&(yfinal==i)){
					matriz[xfinal][yfinal]='G';
			
				}
			}

		}else{
			cout<<"Posicion invalida"<<endl;
	
		}
	}else{
		cout<<"NO ES SU PIEZA"<<endl;
		cout<<"PIERDE TURNO"<<endl;
		piezacorrecta=0;
	}
	if((matriz[xinicial][yinicial]=='G')){
		if((xinicial==xfinal)||(yinicial==yfinal)||(abs(xinicial-xfinal))||(abs(yinicial-yfinal))){
			matriz[xfinal][yfinal]='G';
			matriz[xinicial][yinicial]='_';
		
		
		
		}else{
			cout<<"Posicion invalida"<<endl;

		}
	

	}else{
		cout<<"NO ES SU PIEZA"<<endl;
		cout<<"PIERDE TURNO"<<endl;
		piezacorrecta=0;
	}
}
void Tablero::movimientopieza1(int xinicial, int yinicial, int xfinal, int yfinal,int piezacorrecta){
	if(matriz[xinicial][yinicial]=='N'){
		if(((abs(xinicial-xfinal)==1)&&(abs(yinicial-yfinal)==1))||((abs(xinicial-xfinal)==2)&&(abs(yinicial-yfinal)==2))){
			if((matriz[xfinal][yfinal]=='B')&&((abs(xinicial-xfinal)==1)&&(abs(yinicial-yfinal)==1))){
				if((abs(xinicial-xfinal)==2)&&(abs(yinicial-yfinal)==2)){
					matriz[xfinal][yfinal]='N';
					matriz[(abs(xinicial-(xfinal-1)))][(abs(yinicial-(yfinal-1)))]='_';
			

				}


			}



			matriz[xfinal][yfinal]='N';
			matriz[xinicial][yinicial]='_';
			for(int i=0;i<8;i++){
				if((xfinal==7)&&(yfinal==i)){
					matriz[xfinal][yfinal]='Z';
				
				}


			}
		}else{
			cout<<"Posicion invalida"<<endl;
	
		}
	}else{
		cout<<"NO ES SU PIEZA"<<endl;
		cout<<"PIERDE TURNO"<<endl;
		piezacorrecta=0;
	}
	if((matriz[xinicial][yinicial]=='Z')){
		if((xinicial==xfinal)||(yinicial==yfinal)||(abs(xinicial-xfinal))||(abs(yinicial-yfinal))){
			matriz[xfinal][yfinal]='Z';
			matriz[xinicial][yinicial]='_';	
		
		}else{
			cout<<"Posicion invalida"<<endl;

		}
	

	}else{
		cout<<"NO ES SU PIEZA"<<endl;
		cout<<"PIERDE TURNO"<<endl;
		piezacorrecta=0;
	}
}


void Tablero::crearMatriz(){
	for(int i =0;i<8;i++){
		for(int j=0;j<8;j++){
			matriz[i][j]='_';


		}
	
	
	}
	matriz[0][1]='N';
	matriz[0][3]='N';
	matriz[0][5]='N';
	matriz[0][7]='N';
	matriz[1][0]='N';
	matriz[1][2]='N';
	matriz[1][4]='N';
	matriz[1][6]='N';
	matriz[2][1]='N';
	matriz[2][3]='N';
	matriz[2][5]='N';
	matriz[2][7]='N';
	matriz[5][0]='B';
	matriz[5][2]='B';
	matriz[5][4]='B';
	matriz[5][6]='B';
	matriz[6][1]='B';
	matriz[6][3]='B';
	matriz[6][5]='B';
	matriz[6][7]='B';
	matriz[7][0]='B';
	matriz[7][2]='B';
	matriz[7][4]='B';
	matriz[7][6]='B';


}
void Tablero::imprimirMatriz(){
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){

			cout<<matriz[i][j];
		}
		cout<<endl;


	}

}
