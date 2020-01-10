#include <iostream>

using namespace std;

namespace apple {
    int a = 5, b = 0;
}

namespace pineapple {
    double a = 5.5, b = 0.5;
}

int main() {

    cout << "a from apple " << apple::a << endl;
    cout << "a from pineapple " << pineapple::a << endl;

    using apple::a;
    a++;
    cout << "a from apple after " << apple::a << endl;

    { using namespace pineapple;
    cout << "from pineapple " << a+b << endl; }
}
