#include<iomanip>
#include<limits>
#include<thread>
#include<utility>
#include<iostream>
#include<string>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
#include<stack>
#include<queue>
#include<cmath>
#include<numeric>
#include<cassert>
#include<random>
#include<chrono>
#include<unordered_set>
#include<unordered_map>
#include<fstream>
#include<list>
#include<functional>
#include<bitset>
#include<complex>
#include<tuple>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;
typedef pair<ll,ll> pll;
typedef long double D;
typedef complex<D> P;
#define F first
#define S second
const ll E=1e18+7;
const ll MOD=1000000007;

template<typename T,typename U>istream & operator >> (istream &i,pair<T,U> &A){i>>A.F>>A.S; return i;}
template<typename T>istream & operator >> (istream &i,vector<T> &A){for(auto &I:A){i>>I;} return i;}
template<typename T,typename U>ostream & operator << (ostream &o,const pair<T,U> &A){o<<A.F<<" "<<A.S; return o;}
template<typename T>ostream & operator << (ostream &o,const vector<T> &A){ll i=A.size(); for(auto &I:A){o<<I<<(--i?" ":"");} return o;}
template<typename T>vector<T> & cset(vector<T> &A,T e=T()){for(auto &I:A){I=e;} return A;}


#ifndef DiceRoll_hpp
#define DiceRoll_hpp

random_device rng;
mt19937 mt(rng());
uniform_int_distribution<int> R(1,6);

static int diceroll(){return R(mt);}

#endif /*DiceRoll_hpp*/


int main(){
    string s;
    cout<<"What is your name?"<<endl;
    cin>>s;
    cout<<"Hello, "<<s<<"!"<<endl;
    int sum=0,a=-1;
    auto roll=[&](){a=diceroll(); sum+=a; return a;};
    cout<<"Rolling the dice..."<<endl;
    cout<<"Dice 1: "<<roll()<<endl;
    cout<<"Dice 2: "<<roll()<<endl;
    cout<<"Total value: "<<sum<<endl;
    cout<<"s "<<(sum>7?"won":"lost")<<endl;
    
    return 0;
}
