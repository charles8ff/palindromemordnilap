#include <iostream>
#include <sstream>
#include <vector>

#include <chrono>
#include <locale>
#include <numeric>

using namespace std;


bool isItPalindrome(string s, int i){
    // Clarity purposes:
    cout << "Evaluando: \"" << s[i] << "\" and \""<< s[ s.size()-i-1 ]<<"\""<<endl;

    if( i > s.size()/2) return true;
    // else
    return s[ i ] == s[ s.size()-i-1 ] && isItPalindrome(s, i+1);
}

int main (){


    string myIntput;
    cout << "Introduza una palabra a determinar:\n\t>>";
    getline(cin, myIntput);

    if (isItPalindrome(myIntput, 0))
        cout << "Sí, es un palíndromo." << endl;
    else
        cout << "No, no es un palíndromo." << endl;

    return 0;
}