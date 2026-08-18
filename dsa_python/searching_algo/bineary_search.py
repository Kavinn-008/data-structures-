def search(arr,target):
  size = len(arr)
  start = 0
  end = size -1
  
  while start <= end:
    mid = (start+end)//2
    if arr[mid] == target:
      return mid
    elif arr[mid] < target:
      start = mid + 1
    elif arr[mid] > target:
      end = mid - 1
  return -1
            

arr = [22,33,44,55,66,77,88,99]
target = int(input("enter the1 element to search from the array:"))
result = search(arr,target)
print(result)