var calculator = {
    name: "Calculator",
    a: 0,
    b: 0,

    add: function () {
        return this.a + this.b;
    },

    subtract: function () {
        return this.a - this.b;
    }
}

calculator.a = 5;
calculator.b = 3;

calculator.add(5, 3);
calculator.subtract(5, 3);