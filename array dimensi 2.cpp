#include <iostream>

using namespace std;

int main(){

     
     int matrikcontoh [3][2] = {{5,1},{2,7},{3,8}};

    
     int i,j;

     cout<<"\t==============================";
     cout<<"\n\t=== Tampil Matrik Ordo 3x2 ===\n";
     cout<<"\t==============================\n\n";

     cout<<"\ncontoh menampilkan matrik =\n";
     for(i=0;i<3;i++){
          for(j=0;j<2;j++){
               cout<<matrikcontoh[i][j]<<" ";
          }
          cout<<endl;
     }

     return 0;
}

