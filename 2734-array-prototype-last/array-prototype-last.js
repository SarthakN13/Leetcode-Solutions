/**
 * @return {null|boolean|number|string|Array|Object}
 */
Array.prototype.last = function() {
    let val = this.reverse()[0];
    if ([null, 0].includes(val)) return val;
    return val || -1;
};

/**
 * const arr = [1, 2, 3];
 * arr.last(); // 3
 */