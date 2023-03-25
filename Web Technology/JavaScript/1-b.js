class Calculator {
    name = "Calculator";

    constructor(a, b) {
        this.a = a;
        this.b = b;
    }

    add() {
        return this.a + this.b;
    }

    subtract() {
        return this.a - this.b;
    }
}

var calculator = new Calculator(5, 3);
console.log(calculator.add());
console.log(calculator.subtract());