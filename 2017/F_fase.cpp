/*
    Em uma competição de N competidores, no mínimo K competidores de classificam.
    Em caso de empate na última colocação, todos passam..
*/

#include <iostream>
#include <vector>

using namespace std;
 
int main() {
 
    int n,k,x,i;
    vector<int> pts(1000, 0); // vetor de 1000 posições com valor 0 em cada uma
    
    cin >> n >> k;

    for(i = 0; i < n; i++){
        cin >> x;
        pts[-x +1000] += 1; // mais um competidor com pontuação igual a -x +1000
    }

    x = i = 0;
    while (x < k) {
        x += pts[i++]; // conta quantos competidores se classificaram
    }
    
    cout << x << endl;

    return 0;
}