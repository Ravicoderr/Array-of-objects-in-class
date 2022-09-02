#include<iostream>
using namespace std;
class employee
{
    int id;
    public:
    void setid(void){
        cout<<"enter your id "<<endl;
        cin>>id;

    }
    void getid(void){
        cout<<"the id num is "<<id<<endl;
    }

};
int main(){
    employee ravi[6];
    for( int i=0;i<6;i++){
        ravi[i].setid();
        ravi[i].getid();

    }
    return 0;

}    