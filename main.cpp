int main() {
  int opc;
    
    do{
        cout<<"Simulación de programa"<<endl;
        cout<<"1.Insertar Incidentes"<<endl;
        cout<<"2.Solucionar incidente"<<endl;
        cout<<"3.Fusionar zonas"<<endl;
        cout<<"4.Insertar zonas"<<endl;
        cout<<"5.Salir"<<endl;
        cout<<"Elija una opcion:";
        cin >> opc;
        cin.ignore();
        
        switch (opc){
          case 1:{
              if(zonas.empty()){
                  cout<<"No existen zonas.";
                  break;
              }
              mostrarZonas();
            int a;
            cin>>a;
            insertar(zonas[a]);
            break;
              
          }
            
          
          case 2: {
              mostrarZonas();
              cout<<"Escoja una zona:";
              int i;
              cin>>i;
            atenderIncidente(zonas[i]);
            break;
              
          }
            
          
          case 3:{
              cout <<"Zonas disponibles a mezclar:" <<endl;
            mostrarZonas();
            cout<<"Escoja dos zonas a mezclar: ";
            int x, y;
            cin >>x;
            cin>>y;
            fusionarDosZonas(zonas[x], zonas[y]);
            break;
              
          }
            
          
          case 4:{
              InsertarZona();
            break;
          }
            
          
          case 5:{
              cout<<"Saliendo del programa...";
            break;
          }
            
          
          default:
            cout<<"Ingrese una opcion valida";
            break;
          
          
            
        }
    }while(opc!=5);
    return 0;
}
