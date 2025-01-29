#include <iostream>
#include <vector>
#include <string>
using namespace std;

//parent/base/main class
class Tea{
    protected:
        string teaName;
        int servings;
    public:
        Tea(string name, int serve): teaName(name), servings(serve){
            cout << "Tea constructor called" << endl;
        }

        virtual void brew() const {// to be overriden
            cout << "Brewing " << teaName << endl;
        }
        virtual void serve() const {// to be overriden
            cout << "Serving: " << servings << endl;
        }

        //destructor
        virtual ~Tea(){
            cout << "Tea destructor called.." << endl;
        }

};

class GreenTea: public Tea{//inherit
    public:
        GreenTea(int serve):Tea("Green Tea", serve){
            cout << "Green Tea constructor called...." << endl;
        }
        void brew() const override{
            cout << "Brewing " << teaName << " by steeping green tea leaves." << endl;
        }

        ~GreenTea(){
            cout << "Green tea destructor called..."  << endl;
        }

};

class MasalaTea: public Tea{
    public:
        MasalaTea(int serve): Tea("Masala Tea", serve){
            cout << "Masala Tea constructor called...." << endl;
        }
        void brew() const override final{//final
            cout << "Brewing " << teaName << " with spices and milk." << endl;
        }
        ~MasalaTea(){
            cout << "Masala tea destructor called..."  << endl;
        }
};


// class spicyMasalaTea: public MasalaTea{
//     public:
//         void brew() const override{//error
//             cout << "Brewing " << teaName << " with spices and milk." << endl;
//         }
// };



int main(){
    Tea* tea1 = new GreenTea(2);//pointer 
    Tea* tea2 = new MasalaTea(3);
    tea1->brew();// for pointers
    tea1->serve();

    delete tea1;
    delete tea2;

    return 0;
}