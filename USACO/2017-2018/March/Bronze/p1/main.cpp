#include <iostream>
#include <fstream>
using namespace std;

char game[3][3];
int main(){
  int team = 0;
  int individual = 0;
  int diff = 0;
	ofstream fout ("tttt.out");
  ifstream fin ("tttt.in");

   for (int i = 0; i<3; i++){
     for (int j = 0; j<3; j++){
       char a; fin >> a;
       game[i][j] = a;
     }
   }
   //individual
   bool allsame = true;
   bool allsame2 = true;
  for (int i = 0; i<3; i++){
    if (game[i][0]==game[i][1]&& game[i][0]==game[i][2]&&game[i][1]==game[i][2]){
      if (i==0) individual++;
      else if (i>0){
        if (i==1){
          if (game[i-1][0]==game[i][0]) individual+=0;
          else {individual++;diff++;}
        }
        if (i==2){
          if (game[i-2][0]==game[i][0]) individual+=0;
          else {individual++; diff++;}
        }
      }
    }
    else allsame = false;
  }
  if (individual==2 && diff ==1){
    fout << individual << endl;
    fout << diff << endl;
    return 0;
  }
  for (int j = 0; j<3; j++){
    if (game[0][j]==game[1][j]&& game[0][j]==game[2][j]&&game[1][j]==game[2][j]){
      if (j==0) individual++;
      else if (j>0){
        if (j == 1){
          if (game[0][j-1]==game[0][j]) individual+=0;
          else individual++;
        }
        if (j==2){
          if (game[0][j-2]==game[0][j]) individual+=0;
          else individual++;
        }
      }
    }
    else allsame = false;
  }
  if (allsame&&allsame2){
    fout << 1 << endl;
    fout << 0 << endl;
    return 0;
  }
   if (game[0][0] == game[1][1] && game[0][0]== game[2][2]&&game[1][1]==game[2][2]) individual++;
   if (game[0][2] == game[1][1] && game[0][2]== game[2][0]&& game[1][1]==game[2][0]) individual++;


   //team
   for (int i = 0; i<3; i++){
     if ((game[i][0]==game[i][1]&&game[i][0]!=game[i][2])||(game[i][0]==game[i][2]&&game[i][0]!=game[i][1])||(game[i][1]==game[i][2]&&game[i][1]!=game[i][0])) team++;
   }
   for (int j = 0; j<3; j++){
     if ((game[0][j]==game[1][j]&&game[0][j]!=game[2][j])||(game[0][j]==game[2][j]&&game[0][j]!=game[1][j])||(game[1][j]==game[2][j]&&game[1][j]!=game[0][j])) team++;
   }

   if ((game[0][0]==game[1][1]&&game[0][0]!=game[2][2])||(game[1][1]==game[2][2]&&game[1][1]!=game[0][0])||(game[0][0]==game[2][2]&&game[0][0]!=game[1][1])) team++;
   if ((game[0][2]==game[1][1]&&game[0][2]!=game[2][0])||(game[1][1]==game[2][0]&&game[1][1]!=game[0][2])||(game[0][2]==game[2][0]&&game[0][2]!=game[1][1])) team++;

   fout << individual << endl;
   fout << team << endl;
   return 0;
}