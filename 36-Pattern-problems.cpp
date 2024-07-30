// DSA: Practice Pattern problems 1(easy);
/*
Pattern 1.
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

*/
#include <iostream>
using namespace std;
class myClass{
  public:
    void pattern(int n){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << "* ";
            }
        cout << endl;
        }
    }
    
};
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    myClass myobj;
    myobj.pattern(n);
    return 0;
}

/*
Pattern 2.
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5
*/
#include <iostream>
using namespace std;
class class2{
    public:
        void pattern2(int n){
            for(int i = 1; i <= n; i++){
                for(int j = 0; j < n; j++){
                    cout << i << " ";
                }
                cout << endl;
            }
        }
};
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    class2 myobj;
    myobj.pattern2(n);
    return 0;
}

/*
Pattern 3.
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
*/
#include <iostream>
using namespace std;
class class3{
    public:
        void pattern3(int n){
            for(int i = 1; i <= n; i++){
                for(int j= 1; j <= n; j++){
                    cout << j << " ";
                }
                cout << endl;
            }
        }
};
int main(){
    class3 myobj;
    int n;
    cout << "Enter n: ";
    cin >> n;
    myobj.pattern3(n);
    return 0;
}

/*
Pattern 4.
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
*/
#include <iostream>
using namespace std;
class class4{
    public:
        void pattern(int n){
            for(int i = 1; i<=n;i++){
                for(int j= 1; j <= n; j++){
                    cout << j*j << " ";
                }
                cout << endl;
            }
        }
};
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    class4 myobj;
    myobj.pattern(n);
    return 0;
}

/*
Pattern 5. 
a a a a a
b b b b b
c c c c c
d d d d d
e e e e e
*/
#include <iostream>
using namespace std;
class class5{
    public:
        void pattern(int n){
            for(int i = 'a'; i < 'a' + n; i++){
                for(int j = 'a'; j < 'a' + n; j++){
                    printf("%c ", i);
                }
                cout << endl;
            }
        }
};
int main(){
    int n;
    cout << "Enter N: ";
    cin >> n;
    class5 myobj;
    myobj.pattern(n);
    return 0;
}

/*
Pattern 7. 
a b c d e
a b c d e
a b c d e
a b c d e
a b c d e
*/
#include <iostream>
using namespace std;
class class5{
    public:
        void pattern(int n){
            for(int i = 1; i <= n; i++){
                for(int j = 'a'; j < 'a' + n; j++){
                    printf("%c ", j);
                }
                cout << endl;
            }
        }
};
int main(){
    int n;
    cout << "Enter N: ";
    cin >> n;
    class5 myobj;
    myobj.pattern(n);
    return 0;
}

/*
Pattern 8. 
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
*/
#include <iostream>
using namespace std;

class class8{
    public:
        void pattern(int n){
             int a = 1;
            for(int i = 1; i <= n; i++){
                for(int j = 1; j <= n; j++){
                    cout << a << " ";
                    a++;
                }
                cout << endl;
            }
        }
};
int main(){
    int n;
    cout << "Eneter number: ";
    cin >> n;
    class8 myobj;
    myobj.pattern(n);
    return 0;
}