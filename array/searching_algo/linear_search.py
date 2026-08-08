def find_element(target, arr):
  size = len(arr)
  for i in range(0,size):
    if arr[i] == target:
      return i,arr[i]

  return "element not found"

arr = [20,3,33,44,66,55,32]
target = int(input("enter the element to be selected:"))
result = find_element(target,arr)
print(result)