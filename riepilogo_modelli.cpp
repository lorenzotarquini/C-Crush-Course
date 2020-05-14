#include <iostream>
#include <cstdlib>
using namespace std;
//iostream is the basic input output systemi, without it you can't put values or print values
//cstdlib is a lib that aloows you to compile correctly 
//using namespace std avoid use everytime std:: (without this istruction you need to do std::cout<<)

//prototypes is like declare a variable but with functions 
void input();
void array();
void matrics();

int main(){
    int choose; //declare a variable, very important 
    while(1){ //it means while 1 is 1 (always), do things (yeah it's an infinite loop)
        cout<<"Menu'"<<"\n";
        cout<<"1)Input Variabili"<<"\n"<<"2)Array"<<"\n"<<"3)Matrici"<<"\n"<<"4)Esci"<<"\n";
        cout<<"Scelta:";
        cin>>choose;
        switch (choose){  //(avoid you to use always if..then..else if) 
            case 1: 
                input();
                break;
            case 2:
                array();
                break;
            case 3: 
                matrics();
                break;
            case 4:
                exit(0);
            default:
                cout<<"Non presente nel menu', ritenta";
                break;
        }
    }



}


void input(){
    int a,b;
    cout<<"Inserisci un valore: ";
    cin>>a;
    cout<<"Inserisci un secondo valore: ";
    cin>>b;
    cout<<"Hai fatto l'input dei valori: "<<a<<", "<<b<<"\n";
}

void array(){
    int array[4];
    for (int i = 0; i < 4; i++){
        cout<<"Inserisci valore array: ";
        cin>>array[i];
    }

    for (int i = 0; i < 4; i++){
        cout<<"Valore array posizione: "<<i<<" : "<<array[i]<<"\n";
    }
}


void matrics(){

    int matric[2][2];
    for(int i=0; i < 2; i++){
        for(int j=0; j < 2; j++){
            cout<<"Inserisci valore in matrice: ";
            cin>>matric[i][j];
        }
    }
    cout<<"|";
    for(int i=0; i < 2; i++){
        for(int j=0; j < 2; j++){

            cout<<matric[i][j]<<"|";
            if((j == 1)&&(i!=1)){
                cout<<"\n"<<"|";

            }else if((j==1)&&(i==1)){
                cout<<"\n";
            }

        }
    }


}

