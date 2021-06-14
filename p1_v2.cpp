#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  short numero=0;
  short dos=1;
  char boton;
  bool inicio;

  cout<<"Boton rojo (R) o azul (A): ";

  for(short i=0; i<15; i++){
    do{
      cin>>boton;
    }while(boton!='R'&&boton!='A');

    if(!(i%3)){
      if(boton/82) inicio=1;
      else inicio=0; 
    }
    else if(!((i-1)%3)){
      if(inicio==(boton/82)){
        cout<<"Patron incorrecto"<<endl;
        return 0;
      }
    }
    else{
      if(inicio!=(boton/82)){
        cout<<"Patron incorrecto"<<endl;
        return 0;
      }
      else{
        if(inicio){
          dos=1;
          for(short j=4; j>(i-2)/3; j--) dos*=2;
          numero+=dos;
        }
      }
    }
  }

  short primos[11]{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
  if(binary_search(primos, primos+11, numero)){
		cout<<"Clave correcta"<<endl;
		return 0;
	}
	cout<<"Clave incorrecta"<<endl;

  return 0;
}
