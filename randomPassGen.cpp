#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

void generatePass(){
    int length = 12;
    bool includeUpper = true;
    bool includeLower = true;
    bool includeNumber = true;
    bool includeSymbol = true;


    const string lowerchar = "abcdefghijklmnopqrstuvwxyz";
    const string upperchar = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const string numchar = "0123456789";
    const string symbolchar = "!@#$%^&*+=-_/";

    string allchar = "";
    string password = "";

    allchar += includeLower ? lowerchar: "";
    allchar += includeUpper ? upperchar: "";
    allchar += includeNumber ? numchar: "";
    allchar += includeSymbol ? symbolchar: "";

    if (length<0){
        cout << "Invalid length" << endl;
    };

    if (allchar.length()<0){
        cout << "Kindly allow some characters" << endl;
    };

    for(int i; i < length; i++){
        int randomIndex = rand() % allchar.length();
        password += allchar[randomIndex];
    };
    
    cout << password << endl;

}

int main(){
    srand(time(0));
    generatePass();
    return 0;
}