#include <iostream>
#include<string>


using namespace std;
string pig(string);

int main()
{
	string mySentc;
	cout<< "Enter a sentence to convert to 'Pig Latin': " << endl;

	getline(cin, mySentc);
	mySentc = pig(mySentc);
	cout << mySentc << endl;

	system("PAUSE");
	return 0;
}

string pig(string str)
{


	string pigLatWord, pigLatSent = "";
	int length = 0, i = 0;

	while (str[i] != '\0') {

		if (str.find(' ', i) != -1)
		{
			length = str.find(' ', i);
			length -= i;

			pigLatWord = str.substr(i, length);

			pigLatWord.insert(length, "ay");

			pigLatWord.insert(length, 1, str[i]);
			pigLatWord.erase(0, 1);

			i += length + 1;
		}
		else
		{
			pigLatWord = str.substr(i);
			length = pigLatWord.length();

			pigLatWord.insert(length, "ay");

			pigLatWord.insert(length, 1, str[i]);

			pigLatWord.erase(0, 1);

			i = str.length();
		}

		pigLatSent += (pigLatWord + " ");
	}
	return pigLatSent; // returns sentence in pig latin
	