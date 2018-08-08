#include <iostream>
#include<vector>
//给定二叉树的中序和先序重建二叉树
using namespace std;
struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val)
        :val(val)
         ,left(NULL)
         ,right(NULL)
    {}
};
TreeNode* reConstructBinarytree(vector<int> pre,vector<int> vin)
{
    if(vin.size() == 0)
        return NULL;
    TreeNode* head = new TreeNode(pre[0]);
    size_t head_pos_in_vin = 0;
    for(size_t i = 0;i < vin.size() ;++i)
    {
        if(pre[0] == vin[i])
        {
            head_pos_in_vin = i;
            break;
        }
    }
    vector<int> pre_left,pre_right,vin_right,vin_left;
    for(size_t i = 0;i < head_pos_in_vin;++i)
    {
        pre_left.push_back(pre[i+1]);
        vin_left.push_back(vin[i]);
    }
    for(size_t i = head_pos_in_vin + 1; i < vin.size();++i)
    {
        pre_right.push_back(pre[i]);
        vin_right.push_back(vin[i]);
    }
    head->left = reConstructBinarytree(pre_left,vin_left);
    head->right = reConstructBinarytree(pre_right,vin_right);
    return head;
}
int main()
{
    vector<int> pre;
    vector<int> vin;
    pre.push_back(1);
    pre.push_back(2);
    pre.push_back(4);
    pre.push_back(7);
    pre.push_back(3);
    pre.push_back(5);
    pre.push_back(6);
    pre.push_back(8);
    vin.push_back(4);
    vin.push_back(7);
    vin.push_back(2);
    vin.push_back(1);
    vin.push_back(5);
    vin.push_back(3);
    vin.push_back(8);
    vin.push_back(6);
    reConstructBinarytree(pre,vin);
    return 0;
}
