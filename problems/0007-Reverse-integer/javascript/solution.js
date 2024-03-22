var reverse = function (x) {
  let ans = 0;
  while (x != 0) {
    ans = ans * 10 + (x % 10);
    x = Math.abs(x) < 10 ? 0 : Math.trunc(x / 10);
  }
  if (ans > Math.pow(2, 31) - 1 || ans < -Math.pow(2, 31)) {
    // checking if the no. lie within bounds
    return 0;
  }
  return ans;
};
