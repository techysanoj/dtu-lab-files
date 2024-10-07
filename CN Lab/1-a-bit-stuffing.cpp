#include<iostream>
#include<string>

using namespace std;

int main() {
    string input;
    cout<<"Enter stream of bits (in form of string): ";
    cin>>input;
    int count = 0;
    cout<<"Stuffed Data is: ";
    for(int i =0; i<input.size(); i++) {
        cout<<input[i];
        if(input[i] == '1') {
            count++;
        }
        else {
            count = 0;
        }
        if(count == 5) {
            cout<<"0";
            count = 0;
        }
    }
    cout<<endl;
    return 0;
}