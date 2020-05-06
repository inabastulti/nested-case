//
//  main.cpp
//  nest_switch
//
//  Created by 稲葉創一 on 2020/05/05.
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

int main(int argc, const char * argv[]) {
    // insert code here...
    // i,jはサンプル。本来は外部から指定 //
    auto i = 1;
    auto j = 2;

    switch (i) {
        case RED:
            switch (j) {
                case ROSE:
                    cout << "Call RED-ROSE case. do somthing..." << endl;
                    break;
                case EYES:
                    cout << "Call RED-EYES case. do somthing..." << endl;
                    break;
                case WINE:
                    cout << "Call RED-WINE case. do somthing..." << endl;
                    break;
                default:
                    break;
            }

            break;
        case BLUE:
            switch (j) {
                case SKY:
                    cout << "Call BLUE-SKY case. do somthing..." << endl;
                    break;
                case LAW:
                    cout << "Call BLUE-LAW case. do somthing..." << endl;
                    break;
                case RIBBON:
                    cout << "Call RED-RIBBON case. do somthing..." << endl;
                    break;
                default:
                    break;
            }
            break;
        case YELLOW:
            switch (j) {
                case RIVER:
                    break;
                case FEVER:
                    break;
                case RACES:
                    break;
                default:
                    break;
            }
            break;
        default:
            break;
    }

    return 0;
}
