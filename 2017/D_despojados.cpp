#include <bits/stdc++.h>

typedef long long int LLI;

using namespace std;

vector<LLI> fatores;

LLI isPrimo(LLI n){
    for(LLI d = 2; d*d < n+1; d++){
        if( n%d == 0 )
            return d;
    }
    return 0;
}

void fatora(LLI n){

    if(n < fatores.back()) return;

    LLI p = isPrimo(n);
    if(p == 0 && n > fatores.back()){

        fatores.push_back(n);
    }else if(p){
        fatora(p);
        fatora(n/p);
    }
}

int main()
{
    LLI N, ans, aux;
    cin >> N;

    fatores.push_back(1);

    fatora(N);

    aux = fatores.size()-1;

    ans = aux < 2 ? 0 : (pow(2, aux))-aux-1;

    cout << ans << endl;

    //for(LLI x : fatores) cout << x << endl;

    return 0;
}
