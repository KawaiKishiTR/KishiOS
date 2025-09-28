GCC=gcc
CPARAMS=-m32 -fno-stack-protector -fno-builtin

ASM=nasm
ASMPARAMS=-f elf32

LINKER=ld
LINKERPARAMS=-m elf_i386 -T linker.ld


after: ./kernel
	mv kernel kawai/boot/kernel
	grub2-mkrescue -o Kawai.iso kawai/
#
# linker
#
./kernel:./kernel.o ./vga.o ./boot.o ./linker.ld
	$(LINKER) $(LINKERPARAMS) -o kernel boot.o kernel.o vga.o


#
# kernel
#
./kernel.o:./kernel.c
	$(GCC) $(CPARAMS) -c kernel.c -o kernel.o

#
# vga
#
./vga.o:./vga.c
	$(GCC) $(CPARAMS) -c vga.c -o vga.o

#
# bootloader
#
./boot.o:./boot.s
	$(ASM) $(ASMPARAMS) boot.s -o boot.o


run:
	qemu-system-i386 Kawai.iso