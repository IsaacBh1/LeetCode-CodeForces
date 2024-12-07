#include<vector>
#include<stack>

struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode() : val(0), left(nullptr), right(nullptr) {}
        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
public:

    std::vector<int> postorderTraversal(TreeNode* root) {
        
        std::vector<int> V ; 
        return postfix(root , V) ; 
    }


    //1 => null =>   
    //
    std::vector<int> postfix(TreeNode* root , std::vector<int>& V) {
        std::stack<TreeNode*> treeStack;
        TreeNode* LastVisited ; 
        TreeNode* Current = root; 
        while (!treeStack.empty() || Current != nullptr)
        {
            if(Current != nullptr) {
                treeStack.push(Current) ; 
                Current = Current->left ; 
                //LastVisited = Current ; 
            }
            else {
                TreeNode* front = treeStack.top();
                if(front != nullptr && LastVisited != front->right) {
                    Current = front->right; 
                }
                else {
                    V.push_back(front->val) ; 
                    LastVisited = treeStack.top() ; 
                    treeStack.pop() ; 
                }
            }
        }
        return V ; 
    }

};


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 





// */
//     class Solution {
//     public:

//         std::vector<int> postorderTraversal(TreeNode* root) {
            
//             std::vector<int> V ; 
//             return postfix(root , V) ; 
//         }


//         //1 => null =>   
//         //
//         std::vector<int> postfix(TreeNode* root , std::vector<int>& V) {
//             if(root != nullptr)
//             {
//                 postfix(root->left , V) ; 
//                 postfix(root->right , V) ; 
//                 V.push_back(root->val) ;  
//                 }
//             //V.push_back(root->right->val) ;  
//             return V ; 
//         }

//     };