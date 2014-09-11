module Vector2d

export Vector2D

type Vector2D
    x::Float64
    y::Float64
end

+(a::Vector2D, b::Vector2D) = Vector2D(a.x+b.x, a.y+b.y)

end