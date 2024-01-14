◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181921

◈ 작성 코드
 
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) 
{
    vector<int> answer;
    for(int i = l; i < r+1; i++)
    {
        string nums = to_string(i);
        bool isChecked = true;
        for(char c : nums)
        {
            if(c != '0' && c != '5')
            {
                isChecked = false;
                break;
            }
        }
        if(isChecked)
        {
            answer.push_back(i);
        }
    }
    if(answer.empty())
    {
        answer.push_back(-1);
    }
    return answer;
}


