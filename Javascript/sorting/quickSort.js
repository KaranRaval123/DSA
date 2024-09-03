function quickSort(arr, left = 0, right = arr.length - 1) {
  if (left < right) {
    const pivot = partition(arr, left, right)
    quickSort(arr, left, pivot - 1)
    quickSort(arr, pivot + 1, right)
  }
  return arr
}

function partition(arr, left, right) {
  const pivot = arr[right]
  for (let j = left; j < right; j++) {
    if (arr[j] < pivot) {
      [arr[left],arr[j]] = [arr[j],arr[left]]
      left++
    }
  }
  [arr[left],arr[right]] = [arr[right],arr[left]]
  return left
}
const arr = [8, 20, -2, 4, -6]
quickSort(arr)
console.log(arr) 
