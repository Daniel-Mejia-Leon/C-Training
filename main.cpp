#include <iostream>
#include <string>
#include <cctype>

using namespace std;
//This is the function i created by my own but is giving some issues as you could see sometimes it appends some weird symbols,
//as far as i understood from the guys on facebook this function recognizes something else aside from the word.length(), something extra
// something extra that just throws into the console showing as weird symbols
string capitalize(string word){

    char capitalized[word.length() ] = {};

    for(int i = 0; i < word.length(); i++){
        if (i == 0){
            capitalized[i] = static_cast<char>(toupper(word[i]));}
        else{capitalized[i] = static_cast<char>(tolower(word[i]));}
    }

    return capitalized;
}


int main()
{

    //this section is the way i was told to do it, i just copied it, im stuying what is all that about cuz no idea
    //if i gett to understand this i will put it in a function to use it for capitalizing
    string str = "megde";

    for(size_t index{0}; auto &c : str)
    c = (index++ == 0 ? std::toupper(c) : std::tolower(c));

    cout << str;


    /*

    //this is the program that i was actually trying to run. But im having a hard time with capitalizing strings
    int age, weightLbs;
    float height;
    string firstName, lastName, account, answer, nationality;

    bool clean;

    cout << "what is your first name? "; getline(cin, firstName);
    cout << "what is your last name? "; getline(cin, lastName);
    cout << "what is your nationality? "; getline(cin, nationality);
    cout << "whats your height? "; cin >> height;
    if (height == 0){
        cout << "Height not valid. float accepted only" << endl; cin.clear(); cin.ignore(99999, '\n');}
    else{cin.ignore();}

    cout << "what company do you work for? "; getline(cin, account);
    cout << "do you have record? "; cin >> answer;
    cout << "\n";
    if (answer == "No" || answer == "no"){
        clean = true;}
    else if(answer == "yes" || answer == "Yes"){
        clean = false;}
    else{cout << "Answer not valid, yes or no only\n" << endl; cin.clear(); cin.ignore(99999, '\n');}

    //print
    cout << "Name: " << capitalize(firstName) << " " << capitalize(lastName) << endl;

    if(height == 0){cout << "Height: Invalid input" << endl;}
    else{cout<< "Height: "  << height << endl;}

    cout << "Nationality: " << capitalize(nationality) << endl;
    cout << "Working for: " << capitalize(account) << endl;
    //answer for records
    if (capitalize(answer) == "No" || capitalize(answer) == "Yes"){
        if(clean){cout << "Record: Clean" << endl;}
        else if (!clean){cout << "Record: Not clean" << endl;}
        }
    else if(capitalize(answer) != "No" || capitalize(answer) != "Yes"){cout << "Record: Invalid input" << endl;}
    */



















    return 0;
}


















