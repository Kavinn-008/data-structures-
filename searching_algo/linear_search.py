def search(arr,target):
  size = len(arr)
  for i in range (size):
    if arr[i] == target:
      return i
  return -1

arr = [22,33,44,55,66,77,88,99]
target = int(input("enetr the to select form array:"))
result = search(arr,target)
if result != -1:
  print(f"the imdex of the element {target} is {result}") 
else:
  print(f"the element {target} is not found")