#include<iostream>
using namespace std;
int p=0;
struct node
{
 int data;
 struct node*left;
 struct node*right;
};

struct node* newnode(int value,struct node*root)
{
 if(root==NULL)
 {
  struct node*node;
  node=(struct node*)malloc(sizeof(struct node));
  node->data=value;
  node->right=NULL;
  node->left=NULL;
  return node; 
 }
 else
 {
   struct node*temp;
   if(value<=(root->data))
   {
    temp=newnode(value,root->left);
    root->left=temp;
   }
   else
   {
    temp=newnode(value,root->right);
    root->right=temp;
   }
      return root;
 }

}

int inorder(struct node* t)
{
  if(t!=NULL)
  {
    inorder(t->left);
    printf("%d ",t->data);
    inorder(t->right);
  }
  return 1;
}

int preorder(struct node*pre)
{
 if(pre!=NULL)
 {
    printf("%d ",pre->data);
    preorder(pre->left);
    preorder(pre->right);
 }
 return 1;
}
int postorder(struct node*pos)
{
  if(pos!=NULL)
  {
    postorder(pos->left);
    postorder(pos->right);
    printf("%d ",pos->data);

  }
  return 1;
}

int search(struct node*t,int el)
{
    if((t->data)==el)
    {
      p=1;
      return 1;
    }
    else if((t->data)<el)
    {
      search(t->right,el);
    }
    else
    {
      search(t->left,el);
    }
    return 1;
}


int main()
{
int t,z;
struct node*root=NULL;
scanf("%d",&t);
  while((t--)>0)
  {
  scanf("%d",&z);
  root=newnode(z,root);
  }
  cout<<"\n\n";
cout<<"preorder: ";
preorder(root);
cout<<"\n";
cout<<"postorder: ";
postorder(root);
cout<<"\n";
cout<<"inorder: ";
inorder(root);
}
