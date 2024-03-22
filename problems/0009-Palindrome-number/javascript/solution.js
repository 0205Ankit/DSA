var isPalindrome = function (x) {
  if (x < 0) {
    return false;
  } else {
    let number = x;
    let rev_num = 0;
    while (number) {
      rev_num = rev_num * 10 + (number % 10);
      number = Math.floor(number / 10);
    }

    if (number > Math.pow(2, 31) - 1 || number < -Math.pow(2, 31)) return false;

    if (rev_num === x) return true;
    else return false;
  }
};
