#include <bits/stdc++.h>

using namespace std;

char check(int n){
    return n >= 10 ? 'A' + n % 10 : n + '0'; 
}

bool checkValue(string n, int b1, int b2){
    return n[0] != '-' && b1 >= 0 && b2 >= 0; 
}

long long converteDecimal(string n, int base){
    int pw = 1;
    reverse(n.begin(), n.end());

    long long soma = 0;

    for(auto i: n){
        if(i >= 'A') soma += ((i - 'A') + 10) * pw;
        else soma += (i -'0') * pw;
        pw *= base;
    }

    return soma;
}

string converteBaseX(long long n, int base){
    string result = "";

    if(n == 0) return "0";

    while(n > 0){
        int ax = n % base;
        result += check(ax);
        n /= base;
    }

    reverse(result.begin(), result.end());

    return result;
}

int main(){
    string n;
    int base1, base2;

    cout << "OBS: Todos os numeros utilizados devem ser positivos\n\n";

    cout << "Digite o numero e a base (separado por espaco): ";

    cin >> n >> base1;

    cout << "Para qual base voce deseja passar? ";

    cin >> base2;
    
    if(!checkValue(n,base1, base2)){
        cout << "VALOR NEGATIVO : ( \n";
        return 0;
    }

    cout << n << " in base " << base1 << " is " << converteBaseX(converteDecimal(n, base1), base2) << endl;
}