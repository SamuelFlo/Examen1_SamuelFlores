#include "tablero.h"
#include "piezas.h"
#include <iostream>
#include <string>
using std::string;
using namespace std;
using std::cout;
using std::cin;
using std::endl;



int main(){
	Tablero* tab = new Tablero();
	char matri[8][8];
	string jugador1,jugador2;
	cout<<"Ingrese su nombre (Jugador1): "<<endl;
	cin>>jugador1;
	cout<<"Ingrese su nombre (Jugador2): "<<endl;
	cin>>jugador2;
	cout<<"Tablero del juego"<<endl;
	tab->crearMatriz();
	tab->imprimirMatriz();
	bool seguir=false;
	int xinicial=0,yinicial=0,xfinal=0,yfinal=0;
	int cont=1;	
	int val=0;
	int piezacorrecta=-1;
	while(seguir==false){
		xinicial=-1,yinicial=-1,xfinal=-1,yfinal=-1;
		while((xinicial<0||xinicial>7)||(yinicial<0||yinicial>7)||(xfinal<0||xfinal>7)||(yfinal<0||yfinal>7)){
			cout<<"Ingrese la posicion x de la pieza que va a escoger: "<<endl;
			cin>>xinicial;
			cout<<"Ingrese la posicion y de la pieza que va a escoger: "<<endl;
			cin>>yinicial;
			cout<<"Ingrese la posicion x hasta donde se quiere mover: "<<endl;
			cin>>xfinal;
			cout<<"Ingrese la posicoin y hasta donde se quiere mover: "<<endl;
			cin>>yfinal;
		}	
		if(cont%2!=0){
			cout<<jugador1<<"(BLANCO)"<<endl;
			tab->movimientopieza(xinicial,yinicial,xfinal,yfinal,piezacorrecta);
			while(piezacorrecta==0){
				while((xinicial<0||xinicial>7)||(yinicial<0||yinicial>7)||(xfinal<0||xfinal>7)||(yfinal<0||yfinal>7)){
					cout<<"Ingrese la posicion x de la pieza que va a escoger: "<<endl;
					cin>>xinicial;
					cout<<"Ingrese la posicion y de la pieza que va a escoger: "<<endl;
					cin>>yinicial;
					cout<<"Ingrese la posicion x hasta donde se quiere mover: "<<endl;
					cin>>xfinal;
					cout<<"Ingrese la posicoin y hasta donde se quiere mover: "<<endl;
					cin>>yfinal;
				}	
				tab->movimientopieza(xinicial,yinicial,xfinal,yfinal,piezacorrecta);
			}
			tab->imprimirMatriz();
			cont++;
			piezacorrecta=-1;
		}else if(cont%2==0){
			cout<<jugador2<<" (NEGRO)"<<endl;
			tab->movimientopieza1(xinicial,yinicial,xfinal,yfinal,piezacorrecta);
			
			while(piezacorrecta==0){																	while((xinicial<0||xinicial>7)||(yinicial<0||yinicial>7)||(xfinal<0||xfinal>7)||(yfinal<0||yfinal>7)){
					cout<<"Ingrese la posicion x de la pieza que va a escoger: "<<endl;
					cin>>xinicial;
					cout<<"Ingrese la posicion y de la pieza que va a escoger: "<<endl;
					cin>>yinicial;
					cout<<"Ingrese la posicion x hasta donde se quiere mover: "<<endl;
					cin>>xfinal;
					cout<<"Ingrese la posicoin y hasta donde se quiere mover: "<<endl;
					cin>>yfinal;
				}	

				tab->movimientopieza1(xinicial,yinicial,xfinal,yfinal,piezacorrecta);
			}
			tab->imprimirMatriz();
			cont++;
			piezacorrecta=-1;

		}
		
	

		cout<<"Desea continuar?"<<endl;
		cout<<"0 SI"<<endl;
		cout<<"1 NO"<<endl;
		cin>>val;
		if(val==1){
			seguir=true;

		}	

	}


	delete tab;
	return 0;

}
