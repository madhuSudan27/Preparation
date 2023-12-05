var createCounter = function(n) {
    var c=n;
    return function() {
        // return n++;
        return c++;
    };
};


var  n=10;
const counter = createCounter(n);
console.log(n);
console.log(counter()); // 10
console.log(counter()); // 11
console.log(counter()); // 12
console.log(n);
