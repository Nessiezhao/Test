#include <iostream>
#include<vector>
using namespace std;
bool find(int target,vector<vector<int> > array)
{
    if(array.empty())
        return false;
    size_t row = 0;
    size_t col = array.size() - 1;
    while(col >= 0 && row < array.size())
    {
        if(target > array[row][col])
            row++;
        else if(target < array[row][col])
            col--;
        else
            return true;
    }
    return false;
}


int main()
{
    vector<vector<int> > arr;
    int row,col ;
    int to_find;
    cin>>to_find;
    cin>>row>>col;
    int key;
    for(int i = 0;i < row;++i)
    {
        vector<int> arr1;
        for(int j = 0;j < col;++j)
        {
            cin>>key;
            arr1.push_back(key);
        }
        arr.push_back(arr1);
    }
    cout<<find(to_find,arr)<<endl;
    return 0;
}
