#include "iostream" 
#include <vector>

using namespace std;

int main(){
double aux=0;
int positive=0;


for(int i=0; i<6; i++){    
    cin >> aux;
    if(aux< 0)positive++;
    
}

cout << positive << endl;

return 0;
}

