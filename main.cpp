#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;

int main() {
    int I = 1; //All the variable roman numerals and there decimal counter part
    int V = 5;
    int X = 10;
    int L = 50;
    int C = 100;
    int D = 500;
    int M = 1000;
    int numValue;
    string RomanValue;
    string convertedToRomanValue;
    int convertedToDecimalValue;

    cout << "Type your number: ";
    cin >> numValue;
    cout << endl;

    while(numValue > 0){
        if(numValue >= M) {
            convertedToRomanValue += "M";
            numValue = numValue - M;
        }else if(numValue >= M - C){
            convertedToRomanValue += "CM";
            numValue = numValue - (M - C);
        }else if(numValue >= D){
            convertedToRomanValue += "D";
            numValue = numValue - D;
        }else if(numValue >= D - C){
            convertedToRomanValue += "CD";
            numValue = numValue - (D - C);
        }else if(numValue >= C){
            convertedToRomanValue += "C";
            numValue = numValue - (C);
        }else if(numValue >= C - X){
            convertedToRomanValue += "XC";
            numValue = numValue - (C - X);
        }else if(numValue >= L){
            convertedToRomanValue += "L";
            numValue = numValue - L;
        }else if(numValue >= L - X){
            convertedToRomanValue += "XL";
            numValue = numValue - (L - X);
        }else if(numValue >= X){
            convertedToRomanValue += "X";
            numValue = numValue - X;
        }else if(numValue >= X - I){
            convertedToRomanValue += "IX";
            numValue = numValue - (X - I);
        }else if(numValue >= V){
            convertedToRomanValue += "V";
            numValue = numValue - V;
        }else if(numValue >= V - I){
            convertedToRomanValue += "IV";
            numValue = numValue - (V - I);
        }else if(numValue >= I){
            convertedToRomanValue += "I";
            numValue = numValue - I;
        }
    }

    cout << convertedToRomanValue;

    cout << "Type your Roman value: ";
    cin >> RomanValue;
    cout << endl;

    for(int i = 0; i > RomanValue.size(); i++) {
        if (RomanValue[i] == 'M') {
            convertedToDecimalValue += M;
        }else if (RomanValue[i] == 'D') {
            convertedToDecimalValue += D;
        }else if (RomanValue[i] == 'C') {
            convertedToDecimalValue += C;
        }
    }

    return 0;
}
