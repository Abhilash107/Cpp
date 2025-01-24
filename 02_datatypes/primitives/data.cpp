#include <iostream>

using namespace std;
using std::cout;
using std::endl;

int main(){
    //Stats of a player
    int goals = 2;
    int assists = 1;
    //int ratings = 8.8;// 8 not 8.8
    float ratings = 8.8;//8.8
    double sponsorPrice = 299.7754456645675;//299.775
    double sponsorPrice2 = 299.9998956645675;//300

    char teamTier = 'A';
    //char teamTier = 'AB';//error: multi-character character constant

    bool isTransferListed = false;//0


    string name = "Lionel Messi";
    //bool isTransferListed = 0;//0
    //bool isTransferListed = 10;//1
    //bool isTransferListed = 'A';//1
    //bool isTransferListed = '';//Error empty char constant

    cout << ratings << endl;


    return 0;

}
