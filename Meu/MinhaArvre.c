#include <stdio.h>
#include <stdlib.h>


typedef struct {
  int data;
  struct Node *left;
  struct Node *right;
} Node;

Node *createNode(int data){
  Node* newNode = (Node*)malloc(sizeof(Node));
  newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;
}
