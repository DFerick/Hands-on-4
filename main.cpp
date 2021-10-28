#include <iostream>
#include <vector>
#include <cstring>
#include <string>
#include <stdlib.h>
#include <math.h>
using namespace std;

//Funciones
//Suma 2D
void S_2D (char x1, char x2, char y1, char y2){
    cout << "Respuesta: (" << x1+x2 << "," << y1+y2 << ")" << endl; 
}
//Resta 2D
void Res_2D(char x1, char y1, char x2, char y2){
	cout << "Respuesta: (" << x1-x2 << "," << y1-y2 << ")" << endl; 
}
// Multiplicacion 2D
void Mul_2D(char x, char y, char esc){
	cout << "Respuesta: (" << x*esc  << "," << y*esc << ")" << endl;
}
//Modulo 2D
void Mod_2D(char x, char y){
	cout << "Respuesta: " << sqrt(pow(x, 2) + pow(y, 2)) << endl;
}
//Suma 3D
void S_3D(char x1, char y1, char x2, char y2, char x3, char y3){
	cout << "Respuesta: (" << x1+x2+x3 << "," << y1+y2+y3 << ")" << endl; 
}
// Modulo 3D
void Mod_3D(char x, char y, char z){
	cout << "Respuesta: " << sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2)) << endl;
}
//Producto punto
void Produc_punto (char x1, char y1, char x2, char y2, char z1, char z2){
	 cout << "Vector = (" << x1*x2 << "," << y1*y2 << ")" << endl;
   cout << "Escalar = " << x1*x2 + y1*y2 << endl;  
}
//Producto cruz
void Produc_cruz(char x1, char y1, char z1, char x2, char y2, char z2){
	cout << "vector  = (" << y1*z2 - y2*z1 << " , " << x1*z2 - x2*z1 << " , " << x1*y2 - x2*y1 <<")" << endl;
}




int main(int argc, char *argv[]){ 

int opc = atoi(argv[1]);
//Menu
  cout << "----------------------------------" << endl;
  cout << "|Seleccione una opcion por favor |" << endl;
  cout << "|1- Suma de vectores 2D          |" << endl;
  cout << "|2- Resta de vectores 2D         |" << endl;
  cout << "|3- Multiplicacion de vectores 2D|" << endl;
  cout << "|4- Modulo 2D                    |" << endl;
  cout << "|5- Suma de vectores 3D          |" << endl;
  cout << "|6- Modulo 3D                    |" << endl;
  cout << "|7- Producto punto y cuz 3D      |" << endl;
  cout << "----------------------------------" << endl;
  
 if(opc==1){
 	// opcion 1
     float x1, x2;
     float y1, y2;
     x1 = atoi(argv[3]);
     y1 = atoi(argv[5]);
     x2 = atoi(argv[8]);
     y2 = atoi(argv[10]);
     cout << "Suma 2D" << endl;
     cout << "Operacion: " << "("<< x1 << "," << y1 << ")+("<< x2 << "," << y2 << ")"<< endl;//operacion de muestra (no resuelto)
     S_2D(atoi(argv[3]), atoi(argv[8]),  atoi(argv[5]) , atoi(argv[10]));//Resultado
    }
   //opcion 2
    if(opc==2){
 	   float x1, x2;
       float y1, y2;
       x1 = atoi(argv[3]);
       y1 = atoi(argv[5]);
       x2 = atoi(argv[8]);
       y2 = atoi(argv[10]);
       cout << "Resta 2D" << endl;
       cout << "Operacion: " << "("<< x1 << "," << y1 << ")-("<< x2 << "," << y2 << ")"<< endl;//operacion de muestra (no resuelto)
       Res_2D(atoi(argv[3]), atoi(argv[5]),  atoi(argv[8]) , atoi(argv[10]));//Resultado
      }
   
    //opcion 3
    if(opc==3){
	     float x;
         float y;
         float esc;//Escalar
 	     x = atoi(argv[3]);
	     y = atoi(argv[5]);
	     esc = atoi(argv[8]);
	     cout << "Multiplicación de vectores 2D" << endl;
	     cout << "Operacion: " << "("<< esc << ")*("<< x << "," << y << ")"<< endl;//operacion de muestra (no resuelto)
	     Mul_2D(atoi(argv[3]), atoi(argv[5]), atoi(argv[8]));//Resultado
	}
    //opcion 4
     if(opc==4){
	   float x;
       float y;
	   x = atoi(argv[3]);
	   y = atoi(argv[5]);
	   cout << "Modulo 2D " << endl;
	   cout << "Operacion: " << "v" << x <<"² + " << y << "²"<< endl;//operacion de muestra (no resuelto)
	   Mod_2D(atoi(argv[3]), atoi(argv[5]));//Resultado
	  }
    
    //opcion 5
     if(opc==5){
     float x1, x2, x3;
     float y1, y2, y3;
  
      x1 = atoi(argv[3]);
      y1 = atoi(argv[5]);
      x2 = atoi(argv[8]);
      y2 = atoi(argv[10]);
      x3 = atoi(argv[13]);
      y3 = atoi(argv[15]);
      cout << "Suma vectores 3D" << endl;
      cout << "Operacion: " << "("<< x1 << "," << y1 << ")+("<< x2 << "," << y2 <<  ")+("<< x3 << "," << y3 << ")"<< endl;//operacion de muestra (no resuelto)
      S_3D(atoi(argv[3]), atoi(argv[5]), atoi(argv[8]), atoi(argv[10]), atoi(argv[13]), atoi(argv[15]));//Resultad
   	}
    
    //opcion 6
     if(opc==6){
	    float x;
        float y;
        float z;
	    x = atoi(argv[3]);
	    y = atoi(argv[5]);
	    z = atoi(argv[7]);
	    cout << "Modulo 3D" << endl;
	    cout << "Operacion: " << "v" << x <<"² + " << y << "² + " << z << "²"<< endl;//operacion de muestra (no resuelto)
	    Mod_3D(atoi(argv[3]), atoi(argv[5]), atoi(argv[7]));//Resultad
	}
    //opcion 7
     if(opc==7){      
       float x1, x2;
       float y1, y2;
       float z1, z2;
       cout << "Producto punto 2D " << endl;
        x1 = atoi(argv[3]);
        y1 = atoi(argv[5]);
        z1 = atoi(argv[7]);
        x2 = atoi(argv[10]);
        y2 = atoi(argv[12]);
        z2 = atoi(argv[14]);
        cout << "Producto punto: " << "("<< x1 << "*" << x2 << ")+(" << y1 <<  "*" << y2 << ")+(" << z1 <<  "*" << z2 << ")"<< endl;//operacion de producto punto (no resuelto)
        Produc_punto(atoi(argv[3]), atoi(argv[5]), atoi(argv[7]), atoi(argv[10]), atoi(argv[12]), atoi(argv[14])); //Resultado del preducto punto
        cout << "---------------------------------- " << endl;
        cout << "Producto Cruz 3D " << endl;
        //operacion del preducto cruz 
        cout<<"Operacion: i(" << y1 << "(" << z2 << ")) - " << y2 << "(" << z1 << ")) - j(" << x1 << "(" << z2 << ") - " << x2 << "(" << z1 << ")) + k(" << x1 << "(" << y2 << ")- "<< x2 << "(" << y1 <<")" << endl;
        Produc_cruz(atoi(argv[3]), atoi(argv[5]), atoi(argv[7]), atoi(argv[10]), atoi(argv[12]), atoi(argv[14]));//resultado
	}
    
   
 
 }


