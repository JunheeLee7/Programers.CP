◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120890

◈ 작성 코드

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) 
{
    int answer = 0;
    vector<int> mA;
    
    for(int i = 0; i < array.size(); i++)
    {
        int c = array[i] - n;
        
        if(c < 0)
        {
            c *= -1;
        }
        mA.push_back(c);
    }
    int d = 0;
    int k = mA[d];
    
    for(int j = 0; j < mA.size(); j++)
    {
        if(k > mA[j])
        {
            k = mA[j];
            d = j;
        }
        else if(k == mA[j])
        {
            if(array[d] > array[j])
            {
                d = j;
            }
        }
    }
    answer = array[d];
    return answer;
}

