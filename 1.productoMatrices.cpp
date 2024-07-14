#include <iostream>
using namespace std;

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
	int multiplicacion[3][3];
	int matriz1[3][3]={
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int matriz2[3][3]{
		{9,8,7},
		{6,5,4},
		{3,2,1}		
	};
	multiplicaMatrices(matriz1,matriz2,multiplicacion,3,3);
	mostrarMatriz(matriz1,matriz2,multiplicacion,3,3);
	return 0;
}
