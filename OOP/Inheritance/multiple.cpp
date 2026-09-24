#include <iostream>
using namespace std;

class LandVehicle {
    public:
    void landInfo() {
        cout << "This is land vehicle" << endl;
    }
};

class WaterVehicle {
    public:
    void waterInfo() {
        cout << "This is water vehicle" << endl;
    }
};

class Amphibious : public WaterVehicle, public LandVehicle {
    public:
    Amphibious() {
        cout << "This is Amphibious Vehicle." << endl;
    }
};

int main() {
    Amphibious am;

    am.landInfo();
    am.waterInfo();

    return 0;
}