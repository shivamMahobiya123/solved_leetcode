#include <bits/stdc++.h>
using namespace std;
void print_vector(vector<vector<auto>> v){
   cout << "[";
   for(int i = 0; i<v.size(); i++){
      cout << "[";
      for(int j = 0; j <v[i].size(); j++){
         cout << v[i][j] << ", ";
      }
      cout << "],";
   }
   cout << "]"<<endl;
}
class Solution {
public:
   vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
      vector<int> temp;
      vector<vector<int> > res(r, vector<int>(c));
      int count = 0;
      for (int i = 0; i < nums.size(); i++) {
         for (int j = 0; j < nums[0].size(); j++) {
            temp.push_back(nums[i][j]);
         }
      }
      if (r * c != nums.size() * nums[0].size())
         return nums;
      for (int i = 0; i < r; i++) {
         for (int j = 0; j < c; j++) {
            res[i][j] = temp[count++];
         }
      }
      return res;
   }
};
main(){
   Solution ob;
   vector<vector<int>> v = {{5,10},{15,20}};
   print_vector(ob.matrixReshape(v, 1, 4));
}
