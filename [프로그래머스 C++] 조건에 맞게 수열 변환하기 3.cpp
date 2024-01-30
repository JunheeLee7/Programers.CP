◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181835

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) 
{
    vector<int> answer;
    for(int i = 0; i < arr.size(); i++)
    {
        if(k % 2 != 0)
        {
            int a = k * arr[i];
            answer.push_back(a);
        }
        else
        {
            int b = k + arr[i];
            answer.push_back(b);
        }
    }
    return answer;
}

