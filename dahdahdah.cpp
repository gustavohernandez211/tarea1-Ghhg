#include <iostream>
#include <string>

using namespace std;

int main() {
   	string morse[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", ".-.-.-", "--..--", "..--..", ".----.", "-.-.--", "-..-.", "-.--.", "-.--.-", ".-...", "---", ".-.-.", "-...-", ".-.-.-.", "+", "-.-.-.", "-....-", "..--.-", ".-.-.", "...-..-", ".--.-.", " "};
	string alphabet[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "1", "2", "3", "4", "5", "6", "7", "8", "9", "0", ".", "?", ",", "!", "'", "/", "(", ")", "&", ":", ";", "=", "+", "-", "_", "\"", "@", " ", ""};
	int numcases;
    cin >> numcases;
    cin.ignore();
    for (int casenum = 1; casenum <= numcases; casenum++) {
        string input= "";
        string output = "";
        string palabra = "";
        getline(cin, input);
        int j = 0;
        int i = 0;
        bool encontrado = false;
        while (j < input.length()) {
            if (input[j] == ' ') {
                while (i < 47 && !encontrado) {
                    if (palabra == morse[i]) {
                        output += alphabet[i];
                        encontrado = true;
                    }
                    i++;
                }
                palabra = "";
                encontrado = false;
                i = 0;
            } else {
                palabra += input[j];
            }
            j++;
        }
        if (palabra != "") {
            while (i < 47 && !encontrado) {
                if (palabra == morse[i]) {
                    output += alphabet[i];
                    encontrado = true;
                }
                i++;
            }
        }
        cout <<"Message "<< casenum << ":\n" << output << endl;
    }

    return 0;
}
