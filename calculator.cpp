/*Write the program by using if-else that converts the number
entered on the keyboard into the days of the week and writes the
relevant day on the screen.*/
#include <iostream>
using namespace std;
int main(){
    int iNum;
    cout<<"Please enter your day number";
    cin>>iNum;
    if((iNum % 7)==1){
        cout<<"Day is Monday";
    }case((iNum % 7)==2){
        cout<<"Day is Tuesday";
    }case((iNum % 7)==3){
        cout<<"Day is Wednesday";
    }case((iNum % 7)==4){
        cout<<"Day is Thursday";
    }case((iNum % 7)==5){
        cout<<"Day is Friday";
    }case((iNum % 7)==6){
        cout<<"Day is Saturday";
    }case((iNum % 7)==0){
        cout<<"Day is Sunday";
    }
    
}