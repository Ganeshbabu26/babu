a = [45,23,67,12,89,34,56,78,90,11]
for i in range(len(a)):
    for j in range(len(a)):
        if a[i]<a[j]:
            a[i], a[j] = a[j], a[i]
print(a)
# Output: [11, 12, 23, 34, 45, 56, 67, 78, 89, 90]