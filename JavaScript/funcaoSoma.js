// função sem retorno
function imprimirSoma(a, b) {
    console.log(a + b)
}

imprimirSoma(1, 2)
imprimirSoma(2) // resultado no a number pois o 2 vai ser somado com undefined
imprimirSoma(2, 2, 3, 4) // ele pega os dois primeiros parâmetros e ignora os outros 
imprimirSoma() // resultado not a number

// funão com retorno 
function soma(a, b = 0) { // b recebe um valor padrão 0
    return a + b;
}

console.log(soma(2 , 2))
console.log(soma(2)) // a = 2 e b = 0 (padrão)
console.log(soma())