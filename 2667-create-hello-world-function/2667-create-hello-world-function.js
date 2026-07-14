/**
 * @return {Function}
 */
var createHelloWorld = function() {
    
    return function(...args) {
    a ="Hello World";

    return a;
    }
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */