#include <iostream>
#include <stack>
#
using namespace std;

class Pile{
	private:
	stack<int> element;
	
	public:
	Pile()=default;
		
	 void Empiler( int x){
	 	 element.push(x);
	 	}
	void Depiler(){
		if (!element.empty()){
			element.pop();
		}else{
			cout<< "la pile est vide vous ne pouvez plus depiler"<< endl;
		}
    }
//	void afficher(){
//		      
//			while (!element.empty()){
//				cout << element.top()<<endl;
//			     element.pop();
//		}
//	}

};

int main(){
	Pile p1;
	Pile p2;
	
	p1.Empiler(35);
	p1.Empiler(2);
	p1.Empiler(98);
	
//	p1.affiche();
	
	p2.Empiler(47);
	p2.Empiler (122);
	p2.Empiler(3);

	p1.Depiler();
	p1.Depiler();
	p1.Depiler();
	
	p2.Depiler();
	p2.Depiler();
    p2.Depiler();
    p2.Depiler();
	
	
}


