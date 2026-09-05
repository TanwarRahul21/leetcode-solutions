/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    let words = s.trim().split(" ");
    let completword = words.filter(function(words) {
        return words !==""
    });
    return completword.reverse().join(" ");
};