#include <string>
#include <vector>

using namespace std;

string solution(string new_id) 
{
    string answer = "";
    string ans = "";
    for(int i = 0; i < new_id.length(); i++)
    {
        if(new_id[i] >= 'A' && new_id[i] <= 'Z')
        {
            ans += new_id[i] + 32;
        }
        else if(new_id[i] >= 'a' && new_id[i] <= 'z' || (new_id[i] - '0' >= 0 && new_id[i] - '0' <= 9) 
                || new_id[i] == '-' || new_id[i] == '_' || new_id[i] == '.')
        {
            ans += new_id[i];
        }
    }
    
    string a = "";
    for(int i = 0; i < ans.size(); i++)
    {
        if(ans[i] == '.' && ans[i+1] == '.')
        {
            
        }
        else
        {
            a += ans[i];
        }
    }
    
    string b = "";
    if(a[0] == '.' && a[a.size() - 1] != '.')
    {
        for(int i = 1; i < a.size(); i++)
        {
            b += a[i];
        }
    }
    else if(a[0] != '.' && a[a.size() - 1] == '.')
    {
        for(int i = 0; i < a.size() - 1; i++)
        {
            b += a[i];
        }
    }
    else if(a[0] == '.' && a[a.size() - 1] == '.')
    {
        for(int i = 1; i < a.size() - 1; i++)
        {
            b += a[i];
        }
    }
    else
    {
        b = a;
    }
    
    if(b == "")
    {
        b += 'a';
    }
    
    if(b.size() > 15)
    {
        for(int i = 0; i < 15; i++)
        {
            if(i < 14)
            {
                answer += b[i];
            }
            else
            {
                if(b[i] != '.')
                {
                    answer += b[i];
                }
            }
        }
    }
    else
    {
        answer = b;
    }
    
    if(answer.size() < 3)
    {
        while(answer.size() < 3)
        {
            answer += answer[answer.size() - 1];
        }
    }
    
    return answer;
}

