#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows : ";
    cin>>rows;

    int i=1;
   
    while(i<=rows){
        int j=1;
        while(j<=rows){
            char ch= 'A'+i-1;
            cout<<ch<<" ";
            j++;

        }
        cout<<endl;
        i++;

    }

}
