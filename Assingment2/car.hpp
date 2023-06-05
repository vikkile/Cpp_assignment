#include "iostream"
using namespace std;

// Car Class declaration
class Car {
        public:
            //member variable  declaration
            int ReleaseYear;
            string customer;
            int speed;
            
            //Variable Value return fuctions declaration
            int get_ReleaseYear () {
                return ReleaseYear;
            }
            string get_customer () {
                return customer;
            }
            int get_speed () {
                return speed;
            }
            //Each accelerate fuction will increase the speed 10KM.
            void accelerate () {
                speed = speed+10;
            }
            
            //Each deaccelerate fuction will decrease the speed 10KM.
            void brake () {
                speed = speed-10;
            }
            
            // parameterized construtor
            Car(int Year, string customerName) {
                ReleaseYear=Year;
                customer=customerName;
                speed=0;
                cout << "Constructor is called!" <<endl;
            }
            
            //Destructor
            ~Car() {
                cout << "Destructor is called!" <<endl;
            }
            

};