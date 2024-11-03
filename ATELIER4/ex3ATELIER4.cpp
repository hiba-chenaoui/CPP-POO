#include <iostream>
using namespace std;

class Person{
	protected:
	std::string nom;
	std::string prenom;
	int age;
	
	public:
	Person(std::string nom,std::string prenom,int age){
		this->nom=nom;
		this->prenom=prenom;
		this->age=age;
	}
	 
	 void Afficher(){
	 	cout<<"les  donnees de cette person sont:"<<endl;
	 	cout<<nom << prenom<< "  age="<< age ;
	 	
	 }
	
};

class Employe : public Person{
	protected:
		int salaire;
		
	public:
	 Employe(std::string nom,std::string prenom,int age,int salaire):Person(nom, prenom,age){
	      this->salaire=salaire;	
    }
     void Afficher(){
     	cout<< "---les donnees de l employe--- "<<endl;
     	cout<<nom <<" "<<prenom<< " , Age:"<< age <<" , Salaire: " << salaire<< endl;
	 }
	
};

class Chef : public Employe{
	protected:
		std::string service;
		
	public:
	 Chef(std::string nom,std::string prenom,int age,int salaire,std::string service):Employe(nom, prenom,age,salaire){
	      this->service=service;	
    }
     void Afficher(){
     	cout<< "---les donnees du chef--- "<<endl;
     	cout<<nom<<" "<< prenom<< " , Age:"<< age <<" , Salaire: " << salaire<<" ,Service:"<< service<< endl;
	 }
	
};

class Directeur : public Chef{
	protected:
		std::string societe;              
		
	public:
	 Directeur(std::string nom,std::string prenom,int age,int salaire,std::string service,std::string societe):Chef(nom, prenom,age,salaire,service){
	      this->societe= societe;	
    }
     void Afficher(){
     	cout<< "---les donnees du Directeur--- "<<endl;
     	cout<<nom <<" "<< prenom<< " , Age:"<< age <<" , Salaire: " << salaire<<" ,Service:"<< service<< " ,Societe:"<< societe<< endl;
	 }
	
};

int main(){
	 
	 Employe E1("Ichrak","Anssis",25,6000);
	 E1.Afficher();
	 
	 Chef C1("Sahar","Ben",24,15000,"marketing");
	 C1.Afficher();
	 
	 Directeur D1("Hiba","Chenaoui",25,30000,"IT","fUTURE");
	 D1.Afficher();
	
	
	
	
	
	
	
	
	
}
