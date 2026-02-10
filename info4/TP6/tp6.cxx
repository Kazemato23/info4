#include <iostream>
#include <random>
#include <cmath>
#include <ctime>
// définir std comme namespace de base
using namespace std;
const int N=10;
struct Case{
    int lig;
    int col;
};
struct Navire{
    int Taille;
    Case empl;//adresse
    bool touche;
    int nbTouche;
    bool couler;
};
/*
struct Plateau{
    //tableau des navires
    //grille des coups    
};
*/

void afficher(char Tab[N][N]){
    cout<<"  ";
    for (int i=0;i<N;i++){
        cout<<(i+1)%10;
    }
    cout<<endl;
    cout<<"  ----------"<<endl;
    for(int j=0;j<N;j++){
        cout<<(char)('A'+j)<<"/";
        for(int i=0;i<N;i++){
            char c=Tab[i][j];
            if (c=='T'){
                cout<<"\033[41mT\033[0m";
            }
            else if (c=='L'){
                cout<<"\033[95;44mL\033[0m";
            }
            else{
                cout<<Tab[i][j];
            }
        }
        cout<<"/"<<endl;
    }
    cout<<"  ----------"<<endl;
}
/*
void initnav(){

}
*/
void placerbat(char Tab[N][N]){     //bool Tab[N][N] jsp lequel
    char c='A';
    string A;
    cout<<"placez vos bateau (avec les coordonné ex: A1A2A3A4A5 ): bateau de 5 :";
    cin>>A;
    cout<<A<<endl;
    for(int i=0;i<10;i+=2){
        char co=A[i];
        int coo=A[i+1];
        int coor=(c-co)*-1;      //ind de lettre mais c en '-2' donc *-1 pour avoir en pos
        Tab[coo][coor]='!';
    }
}

void initfaux(bool Tab[N][N]){
    for(int j=0;j<N;j++){
        for(int i=0;i<N;i++){
            Tab[i][j]=0;
        }
    }
    //afficher(Tab[N][N]);
}



int main(){
    char Tab[N][N];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            Tab[i][j]='.';
        }
    }
    //Tab[5][4]='L';
    //Tab[3][8]='T';
    afficher(Tab);
    bool t[N][N];
    initfaux(t);
    placerbat(Tab);
    afficher(Tab);
    return 0;
}