#include <iostream>
#include<vector>

typedef long long int LLI;

using namespace std;

vector<int> fatores;

LLI isPrimo(LLI n){
    for(LLI d = 2; d*d < n+1; d++){
        if( n%d == 0 )
            return d;
    }
    return 0;
}

void fatora(LLI n){
    LLI p = isPrimo(n);
    if(p == 0)
        fatores.push_back(n);
    else{
        fatora(p);
        fatora(n/p);
    }
}

int main()
{
    LLI N;
    cin >> N;

    fatora(N);

    for(int i = 0; i < (int)fatores.size(); i++){
        cout << fatores[i] << endl;
    }

    return 0;
}
