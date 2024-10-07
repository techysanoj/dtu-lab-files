// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    cout<<"-------------------- Decision Table Testing --------------------"<<endl;
    cout<<"INV - Invalid Triangle"<<endl;
    cout<<"RAT - Right Angled Triangle"<<endl;
    cout<<"OAT - Obtuse Angled Triangle"<<endl;
    cout<<"AAT - Acute Angled Triangle"<<endl;
    cout<<"IMP - Impossible"<<endl;
    cout<<endl;
    
    cout<<"Condtition       "<<"    1"<<"   2"<<"   3"<<"   4"<<"    5"<<"   6"<<"   7"<<"   8"<<"   9"<<"   10"<<"  11"<<endl;
    cout<<"c1:a<b+c?        "<<"    F"<<"   T"<<"   T"<<"   T"<<"    T"<<"   T"<<"   T"<<"   T"<<"   T"<<"    T"<<"   T"<<endl;
    cout<<"c2:b<a+c?        "<<"    -"<<"   F"<<"   T"<<"   T"<<"    T"<<"   T"<<"   T"<<"   T"<<"   T"<<"    T"<<"   T"<<endl;
    cout<<"c3:c<a+b?        "<<"    -"<<"   -"<<"   F"<<"   T"<<"    T"<<"   T"<<"   T"<<"   T"<<"   T"<<"    T"<<"   T"<<endl;
    cout<<"c4:a^2=b^2+c^2 ? "<<"    -"<<"   -"<<"   -"<<"   T"<<"    T"<<"   T"<<"   T"<<"   F"<<"   F"<<"    F"<<"   F"<<endl;
    cout<<"c5:a^2>b^2+c^2 ? "<<"    -"<<"   -"<<"   -"<<"   T"<<"    T"<<"   F"<<"   F"<<"   T"<<"   T"<<"    F"<<"   F"<<endl;
    cout<<"c6:a^2<b^2+c^2 ? "<<"    -"<<"   -"<<"   -"<<"   T"<<"    F"<<"   T"<<"   F"<<"   T"<<"   F"<<"    T"<<"   F"<<endl;

    cout<<"________________________________________________________________"<<endl;
    
    cout<<"Rule Count      "<<"    32"<<"  16"<<"   8"<<"   1"<<"    1"<<"   1"<<"   1"<<"   1"<<"   1"<<"    1"<<"   1"<<endl;
    cout<<"________________________________________________________________"<<endl;
    cout<<"INV              "<<"    X"<<"   X"<<"   X"<<"    "<<"     "<<"    "<<"    "<<"    "<<"    "<<"     "<<"    "<<endl;
    cout<<"RAT              "<<"     "<<"    "<<"    "<<"    "<<"     "<<"    "<<"   X"<<"    "<<"    "<<"     "<<"    "<<endl;
    cout<<"OAT              "<<"     "<<"    "<<"    "<<"    "<<"     "<<"    "<<"    "<<"    "<<"   X"<<"     "<<"    "<<endl;
    cout<<"AAT              "<<"     "<<"    "<<"    "<<"    "<<"     "<<"    "<<"    "<<"    "<<"    "<<"    X"<<"    "<<endl;
    cout<<"IMP              "<<"     "<<"    "<<"    "<<"   X"<<"    X"<<"   X"<<"    "<<"   X"<<"    "<<"     "<<"   X"<<endl;
    
    return 0;
}