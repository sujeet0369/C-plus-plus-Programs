/*P6.3 Recursive operations in Binary Search Tree*/
#include<iostream>
#include<cstdlib>
using namespace std;

struct node
{
	struct node *lchild;
	int info;
	struct node *rchild;
};

struct node *search(struct node *ptr, int skey);
struct node *insert(struct node *ptr, int ikey);
struct node *del(struct node *ptr, int dkey);
 
void preorder(struct node *ptr);
void inorder(struct node *ptr);
void postorder(struct node *ptr);

main( )
{
	struct node *root=NULL,*ptr;
	int choice,k;

	while(1)
	{
		cout<<"\n";
		cout<<"1.Search\n";
		cout<< "2.Insert\n";
     	cout<< "3.Delete\n";
		cout<< "4.Preorder Traversal\n";
         cout<<"5.Inorder Traversal\n";
         cout<<"6.Postorder Traversal\n";
		 
		 cout<<"7.Quit\n";
    	cout<< "Enter your choice : ";
    	cin>> choice;

		switch(choice)
		{
		case 1: 
			 cout<<"Enter the key to be searched : ";
			 cin>>k;
			ptr = search(root, k);
			if(ptr!=NULL)
			 cout<<"Key found\n";
			break;
		case 2:
		 cout<<"Enter the key to be inserted : ";
			 cin>>k;
			root = insert(root, k);
			break;
		case 3:
		 cout<<"Enter the key to be deleted : ";
			 cin>>k;
			root = del(root,k);
			break;
		 case 4:
			preorder(root);
			break;
		 case 5:
			inorder(root);
			break;
		 case 6:
			postorder(root);
			break;
		 
		 case 7:
			exit(1);
		 default:
		 cout<<"Wrong choice\n";
		}/*End of switch */
	}/*End of while */
}/*End of main( )*/

struct node *search(struct node *ptr, int skey)
{
	if(ptr==NULL)   
	{	
	 cout<<"key not found\n";
		return NULL;
	}
	else if(skey < ptr->info)/*search in left subtree*/	
		return search(ptr->lchild, skey);	
	else if(skey > ptr->info)/*search in right subtree*/
		return search(ptr->rchild, skey);
	else /*skey found*/
		return ptr;
}/*End of search()*/

struct node *insert(struct node *ptr, int ikey )
{
	if(ptr==NULL)	
	{
		ptr = new node;
		ptr->info = ikey;
		ptr->lchild = NULL;
		ptr->rchild = NULL;
	}
	else if(ikey < ptr->info)	/*Insertion in left subtree*/
		ptr->lchild = insert(ptr->lchild, ikey);
	else if(ikey > ptr->info)	/*Insertion in right subtree */
		ptr->rchild = insert(ptr->rchild, ikey);  
	else
	 cout<<"Duplicate key\n";
	return ptr;
}/*End of insert( )*/

struct node *del(struct node *ptr, int dkey)
{
	struct node *tmp, *succ;

	if( ptr == NULL)
	{
		 cout<<"dkey not found\n";
		return(ptr);
	}
	if( dkey < ptr->info )/*delete from left subtree*/
		ptr->lchild = del(ptr->lchild, dkey);
	else if( dkey > ptr->info )/*delete from right subtree*/
		ptr->rchild = del(ptr->rchild, dkey);
	else
	{
		/*key to be deleted is found*/
		if( ptr->lchild!=NULL  &&  ptr->rchild!=NULL )  /*2 children*/
		{
			succ=ptr->rchild;
			while(succ->lchild)
				succ=succ->lchild;
			ptr->info=succ->info;
			ptr->rchild = del(ptr->rchild, succ->info);
		}
		else	
		{
			tmp = ptr;
			if( ptr->lchild != NULL ) /*only left child*/
				ptr = ptr->lchild;
			else if( ptr->rchild != NULL) /*only right child*/
				ptr = ptr->rchild;
			else	/* no child */
				ptr = NULL;
			delete(tmp);
		}						
	}
	return ptr; 
}/*End of del( )*/


void preorder(struct node *ptr)
{
	if(ptr == NULL )	/*Base Case*/
		return;
	 cout<<"\t"<<ptr->info;
	preorder(ptr->lchild);
	preorder(ptr->rchild);
}/*End of preorder( )*/

void inorder(struct node *ptr)
{
	if(ptr == NULL )/*Base Case*/
		return;
	inorder(ptr->lchild);
   cout<<"\t"<<ptr->info;
	inorder(ptr->rchild);
}/*End of inorder( )*/

void postorder(struct node *ptr)
{
	if(ptr == NULL )/*Base Case*/
		return;
	postorder(ptr->lchild);
	postorder(ptr->rchild);
    cout<<"\t"<<ptr->info;
	
}/*End of postorder( )*/



