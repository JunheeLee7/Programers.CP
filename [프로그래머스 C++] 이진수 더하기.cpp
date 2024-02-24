◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120885

◈ 작성 코드

#include <string>
#include <vector>
#include <bitset>

using namespace std;

string solution(string bin1, string bin2) 
{
    string answer = "";
    auto ace = bitset<32>(bitset<32>(bin1).to_ulong() + bitset<32>(bin2).to_ulong()).to_string();

    int a = 0;
    
    while(ace[a] == '0')
    {
        a++;
    }
    
    if(a == ace.size())
    {
        a--;
    }
    return answer = ace.substr(a);
}

