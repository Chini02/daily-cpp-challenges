#include <iostream>
#include <string>
using namespace std;

string ReadString() {
    string S1;

    cout << "Pleas Enter a String: \n";
    getline(cin, S1);

    return S1;
}

void PrintFirstLetterPfEachWord(string S1) {
    bool isFirstLetter = true;

    for (int i = 0; i < S1.length(); i++)
    {
        if (S1[i] !=' '&&isFirstLetter)
        {
            cout << S1[i] << "\t";
        }
        isFirstLetter = (S1[i] == ' ' ? true : false);
    }
}

string UpperFirstLetterOfEachWord(string S1) {
    bool isFirstLetter = true;

    for (int i = 0; i < S1.length(); i++)
    {
        if (S1[i] != ' ' && isFirstLetter)
        {
            S1[i] = toupper(S1[i]);
        }
        isFirstLetter = (S1[i] == ' ' ? true : false);
    }
    return S1;
}


int main()
{
    string S1 = ReadString();

    PrintFirstLetterPfEachWord(S1);

    S1 = UpperFirstLetterOfEachWord(S1);
    cout << "\n" << S1 << endl;
    
}
