# Python Error Cheat-Sheet

| Error | Cause | Fix |
|---|---|---|
| IndexError | Trying to access a list position that does not exist. | Use a valid index or check the list length first. |
| KeyError | Trying to access a dictionary key that does not exist. | Use an existing key or use `.get()` with a default value. |
| TypeError | Using an operation with incompatible data types. | Convert the values to compatible types or use the correct operation. |
| RecursionError | A function keeps calling itself without a proper stopping condition. | Add a base case to stop the recursion. |
| AttributeError | Trying to use an attribute or method that the object's data type does not have. | Use a method that belongs to that data type. |