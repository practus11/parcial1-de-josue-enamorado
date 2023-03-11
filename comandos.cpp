#include "iostream"
#include "fstream"

using namespace std;
string texto;

void leerArchivo1(string directorio) {
    ifstream archivo;
    archivo.open(directorio);
    if (archivo.is_open()) {
        while (getline(archivo, texto)) {
            cout << "archivo 1 leido ==> " << texto << endl;
        }
        archivo.close();
    } else {
        cout << "archivo no encontrado";
    }
}

void modificarArchivo1(string directorio){
    ofstream archivo;
    archivo.open (directorio,ios::app);
    if(archivo.is_open()) {
        archivo << texto << endl;
        archivo.close();
        cout <<"0909-15-16741"<< endl;

    }else{
        cout << "error al leer archivo";
    }
}

