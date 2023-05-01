#include<iostream>
using namespace std;

int main(){
    int count =1;
    int rows;
    cout<<"Enter the number of rows :";
    cin>>rows;

    int i =1;
    while(i<=rows){
        int j=1;
        while(j<=rows){
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;

    }
}