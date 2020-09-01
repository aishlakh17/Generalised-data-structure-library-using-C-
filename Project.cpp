/*
	project title : Generalised data structures library using c++

	description : this program contains code for all types of linked list as 

	1. Singly linked list
	2. Singly circular linked list
	3. Doubly linked list
	4. Doubly circular linked list
	5. Dynamic queue
	6. Dynamic stack
	7. Binary Search Tree

	programming language : c++
*/

#include<string.h>
#include<iostream>
#include<malloc.h>
#include<stdio.h>

using namespace std;

#define TRUE 1
#define FALSE 0

// New Data types

typedef int BOOL;
typedef unsigned char BYTE;

// This is generic linked list of type T

template <typename T>
struct GEN_LIST
{
	T Data;
	GEN_LIST *pNext;
};

// This is generic doubly linked list of type T

template<typename T>
struct GEN_DLIST
{
	T Data;
	GEN_DLIST *pNext,*pPrev;
};

// This is generic Queue of type T

template<typename T>
struct GEN_QUEUE
{
	T Data;
	GEN_QUEUE *pNext;
};

// This is generic stack of type T

template<typename T>
struct GEN_STACK
{	
	T Data;
	GEN_STACK *pNext;
};

// This is generic Binary Search Tree of type TRUE

template<typename T>
struct GEN_BST
{
	T Data;
	GEN_BST *lChild;
	GEN_BST *rChild;
};
	


/////////////////////////////////////////////////////////////////////////////////
// Class Name			:  	Singly_linkedList
// Description			:   This class represents singly linear lined list 
/////////////////////////////////////////////////////////////////////////////////

template <class T>
class Singly_linkedList
{
	public:
		GEN_LIST<T> *pHead;				// Pointing at start of linked list
		GEN_LIST<T> *pTail;				// Pointing at end of linked list
		
		Singly_linkedList();
		
		~Singly_linkedList();
		
		BOOL AddToGenListFirst(T *pNodeData);

		void DisplayGenList();
		
		BOOL AddToGenListLast(T *pNodeData);
		
		BOOL FreeGenList();
		
		int CountGenListNode();
		
		int SearchFirstOccurrence(T Data);
		
		int SearchAllOccurrence(T Data);
		
		BOOL InsertAtPosition(int pos, T *pNodeData);
		
		BOOL DeleteFromGenListFirst();
		
		BOOL DeleteAtPosition(int pos);
		
		BOOL DeleteFromGenListLast();
		
		BOOL ReverseList();
		
};


//////////////////////////////////////////////////////////////////////////////////
//
//		Class Name		: 		Doubly_linkedList
//		Description 	: 		This class represents doubly linear lined list 
//
//////////////////////////////////////////////////////////////////////////////////

template<class T>
class Doubly_linkedList
{
	public:
		GEN_DLIST<T> *pHead;			//Pointing at start of linked list
		GEN_DLIST<T> *pTail;			//Pointing at end of linked list
		
		Doubly_linkedList();
		
		~Doubly_linkedList();
		
		BOOL AddToGenListFirst(T *pNodeData);

		void DisplayGenList();
		
		BOOL AddToGenListLast(T *pNodeData);
		
		int CountGenListNode ( ); 
		
		BOOL FreeGenList( ); 
		
		int SearchFirstOccurrence(T Data);
		
		int SearchAllOccurrence(T Data);
		
		BOOL InsertAtPosition(int pos,T *pNodeData);

		BOOL DeleteFromGenListFirst();
		
		BOOL DeleteAtPosition(int pos);
		
		BOOL DeleteFromGenListLast();
		
		BOOL DisplayGenListReverse();
		
};

//////////////////////////////////////////////////////////////////////////////////
//
//		Class Name		: 		Singly_linkedList_Circular
//		Description 	: 		This class represents Singly Circular lined list 
//
//////////////////////////////////////////////////////////////////////////////////

template<class T>
class Singly_linkedList_Circular
{
	public:
		GEN_LIST<T> *pHead;				//Pointing at start of linked list
		GEN_LIST<T> *pTail;				//Pointing at end of linked list
		
		 Singly_linkedList_Circular();
		 
		 ~ Singly_linkedList_Circular();
		 
		 BOOL AddToGenListFirst(T *pNodeData);
		 
		 void DisplayGenList();
		 
		 BOOL AddToGenListLast(T *pNodeData);
		 
		 BOOL FreeGenList();
		 
		int CountGenListNode ( ); 
		
		int SearchFirstOccurrence(T Data);
		
		int SearchAllOccurrence(T Data);
		
		BOOL InsertAtPosition(int pos, T *pNodeData);
		
		BOOL DeleteFromGenListFirst();
		
		BOOL DeleteAtPosition(int pos);
		
		BOOL DeleteFromGenListLast();
		
		BOOL ReverseList();
		
};

//////////////////////////////////////////////////////////////////////////////////
//
//		Class Name		: 		Doubly_linkedList_Circular
//		Description 	: 		This class represents Doubly Circular lined list 
//
//////////////////////////////////////////////////////////////////////////////////

template <class T>
class Doubly_linkedList_Circular
{
	public:
		GEN_DLIST<T> *pHead;			// Pointing at start of linked list
		GEN_DLIST<T> *pTail;			// Pointing at end of linked list
		
	Doubly_linkedList_Circular();
	
	~Doubly_linkedList_Circular();
		
	BOOL AddToGenListFirst(T *pNodeData);

	void DisplayGenList();
	
	BOOL AddToGenListLast(T *pNodeData);
	
	int CountGenListNode();
	
	BOOL FreeGenList();
	
	int SearchFirstOccurrence(T Data);
	
	int SearchAllOccurrence(T Data);
	
	BOOL InsertAtPosition(int pos,T *pNodeData);
	
	BOOL DeleteFromGenListFirst();
	
	BOOL DeleteAtPosition(int pos);
	
	BOOL DeleteFromGenListLast();
	
	BOOL DisplayGenListReverse();
	
};

/////////////////////////////////////////////////////////////////////////////////
// Class Name			:  	Dynamic_Queue
// Description			:   This class represents Dynamic Queue 
/////////////////////////////////////////////////////////////////////////////////
template<class T>
class Queue
{
	public:
		GEN_QUEUE<T> *pHead;
		GEN_QUEUE<T> *pTail;
		
		Queue();
		
		~Queue();
		
		void EnQueue(T *pNodeData);
		
		T DeQueue();
		
		void DisplayQueue();
		
		int CountQueue();
		
		int SearchFirstOccurrence(T Data);
		
		int SearchAllOccurrence(T Data);
};


/////////////////////////////////////////////////////////////////////////////////
// Class Name			:  	Dynamic_Stack
// Description			:   This class represents Dynamic stack. 
/////////////////////////////////////////////////////////////////////////////////

template<class T>
class Stack
{
	public:
		GEN_STACK<T> *pHead;
		
		Stack();
		
		~Stack();
	
		void Push(T *pNodeData);
		
		T Pop();
		
		void DisplayStack();
		
		int CountStack();
		
		int SearchFirstOccurrence(T Data);
		
		int SearchAllOccurrence(T Data);
};


/////////////////////////////////////////////////////////////////////////////////
// Class Name			:  	Binary Search Tree
// Description			:   This class represents binary search tree 
/////////////////////////////////////////////////////////////////////////////////

template<class T>
class Binary_Search_Tree
{
	public:
		GEN_BST<T> *pHead;
		
		Binary_Search_Tree();
		
		~Binary_Search_Tree();
		
		void Insert(T *pNodeData);
		
		void PreOrder(GEN_BST<T> *pHead);
		
		void PostOrder(GEN_BST<T> *pHead);
		
		void InOrder(GEN_BST<T> *pHead);
		
		BOOL SearchTree(T *pNodeData);
		
		int	CountNode(GEN_BST<T> *pHead);
};

/*****************************************************************************************************************************/
/*****************************************************************************************************************************/
/*****************************************************************************************************************************/

		
////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   Singly_linkedList
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//		Description			:	This is constructor of class Singly_linkedList
//		Returns				: 	NONE
//
///////////////////////////////////////////////////////////////////////////////////////

template <typename T>
Singly_linkedList<T> :: Singly_linkedList()
{
	pHead = NULL ;
	pTail = NULL ;
}

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   ~Singly_linkedList
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//		Description			:	This is Destructor of class Singly_linkedList
//		Returns				: 	NONE
//
///////////////////////////////////////////////////////////////////////////////////////

template <typename T>
Singly_linkedList<T> :: ~Singly_linkedList()
{
	GEN_LIST<T> *pTemp;
	GEN_LIST<T> *pNavigate;
	
	if(NULL != pHead)
	{
		
		pNavigate =pHead;
		while(NULL != pNavigate)
		{
			pTemp = pNavigate-> pNext;
			free(pNavigate);
			pNavigate = pTemp;
		}
	}
}

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   AddToGenListFirst
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	[IN] T *pNodeData.
//								Holds the entry which is to be added
//
//		Description			:	This is Function adds node to Singly Linear Linked List
//		Returns				: 	BOOLEAN
//								If the function succeeds the return value is TRUE
//								If the function fails , the return value is FALSE
//
///////////////////////////////////////////////////////////////////////////////////////
		
template <typename T>
BOOL Singly_linkedList<T> :: AddToGenListFirst(T *pNodeData)
{
	
		GEN_LIST<T> *pNewNode;
		
		if(NULL == pNodeData)
		{
			return FALSE;
		}
		//////////////////////////////////
		//		Allocate new node.
		//////////////////////////////////
		
		pNewNode = (GEN_LIST<T> *)malloc (sizeof(GEN_LIST<T>));
		
		if(NULL == pNewNode)
		{
			return FALSE;
		}
		
		//////////////////////////////////
		//		Fill the node with Data
		//////////////////////////////////
		
		memset(pNewNode, 0, sizeof(GEN_LIST<T>));
		pNewNode->pNext = NULL;
		pNewNode->Data = *pNodeData;

		/////////////////////////////////
		// 		Prepend
		/////////////////////////////////
		
		if (NULL == pHead)
		{
			pHead = pNewNode ;
			pTail = pNewNode;
			
		}
		else
		{
			pNewNode -> pNext = pHead;
			pHead = pNewNode ;
		}
		
	return TRUE;
}
////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   DisplayGenList
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//		Description			:	This is Function displays Singly Linear Linked List.
//		Returns				: 	void
//								
///////////////////////////////////////////////////////////////////////////////////////
		
template <typename T>
void Singly_linkedList<T> :: DisplayGenList()
{
		GEN_LIST<T> *pTempNode;
		pTempNode = pHead;
		
		while(NULL != pTempNode)
		{
			cout<<" "<<pTempNode -> Data << " ->";
			pTempNode = pTempNode -> pNext;
		}
}

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   AddToGenListLast
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	[IN] GEN_LIST<T> **ppListTobeAppended.
//								List which is to be appended to an existing list.
//
//		Description			:	This Function appends node in Singly Linear linked list
//		Returns				: 	BOOLEAN
//								If the function succeeds the return value is TRUE
//								If the function fails , the return value is FALSE
//
///////////////////////////////////////////////////////////////////////////////////////
		
template <typename T>
BOOL Singly_linkedList<T> :: AddToGenListLast(T *pNodeData)
{
	GEN_LIST <T> *pNewNode;
	GEN_LIST<T> *pTempNode;
	
	pTempNode =pHead;
	
	if(NULL == pNodeData)
	{
		return FALSE;
		
	}
	
	///////////////////////////////
	// 		Allocate new node
	///////////////////////////////
	
	pNewNode = (GEN_LIST<T>*)malloc(sizeof(GEN_LIST<T>));

	if(NULL == pNewNode)
	{
		return FALSE;
	}
	
	///////////////////////////////////
	// 		Fill the node with data
	///////////////////////////////////
	
	memset(pNewNode, 0, sizeof(GEN_LIST<T>));
	pNewNode->pNext = NULL;
	pNewNode->Data = *pNodeData;

	/////////////////////////////////
	// 		Append
	/////////////////////////////////
		
	if(NULL == pHead)
	{
		pHead = pNewNode;
		pTail = pNewNode;
	}
	else
	{
		pTail->pNext = pNewNode;
		pTail = pNewNode;
	}
	
	return TRUE;
}

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   FreeGenList
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//		Description			:	This is Function frees Singly Linear Linked List.
//		Returns				: 	BOOLEAN
//								If the function succeeds the return value is TRUE
//								If the function fails , the return value is FALSE
//								
///////////////////////////////////////////////////////////////////////////////////////

template <typename T>
BOOL Singly_linkedList<T> :: FreeGenList()
{
	GEN_LIST<T> *pTemp;
	GEN_LIST<T> *pNavigate;
	
	if(NULL == pHead)
	{ 
		return FALSE;
	}
	
	pNavigate = pHead;
	
	while(NULL != pNavigate)
	{
		pTemp = pNavigate ->pNext;
		free(pNavigate);
		pNavigate = pTemp;
	}
	
	return TRUE;
}

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   CountGenListNode
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//		Description			:	This is Function Counts nodes in Singly Linear Linked List.
//		Returns				: 	int
//								Number of nodes in generic list								
//								
///////////////////////////////////////////////////////////////////////////////////////

template <typename T>
int Singly_linkedList<T> :: CountGenListNode()
{
	//Variable for maintaining number of nodes
	int CountNode = 0;
	
	GEN_LIST<T> *pListHead = pHead;
	
	//Traverse the linked list till end
	while(NULL != pListHead)
	{
		CountNode++;
		pListHead = pListHead -> pNext;
	}
	
	return CountNode;
}


////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   SearchFirstOccurrence
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	[IN] GEN_LIST<T> Data
//								Holds head data to be searched
//
//		Description			:	This Function search particular data in singly Linear Linked List.
//								and return the position at which data is found.
//
//		Returns				: 	int
//								Position at which data is found in generic list.							
//								
///////////////////////////////////////////////////////////////////////////////////////

template<typename T>
int Singly_linkedList<T> :: SearchFirstOccurrence(T data)
{
	int CountNode = 0;
	
	GEN_LIST<T> *pListHead = pHead;
	
	//Traverse the linked list till end
	while(pListHead != NULL)
	{
		++CountNode ;
		 
		// If data matches with the input value
		if(memcmp(&(pListHead -> Data),&data,sizeof(data))== 0)
		{
			 // Break the loop as we get the first occurrence
			 
			 return CountNode;
		}
		
		pListHead = pListHead -> pNext;
	}
	
	return -1;
}

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   SearchAllOccurrence
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	[IN] GEN_LIST<T> Data
//								Holds head data to be searched
//
//		Description			:	This Function search particular data in singly Linear Linked List.
//								and return the number of occurrences of that Data.
//
//		Returns				: 	int
//								Number of times data is found in generic list.							
//								
///////////////////////////////////////////////////////////////////////////////////////

template <typename T>
int Singly_linkedList<T> :: SearchAllOccurrence(T data)
{
	int CountNode = 0;
	GEN_LIST<T> *pListHead = pHead;
	
	// Traverse the linked list till end
	while(pListHead != NULL)
	{
		//If data matches with the input value
		if(memcmp(&(pListHead -> Data),&data,sizeof(data))== 0)
		{
			++CountNode;
		}
		pListHead = pListHead -> pNext;
	}
	
	return CountNode;
}

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   InsertAtPosition
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	[IN] int pos
//								Holds the position
//								
//								[IN] *pNodeData
//								Holds the entry which is to be added.
//
//		Description			:	This Function adds node at specified position in Singly Linear linked list
//		//
//		Returns				: 	BOOLEAN
//								If the function succeeds , the ret value is TRUE							
//								If the function fails, the return value is FALSE
//
///////////////////////////////////////////////////////////////////////////////////////

template <typename T>
BOOL Singly_linkedList<T> :: InsertAtPosition(int pos,T *pNodeData)
{
	int i=1;
	
	GEN_LIST<T> *temp = NULL;
	GEN_LIST<T> *pNewNode = NULL;
	
	// If linked list is empty
	
	if(pHead == NULL)
	{
		return FALSE;
	}
	else if(pos == 1)
	{
		AddToGenListFirst(pNodeData);
	}
	else if(pos ==(CountGenListNode())+1)
	{
		AddToGenListLast(pNodeData);
	}
	else if(pos > CountGenListNode())
	{
		return FALSE;
	}
	else
	{
		temp = pHead;
		
		///////////////////////////////////
		// 		Allocate the new node
		///////////////////////////////////
		
		pNewNode = (GEN_LIST<T> *)malloc(sizeof(GEN_LIST<T>));
		
		if(NULL == pNewNode)
		{
			return FALSE;
		}

		///////////////////////////////////
		// 		Fill the node with data
		///////////////////////////////////
		
		memset(pNewNode, 0, sizeof(GEN_LIST<T>));
		pNewNode -> pNext = NULL;
		pNewNode -> Data = *pNodeData;
		
		while(i < pos-1)
		{
			temp = temp -> pNext;
			++i;
		}
		pNewNode->pNext =temp -> pNext;
		temp -> pNext = pNewNode;
	}
	
	return TRUE;
}
////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   DeleteFromGenListFirst
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//
//		Description			:	This Function removes first node from Singly Linear linked list
//		//
//		Returns				: 	BOOLEAN
//								If the function succeeds , the ret value is TRUE							
//								If the function fails, the return value is FALSE
//
///////////////////////////////////////////////////////////////////////////////////////

template <typename T>
BOOL Singly_linkedList<T> :: DeleteFromGenListFirst()
{
	GEN_LIST<T> *temp;
	temp = pHead ;
	
	// If linked list is empty
	
	if(pHead == NULL)
	{
		return FALSE;
	}
	else
	{
		pHead = temp -> pNext;
		free(temp);
	}
	
	return TRUE;
}

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   DeleteFromGenListLast
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//
//		Description			:	This Function removes Last node from Singly Linear linked list
//		
//		Returns				: 	BOOLEAN
//								If the function succeeds , the ret value is TRUE							
//								If the function fails, the return value is FALSE
//
///////////////////////////////////////////////////////////////////////////////////////

template <typename T>
BOOL Singly_linkedList<T> :: DeleteFromGenListLast()
{
	GEN_LIST<T> *temp1,*temp2;
	
	temp1 = temp2 =pHead;
	
	// If Linked list is empty
	
	if(pHead == NULL)
	{
		return FALSE;
	}
	else
	{
		while(temp1-> pNext != NULL)
		{
			temp2 = temp2->pNext;
			temp1= temp2->pNext;
		}
		temp2->pNext = NULL;
		
		free(temp1);
		
	}
	
	return TRUE;
}

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   DeleteAtPosition
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//
//		Description			:	This Function removes  node from specified Singly Linear linked list
//		
//		Returns				: 	BOOLEAN
//								If the function succeeds , the ret value is TRUE							
//								If the function fails, the return value is FALSE
//
///////////////////////////////////////////////////////////////////////////////////////

template <typename T>
BOOL Singly_linkedList<T>:: DeleteAtPosition(int pos)
{
	if(pos > (CountGenListNode()))
	{
		return FALSE;
	}
	else if(pos == 1)
	{
		DeleteFromGenListFirst();
	}
	else if(pos == (CountGenListNode()))
	{
		DeleteFromGenListLast();
	}
	else
	{
		int i=0;
		GEN_LIST<T> *temp = pHead ;
		GEN_LIST<T> *t;
		
		for(i=0 ; i < pos - 1;i++)
		{
			t = temp;
			temp = temp -> pNext;
		}
		
		t->pNext = temp -> pNext;
		temp -> pNext= NULL;
		free(temp);
	}
	
	return TRUE;
}

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   ReverseList
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//
//		Description			:	This Function reverse Singly Linear linked list
//		
//		Returns				: 	BOOLEAN
//								If the function succeeds , the ret value is TRUE							
//								If the function fails, the return value is FALSE
//
///////////////////////////////////////////////////////////////////////////////////////
	
template<typename T>
BOOL Singly_linkedList<T> :: ReverseList()
{
	GEN_LIST<T> *prev = NULL;
	GEN_LIST<T> *current = pHead;
	GEN_LIST<T> *next = NULL;
	
	//If linked list is empty
	
	if(pHead == NULL)
	{
		return FALSE;
	}
	
	while(current != NULL)
	{
		next = current -> pNext;
		current -> pNext = prev;
		prev = current;
		current = next;
	}
	
	pHead = prev;
	
	return TRUE;
}


/********************************************************************************************************************************************************/
/******************************************************************************************************************************************************/
/********************************************************************************************************************************************************/		
		



///////////////////////////////////////////////////////////////////////////////////
// 
// 		Function Name		:  		Doubly_linkedList
//		Function Date		: 		20/11/2019
//		Function Author		: 		Aishwarya Lakhamade
//		Parameters			: 		NONE
//		Description			: 		This is a constructor of Doubly_linkedList
// 		Returns				: 		NONE
//
///////////////////////////////////////////////////////////////////////////////////

template <typename T>
Doubly_linkedList<T> :: Doubly_linkedList()
{
	pHead = NULL;
	pTail = NULL;
}

///////////////////////////////////////////////////////////////////////////////////
// 
// 		Function Name		:  		~Doubly_linkedList
//		Function Date		: 		20/11/2019
//		Function Author		: 		Aishwarya Lakhamade
//		Parameters			: 		NONE
//		Description			: 		This is a Destructor of Doubly_linkedList
// 		Returns				: 		NONE
//
///////////////////////////////////////////////////////////////////////////////////

template <typename T>
Doubly_linkedList<T> :: ~Doubly_linkedList()
{
	GEN_DLIST<T> *pTemp;
	GEN_DLIST<T> *pNavigate;
	
	if(NULL != pHead)
	{
		pNavigate = pHead;
		while(NULL != pNavigate)
		{
			pTemp = pNavigate -> pNext;
			free(pNavigate);
			pNavigate = pTemp;
		}
	}
}
////////////////////////////////////////////////////////////////////////////////////////////
// 
// 		Function Name		:  		AddToGenListFirst
//		Function Date		: 		20/11/2019
//		Function Author		: 		Aishwarya Lakhamade
//		Parameters			: 		[IN ]T *pNodeData.
//									Holds the entry which is to be added
//
//		Description			: 		This function adds node to Doubly Linear linkedList
// 		Returns				: 		BOOLEAN
//									If the function succeeds, the return value is TRUE
//									If the function fails,the return value is FALSE	
////////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
BOOL Doubly_linkedList <T> :: AddToGenListFirst(T *pNodeData)
{
	GEN_DLIST <T> *pNewNode = NULL;
	
	if(NULL == pNodeData)
	{
		return FALSE;
	}
	
	////////////////////////
	// 	Allocate new node
	////////////////////////
	
	pNewNode = (GEN_DLIST<T> *)malloc(sizeof(GEN_DLIST<T>));
	
	if(NULL == pNewNode)
	{
		return FALSE;
	}
	
	////////////////////////////
	//	Fill the node with data
	/////////////////////////////
	
	memset(pNewNode,0,sizeof(GEN_DLIST<T>));
	pNewNode->pNext =NULL;
	pNewNode->Data = *pNodeData;
	pNewNode->pPrev =NULL;
	
	/////////////////////////
	//	Prepend
	/////////////////////////

	if(NULL == pHead)
	{
		pHead = pNewNode;
		pTail = pNewNode;
	}
	else
	{
		pNewNode -> pNext = pHead;
		(pHead)-> pPrev = pNewNode;
		pHead =pNewNode;
	}
	return TRUE;
}

////////////////////////////////////////////////////////////////////////////////////////////
// 
// 		Function Name		:  		AddToGenListLast
//		Function Date		: 		21/11/2019
//		Function Author		: 		Aishwarya Lakhamade
//		Parameters			: 		[IN] GEN_LIST<T> **ppListTobeAppended.
//									List which is to be appended to an existing list.	
//		Description			: 		This function appends node in Doubly Linear linkedList
// 		Returns				: 		BOOLEAN
//									If the function succeeds, the return value is TRUE
//									If the function fails,the return value is FALSE	
////////////////////////////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Doubly_linkedList<T> :: AddToGenListLast(T *pNodeData)
{
	GEN_DLIST<T> *pNewNode = NULL;
	GEN_DLIST<T> *pTempNode = NULL;
	
	pTempNode = pHead;
	
	if(NULL == pNodeData)
	{
		return FALSE;
	}
	
	///////////////////////////////
	//		Allocate new node
	///////////////////////////////
	
	pNewNode = (GEN_DLIST<T>*)malloc (sizeof(GEN_DLIST<T>));
	if(NULL == pNewNode)
	{
		return FALSE;
	}
	
	///////////////////////////////////
	//		Fill the node with data
	///////////////////////////////////
		
	memset(pNewNode,0,sizeof(GEN_DLIST<T>));
	pNewNode->pNext = NULL;
	pNewNode->Data=*pNodeData;
	pNewNode->pPrev = NULL;
	
	//////////////////////////////////
	//		Append
	//////////////////////////////////
		
	if(NULL == pHead)
	{
		pHead = pNewNode;
		pTail = pNewNode;
	}
	else
	{
		pNewNode->pPrev = pTail;
		pTail->pNext = pNewNode;
		pTail = pNewNode;
	}
	
	return TRUE;
}
////////////////////////////////////////////////////////////////////////////////////////////
// 
// 		Function Name		:  		FreeGenList
//		Function Date		: 		21/11/2019
//		Function Author		: 		Aishwarya Lakhamade
//		Parameters:
//			 		NONE	
//
//		Description	:
//			 		This function frees Doubly Linear linked List
//
// 		Returns:
//				BOOLEAN
//				If the function succeeds, the return value is TRUE
//				If the function fails,the return value is FALSE	
//
////////////////////////////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Doubly_linkedList<T>::FreeGenList()
{
	GEN_DLIST<T> *pTemp;
	GEN_DLIST<T> *pNavigate;
	
	if(NULL == pHead)
	{
		return FALSE;
	}
	
	pNavigate = pHead;
	while(NULL != pNavigate)
	{
		pTemp = pNavigate-> pNext;
		free(pNavigate);
		pNavigate = pTemp;
	}
	
	return TRUE;
}

////////////////////////////////////////////////////////////////////////////////////////////
// 
// 		Function Name		:  		DisplayGenList
//		Function Date		: 		21/11/2019
//		Function Author		: 		Aishwarya Lakhamade
//		
///		Parameters	: 		
//				[IN] GEN_LIST<T> *pListHead.			
//				Holds head pointer of list.	
//
//		Description	: 
//				This function displays Doubly Linear linked List
//
// 		Returns	:
//				void
//									
////////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
void Doubly_linkedList<T> :: DisplayGenList()
{
	GEN_DLIST<T> *pTempNode = pHead;
	
	while(NULL != pTempNode)
	{
		cout<<" "<<pTempNode->Data << "<==>";
		pTempNode = pTempNode ->pNext;
	}
}

////////////////////////////////////////////////////////////////////////////////////////////
// 
// 		Function Name		:  		CountGenListNode
//		Function Date		: 		21/11/2019
//		Function Author		: 		Aishwarya Lakhamade
//		
///		Parameters	: 		
//				[IN] GEN_LIST<T> *pListHead.			
//				Holds head pointer of list.	
//
//		Description	: 
//				This function counts nodes in  Doubly Linear linked List
//
// 		Returns	:
//				int 
//				Number of nodes in generic list
//					
////////////////////////////////////////////////////////////////////////////////////////////
	
template <typename T>
int Doubly_linkedList<T> :: CountGenListNode()
{
	// Variable for maintaining number of nodes
	int CountNode =0;
	GEN_DLIST<T> *pTempNode = pHead;
	
	//Traverse the linked list till end
	while(NULL != pTempNode)
	{
		CountNode++;
		pTempNode = pTempNode -> pNext;
	}
	
	return CountNode;
	
}

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   SearchFirstOccurrence
//		Function Date		:   21/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//
//		Parameters			:	[IN] GEN_LIST<T> Data
//								Holds head data to be searched
//
//		Description			:	This Function search particular data in Doubly Linear Linked List.
//								and return the position at which data is found.
//
//		Returns				: 	int
//								Position at which data is found in generic list.							
//								
///////////////////////////////////////////////////////////////////////////////////////

template <typename T>
int Doubly_linkedList<T> :: SearchFirstOccurrence(T data) // Data to be searched
{
		int CountNode = 0;
		GEN_DLIST<T> *pTempNode = pHead;
		
		//Traverse the linked list till end
		while(pTempNode != NULL)
		{
			++CountNode;
			
			// If Data matches with the input value_comp
			if(memcmp(&(pTempNode->Data),&data,sizeof(data))==0)
			{
				//Break the loop as we get the first occurrence
				return CountNode;
			}
			pTempNode = pTempNode-> pNext;
		}
		
		return -1;
		
}	

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   SearchAllOccurrence
//		Function Date		:   21/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//
//		Parameters			:	[IN] GEN_LIST<T> Data
//								Holds head data to be searched
//
//		Description			:	This Function search particular data in Doubly Linear Linked List.
//								and return number of occurrence of that data.
//
//		Returns				: 	int
//								Number of times data is found in generic list.							
//								
///////////////////////////////////////////////////////////////////////////////////////
		
template<typename T>
Doubly_linkedList<T>::SearchAllOccurrence(T data)
{
		int CountNode = 0;
		GEN_DLIST<T> *pTempNode = pHead;
		
		// Traverse the linked list till the end
		while(pTempNode != NULL)
		{
			 // if data matches with the input value
			 if(memcmp(&(pTempNode->Data),&data,sizeof(data))==0)
			 {
				 ++CountNode;
			 }
			 pTempNode = pTempNode -> pNext;
		}
		return CountNode;
}

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   InsertAtPosition
//		Function Date		:   21/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	
//					[IN] int pos.
//					Holds the position.
//
//					[IN] T *pNodeData		
//					Holds the entry which is to be added.
//
//		Description			:	This Function adds node at specified position in Doubly Linear linked list
//		//
//		Returns				: 	BOOLEAN
//								If the function succeeds , the ret value is TRUE							
//								If the function fails, the return value is FALSE
//
///////////////////////////////////////////////////////////////////////////////////////

template <typename T>
BOOL Doubly_linkedList<T>::InsertAtPosition(int pos,T *pNodeData)
{
	int i=1;
	
	GEN_DLIST<T> *temp = NULL;
	GEN_DLIST<T> *pNewNode = NULL;
	
	// If linked list is empty
	if(pHead == NULL)
	{
		return FALSE;
	}
	else if(pos == 1)
	{
		AddToGenListFirst(pNodeData);
	}
	else if(pos == (CountGenListNode())+1)
	{
		AddToGenListLast(pNodeData);
	}
	else if(pos > CountGenListNode())
	{
		return FALSE;
	}
	else
	{
		temp = pHead;
		pNewNode =(GEN_DLIST<T>*)malloc(sizeof(GEN_DLIST<T>));
		if(NULL == pNewNode)
		{
			return FALSE;
		}
		
		//////////////////////////////////
		//		Fill the node with data
		//////////////////////////////////
	
		memset(pNewNode,0,sizeof(GEN_DLIST<T>));
		pNewNode -> pNext = NULL;
		pNewNode ->Data = *pNodeData;
		pNewNode ->pPrev = NULL;
		
		while(i < pos-1)
		{
			temp = temp ->pNext;
			++i;
		}
		
		pNewNode -> pNext = temp -> pNext;
		temp ->pNext->pPrev =pNewNode;
		temp-> pNext=pNewNode;
		pNewNode -> pPrev =temp;
	}
	return TRUE;
}
////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   DeleteFromGenListFirst
//		Function Date		:   21/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//
//		Description			:	This Function removes first node from Doubly Linear linked list
//		//
//		Returns				: 	BOOLEAN
//								If the function succeeds , the ret value is TRUE							
//								If the function fails, the return value is FALSE
//
///////////////////////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Doubly_linkedList<T> :: DeleteFromGenListFirst()
{
	GEN_DLIST<T> *temp = NULL;
	temp = pHead;
	
	//If Linked list is empty
	if(pHead == NULL)
	{
		return FALSE;
	}
	else
	{
		pHead = temp -> pNext;
		pHead -> pPrev = NULL;
		free(temp);
	}
	return TRUE;
}

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   DeleteFromGenListLast
//		Function Date		:   21/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//
//		Description			:	This Function removes last node from Doubly Linear linked list
//		//
//		Returns				: 	BOOLEAN
//								If the function succeeds , the ret value is TRUE							
//								If the function fails, the return value is FALSE
//
///////////////////////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Doubly_linkedList<T>::DeleteFromGenListLast()
{
	GEN_DLIST<T> *temp1;
	GEN_DLIST<T> *temp2;
	temp1 = temp2 = pHead;
	
	// If linked list is empty
	if(pHead == NULL)
	{
		return FALSE;
	}
	else
	{
		while(temp1 -> pNext != NULL)
		{
			temp2= temp2->pNext;
			temp1= temp2->pNext;
		}
		temp2->pNext = NULL;
		free(temp1);
	}
	return TRUE;
}

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   DeleteAtPosition
//		Function Date		:   21/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	[IN] int pos
//								Holds the position.
//
//		Description			:	This Function removes node from specified position Doubly Linear linked list
//		
//		Returns				: 	BOOLEAN
//								If the function succeeds , the ret value is TRUE							
//								If the function fails, the return value is FALSE
//
///////////////////////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Doubly_linkedList<T>::DeleteAtPosition(int pos)
{
	if(pos > (CountGenListNode()))
	{
		return FALSE;
	}
	else if(pos == 1)
	{
		DeleteFromGenListFirst();
	}
	else if(pos ==(CountGenListNode()))
	{
		DeleteFromGenListLast();
	}
	else
	{
		int i=0;
		GEN_DLIST<T> *temp = pHead;
		GEN_DLIST<T> *t;
		
		for(i=0;i< pos-1;i++)
		{
			t = temp;
			temp = temp -> pNext;
		}
		t -> pNext = temp -> pNext;
		temp-> pNext->pPrev = t;
		
		free(temp);
	}
	
	return TRUE;
}

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   DisplayGenListReverse
//		Function Date		:   21/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//
//		Description			:	 Function which displays the Doubly Linear Linked list in reverse manner.
//		
//		Returns				: 	BOOLEAN
//								If the function succeeds , the ret value is TRUE							
//								If the function fails, the return value is FALSE
//
///////////////////////////////////////////////////////////////////////////////////////

template <typename T>
BOOL Doubly_linkedList <T>::DisplayGenListReverse()
{
	GEN_DLIST<T> *temp = pTail;
	
	if(pHead == NULL)
	{
		return TRUE;
	}
	else
	{
		while(temp != NULL)
		{
			printf("|%d|<=>",temp->Data);
			temp = temp->pPrev;
		}
	}
	
	return FALSE;
}

/*************************************************************************************/
/*************************************************************************************/
/*************************************************************************************/



/////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   Singly_linkedList_Circular
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//		Description			:	This is constructor of class Singly_linkedList_Circular
//		Returns				: 	NONE
//
///////////////////////////////////////////////////////////////////////////////////////

template <typename T>
Singly_linkedList_Circular<T> :: Singly_linkedList_Circular()
{
	pHead = NULL ;
	pTail = NULL ;
}

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   ~Singly_linkedList_Circular
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//		Description			:	This is Destructor of class Singly_linkedList_Circular
//		Returns				: 	NONE
//
///////////////////////////////////////////////////////////////////////////////////////

template <typename T>
Singly_linkedList_Circular<T> :: ~Singly_linkedList_Circular()
{
	GEN_LIST<T> *pTemp;
	GEN_LIST<T> *pNavigate;
	
	if(NULL != pHead)
	{
		
		pNavigate =pHead;
		while(NULL != pNavigate)
		{
			pTemp = pNavigate-> pNext;
			free(pNavigate);
			pNavigate = pTemp;
		}
	}
}	

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   AddToGenListFirst
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	[IN] T *pNodeData.
//								Holds the entry which is to be added
//
//		Description			:	This is Function adds node to Singly Circular Linked List
//		Returns				: 	BOOLEAN
//								If the function succeeds the return value is TRUE
//								If the function fails , the return value is FALSE
//
///////////////////////////////////////////////////////////////////////////////////////
		
template <typename T>
BOOL Singly_linkedList_Circular<T> :: AddToGenListFirst(T *pNodeData)
{
	
		GEN_LIST<T> *pNewNode;
		
		if(NULL == pNodeData)
		{
			return FALSE;
		}
		//////////////////////////////////
		//		Allocate new node.
		//////////////////////////////////
		
		pNewNode = (GEN_LIST<T> *)malloc (sizeof(GEN_LIST<T>));
		
		if(NULL == pNewNode)
		{
			return FALSE;
		}
		
		//////////////////////////////////
		//		Fill the node with Data
		//////////////////////////////////
		
		memset(pNewNode, 0, sizeof(GEN_LIST<T>));
		pNewNode->pNext = NULL;
		pNewNode->Data = *pNodeData;

		/////////////////////////////////
		// 		Prepend
		/////////////////////////////////
		
		if (NULL == pHead)
		{
			pHead = pNewNode ;
			pTail = pNewNode;
			pTail->pNext =pHead;
		}
		else
		{
			pNewNode -> pNext = pHead;
			pHead = pNewNode ;
			pTail->pNext=pNewNode;
		}
		
	return TRUE;
}

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   DisplayGenList
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//		Description			:	This is Function displays Singly Circular Linked List.
//		Returns				: 	void
//								
///////////////////////////////////////////////////////////////////////////////////////
		
template <typename T>
void Singly_linkedList_Circular<T> :: DisplayGenList()
{
		GEN_LIST<T> *pTempNode;
		pTempNode = pHead;
		
		do
		{
			cout<<pTempNode ->Data<<"->";
			pTempNode = pTempNode->pNext;
		}while(pTempNode != pTail->pNext);
}


////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   AddToGenListLast
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	[IN] GEN_LIST<T> **ppListTobeAppended.
//								List which is to be appended to an existing list.
//
//		Description			:	This Function appends node in Singly Circular linked list
//		Returns				: 	BOOLEAN
//								If the function succeeds the return value is TRUE
//								If the function fails , the return value is FALSE
//
///////////////////////////////////////////////////////////////////////////////////////
		
template <typename T>
BOOL Singly_linkedList_Circular<T> :: AddToGenListLast(T *pNodeData)
{
	GEN_LIST <T> *pNewNode;
	GEN_LIST<T> *pTempNode;
	
	pTempNode =pHead;
	
	if(NULL == pNodeData)
	{
		return FALSE;
		
	}
	
	///////////////////////////////
	// 		Allocate new node
	///////////////////////////////
	
	pNewNode = (GEN_LIST<T>*)malloc(sizeof(GEN_LIST<T>));

	if(NULL == pNewNode)
	{
		return FALSE;
	}
	
	///////////////////////////////////
	// 		Fill the node with data
	///////////////////////////////////
	
	memset(pNewNode, 0, sizeof(GEN_LIST<T>));
	pNewNode->pNext = NULL;
	pNewNode->Data = *pNodeData;

	/////////////////////////////////
	// 		Append
	/////////////////////////////////
		
	if(NULL == pHead)
	{
		pHead = pNewNode;
		pTail = pNewNode;
		pTail->pNext = pHead;
		
	}
	else
	{
		pTail->pNext = pNewNode;
		pTail = pNewNode;
		pTail->pNext = pHead;
	}
	
	return TRUE;
}

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   FreeGenList
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//		Description			:	This is Function frees Singly Circular Linked List.
//		Returns				: 	BOOLEAN
//								If the function succeeds the return value is TRUE
//								If the function fails , the return value is FALSE
//								
///////////////////////////////////////////////////////////////////////////////////////

template <typename T>
BOOL Singly_linkedList_Circular<T> :: FreeGenList()
{
	GEN_LIST<T> *pTemp;
	GEN_LIST<T> *pNavigate;
	
	if(NULL == pHead)
	{ 
		return FALSE;
	}
	
	pNavigate = pHead;
	
	while(NULL != pNavigate)
	{
		pTemp = pNavigate ->pNext;
		free(pNavigate);
		pNavigate = pTemp;
	}
	
	return TRUE;
}
			
////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   CountGenListNode
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//		Description			:	This is Function Counts nodes in Singly Circular Linked List.
//		Returns				: 	int
//								Number of nodes in generic list								
//								
///////////////////////////////////////////////////////////////////////////////////////

template <typename T>
int Singly_linkedList_Circular<T> :: CountGenListNode()
{
	//Variable for maintaining number of nodes
	int CountNode = 0;
		
	GEN_LIST<T> *pTempNode;
	pTempNode=pHead;
	
	do
	{
		CountNode++;
		pTempNode =pTempNode->pNext;
	}while(pTempNode != pTail->pNext);
	
	return CountNode;
}

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   SearchFirstOccurrence
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	[IN] GEN_LIST<T> Data
//								Holds head data to be searched
//
//		Description			:	This Function search particular data in singly Circular Linked List.
//								and return the position at which data is found.
//
//		Returns				: 	int
//								Position at which data is found in generic list.							
//								
///////////////////////////////////////////////////////////////////////////////////////

template<typename T>
int Singly_linkedList_Circular<T> :: SearchFirstOccurrence(T data)
{
	int CountNode = 0;
	
	GEN_LIST<T> *pListHead = pHead;
	
	//Traverse the linked list till end
	do
	{
		CountNode++;
		if(memcmp(&(pListHead->Data),&data,sizeof(data))==0)
		{
			//Break the loop as we get the first occurrence
			return CountNode;
		}
		pListHead = pListHead ->pNext;
	}while(pListHead != pTail -> pNext);
	
	return -1;
}

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   SearchAllOccurrence
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	[IN] GEN_LIST<T> Data
//								Holds head data to be searched
//
//		Description			:	This Function search particular data in singly Circular Linked List.
//								and return the number of occurrences of that Data.
//
//		Returns				: 	int
//								Number of times data is found in generic list.							
//								
///////////////////////////////////////////////////////////////////////////////////////

template <typename T>
int Singly_linkedList_Circular<T> :: SearchAllOccurrence(T data)
{
	int CountNode = 0;
	GEN_LIST<T> *pListHead = pHead;
	
	// Traverse the linked list till end
	do
	{
		
		if(memcmp(&(pListHead->Data),&data,sizeof(data))==0)
		{
			CountNode++;
		}
		pListHead = pListHead ->pNext;
	}while(pListHead != pTail -> pNext);
	
	return CountNode;
}

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   InsertAtPosition
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	[IN] int pos
//								Holds the position
//								
//								[IN] *pNodeData
//								Holds the entry which is to be added.
//
//		Description			:	This Function adds node at specified position in Singly Circular linked list
//		//
//		Returns				: 	BOOLEAN
//								If the function succeeds , the ret value is TRUE							
//								If the function fails, the return value is FALSE
//
///////////////////////////////////////////////////////////////////////////////////////

template <typename T>
BOOL Singly_linkedList_Circular<T> :: InsertAtPosition(int pos,T *pNodeData)
{
	int i=1;
	
	GEN_LIST<T> *temp = NULL;
	GEN_LIST<T> *pNewNode = NULL;
	
	// If linked list is empty
	
	if(pHead == NULL)
	{
		return FALSE;
	}
	else if(pos == 1)
	{
		AddToGenListFirst(pNodeData);
	}
	else if(pos ==(CountGenListNode())+1)
	{
		AddToGenListLast(pNodeData);
	}
	else if(pos > CountGenListNode())
	{
		return FALSE;
	}
	else
	{
		temp = pHead;
		
		///////////////////////////////////
		// 		Allocate the new node
		///////////////////////////////////
		
		pNewNode = (GEN_LIST<T> *)malloc(sizeof(GEN_LIST<T>));
		
		if(NULL == pNewNode)
		{
			return FALSE;
		}

		///////////////////////////////////
		// 		Fill the node with data
		///////////////////////////////////
		
		memset(pNewNode, 0, sizeof(GEN_LIST<T>));
		pNewNode -> pNext = NULL;
		pNewNode -> Data = *pNodeData;
		
		while(i < pos-1)
		{
			temp = temp -> pNext;
			++i;
		}
		pNewNode->pNext =temp -> pNext;
		temp -> pNext = pNewNode;
	}
	
	return TRUE;
}	

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   DeleteFromGenListFirst
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//
//		Description			:	This Function removes first node from Singly Circular linked list
//		//
//		Returns				: 	BOOLEAN
//								If the function succeeds , the ret value is TRUE							
//								If the function fails, the return value is FALSE
//
///////////////////////////////////////////////////////////////////////////////////////

template <typename T>
BOOL Singly_linkedList_Circular<T> :: DeleteFromGenListFirst()
{
	GEN_LIST<T> *temp;
	temp = pHead ;
	
	// If linked list is empty
	
	if(pHead == NULL)
	{
		return FALSE;
	}
	else
	{
		pHead = temp -> pNext;
		free(temp);
	}
	
	return TRUE;
}

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   DeleteFromGenListLast
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//
//		Description			:	This Function removes Last node from Singly Linear linked list
//		
//		Returns				: 	BOOLEAN
//								If the function succeeds , the ret value is TRUE							
//								If the function fails, the return value is FALSE
//
///////////////////////////////////////////////////////////////////////////////////////

template <typename T>
BOOL Singly_linkedList_Circular<T> :: DeleteFromGenListLast()
{
	GEN_LIST<T> *temp1,*temp2;
	temp1 = pHead;
	temp2 = pTail;
	
	// If linked list is empty
	if(pHead == NULL && pTail == NULL)
	{
		return FALSE;
	}
	else
	{
		while(temp1 -> pNext != temp2)
		{
			temp1 =temp1 ->pNext;
		}
		
		free(temp2);
		pTail = temp1;
		temp1 ->pNext=pHead;
	}
	return TRUE;
}
////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   DeleteAtPosition
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//
//		Description			:	This Function removes  node from specified Singly Circular linked list
//		
//		Returns				: 	BOOLEAN
//								If the function succeeds , the ret value is TRUE							
//								If the function fails, the return value is FALSE
//
///////////////////////////////////////////////////////////////////////////////////////

template <typename T>
BOOL Singly_linkedList_Circular<T>:: DeleteAtPosition(int pos)
{
	if(pos > (CountGenListNode()))
	{
		return FALSE;
	}
	else if(pos == 1)
	{
		DeleteFromGenListFirst();
	}
	else if(pos == (CountGenListNode()))
	{
		DeleteFromGenListLast();
	}
	else
	{
		int i=0;
		GEN_LIST<T> * temp = pHead ,*t;
		
		for(i=0 ; i < pos - 1;i++)
		{
			t=temp;
			temp = temp -> pNext;
		}
		
		t->pNext = temp -> pNext;
		temp -> pNext= NULL;
		free(temp);
	}
	
	return TRUE;
}


/*******************************************************************************************************************************/
/*******************************************************************************************************************************/
/*******************************************************************************************************************************/


///////////////////////////////////////////////////////////////////////////////////
// 
// 		Function Name		:  		Doubly_linkedList_Circular
//		Function Date		: 		20/11/2019
//		Function Author		: 		Aishwarya Lakhamade
//		Parameters			: 		NONE
//		Description			: 		This is a constructor of Doubly_linkedList_Circular
// 		Returns				: 		NONE
//
///////////////////////////////////////////////////////////////////////////////////

template <typename T>
Doubly_linkedList_Circular<T> :: Doubly_linkedList_Circular()
{
	pHead = NULL;
	pTail = NULL;
}

///////////////////////////////////////////////////////////////////////////////////
// 
// 		Function Name		:  		~Doubly_linkedList_Circular
//		Function Date		: 		20/11/2019
//		Function Author		: 		Aishwarya Lakhamade
//		Parameters			: 		NONE
//		Description			: 		This is a Destructor of Doubly_linkedList_Circular
// 		Returns				: 		NONE
//
///////////////////////////////////////////////////////////////////////////////////

template <typename T>
Doubly_linkedList_Circular<T> :: ~Doubly_linkedList_Circular()
{
	GEN_DLIST<T> *pTemp;
	GEN_DLIST<T> *pNavigate;
	
	if(NULL != pHead)
	{
		pNavigate = pHead;
		while(pTail != pNavigate)
		{
			pTemp = pNavigate -> pNext;
			free(pNavigate);
			pNavigate = pTemp;
		}
	}
}

////////////////////////////////////////////////////////////////////////////////////////////
// 
// 		Function Name		:  		AddToGenListFirst
//		Function Date		: 		21/11/2019
//		Function Author		: 		Aishwarya Lakhamade
//		Parameters			: 		[IN ]T *pNodeData.
//									Holds the entry which is to be added
//
//		Description			: 		This function adds node to Doubly Circular linkedList
// 		Returns				: 		BOOLEAN
//									If the function succeeds, the return value is TRUE
//									If the function fails,the return value is FALSE	
////////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
BOOL Doubly_linkedList_Circular <T> :: AddToGenListFirst(T *pNodeData)
{
	GEN_DLIST <T> *pNewNode = NULL;
	
	if(NULL == pNodeData)
	{
		return FALSE;
	}
	
	////////////////////////
	// 	Allocate new node
	////////////////////////
	
	pNewNode = (GEN_DLIST<T> *)malloc(sizeof(GEN_DLIST<T>));
	
	if(NULL == pNewNode)
	{
		return FALSE;
	}
	
	////////////////////////////
	//	Fill the node with data
	/////////////////////////////
	
	memset(pNewNode,0,sizeof(GEN_DLIST<T>));
	pNewNode->pNext =NULL;
	pNewNode->Data = *pNodeData;
	pNewNode->pPrev =NULL;
	
	/////////////////////////
	//	Prepend
	/////////////////////////

	if(NULL == pHead)
	{
		pHead = pNewNode;
		pTail = pNewNode;
		pTail ->pNext =pNewNode;
	}
	else
	{
		pNewNode -> pNext = pHead;
		(pHead)-> pPrev = pNewNode;
		pHead =pNewNode;
		pTail ->pNext = pHead;
	}
	return TRUE;
}

////////////////////////////////////////////////////////////////////////////////////////////
// 
// 		Function Name		:  		AddToGenListLast
//		Function Date		: 		21/11/2019
//		Function Author		: 		Aishwarya Lakhamade
//		Parameters			: 		[IN] GEN_LIST<T> **ppListTobeAppended.
//									List which is to be appended to an existing list.	
//		Description			: 		This function appends node in Doubly Circular linkedList
// 		Returns				: 		BOOLEAN
//									If the function succeeds, the return value is TRUE
//									If the function fails,the return value is FALSE	
////////////////////////////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Doubly_linkedList_Circular<T> :: AddToGenListLast(T *pNodeData)
{
	GEN_DLIST<T> *pNewNode = NULL;
	GEN_DLIST<T> *pTempNode = NULL;
	
	pTempNode = pHead;
	
	if(NULL == pNodeData)
	{
		return FALSE;
	}
	
	///////////////////////////////
	//		Allocate new node
	///////////////////////////////
	
	pNewNode = (GEN_DLIST<T>*)malloc (sizeof(GEN_DLIST<T>));
	if(NULL == pNewNode)
	{
		return FALSE;
	}
	
	///////////////////////////////////
	//		Fill the node with data
	///////////////////////////////////
		
	memset(pNewNode,0,sizeof(GEN_DLIST<T>));
	pNewNode->pNext = NULL;
	pNewNode->Data=*pNodeData;
	pNewNode->pPrev = NULL;
	
	//////////////////////////////////
	//		Append
	//////////////////////////////////
		
	if(NULL == pHead)
	{
		pHead = pNewNode;
		pTail = pNewNode;
		pTail->pNext = pNewNode;
	}
	else
	{
		pNewNode->pPrev = pTail;
		pTail->pNext = pNewNode;
		pTail = pNewNode;
		pTail -> pNext =pHead;
	}
	
	return TRUE;
}

////////////////////////////////////////////////////////////////////////////////////////////
// 
// 		Function Name		:  		FreeGenList
//		Function Date		: 		21/11/2019
//		Function Author		: 		Aishwarya Lakhamade
//		Parameters:
//			 		NONE	
//
//		Description	:
//			 		This function frees Doubly Circular linked List
//
// 		Returns:
//				BOOLEAN
//				If the function succeeds, the return value is TRUE
//				If the function fails,the return value is FALSE	
//
////////////////////////////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Doubly_linkedList_Circular<T>::FreeGenList()
{
	GEN_DLIST<T> *pTemp;
	GEN_DLIST<T> *pNavigate;
	
	if(NULL == pHead)
	{
		return FALSE;
	}
	
	pNavigate = pHead;
	while(pTail != pNavigate)
	{
		pTemp = pNavigate-> pNext;
		free(pNavigate);
		pNavigate = pTemp;
	}
	
	return TRUE;
}

////////////////////////////////////////////////////////////////////////////////////////////
// 
// 		Function Name		:  		DisplayGenList
//		Function Date		: 		21/11/2019
//		Function Author		: 		Aishwarya Lakhamade
//		
///		Parameters	: 		
//				[IN] GEN_LIST<T> *pListHead.			
//				Holds head pointer of list.	
//
//		Description	: 
//				This function displays Doubly Circular linked List
//
// 		Returns	:
//				void
//									
////////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
void Doubly_linkedList_Circular<T> :: DisplayGenList()
{
	GEN_DLIST<T> *pTempNode = pHead;
	pTempNode = pHead;
	
	do
	{
		cout<< pTempNode -> Data <<"<=>";
		pTempNode =pTempNode ->pNext;
	}while(pTempNode != pTail->pNext);
	
}


////////////////////////////////////////////////////////////////////////////////////////////
// 
// 		Function Name		:  		CountGenListNode
//		Function Date		: 		21/11/2019
//		Function Author		: 		Aishwarya Lakhamade
//		
///		Parameters	: 		
//				[IN] GEN_LIST<T> *pListHead.			
//				Holds head pointer of list.	
//
//		Description	: 
//				This function counts nodes in  Doubly Circular linked List
//
// 		Returns	:
//				int 
//				Number of nodes in generic list
//					
////////////////////////////////////////////////////////////////////////////////////////////
	
template <typename T>
int Doubly_linkedList_Circular<T> :: CountGenListNode()
{
	// Variable for maintaining number of nodes
	int CountNode =0;
	GEN_DLIST<T> *pTempNode = pHead;

	do
	{
		CountNode++;
		pTempNode = pTempNode -> pNext;
		
	}while(pTempNode != pTail->pNext);
	
	return CountNode;
}


////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   SearchFirstOccurrence
//		Function Date		:   21/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//
//		Parameters			:	[IN] GEN_LIST<T> Data
//								Holds head data to be searched
//
//		Description			:	This Function search particular data in Doubly Circular Linked List.
//								and return the position at which data is found.
//
//		Returns				: 	int
//								Position at which data is found in generic list.							
//								
///////////////////////////////////////////////////////////////////////////////////////

template <typename T>
int Doubly_linkedList_Circular<T> :: SearchFirstOccurrence(T data) // Data to be searched
{
		int CountNode = 0;
		GEN_DLIST<T> *pListHead = pHead;
		
		// Traverse the linked list till end
		do
		{
			CountNode++;
			if(memcmp(&(pListHead-> Data),&data,sizeof(data))==0)
			{
				//Break the loop as we get the first occurrence
				return CountNode;
			}
			pListHead = pListHead ->pNext;
		}while(pListHead != pTail -> pNext);
		
		return -1;
}

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   SearchAllOccurrence
//		Function Date		:   21/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//
//		Parameters			:	[IN] GEN_LIST<T> Data
//								Holds head data to be searched
//
//		Description			:	This Function search particular data in Doubly Circular Linked List.
//								and return number of occurrence of that data.
//
//		Returns				: 	int
//								Number of times data is found in generic list.							
//								
///////////////////////////////////////////////////////////////////////////////////////
		
template<typename T>
int Doubly_linkedList_Circular<T>:: SearchAllOccurrence(T data)
{
		int CountNode = 0;
		GEN_DLIST<T> *pListHead = pHead;
		
		//Traverse the linked list till the end
		do
		{
			if(memcmp(&(pListHead->Data),&data,sizeof(data))== 0)
			{
				CountNode++;
			}
			pListHead = pListHead ->pNext;
		}while(pListHead != pTail->pNext);
		
		return CountNode;
}
		
////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   InsertAtPosition
//		Function Date		:   21/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	
//					[IN] int pos.
//					Holds the position.
//
//					[IN] T *pNodeData		
//					Holds the entry which is to be added.
//
//		Description			:	This Function adds node at specified position in Doubly Circular linked list
//		//
//		Returns				: 	BOOLEAN
//								If the function succeeds , the ret value is TRUE							
//								If the function fails, the return value is FALSE
//
///////////////////////////////////////////////////////////////////////////////////////

template <typename T>
BOOL Doubly_linkedList_Circular<T>::InsertAtPosition(int pos,T *pNodeData)
{
	int i=1;
	
	GEN_DLIST<T> *temp = NULL;
	GEN_DLIST<T> *pNewNode = NULL;
	
	// If linked list is empty
	if(pHead == NULL)
	{
		return FALSE;
	}
	else if(pos == 1)
	{
		AddToGenListFirst(pNodeData);
	}
	else if(pos == (CountGenListNode())+1)
	{
		AddToGenListLast(pNodeData);
	}
	else if(pos > CountGenListNode())
	{
		return FALSE;
	}
	else
	{
		temp = pHead;
		pNewNode =(GEN_DLIST<T>*)malloc (sizeof(GEN_DLIST<T>));
		if(NULL == pNewNode)
		{
			return FALSE;
		}
		
		//////////////////////////////////
		//		Fill the node with data
		//////////////////////////////////
	
		memset(pNewNode,0,sizeof(GEN_DLIST<T>));
		pNewNode -> pNext = NULL;
		pNewNode ->Data = *pNodeData;
		pNewNode ->pPrev = NULL;
		
		while(i < pos-1)
		{
			temp = temp ->pNext;
			++i;
		}
		
		pNewNode -> pNext = temp -> pNext;
		temp ->pNext->pPrev =pNewNode;
		temp-> pNext=pNewNode;
		pNewNode -> pPrev =temp;
	}
	return TRUE;
}

///////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   DeleteFromGenListFirst
//		Function Date		:   21/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//
//		Description			:	This Function removes first node from Doubly Circular linked list
//		//
//		Returns				: 	BOOLEAN
//								If the function succeeds , the ret value is TRUE							
//								If the function fails, the return value is FALSE
//
///////////////////////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Doubly_linkedList_Circular<T> :: DeleteFromGenListFirst()
{
	GEN_DLIST<T> *temp = NULL;
	temp = pHead;
	
	//If Linked list is empty
	if(pHead == NULL)
	{
		return FALSE;
	}
	else
	{
		pHead = temp -> pNext;
		pTail->pNext = pHead;
		pHead -> pPrev = NULL;
		free(temp);
	}
	return TRUE;
}
		
////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   DeleteFromGenListLast
//		Function Date		:   21/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//
//		Description			:	This Function removes last node from Doubly Circular linked list
//		
//		Returns				: 	BOOLEAN
//								If the function succeeds , the ret value is TRUE							
//								If the function fails, the return value is FALSE
//
///////////////////////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Doubly_linkedList_Circular<T>::DeleteFromGenListLast()
{			
	GEN_DLIST<T> *temp;

	//If linked list is empty
	if(pHead == NULL)
	{
		return FALSE;
	}
	else
	{
		temp=pTail;
		pTail = pTail -> pPrev;
		pTail ->pNext = pHead;
		free(temp);
	}
	
	return TRUE;
}

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   DeleteAtPosition
//		Function Date		:   21/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	[IN] int pos
//								Holds the position.
//
//		Description			:	This Function removes node from specified position Doubly Circular linked list
//		
//		Returns				: 	BOOLEAN
//								If the function succeeds , the ret value is TRUE							
//								If the function fails, the return value is FALSE
//
///////////////////////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Doubly_linkedList_Circular<T>::DeleteAtPosition(int pos)
{
	if(pos > (CountGenListNode()))
	{
		return FALSE;
	}
	else if(pos == 1)
	{
		DeleteFromGenListFirst();
	}
	else if(pos ==(CountGenListNode()))
	{
		DeleteFromGenListLast();
	}
	else
	{
		int i=0;
		GEN_DLIST<T> *temp = pHead;
		GEN_DLIST<T>	*t;
		
		for(i=0;i< pos-1;i++)
		{
			t = temp;
			temp = temp -> pNext;
		}
		t -> pNext = temp -> pNext;
		temp-> pNext->pPrev = t;
		
		free(temp);
	}
	
	return TRUE;
}		
	
////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   DisplayGenListReverse
//		Function Date		:   21/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//
//		Description			:	 Function which displays the Doubly Circular Linked list in reverse manner.
//		
//		Returns				: 	BOOLEAN
//								If the function succeeds , the ret value is TRUE							
//								If the function fails, the return value is FALSE
//
///////////////////////////////////////////////////////////////////////////////////////

template <typename T>
BOOL Doubly_linkedList_Circular<T>::DisplayGenListReverse()
{
	GEN_DLIST<T> *temp = pTail;
	
	if(pHead == NULL)
	{
		return TRUE;
	}	
	else
	{
		do
		{
			printf("|%d|<=>",temp->Data);
			temp = temp ->pPrev;
		}while(temp != pHead->pPrev);
		
	}
	return FALSE;
}


/****************************************************************************************************************************/
/****************************************************************************************************************************/
/****************************************************************************************************************************/

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   Queue
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//		Description			:	This is constructor of class Queue
//		Returns				: 	NONE
//
///////////////////////////////////////////////////////////////////////////////////////
template<typename T>
Queue<T> :: Queue()
{
	pHead = NULL;
	pTail = NULL;
}

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   ~Queue
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//		Description			:	This is Destructor of class Queue
//		Returns				: 	NONE
//
///////////////////////////////////////////////////////////////////////////////////////

template <typename T>
Queue<T> :: ~Queue()
{
	GEN_QUEUE<T> *pTemp;
	GEN_QUEUE<T> *pNavigate;
	
	if(NULL != pHead)
	{
		
		pNavigate =pHead;
		while(NULL != pNavigate)
		{
			pTemp = pNavigate-> pNext;
			free(pNavigate);
			pNavigate = pTemp;
		}
	}
}

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   EnQueue
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//		Description			:	This is Function adds elements in Queue
//		Returns				: 	void
//
///////////////////////////////////////////////////////////////////////////////////////
template<typename T>
void Queue<T> :: EnQueue(T *pNodeData)
{
	GEN_QUEUE<T> *pNewNode = NULL;
	
	//////////////////////////////////
	//		Allocate new node
	////////////////////////////////
	pNewNode =(GEN_QUEUE<T>*)malloc(sizeof(GEN_QUEUE<T>));
	
	///////////////////////////////////////
	//		Fill the node with data
	///////////////////////////////////////
	
	memset(pNewNode , 0,sizeof(GEN_QUEUE<T>));
	pNewNode->pNext= NULL;
	pNewNode-> Data = *pNodeData;
	
	////////////////////////////////
	//		Prepend
	////////////////////////////////
	

	if((pHead == NULL)&&(pTail== NULL))
	{
		pHead = pNewNode;
		pTail = pNewNode;
	}
	else
	{
		pTail -> pNext = pNewNode;
		pTail = pTail -> pNext;
	}
}

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   DisplayQueue
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//		Description			:	This is Function which displays elements of Queue
//		Returns				: 	void
//
///////////////////////////////////////////////////////////////////////////////////////
template<typename T>
void Queue<T> :: DisplayQueue()
{
	GEN_QUEUE<T> *pTemp = pHead;
	

	
	while(pTemp != NULL)
	{
		cout << pTemp->Data<<" -> ";
		pTemp = pTemp -> pNext;
	}
}

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   DeQueue
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//		Description			:	This is Function removes elements from Queue
//		Returns				: 	void
//
///////////////////////////////////////////////////////////////////////////////////////
template<typename T>
T Queue <T> :: DeQueue()
{
	if ((pHead == NULL)&&(pTail == NULL))
	{
		return -1 ;
	}

	if(pHead == pTail)
	{
		T pTemp;
		
		pTemp = pHead -> Data;
		free(pHead);
		pHead = NULL;
		pTail = NULL;
		
		return pTemp;
	}
	else
	{
		T pTemp;
		
		pTemp = pHead -> Data;
		GEN_QUEUE<T> *pPointer = NULL;
		pPointer = pHead;
		pHead = pHead -> pNext;
		free(pPointer);
		return pTemp;
	}
}

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   CountQueue
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//		Description			:	This is Function Counts elements in Queue
//		Returns				: 	int
//								Number of elements in generic Queue								
//								
///////////////////////////////////////////////////////////////////////////////////////

template <typename T>
int Queue<T> :: CountQueue()
{
	//Variable for maintaining number of nodes
	int CountNode = 0;
	
	GEN_QUEUE<T> *pListHead = pHead;
	
	//Traverse the linked list till end
	while(NULL != pListHead)
	{
		CountNode++;
		pListHead = pListHead -> pNext;
	}
	
	return CountNode;
}

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   SearchFirstOccurrence
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	[IN] GEN_LIST<T> Data
//								Holds head data to be searched
//
//		Description			:	This Function search particular data in Queue.
//								and return the position at which data is found.
//
//		Returns				: 	int
//								Position at which data is found in generic list.							
//								
///////////////////////////////////////////////////////////////////////////////////////

template<typename T>
int Queue<T> :: SearchFirstOccurrence(T data)
{
	int CountNode = 0;
	
	GEN_QUEUE<T> *pListHead = pHead;
	
	//Traverse the linked list till end
	while(pListHead != NULL)
	{
		++CountNode ;
		 
		// If data matches with the input value
		if(memcmp(&(pListHead -> Data),&data,sizeof(data))== 0)
		{
			 // Break the loop as we get the first occurrence
			 
			 return CountNode;
		}
		
		pListHead = pListHead -> pNext;
	}
	
	return -1;
}
////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   SearchAllOccurrence
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	[IN] GEN_LIST<T> Data
//								Holds head data to be searched
//
//		Description			:	This Function search particular data in Queue.
//								and return the number of occurrences of that Data.
//
//		Returns				: 	int
//								Number of times data is found in generic list.							
//								
///////////////////////////////////////////////////////////////////////////////////////

template <typename T>
int Queue<T> :: SearchAllOccurrence(T data)
{
	int CountNode = 0;
	GEN_QUEUE<T> *pListHead = pHead;
	
	// Traverse the linked list till end
	while(pListHead != NULL)
	{
		//If data matches with the input value
		if(memcmp(&(pListHead -> Data),&data,sizeof(data))== 0)
		{
			++CountNode;
		}
		pListHead = pListHead -> pNext;
	}
	
	return CountNode;
}
/*******************************************************************************************************************************/
/*******************************************************************************************************************************/
/*******************************************************************************************************************************/


////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   Stack
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//		Description			:	This is constructor of class Stack
//		Returns				: 	NONE
//
///////////////////////////////////////////////////////////////////////////////////////
template<typename T>
Stack<T> :: Stack()
{
	pHead = NULL;
	
}

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   ~Stack
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//		Description			:	This is Destructor of class Stack
//		Returns				: 	NONE
//
///////////////////////////////////////////////////////////////////////////////////////

template <typename T>
Stack<T> :: ~Stack()
{
	GEN_STACK<T> *pTemp;
	GEN_STACK<T> *pNavigate;
	
	if(NULL != pHead)
	{
		
		pNavigate =pHead;
		while(NULL != pNavigate)
		{
			pTemp = pNavigate-> pNext;
			free(pNavigate);
			pNavigate = pTemp;
		}
	}
}
////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   Push
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	T Data
//		Description			:	This function adds elements on stack
//		Returns				: 	void
//
///////////////////////////////////////////////////////////////////////////////////////
template <typename T>
void Stack<T> :: Push(T *pNodeData)
{
	GEN_STACK<T> *pNewNode = NULL;
	
		/////////////////////////////////
		//		Allocate new node
		/////////////////////////////////
	
	pNewNode = (GEN_STACK<T>*)malloc(sizeof(GEN_STACK<T>));
	
	
		//////////////////////////////////
		//		Fill the node with Data
		//////////////////////////////////
		
		memset(pNewNode, 0, sizeof(GEN_STACK<T>));
		pNewNode->pNext = NULL;
		pNewNode->Data = *pNodeData;

		/////////////////////////////////
		// 		Prepend
		/////////////////////////////////
		
		if (NULL == pHead)
		{
			pHead = pNewNode ;
			
			
		}
		else
		{
			pNewNode -> pNext = pHead;
			pHead = pNewNode ;
		}
		
	
}
////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   DisplayStack
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//		Description			:	This is Function displays Stack.
//		Returns				: 	void
//								
///////////////////////////////////////////////////////////////////////////////////////
		
template <typename T>
void Stack<T> :: DisplayStack()
{
		GEN_STACK<T> *pTempNode;
		pTempNode = pHead;
		
		while(NULL != pTempNode)
		{
			cout<<" "<<pTempNode -> Data << " ->";
			pTempNode = pTempNode -> pNext;
		}
		
}

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   Pop
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//		Description			:	This is Function removes elements from Stack
//		Returns				: 	T Data
//
///////////////////////////////////////////////////////////////////////////////////////
template<typename T>
T Stack<T> :: Pop()
{
	if(pHead == NULL)
	{
		cout<<"Stack is empty";
	}
	else
	{
		T no = pHead -> Data;
		GEN_STACK<T> *pTemp = pHead;
		pHead = pHead -> pNext;
		delete pTemp;
		return no;
	}
}

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   CountStack
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//		Description			:	This is Function Counts elements in Stack
//		Returns				: 	int
//								Number of elements in generic Stack								
//								
///////////////////////////////////////////////////////////////////////////////////////

template <typename T>
int Stack<T> :: CountStack()
{
	//Variable for maintaining number of nodes
	int CountNode = 0;
	
	GEN_STACK<T> *pListHead = pHead;
	
	//Traverse the linked list till end
	while(NULL != pListHead)
	{
		CountNode++;
		pListHead = pListHead -> pNext;
	}
	
	return CountNode;
}
////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   SearchFirstOccurrence
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	[IN] GEN_LIST<T> Data
//								Holds head data to be searched
//
//		Description			:	This Function search particular data in Queue.
//								and return the position at which data is found.
//
//		Returns				: 	int
//								Position at which data is found in generic list.							
//								
///////////////////////////////////////////////////////////////////////////////////////

template<typename T>
int Stack<T> :: SearchFirstOccurrence(T data)
{
	int CountNode = 0;
	
	GEN_STACK<T> *pListHead = pHead;
	
	//Traverse the linked list till end
	while(pListHead != NULL)
	{
		++CountNode ;
		 
		// If data matches with the input value
		if(memcmp(&(pListHead -> Data),&data,sizeof(data))== 0)
		{
			 // Break the loop as we get the first occurrence
			 
			 return CountNode;
		}
		
		pListHead = pListHead -> pNext;
	}
	
	return -1;
}
////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   SearchAllOccurrence
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	[IN] GEN_LIST<T> Data
//								Holds head data to be searched
//
//		Description			:	This Function search particular data in Stack.
//								and return the number of occurrences of that Data.
//
//		Returns				: 	int
//								Number of times data is found in generic list.							
//								
///////////////////////////////////////////////////////////////////////////////////////

template <typename T>
int Stack<T> :: SearchAllOccurrence(T data)
{
	int CountNode = 0;
	GEN_STACK<T> *pListHead = pHead;
	
	// Traverse the linked list till end
	while(pListHead != NULL)
	{
		//If data matches with the input value
		if(memcmp(&(pListHead -> Data),&data,sizeof(data))== 0)
		{
			++CountNode;
		}
		pListHead = pListHead -> pNext;
	}
	
	return CountNode;
}

/**************************************************************************************************************************************/
/**************************************************************************************************************************************/
/**************************************************************************************************************************************/

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   Binary_Search_Tree
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//		Description			:	This is constructor of class Binary_Search_Tree
//		Returns				: 	NONE
//
///////////////////////////////////////////////////////////////////////////////////////
template<typename T>
Binary_Search_Tree<T> :: Binary_Search_Tree()
{
	pHead = NULL;
	
}

////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   ~Binary_Search_Tree
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//		Description			:	This is Destructor of class Binary_Search_Tree
//		Returns				: 	NONE
//
///////////////////////////////////////////////////////////////////////////////////////

template <typename T>
Binary_Search_Tree<T> :: ~Binary_Search_Tree()
{
	GEN_BST<T> *pTemp;
	GEN_BST<T> *pNavigate;
	
	 while(pHead != NULL)
	 {
			pTemp = pHead;
		
		
				while(pTemp -> lChild != NULL)
				{
					pTemp = pTemp ->lChild;
					
				}
					pNavigate = pTemp->rChild;
					free(pNavigate);
				
				pTemp = pHead;

				while(pTemp->rChild != NULL)
				{
				pTemp=pTemp->rChild ;
					
				}
				pNavigate= pTemp -> rChild;
				free(pNavigate);
			}
			
}
	
////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   Insert
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//		Description			:	This function adds elements in Binary_Search_Tree
//		Returns				: 	void
//
///////////////////////////////////////////////////////////////////////////////////////
template <typename T>
void Binary_Search_Tree<T> :: Insert(T *pNodeData)
{
	GEN_BST<T> *pNewNode = NULL;
	GEN_BST<T> *pTemp;
	
	//////////////////////////////
	//		Allocate new node
	/////////////////////////////
	
	pNewNode =(GEN_BST<T>*)malloc(sizeof(GEN_BST<T>));
	pNewNode -> Data = *pNodeData;
	pNewNode -> lChild = NULL;
	pNewNode -> rChild = NULL;
	
	if(pHead == NULL)
	{
		pHead = pNewNode ;
	}
	else
	{
		pTemp = pHead;
		
		while(1)
		{
			if(*pNodeData > pTemp-> Data)
			{
				if(pTemp->rChild == NULL)
				{
					pTemp -> rChild = pNewNode;
					break;
				}
				pTemp = pTemp->rChild;
			}
			else if(*pNodeData < pTemp-> Data)
			{
				if(pTemp->lChild == NULL)
				{
					pTemp->lChild = pNewNode;
					break;
				}
				pTemp = pTemp -> lChild;
			}
			else
			{
				free(pNewNode);
				break;
			}
		}
	}
}
////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   InOrder
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//		Description			:	This function displays elements in Binary_Search_Tree
//		Returns				: 	void
//
///////////////////////////////////////////////////////////////////////////////////////
template <typename T>
void Binary_Search_Tree<T> :: InOrder(GEN_BST<T> *pHead)
{
	if(pHead != NULL)
	{
		InOrder(pHead -> lChild);
		printf("%d\t",pHead->Data);
		InOrder(pHead -> rChild);
	}
	
}
	
////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   PreOrder
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//		Description			:	This function displays elements in Binary_Search_Tree
//		Returns				: 	void
//
///////////////////////////////////////////////////////////////////////////////////////
template <typename T>
void Binary_Search_Tree<T> :: PreOrder(GEN_BST<T> *pHead)
{
	if(pHead != NULL)
	{
		printf("%d\t",pHead->Data);
		InOrder(pHead -> lChild);
		InOrder(pHead -> rChild);
	}
	
}
////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   PostOrder
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//		Description			:	This function displays elements in Binary_Search_Tree
//		Returns				: 	void
//
///////////////////////////////////////////////////////////////////////////////////////
template <typename T>
void Binary_Search_Tree<T> :: PostOrder(GEN_BST<T> *pHead)
{
	if(pHead != NULL)
	{
		InOrder(pHead -> lChild);
		InOrder(pHead -> rChild);
		printf("%d\t",pHead->Data);
	}
	
}
////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   SearchTree
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//		Description			:	This function Search elements in Binary_Search_Tree
//		Returns				: 	BOOLEAN
//								If element is present then return TRUE
//								If element is not present then return FALSE
//
///////////////////////////////////////////////////////////////////////////////////////
template <typename T>
BOOL Binary_Search_Tree<T> :: SearchTree(T *pNodeData)
{
	GEN_BST<T> *pTemp=pHead;
	//printf("Inside SearchTree");
	while(pHead != NULL)
	{
		if(*pNodeData > (pHead->Data))
		{
			pHead = pHead ->rChild;
		}
		else if(*pNodeData < (pHead->Data))
		{
			pHead = pHead -> lChild;
		}
		else if(*pNodeData == (pHead->Data))
		{
			break;
		}
	}
	
	if(pHead == NULL)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}
////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name		:   CountNode
//		Function Date		:   20/11/2019
//		Function Author		: 	Aishwarya Lakhamade
//		Parameters			:	NONE
//		Description			:	This function count nodes in Binary_Search_Tree
//		Returns				: 	int
//
///////////////////////////////////////////////////////////////////////////////////////
template <typename T>
int Binary_Search_Tree<T> :: CountNode(GEN_BST<T> *pHead)
{
	static int iCnt=0;
	if(pHead != NULL)
	{
		iCnt++;
		CountNode(pHead -> lChild);
		CountNode(pHead -> rChild);
	}
	return iCnt;
	
}



////////////////////////////////////////////////////////////////////////
//
//		Function Name 	: 	Entry point function
//		Function Date   :	21/11/2019
//		Function Author	: 	Aishwarya Lakhamade
//		Brief Description:	In this function we created objects of a class
//							and call the function 
//
///////////////////////////////////////////////////////////////////////

int main()
{
	BOOL bRet;
	
	//////////////////////////////////////////////////////////////////
	// 
	//				Linear  Singly Linked List
	//
	///////////////////////////////////////////////////////////////////
	
	cout<<endl<<"---------------------------------------------------------"<<endl;
	cout<<"\t\tLinear Singly Linked List";
	cout<<endl<<"---------------------------------------------------------"<<endl;
	
	Singly_linkedList<int> sobj;
	
	int no=10;
	sobj.AddToGenListFirst(&no);
	no++;
	
	sobj.AddToGenListFirst(&no);
	no++;
	
	sobj.AddToGenListFirst(&no);
	no++;
	
	sobj.AddToGenListFirst(&no);
	
	no=25;
	sobj.AddToGenListLast(&no);
	sobj.DisplayGenList();
	
	no=11;
	cout<<endl<<" Element 11 is found at position "<<sobj.SearchFirstOccurrence(no)<<endl;
	
	cout<<endl<<"Element 11 is occurred "<<sobj.SearchAllOccurrence(no)<<" times in Singly linear linked list"<<endl;
	
	sobj.InsertAtPosition(4,&no);
	sobj.DisplayGenList();
	
	printf("\n");
	
	sobj.DeleteFromGenListFirst();
	sobj.DisplayGenList();
	printf("\n");
	
	sobj.DeleteFromGenListLast();
	sobj.DisplayGenList();
	printf("\n");
	
	sobj.DeleteAtPosition(2);
	sobj.DisplayGenList();
	printf("\n");
	
	sobj.ReverseList();
	sobj.DisplayGenList();
	printf("\n");
	
	//////////////////////////////////////////////////////////////////
	// 
	//					Linear  Doubly Linked List
	//
	//////////////////////////////////////////////////////////////////
	
	
	cout<<endl<<"-----------------------------------------------------------------"<<endl;
	cout<<"\t\tLinear Doubly Linked List";
	cout<<endl<<"-----------------------------------------------------------------"<<endl;

	Doubly_linkedList<int> dobj;
	
	bRet = dobj.AddToGenListFirst(&no);
	no++;
	
	bRet = dobj.AddToGenListFirst(&no);
	no++;
	
	bRet = dobj.AddToGenListFirst(&no);
	no++;
	
	dobj.DisplayGenList();
	printf("\n");
	
	no=20;
	bRet = dobj.AddToGenListLast(&no);
	
	no=30;
	bRet = dobj.AddToGenListLast(&no);
	
	dobj.DisplayGenList();
	printf("\n");
	
	no=40;
	bRet = dobj.AddToGenListLast(&no);
	
	no=50;
	bRet = dobj.AddToGenListLast(&no);
	
	dobj.DisplayGenList();
	printf("\n");
	
	no=20;
	cout<<endl<<"Element 20 is fount at position "<<dobj.SearchFirstOccurrence(no)<<endl;
	
	cout<<endl<<"Element 20 occurred "<<dobj.SearchAllOccurrence(no)<<" times in Doubly Linear Linked list"<<endl;
	
	no=45;
	dobj.DisplayGenList();
	printf("\n");
	
	dobj.InsertAtPosition(4,&no);
	dobj.DisplayGenList();
	printf("\n");
	printf("\n");
	
	dobj.DeleteAtPosition(4);
	dobj.DisplayGenList();
	printf("\n");
	
	dobj.DisplayGenListReverse();
	printf("\n");
	
	/////////////////////////////////////////////////////////////////
	// 
	//				Circular  Singly Linked List
	//
	////////////////////////////////////////////////////////////////
	
	
	cout<<endl<<"---------------------------------------------------------------"<<endl;
	cout<<"\t\tCircular Singly Linked List";
	cout<<endl<<"---------------------------------------------------------------"<<endl;
	
	Singly_linkedList_Circular<int> scobj;
	
	no=25;
	scobj.AddToGenListLast(&no);
	scobj.DisplayGenList();
	printf("\n");
	no=10;
	scobj.AddToGenListFirst(&no);
	no++;
	cout<<endl;
	scobj.DisplayGenList();
	printf("\n");
	scobj.AddToGenListFirst(&no);
	no++;
	cout<<endl;
	scobj.DisplayGenList();
	printf("\n");
	scobj.AddToGenListFirst(&no);
	no++;
	
	scobj.AddToGenListFirst(&no);
	no++;
	
	cout<<endl;
	scobj.DisplayGenList();
	cout<<endl;
	printf("\n");
	
	
	no=25;
	scobj.AddToGenListLast(&no);
	scobj.DisplayGenList();
	printf("\n");
	
	no=11;
	cout<<endl<<"Element 11 is found at position "<<scobj.SearchFirstOccurrence(no)<<endl;
	printf("\n");
	
	scobj.InsertAtPosition(4,&no);
	scobj.DisplayGenList();
	printf("\n");
	
	no=25;
	cout<<endl<<"Element 25 is occurred "<<scobj.SearchAllOccurrence(no)<<" times in Singly Circular Linked list"<<endl;
	printf("\n");
	
	scobj.DeleteFromGenListFirst();
	scobj.DisplayGenList();
	printf("\n");
	printf("\n");
	
	scobj.DeleteFromGenListLast();
	scobj.DisplayGenList();
	printf("\n");
	printf("\n");
	
	scobj.DeleteAtPosition(2);
	scobj.DisplayGenList();
	printf("\n");
	
	
	//////////////////////////////////////////////////////////////
	// 
	//				Circular Doubly Linked List
	//
	//////////////////////////////////////////////////////////////
	
	cout<<endl<<"------------------------------------------------------------"<<endl;
	cout<<"\t\t Circular Doubly Linked List";
	cout<<endl<<"------------------------------------------------------------"<<endl;
	printf("\n");
	Doubly_linkedList_Circular<int> dcobj;
	
	no=95;
	dcobj.AddToGenListLast(&no);
	dcobj.DisplayGenList();
	printf("\n");
	printf("\n");


	no = 25;
	dcobj.AddToGenListFirst(&no);
	dcobj.DisplayGenList();
	printf("\n");


	no=10;
	dcobj.AddToGenListFirst(&no);
	no++;
	cout<<endl;
	dcobj.DisplayGenList();
	printf("\n");


	dcobj.AddToGenListFirst(&no);
	no++;
	
	cout<<endl;
	dcobj.DisplayGenList();
	printf("\n");
	

	dcobj.AddToGenListFirst(&no);
	no++;
	
	dcobj.AddToGenListFirst(&no);
	no++;
	
	cout<<endl;
	dcobj.DisplayGenList();
	
	printf("\n");
	printf("\n");

	no=35;
	dcobj.AddToGenListLast(&no);
	dcobj.DisplayGenList();
	printf("\n");
	
	no=11;
	cout<<endl<<"Element 11 is found at position "<<dcobj.SearchFirstOccurrence(no)<<endl;
	
	cout<<endl<<"Element 11 is occurred "<<dcobj.SearchAllOccurrence(no)<<" times Doubly circular Linked List"<<endl;
	printf("\n");


	dcobj.InsertAtPosition(4,&no);
	dcobj.DisplayGenList();
	printf("\n");
	printf("\n");

	dcobj.DeleteFromGenListFirst();
	dcobj.DisplayGenList();
	printf("\n");
	printf("\n");

	dcobj.DeleteFromGenListLast();
	dcobj.DisplayGenList();
	printf("\n");
	printf("\n");

	dcobj.DeleteAtPosition(2);
	dcobj.DisplayGenList();
	printf("\n");
	printf("\n");

	dcobj.DisplayGenListReverse();	
	printf("\n");
	
	
	//////////////////////////////////////////////////////////////
	// 
	//				Dynamic Queue
	//
	//////////////////////////////////////////////////////////////
	cout<<endl<<"------------------------------------------------------------"<<endl;
	cout<<"\t\t Dynamic Queue";
	cout<<endl<<"------------------------------------------------------------";
	
	Queue<int> qobj;
	
	//printf("Displaying Queue\n");
	no = 11;
	
	qobj.EnQueue(&no);
	no++;
	
	qobj.EnQueue(&no);
	no++;
	
	qobj.EnQueue(&no);
	no++;
	
	qobj.EnQueue(&no);
	no=13;
	
	
	qobj.EnQueue(&no);
	no++;
	
	
	printf("\n");
	printf("\n");
	
	qobj.DisplayQueue();
	printf("\n");
	printf("\n");
	
	int iCount = 0;
	iCount = qobj.CountQueue();
	cout<<"The elements in Queue are "<<iCount;
	printf("\n");
	printf("\n");

	int iRet=0;
	iRet=qobj.DeQueue();
	cout<<iRet<<"\n";
	printf("\n");
	
	qobj.DisplayQueue();
	printf("\n");
	printf("\n");
	
	no=13;
	cout<<"The Number 13 is found at position "<<qobj.SearchFirstOccurrence(no);
	printf("\n");
	printf("\n");
	
	cout<<"The number 13 is occur "<<qobj.SearchAllOccurrence(no)<<" times in Queue";
	printf("\n");
	printf("\n");
		 
	iRet=qobj.DeQueue();
	cout<<iRet<<"\n";
	printf("\n");
	
	iRet=qobj.DeQueue();
	cout<<iRet<<"\n";
	printf("\n");
	
	iRet=qobj.DeQueue();
	cout<<iRet<<"\n";
	printf("\n");
	
	no=21;
	qobj.EnQueue(&no);
	no++;
	
	qobj.EnQueue(&no);
	
	
	qobj.DisplayQueue();
	printf("\n");
	printf("\n");
	
	iCount = qobj.CountQueue();
	cout<<"The elements in Queue are "<<iCount;
	printf("\n");
	
	//////////////////////////////////////////////////////////////
	// 
	//				Dynamic Stack
	//
	//////////////////////////////////////////////////////////////
	cout<<endl<<"------------------------------------------------------------"<<endl;
	cout<<"\t\t Dynamic Stack";
	cout<<endl<<"------------------------------------------------------------";
	
	Stack <int> stobj;
	
	no=10;
	stobj.Push(&no);
	no++;
	printf("\n");
	printf("\n");
	
	stobj.DisplayStack();
	printf("\n");
	printf("\n");
	
	stobj.Push(&no);
	no++;
	
	stobj.Push(&no);
	no++;
	
	stobj.Push(&no);
	
	stobj.DisplayStack();
	printf("\n");
	printf("\n");
	
	iRet=stobj.CountStack();
	cout<<"The elements is stack are "<<iRet;
	printf("\n");
	printf("\n");
	
	iRet = stobj.Pop();
	cout<<iRet;
	printf("\n");
	printf("\n");
	
	stobj.DisplayStack();
	printf("\n");
	printf("\n");
	
	iRet = stobj.Pop();
	cout<<iRet;
	printf("\n");
	printf("\n");
	
	iRet = stobj.Pop();
	cout<<iRet;
	printf("\n");
	printf("\n");
	
	stobj.Push(&no);
	no++;
	
	stobj.Push(&no);
	no++;
	
	stobj.Push(&no);

	stobj.DisplayStack();
	printf("\n");
	printf("\n");
	
	no=13;
	cout<<"Number 13 is occurred at position "<<stobj.SearchFirstOccurrence(no);
	printf("\n");
	printf("\n");
	
	stobj.Push(&no);
	stobj.DisplayStack();
	printf("\n");
	printf("\n");
	
	cout<<"The number 13 is occur "<<stobj.SearchAllOccurrence(no)<<" times in Stack";
	printf("\n");
	printf("\n");
	//////////////////////////////////////////////////////////////
	// 
	//			Binary Search Tree
	//
	//////////////////////////////////////////////////////////////
	cout<<endl<<"------------------------------------------------------------"<<endl;
	cout<<"\t\t Binary Search Tree";
	cout<<endl<<"------------------------------------------------------------"<<endl;
	
	Binary_Search_Tree<int> bobj;
	
	GEN_BST<int> *phead ;
	
	int ino=11; 
	bobj.Insert(&ino);
	phead=bobj.pHead;
	
	ino =21; 
	bobj.Insert(&ino);
	
	ino =15; 
	bobj.Insert(&ino);
	
	ino =27; 
	bobj.Insert(&ino);
	
	ino =14; 
	bobj.Insert(&ino);
	
	ino =7; 
	bobj.Insert(&ino);
	
	
	ino =5; 
	bobj.Insert(&ino);
	
	phead=bobj.pHead;
	
	printf("InOrder :\n");
	bobj.InOrder(phead);
	printf("\n");
	printf("\n");
	
	printf("PreOrder :\n");
	bobj.PreOrder(phead);
	printf("\n");
	printf("\n");
	
	printf("PostOrder :\n");
	bobj.PostOrder(phead);
	printf("\n");
	printf("\n");
	
	ino = 8;
	bRet = bobj.SearchTree(&ino);
	
	if(bRet== TRUE)
	{
		printf("The %d is present in Tree",ino);
	}
	else
	{
		printf("The %d is not present in Tree",ino);
	}
	printf("\n");
	printf("\n");
	
	iRet=bobj.CountNode(phead);
	cout<<"The nodes in tree are "<<iRet;
	printf("\n");
	printf("\n");
	
	return 0;
}	