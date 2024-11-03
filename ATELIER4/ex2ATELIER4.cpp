#include <iostream>
using namespace std;

class Animal{
	protected:
	std::string nom;
	int age;
	
	public:
	void set_age(int age ){
		this->age=age;
	}
	void set_nom( std:: string nom){
		this->nom=nom;
	}
	
	Animal(std:: string nom , int age){
		this->nom= nom;
		this->age= age;
	}
	void AffichInfo(){
	   	cout<< "son nom est:"<<nom<< endl;
	   	cout<< "son age est:"<<age<< endl;
	   }
	
};

class Zebra: public Animal{
	 public:
	 	std::string origine;
	 	std:: string race;
	
	Zebra(std:: string nom , int age,std::string origine, std:: string race) : Animal(nom , age){
		this->origine=origine;
		this->race= race;
		
	}
		void set_origine(int origine  ){
		this->origine=origine;
	}
	   void set_race( std:: string race){
		this->race=race;
	}
	   void AffichInfo(){
	   	cout<<"--LES INFO DU ZEBRA--"<<endl;
	   	cout<< "son nom est:"<<nom<< endl;
	   	cout<< "son age est:"<<age<< endl;
	   	cout<< "son origine est:"<<origine<< endl;
	    cout<< "sa race est:"<<race<< endl;
	   	}
	};	
	
class Dolphin: public Animal{
	 public:
	 	std::string origine;
	 	std:: string race;
	
	Dolphin(std:: string nom , int age,std::string origine, std:: string race) : Animal(nom , age){
		this->origine=origine;
		this->race= race;
		
	}
		void set_origine(std::string origine  ){
		this->origine=origine;
	}
	   void set_race( std:: string race){
		this->race=race;
	}
	   void AffichInfo(){
	   	cout<<"--LES INFO DU DOLPHI--"<<endl;
	   	cout<< "son nom est:"<<nom<< endl;
	   	cout<< "son age est:"<<age<< endl;
	   	cout<< "son origine est:"<<origine<< endl;
	    cout<< "sa race est:"<<race<< endl;
	   	}
	};	
	
int main(){
	Zebra z1("zebra102",2,"Botswana","zebre de montagne");
	z1.set_age(3);
	z1.AffichInfo();
	
	Dolphin d1("dolphin222",20,"---","long bec");
	d1.set_origine("affrique du sud");
	d1.AffichInfo();
}	
	   	
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   

