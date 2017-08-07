/**
@author: Eduardo H. Calvillo Gámez
 Soluciones a ejercicios de un examen parcial. Se evalúa el uso de punteros, estructuras y archivos h.
 */


#include <iostream>
#include "basic.h"

using namespace std;


int main(void){
    int select = '0';
    do {
        cout << "Programa con las soluciones del primer parcial de Introducción de la Programación" << endl;
        cout << "Para ejecutar los ejercicios presione el número de los mismos" << endl;
        cout << "1: Ejercicio sobre punteros" << endl;
        cout << "2: Ejercicio sobre punteros y arreglos" <<endl;
        cout << "3: Ejercicio sobre manejo de caracteres" <<endl;
        cout << "4: Ejercicio sobre funciones" <<endl;
        cout << "5: Ejercicio sobre estructuras y clases" << endl;
        cout << "0: para salir del programa" << endl;
        cin >> select;
        switch (select) {
            case 1:
                pointers();
                break;
            case 2:
                pointers2();
                break;
            case 3:
                charExample();
                break;
            case 4:
                sales();
                break;
            case 5:
                oopExample();
                break;
            default:
                break;
        }
    } while (select != 0);

   return 0;
}

void oopExample(){
    Student freshman;
    cout << "Ingrese los datos del estudiante\n";
    GetData( &freshman);
    cout << "Los datos del estudiante son: " <<endl;
    cout << "Nombre: " << freshman.Name <<endl;
    cout << "Matricula: " << freshman.Id <<endl;
    cout << "Créditos: "<< freshman.Creditos<<endl;
    cout << "Promedio: "<< freshman.Promedio<<endl;
}

void GetData(Student *S){
    cout << "Nombre del estudiante: ";
    cin >> S->Name;
    cout << "Matricula: ";
    cin >> S->Id;
    cout << "Créditos: ";
    cin >> S->Creditos;
    cout << "Promedio: ";
    cin >> S->Promedio;
}

void charExample(){
    char stuff[] = "Tres Tristes Tigres";
    cout << stuff<<endl;
    mess(stuff);
    cout << stuff<<endl;
}

void mess(char str[]){
    int step = 0;
    while (str[step] !='\0'){
    if (str[step] == 'T')
        str[step] = 'P';
        step++; }
}

void sales(){
    float *Sales;
    Sales = new float[4]; GetSales(Sales);
    cout << TotalSales(Sales) << endl;
}

void GetSales(float *Array){
    for (int i=0; i<4;i++){
        cout << "Ingrese las ventas para el periodo " << i+1 << ": "; cin >> *(Array+i);
    }
}

float TotalSales(float *Array){
    float Sum =0.0;
    for (int i=0; i<4;i++){
        Sum += *Array;
        Array++;
    }
    return Sum;
}

void pointers(void){
    int X=25, Y=50, Z=75;
    int *Ptr;
    Ptr = &X;
    *Ptr *= 100;
    Ptr = &Y;
    *Ptr *= 3;
    Ptr = &Z;
    *Ptr *= 2;
    cout << X << " " << Y << " " << Z << endl;
}

void pointers2(void){
    int Numeros [] = {25, 50, 75, 100};
    cout << *(Numeros +1) << endl;
   
}
