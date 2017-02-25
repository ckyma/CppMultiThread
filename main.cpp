/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: yuchen
 *
 * Created on January 19, 2017, 8:57 PM
 */

#include <iostream>
#include "thread.h"

using namespace std;

/*
 * 
 */

void threadFunc()
{
    cout << "Welcome to Multithreading" << endl;

}

int main(int argc, char** argv) {

    thread t_empty;
    thread funcTest1(threadFunc);
    
    funcTest1.join();
    
    return 0;
}

