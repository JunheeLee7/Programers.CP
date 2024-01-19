◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181894

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int a = -1;
    int b = -1;
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == 2)
        {
            a = i;
        }
        
    }
    
    for(int j = arr.size()-1; j < arr.size(); j--)
    {
        if(arr[j] == 2)
        {
            b = j;
        }
    }
    
    for(int i = b; i < a + 1; i++)
    {
        answer.push_back(arr[i]);
    }
    
    if(answer[0] == 0)
    {
        return {-1};
    }
    else
    {
        return answer;
    }
    
    
}


