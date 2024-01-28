◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181858

◈ 작성 코드

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int k) 
{
    vector<int> answer;
    for(int i = 0; i < arr.size(); i++)
    {
        if(find(answer.begin(),answer.end(),arr[i]) == answer.end())
        {
            answer.push_back(arr[i]);
        }
        
        if(answer.size() == k)
        {
            break;
        }
    }
    
    while(answer.size() != k)
    {
        answer.push_back(-1);
    }
    return answer;
}


