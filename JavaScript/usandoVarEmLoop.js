for(var i = 0; i < 10; i++) 
{
    console.log(i)
}

console.log("i =", i)

const funcs = []
for(var i = 0; i < 10; i++){
    funcs.push(function(){
        console.log(i)
    })
}

funcs[2] () // no exemplo de var as duas apontam para o valor errado (10)
funcs[8] ()