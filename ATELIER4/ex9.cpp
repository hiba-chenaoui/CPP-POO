#include <iostream>
#include <list>
#include <iterator>
using namespace std;

class List{
	private:
	  list <int> element;
	
	public:
	  void AjoutDebut( int x){
	  	element.push_front(x);
	  }
	  
	  void Supprimer(){
	  	 cout<<" suppression du premier element se la liste:"<< endl;
	  	element.pop_front();
	  }
	  
	  void Affiche( ){
	  	for ( list <int> :: iterator it = element.begin(); it!=element.end(); it++)
		  
	  	 cout<<  *it<< endl;
}
	  
};

int main(){
	List L1;
	
	 L1.AjoutDebut(18);
	 L1.AjoutDebut(6);
	 L1.AjoutDebut(1);
	 L1.AjoutDebut(985);
		cout<<" affichage des element se la liste:"	<<endl;		
	 L1.Affiche();
    	
	 L1.Supprimer();
	 L1.Affiche();
	   
	
	
	
	
	
	
	
}
