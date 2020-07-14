//Best Time to Buy and Sell Stock II

//Say you have an array prices for which the ith element is the 
//price of a given stock on day i.

//Design an algorithm to find the maximum profit. 
//You may complete as many transactions as you like 
//(i.e., buy one and sell one share of the stock multiple times).

#include<iostream>
#include<vector>
using namespace std;

int max_profit1(vector<int> arr){
    int max_profit = 0;
    int i;
    for(i=1; i<arr.size(); i++){
        if(arr[i] > arr[i-1]){
            max_profit += arr[i] - arr[i-1];
        }
    }
    return max_profit;
}

int max_profit2(vector<int> prices){
    int i=1;
    int valley = prices[0];
    int peak = prices[0];
    int max_profit = 0;
    while(i < prices.size()-1){
        while(i < prices.size()-1 && prices[i] >= prices[i+1]){
            i++;
            valley = prices[i];
        }
        while(i < prices.size()-1 && prices[i] <= prices[i+1]){
            i++;
            peak = prices[i];
    }
    max_profit += peak - valley;
}
return max_profit;
}