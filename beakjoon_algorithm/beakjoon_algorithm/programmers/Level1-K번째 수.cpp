//
//  Level1-K번째 수.cpp
//  beakjoon_algorithm
//
//  Created by kgh on 09/08/2019.
//  Copyright © 2019 kgh. All rights reserved.
//
#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;

int main(void){
    
    vector<int> arr;
    arr.push_back(1);    arr.push_back(5); arr.push_back(2); arr.push_back(6); arr.push_back(3); arr.push_back(7); arr.push_back(4);
    vector<vector<int>> command;
    vector<int> v;
    v.push_back(2);v.push_back(5);v.push_back(3);
    command.push_back(v);
    v.clear();
    v.push_back(4);v.push_back(4);v.push_back(1);
    command.push_back(v);
    v.clear();
    v.push_back(1);v.push_back(7);v.push_back(3);
    command.push_back(v);
    v.clear();
    vector<int> answer;
    answer.assign(arr.begin() + command[0][0] - 1, arr.begin() + command[0][1]);
    sort(answer.begin(), answer.end());
    
    for(int i=0; i<answer.size(); i++){
        if(i == command[0][2]-1){
            cout << answer[i];
        }
    }
    
    
    
    
    
 
    
    
    return 0;
    
}


/*
 
 
 
 #include <string>
 #include <vector>
 #include <iostream>
 #include <algorithm>
 using namespace std;
 
 vector<int> solution(vector<int> arr, vector<vector<int>> commands) {
 vector<int> answer;
 vector<int> result;
 for(int i=0; i<commands.size(); i++){
 answer.assign(arr.begin() + commands[i][0] -1, arr.begin() + commands[i][1]);
 sort(answer.begin(), answer.end());
 for(int j=0; j<answer.size(); i++){
 if(j == commands[j][2]-1){
 result.push_back(answer[j]);
 }
 }
 answer.clear();
 }
 
 return result;

 }
 */
