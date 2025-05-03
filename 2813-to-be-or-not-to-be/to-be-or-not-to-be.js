const expect = function(val) {
    return {
        toBe : (num) => {
            if(val !== num) throw new Error("Not Equal");
            return true;
        },
        notToBe : (num) => {
           if(val === num) throw new Error("Equal");
           return true;
        }
    }
};