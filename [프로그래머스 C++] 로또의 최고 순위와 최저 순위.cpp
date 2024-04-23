#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) 
{
    vector<int> answer;
    sort(lottos.begin(), lottos.end());
    sort(win_nums.begin(), win_nums.end());
    
    int t = 0;
    
    for(int i = 0; i < lottos.size(); i++)
    {
        if(lottos[i] == 0)
        {
            t++;
        }
        else
        {
            for(int j = 0; j < win_nums.size(); j++)
            {
                if(lottos[i] == win_nums[j])
                {
                    t++;
                }
            }
        }
    }
    int a = 7 - t;
    if(a > 5)
    {
        a = 6;
    }
    answer.push_back(a);
    t = 0;
    
    for(int i = 0; i < lottos.size(); i++)
    {
        if(lottos[i] != 0)
        {
            for(int j = 0; j < win_nums.size(); j++)
            {
                if(lottos[i] == win_nums[j])
                {
                    t++;
                }
            }
        }
    }
    int b = 7 - t;
    if(b > 5)
    {
        b = 6;
    }
    answer.push_back(b);
    return answer;
}

