◈ 문제 설명 링크

코딩테스트 연습 - 배열 만들기 4 | 프로그래머스 스쿨 (programmers.co.kr)

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> stk;
    int i = 0;
    while(i < arr.size())
    {
        if(stk.empty())
        {
            stk.push_back(arr[i]);
            i++;
        }
        else
        {
            if(stk[stk.size()-1] < arr[i])
            {
                stk.push_back(arr[i]);
                i++;
            }
            else if(stk[stk.size()-1] >= arr[i])
            {
                stk.erase(stk.begin() + (stk.size()-1));
            }
        }
    }
    return stk;
}


