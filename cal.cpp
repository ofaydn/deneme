#include <iostream>
using namespace std;
int finalx;
int finaly;
int finalArea;
int vectorNumber;
void print () {
  cout << "The composed vector is on " << finalArea <<
    ". area with those axis projections: " << "(" << finalx << "," << finaly<< ").";
}
int main (){
    cout<<"Please enter vector number: ";
    cin>>vectorNumber;
    int x[vectorNumber];
    int y[vectorNumber];
    int area[vectorNumber];
  for (int c = 0; c < vectorNumber; c++){
      cout << "Please enter x: ";
      cin >> x[c];
      cout << "Please enter y: ";
      cin >> y[c];
      cout << "Please enter area: ";
      cin >> area[c];}
  for (int i = 0; i < vectorNumber; i++){
      if (area[i] == (2 or 3)){
	  x[i] = -x[i];
      }
      case (area[i] == (3 or 4)){
	  y[i] = -y[i];
      }
  }
  for(int a = 0;a<vectorNumber;a++){
      finalx+=x[a];
      finaly+=y[a];
  }
  if ((finalx == 0)||(finaly == 0)){
      cout << "This vector has no area";}
  case (finalx > 0 and finaly > 0){
      finalArea = 1;
      print ();
  }
  case (finalx < 0 and finaly > 0){
      finalArea = 2;
      print ();
  }
  case (finalx < 0 and finaly < 0){
      finalArea = 3;
      print ();
  }
  else{
      finalArea = 4;
      print ();
  }
  return 0;
}