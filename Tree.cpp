// Height of Binary Tree
  int maxDepth(TreeNode* root) {
        // Recursive approach(IBH)
        
        if(root==NULL){
            return 0;
        }
        int lh=maxDepth(root->left);
        int rh=maxDepth(root->right);

        return 1+ max(lh,rh);
        
        // Level Order Traversal
        if(root==NULL){
            return 0;
        }
        vector<vector<int>>v;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
                vector<int>lv;
            while(size>0){
                TreeNode* temp=q.front();
               if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);
                q.pop();
                lv.push_back(temp->val);
                size--;
            }
            v.push_back(lv);
        }
        return v.size();        

    }
