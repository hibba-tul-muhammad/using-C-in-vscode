#include <iostream>
using namespace std;
 int main(){
    float score;
    cout<<"What is your final match score?"<<endl;
    cin>>score;

    if (score>=0 && score<=499)
    {
        cout<<"Rank: Rookie"<<endl;
    }
    else if(score>=500 && score<=999){
        cout<<"Rank: Pro"<<endl;
    }
    else if(score>=1000){
        cout<<"Rank: Legend"<<endl;
    }
    else{
        cout<<"Invalid score"<<endl;
    }
    return 0;
 }