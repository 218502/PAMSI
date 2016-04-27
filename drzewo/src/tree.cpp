#include "tree.hh"
#include "node.hh"
#include <iostream>
int tree::add(element el)
{
  node *temp1,*temp2;
  //ustawianie pol
  temp1=new node;
  temp1->el=el;
  temp1->left=&S;
  temp1->right=&S;
  temp1->up=root;
  //jezeli korzen nie istnieje to wezel staje sie nowym korzeniem
  if(temp1->up==&S)
    {
      root=temp1;
    }
  else
    {
      while(1)
	{
	if(temp1->el.key < temp1->up->el.key)//porownanie kluczy korzenia i nowego elementu
	  {
	  if(temp1->up->left==&S)
	    {
	      temp1->up->left=temp1;//temp1 staje sie lewym lisciem
	      break;
	    }
	  temp1->up=temp1->up->left;
	  }
	else
	  {
	    if(temp1->up->right==&S)
	      {
		temp1->up->right=temp1;//temp1 staje sie prawym lisciem
		break;
	      }
	    temp1->up=temp1->up->right;
	  }
	}
    }




  //koniec dodawania jak w BT

  //sprawdzanie spelnienia warunkow drzewa RBT

  temp1->black=0;//kolorujemy wstawiony wezel na czerwono
  while((temp1!=root) && (temp1->up->black==0))
    {
      if(temp1->up==temp1->up->up->left)
	{
	  temp2=temp1->up->up->right;//temp2 to wujek temp1

	    if(temp2->black==0)//Przypadek1
	      {
		temp1->up->black=1;
		temp2->black=1;
		temp1->up->up->black=0;
		temp1=temp1->up->up;
		continue;
	      }

	  if(temp1==temp1->up->right)//Przypadek2
	    {
	      temp1=temp1->up;
	      leftRotate(temp1);
	    }

	  temp1->up->black=1;//Przypadek3
	  temp1->up->up->black=0;
	  rightRotate(temp1->up->up);
	  break;
	}
      else//Przypadki lustrzane
	{
	  temp2=temp1->up->up->left;

	  if(temp2->black=0)//Przypadek1
	    {
	      temp1->up->black=1;
	      temp2->black=1;
	      temp1->up->up->black=0;
	      temp1=temp1->up->up;
	      continue;
	    }

	  if(temp1==temp1->up->left)//Przypadek2
	    {
	      temp1=temp1->up;
	      rightRotate(temp1);
	    }

	  temp1->up->black=1;//Przypadek3
	  temp1->up->up->black=0;
	  leftRotate(temp1->up->up);
	  break;
	}
    }
    root->black=1;
    }

int tree::find(element el)
{
  ;
}



void tree::leftRotate(node *A)
{
  node *C;
  node *B=A->right;
  if(B!=&S)
    {
      C=A->up;
      A->right=B->left;
      if(A->right!=&S)
	A->right->up=A;

      B->left=A;
      B->up=C;
      A->up=B;

      if(C!=&S)
	{
	  if(C->left==A)
	    C->left=B;
	  else
	    C->right=B;
	}
      else
	root=B;
    }
}



void tree::rightRotate(node *A)
{
  node *B,*C;

  B=A->left;
  if(B!=&S)
    {
      C=A->up;
      A->left=B->right;
      if(A->left!=&S)
	A->left->up=A;

      B->right=A;
      B->up=C;
      A->up=B;

      if(C!=&S)
	{
	  if(C->left==A)
	    C->left=B;
	  else
	    C->right=B;
	}
      else
	root=B;
    }
}
