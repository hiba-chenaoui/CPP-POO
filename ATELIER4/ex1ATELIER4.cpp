#include <iostream>
using namespace std;

class complexe{
	private:
	int reel;
	int img;
	
	public:
		 //constructeur par defaut par defaut
		complexe()= default;
		// consructeur initialisation
		complexe( int reel, int img){
			this->reel= reel;
			this->img= img;
		}
		
		complexe operator+( complexe autre){
	     int x= reel+  autre.reel;
	     int y=img + autre.img;
	    cout << "le resultat de l addition est:"<<x<<"+"<< y<<"i"<< endl;
		}
		
		complexe operator*( complexe autre){
	     int x= (reel * autre.reel)-(img* autre.img);
	     int y=(reel* autre.img)+(img*autre.reel);
	    cout << "le resultat de la multiplication est:"<<x<<"+"<< y<<"i"<< endl;
		}
		
		complexe operator-( complexe autre){
	     int x= reel- autre.reel;
	     int y=img - autre.img;
	    cout << "le resultat de la soustraction est:"<<x<<"+"<< y<<"i"<< endl;
		}
		
		complexe operator /( complexe autre){
		float x, y;
	    float denominateur = (autre.img*autre.img)+ (autre.reel*autre.reel);
	    if (denominateur == 0){
	    	throw "la division ne peut pas etre effectuer sur 0.";
		}
		else 
		    x = ((reel * autre.reel)+(img * autre.img))/denominateur;
		    y = ((img*autre.reel)-(reel* autre.img))/denominateur;
		   
	    cout << "le resultat de la division est:"<< x <<"+"<< y <<"i"<< endl;
		}
		
		complexe operator ==( complexe autre){
			if(( reel == autre.reel) && (img== autre.img)){
				cout<< "les deux nbr complexes sont egaux"<< endl;
			}
			else 
			cout<<"les deux nbrs ne sont pas egaux"<<endl;
		}
};

    int main(){
    	complexe n1(4,6);
    	complexe n2 (0,0);
    	complexe n3, n4, n5, n6;
      
    	n3 = n1 + n2;
    	n4 = n1 - n2;
    	n5 = n1 * n2;
    	
    	try{
    		n6= n1/n2;
    	}
		catch (const char*e){
			cerr<<e<< endl;
		}
		n1==n2;
	}














