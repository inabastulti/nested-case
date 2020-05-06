//
//  main.cpp
//  nest_switch_fix2
//
//  Created by 稲葉創一 on 2020/05/06.
//  Copyright © 2020 稲葉創一. All rights reserved.
//

#include <iostream>
using namespace std;
#define RED 0
#define BLUE 1
#define YELLOW 2

#define ROSE 0
#define EYES 1
#define WINE 2

#define SKY 0
#define LAW 1
#define RIBBON 2

#define RIVER 0
#define FEVER 1
#define RACES 2

void func1(){cout << "RED-ROSE" << endl;};
void func2(){cout << "RED-EYES" << endl;};
void func3(){cout << "RED-WINE" << endl;};
void func4(){cout << "BLUE-SKY" << endl;};
void func5(){cout << "BLUE-LAW" << endl;};
void func6(){cout << "BLUE-RIBBON" << endl;};
void func7(){cout << "YELLOW-RIVER" << endl;};
void func8(){cout << "YELLOW-FEVER" << endl;};
void func9(){cout << "YELLOW-RACES" << endl;};
typedef struct comp{
    int a;
    int b;
    void (*Func)();
}comp_t;
comp_t a[] = {
    {RED, ROSE, func1},
    {RED, EYES, func2},
    {RED, WINE, func3},
    {BLUE, SKY, func4},
    {BLUE, LAW, func5},
    {BLUE, RIBBON, func6},
    {YELLOW, RIVER, func7},
    {YELLOW, FEVER, func8},
    {YELLOW, RACES, func9},
};

int main(int argc, const char * argv[]) {
    // insert code here...
    // row,columnはサンプル。本来は外部から指定 //
    auto column = 1;
    auto row = 1;
    
    for (auto x: a) {
        if (x.a == column && x.b == row) {
            x.Func();
            break;
        }
    }
    return 0;
}
