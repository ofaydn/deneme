#include <iostream>
using namespace std;
int x[2];
int y[2];
int area[2];
int totalx;
int totaly;
int finalArea;
int vectorNumber;
void print () {
  cout << "The composed vector is on " << finalArea <<
    ". area with those axis projections: " << "(" << totalx << "," << totaly<< ").";
}
intmain (){
    cout<<"Please enter vector number: ";
    cin>>vectorNumber;
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
      else if (area[i] == (3 or 4)){
	  y[i] = -y[i];
      }
  }
  totalx = x[0] + x[1];
  totaly = y[0] + y[1];
  if ((totalx or totaly) == 0){
      cout << "This vector has no area";}
  else if (totalx > 0 and totaly > 0){
      finalArea = 1;
      print ();
  }
  else if (totalx < 0 and totaly > 0){
      finalArea = 2;
      print ();
  }
  else if (totalx < 0 and totaly < 0){
      finalArea = 3;
      print ();
  }
  else{
      finalArea = 4;
      print ();
  }
}