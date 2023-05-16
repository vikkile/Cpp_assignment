#include "car.hpp"

int main() {
    //Car object initialization
    Car FORD;
    //member variable initialization object initialization
    FORD.ReleaseYear = 2024;
    FORD.customer = "Venu";
    FORD.speed = 0;
    
    cout << "Car ReleaseYear= " << FORD.get_ReleaseYear() << endl;
    cout << "Car customer name= " << FORD.get_customer() << endl;
    cout << "Car current speed= " << FORD.get_speed() << endl;
    
    //Accelerating the speed five times
    for(int i=0; i<5 ; i++) {
        FORD.accelerate ();
    }
    
    //Deaccelerating the speed five times
    cout << "Car speed after 5 accelerations  = " << FORD.get_speed() << endl;
    for(int i=0; i<5 ; i++) {
        FORD.brake();
    }
    cout << "Car speed after 5 brak's = " << FORD.get_speed() << endl;

    return 0;
}
