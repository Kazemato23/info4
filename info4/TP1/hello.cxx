// description du problème
// Matheo Agneray 12janvier 2026
// inclure la classe d'entrées/sorties
#include <iostream>
#include <random>
// définir std comme namespace de base
using namespace std;
int a,b,m;
//Q1
int additionner(int a,int b){
    return a+b;
}

//Q2

const int nbElement=50;
const int nbcol=5;
void init_Tab(int T[nbElement])
{   random_device dev;
    mt19937 rng(dev());
    uniform_int_distribution<> dist(0,100);
    for (int i=0;i<50;i++){
    int val;
    val = dist(rng);//tire aleatoirement un nombre entre 0 et 100
    T[i]=val;
}
}

void afficheTab(int T[nbElement])
{   for (int i=0;i<nbElement;i++){
    cout <<i <<" -> " << T[i] << endl;
}
}

void print_Tab(int T[nbElement],int nbcol)
{

}
/*  l1/l2
    a/b
    c/d     nbcol=2
*/
int addElementTab(int T[nbElement])
{

}

int main()
{//Q1
    cout << "hello world !" << endl;
    cout << "choisi 2 entier" <<endl;
    cout << "entier 1" <<endl;
    cin >> a ;
    cout << "entier 2" <<endl;
    cin >> b;
    cout << "resultat : ";
    m=additionner(a,b);
    cout << m <<endl;
//Q2
    int Tab[nbElement];
    init_Tab(Tab);
    afficheTab(Tab);
    //affichage tableau
return 0;
} // main