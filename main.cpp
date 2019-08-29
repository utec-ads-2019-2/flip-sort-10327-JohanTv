#include <iostream>
using namespace std;

int numeros;
int* lista;
int contador=0;


void sort(){
	
	int temp;
            for(int i=numeros-1; i>=0 ; i--){
                for(int j=0; j<i;j++){
                    if(lista[j]>lista[j+1]){
                        temp = lista[j];
                        lista[j] = lista[j+1];
                        lista[j+1] = temp;
                        contador++;
                    }
                }
            }
    

}



int main() {
	
	while(scanf("%u",&numeros) == 1){
		lista = new int[numeros];
		
		for(int i=0; i<numeros; ++i){
			cin>>lista[i];			
		}
	
		sort();
		cout<<"Minimum exchange operations : "<<contador<<endl;
		
		delete[] lista;
		lista = nullptr;
		contador = 0;
	}
	return 0;
}
