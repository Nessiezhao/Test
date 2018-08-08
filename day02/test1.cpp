#include <iostream>
#include<vector>
#include<list>
using namespace std;

struct ListNode
{
    int val;
    struct ListNode* next;
    ListNode(int x)
        :val(x)
         ,next(NULL)
    {}
};
vector<int> PrintListFromTailToHead(ListNode* head)
{
    vector<int> array1;
    vector<int> array2;
    ListNode* cur = head;
    while(cur != NULL)
    {
        array1.push_back(cur->val);
    }
    int p = array1.size() - 1;
    for(p = array1.size() - 1; p >= 0;++p)
    {
        array2.push_back(array1[p]);
    }
    return array2;
}
int main()
{
    ListNode h1(1);
    ListNode h2(2);
    ListNode h3(3);
    ListNode h4(4);
    h1.next = &h2;
    h2.next = &h3;
    h3.next = &h4;
    vector<int> array = PrintListFromTailToHead(&h1);
    for(size_t i = 0; i < array.size() -1;++i)
    {
        cout<<array[i] <<" ";
    }
    cout<<endl;
    return 0;
}
