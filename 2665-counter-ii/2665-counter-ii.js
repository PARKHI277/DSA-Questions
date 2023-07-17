/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let current_counter = init;
    return {
        increment: function() {
            current_counter = current_counter + 1;
            return current_counter;
        },
        reset: function() {
            current_counter = init;
            return current_counter;
        },
        decrement : function() {
            current_counter = current_counter - 1;
            return  current_counter;
        }
    }
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */
