#include <iostream>
#include <algorithm>  

using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin >>n >> k >> l >> c >> d >> p >> nl >> np;
    int total_amount = k*l;
    int slices_by_friend = c*d;
    int quantity_of_shots = total_amount / nl;
    int salt = p/np;
    int mimimi = (min(min(quantity_of_shots, slices_by_friend),salt)/n);
    cout << mimimi<< endl;

    return 0;
}