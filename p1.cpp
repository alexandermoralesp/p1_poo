#include <iostream>
#include <algorithm>
using namespace std;

int main(){
        bool clave[15];
        char btn;
        for(int i =0; i<15; i++){
                do{
                	cout<<"Boton rojo (R) o azul (A): ";
                	cin>>btn;
                }while(btn!='R' && btn!='A');
                if(btn=='R') clave[i] = 1;
                else clave[i]=0;
        }

        bool binario[5];
        for(int i=2; i<15; i+=3){
                if(clave[i]==clave[i-2]&&clave[i]==!clave[i-1]){
                        if(clave[i]) binario[(i-2)/3] = 1;
                        else binario[(i-2)/3] = 0;
                }
                else{
                        cout<<"Patron incorrecto"<<endl;
                        return 0;
                }
        }

	short numero=0, dos;
	for(int i=4; i>-1; i--){
		if(binario[4-i]){
			dos=1;
			for(int j=0; j<i; j++) dos*=2;
			numero+=dos;
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
