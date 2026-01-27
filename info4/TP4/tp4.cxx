#include <iostream>
#include <random>
#include <cmath>
// définir std comme namespace de base
using namespace std;
//exo1

int calculerProduit(int a,int b){
    if (b>=0){
        if (b==0){
            return 0;
        }
        return a+calculerProduit(a,b-1);
    }
    else {
      if (b==0){
        return 0;
      }  
      return -a+calculerProduit(a,b+1);
    }
}
int calculerProduitCpt(int a,int b,int* nbappel){
    if (b>=0){
        if (b==0){
            *nbappel +=1;
            cout<<"+1 de 0"<<endl;
            return 0;
        }
        *nbappel+=1;
        cout<<"+1"<<endl;
        return a+calculerProduit(a,b-1);
    }
    else {
      if (b==0){
        *nbappel+=1;
        return 0;
      }  
      *nbappel+=1;
      return -a+calculerProduit(a,b+1);
    }
}

//exo2

int alea(int n1,int n2){
    random_device dev;
    mt19937 rng(dev());
    uniform_int_distribution<> dist(n1,n2);
    int val = dist(rng);        //tire aleatoirement un nombre entre n1 et n2
    return val;
}
int saisirNbLettres(){
    int val =0;
    cout<<"Nombre de lettres (entre 1 et 10) ?"<<endl;
    cin>> val;
    if (val<=1 or val>=10){
        cout<<"Erreur !";
        return saisirNbLettres();
    }
    return val;
}
bool saisirCharMax(char charmin,char* charmax){
    char rep,max;
    cout<<"quel charactere maximal ? ";
    cin>>max;
    *charmax=max;
    if(*charmax<charmin){
        cout<<"voulez vous continuer (o/n) ? ";
        cin>>rep;
        if (rep=='o'){
            return saisirCharMax(charmin,charmax);
        }
        else{
            return false;
        }
    }
    cout<<"vrai"<<endl;
    return true;
}
char initChaine(int nbLettres,char charmin,char charmax){
    if(nbLettres==0){
        return 0;
    }
    char c = alea(charmin,charmax);
    cout<<c<<initChaine(nbLettres-1,charmin,charmax)<<endl;  
}

int main(){
//exo1:
//Q3    
   /* cout<<"test :"<<endl;
    int a=5;
    int b=4;
    cout<<calculerProduit(a,b)<<endl;
//Q4
    int x,y;
    cout<<"entrez le premier entier"<<endl;
    cin>>x;
    cout<<"entrez le deuxieme entier"<<endl;
    cin>>y;
    cout<<"le produit de vos deux entier est : "<<calculerProduit(x,y)<<endl;
//Q5
    int z=0;
    cout<<calculerProduitCpt(x,y,&z)<<endl;
    cout<<"le nombre d'appel est : "<<z<<endl;
//exo2:Q2   */
    cout<<"tezst : "<<endl;
    cout<<saisirNbLettres()<<endl;
//Q4
    char charmin= 'e';
    char charmax;
    bool ret = saisirCharMax(charmin ,&charmax);
    if (ret==false){
        charmax='z';
    }
//Q5
    char min,max;
    cout<<"choisisse un char min"<<endl;
    cin>>min;
    cout<<"choisisse un char max"<<endl;
    cin>>max;
    int nb=saisirNbLettres();
    initChaine(nb,min,max);
    return 0;
}





/*char initChaine(int nbLettres,char charmin,char charmax){
    int lettre=nbLettres;
    if(nbLettres==0){
        return 0;
    }
    char c = alea(charmin,charmax);
    //cout<<c<<endl<<initChaine(nbLettres-1,charmin,charmax);
    for (int i=0;i<lettre;i++) {
        //faut faire escalier
    }
}    */
