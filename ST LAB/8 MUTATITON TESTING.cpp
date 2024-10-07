// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int greatest(int A, int B, int C) {
    // changed here A > B to A < B
    if(A<B) {
        if(A>C) {
           // cout<<"Largest Number is "<<A<<endl;
           return A;
        }
        else {
            //cout<<"Largest Number is "<<B<<endl;
            return B;
         }
     }
    {
    if(C>B) {
        //cout<<"Largest Number is "<<C<<endl;
        return C;
    }
else {
    //cout<<"Largest Number is "<<B<<endl;
    return B;
    }
 }
}

int greatest1(int A, int B, int C) {
    if(A>B) {
        if(A>C) {
           // cout<<"Largest Number is "<<A<<endl;
           return A;
        }
        else {
            //cout<<"Largest Number is "<<B<<endl;
            return B;
         }
     }
    {
    if(C>B) {
        //cout<<"Largest Number is "<<C<<endl;
        return C;
    }
else {
    //cout<<"Largest Number is "<<B<<endl;
    return B;
    }
 }
}

int main() {
    // Write C++ code here
   
    /*cout<<"Test Suite (randomly taken)"<<endl;
    cout<<"a    "<<"b    "<<"Output "<<endl;
    cout<<"10   "<<"10   "<<"20     "<<endl;
    cout<<"10   "<<"-1   "<<"0      "<<endl;
    cout<<"-1   "<<"-1   "<<"0      "<<endl;
    cout<<"0    "<<"0    "<<"0      "<<endl;
    int a,b;
    // cout<<"Enter two numbers to get the sum"<<endl;
   // cin>>a>>b;
    cout<<"Before changing the code output of test suit is"<<endl;
    vector<vector<int>> arr;
    vector<int> a1 = {10, 10};
    vector<int> a2 = {10, -1};
    vector<int> a3 = {-1, -1};
    vector<int> a4 = {0, 0};
    arr.push_back(a1);
    arr.push_back(a2);
    arr.push_back(a3);
    arr.push_back(a4);
    cout<<"a    "<<"b    "<<"Output "<<endl;
    for(int i = 0; i<arr.size(); i++) {
        vector<int> temp = arr[i];
        int S = sum(temp[0], temp[1]);
        cout<<temp[0]<<"   "<<temp[1]<<"     "<<S<<endl;
    }
    cout<<"After changing the code output of test suit is"<<endl;
    cout<<"a    "<<"b    "<<"Output "<<endl;
    for(int i = 0; i<arr.size(); i++) {
        vector<int> temp = arr[i];
        int S = sum1(temp[0], temp[1]);
        cout<<temp[0]<<"   "<<temp[1]<<"     "<<S<<endl;
    }
    */
    
    vector<vector<int>> arr;
    vector<int> a1 = {15, 1, 15};
    vector<int> a2 = {15, 2, 15};
    vector<int> a3 = {15, 15, 15};
    vector<int> a4 = {15, 29, 15};
    vector<int> a5 = {15, 30, 15};
    vector<int> a6 = {1,15, 15};
    vector<int> a7 = {2,15, 15 };
    vector<int> a8 = {29, 15, 15};
    vector<int> a9 = {30, 15, 15};
    arr.push_back(a1);
    arr.push_back(a2);
    arr.push_back(a3);
    arr.push_back(a4);
    arr.push_back(a5);
    arr.push_back(a6);
    arr.push_back(a7);
    arr.push_back(a8);
    cout<<"Test Suite Randomly Generated"<<endl;
    cout<<"a    "<<"b    "<<"c     "<<"Output "<<endl;
    for(int i =0; i<arr.size(); i++) {
        vector<int> temp = arr[i];
        int g = greatest(temp[0], temp[1], temp[2]);
        //cout<<"a    "<<"b    "<<"c     "<<"Output "<<endl;
        cout<<temp[0]<<"    "<<temp[1]<<"   "<<temp[2]<<"   "<<g<<endl;
    }
    
    cout<<"Before Changing the code output is"<<endl;
    for(int i =0; i<arr.size(); i++) {
        vector<int> temp = arr[i];
        int g = greatest(temp[0], temp[1], temp[2]);
        //cout<<"a    "<<"b    "<<"c     "<<"Output "<<endl;
        cout<<temp[0]<<"    "<<temp[1]<<"   "<<temp[2]<<"   "<<g<<endl;
    }
    cout<<"After Changing the code output is"<<endl;
    for(int i =0; i<arr.size(); i++) {
        vector<int> temp = arr[i];
        int g = greatest1(temp[0], temp[1], temp[2]);
        //cout<<"a    "<<"b    "<<"c     "<<"Output "<<endl;
        cout<<temp[0]<<"    "<<temp[1]<<"   "<<temp[2]<<"   "<<g<<endl;
    }
    return 0;
}