#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string s) 
{
    int answer = 0;
    
    int t = 0;
    string a = "";
    while(t < s.size())
    {
        if(s[t] - '0' >= 0 && s[t] - '0' <= 9)
        {
            a.push_back(s[t]);
            t++;
        }
        else
        {
            if(s[t] == 'z')
            {
                a+="0";
                t+=4;
            }
            else if(s[t] == 'o')
            {
                a+="1";
                t+=3;
            }
            else if(s[t] == 't')
            {
                if(s[t+1] == 'w')
                {
                    a+="2";
                    t+=3;
                }
                else
                {
                    a+="3";
                    t+=5;
                }
            }
            else if(s[t] == 'f')
            {
                if(s[t+1] == 'o')
                {
                    a+="4";
                    t+=4;
                }
                else
                {
                    a+="5";
                    t+=4;
                }
            }
            else if(s[t] == 's')
            {
                if(s[t+1] == 'i')
                {
                    a+="6";
                    t+=3;
                }
                else
                {
                    a+="7";
                    t+=5;
                }
            }
            else if(s[t] == 'e')
            {
                a+="8";
                t+=5;
            }
            else if(s[t] == 'n')
            {
                a+="9";
                t+=4;
            }
        }
    }
    
    
    return answer = stoi(a);
}

