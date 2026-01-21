//==0 False et ==1 True(tout le reste es vrai normalemment as que 1)
// inclure la classe d'entrées/sorties
#include <iostream>
#include <random>
#include <cmath>
// définir std comme namespace de base
using namespace std;

void saisirPoint(float* a,float* b){
    cout<<"quel valeur pour x? "<<endl;
    cin>>*a;
    cout<<"quel  valeur pour y? "<<endl;
    cin>>*b;
}

void saisirDelta(float* dx,float* dy){
    cout<<"quel valeur pour delta x? "<<endl;
    cin>>*dx;
    cout<<"quel valeur pour delta y? "<<endl;
    cin>>*dy;
}

void saisirPointMesg (float* a,float* b,string mesgx,string mesgy){
    cout<<"message a afficher devant x : "<<endl;
    cin>>mesgx;
    cout<<"message a afficher devant y : "<<endl;
    cin>>mesgy;
    cout<<mesgx<<*a<<endl;
    cout<<mesgy<<*b<<endl;
}

void translater(float* a,float* b,float dx,float dy){
    *a+=dx;
    *b+=dy;
}

void afficherPoint(float a,float b){
    cout<<"("<<a<<","<<b<<")";
}

//exo2
const int colonne=10;
const int ligne=10;
const int posMax=colonne-1;

int alea(int a,int b){
    random_device dev;
    mt19937 rng(dev());
    uniform_int_distribution<> dist(a,b);
    int val = dist(rng);
    return val;
}

void deplacer(int posMax,int* pos,int sens){
    pos
}

int main(){/*
    float x,y,dx,dy;        //dx=delta x
    string messx,messy;
    saisirPoint(&x,&y);     
    cout<<"valeur de x :"<<x<<endl;
    cout<<"valeur de y :"<<y<<endl;
//Q2
    saisirDelta(&dx,&dy);
    cout<<"delta x vaut : "<<dx<<" et delta y vaut : "<<dy<<endl;
//Q3
    saisirPointMesg (&x,&y,messx,messy);
//Q4
    translater(&x,&y,dx,dy);
    cout<<"la translation du point x par delta x est: "<<x<<endl;
    cout<<"la translation du point y par delta x est: "<<y<<endl;
//Q5
    afficherPoint(x,y);
//Q6
    float ord,abs,dord,dabs;
    saisirPoint(&ord,&abs);
    saisirDelta(&dord,&dabs);
    string m;
    afficherPoint(ord,abs);
    cout<<"-->";
    translater(&ord,&abs,dord,dabs);
    afficherPoint(ord,abs);
*/
//exo2
    int a,b;
    int grille[ligne][colonne];
    cout<<"valeur 1 :";
    cin>>a;
    cout<<"valeur 2 :";
    cin>>b;
    cout<<"la valeur aleatoir est :"<<alea(a,b)<<endl;

}