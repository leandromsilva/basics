for(let i = 0; i < 10; i++){
    console.log(i)
}

console.log()

// console.log("i =", i) // erro, let só pode ser acessado dentro do escopo

const funcs = []
for(let i = 0; i < 10; i++){
    funcs.push(function(){
        console.log(i)
    })
}

funcs[2] () // no exemplo de let as duas apontam para o valor correto
funcs[8] ()