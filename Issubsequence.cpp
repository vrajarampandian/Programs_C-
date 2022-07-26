#include<iostream>
using namespace std;

class IsSubsequence
{
    public:
    bool issubsequencecheck(string str1,string str2)
    {
        int strlen1 = str1.length();
        int strlen2 = str2.length();

        int i =0, j= 0;

        while( i < strlen1 && j < strlen2)
        {
            if(str1[i] == str2[j])
                i++;

            j++;
        }

        return i == strlen1;
    }
};

int main()
{
    IsSubsequence objisseq;
    cout <<objisseq.issubsequencecheck("abc", "sddafdbfc") << endl;
    cout <<objisseq.issubsequencecheck("cfg","fdcvgdf") << endl;
    

    return 1;
}