#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

class Body {
public:
    string name;
    int kor;
    int eng;
    int math;

    Body(string n = "", int k = 0, int e = 0, int m = 0) {
        this->name = n;
        this->kor = k;
        this->eng = e;
        this->math = m;
    }
};

bool Cmp(Body a, Body b) {
    if(a.kor != b.kor)
        return a.kor > b.kor;
    if(a.eng != b.eng)
        return a.eng > b.eng;
    return a.math > b.math;
}

int main() {
    int num, k, e, m;
    string n;
    cin >> num;
    Body b1[num];

    for(int i = 0; i < num; i++) {
        cin >> n >> k >> e >> m;
        b1[i] = Body(n,k,e,m);
    }

    sort(b1, b1 + num, Cmp);

    for(int j = 0; j < num; j++) {
        cout << b1[j].name << " " << b1[j].kor << " " << b1[j].eng << " " << b1[j].math << endl;
    }
}