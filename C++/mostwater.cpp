#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxArea(vector <int>&height){
    int size = height.size();
    int start = 0,end = size-1,MaxArea = 0;
    while(start < end){
        int w = end - start;
        int h = min(height[start],height[end]);
        int CurrentArea = w * h;
        MaxArea = max(CurrentArea,MaxArea);
        
        (height[start] < height[end])  ? start++ : end--;
    }
    return MaxArea;
}

int main(){
    vector <int> vec = {4,3,7,5,4,5,3,6,2};
    int result = maxArea(vec);
    cout << " maximum water :" << result ;
    return 0;
}   