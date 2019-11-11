//
//  main.cpp
//  Playground
//
//  Created by Yulin Feng on 2018-02-13.
//  Copyright © 2018 Yulin Feng. All rights reserved.
//

#include <iostream>
using namespace std;
struct vec {
    int x;
    int y;
    vec operator+(const vec &other) {
        cout << x;
        cout << other.x;
        return {x+other.x, y+other.y};
    }
};

int main() {
    int x,y;
    cin >> x;
    cin >> y;
//    cout << x;
//    cout << y;
    vec a = {x, x};
    vec b = {y, y};
    a+b;
}
