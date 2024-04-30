#include <bits/stdc++.h>

using namespace std;

char check(int n){
    return n >= 10 ? 'A' + n % 10 : n + '0'; 
}

bool checkValue(string n, int b1, int b2){
    string validChars = "0123456789ABCDEFGHIJKLMNOPQRSTUVXYZ";

    if(b1 < 0 || b2 < 0 || b1 > 36 || b2 > 36) return false; 

    for(auto v: n){
        int aux = (v >= '0' && v <= '9') ? (v-'0') : (v -'A') + 11;
        if(!validChars.find(n)) return false;

        if(aux > b1) return false;
    }

    return true;
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
    int base1, base2, control = 1;

    cout << "\nOBS: Todos os numeros utilizados devem ser positivos ou base ser igual a 0\n";

    while(control){
        cout << "\nDigite o numero e a base (separado por espaco): ";

        cin >> n >> base1;

        cout << "Para qual base voce deseja passar? ";

        cin >> base2;
        
        if(!checkValue(n,base1, base2)){
            cout << "Existe alguma inconsistencia em seus valores\n";
            continue;
        }

        cout << n << " na base " << base2 << " e " << converteBaseX(converteDecimal(n, base1), base2) << endl;  

        cout << "\nSe deseja realizar outra operação digite 1: ";

        cin >> control;
    }
}