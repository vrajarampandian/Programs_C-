#include<iostream>
#include<cstring>
using namespace std;
#define MAX_CHARS 256
class IsomorphicStr
{
    public:
        bool checkIsomorphic(string str1, string str2)
        {
            int strlen1 = str1.length();
            int strlen2 = str2.length();

            if(strlen1 != strlen2)
                return false;
            
            bool marked[MAX_CHARS] = {false};
            int map[MAX_CHARS];

            memset(map, -1, sizeof(map));

            for(int i =0 ; i < strlen1; i++)
            {
                if(map[str1[i]] == -1)
                {
                    if(marked[str2[i]] == true)
                        return false;
                    
                    marked[str2[i]] = true;
                    map[str1[i]]= str2[i];
                }
                else if(map[str1[i]] != str2[i])
                    return false;
            }

            return true;
        }

};

int main()
{
    IsomorphicStr isomorhic;
    cout << isomorhic.checkIsomorphic("aba","xyx") << endl;
    cout << isomorhic.checkIsomorphic("abb","qer") << endl;
    return 1;
}
