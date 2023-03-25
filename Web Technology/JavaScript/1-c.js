function Calculator(a, b) {
    this.name = "Calculator";

    this.a = a;
    this.b = b;

    this.add = function () {
        return a + b;
    };

    this.subtract = function () {
        return a - b;
    };
}

var calculator = new Calculator(5, 3);
console.log(calculator.add());
console.log(calculator.subtract());