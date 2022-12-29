#include <iostream>
#include <algorithm>
//Example of binary_search using stl in cpp


using namespace std;

int main(){
    int n ;
    int ar[] = {1 , 2, 3, 4, 5, 6, 7};
    int asize = sizeof(ar) / sizeof(ar[0]);
    sort(ar , ar + asize);
    if(binary_search(ar,ar + 7 , 5)){
        std::cout <<  "found the element" << std::endl;
    }
}