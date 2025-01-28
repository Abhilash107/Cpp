#include <iostream>
#include <string>
using namespace std;
//used by different classes by overriding its properties
class Code{
    public:
        virtual void languagesUsed() = 0;
        virtual void frameworksUsed() = 0;

        void project(){
            languagesUsed();
            frameworksUsed();
        }
};

class OSProject: public Code{
    public:
        void languagesUsed() override{
            cout << "C, C++" << endl;
        }

        void frameworksUsed() override{
            cout << "Drogon, STL" << endl;
        }

};

class EnterpriseProject: public Code{
    public:
        void languagesUsed() override{
            cout << "Java" << endl;
        }

        void frameworksUsed() override{
            cout << "Spring" << endl;
        }

};

class mlProject: public Code{
    public:
        void languagesUsed() override{
            cout << "PythonJs" << endl;
        }

        void frameworksUsed() override{
            cout << "Django, Express" << endl;
        }

};

int main(){
    OSProject projectOne;
    EnterpriseProject projectTwo;
    mlProject projectThree;

    //Notice here we dont need to call void project()  method.....
    //frameworksUsed() & languagesUsed() calls it
    projectOne.frameworksUsed();
    projectTwo.frameworksUsed();
    projectThree.frameworksUsed();

    projectOne.languagesUsed();
    projectTwo.languagesUsed();
    projectThree.languagesUsed();




}
