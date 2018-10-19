/**

Description: Program consisting of two functions. One stores a user's response to a prompt as a string, the other tests that string for a preset char and returns the amount of occurances.
Filename: midterm.cpp
Author: Matthew Herrera
Date: Thu Oct 18 18:44:57 PDT 2018

*/

#include <iostream>
#include <string>


using namespace std;

char test = 'A'; //Letter to test for.


string get_string(string Q);

int char_count(string entry, char a);


int main()
{
   string var = get_string("Enter a string: ");
   cout << "There are: " << char_count(var,test) << " " << test << " 's"<<endl;
   return 0;
}

/**
simple function that makes sure the user enters in a valid string
@param Q is the desired prompt
@return entry is string entered by user
**/
string get_string(string Q)
    {
        do
        {
            cout << Q;
            if (cin)
            {
                string entry;
                getline(cin, entry);
                cout << endl;
                return entry;
            }else{
                cin.clear();
                cin.ignore(9999, '\n');
            }
        } while (cin);
    }

/*
Function that iterates through a string, and checks each letter against a test case.
@param entry, is the string that will be tested
@param a, is the char to test the string for
@return count, is the number of times the test char occurs in the entry string.
*/  
int char_count(string entry, char a)
    {
        int count = 0;

        for(int i = 0; i < entry.length(); i++)
        {
            char c = tolower(entry[i]);
                if (c == tolower(a))
                {
                    count++;
                }
        } return count;
    }
