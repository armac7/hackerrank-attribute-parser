// This program is unfinished because I realized I'm an idiot and unintuitive, but this program has made me more intuitive.
// Gonna redo it in a different file.

// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;


// int main() {
//     int N, Q;
//     cin >> N >> Q;

//     //cout << "\tN: " << N << endl << "\tQ: " << Q << endl; // debug
//     cin.clear();
//     cin.ignore();
//     string srcProgram = "";
//     int index = 0;
//     int closingIndex = 0;
//     for (int i = 0; i < N; i++) {
//         cout << "\ti: " << i << endl;
//         string tagLine;

//         // Validation Values
//         bool valid = false;
//         // Validation Loop
//         do 
//         {
//             getline(cin, tagLine);
//             //cout << "\tINDEX: " << index << endl; // debug
//             // checks to make sure tag is correctly formatted
//             if (tagLine[1] == '/') 
//             {   
//                 // cout << "\tCLOSING INDEX: " << closingIndex << endl; // debug
//                 // cout << "\tFIND CLOSING INDEX: " << tagLine.find(to_string(closingIndex)) << endl; // debug
//                 if (index = 0) 
//                 {
//                     cout << "Please enter an opening tag first." << endl;
//                     valid = false;
//                 }
//                 else if (tagLine.find(to_string(closingIndex)) == string::npos) 
//                 {
//                     cout << "Tags must be closed in reverse order of addition. EX. tag1 must be preceded by tag2." << endl;
//                     valid = false;
//                 }
//                 closingIndex--;
//                 valid = true;
//             } 
//             else 
//             {
//                 if ((tagLine[0] != '<') || (tagLine[tagLine.length() - 1] != '>') || (tagLine.find("tag") != 1)) 
//                 {
//                     cout << "Incorrect Tag Creation! EX. \"<tag1 attribute=\"value\">\"" << endl;
//                     // cout << "\tTag # POS: " << tagLine.find(to_string(index+1)) << endl; // debug
//                     valid = false;
//                 } 
//                 else if (tagLine.find(to_string(index+1)) != 4) 
//                 {
//                     cout << "Incorrect Tag Numbering! EX. tag1 must precede tag2!" << endl;
//                     valid = false;
//                 }
//                 else 
//                 {
//                     // cout << "\tsrcProgram Before Add: " << srcProgram << endl; // debug
//                     srcProgram = srcProgram + tagLine;
//                     //cout << "\tsrcProgram After Add: " << srcProgram << endl; // debug
//                     index++;
//                     closingIndex++;
//                     valid = true;
//                 }
//             }
//         } while (!valid);

//         //cout << "\tCURRENT INDEX: " << index << endl; // debug
//     }

//     // Query processor
//     for (int i = 0; i < Q; i++) {
//         string query;
//         bool valid = false;
//         string tagToGrabFrom = "";
//         string attrToGrab = "";


//         // query validity check and command grabber
//         do 
//         {
//             cin >> query;
//             bool periodCheck = false;
//             // cout << "\tQUERY: " << query << endl; // debug
//             // if tag1 is not first
//             if (query.find("tag1") != 0) 
//             {
//                 cout << "Invalid query! Must be structured such as \"tag1.tag2~attribute\"" << endl;
//                 periodCheck = false;
//             }
//             // if tag1 is the only selector
//             else if (query.find(".") == string::npos) 
//             {
//                 if (query.find("~") == string::npos) 
//                 {
//                     cout << "Invalid query! \"~\" is missing!" << endl;
//                     valid = false;
//                 }
//                 else 
//                 {
//                     tagToGrabFrom = "tag1";
//                     attrToGrab = (query.substr(query.find("~") + 1));
//                     valid = true;
//                     break;
//                 }
                
//             } 
//             // if tag1 is not the only selector
//             else 
//             {
//                 int counter = 0;
//                 string queryChecker = query;
//                 // used to check and make sure query is structured properly and grabs to query selector (what comes after the ~)
//                 do 
//                 {
//                     string currTag = "tag" + to_string(counter + 1) + ".";
//                     if (queryChecker.find(currTag) == 0) 
//                     {
//                         queryChecker = queryChecker.substr(currTag.length());
//                         // cout << "\t curr queryChecker: " << queryChecker << endl; // debug
//                         counter++;
//                     } 
//                     else 
//                     {
//                         currTag = "tag" + to_string(counter + 1) + "~";
//                         if (queryChecker.find(currTag) == 0) 
//                         {
//                             tagToGrabFrom = currTag.substr(0, currTag.length() - 1);
//                             attrToGrab = queryChecker.substr(currTag.length());
//                             periodCheck = true;
//                         }
//                         else
//                         {
//                             cout << "Invalid query! Improper form or numbering!" << endl;
//                             periodCheck = false;
//                         }
//                     }

//                 } while(!periodCheck);
//                 valid = true;
//             } 
//         } while(!valid);
//         // cout << "\tTAG TO GRAB FROM: " << tagToGrabFrom << endl << "\tTO GRAB: " << attrToGrab << endl; // debug

//         if (stoi(tagToGrabFrom.substr(2)) > index) 
//         {
//             cout << "Not Found!" << endl;
//         }
//         else if (stoi(tagToGrabFrom.substr(2)) == index)
//         {
//             query = query.substr(query.find(tagToGrabFrom));
//             if (query.find(attrToGrab) != string::npos) 
//             {
//                 query = query.substr(query.find(attrToGrab));
//                 query = query.substr(query.find("\"") + 1);
//                 query = query.substr(0, query.find("\""));
//                 cout << query << endl;
//             }
//         }
//         if (query.find(tagToGrabFrom) == string::npos) {
//             cout << "Not Found!" << endl;
//         }
//     }

//     return 0;
// }
