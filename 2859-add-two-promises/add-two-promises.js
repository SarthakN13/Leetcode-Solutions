/**
 * @param {Promise} promise1
 * @param {Promise} promise2
 * @return {Promise}
 */
var addTwoPromises = async function(promise1, promise2) {
     const [value1, value2] = await Promise.all([promise1, promise2]);
 const Promise1res = await promise1;
    const Promise2res = await promise2;
    const result = Promise1res + Promise2res

    return result
  };

/**
 * addTwoPromises(Promise.resolve(2), Promise.resolve(2))
 *   .then(console.log); // 4
 */