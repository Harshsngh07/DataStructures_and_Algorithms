int isSumProperty(Node *root)
{
 int left_data = 0, right_data = 0; 
      
    /* If node is NULL or it's a leaf node  
    then return true */
    if(root == NULL || 
        (root->left == NULL &&  
         root->right == NULL)) 
        return 1; 
    else
    { 
        /* If left child is not present then 0  
        is used as data of left child */
        if(root->left != NULL) 
        left_data = root->left->data; 
      
        /* If right child is not present then 0  
        is used as data of right child */
        if(root->right != NULL) 
        right_data = root->right->data; 
      
        /* if the node and both of its children  
        satisfy the property return 1 else 0*/
        if((root->data == left_data + right_data)&& 
            isSumProperty(root->left) && 
            isSumProperty(root->right)) 
        return 1; 
        else
        return 0; 
    } 
}