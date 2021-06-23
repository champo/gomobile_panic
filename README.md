# gomobile_panic

A small go lib is at `lib` with the minimal case that I found panics.

To build the lib:
```
cd lib && gomobile bind -target ios -o ../app/Panicker.framework -trimpath .
```

To test the panic, open the Xcode project inside `app/panic` and execute the test under `panicTests` in a real device.

The error looks like:
```
fatal error: bulkBarrierPreWrite: unaligned arguments

goroutine 17 [running, locked to thread]:
runtime.throw(0x1014aeaa4, 0x28)
	runtime/panic.go:1117 +0x54 fp=0x130582d30 sp=0x130582d00 pc=0x1014373d4
runtime.bulkBarrierPreWrite(0x16f5e483c, 0x130582e68, 0x8)
	runtime/mbitmap.go:554 +0x44c fp=0x130582dd0 sp=0x130582d30 pc=0x101419f0c
runtime.typedmemmove(0x1014e0000, 0x16f5e483c, 0x130582e68)
	runtime/mbarrier.go:161 +0xa4 fp=0x130582e10 sp=0x130582dd0 pc=0x1014190c4
_cgoexp_59f89a9c1f1d_proxypanicker_PanickerImpl_Panic(0x16f5e4824)
	_cgo_gotypes.go:183 +0xe8 fp=0x130582e80 sp=0x130582e10 pc=0x1014a3068
runtime.cgocallbackg1(0x1014a2f80, 0x16f5e4824, 0x0)
	runtime/cgocall.go:292 +0x140 fp=0x130582f40 sp=0x130582e80 pc=0x10140a9e0
runtime.cgocallbackg(0x1014a2f80, 0x16f5e4824, 0x0)
	runtime/cgocall.go:228 +0xb0 fp=0x130582fb0 sp=0x130582f40 pc=0x10140a810
runtime.cgocallback(0x0, 0x0, 0x0)
	runtime/asm_arm64.s:1055 +0x98 fp=0x130582fe0 sp=0x130582fb0 pc=0x1014687f8
runtime.goexit()
	runtime/asm_arm64.s:1130 +0x4 fp=0x130582fe0 sp=0x130582fe0 pc=0x1014688d4
```
