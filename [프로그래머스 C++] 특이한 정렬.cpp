◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120880

◈ 작성 코드

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numlist, int n) 
{
    vector<int> answer;
    int e;
    
    for(int i = 0; i < numlist.size() - 1; i++)
    {
        for(int j = i; j < numlist.size(); j++)
        {
            if(abs(n - numlist[i]) > abs(n - numlist[j]))
            {
                e = numlist[i];             // 1
                numlist[i] = numlist[j];    // numlist[0] = 6
                numlist[j] = e;             // numlist[5] = 1
            }
            
            if(abs(n - numlist[i]) == abs(n - numlist[j]) && numlist[i] < numlist[j])
            {
                e = numlist[j];
                numlist[j] = numlist[i];
                numlist[i] = e;
            }
        }
    }
    
    
    return answer = numlist;
}

