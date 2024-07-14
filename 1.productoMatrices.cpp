#include <iostream>
using namespace std;

void escrituraMatriz(int matriz[][3],int filas,int columnas){
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Ingrese Elemento["<<i<<"]["<<j<<"]: ";
			cin>>matriz[i][j];
		}
	}
	cout<<endl;
}

void multiplicaMatrices(int matriz1[][3],int matriz2[][3],int matriz3[][3],int filas,int columnas){
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			matriz3[i][j]=0;
			for(int k=0;k<columnas;k++){
				matriz3[i][j]+=matriz1[i][k]*matriz2[k][j];
	        }
	    }
	}
}

void mostrarMatriz(int matriz1[][3],int matriz2[][3],int matriz3[][3],int filas,int columnas){
	cout<<"Matriz A:\tMatriz B:\tResultado:"<<endl;
	for(int i=0;i<filas;i++){
		for(int j=0;j<3;j++){
			cout<<matriz1[i][j]<<" ";
		}
		cout<<"\t\t";
		for(int j=0;j<3;j++){
			cout<<matriz2[i][j]<<" ";
		}
		cout<<"\t\t";
		for(int j=0;j<3;j++){
			cout<<matriz3[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	int multiplicacion[3][3],matriz1[3][3],matriz2[3][3];
	cout<<"Ingrese los datos de la Matriz A:"<<endl;
	escrituraMatriz(matriz1,3,3);
	cout<<"Ingrese los datos de la Matriz B:"<<endl;
	escrituraMatriz(matriz2,3,3);
	multiplicaMatrices(matriz1,matriz2,multiplicacion,3,3);
	mostrarMatriz(matriz1,matriz2,multiplicacion,3,3);
	return 0;
}
