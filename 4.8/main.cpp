



#include <stdlib.h>

struct TreeNode {
  int value;
  TreeNode* left; 
  TreeNode* right;
};


bool isSubTree(   TreeNode* t1, TreeNode* t2)
{

  //  t2 is larger tree  
  for (all subtrees t2sub of t2     )  
    {
      if( equals(t1, t2sub)) 
	return true;
    }
}  


bool isSubtree(TreeNode* t1, TreeNode* t2)
{ 
  if(equals(t1, t2))
      return true;
  else if(isSubtree(t1, t2->right))
    return true;
  else if(isSubtree(t1, t2->left))
    return true; 
  else 
    return false;
} 

bool equals( TreeNode* t1,  TreeNode *t2) 
{

  if((t1 == NULL) ^ (t2  == NULL)) return false;
  if((t1 == NULL) && (t2 == NULL)) return true;
  if(t1->value == t2->value) // root of t1 and root of t2 are equal 
    {
      return (equals(t1->left, t2->left)  && equals(t1->right, t2->right));  
    }
  else 
    return false; 
}

int main (  int argc, char** argv)
{


}
