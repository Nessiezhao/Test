#include <iostream>
#include<vector>
using namespace std;
int minNumberInRotateArray(vector<int> rotateArray)
{
    if(rotateArray.size() == 0)
        return 0;
    for(size_t i = 0;i < rotateArray.size();++i)
    {
        if(rotateArray[i+1] < rotateArray[i])
        {
            for(size_t j = rotateArray.size()-1;j >= i;--j)
            {
                rotateArray.insert(rotateArray.begin(),rotateArray[j]);
            }
        }
        else
        {
            continue;
        }
    }
    return rotateArray[0];
}
int main()
{
    vector<int> array;
    array.push_back(3);
    array.push_back(4);
    array.push_back(5);
    array.push_back(1);
    array.push_back(2);
    int ret = minNumberInRotateArray(array);
    cout<<ret<<endl;
    return 0;
}
