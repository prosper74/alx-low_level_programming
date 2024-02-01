# Hash Tables in C

## Overview

This README provides a brief introduction to hash tables in the C programming language. Hash tables are a data structure that allows efficient data retrieval based on key-value pairs. They use a hash function to map keys to indices in an array, providing constant-time average case complexity for basic operations like insert, search, and delete.

## Implementation

The hash table implementation in C typically involves:

**Struct Definition:**
   Define a struct to represent the key-value pairs and the overall hash table structure.

   ```c
   typedef struct {
       int key;
       int value;
   } KeyValue;

   typedef struct {
       KeyValue* array;
       int size;
   } HashTable;
  ```

**Hash Function:**
Implement a hash function to convert keys into array indices. This function should distribute keys uniformly across the array.
```
int hashFunction(int key, int tableSize) {
    return key % tableSize;
}
```

**Basic Operations:**
Implement functions for basic hash table operations, such as insert, search, and delete.
```
void insert(HashTable* hashTable, int key, int value);
int search(HashTable* hashTable, int key);
void delete(HashTable* hashTable, int key);
```

## Usage
1. Initialization: Create a new hash table and specify its size.
```
HashTable myHashTable;
int tableSize = 100;  // Choose an appropriate size
initializeHashTable(&myHashTable, tableSize);
```
2. Insertion: Insert key-value pairs into the hash table.
```
insert(&myHashTable, 42, 100);  // Example key-value pair
```
3. Search: Retrieve a value based on a given key.
```
int result = search(&myHashTable, 42);
```
4. Deletion:Remove a key-value pair from the hash table.
```
delete(&myHashTable, 42);
```
