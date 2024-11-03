#include <iostream>
#include <cmath>
using namespace std;

class Vecteur3d{
	private:
		float x;
		float y;
		float z;
		
	public:
	
	Vecteur3d()=default;
	
	Vecteur3d(float x, float y ,float z){
	   this->x=x;
	   this->y=y;
	   this->z=z;
	}
	
	
	void Affiche(){
		cout<< "les composantes du vecteur : ("<< x <<","<< y <<","<< z << ")"<<endl;
	}
	void Somme(const Vecteur3d& autre) {
        float a=x+ autre.x;
        float b=y+ autre.y;
        float c=z+ autre.z;
        cout <<"le resultat de laddition des deux vecteurs est:("<< a <<","<< b <<","<< c << ")"<<endl;
	}
	
	void ProduitScalaire (const Vecteur3d& autre) {
        float P=(x*autre.x)+(y*autre.y )+(z*autre.z);
       
        cout <<"le produit scalaire des deux vecteurs est: "<< P <<endl;
	}
	
	 void coincide (const Vecteur3d& autre){
	   if((x==autre.x)&&(y==autre.y)&&(z==autre.z)){
	   	  cout <<"les deux vecteurs ont les memes composantes"<<endl;
	   }
	    else{
		cout <<"les deux vecteurs n`ont pas les memes composantes"<<endl;
		}
	
	}
	
	/*void norme (){
		float nrm;
		nrm = sqrt(x*x+y*y+z*z);
		cout <<"la norme de ce vecteur est:"<< nrm<<endl;
	}*/
	
	float norme() {
    return sqrt(x * x + y * y + z * z);
}
	float normax(Vecteur3d v1, Vecteur3d v2) {
    if (v1.norme() > v2.norme()) {
        return v1; 
    } else {
        return v2; 
    }
}
	
	
	
};

int main(){
	Vecteur3d V1(1,2,3);
	V1.Affiche();
	
	Vecteur3d V2(4,5,6);
	V2.Affiche();
	
	V1.ProduitScalaire(V2);
	V1.Somme(V2);
    
    V1.coincide(V2);
    /*V2.norme();*/
    cout << "La norme du vecteur est : " << V1.norme() <<endl;
    
    cout << "Vecteur avec la plus grande norme (par valeur) : ";
    float resultat = V1.normax(V2,V1);
    resultat.Affiche();

	
}
