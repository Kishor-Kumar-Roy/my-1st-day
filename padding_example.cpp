#include <iostream>
using namespace std;

class Example {
public:
    char a;
    int b;
    double c;
};

int main() {
    cout << "Size of Example class: " << sizeof(Example) << " bytes" << endl;
    return 0;
}
