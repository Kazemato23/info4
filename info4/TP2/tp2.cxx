// description du problème
// Matheo Agneray 14janvier 2026
// inclure la classe d'entrées/sorties
#include <iostream>
#include <random>
#include <cmath>
// définir std comme namespace de base
using namespace std;

const int NMAX =25;

//exo1
struct point{
  float x;
  float y;
};
//exo2
struct Eleve{
  string nom;
  string prenom;
  int annee_naissance;
  char sexe; // "M" ou 3f"
  float moyenne;
};
struct Classe{
  int effective; // doit etre <= à NMAX
  Eleve tab_eleves[NMAX];
};

//exo1
point saisirPoint(){
  point P;
  cout<<"donner l'abscisse du point : ";
  cin >> P.x;
  cout<<"donner l'ordonné du point : " ;
  cin >>P.y;
  return P;
}

void afficherPoint(point P){
  cout<<"("<<P.x<<","<<P.y<<")"<<endl;
}

float calculerDistance(point P1,point P2){
  float P1P2;
  P1P2=sqrt((P2.x-P1.x)*(P2.x-P1.x)+(P2.y-P1.y)*(P2.y-P1.y));
  return P1P2;
}

void estTriangle(point P1,point P2,point P3){
  float a,b,c;
  a=calculerDistance(P1,P2);
  b=calculerDistance(P2,P3);
  c=calculerDistance(P1,P3);
  //C1 and C2 and C3 ou if dans if
  if (a<b+c) {

}
}
//exo2
Eleve saisirEleve(){
  Eleve A;
  cout<<"eleve 1:"<<endl;
  cout<<"nom : ";
  cin>>A.nom;
  cout<<"prenom : ";
  cin>>A.prenom;
  cout<<"année de naissance : ";
  cin>>A.annee_naissance;
  cout<<"sexe : ";
  cin>>A.sexe;
  cout<<"moyenne : ";
  cin>>A.moyenne;
  return A; //a finir/verifier

}
/*
int getCurrentYear(){
  return 2026
}

int calculerAge(int a){
  int age=getCurrentYear()-a
  return age;
}

Classe saisirClasse(int n){
  Classe classe;
  if (n>25){
    classe.effective=0 
    cout<<" n sup a 25"<<endl;
    return classe
  } 
  classe.effectif =n;
  for (int i=0;i<n;i++){
    classe.tab_eleves[i]=saisirEleve();
  }
  return classe;
}

Classe ajouterElement(Classe c,Eleve e){
  int n=c.effectif;
  c.effectif=n+1
  c.tab_eleves[n]=e;
  return Classe;
}
*/
int main()
{/*//exo1  
  point A,B;
  //Q1
    cout<<"un point est composé d'un ordonné et d'un abscisse"<<endl;
  //Q2
    cout<<"le point A"<<endl;
    A=saisirPoint();
    cout<<"le point B"<<endl;
    B=saisirPoint();
  //Q3
    cout<<"on a A = ";
    afficherPoint(A);
    cout<<"et B = ";
    afficherPoint(B);
  //Q4
    float d;
    d=calculerDistance(A,B);
    cout<<"La distance est : " <<d<<endl;*/

 //exo2
  //Q1
    saisirEleve();
  /*//Q je sasi pas
    cout<<"test"<<endl;
    Classe ma_classe,
    ma_classe=ajouter_eleve(ma_classe,e);*/
} // main