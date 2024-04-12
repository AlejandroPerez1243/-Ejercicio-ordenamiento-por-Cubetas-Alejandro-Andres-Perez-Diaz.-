#include <iostream>
using namespace std;
int fila(int N,int Numtike[],int colados){
	int contador=0;
	cout<<"	Dijita el tamanio del arreglo ";
	cin>>N;
	for(int i=0;i<N;i++){
		cout<<"Ingresa el numero de tikete #"<<(i+1)<<": ";
	     	cin>>Numtike[i];
	    
	}
	    for(int i=0;i<N;i++){
	    	for(int j=i+1;j<N;j++){
	    		if(Numtike[i]>Numtike[j]){
	    		    Numtike[i]=colados;
	    		    contador++;
	    		    cout<<endl;
	    			     
				}
			}  
		
		}
	return contador;
}
int main(){
	int N;
	
	int Numtike[10]={0};
  int colados=fila(N,Numtike,colados);
  cout<<colados;
  
  return 0;
 }	

