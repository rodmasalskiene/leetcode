#include <bits/stdc++.h>
#include <vector>

using namespace std;

struct Node
{
    int val;
    char tst;
    struct Node *next;
    Node(int _val) : val(_val), next(nullptr) {};
};

vector<string> convertListToString(struct Node listNode)
{
    vector<string> listVector{};

    Node *current = &listNode;
    while(current != nullptr)
    {
        listVector.push_back(to_string(current->val));
        current = current->next;
    }
    return listVector;
}

int main()
{
    Node l1_node1(2);
    Node l1_node2(4);
    Node l1_node3(3);

    l1_node1.next = &l1_node2;
    l1_node2.next = &l1_node3;

    Node l2_node1(5);
    Node l2_node2(6);
    Node l2_node3(4);

    l2_node1.next = &l2_node2;
    l2_node2.next = &l2_node3;

    vector<string> l1_vector = convertListToString(l1_node1);
    vector<string> l2_vector = convertListToString(l2_node1);

    for(int i = l1_vector.size(); i >= 0; i--)
    {
        cout << l1_vector[i];
    }



//    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//
//    }
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */


