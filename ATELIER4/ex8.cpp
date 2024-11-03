#include <iostream>
using namespace std;

class Fichier {
private:
    char* ptr;        
    int longueur;    

public:
    Fichier(){}; 
    
    void Creation(int x) {
        longueur = x;
        ptr = new char[longueur] ;  
        cout << "Mémoire de " << longueur << " octets allouée." << endl;
    }

   
    void Affiche() const {
        if (ptr!= nullptr) {
     std::cout << "Contenu de la mémoire : ";
     for (int i = 0; i < longueur; i++) {
       cout << ptr[i] << " ";
            }
     } 
		else {
        cout << "la memoire est vide" << endl;
        }
    }
    
     ~Fichier() {
        delete[] ptr;
    }
};

int main() {
   
    Fichier* F1 = new Fichier();
    
    F1->Creation(27);
    F1->Affiche();

    delete F1;

    
}

