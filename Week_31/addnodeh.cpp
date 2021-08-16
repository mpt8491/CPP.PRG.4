#include "cpluspluslabs.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;



void add_node_head(NODE** data, string firstname,string lastname, string email){



    NODE* newNode = new NODE();
    newNode -> firstname = firstname;
    newNode -> lastname = lastname;
    newNode -> email = email;
    newNode -> next = (*data);   

    (*data) = newNode; 
}