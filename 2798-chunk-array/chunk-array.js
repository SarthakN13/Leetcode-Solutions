/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array}
 */
var chunk = function(arr, size) {
    let start = 0;
        const chunkArr = [];
        while (start < arr.length) {
            chunkArr.push(arr.slice(start, start + size));
            start += size;
        }
    return chunkArr;
};
