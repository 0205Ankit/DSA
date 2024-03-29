function selectionSort() {
  const arr = [3, 12, 8, 4, 11, 1, 25];

  for (let i = 0; i <= arr.size() - 2; i++) {
    for (let j = i; j < arr.size(); j++) {
      if (arr[j] < arr[i]) {
        swap(arr[i], arr[j]);
      }
    }
  }

  return arr;
}
