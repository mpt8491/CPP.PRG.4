#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

void csv_import(string data[][10], int columns, int *records, string filename){

   ifstream inFile(filename);
   string line, field;
   vector< vector<string> > array;  
   vector<string> v;                

while(inFile){
  v.clear();
  string line;
  if(!getline(inFile,line)) break;

  istringstream ss(line);
//  vector<string> words;

  while(ss){
    string s;
    if(!getline(ss, s, ',')) break;
    v.push_back(s);
  }
  array.push_back(v);
}

   for (size_t i=0; i<array.size(); ++i){
      for (size_t j=0; j<array[i].size(); ++j){
         data[i][j] = array[i][j];
         cout << data[i][j]; //<<endl;
      }
   }
    


int rows=0;
   ifstream file(filename);
   string lines;
   while (getline(file, lines))
   rows++;

   *records = rows;
  // cout << *records <<endl;
   
};

int main(){
//    int records;
//    string data[10][10];
//    csv_import(data,3,&records,"customers2.csv");
    string data[10][10]; int records; csv_import(data,3,&records,"customers.csv"); if(data[1][0] == "Fred");
//      cout<<records<<endl;
    return 0;
};