// #pragma GCC optimize("Ofast,no-stack-protector,unroll-loops")
// #define ALL(v) v.begin(),v.end()
// #define For(i,_) for(int i=0,i##end=_;i<i##end;++i) // [0,_)
// #define FOR(i,_,__) for(int i=_,i##end=__;i<i##end;++i) // [_,__)
// #define Rep(i,_) for(int i=(_)-1;i>=0;--i) // [0,_)
// #define REP(i,_,__) for(int i=(__)-1,i##end=_;i>=i##end;--i) // [_,__)
// typedef long long ll;
// typedef unsigned long long ull;
// #define V vector
// #define pb push_back
// #define pf push_front
// #define qb pop_back
// #define qf pop_front
// #define eb emplace_back
// typedef pair<int,int> pii;
// typedef pair<ll,int> pli;
// #define fi first
// #define se second
// const int dir[4][2]={{-1,0},{0,1},{1,0},{0,-1}},inf=0x3f3f3f3f,mod=666528221;
// const ll infl=0x3f3f3f3f3f3f3f3fll;
// template<class T>inline bool ckmin(T &x,const T &y){return x>y?x=y,1:0;}
// template<class T>inline bool ckmax(T &x,const T &y){return x<y?x=y,1:0;}
// int init=[](){return cin.tie(nullptr)->sync_with_stdio(false),0;}();
// struct modint{
//     int val;
//     inline modint(int val_=0):val(val_){}
//     inline modint &operator=(int val_){return val=val_,*this;}
//     inline modint &operator+=(const modint &k){return val=val+k.val>=mod?val+k.val-mod:val+k.val,*this;}
//     inline modint &operator-=(const modint &k){return val=val-k.val<0?val-k.val+mod:val-k.val,*this;}
//     inline modint &operator*=(const modint &k){return val=1ll*val*k.val%mod,*this;}
//     inline modint &operator^=(int k){
//         modint ret=1,tmp=*this;
//         for(;k;k>>=1,tmp*=tmp)if(k&1)ret*=tmp;
//         return val=ret.val,*this;
//     }
//     inline modint &operator/=(modint k){return *this*=(k^=mod-2);}
//     inline modint &operator+=(int k){return val=val+k>=mod?val+k-mod:val+k,*this;}
//     inline modint &operator-=(int k){return val=val<k?val-k+mod:val-k,*this;}
//     inline modint &operator*=(int k){return val=1ll*val*k%mod,*this;}
//     inline modint &operator/=(int k){return *this*=((modint(k))^=mod-2);}
//     template<class T>friend modint operator+(modint a,T b){return a+=b;}
//     template<class T>friend modint operator-(modint a,T b){return a-=b;}
//     template<class T>friend modint operator*(modint a,T b){return a*=b;}
//     template<class T>friend modint operator/(modint a,T b){return a/=b;}
//     friend modint operator^(modint a,int b){return a^=b;}
//     friend bool operator==(modint a,int b){return a.val==b;}
//     friend bool operator!=(modint a,int b){return a.val!=b;}
//     inline bool operator!(){return !val;}
//     inline modint operator-(){return val?mod-val:0;}
//     inline modint operator++(int){modint tmp=*this;*this+=1;return tmp;}
//     inline modint &operator++(){return *this+=1;}
//     inline modint operator--(int){modint tmp=*this;*this-=1;return tmp;}
//     inline modint &operator--(){return *this-=1;}
// };
// using mi=modint;




class Node {
    public:
        int data;         // Data stored in the node
        Node* next;       // Pointer to the next node in the linked list
        //! Constructors is deined object in class 
        Node(int data1, Node* next1) {
            data = data1;
            next = next1;
        }
        // Constructor  we use this when need to avoid making writting the  Node * y = new Node(arr[0], nullptr)  in order to avoid wrrting nullptr 
        Node(int data1) {
            data = data1;
            next = nullptr;
        }
};