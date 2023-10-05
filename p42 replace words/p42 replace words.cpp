#include <iostream>
#include <string>
#include <vector>
using namespace std;



string readString(string msg)
{
	string str;
	cout << msg << endl;
	getline(cin, str);
	return str;
}

string replaceString(string s1, string strToReplace, string strToReplaceTo)
{
	short pos = s1.find(strToReplace);

	while (pos != -1)
	{
		s1.replace(pos, strToReplace.length(), strToReplaceTo);
		pos = s1.find(strToReplace);
	}
	return s1;
}

int main()
{
	string str = readString("Enter your string?");
	string s1 = readString("Enter the string you want to replace?");
	string s2 = readString("Enter the string you want to replace to?");

	cout << "String after replacing:\n";
	cout << replaceString(str, s1, s2);
	cout << endl << endl;



	return 0;
}





//string readString(string msg)
//{
//	string str;
//	cout << msg<<endl;
//	getline(cin, str);
//	return str;
//}
//vector <string> splitString(string str, string delim)
//{
//	vector <string>vStr;
//	string word = "";
//	short pos = 0;
//
//	//"Mohammad Abu-Hadhoud Iam from Jordan"
//	while ((pos = str.find(delim)) != -1)
//	{
//		word = str.substr(0, pos);
//		str = str.erase(0, pos + delim.length());
//		if (word != "")
//			vStr.push_back(word);
//	}
//	if (str != "")
//		vStr.push_back(str);
//
//	return vStr;
//}
//void replaceWordInString(vector <string>&vStr, string s1, string s2)
//{
//	for (string& word : vStr)
//	{
//		if (word == s1)
//			word = s2;
//	}
//}
//void printVectorStr(vector <string>vStr)
//{
//	string replacedStr = "";
//
//	for (string& word : vStr)
//	{
//		replacedStr += word+" ";
//	}
//	replacedStr = replacedStr.substr(0, replacedStr.length() - 1);
//	cout << replacedStr << endl << endl;
//}
//
//
//int main()
//{
//	string str = readString("Enter your string?");
//	vector <string> vStr= splitString(str, " ");
//	string s1 = readString("Enter the string you want to replace?");
//	string s2 = readString("Enter the string you want to replace to?");
//
//	replaceWordInString(vStr, s1, s2);
//	printVectorStr(vStr);
//
//
//	return 0;
//}

