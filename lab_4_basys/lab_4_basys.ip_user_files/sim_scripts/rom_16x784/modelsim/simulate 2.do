onbreak {quit -f}
onerror {quit -f}

vsim -voptargs="+acc" -t 1ps -L xpm -L dist_mem_gen_v8_0_13 -L xil_defaultlib -L unisims_ver -L unimacro_ver -L secureip -lib xil_defaultlib xil_defaultlib.rom_16x784 xil_defaultlib.glbl

do {wave.do}

view wave
view structure
view signals

do {rom_16x784.udo}

run -all

quit -force
