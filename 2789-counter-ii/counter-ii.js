/**
* @param {integer} init
* @return { increment: Function, decrement: Function, reset: Function }
*/
var createCounter = function(init) {
    let initial = init
    return {
        increment(){
            return ++init
        } , 
        decrement(){
            return --init
        } ,
        reset(){
            init = initial
            return init
        }
    }
};