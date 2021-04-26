const imprimirSoma = function (a, b) {
    console.log(a + b)
}

imprimirSoma(2, 3)

// funçao arrow

const soma = (a, b) => {
    return a + b
}

console.log(soma(3, 3))

// retorno implíctito
const subtracao = (a, b) => a - b

console.log(subtracao(4, 1))

const imprimir = a => console.log(a)

imprimir('Olá')