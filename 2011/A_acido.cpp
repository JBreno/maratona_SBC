#include <stack>
#include <stdio.h>
#include <string.h>

using namespace std;

char str[301];
stack<char> pilha;

int f(int t){

        for(int i = 0; i < t; i++){
            if(!pilha.empty() &&
              ((str[i] == 'B' && pilha.top() == 'S')||
               (str[i] == 'S' && pilha.top() == 'B')))
                pilha.pop();
            else if(!pilha.empty() &&
                   ((str[i] == 'C' && pilha.top() == 'F')||
                    (str[i] == 'F' && pilha.top() == 'C')))
                pilha.pop();
            else
                pilha.push(str[i]);
        }

    return pilha.size();
}

void clearp(){
    while(!pilha.empty())
        pilha.pop();
}

int main()
{
    int t, p;
    while(scanf("%s", str) != EOF){
        t = strlen(str);
        p = f(t);
        printf("%d\n", (t-p)/2);
        clearp();
    }

    return 0;
}

