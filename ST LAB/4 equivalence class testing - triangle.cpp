#include <iostream>
#include <string>

using namespace std;
string Output_classification(int a , int b , int c){
   
    if((a+b<c||a+c<b||b+c<a)||(a==0||b==0||c==0)){
        return "Not A triangle";
    }
    else{
        if(a!=b&&b!=c&&c!=a){
        return "Scalene";
    }
    else if(a==b&&b==c){
        return "Equilateral";
    }
    else {
        return "isosceles";
    }
    }

}
int main(){

    //input class
    int rl;
    int rh;

    cout<<"Enter Lower Range for triangle for input ";
    cin>>rl;
    cout<<endl;
    cout<<"Enter Higher Range for triangle for input ";
    cin>>rh;
    cout<<endl;


    int arr[3]={(rl-1),(rl+rh)/2,(rh+1)};
    int a=-1;
    int b=-1;
    int flag=0;
    int count=1;
    


    for(int i=0;i<=26;i++){
        if(b%3==0){b++;}
        if(i%9==0&&i%3==0){
            a++;
            b=0;}
        if(i==0){
            a=0;
            b=0;
        }
        // if(arr[a]==arr[b]&&arr[b]==arr[i%3] && flag==1) continue;

        // if(arr[a]==arr[b]&&arr[b]==arr[i%3] && flag==0) flag=1;


        if(arr[a]==arr[b]&&arr[b]==arr[i%3]&&flag==0&&((arr[a]!=0||arr[b]!=0||arr[i%3]!=0))){
            flag=1;
            count++;
            string ans=Output_classification(arr[a],arr[b],arr[i%3]);
        cout<<to_string(count)<<"\t"<<to_string(arr[a])<<"\t"<<to_string(arr[b])<<"\t"<<to_string(arr[i%3])<<"\t"<<ans<<endl;
        }
        if(arr[a]==arr[b]&&arr[b]==arr[i%3]&&flag==1){}
        else{
            string ans=Output_classification(arr[a],arr[b],arr[i%3]);
            cout<<to_string(count)<<"\t"<<to_string(arr[a])<<"\t"<<to_string(arr[b])<<"\t"<<to_string(arr[i%3])<<"\t"<<ans<<endl;
            count++;
        }
        
    }
    return 0;
}