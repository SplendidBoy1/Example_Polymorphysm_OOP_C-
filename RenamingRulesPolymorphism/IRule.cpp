#include "IRule.h"

string RemoveSpecialChars :: rename(string input){
    stringstream result;
    for (int i = 0; i < input.size(); i++){
        bool in = true;
        for (int j = 0; j < this -> _blacklists.size(); j++){
            if (input[i] == this -> _blacklists.at(j)){
                in = false;
                
                break;
            }
        }
        if (in)result << input[i];
        else{
            result << " ";
            continue;
        }
    }
    return result.str();
}

/////////////////////////
string OneSpaceOnly :: rename(string input){
    stringstream result;
    bool first = true;
    for (int i = 0; i < input.size(); i++){
        if (input[i] == ' ' && first == true){
            result << ' ';
            first = false;
        }
        else{ 
            if (input[i] == ' ' && first == false){
                continue;
            }
            else {
                first = true;
                result << input[i];
            }
        }
    }
    return result.str();
}

/////////////////////////////////////
string AddCurrentMonth :: rename(string input){
    stringstream result;
    time_t now = time(0);
    tm *ltm = localtime(&now);
    result << ltm -> tm_mon;
    result << ltm -> tm_year << " ";
    result << input;
    return result.str();
}

//////////////////////////////////////
string AddPrefix :: rename(string input){
    stringstream result;
    result << this -> _prefix_str << " ";
    result << input;
    return result.str();
}

///////////////////////
string Replace :: rename(string input){
    stringstream result;
    int firstPosition, endPosition;
    for (int i = 0; i < input.size(); i++){
        bool correct = true;
        for (int j = 0; j < this -> _pattern.size(); j++){
            if (input[i + j] == this -> _pattern[j])continue;
            else {
                correct = false;
                break;
            }
        }
        if (correct){
            cout << i << endl;
            firstPosition = i;
            endPosition = i + this ->_pattern.size();
            break;
        }
        else continue;
    }
    // cout << firstPosition << " " << endPosition << endl;
    for (int i = 0; i < input.size();i++){
        if (i == firstPosition){
            result << this -> _to;
            i = endPosition - 1;
        }
        else result << input[i];
    }
    return result.str();
}