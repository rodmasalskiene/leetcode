#include <bits/stdc++.h>
#include <vector>

using namespace std;

//struct Node
//{
//    int val;
//    char tst;
//    struct Node *next;
//    Node(int _val) : val(_val), next(nullptr) {};
//};

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

string convertListToString(struct ListNode node)
{
    string stringList;
    ListNode *current = &node;
    while(current != nullptr)
    {
        stringList += to_string(current->val);
        current = current->next;
    }
    return stringList;
}

//    struct Node convertStringToList(string list_string){
//        for(int i = 0; i < list_string.size(); i++){
//            Node l3_node
//        }
//    };


int main()
{
//    Node l1_node1(2);
//    Node l1_node2(4);
//    Node l1_node3(3);
//
//    l1_node1.next = &l1_node2;
//    l1_node2.next = &l1_node3;
//
//    Node l2_node1(5);
//    Node l2_node2(6);
//    Node l2_node3(4);
//
//    l2_node1.next = &l2_node2;
//    l2_node2.next = &l2_node3;
//
//    string l1_string = convertListToString(l1_node1);
//    string l2_string = convertListToString(l2_node1);
//    reverse(l1_string.begin(), l1_string.end());
//    reverse(l2_string.begin(), l2_string.end());
//
//    int l1_int = stoi(l1_string);
//    int l2_int = stoi(l2_string);
//
//    int l3_sum = l1_int + l2_int;
//
//    string l3_string = to_string(l3_sum);
//
//    cout << l3_string;
    return 1;
}

class Solution
{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        string l1_string; // Como vai somar mais de duas listas?

        ListNode *current = &node;
        while(current != nullptr)
        {
            l1_string += to_string(current->val);
            current = current->next;
        }
        return stringList;

        string l2_string = convertListToString(l2);
        reverse(l1_string.begin(), l1_string.end());
        reverse(l2_string.begin(), l2_string.end());

        int l1_int = stoi(l1_string);
        int l2_int = stoi(l2_string);

        int l3_sum = l1_int + l2_int;

        ListNode l3(l3_sum);
    }
};






// LEETCODE

//class Solution
//{
//    string convertListToString(ListNode node)
//{
//    string stringList;
//    ListNode *current = &node;
//    while(current != nullptr)
//    {
//        stringList += to_string(current->val);
//        current = current->next;
//    }
//    return stringList;
//}
//public:
//    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
//    {
//
//
//        string l1_string = convertListToString(&l1); // * or &
//        string l2_string = convertListToString(&l2);
//        reverse(l1_string.begin(), l1_string.end());
//        reverse(l2_string.begin(), l2_string.end());
//
//        int l1_int = stoi(l1_string);
//        int l2_int = stoi(l2_string);
//
//        int l3_sum = l1_int + l2_int;
//
//        ListNode l3(l3_sum);
//        return l3;
//    }
//};


//  ERROR
//
//Line 32: Char 48: error: no viable conversion from 'ListNode **' to 'ListNode'
//   32 |         string l1_string = convertListToString(&l1); // * or &
//      |                                                ^~~
///leetcode/precompiled/ListNode.h:5:8: note: candidate constructor (the implicit copy constructor) not viable: no known conversion from 'ListNode **' to 'const ListNode &' for 1st argument
//    -4 | struct ListNode {
//      |        ^~~~~~~~
///leetcode/precompiled/ListNode.h:5:8: note: candidate constructor (the implicit move constructor) not viable: no known conversion from 'ListNode **' to 'ListNode &&' for 1st argument
