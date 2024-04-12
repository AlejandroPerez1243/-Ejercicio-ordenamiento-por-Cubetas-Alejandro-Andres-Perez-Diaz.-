#include <iostream>
#include <cmath>
//DETERMINAR ATRAVEZ DE UN NUMERO DADO SI EL NUMERO ES CUBIFINITO O NO
//SEGUNDO PUNTO PARCIAL DE LAS  DE LAS HORMIGAS
using namespace std;

int calculo(int n,int cifras[],int i,int elev) {
   int suma=0;
   
      cout<<"dijita un numero"<<":";
      cin>>n;
         while(n>0){
         int dijito=n%10;
         elev=pow(dijito,3);
             cifras[dijito]++;
             suma+=elev;
                n/=10;
                   
         }
		       	      if(suma==100){
		       	      	     cout<<"Si es CUBIFINIT0";
		       	      	     cout<<endl;
						 }
						      else if(suma==1){
						      	cout<<"SI ES NUMERO CUBIFINITO";
						      	cout<<endl;
							  }
							      else{
						 	           cout<<"NO ES CUBIFINITO";
						 	           cout<<endl;
						           }
			         return suma;                    
										 }

int main(){
	int n;
    int cifras[10] = {0};
    int suma = calculo(n, cifras, 0, 0);
    cout << suma << endl;
	return 0;
}
