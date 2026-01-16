def bubbleSort(arr):
    n = len(arr)

    for i in range(n):
        swapped = False  

        for j in range(0, n - i - 1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
                swapped = True

        if not swapped:
            break
    return arr

myList = [64, 34, 45, 92, 17, 1, 29, 55]
SortedList = bubbleSort(myList)
print(SortedList)
