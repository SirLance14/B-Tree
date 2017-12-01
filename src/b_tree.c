/*---------------------------------------------------------------------------------------------
 *  Copyright (c) João Victor Rodrigues da Silva and Ivan Lance. All rights reserved.
 *  Licensed under the MIT License. See LICENSE in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

#include "b_tree.h"

BTree* CreateTree() {
  BTree* p = (BTree*) malloc (sizeof(BTree));
  if (p == NULL) {
    printf("Erro ao alocar memoria. Finalizando");
    exit(-1);
  }
  p->is_leaf = 1;
  p->number_of_keys = 0;
  return p;
}

void DestroyTree(BTree* tree) {
  if (!tree->is_leaf) {
    for (int i = 0; i < tree->number_of_keys; i++) {
      DestroyTree(tree->sons[i]);
    }
  }
  free(tree);
}

BTree* AddElement(int primary_key, int nnr, BTree* tree) {
  if (tree->is_leaf) {
    if (tree->number_of_keys < kMaxKeys) {
      tree->number_of_keys++;
    }
  }
}