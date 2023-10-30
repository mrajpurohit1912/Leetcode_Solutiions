// #include<iostream>
// #include<vector>

// using namespace std;

// int main(){
//         vector<int> newv = {99,3,108};
//         vector<int> newz = {9,6,4,2,999};
//         // int sz1 = sizeof(newv);
//         // int sz2 = sizeof(newz);

//         // int sz1 = newv.size();
//         // int sz2 = newz.size();


//         vector<int> combined;
//         combined.reserve(newv.size() + newz.size());
//         combined.insert(combined.end(),newv.begin(),newv.end());
//         combined.insert(combined.end(),newz.begin(),newz.end());

//         for(int i = 0;i<combined.size();i++){
//             for(int j = i+1;j<combined.size();j++){
//                 int temp;
//                 if(combined[i] > combined[j] ){
//                     temp = combined[i];
//                     combined[i] = combined[j];
//                     combined[j] = temp;  
//                 }
//             }
//         }
//         cout<<endl;

//         for(int i: combined){
//             cout<< i <<" ";
//         }

//         if(combined.size() %2 == 0){
//             int mid1 = (combined.size() / 2) - 1;
//             int mid2 = (combined.size() / 2);

//             double mid = (mid1 + mid2 ) / 2;

//             cout<<"Mid valuue of even array is "<<combined[mid]<<endl;
//         }
//         else{
//             int mid =  combined.size() / 2;
//             // cout << combined[mid];
//             cout<<"Mid valuue of even array is "<<combined[mid]<<endl;
//             //cout<<"Odd araay";
//         }



//         // cout<< sz1<<endl;
//         // cout<< sz2;
// }

// ###############################################################################################

// #include<iostream>
// #include<vector>

// using namespace std;


// int main(){
//     vector<int> vi = {-1,0,1,2,-1,-4};

//     vector<int> ans = {};
//     for(int i = 0;i<vi.size();i++){
//         for(int j = i +1;j<vi.size();j++){
//             for(int k = i+1;k<vi.size();k++){
//                 if((vi[i] + vi[j] + vi[k] == 0 ) && (vi[i] != vi[j] && vi[j] != vi[k] && vi[i] != vi[k])){
//                     ans.push_back({vi[i] + vi[j] + vi[k]});
//                 }
//             }
//         }
//     }

//     // Printing the unique triplets
//      // Printing the unique triplets
//     for (const std::vector<int>& triplet : ans) {
//         for (int num : triplet) {
//             std::cout << num << " ";
//         }
//         std::cout << std::endl;
//     }

//     return 0;
// }
// #######################################################################################################
// #include <iostream>
// #include <vector>

// int main() {
//     std::vector<int> vi = {-1, 0, 1, 2, -1, -4};
//     std::vector<std::vector<int>> ans;

//     for (size_t i = 0; i < vi.size(); i++) {
//         for (size_t j = i + 1; j < vi.size(); j++) {
//             for (size_t k = j + 1; k < vi.size(); k++) {
//                 if (vi[i] + vi[j] + vi[k] == 0 && (vi[i] != vi[j] && vi[j] != vi[k] && vi[i] != vi[k])) {
//                     ans.push_back({vi[i], vi[j], vi[k]});
//                 }
//             }
//         }
//     }

//     // Printing the unique triplets
//     for (const std::vector<int>& triplet : ans) {
//         for (int num : triplet) {
//             std::cout << num << " ";
//         }
//         std::cout << std::endl;
//     }

//     return 0;
// }


// ################################################################################
// #include<bits/stdc++.h>
// using namespace std;

// vector<vector<int>> threeSum(vector<int>& nums) {
//         set<vector<int>> s;//to get unique triplets
//         sort(nums.begin(),nums.end());
//         int n=nums.size();
//         vector<int> temp;
//         temp.resize(3);
//         for(int i=0;i<n;i++)
//             for(int j=i+1;j<n;j++)
//             {
//                 if(binary_search(nums.begin()+j+1,nums.end(),-nums[i]-nums[j])){
//                      temp[0]=nums[i],temp[1]=nums[j],temp[2]=-nums[i]-nums[j];
//                     sort(temp.begin(),temp.end());
//                     //to get triplet in an order, will be easy to check if 
//                     //duplicate exists or not
//                     s.insert(temp);
//                     }
//             }
//         vector<vector<int>> ans;
//         for(auto triplet: s)
//             ans.push_back(triplet);
//         return ans;
// }

// void display_ans(vector<vector<int>> temp)
// {
//     for(auto triplet : temp) 
//         cout<<triplet[0]<<" "<<triplet[1]<<" "<<triplet[2]<<"\n";
// }

// int main()
// {
//     vector<int> v{-1,0,1,2,-1,-4};
//     display_ans(threeSum(v));
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threesum(vector<int>& nums){
    set<vector<int>> s;
    sort(nums.begin(),nums.end());
    int n = nums.size();
    vector<int> temp;
    temp.resize(3);

    for(int i=0;i<n;i++)
        for(int j = i+1;j<n;j++){
            if(binary_search(nums.begin() + j + 1,nums.end(),-nums[i]-nums[j])){
                temp[0] = nums[i],temp[1]=nums[j],temp[2]=-nums[i]-nums[j];
                sort(temp.begin(),temp.end());
                s.insert(temp);
            }
        }

    vector<vector<int>>ans;
    for(auto triplet:s){
        ans.push_back(triplet);
        return ans;
    }
}

void display_ans(vector<vector<int>> temp){
    for(auto triplet:temp)
    cout<<triplet[0]<<" "<<triplet[1]<<" "<<triplet[2]<<"\n";
}

int main(){
    vector<int> v{-1,0,1,2,-1,-4};
    display_ans(threeSum(v));
    return 0;
}