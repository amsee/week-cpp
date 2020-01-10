#include <iostream>

using namespace std;

namespace apple {
    int a = 5, b = 0;
}

namespace banana {
    double a = 5.5, b = 0.5;
}

int main() {

    cout << "a from apple " << apple::a << endl;
    cout << "a from banana " << banana::a << endl;

    using apple::a;
    a++;
    cout << "a from apple after " << apple::a << endl;

    { using namespace banana;
    cout << "from banana " << a+b << endl; }
}
