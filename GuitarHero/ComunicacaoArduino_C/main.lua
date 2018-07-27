local mostrabaleia = true
local baleia
local W, H = 400, 300
local leit, esc

local function toggle ()
  mostrabaleia = not mostrabaleia
end

function love.load() -- (Arduino/Genuino Mega or Mega 2560)
  print("Antes open")
  leit = io.open("/dev/ttyACM0","r+")
  print("depois open")
  print("Antes")
  a = assert(leit:read(1))
  print(a, "Depois")
--  esc = io.open("/dev/ttyACM0","w")
  baleia = love.graphics.newImage("whale.png")
  love.graphics.setBackgroundColor (0, 0, 0)
end

function love.update(dt)

--  if a=='1' then toggle() end
end

function love.draw()
  if mostrabaleia then
    love.graphics.draw(baleia, W/3, H/3, 0, 0.5)
  end
end

function love.keypressed (k)
--  if k  == "return" then esc:write("1\n") end
end
