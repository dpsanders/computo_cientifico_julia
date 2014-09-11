println(ARGS)

if length(ARGS) > 0
    N = int(ARGS[1])
else
    N = 100
    println("Sintaxis: julia sumar.jl N")
end

suma = 0

for n in 1:N
    suma += n
end

println(suma)
suma