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

void add_node_head(NODE** data, string firstname,string lastname, string email){

    string nfirstname;
    string nlastname;
    string nemail;

    NODE* newNode = new NODE();
    newNode -> firstname = nfirstname;
    newNode -> lastname = nlastname;
    newNode -> email = nemail;
    newNode -> next = (*data);   

    (*data) = newNode; 
}



int main(){
NODE* data = nullptr; 

add_node_head(&data,"aspen","olmsted","aspeno@aol.com");
cout << &(*data) << endl;

add_node_head(&data,"sally","jones","sjones@aol.com");

return 0;
};
