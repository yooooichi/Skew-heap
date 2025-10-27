#include <iostream>
using namespace std;

struct Nodo { // min heap sesgado
    int dato; // prioridad
    string ubicacion;
    string descripcion;
    
    Nodo* izq;
    Nodo* der;
    
    Nodo(int v, string x, string z) : dato(v), ubicacion(x), descripcion(z), izq(nullptr), der(nullptr) {};
};

Nodo* merge(Nodo* h1, Nodo* h2) {
    if (!h1) return h2;
    if (!h2) return h1;

    if (h1->dato > h2->dato)
        swap(h1, h2);

    h1->der = merge(h1->der, h2);

    swap(h1->izq, h1->der);

    return h1;
}

Nodo* insertar(Nodo* aux1) {
	string s1, s2;
	int b;
	
	cout << "Ingrese la ubicacion del incidente: ";
	getline(cin, s1);
	
	cout << "Ingrese una descripcion para el incidente: ";
	getline(cin, s2);
	
  cout << "Ingrese una prioridad para el incidente registrado: ";
  cin >> b;
	
	Nodo* temp = new Nodo(b, s1, s2);
    merge(aux1, temp); // donde aux1 es la raiz
    
    return aux1;
}

void fusionarDosZonas(Nodo* zona1, Nodo* zona2){
    cout<<"Debido a la falta de recursos, se va a proceder a fusionar la zona de atención "<<zona1->ubicacion<<" y "<<zona2->ubicacion<<". "<<endl;
    merge(zona1, zona2);
    
    cout<<"Zonas fusionadas correctamente."<<endl;
}
