//
//  main.cpp
//  ConcurrencyInAction
//
//  Created by heyong on 2016/10/17.
//  Copyright © 2016年 heyong. All rights reserved.
//

#include <iostream>

#include <list>
#include <mutex>
#include <algorithm>
#include <exception>
#include <memory>   // for std::shared_prt<>

std::list<int> some_list;
std::mutex some_mutex;

void add_to_list(int new_value)
{
    std::lock_guard<std::mutex> guard(some_mutex);
    some_list.push_back(new_value);
}

bool list_contain(int value_to_find)
{
    std::lock_guard<std::mutex> guard(some_mutex);
    return std::find(some_list.begin(), some_list.end(), value_to_find) != some_list.end();
}

int main() {
    // insert code here...
    
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
