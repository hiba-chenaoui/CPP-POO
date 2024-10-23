#include <iostream>
#include <string>
using namespace std;

class Voiture {
	
	private:
	std::string marque;
	std::string modele;
	int annee;
	float kilometrage;
	float vitesse;
	
	public:
		Voiture()= default;
		
		Voiture(std::string marq,std::string mod,int an, float km , float v  ){
			marque= marq;
			modele =mod;
			annee=an;
			kilometrage=km;
			vitesse=v;
		
		}
		
		void Accelerer(float valeur){
			vitesse= vitesse+ valeur;
			cout<<"la vitesse de la voiture apres aceeleration de "<<valeur<<" km/h est devenue:"<< vitesse<< endl;
		}
		
	    void Freiner(float valeur){
	    	if(vitesse -valeur<=0){
	    		cout <<" la vitesse apres freinage est 0 km/h"<< endl;
			}
			else 
			 vitesse = vitesse - valeur;
			 cout << "la vitesse apres freinage est" << vitesse <<"km/h"<< endl;
	    }

			
	
		
		void AffichierInfo(){
			cout<<"la marque de la voiture est:"<< marque << endl;
			cout <<"le modele de la voitureb est:"<< modele << endl;
			cout<< "l'année de fabrication de la voiture est:" << annee<< endl;
			cout<< "le kilométrage actuel de la voiture est:"<< kilometrage <<endl;
			cout << "la vitesse actuelle de la voiture est:"<< vitesse<< endl;
			
		}
		void Avancer(float distance){
			kilometrage= kilometrage + distance ;
			cout<<"le kilometrage de la voiture est devenue:"<< kilometrage<<endl;
		}
		~ Voiture(){
			cout<<"la voiture est detruite"<< endl;
		}
		
};
     
      int main(){
      	Voiture V1;
      	cout<< "LES INFO DE LA VOITURE1 SONT"<<endl;
      	V1.AffichierInfo();
      	V1.Accelerer(10);
      	V1.Freiner(190);
      	V1.Avancer(500);
      	
      	
      	Voiture V2("BMW","G82",2020,10000,180);
      	cout<< "LES INFO DE LA VOITURE2 SONT"<<endl;
      	V2.AffichierInfo();
      	V2.Accelerer(10);
      	V2.Freiner(190);
      	V2.Avancer(500);
      	
      	
	  }
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
