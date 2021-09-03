#include<iostream>
#include<fstream>
#include<string>


using namespace std;

void mostrarvec(int vec[], int dim){
    for(int i=0;i<dim;i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}
void mostrarmat(int vec[][5]){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int reverso(int vec[], int dim){
    int vecaux[dim];
    int j=dim-1;
    for(int i=0;i<dim;i++){
        vecaux[i]=vec[i];
    }
    for(int i=0;i<dim;i++){
        vec[i]=vecaux[j];
        j--;
    }
    return vec[dim];
}
int transpuesta(int vec[][5]){
    int vecaux[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            vecaux[j][i]=vec[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            vec[i][j]=vecaux[i][j];
        }
    }
    return vec[5][5];
}

int main(){ 
    int dim1=5;
    int dim2=10; 
    int vec1[dim1]={4, 11, 19, 8, 3};
    int vec2[dim2]={23, 15, 1, 7, 6, 27, 2, 14, 12, 9};
    int mat[5][5]={ 36, 7, 19, 28, 45,
                    17, 33, 42, 3, 25,
                    22, 41, 32, 11, 9,
                    39, 47, 14, 4, 23,
                    16, 38, 8, 27, 44};
    cout<<"Vectores:"<<endl;
    mostrarvec(vec1,dim1);
    mostrarvec(vec2,dim2);
    reverso(vec1,dim1);
    reverso(vec2,dim2);
    cout<<"Los reversos son:"<<endl;
    mostrarvec(vec1,dim1);
    mostrarvec(vec2,dim2);
    cout<<"La matriz es:"<<endl;
    mostrarmat(mat);
    transpuesta(mat);
    cout<<"La transpuesta es:"<<endl;
    mostrarmat(mat);


    

    
system("pause");
return 0;
}