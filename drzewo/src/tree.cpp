#include "tree.hh"
#include "node.hh"

int tree::add(element el)
{
  if(Size==0)
    {
      root=new node;
      root->el=el;
      root->left=root->right=0;
    }

}
int tree::find(element el)
{
  ;
}
