#include <iostream>
using namespace std;

class Hierarachy {
public:
    void hierarachyFunction() {
        cout << "Function in Base Class Hierarachy" << endl;
    }
};

class Derived : public Hierarachy {
public:
    void derivedFunction() {
        cout << "Function in Derived Class" << endl;
    }
};

class SubDerived : public Derived {
public:
    void subDerivedFunction() {
        cout << "Function in SubDerived Class" << endl;
    }
};

class SubSubDerived : public SubDerived,public Derived {
public:
    void subSubDerivedFunction() {
        cout << "Function in SubSubDerived Class" << endl;
    }
};

class SubSubSubDerived : public SubSubDerived, public SubDerived {
public:
    void subSubSubDerivedFunction() {
        cout << "Function in SubSubSubDerived Class" << endl;
    }
};

int main() {
    Hierarachy h;
    Derived h1;
    SubDerived h2;
    SubSubDerived h3;
    SubSubSubDerived h4;

    h.hierarachyFunction();

    h1.hierarachyFunction();
    h1.derivedFunction();

    h2.hierarachyFunction();
    h2.derivedFunction();
    h2.subDerivedFunction();

    h3.hierarachyFunction();
    h3.derivedFunction();
    h3.subDerivedFunction();
    h3.subSubDerivedFunction();

    h4.hierarachyFunction();
    h4.derivedFunction();
    h4.subDerivedFunction();
    h4.subSubDerivedFunction();
    h4.subSubSubDerivedFunction();

    return 0;
}
