/* pattern to be printed :
 
if n=5 then,

        * 
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

*/

#include<iostream>
using namespace std;

void pattern(int n){

 for(int row=1;row<= n;row++){
    
    // print {n-row} spaces
    for(int spaces= 1;spaces<=n-row;spaces++){
        cout<<"  ";
    }
    //print {2*row -1} stars
    for(int stars= 1;stars<=2*row-1;stars++){
        cout<<"* ";
    }
   //print new line
   cout<<"\n";

 }
}

int main(){
    int n;
    cout<<"Enter number of rows:";
    cin>>n;
    pattern(n);
    return 0;
}