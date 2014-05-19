#ifndef __HASH_H__
#define __HASH_H__

#ifdef __cplusplus
extern "C"{
#endif

typedef struct http_node_element Http_Hash_Node_Element_s;

struct Http_Hash_Node_Element_s
{
   /* length of data */
   UINT32 uiDataLen;

   /* Pointer to Data */
   VOID  *pData;

   /* next key for this list*/
   Http_Hash_Node_Element_s *pNext;
}

typdef struct Http_Hash_Node
{
    /* key of hash */
    VOID *pKey;

    /* length of hash key */
    UINT32 uiKeyLen;

    /* Node of Hash Table, list of the hash data */
    Http_Hash_Node_Element_s *pstHttpHashNodeElement;
}Http_Hash_Node_s;

typedef struct Http_Hash_Table_s
{
   
}

#ifdef __cplusplus
}
#endif

#endif
