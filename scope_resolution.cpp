#include<iostream>
using namespace std;
int m =10;
int main(){
    int m =20;
    {
        int k =m;
        int m=30;
        cout<<"we are in inner block\n";
        cout<<"k = "<<k<<"\n";
        cout<<"m ="<<m<<"\n";
        cout<< " ::m="<<::m<<"\n";

    }
    cout<<"\n we are in outer block\n";
    cout<<"m="<<m<<"\n";
    cout<<"::m ="<< ::m<<"\n";
    return 0;

}
