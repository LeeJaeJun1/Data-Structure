#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

class Body {
public:
    string name;
    int length;
    int weight;

    Body(string n = "", int l = 0, int w = 0) {
        this->name = n;
        this->length = l;
        this->weight = w;
    }
};

bool Cmp(Body a, Body b) {
    return a.length < b.length;
}

int main() {
    int num, l, w;
    string n;
    cin >> num;
    Body b1[num];

    for(int i = 0; i < num; i++) {
        cin >> n >> l >> w;
        b1[i] = Body(n,l,w);
    }

    sort(b1, b1 + num, Cmp);

    for(int j = 0; j < num; j++) {
        cout << b1[j].name << " " << b1[j].length << " " << b1[j].weight << endl;
    }
}