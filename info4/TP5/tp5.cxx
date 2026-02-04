#include <iostream>
#include <random>
#include <cmath>
#include <ctime>
// définir std comme namespace de base
using namespace std;

//exo1

char* initchar(int N){
    char* tab = new char[N];
    for(int i=0;i<N;i++){
        tab[i]= 'a' + rand()%26;
        cout<<tab[i]<<endl;
    }
    return tab;
}

int* initInt(int N){
    int* tab = new int[N];
    for (int i=0;i<N;i++){
        tab[i]=rand();
    }
    return tab;
}

float* initfloat(int N){
    float* tab = new float[N];
    for (int i=0;i<N;i++){
        tab[i]=(1.0*rand()) / (1.0*rand()+1.0);
        cout<<tab[i]<<endl;
    }
    return tab;
}

double* initdouble(int N){
    double* tab = new double[N];
    for (int i=0;i<N;i++){
        tab[i]=(1.0*rand()) / (1.0*rand()+1.0);
    }
    return tab;
}

void printchar(char* tab,int N){
    cout<<"==tableau de char " <<endl;
    cout<<"adresse du tableau : "<<(void*)tab<<endl;
    for (int i=0;i<N;i++){
        cout<<" "<<(void*)(&tab[i])<<" -> "<<tab[i]<<endl;
    }
}

void printint(char* tab,int N){
    cout<<"==tableau de int " <<endl;
    cout<<"adresse du tableau : "<<tab<<endl;
    for (int i=0;i<N;i++){
        cout<<" "<<(&tab[i])<<" -> "<<tab[i]<<endl;
    }
}


//exo2

struct joueur{
    string nom;
    bool titulaire;
    int numero;
    int points;
};

struct equipe{
    joueur* membre;//tab dynamique
    int nbjoueur;
    int nbtit;
};

joueur saisir_joueur(){
    joueur A;
    cout<<"nom du joueur : ";
    cin>>A.nom;
    cout<<"est titulaire ?(0/1) ";
    cin>>A.titulaire;
    cout<<"numero du joueur : ";
    cin>>A.numero;
    cout<<"nombre de points du joueur : ";
    cin>>A.points;
    return A;
}

int compterTit(equipe E){
    int res=0;
    for (int i=0;i<E.nbjoueur;i++){
        if(E.membre[i].titulaire){
            res++;
        }
    }
    return res;
}

int initEquipe(equipe E){
    int n;
    cout<<"combien de joueur ? ";
    cin>>n;
    for (int i=0;i<n;i++){
        E.membre[i]=saisir_joueur();
    }
    return E;
}

int compterpoints(equipe E){
    int res=0;
    for (int i=0;i<E.nbjoueur;i++){
        if(E.membre[i].points){
            res++;
        }
    }
    return res;
}

void augmentationTaille(joueur* membre[Taille],int newtaille)

//exo3

struct ingredient{
    string noming;
    int cal;
};

struct tabingredient{
    ingredient tabing[];
    int nbing;
};




int main(){
    srand(time(NULL));
//exo1:
/*
    int n=10;
    char* tab_char = initchar(n);
    tab_char[10000]=14;
    int*tab_int=initInt(n);
    float*tab_float=initfloat(n);
    double*tab_double=initdouble(n);
    printchar(tab_char,n);
    printint(tab_int,n);
    delete[] tab_char;
    delete[] tab_int;
    delete[] tab_float;
    delete[] tab_double;
    */
//exo2

//exo3
}