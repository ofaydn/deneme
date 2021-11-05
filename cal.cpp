#include <iostream> 
#include <string>
#include <stdio.h>
using namespace std; 
// function prototypes
void testing();
//

int main()  
{   
    testing();
    testing();
    return 0;
}
void testing(){
    static int say = 3;
    ;
    cout<<say<<endl;
    ++say;
}


























/*
getline(cin,doctor);//takes input(in strings) with spaces and such
    cout<< doctor<<endl;
*/

/*int columnN;
    int columnT;
    int aRow;
    int bRow;
    while(true){
        columN/2 ==> column number
        column/2 ==> last number of first columN
        while(columnN/2-1 != 0){}
         column/2- (columnN/2-1)
    }

    */

/*int anotherFunction(){
    int a, b, c;
    int favoriteNumber = 195;
    cout<<"Enter integer a= \n"; // \n adds new line
    cin>>a;
    cout<<"Enter integer b= ";
    cin>>b;
    c = a*b;    
    cout << "c = " << c << endl;
    return 0;
} */