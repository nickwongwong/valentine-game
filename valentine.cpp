//C++ is the best~
#include<iostream>
#include<sstream>
#include<fstream>
#include<vector>
#include<list>
#include<deque>
#include<queue>
#include<stack>
#include<map>
#include<set>
#include<bitset>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cmath>
#include<ctime>
#include<iomanip>
using namespace std;
#define out(x) cout<<#x<<": "<<x<<endl
const double eps(1e-8);
const int maxn=30100;
const long long maxint=-1u>>1;
const long long maxlong=maxint*maxint;
typedef long long lint;
string ask1,ask2;
string msg1,msg2;
long long multi,zyj,wjj;
int day;

string encry(string s, int key)
{
  string s2;
  for (int i=0; i<s.length(); i++)
  {
    s2 += (char)(s[i]^key);
  }
  return s2;
}

void init()
{
    ask1="The day we hooked up(yyyyMMdd):";
    ask2="When (zyj*wjj)%%day=1,let wjj=%d, day=%d, then minimal zyj=";
    multi=4062556666666L;
    wjj=17735227;
    msg1="\x26\x05\x1C\x0F\x4A\x1F\x4A\x58\x5A\x5B\x59\x5B\x5E\x60";
    msg2="\x33\x05\x1F\x18\x4A\x24\x03\x09\x01\x1D\x05\x04\x0D\x14";
}

void input()
{
  	cout<<ask1;
    cin>>day;
    printf(ask2.c_str(),wjj,day);
    cin>>zyj;
}

void output()
{
    int key1 = multi/day;
    int key2 = zyj;
    msg1=encry(encry(msg1,key1),key2);
    msg2=encry(encry(msg2,key1),key2);
    cout<<msg1<<msg2<<endl;
}

void work()
{
    input();
    output();
}
 
int main()
{
	init();
	work();
	return 0;
}
