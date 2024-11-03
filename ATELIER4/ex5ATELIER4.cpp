#include <iostream>
using namespace std;
 
class Test {
private:
    static int counter;

public:

    void call() {
    counter++;  
    }

    
    static int getCallCount() {
        return counter;
    }
};

int Test::counter = 0;

int main() {
    Test instance1;

    instance1.call();
    instance1.call();
    instance1.call();
    
    cout << "La methode call est appelee " << Test::getCallCount() << " fois" << endl;

    return 0;
}






















