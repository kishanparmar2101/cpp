#include<iostream>
using namespace std;

class family {
    int cash,gold;
    public:
    family() {
        cash = 10, gold = 20;
    }
    void set_data() {
        cash = 140,gold = 200;
    }
    void get_data() const {
        //cash = 100, gold = 34532; //Will get Error
        cout << cash << " " << gold << endl;
    }
};

int main() {
    family obj;
    obj.get_data();
    obj.set_data();
    obj.get_data();
}