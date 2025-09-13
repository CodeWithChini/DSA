print("Enter the number of elements in the array: ");
n = int(input());
arr = [];
print("Enter the elements of the array: ");
for i in range(n):
    element = int(input());
    arr.append(element);
print("Enter the element to be searched: ");
search_element = int(input());
found = False;
for i in range(n):
    if arr[i] == search_element:
        found = True;
        print("Element", search_element, "found at index", i);
        break;
if not found:
    print("Element", search_element, "not found in the array");

