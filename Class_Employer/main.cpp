#include <iostream>
using namespace std;

class Employer{
public:
    virtual void Print() = 0;
};

class President : public Employer{
public:
    void Print(){
        cout << "Good day mr. President!\n";
    }
};

class Manager : public Employer{
public:
    void Print(){
        cout << "Hi Manager!\n";
    }
};

class Worker : public Employer{
public:
    void Print(){
        cout << "Go work!\n";
    }
};


int main() {
    President pr;
    pr.Print();
}
