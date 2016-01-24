void moveLargest(List list){
  Node curr = list->head;
  Node prev = NULL;
  Node prevLargest = NULL;
  Node largest = list->head;
  while(curr != NULL){
    if(curr->val > largest->val){
      largest = curr;
      prevLargest = prev;
    }
    prev = curr;
    curr = curr->next;
  }
  prev->next = largest;
  prevLargest->next = largest->next;
  largest->next = NULL;
  
}
