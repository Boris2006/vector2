#include "middle_list.h"
vector <char> itc_strtlist(string a){
    vector <char> b;
    for(int i = 0; a[i] != '\0'; i++){
        b.push_back(a[i]);
    }
    return b;
}
