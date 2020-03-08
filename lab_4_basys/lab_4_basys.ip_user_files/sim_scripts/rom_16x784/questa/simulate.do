onbreak {quit -f}
onerror {quit -f}

vsim -t 1ps -lib xil_defaultlib rom_16x784_opt

do {wave.do}

view wave
view structure
view signals

do {rom_16x784.udo}

run -all

quit -force
