#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>

using namespace std;
int count = 0;
string text;
string Grade[] = {"A","B+","B","C+","C","D+","D","F","W"};
int main(){
    srand(time(0));
    int random = rand()%9;
    cout << "Press Enter 3 times to reveal your future.\n";
    do{
        getline(cin,text);
        count++;
    }while(count < 3);
    switch (random)
    {
    case 1:cout << "You will get " << Grade[0] << " in this 261102.";
    break;
    case 2:cout << "You will get " << Grade[1] << " in this 261102.";
    break;
    case 3:cout << "You will get " << Grade[2] << " in this 261102.";
    break;
    case 4:cout << "You will get " << Grade[3] << " in this 261102.";
    break;
    case 5:cout << "You will get " << Grade[4] << " in this 261102.";
    break;
    case 6:cout << "You will get " << Grade[5] << " in this 261102.";
    break;
    case 7:cout << "You will get " << Grade[6] << " in this 261102.";
    break;
    case 8:cout << "You will get " << Grade[7] << " in this 261102.";
    break;
    default:cout << "You will get " << Grade[8] << " in this 261102.";
    break;
    }
}