#include <iostream>
#include <string>
using namespace std;


int main()
{
    string sentence;
    getline(cin, sentence);
    bool space_sleep = false;
    string res;
    for (int i = 0; i < sentence.length(); i++){
        if (sentence[i] == ' ' && space_sleep == true){continue;}
        if (sentence[i] == ' ' && space_sleep == false){
            res.push_back(sentence[i]);
            space_sleep = true;}
        else{
            res.push_back(sentence[i]);
            space_sleep = false;} }
    cout << res;

    return 0;

}