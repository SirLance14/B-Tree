/**
 * Copyright 2017, João Victor da Silva
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at

 *   http://www.apache.org/licenses/LICENSE-2.0

 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * 
 * Contributors:
 * Ivan Lance
 * 
 */

#ifndef B_TREE_H_
#define B_TREE_H_

const int kMaxKeys = 512;

typedef struct Node {
  int is_leaf;
  int primary_key;
  int prr;
  int number_of_keys;
  struct Node indices[kMaxKeys];
  struct Node *sons[kMaxKeys + 1];
} BTree;

BTree* CreateTree() {
  BTree p = (BTree*) malloc (sizeof(BTree));
  if (p == NULL) {
    printf("Erro ao alocar memoria. Finalizando");
    exit(-1);
  }
  p->is_leaf = 1;
  p->number_of_keys = 0;
  return p;
}

#endif /* B_TREE_H_ */