◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120812

◈ 작성 코드

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) 
{
    int answer = 1;
    vector <int> ace;
    int c = 0;
    int max = 0;
    int t = 0;

    sort(array.begin(), array.end());

    for(int i = 0; i < array.size(); i++)
    {
        if(i == 0)
        {
            t = array[i];
            c = 1;
            max = 1;
            ace.push_back(t);
        }
        else
        {
            if(array[i] == t)
            {
                c++;
            }
            else
            {
                t = array[i];
                c = 1;
            }
            
            if(max < c)
            {
                ace.clear();
                ace.push_back(array[i]);
                max = c;
            }
            else if(max == c)
            {
                ace.push_back(array[i]);
            }
        }
    }
    
    if(ace.size() == 1)
    {
        answer = ace[0];
    }
    else
    {
        answer = -1;
    }
    
    return answer;
}

