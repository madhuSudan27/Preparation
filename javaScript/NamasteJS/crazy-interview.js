
function outest(){
    var c = 100;
    function outer(b){
        function inner(){
            console.log(a, b, c);
        }
        // var a = 10;
        let a = 10;
        return inner;
    }
    return outer;
}
// console.log(outer());
// outer()();
var fun = outest()('hello');
fun();


// create a counter using data hiding 

function counter(){
    let count = 0;
    return function increment(){
        count ++;
        console.log(count);
    }
}

var increment = counter();
increment();
increment();
increment();


// function constructor in javaScript 

function Counter(){
    var count  = 0;
    this.increment =()=>{
        count ++;
        console.log(count);
    }
    this.decrement =()=>{
        count --;
        console.log(count);
    }
}

var counter = new Counter();
counter.increment();
counter.decrement();



// disadvantage 
//  --> memory consumption is high

// garbage collector in js 
