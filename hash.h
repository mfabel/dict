#ifndef _HASH_H_
#define _HASH_H_

const int HASH_TABLE_SIZE = 101;

struct nList {
   char* name;
   struct nList *next;
};
typedef struct nList NList;
typedef struct nList *NListPtr;

unsigned Hash(const char* s);

NListPtr Lookup(const char* s);
NListPtr Insert(const char* name);

int BucketSize(int index);

void PrintHashTable(void);
void PrintBucketSize(void);
void PrintBucketMinMax(void);

#endif
