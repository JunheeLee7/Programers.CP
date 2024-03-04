◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120853

◈ 작성 코드

#include <string>
#include <vector>
#include <stdlib.h>
#include <sstream>
#include <stack>

using namespace std;

int solution(string s) 
{
    int answer = 0;
    stringstream ss(s);
    string str;
    
    stack<int> stc;
    
    while(ss >> str)
    {
        if(str=="Z") stc.pop();        
        else stc.push(stoi(str));
    }
    
    while(!stc.empty())
    {
        answer+=stc.top();
        stc.pop();
    }
    
    return answer;
}

