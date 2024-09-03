const merge = (left,right) => {
  let result = []
  while (left.length && right.length){
    if(left[0]<right[0]){
      result.push(left.shift())
    }
    else{
      result.push(right.shift())
    }
  }
  return [...result,...left,...right]
}
const mergeSort = (arr) => {
  if(arr.length<=1){
    return arr;
  }
  let mid = Math.floor(arr.length/2);
  let left = arr.slice(0,mid);
  let right = arr.slice(mid);
  return merge(mergeSort(left),mergeSort(right)); 
}
console.log(mergeSort([9,8,7,6,5,4,3,2,1]))
