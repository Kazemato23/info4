#include <iostream>
#include <random>
#include <cmath>
// définir std comme namespace de base
using namespace std;
//exo1

int alea(){
    random_device dev;
    mt19937 rng(dev());
    uniform_int_distribution<> dist(0,100);
    return dist(rng);        //tire aleatoirement un nombre entre n1 et n2
}

int *  initTabIter(int N){
    int*T=new int[N];
    for (int i=0;i<N;i++){
        T[i]=alea();
    }
    return &T[0];
}

void afficherRec(int T[], int N){
    if(N==0){
        return;
    }
    cout << afficherRec(T,N-1);
    return afficherRec(T,N-1);
}

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
//exo2
/*
struct Ville{
    string nom;
    float latitude;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
    float longitude;
};

struct TabVilles{
    string Tab[]; //[N]?
    int nbVille;
};

struct Tournee{
    int Tab_tournee[];
    int nbVilleVisite;
};

Ville saisirUneVille(){
    Ville A;
    cout << "nom ? ";
    cin >> A.nom;
    cout <<"latitude ? ";
    cin >> A.latitude;
    cout << "longitude ? ";
    cin >> A.longitude;
    return A;
}

TabVilles saisirLesVilles(int nb_ville_a_saisir,TabVilles Tab[],int indice_elem_a_saisir){
    if (nb_ville_a_saisir==0){
        return Tab;
    }
    Tab[indice_elem_a_saisir]=saisirUneVille();
    return saisirLesVilles(nb_ville_a_saisir-1,Tab,indice_elem_a_saisir);
}

TabVilles saisirEnsembleVilles(TabVilles tv){
    int a;
    cout <<"Combien de ville vont etre a saisir";
    cin>>a;
    for (int i = 0 ; i < a ; i++){
        tv.Tab[i]=saisirUneVille();
    }
    return tv;
}

bool villeDeja(int Tab_tournee[],int nbVille){
    if (nbVille==Tab_tournee[0]){ return true; }
    if (condition)
    {
        return false;
    }
    
    return villeDeja(Tab_tournee[]+1,nbVille);
    
}
*/
int main(){
    cout<<initTabIter(5)<<endl;
    afficherRec(initTabIter(5),2);
    return 0;
}