#include "cpluspluslabs.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

void add_node_tail(NODE** data, string firstname,string lastname, string email){
 while (*data) { 
        data = &(*data)->next; 
    }
    *data = new NODE{ firstname, lastname, email, NULL }; 
}