#include "cpluspluslabs.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;


void csv_import2(NODE** data, string filename){
string line;
ifstream File;
File.open(filename);
NODE* new_node = new NODE;
(*data) = new_node;
if(!File){
    cout<<"The file failed to load"<<endl;
}

while(getline(File, line, ',')){
new_node = new NODE;
File >> new_node->firstname;
File >> new_node->lastname;
File >>new_node->email;
new_node->next=(*data);
(*data) = new_node;
}
if(data == NULL){
 (*data) = new_node;
}
(*data) = NULL;


}