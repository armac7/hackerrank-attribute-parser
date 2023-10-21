#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
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
    int closingIndex = 0;
    for (int i = 0; i < N; i++) {
        cout << "\ti: " << i << endl;
        string tagLine;

        // Validation Values
        bool valid = false;
        // Validation Loop
        do 
        {
            getline(cin, tagLine);
            cout << "\tINDEX: " << index << endl; // debug
            // checks to make sure tag is correctly formatted
            if (tagLine[1] == '/') 
            {   
                // cout << "\tCLOSING INDEX: " << closingIndex << endl; // debug
                // cout << "\tFIND CLOSING INDEX: " << tagLine.find(to_string(closingIndex)) << endl; // debug
                if (index = 0) 
                {
                    cout << "Please enter an opening tag first." << endl;
                    valid = false;
                }
                else if (tagLine.find(to_string(closingIndex)) == string::npos) 
                {
                    cout << "Tags must be closed in reverse order of addition. EX. tag1 must be preceded by tag2." << endl;
                    valid = false;
                }
                closingIndex--;
                valid = true;
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
                    closingIndex++;
                    valid = true;
                }
            }
        } while (!valid);

        cout << "\tCURRENT INDEX: " << index << endl; // debug
    }


    return 0;
}
