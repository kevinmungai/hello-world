#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//a program to eliminate repeated words

int main()
{
vector<string> words;
cout<<"Please enter a sentence with repeated words"<<endl;
for(string temp; cin>>temp;) //read whitespace separated words
    words.push_back(temp);   //put into vector
cout<<"Number of words: "<<words.size()<<endl;

sort(words.begin(), words.end()); //sort the words

for(int i = 0; i<words.size();++i)
	if(i==0 || words[i-1] != words[i]) //is this a new word?
cout<<words[i]<<endl;

return 0;

}
