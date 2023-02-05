#include<iostream>
using namespace std;
main()
{
    int length1, length2, count=0;
    string word1, word2;
    cout<<"Enter First Word: ";
    cin>>word1;
    cout<<"Enter Second Word: ";
    cin>>word2;
    length1=word1.length();
    length2=word2.length();
    for(int x=0; x<length1;x++)
    {
        for(int i=0; i<length2; i++)
        {
            if(word1[x]==word2[i])
            {
                count++;
                word2[i]=' ';
                break;
            }
        }
    }
    cout<<"The Number of Common Characters is "<<count;
}