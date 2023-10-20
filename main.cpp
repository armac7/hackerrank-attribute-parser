#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N, Q;
    cin >> N >> Q;

    cout << "\tN: " << N << endl << "\tQ: " << Q << endl; // debug
    cin.clear();
    cin.ignore();
    string srcProgram = "";
    int index = 0;
    for (int i = 0; i < N; i++) {
        cout << "\ti: " << i << endl;
        string tagLine;

        // Validation Values
        bool valid = false;
        // Validation Loop
        do 
        {
            getline(cin, tagLine);
            // checks to make sure tag is correctly formatted
            if (tagLine[1] == '/') 
            {

            } 
            else 
            {
                if (tagLine[0] != '<' || tagLine[tagLine.length() - 1] != '>'|| tagLine.find("tag") != 1) 
                {
                    cout << "Incorrect Tag Creation! EX. \"<tag1 attribute=\"value\">\"" << endl;
                    // cout << "\tTag # POS: " << tagLine.find(to_string(index+1)) << endl; // debug
                    valid = false;
                } else if (tagLine.find(to_string(index+1)) != 4) 
                {
                    cout << "Incorrect Tag Numbering! EX. tag1 must precede tag2!" << endl;
                    valid = false;
                } else 
                {
                    // cout << "\tsrcProgram Before Add: " << srcProgram << endl; // debug
                    srcProgram = srcProgram + tagLine;
                    // cout << "\tsrcProgram After Add: " << srcProgram << endl; // debug
                    index++;
                    valid = true;
                }
            }
        } while (!valid);
    }


    return 0;
}
