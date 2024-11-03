#include <iostream>
using namespace std ;

class datetemps{
	private:
	std :: string jour;
	std :: string mois;
    std :: string an;
	std :: string heure;
	std :: string min ;
	 
	 public:
	 	
	 	datetemps(){};
	 	
	 	void extraire(std:: string s){
	 		this->jour = s.substr(0,2);
	 		this->mois = s.substr(2,2);
	 		this->an = s.substr(4,4);
	 		this->heure = s.substr(8,2);
	 		this->min = s.substr(10,2);
		 }
		 
		void affiche (){
			cout<< "Cette chaine de characteres represente la date du "<< jour << " du mois "<< mois <<" "<< an<< " a "<< heure<<"h"<< min<< endl;
		}
		
};

 int main(){
 	datetemps D1;
 	std::string chaine;
 	cout<< "veuillez entrez la chaine de charactere a extraire compser de 12 char:"<< endl;
 	cin>> chaine;
 	D1.extraire(chaine);
 	D1.affiche();
 }


