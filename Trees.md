# Binary Trees
1. Introduction to trees (maximum leaf nodes possible )
```
int countNodes(int i) {
      i=i-1; // as level starts from 0;
      return pow(2,i);
    }
```
2. Binary Tree Representation
3. Tree Traversal:

```
vector<int>temp1;
vector<int>temp2;
vector<int>temp3;
void inOrderTraversal(TreeNode* node) {
  if (node == NULL) {
            return;
            }
    inOrderTraversal(node->left);
    
    temp1.push_back(node->data);

    inOrderTraversal(node->right);


}

void preOrderTraversal(TreeNode* node) {
  if (node == NULL) {
            return;
            }
    temp3.push_back(node->data);
    
    preOrderTraversal(node->left);

    preOrderTraversal(node->right);


}

void postOrderTraversal(TreeNode* node) {
  if (node == NULL) {
            return;
            }
    temp2.push_back(node->data);
    
    postOrderTraversal(node->left);

    postOrderTraversal(node->right);


}

vector<vector<int>> getTreeTraversal(TreeNode *root){
    
    vector<vector<int>>res;

    inOrderTraversal(root);
    res.push_back(temp1);
    
    preOrderTraversal(root);
    res.push_back(temp2);

    postOrderTraversal(root);
    res.push_back(temp3);

    return res;
}
```
