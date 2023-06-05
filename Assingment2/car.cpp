#include "car.hpp"

int main() {
    
    //Calling Parameterized constructor
    Car FORD = Car(2024, "Venu");
    
    
    cout << "Car ReleaseYear= " << FORD.get_ReleaseYear() << endl;
    cout << "Car customer name= " << FORD.get_customer() << endl;
    cout << "Car current speed= " << FORD.get_speed() << endl;
    
    //Accelerating the speed five times
    for(int i=0; i<5 ; i++) {
        FORD.accelerate ();
    }
    cout << "Car speed after 5 accelerations  = " << FORD.get_speed() << endl;
    
    //Decelerate the speed five times
    for(int i=0; i<5 ; i++) {
        FORD.brake();
    }
    cout << "Car speed after 5 brakes = " << FORD.get_speed() << endl;

    return 0;
}