Authors:
Felipe Da Silva (fpd15)
Andy Nguyen (ahn45)

Test plan: 

Test malloc function
--------------------
1. Allocate more memory than available
2. Attempt to allocate more too much memory

Test free function
-------------------
1. Attempt to free address outside of heap
2. Attempt to free address of non-allocated object
3. Attempt to free an address in the heap but not of an object
