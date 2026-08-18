def bubble_sort(arr):
  size = len(arr)

  for j in range(size):
    for i in range(size - 1 - j):
        if arr[i] < arr[i+1]:
          pass
        elif arr[i] > arr[i+1]:
          temp = arr[i]
          arr[i] = arr[i+1]
          arr[i+1] = temp
  return arr

arr = [10,20,3,44,41,78,1000]
result = bubble_sort(arr)
print(result)