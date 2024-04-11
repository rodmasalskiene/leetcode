#include <bits/stdc++.h>

using namespace std;

    struct Node{
        int val[3];
        char tst;
        struct Node *next;
        Node(int _val[3]) : next(nullptr) {
            for(int i = 0; i < 3; i++){
                val[i] = _val[i];
            }
        };
        /*
            Explica��o da linha acima:
                � um construtor de Node em que,
                � obrigat�rio receber um valor no 'int _val'
                E em seguida ele permite receber os seguintes par�metros:
                    val  (Que vai ter como valor padr�o '_val')
                    next  (Que vai ter como valor padr�o 'nullptr', ou seja, ponteiro null)
        */
    };

int main() {
    int l1[3] = {2, 4, 3};
    int l1[3] = {5, 6, 4};
    Node node1(l1);
    Node node2(l2);

//    Node node2(7);
//    Node node3(7);

//    node1.next = &node2;
//    cout << node1.next->val;

    for(int i = 0; i < 3; i++){
            cout << node1.val[i];
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


