#include<iostream>
using namespace std;

int main(){
    int rows,count =1;
    cout<<"Enter the number of rows :";
    cin>>rows;

    int i=1;
    while(i<=rows){
        int j=1;
        while(j<=i){
            cout<<(i+j-1)<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}