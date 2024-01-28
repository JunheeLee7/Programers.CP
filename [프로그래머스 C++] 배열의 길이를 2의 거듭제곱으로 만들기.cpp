◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181857

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int ace = 1;
    
    while(ace < arr.size())
    {
        ace *= 2;
    }
    for(int i = 0; i < ace; ++i)
    {
        if(i < arr.size())
        {
            answer.push_back(arr[i]);
        }
        else
        {
            answer.push_back(0);
        }
    }
    return answer;
}
