/*Spread_sort_algorithm*/

#include<iostream>
using namespace std;

int comparisons=0;
int swaps=0;

int main()
{
    int n;
    cout<<"Enter number of elements:";
    cin>>n;

    int arr[1000];

    cout<<"Enter the numbers:\n";

    for(int i=0;i<n;i++)
        cin>>arr[i];

    int min=arr[0];
    int max=arr[0];

    for(int i=1;i<n;i++)
    {
        comparisons++;

        if(arr[i]<min)
            min=arr[i];

        if(arr[i]>max)
            max=arr[i];
    }

    int bucketCount=5;

    int bucket[5][1000];
    int count[5];

    for(int i=0;i<bucketCount;i++)
        count[i] = 0;

    int width=(max - min + 1)/bucketCount + 1;

    for(int i=0;i<n;i++)
    {
        int index= (arr[i] - min)/width;

        bucket[index][count[index]] = arr[i];
        count[index]++;
    }

    for(int i=0;i<bucketCount;i++)
    {
        for(int j=1;j<count[i];j++)
        {
            int key = bucket[i][j];
            int k = j-1;

            while(k>=0 && bucket[i][k] > key)
            {
                comparisons++;
                bucket[i][k+1] = bucket[i][k];
                swaps++;
                k--;
            }

            bucket[i][k+1] = key;
        }
    }

    int index = 0;

    for(int i=0;i<bucketCount;i++)
    {
        for(int j=0;j<count[i];j++)
        {
            arr[index] = bucket[i][j];
            index++;
        }
    }

    cout<<"\nSorted list\n";

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    cout<<"\n\nTotal comparisons: "<<comparisons;
    cout<<"\nTotal swaps: "<<swaps;

    return 0;
}