/**
 * @param {...(null|boolean|number|string|Array|Object)} args
 * @return {number}
 */
var argumentsLength = function(...args) {
	var x= args.length;
    return x
};

/**
 * argumentsLength(1, 2, 3); // 3
 */