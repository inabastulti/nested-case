//
//  main.cpp
//  ascii_art_fix1
//
//  Created by 稲葉創一 on 2020/05/05.
//  Copyright © 2020 稲葉創一. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
using namespace::std;

class A{
public:
    explicit A(string str){name = str;};
    bool Initalize(bool a){cout << "Initialize A = " << name << endl;return a;}
    bool Finalize(bool a){cout << "Finalize A = " << name << endl;return a;}
private:
    string name;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<A> list;
    list.push_back(A("A"));
    list.push_back(A("B"));
    list.push_back(A("C"));
    list.push_back(A("D"));
    list.push_back(A("E"));
    list.push_back(A("F"));
    list.push_back(A("G"));
    list.push_back(A("H"));
    
    auto i = list.begin();
    auto j = 0; // 擬似的に失敗を発生されるための変数 //
    for (;i != list.end(); ++i) {
        bool result = i->Initalize(true);
        // >> 不要な処理 //
        j++;
        if (j > -1) {
            result = false;
        }
        // << 不要な処理 //
        if (result != true) {
            break;
        }
    }

    // iteratorが一つ動いているので、-1を開始時に指定. begin()の位置まで実施する為begin()-1を終了条件 //
    for (--i; i != list.begin() - 1; --i) {
        i->Finalize(true);
    }
    return 0;
}
