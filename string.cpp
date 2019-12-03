#include <iostream>
#include <cstring>

using namespace std;
int main()
{
	char word[]="Naveen";
	char word1[]="Srinidhi";
	int len = strlen(word);
	char *word2=strcat(word,word1);
	cout<<word2<< endl;
}
