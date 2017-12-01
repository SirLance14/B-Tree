/*---------------------------------------------------------------------------------------------
 *  Copyright (c) João Victor Rodrigues da Silva and Ivan Lance. All rights reserved.
 *  Licensed under the MIT License. See LICENSE in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

#ifndef B_TREE_H_
#define B_TREE_H_

const int kMaxKeys = 512;

typedef struct Node {
  int is_leaf;
  int primary_key;
  int prr;
  int number_of_keys;
  struct Node indices[kMaxKeys];
  struct Node* sons[kMaxKeys + 1];
} BTree;

BTree* CreateTree();

void DestroyTree(BTree* tree);

#endif /* B_TREE_H_ */