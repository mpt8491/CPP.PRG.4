#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void csv_import(string data[][10], int columns, int *records, string filename){
    ifstream inFile;
    inFile.open(filename);
    int i = -1;
    string value;
        while (inFile.good() ){
        getline ( inFile, value, '\n' );
         i++;
   //  records;
//         cout << value << "" << "\n"; // display value removing the first and the last character from it
    
    //    value = data;
        }
    
    records = &i;
    inFile.clear();
    inFile.open(filename);
//    cout << i << " " << *records << endl;



        for(int j = 0; j < i; j++){
            inFile >> data[j][10];
        

 cout << data[j][10] << endl;
        }
      cout << *records << endl;



};

int main(){
int records;
string data[10][10];
csv_import(data,3,&records,"customers.csv");

};