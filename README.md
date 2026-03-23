# spread-sort-algorithm-asc

EB3/64680/23-Tracy Akinyi Mboya-https://github.com/tracymboya/spread-sort-algorithm-tracymboya-spreadsort-Asc

## Project Description
In this project I implemented a sorting program  in c++ without using any built-in functions.program takes unsorted list of integers and sorts them in ascending order using spreadsort technique,tracks the number of comparisons and swaps performed during execution.

##How spread sort algorithm ascending works
Works by dividing data into groups or classesccalled buckets based on their values.The algorithm first identifies the maximam and minimum value in the list.Using range it creates several buckets.Each number is then placed in a bucket depending on its value.
After elements are distributed each bucket is sorted individually using a simple sorting method ,Insertion sort.Then all the buckets are merged together to form the sorted list.                          

##Step-by-step example    
Unsorted List:
29, 25, 3, 49, 9

**step1:** Find min and max value
Min = 3, Max = 49

**Step2:** Create buckets based on the range

**Step3:** Distribute elements into buckets
* Bucket 1: 3, 9
* Bucket 2: 25, 29
* Bucket 3: 49

**Step 4:** Sort each bucket
* Bucket 1 :3, 9
* Bucket 2 :25, 29
* Bucket 3 : 49

**Step 5:** Merge all buckets
Final Sorted List:
3, 9, 25, 29, 49

##Time complexity
* Best Case: O(n)
* Average Case: O(n)
* Worst Case: O(n log n)

##Space complexity
*O(n)

Additional memory is needed to store the buckets used during sorting

##Experimental result
Algorithm tested using list of different sizes;
1, 2, 3, 4, 5, 10, 250, 999, 9999, 89786, 789300, 1780000

###Observation
* For small datasets, the algorithm performs very fast with minimal comparisons and swaps.
* As the dataset size increases, the number of operations increases gradually.
* Spread sort handles large datasets more efficiently compared to basic algorithms.

##Conclusion                   
This project helped me understand how advanced sorting algorithms like spread sort work by distributing data into buckets before sorting.
Compared to simpler algorithms, spread sort is more efficient for large datasets because it reduces unnecessary comparisons. 

[Paste Your Repository Link]
