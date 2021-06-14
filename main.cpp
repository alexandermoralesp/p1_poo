#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> generarCodigo(){
    vector<int> entrada_de_colores;
    cout << "Seleccion el color que quiera" << endl;

    for(int i = 0; i < 15; i++){
        cout << "Entrada " << i+1 << endl;
        cout << "Azul: 1, Rojo: 0" << endl;
        int val;cin>>val;
        while (val > 1){
            cout << "Ingrese un valor optimo" << endl;
            int val;cin>>val;
        }
        entrada_de_colores.push_back(val);
    }
    return entrada_de_colores;
}

int main()
{
    vector<int> codigo = generarCodigo();
    cout << "\nTu entrada general es: " << endl;
    for(int i = 0; i < 15; i++){
        if (codigo[i] == 0){
            cout << "Rojo ";
        }
        else{
            cout << "Azul ";
        }
    }
    cout << endl;

    string trans_codigo = "";
    for(int i = 0; i < 12; i += 3){ // 12 para que vaya de 3 en 3
        if (codigo[i] == 0 && codigo[i+1] == 1 && codigo[i+2] == 0){
            trans_codigo += "1";
        }
        else if(codigo[i] == 1 && codigo[i+1] == 0 && codigo[i+2] == 1){
            trans_codigo += "0";
        }
    }
    cout << trans_codigo<< endl;
    return 0;
}
