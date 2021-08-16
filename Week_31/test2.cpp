#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

class NODE {
public:
  string firstname;
  string lastname;
  string email;
  NODE* next;
};

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


 void print(NODE* data){
  while(data !=NULL){
  cout<<data->firstname<<" "<<data->lastname<<" "<<data->email<<" "<<"\n";
  data=data->next;

}
}

int main(){

NODE* data = nullptr; 

csv_import2(&data,"customers.csv");
void print(NODE**data);

return 0;

}