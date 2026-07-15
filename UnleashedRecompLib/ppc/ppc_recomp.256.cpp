#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8323A338"))) PPC_WEAK_FUNC(sub_8323A338);
PPC_FUNC_IMPL(__imp__sub_8323A338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-23696
	ctx.r3.s64 = r11.s64 + -23696;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A348"))) PPC_WEAK_FUNC(sub_8323A348);
PPC_FUNC_IMPL(__imp__sub_8323A348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-23632
	ctx.r3.s64 = r11.s64 + -23632;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A358"))) PPC_WEAK_FUNC(sub_8323A358);
PPC_FUNC_IMPL(__imp__sub_8323A358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-23496
	ctx.r3.s64 = r11.s64 + -23496;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A368"))) PPC_WEAK_FUNC(sub_8323A368);
PPC_FUNC_IMPL(__imp__sub_8323A368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82ae79b8
	sub_82AE79B8(ctx, base);
	// bl 0x82ae7f10
	sub_82AE7F10(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-23424
	ctx.r3.s64 = r11.s64 + -23424;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323A398"))) PPC_WEAK_FUNC(sub_8323A398);
PPC_FUNC_IMPL(__imp__sub_8323A398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-23384
	ctx.r3.s64 = r11.s64 + -23384;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A3A8"))) PPC_WEAK_FUNC(sub_8323A3A8);
PPC_FUNC_IMPL(__imp__sub_8323A3A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-23312
	ctx.r3.s64 = r11.s64 + -23312;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A3B8"))) PPC_WEAK_FUNC(sub_8323A3B8);
PPC_FUNC_IMPL(__imp__sub_8323A3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-23240
	ctx.r3.s64 = r11.s64 + -23240;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A3C8"))) PPC_WEAK_FUNC(sub_8323A3C8);
PPC_FUNC_IMPL(__imp__sub_8323A3C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-23168
	ctx.r3.s64 = r11.s64 + -23168;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A3D8"))) PPC_WEAK_FUNC(sub_8323A3D8);
PPC_FUNC_IMPL(__imp__sub_8323A3D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-23096
	ctx.r3.s64 = r11.s64 + -23096;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A3E8"))) PPC_WEAK_FUNC(sub_8323A3E8);
PPC_FUNC_IMPL(__imp__sub_8323A3E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-23024
	ctx.r3.s64 = r11.s64 + -23024;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A3F8"))) PPC_WEAK_FUNC(sub_8323A3F8);
PPC_FUNC_IMPL(__imp__sub_8323A3F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-22952
	ctx.r3.s64 = r11.s64 + -22952;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A408"))) PPC_WEAK_FUNC(sub_8323A408);
PPC_FUNC_IMPL(__imp__sub_8323A408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-8152
	ctx.r4.s64 = r11.s64 + -8152;
	// addi r3,r10,-3336
	ctx.r3.s64 = ctx.r10.s64 + -3336;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-22880
	ctx.r3.s64 = r11.s64 + -22880;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323A448"))) PPC_WEAK_FUNC(sub_8323A448);
PPC_FUNC_IMPL(__imp__sub_8323A448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,-22120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	f0.f64 = double(temp.f32);
	// addi r3,r8,-3224
	ctx.r3.s64 = ctx.r8.s64 + -3224;
	// lfs f12,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f13,-24784(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24784);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82e86550
	sub_82E86550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323A4B0"))) PPC_WEAK_FUNC(sub_8323A4B0);
PPC_FUNC_IMPL(__imp__sub_8323A4B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// lfs f0,-3780(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -3780);
	f0.f64 = double(temp.f32);
	// lfs f13,32448(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32448);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,-2980(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -2980, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323A4D0"))) PPC_WEAK_FUNC(sub_8323A4D0);
PPC_FUNC_IMPL(__imp__sub_8323A4D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r3,r11,-2836
	ctx.r3.s64 = r11.s64 + -2836;
	// b 0x82dfd900
	sub_82DFD900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A4E0"))) PPC_WEAK_FUNC(sub_8323A4E0);
PPC_FUNC_IMPL(__imp__sub_8323A4E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r3,r11,-2832
	ctx.r3.s64 = r11.s64 + -2832;
	// b 0x82dfd900
	sub_82DFD900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A4F0"))) PPC_WEAK_FUNC(sub_8323A4F0);
PPC_FUNC_IMPL(__imp__sub_8323A4F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r3,r11,-2828
	ctx.r3.s64 = r11.s64 + -2828;
	// b 0x82dfd900
	sub_82DFD900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A500"))) PPC_WEAK_FUNC(sub_8323A500);
PPC_FUNC_IMPL(__imp__sub_8323A500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r3,r11,-2824
	ctx.r3.s64 = r11.s64 + -2824;
	// b 0x82dfd900
	sub_82DFD900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A510"))) PPC_WEAK_FUNC(sub_8323A510);
PPC_FUNC_IMPL(__imp__sub_8323A510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r3,r11,-2820
	ctx.r3.s64 = r11.s64 + -2820;
	// b 0x82dfd900
	sub_82DFD900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A520"))) PPC_WEAK_FUNC(sub_8323A520);
PPC_FUNC_IMPL(__imp__sub_8323A520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r3,r11,-2816
	ctx.r3.s64 = r11.s64 + -2816;
	// b 0x82dfd900
	sub_82DFD900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A530"))) PPC_WEAK_FUNC(sub_8323A530);
PPC_FUNC_IMPL(__imp__sub_8323A530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r3,r11,-2812
	ctx.r3.s64 = r11.s64 + -2812;
	// b 0x82dfd900
	sub_82DFD900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A540"))) PPC_WEAK_FUNC(sub_8323A540);
PPC_FUNC_IMPL(__imp__sub_8323A540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r3,r11,-2808
	ctx.r3.s64 = r11.s64 + -2808;
	// b 0x82dfd900
	sub_82DFD900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A550"))) PPC_WEAK_FUNC(sub_8323A550);
PPC_FUNC_IMPL(__imp__sub_8323A550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r3,r11,-2804
	ctx.r3.s64 = r11.s64 + -2804;
	// b 0x82dfd900
	sub_82DFD900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A560"))) PPC_WEAK_FUNC(sub_8323A560);
PPC_FUNC_IMPL(__imp__sub_8323A560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r3,r11,-2800
	ctx.r3.s64 = r11.s64 + -2800;
	// b 0x82dfd900
	sub_82DFD900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A570"))) PPC_WEAK_FUNC(sub_8323A570);
PPC_FUNC_IMPL(__imp__sub_8323A570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r3,r11,-2796
	ctx.r3.s64 = r11.s64 + -2796;
	// b 0x82dfd900
	sub_82DFD900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A580"))) PPC_WEAK_FUNC(sub_8323A580);
PPC_FUNC_IMPL(__imp__sub_8323A580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r3,r11,-2792
	ctx.r3.s64 = r11.s64 + -2792;
	// b 0x82dfd900
	sub_82DFD900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A590"))) PPC_WEAK_FUNC(sub_8323A590);
PPC_FUNC_IMPL(__imp__sub_8323A590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r3,r11,-2788
	ctx.r3.s64 = r11.s64 + -2788;
	// b 0x82dfd900
	sub_82DFD900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A5A0"))) PPC_WEAK_FUNC(sub_8323A5A0);
PPC_FUNC_IMPL(__imp__sub_8323A5A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r3,r11,-2784
	ctx.r3.s64 = r11.s64 + -2784;
	// b 0x82dfd900
	sub_82DFD900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A5B0"))) PPC_WEAK_FUNC(sub_8323A5B0);
PPC_FUNC_IMPL(__imp__sub_8323A5B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-9928
	ctx.r4.s64 = r11.s64 + -9928;
	// addi r3,r10,-2332
	ctx.r3.s64 = ctx.r10.s64 + -2332;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A5C8"))) PPC_WEAK_FUNC(sub_8323A5C8);
PPC_FUNC_IMPL(__imp__sub_8323A5C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31943
	r11.s64 = -2093416448;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-2312
	ctx.r3.s64 = r11.s64 + -2312;
	// b 0x82e864a8
	sub_82E864A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A5D8"))) PPC_WEAK_FUNC(sub_8323A5D8);
PPC_FUNC_IMPL(__imp__sub_8323A5D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-22848
	ctx.r3.s64 = r11.s64 + -22848;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A5E8"))) PPC_WEAK_FUNC(sub_8323A5E8);
PPC_FUNC_IMPL(__imp__sub_8323A5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31943
	r11.s64 = -2093416448;
	// li r4,114
	ctx.r4.s64 = 114;
	// addi r3,r11,23828
	ctx.r3.s64 = r11.s64 + 23828;
	// b 0x82db22a8
	sub_82DB22A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A5F8"))) PPC_WEAK_FUNC(sub_8323A5F8);
PPC_FUNC_IMPL(__imp__sub_8323A5F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,23828
	ctx.r4.s64 = r11.s64 + 23828;
	// addi r3,r10,23872
	ctx.r3.s64 = ctx.r10.s64 + 23872;
	// b 0x82db2ee0
	sub_82DB2EE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A610"))) PPC_WEAK_FUNC(sub_8323A610);
PPC_FUNC_IMPL(__imp__sub_8323A610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31943
	r11.s64 = -2093416448;
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r3,r11,24160
	ctx.r3.s64 = r11.s64 + 24160;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x831b0ba0
	sub_831B0BA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A628"))) PPC_WEAK_FUNC(sub_8323A628);
PPC_FUNC_IMPL(__imp__sub_8323A628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r11,r11,-23084
	r11.s64 = r11.s64 + -23084;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x8324b58c
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-22816
	ctx.r3.s64 = r11.s64 + -22816;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323A660"))) PPC_WEAK_FUNC(sub_8323A660);
PPC_FUNC_IMPL(__imp__sub_8323A660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r3,r11,24368
	ctx.r3.s64 = r11.s64 + 24368;
	// bl 0x82df8798
	sub_82DF8798(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-22792
	ctx.r3.s64 = r11.s64 + -22792;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323A698"))) PPC_WEAK_FUNC(sub_8323A698);
PPC_FUNC_IMPL(__imp__sub_8323A698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-22776
	ctx.r3.s64 = r11.s64 + -22776;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A6A8"))) PPC_WEAK_FUNC(sub_8323A6A8);
PPC_FUNC_IMPL(__imp__sub_8323A6A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r3,r11,24552
	ctx.r3.s64 = r11.s64 + 24552;
	// bl 0x82df8798
	sub_82DF8798(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-22696
	ctx.r3.s64 = r11.s64 + -22696;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323A6E0"))) PPC_WEAK_FUNC(sub_8323A6E0);
PPC_FUNC_IMPL(__imp__sub_8323A6E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-22680
	ctx.r3.s64 = r11.s64 + -22680;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A6F0"))) PPC_WEAK_FUNC(sub_8323A6F0);
PPC_FUNC_IMPL(__imp__sub_8323A6F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r3,r11,24592
	ctx.r3.s64 = r11.s64 + 24592;
	// b 0x82dfd900
	sub_82DFD900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A700"))) PPC_WEAK_FUNC(sub_8323A700);
PPC_FUNC_IMPL(__imp__sub_8323A700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r3,r11,26792
	ctx.r3.s64 = r11.s64 + 26792;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-22648
	ctx.r3.s64 = r11.s64 + -22648;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323A738"))) PPC_WEAK_FUNC(sub_8323A738);
PPC_FUNC_IMPL(__imp__sub_8323A738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r3,r11,26796
	ctx.r3.s64 = r11.s64 + 26796;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-22632
	ctx.r3.s64 = r11.s64 + -22632;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323A770"))) PPC_WEAK_FUNC(sub_8323A770);
PPC_FUNC_IMPL(__imp__sub_8323A770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r3,r11,27000
	ctx.r3.s64 = r11.s64 + 27000;
	// b 0x82dfd900
	sub_82DFD900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A780"))) PPC_WEAK_FUNC(sub_8323A780);
PPC_FUNC_IMPL(__imp__sub_8323A780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-22328
	ctx.r3.s64 = r11.s64 + -22328;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A790"))) PPC_WEAK_FUNC(sub_8323A790);
PPC_FUNC_IMPL(__imp__sub_8323A790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,28220
	r11.s64 = r11.s64 + 28220;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8241f200
	sub_8241F200(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-22296
	ctx.r3.s64 = r11.s64 + -22296;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323A7E0"))) PPC_WEAK_FUNC(sub_8323A7E0);
PPC_FUNC_IMPL(__imp__sub_8323A7E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-25016
	ctx.r4.s64 = r11.s64 + -25016;
	// addi r3,r10,28248
	ctx.r3.s64 = ctx.r10.s64 + 28248;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A7F8"))) PPC_WEAK_FUNC(sub_8323A7F8);
PPC_FUNC_IMPL(__imp__sub_8323A7F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-25008
	ctx.r4.s64 = r11.s64 + -25008;
	// addi r3,r10,28252
	ctx.r3.s64 = ctx.r10.s64 + 28252;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A810"))) PPC_WEAK_FUNC(sub_8323A810);
PPC_FUNC_IMPL(__imp__sub_8323A810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-12248
	ctx.r4.s64 = r11.s64 + -12248;
	// addi r3,r10,28256
	ctx.r3.s64 = ctx.r10.s64 + 28256;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A828"))) PPC_WEAK_FUNC(sub_8323A828);
PPC_FUNC_IMPL(__imp__sub_8323A828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-9928
	ctx.r4.s64 = r11.s64 + -9928;
	// addi r3,r10,28260
	ctx.r3.s64 = ctx.r10.s64 + 28260;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A840"))) PPC_WEAK_FUNC(sub_8323A840);
PPC_FUNC_IMPL(__imp__sub_8323A840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-18512
	ctx.r4.s64 = r11.s64 + -18512;
	// addi r3,r10,28264
	ctx.r3.s64 = ctx.r10.s64 + 28264;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A858"))) PPC_WEAK_FUNC(sub_8323A858);
PPC_FUNC_IMPL(__imp__sub_8323A858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-12404
	ctx.r4.s64 = r11.s64 + -12404;
	// addi r3,r10,28268
	ctx.r3.s64 = ctx.r10.s64 + 28268;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A870"))) PPC_WEAK_FUNC(sub_8323A870);
PPC_FUNC_IMPL(__imp__sub_8323A870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,14124
	ctx.r4.s64 = r11.s64 + 14124;
	// addi r3,r10,28272
	ctx.r3.s64 = ctx.r10.s64 + 28272;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A888"))) PPC_WEAK_FUNC(sub_8323A888);
PPC_FUNC_IMPL(__imp__sub_8323A888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-12396
	ctx.r4.s64 = r11.s64 + -12396;
	// addi r3,r10,28276
	ctx.r3.s64 = ctx.r10.s64 + 28276;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A8A0"))) PPC_WEAK_FUNC(sub_8323A8A0);
PPC_FUNC_IMPL(__imp__sub_8323A8A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-12384
	ctx.r4.s64 = r11.s64 + -12384;
	// addi r3,r10,28280
	ctx.r3.s64 = ctx.r10.s64 + 28280;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A8B8"))) PPC_WEAK_FUNC(sub_8323A8B8);
PPC_FUNC_IMPL(__imp__sub_8323A8B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-12364
	ctx.r4.s64 = r11.s64 + -12364;
	// addi r3,r10,28284
	ctx.r3.s64 = ctx.r10.s64 + 28284;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A8D0"))) PPC_WEAK_FUNC(sub_8323A8D0);
PPC_FUNC_IMPL(__imp__sub_8323A8D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-18512
	ctx.r4.s64 = r11.s64 + -18512;
	// addi r3,r10,28288
	ctx.r3.s64 = ctx.r10.s64 + 28288;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A8E8"))) PPC_WEAK_FUNC(sub_8323A8E8);
PPC_FUNC_IMPL(__imp__sub_8323A8E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-12404
	ctx.r4.s64 = r11.s64 + -12404;
	// addi r3,r10,28292
	ctx.r3.s64 = ctx.r10.s64 + 28292;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A900"))) PPC_WEAK_FUNC(sub_8323A900);
PPC_FUNC_IMPL(__imp__sub_8323A900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,14124
	ctx.r4.s64 = r11.s64 + 14124;
	// addi r3,r10,28296
	ctx.r3.s64 = ctx.r10.s64 + 28296;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A918"))) PPC_WEAK_FUNC(sub_8323A918);
PPC_FUNC_IMPL(__imp__sub_8323A918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-12396
	ctx.r4.s64 = r11.s64 + -12396;
	// addi r3,r10,28300
	ctx.r3.s64 = ctx.r10.s64 + 28300;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A930"))) PPC_WEAK_FUNC(sub_8323A930);
PPC_FUNC_IMPL(__imp__sub_8323A930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-12384
	ctx.r4.s64 = r11.s64 + -12384;
	// addi r3,r10,28304
	ctx.r3.s64 = ctx.r10.s64 + 28304;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A948"))) PPC_WEAK_FUNC(sub_8323A948);
PPC_FUNC_IMPL(__imp__sub_8323A948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-12364
	ctx.r4.s64 = r11.s64 + -12364;
	// addi r3,r10,28308
	ctx.r3.s64 = ctx.r10.s64 + 28308;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A960"))) PPC_WEAK_FUNC(sub_8323A960);
PPC_FUNC_IMPL(__imp__sub_8323A960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-25016
	ctx.r4.s64 = r11.s64 + -25016;
	// addi r3,r10,28336
	ctx.r3.s64 = ctx.r10.s64 + 28336;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A978"))) PPC_WEAK_FUNC(sub_8323A978);
PPC_FUNC_IMPL(__imp__sub_8323A978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-25008
	ctx.r4.s64 = r11.s64 + -25008;
	// addi r3,r10,28340
	ctx.r3.s64 = ctx.r10.s64 + 28340;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A990"))) PPC_WEAK_FUNC(sub_8323A990);
PPC_FUNC_IMPL(__imp__sub_8323A990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-12248
	ctx.r4.s64 = r11.s64 + -12248;
	// addi r3,r10,28344
	ctx.r3.s64 = ctx.r10.s64 + 28344;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A9A8"))) PPC_WEAK_FUNC(sub_8323A9A8);
PPC_FUNC_IMPL(__imp__sub_8323A9A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-9732
	ctx.r4.s64 = r11.s64 + -9732;
	// addi r3,r10,28348
	ctx.r3.s64 = ctx.r10.s64 + 28348;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A9C0"))) PPC_WEAK_FUNC(sub_8323A9C0);
PPC_FUNC_IMPL(__imp__sub_8323A9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-23636
	ctx.r4.s64 = r11.s64 + -23636;
	// addi r3,r10,28352
	ctx.r3.s64 = ctx.r10.s64 + 28352;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A9D8"))) PPC_WEAK_FUNC(sub_8323A9D8);
PPC_FUNC_IMPL(__imp__sub_8323A9D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-23648
	ctx.r4.s64 = r11.s64 + -23648;
	// addi r3,r10,28356
	ctx.r3.s64 = ctx.r10.s64 + 28356;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A9F0"))) PPC_WEAK_FUNC(sub_8323A9F0);
PPC_FUNC_IMPL(__imp__sub_8323A9F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-9928
	ctx.r4.s64 = r11.s64 + -9928;
	// addi r3,r10,28360
	ctx.r3.s64 = ctx.r10.s64 + 28360;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323AA08"))) PPC_WEAK_FUNC(sub_8323AA08);
PPC_FUNC_IMPL(__imp__sub_8323AA08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-25016
	ctx.r4.s64 = r11.s64 + -25016;
	// addi r3,r10,28364
	ctx.r3.s64 = ctx.r10.s64 + 28364;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323AA20"))) PPC_WEAK_FUNC(sub_8323AA20);
PPC_FUNC_IMPL(__imp__sub_8323AA20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-25008
	ctx.r4.s64 = r11.s64 + -25008;
	// addi r3,r10,28368
	ctx.r3.s64 = ctx.r10.s64 + 28368;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323AA38"))) PPC_WEAK_FUNC(sub_8323AA38);
PPC_FUNC_IMPL(__imp__sub_8323AA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-12248
	ctx.r4.s64 = r11.s64 + -12248;
	// addi r3,r10,28372
	ctx.r3.s64 = ctx.r10.s64 + 28372;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323AA50"))) PPC_WEAK_FUNC(sub_8323AA50);
PPC_FUNC_IMPL(__imp__sub_8323AA50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-9928
	ctx.r4.s64 = r11.s64 + -9928;
	// addi r3,r10,28376
	ctx.r3.s64 = ctx.r10.s64 + 28376;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323AA68"))) PPC_WEAK_FUNC(sub_8323AA68);
PPC_FUNC_IMPL(__imp__sub_8323AA68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-22248
	ctx.r3.s64 = r11.s64 + -22248;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323AA78"))) PPC_WEAK_FUNC(sub_8323AA78);
PPC_FUNC_IMPL(__imp__sub_8323AA78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-25016
	ctx.r4.s64 = r11.s64 + -25016;
	// addi r3,r10,28424
	ctx.r3.s64 = ctx.r10.s64 + 28424;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323AA90"))) PPC_WEAK_FUNC(sub_8323AA90);
PPC_FUNC_IMPL(__imp__sub_8323AA90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-25008
	ctx.r4.s64 = r11.s64 + -25008;
	// addi r3,r10,28428
	ctx.r3.s64 = ctx.r10.s64 + 28428;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323AAA8"))) PPC_WEAK_FUNC(sub_8323AAA8);
PPC_FUNC_IMPL(__imp__sub_8323AAA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-12248
	ctx.r4.s64 = r11.s64 + -12248;
	// addi r3,r10,28432
	ctx.r3.s64 = ctx.r10.s64 + 28432;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323AAC0"))) PPC_WEAK_FUNC(sub_8323AAC0);
PPC_FUNC_IMPL(__imp__sub_8323AAC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-14768
	ctx.r4.s64 = r11.s64 + -14768;
	// addi r3,r10,28436
	ctx.r3.s64 = ctx.r10.s64 + 28436;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323AAD8"))) PPC_WEAK_FUNC(sub_8323AAD8);
PPC_FUNC_IMPL(__imp__sub_8323AAD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-12052
	ctx.r4.s64 = r11.s64 + -12052;
	// addi r3,r10,28440
	ctx.r3.s64 = ctx.r10.s64 + 28440;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323AAF0"))) PPC_WEAK_FUNC(sub_8323AAF0);
PPC_FUNC_IMPL(__imp__sub_8323AAF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-12036
	ctx.r4.s64 = r11.s64 + -12036;
	// addi r3,r10,28444
	ctx.r3.s64 = ctx.r10.s64 + 28444;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323AB08"))) PPC_WEAK_FUNC(sub_8323AB08);
PPC_FUNC_IMPL(__imp__sub_8323AB08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,29424
	ctx.r4.s64 = r11.s64 + 29424;
	// addi r3,r10,28448
	ctx.r3.s64 = ctx.r10.s64 + 28448;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323AB20"))) PPC_WEAK_FUNC(sub_8323AB20);
PPC_FUNC_IMPL(__imp__sub_8323AB20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-9928
	ctx.r4.s64 = r11.s64 + -9928;
	// addi r3,r10,28488
	ctx.r3.s64 = ctx.r10.s64 + 28488;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323AB38"))) PPC_WEAK_FUNC(sub_8323AB38);
PPC_FUNC_IMPL(__imp__sub_8323AB38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-8772
	ctx.r4.s64 = r11.s64 + -8772;
	// addi r3,r10,28492
	ctx.r3.s64 = ctx.r10.s64 + 28492;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323AB50"))) PPC_WEAK_FUNC(sub_8323AB50);
PPC_FUNC_IMPL(__imp__sub_8323AB50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-18512
	ctx.r4.s64 = r11.s64 + -18512;
	// addi r3,r10,28496
	ctx.r3.s64 = ctx.r10.s64 + 28496;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323AB68"))) PPC_WEAK_FUNC(sub_8323AB68);
PPC_FUNC_IMPL(__imp__sub_8323AB68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-12404
	ctx.r4.s64 = r11.s64 + -12404;
	// addi r3,r10,28500
	ctx.r3.s64 = ctx.r10.s64 + 28500;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323AB80"))) PPC_WEAK_FUNC(sub_8323AB80);
PPC_FUNC_IMPL(__imp__sub_8323AB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,14124
	ctx.r4.s64 = r11.s64 + 14124;
	// addi r3,r10,28504
	ctx.r3.s64 = ctx.r10.s64 + 28504;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323AB98"))) PPC_WEAK_FUNC(sub_8323AB98);
PPC_FUNC_IMPL(__imp__sub_8323AB98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-12396
	ctx.r4.s64 = r11.s64 + -12396;
	// addi r3,r10,28508
	ctx.r3.s64 = ctx.r10.s64 + 28508;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323ABB0"))) PPC_WEAK_FUNC(sub_8323ABB0);
PPC_FUNC_IMPL(__imp__sub_8323ABB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-12384
	ctx.r4.s64 = r11.s64 + -12384;
	// addi r3,r10,28512
	ctx.r3.s64 = ctx.r10.s64 + 28512;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323ABC8"))) PPC_WEAK_FUNC(sub_8323ABC8);
PPC_FUNC_IMPL(__imp__sub_8323ABC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-12364
	ctx.r4.s64 = r11.s64 + -12364;
	// addi r3,r10,28516
	ctx.r3.s64 = ctx.r10.s64 + 28516;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323ABE0"))) PPC_WEAK_FUNC(sub_8323ABE0);
PPC_FUNC_IMPL(__imp__sub_8323ABE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-10908
	ctx.r4.s64 = r11.s64 + -10908;
	// addi r3,r10,28536
	ctx.r3.s64 = ctx.r10.s64 + 28536;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323ABF8"))) PPC_WEAK_FUNC(sub_8323ABF8);
PPC_FUNC_IMPL(__imp__sub_8323ABF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-10896
	ctx.r4.s64 = r11.s64 + -10896;
	// addi r3,r10,28540
	ctx.r3.s64 = ctx.r10.s64 + 28540;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323AC10"))) PPC_WEAK_FUNC(sub_8323AC10);
PPC_FUNC_IMPL(__imp__sub_8323AC10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-10884
	ctx.r4.s64 = r11.s64 + -10884;
	// addi r3,r10,28544
	ctx.r3.s64 = ctx.r10.s64 + 28544;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323AC28"))) PPC_WEAK_FUNC(sub_8323AC28);
PPC_FUNC_IMPL(__imp__sub_8323AC28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-10872
	ctx.r4.s64 = r11.s64 + -10872;
	// addi r3,r10,28548
	ctx.r3.s64 = ctx.r10.s64 + 28548;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323AC40"))) PPC_WEAK_FUNC(sub_8323AC40);
PPC_FUNC_IMPL(__imp__sub_8323AC40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-10860
	ctx.r4.s64 = r11.s64 + -10860;
	// addi r3,r10,28552
	ctx.r3.s64 = ctx.r10.s64 + 28552;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323AC58"))) PPC_WEAK_FUNC(sub_8323AC58);
PPC_FUNC_IMPL(__imp__sub_8323AC58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-10848
	ctx.r4.s64 = r11.s64 + -10848;
	// addi r3,r10,28556
	ctx.r3.s64 = ctx.r10.s64 + 28556;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323AC70"))) PPC_WEAK_FUNC(sub_8323AC70);
PPC_FUNC_IMPL(__imp__sub_8323AC70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-10836
	ctx.r4.s64 = r11.s64 + -10836;
	// addi r3,r10,28560
	ctx.r3.s64 = ctx.r10.s64 + 28560;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323AC88"))) PPC_WEAK_FUNC(sub_8323AC88);
PPC_FUNC_IMPL(__imp__sub_8323AC88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-10824
	ctx.r4.s64 = r11.s64 + -10824;
	// addi r3,r10,28564
	ctx.r3.s64 = ctx.r10.s64 + 28564;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323ACA0"))) PPC_WEAK_FUNC(sub_8323ACA0);
PPC_FUNC_IMPL(__imp__sub_8323ACA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-10812
	ctx.r4.s64 = r11.s64 + -10812;
	// addi r3,r10,28568
	ctx.r3.s64 = ctx.r10.s64 + 28568;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323ACB8"))) PPC_WEAK_FUNC(sub_8323ACB8);
PPC_FUNC_IMPL(__imp__sub_8323ACB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-10800
	ctx.r4.s64 = r11.s64 + -10800;
	// addi r3,r10,28572
	ctx.r3.s64 = ctx.r10.s64 + 28572;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323ACD0"))) PPC_WEAK_FUNC(sub_8323ACD0);
PPC_FUNC_IMPL(__imp__sub_8323ACD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-10788
	ctx.r4.s64 = r11.s64 + -10788;
	// addi r3,r10,28576
	ctx.r3.s64 = ctx.r10.s64 + 28576;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323ACE8"))) PPC_WEAK_FUNC(sub_8323ACE8);
PPC_FUNC_IMPL(__imp__sub_8323ACE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-10776
	ctx.r4.s64 = r11.s64 + -10776;
	// addi r3,r10,28580
	ctx.r3.s64 = ctx.r10.s64 + 28580;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323AD00"))) PPC_WEAK_FUNC(sub_8323AD00);
PPC_FUNC_IMPL(__imp__sub_8323AD00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-10764
	ctx.r4.s64 = r11.s64 + -10764;
	// addi r3,r10,28584
	ctx.r3.s64 = ctx.r10.s64 + 28584;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323AD18"))) PPC_WEAK_FUNC(sub_8323AD18);
PPC_FUNC_IMPL(__imp__sub_8323AD18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-10752
	ctx.r4.s64 = r11.s64 + -10752;
	// addi r3,r10,28588
	ctx.r3.s64 = ctx.r10.s64 + 28588;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323AD30"))) PPC_WEAK_FUNC(sub_8323AD30);
PPC_FUNC_IMPL(__imp__sub_8323AD30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-10740
	ctx.r4.s64 = r11.s64 + -10740;
	// addi r3,r10,28592
	ctx.r3.s64 = ctx.r10.s64 + 28592;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323AD48"))) PPC_WEAK_FUNC(sub_8323AD48);
PPC_FUNC_IMPL(__imp__sub_8323AD48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-10728
	ctx.r4.s64 = r11.s64 + -10728;
	// addi r3,r10,28596
	ctx.r3.s64 = ctx.r10.s64 + 28596;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323AD60"))) PPC_WEAK_FUNC(sub_8323AD60);
PPC_FUNC_IMPL(__imp__sub_8323AD60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-10716
	ctx.r4.s64 = r11.s64 + -10716;
	// addi r3,r10,28600
	ctx.r3.s64 = ctx.r10.s64 + 28600;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323AD78"))) PPC_WEAK_FUNC(sub_8323AD78);
PPC_FUNC_IMPL(__imp__sub_8323AD78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-10708
	ctx.r4.s64 = r11.s64 + -10708;
	// addi r3,r10,28604
	ctx.r3.s64 = ctx.r10.s64 + 28604;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323AD90"))) PPC_WEAK_FUNC(sub_8323AD90);
PPC_FUNC_IMPL(__imp__sub_8323AD90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-10692
	ctx.r4.s64 = r11.s64 + -10692;
	// addi r3,r10,28608
	ctx.r3.s64 = ctx.r10.s64 + 28608;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323ADA8"))) PPC_WEAK_FUNC(sub_8323ADA8);
PPC_FUNC_IMPL(__imp__sub_8323ADA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-10676
	ctx.r4.s64 = r11.s64 + -10676;
	// addi r3,r10,28612
	ctx.r3.s64 = ctx.r10.s64 + 28612;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323ADC0"))) PPC_WEAK_FUNC(sub_8323ADC0);
PPC_FUNC_IMPL(__imp__sub_8323ADC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-18512
	ctx.r4.s64 = r11.s64 + -18512;
	// addi r3,r10,28616
	ctx.r3.s64 = ctx.r10.s64 + 28616;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323ADD8"))) PPC_WEAK_FUNC(sub_8323ADD8);
PPC_FUNC_IMPL(__imp__sub_8323ADD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-12404
	ctx.r4.s64 = r11.s64 + -12404;
	// addi r3,r10,28620
	ctx.r3.s64 = ctx.r10.s64 + 28620;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323ADF0"))) PPC_WEAK_FUNC(sub_8323ADF0);
PPC_FUNC_IMPL(__imp__sub_8323ADF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,14124
	ctx.r4.s64 = r11.s64 + 14124;
	// addi r3,r10,28624
	ctx.r3.s64 = ctx.r10.s64 + 28624;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323AE08"))) PPC_WEAK_FUNC(sub_8323AE08);
PPC_FUNC_IMPL(__imp__sub_8323AE08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-12396
	ctx.r4.s64 = r11.s64 + -12396;
	// addi r3,r10,28628
	ctx.r3.s64 = ctx.r10.s64 + 28628;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323AE20"))) PPC_WEAK_FUNC(sub_8323AE20);
PPC_FUNC_IMPL(__imp__sub_8323AE20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-12384
	ctx.r4.s64 = r11.s64 + -12384;
	// addi r3,r10,28632
	ctx.r3.s64 = ctx.r10.s64 + 28632;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323AE38"))) PPC_WEAK_FUNC(sub_8323AE38);
PPC_FUNC_IMPL(__imp__sub_8323AE38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-12364
	ctx.r4.s64 = r11.s64 + -12364;
	// addi r3,r10,28636
	ctx.r3.s64 = ctx.r10.s64 + 28636;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323AE50"))) PPC_WEAK_FUNC(sub_8323AE50);
PPC_FUNC_IMPL(__imp__sub_8323AE50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r15{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x831b0af4
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r6,-31949
	ctx.r6.s64 = -2093809664;
	// lis r3,-31943
	ctx.r3.s64 = -2093416448;
	// lis r31,-31943
	r31.s64 = -2093416448;
	// lwz r8,28536(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 28536);
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// lwz r11,28616(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28616);
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r25,r6,-18952
	r25.s64 = ctx.r6.s64 + -18952;
	// lis r7,-31943
	ctx.r7.s64 = -2093416448;
	// lis r5,-31943
	ctx.r5.s64 = -2093416448;
	// stw r8,-18952(r6)
	PPC_STORE_U32(ctx.r6.u32 + -18952, ctx.r8.u32);
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// lwz r6,28544(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28544);
	// lis r4,-31943
	ctx.r4.s64 = -2093416448;
	// lwz r10,28620(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28620);
	// lis r30,-31943
	r30.s64 = -2093416448;
	// lwz r3,28556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28556);
	// lis r29,-31943
	r29.s64 = -2093416448;
	// lwz r9,28624(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28624);
	// lis r28,-31943
	r28.s64 = -2093416448;
	// lwz r31,28560(r8)
	r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28560);
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// lis r27,-31943
	r27.s64 = -2093416448;
	// lwz r7,28540(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28540);
	// lis r26,-31943
	r26.s64 = -2093416448;
	// lwz r5,28548(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28548);
	// lis r24,-31943
	r24.s64 = -2093416448;
	// lwz r4,28552(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28552);
	// lis r23,-31943
	r23.s64 = -2093416448;
	// stw r9,132(r25)
	PPC_STORE_U32(r25.u32 + 132, ctx.r9.u32);
	// stw r9,148(r25)
	PPC_STORE_U32(r25.u32 + 148, ctx.r9.u32);
	// lis r22,-31943
	r22.s64 = -2093416448;
	// stw r9,164(r25)
	PPC_STORE_U32(r25.u32 + 164, ctx.r9.u32);
	// lis r21,-31943
	r21.s64 = -2093416448;
	// stw r9,180(r25)
	PPC_STORE_U32(r25.u32 + 180, ctx.r9.u32);
	// lis r20,-31943
	r20.s64 = -2093416448;
	// lwz r30,28564(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 28564);
	// lis r19,-31943
	r19.s64 = -2093416448;
	// lwz r9,28584(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28584);
	// lis r18,-31943
	r18.s64 = -2093416448;
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
	// lis r17,-31943
	r17.s64 = -2093416448;
	// stw r11,20(r25)
	PPC_STORE_U32(r25.u32 + 20, r11.u32);
	// lis r16,-31943
	r16.s64 = -2093416448;
	// stw r11,36(r25)
	PPC_STORE_U32(r25.u32 + 36, r11.u32);
	// lis r15,-31943
	r15.s64 = -2093416448;
	// stw r11,52(r25)
	PPC_STORE_U32(r25.u32 + 52, r11.u32);
	// lwz r29,28568(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 28568);
	// lwz r28,28572(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 28572);
	// lwz r27,28576(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + 28576);
	// lwz r26,28580(r26)
	r26.u64 = PPC_LOAD_U32(r26.u32 + 28580);
	// lwz r11,28628(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 28628);
	// lwz r8,28588(r23)
	ctx.r8.u64 = PPC_LOAD_U32(r23.u32 + 28588);
	// stw r7,16(r25)
	PPC_STORE_U32(r25.u32 + 16, ctx.r7.u32);
	// stw r6,32(r25)
	PPC_STORE_U32(r25.u32 + 32, ctx.r6.u32);
	// stw r5,48(r25)
	PPC_STORE_U32(r25.u32 + 48, ctx.r5.u32);
	// stw r4,64(r25)
	PPC_STORE_U32(r25.u32 + 64, ctx.r4.u32);
	// stw r10,68(r25)
	PPC_STORE_U32(r25.u32 + 68, ctx.r10.u32);
	// stw r3,80(r25)
	PPC_STORE_U32(r25.u32 + 80, ctx.r3.u32);
	// stw r10,84(r25)
	PPC_STORE_U32(r25.u32 + 84, ctx.r10.u32);
	// stw r31,96(r25)
	PPC_STORE_U32(r25.u32 + 96, r31.u32);
	// stw r10,100(r25)
	PPC_STORE_U32(r25.u32 + 100, ctx.r10.u32);
	// stw r30,112(r25)
	PPC_STORE_U32(r25.u32 + 112, r30.u32);
	// stw r10,116(r25)
	PPC_STORE_U32(r25.u32 + 116, ctx.r10.u32);
	// lwz r7,28592(r22)
	ctx.r7.u64 = PPC_LOAD_U32(r22.u32 + 28592);
	// lwz r6,28596(r21)
	ctx.r6.u64 = PPC_LOAD_U32(r21.u32 + 28596);
	// lwz r5,28604(r20)
	ctx.r5.u64 = PPC_LOAD_U32(r20.u32 + 28604);
	// lwz r10,28632(r19)
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + 28632);
	// lwz r4,28608(r18)
	ctx.r4.u64 = PPC_LOAD_U32(r18.u32 + 28608);
	// lwz r3,28612(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 28612);
	// lwz r31,28600(r16)
	r31.u64 = PPC_LOAD_U32(r16.u32 + 28600);
	// lwz r30,28636(r15)
	r30.u64 = PPC_LOAD_U32(r15.u32 + 28636);
	// stw r29,128(r25)
	PPC_STORE_U32(r25.u32 + 128, r29.u32);
	// stw r28,144(r25)
	PPC_STORE_U32(r25.u32 + 144, r28.u32);
	// stw r27,160(r25)
	PPC_STORE_U32(r25.u32 + 160, r27.u32);
	// stw r26,176(r25)
	PPC_STORE_U32(r25.u32 + 176, r26.u32);
	// stw r9,192(r25)
	PPC_STORE_U32(r25.u32 + 192, ctx.r9.u32);
	// stw r11,196(r25)
	PPC_STORE_U32(r25.u32 + 196, r11.u32);
	// stw r8,208(r25)
	PPC_STORE_U32(r25.u32 + 208, ctx.r8.u32);
	// stw r11,212(r25)
	PPC_STORE_U32(r25.u32 + 212, r11.u32);
	// stw r7,224(r25)
	PPC_STORE_U32(r25.u32 + 224, ctx.r7.u32);
	// stw r11,228(r25)
	PPC_STORE_U32(r25.u32 + 228, r11.u32);
	// stw r6,240(r25)
	PPC_STORE_U32(r25.u32 + 240, ctx.r6.u32);
	// stw r11,244(r25)
	PPC_STORE_U32(r25.u32 + 244, r11.u32);
	// stw r5,256(r25)
	PPC_STORE_U32(r25.u32 + 256, ctx.r5.u32);
	// stw r10,260(r25)
	PPC_STORE_U32(r25.u32 + 260, ctx.r10.u32);
	// stw r4,272(r25)
	PPC_STORE_U32(r25.u32 + 272, ctx.r4.u32);
	// stw r10,276(r25)
	PPC_STORE_U32(r25.u32 + 276, ctx.r10.u32);
	// stw r3,288(r25)
	PPC_STORE_U32(r25.u32 + 288, ctx.r3.u32);
	// stw r10,292(r25)
	PPC_STORE_U32(r25.u32 + 292, ctx.r10.u32);
	// stw r31,304(r25)
	PPC_STORE_U32(r25.u32 + 304, r31.u32);
	// stw r30,308(r25)
	PPC_STORE_U32(r25.u32 + 308, r30.u32);
	// b 0x831b0b44
	return;
}

__attribute__((alias("__imp__sub_8323AFD8"))) PPC_WEAK_FUNC(sub_8323AFD8);
PPC_FUNC_IMPL(__imp__sub_8323AFD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// li r31,11
	r31.s64 = 11;
	// addi r30,r11,28868
	r30.s64 = r11.s64 + 28868;
loc_8323AFF8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bge 0x8323aff8
	if (!cr0.lt) goto loc_8323AFF8;
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-22232
	ctx.r3.s64 = r11.s64 + -22232;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323B030"))) PPC_WEAK_FUNC(sub_8323B030);
PPC_FUNC_IMPL(__imp__sub_8323B030) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// li r31,11
	r31.s64 = 11;
	// addi r30,r11,28916
	r30.s64 = r11.s64 + 28916;
loc_8323B050:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bge 0x8323b050
	if (!cr0.lt) goto loc_8323B050;
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-22152
	ctx.r3.s64 = r11.s64 + -22152;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323B088"))) PPC_WEAK_FUNC(sub_8323B088);
PPC_FUNC_IMPL(__imp__sub_8323B088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-22056
	ctx.r3.s64 = r11.s64 + -22056;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323B098"))) PPC_WEAK_FUNC(sub_8323B098);
PPC_FUNC_IMPL(__imp__sub_8323B098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// addi r3,r9,29088
	ctx.r3.s64 = ctx.r9.s64 + 29088;
	// lfs f12,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	ctx.f11.f64 = double(temp.f32);
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// fmr f7,f12
	ctx.f7.f64 = ctx.f12.f64;
	// fmr f6,f11
	ctx.f6.f64 = ctx.f11.f64;
	// fmr f5,f12
	ctx.f5.f64 = ctx.f12.f64;
	// fmr f4,f12
	ctx.f4.f64 = ctx.f12.f64;
	// fmr f3,f12
	ctx.f3.f64 = ctx.f12.f64;
	// fmr f2,f12
	ctx.f2.f64 = ctx.f12.f64;
	// fmr f1,f11
	ctx.f1.f64 = ctx.f11.f64;
	// bl 0x822ea1b8
	sub_822EA1B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323B0F8"))) PPC_WEAK_FUNC(sub_8323B0F8);
PPC_FUNC_IMPL(__imp__sub_8323B0F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r3,r10,29152
	ctx.r3.s64 = ctx.r10.s64 + 29152;
	// lfs f12,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f12.f64 = double(temp.f32);
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// fmr f7,f12
	ctx.f7.f64 = ctx.f12.f64;
	// fmr f6,f12
	ctx.f6.f64 = ctx.f12.f64;
	// fmr f5,f12
	ctx.f5.f64 = ctx.f12.f64;
	// fmr f4,f12
	ctx.f4.f64 = ctx.f12.f64;
	// fmr f3,f12
	ctx.f3.f64 = ctx.f12.f64;
	// fmr f2,f12
	ctx.f2.f64 = ctx.f12.f64;
	// fmr f1,f12
	ctx.f1.f64 = ctx.f12.f64;
	// bl 0x822ea1b8
	sub_822EA1B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323B158"))) PPC_WEAK_FUNC(sub_8323B158);
PPC_FUNC_IMPL(__imp__sub_8323B158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-9928
	ctx.r4.s64 = r11.s64 + -9928;
	// addi r3,r10,29276
	ctx.r3.s64 = ctx.r10.s64 + 29276;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323B170"))) PPC_WEAK_FUNC(sub_8323B170);
PPC_FUNC_IMPL(__imp__sub_8323B170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-25008
	ctx.r4.s64 = r11.s64 + -25008;
	// addi r3,r10,29288
	ctx.r3.s64 = ctx.r10.s64 + 29288;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323B188"))) PPC_WEAK_FUNC(sub_8323B188);
PPC_FUNC_IMPL(__imp__sub_8323B188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-12248
	ctx.r4.s64 = r11.s64 + -12248;
	// addi r3,r10,29292
	ctx.r3.s64 = ctx.r10.s64 + 29292;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323B1A0"))) PPC_WEAK_FUNC(sub_8323B1A0);
PPC_FUNC_IMPL(__imp__sub_8323B1A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-25016
	ctx.r4.s64 = r11.s64 + -25016;
	// addi r3,r10,29296
	ctx.r3.s64 = ctx.r10.s64 + 29296;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323B1B8"))) PPC_WEAK_FUNC(sub_8323B1B8);
PPC_FUNC_IMPL(__imp__sub_8323B1B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-9928
	ctx.r4.s64 = r11.s64 + -9928;
	// addi r3,r10,29332
	ctx.r3.s64 = ctx.r10.s64 + 29332;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323B1D0"))) PPC_WEAK_FUNC(sub_8323B1D0);
PPC_FUNC_IMPL(__imp__sub_8323B1D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-25016
	ctx.r4.s64 = r11.s64 + -25016;
	// addi r3,r10,29336
	ctx.r3.s64 = ctx.r10.s64 + 29336;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323B1E8"))) PPC_WEAK_FUNC(sub_8323B1E8);
PPC_FUNC_IMPL(__imp__sub_8323B1E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-25008
	ctx.r4.s64 = r11.s64 + -25008;
	// addi r3,r10,29340
	ctx.r3.s64 = ctx.r10.s64 + 29340;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323B200"))) PPC_WEAK_FUNC(sub_8323B200);
PPC_FUNC_IMPL(__imp__sub_8323B200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r4,r11,-12248
	ctx.r4.s64 = r11.s64 + -12248;
	// addi r3,r10,29344
	ctx.r3.s64 = ctx.r10.s64 + 29344;
	// b 0x82e014d8
	sub_82E014D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323B218"))) PPC_WEAK_FUNC(sub_8323B218);
PPC_FUNC_IMPL(__imp__sub_8323B218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r3,r11,29384
	ctx.r3.s64 = r11.s64 + 29384;
	// b 0x82dfd900
	sub_82DFD900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323B228"))) PPC_WEAK_FUNC(sub_8323B228);
PPC_FUNC_IMPL(__imp__sub_8323B228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r9,r11,-14896
	ctx.r9.s64 = r11.s64 + -14896;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// addi r5,r10,29456
	ctx.r5.s64 = ctx.r10.s64 + 29456;
	// li r4,16
	ctx.r4.s64 = 16;
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,32
	ctx.r3.s64 = 32;
	// lvx128 v13,r9,r8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,48
	r11.s64 = 48;
	// lvx128 v12,r9,r7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r9,r6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r5,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r5,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r5,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323B278"))) PPC_WEAK_FUNC(sub_8323B278);
PPC_FUNC_IMPL(__imp__sub_8323B278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// addi r7,r8,-14528
	ctx.r7.s64 = ctx.r8.s64 + -14528;
	// lwz r11,31240(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31240);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r10,31240(r9)
	PPC_STORE_U32(ctx.r9.u32 + 31240, ctx.r10.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323B298"))) PPC_WEAK_FUNC(sub_8323B298);
PPC_FUNC_IMPL(__imp__sub_8323B298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-24
	ctx.r7.s64 = ctx.r10.s64 + -24;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,96
	ctx.r4.s64 = ctx.r9.s64 + 96;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,29532
	ctx.r3.s64 = ctx.r8.s64 + 29532;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323B308"))) PPC_WEAK_FUNC(sub_8323B308);
PPC_FUNC_IMPL(__imp__sub_8323B308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,116
	ctx.r7.s64 = ctx.r10.s64 + 116;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,140
	ctx.r4.s64 = ctx.r9.s64 + 140;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,29580
	ctx.r3.s64 = ctx.r8.s64 + 29580;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323B378"))) PPC_WEAK_FUNC(sub_8323B378);
PPC_FUNC_IMPL(__imp__sub_8323B378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,184
	ctx.r7.s64 = ctx.r10.s64 + 184;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,376
	ctx.r4.s64 = ctx.r9.s64 + 376;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,29628
	ctx.r3.s64 = ctx.r8.s64 + 29628;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323B3E8"))) PPC_WEAK_FUNC(sub_8323B3E8);
PPC_FUNC_IMPL(__imp__sub_8323B3E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,280
	ctx.r7.s64 = ctx.r10.s64 + 280;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,400
	ctx.r4.s64 = ctx.r9.s64 + 400;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,29676
	ctx.r3.s64 = ctx.r8.s64 + 29676;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323B458"))) PPC_WEAK_FUNC(sub_8323B458);
PPC_FUNC_IMPL(__imp__sub_8323B458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r6,r10,656
	ctx.r6.s64 = ctx.r10.s64 + 656;
	// lis r7,-31943
	ctx.r7.s64 = -2093416448;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,728
	ctx.r4.s64 = ctx.r8.s64 + 728;
	// addi r3,r7,29724
	ctx.r3.s64 = ctx.r7.s64 + 29724;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r9,r9,616
	ctx.r9.s64 = ctx.r9.s64 + 616;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323B4C8"))) PPC_WEAK_FUNC(sub_8323B4C8);
PPC_FUNC_IMPL(__imp__sub_8323B4C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,896
	ctx.r7.s64 = ctx.r10.s64 + 896;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,9
	ctx.r6.s64 = 9;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,1112
	ctx.r4.s64 = ctx.r9.s64 + 1112;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,29772
	ctx.r3.s64 = ctx.r8.s64 + 29772;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,176
	ctx.r6.s64 = 176;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323B538"))) PPC_WEAK_FUNC(sub_8323B538);
PPC_FUNC_IMPL(__imp__sub_8323B538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,1284
	ctx.r7.s64 = ctx.r10.s64 + 1284;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,1400
	ctx.r4.s64 = ctx.r9.s64 + 1400;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,29820
	ctx.r3.s64 = ctx.r8.s64 + 29820;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323B5A8"))) PPC_WEAK_FUNC(sub_8323B5A8);
PPC_FUNC_IMPL(__imp__sub_8323B5A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,1332
	ctx.r7.s64 = ctx.r10.s64 + 1332;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,1436
	ctx.r4.s64 = ctx.r9.s64 + 1436;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,29868
	ctx.r3.s64 = ctx.r8.s64 + 29868;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323B618"))) PPC_WEAK_FUNC(sub_8323B618);
PPC_FUNC_IMPL(__imp__sub_8323B618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r9,r10,-14352
	ctx.r9.s64 = ctx.r10.s64 + -14352;
	// lwz r11,-14408(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -14408);
	// stw r11,80(r9)
	PPC_STORE_U32(ctx.r9.u32 + 80, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323B630"))) PPC_WEAK_FUNC(sub_8323B630);
PPC_FUNC_IMPL(__imp__sub_8323B630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r6,r10,-14352
	ctx.r6.s64 = ctx.r10.s64 + -14352;
	// lis r7,-31943
	ctx.r7.s64 = -2093416448;
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,1464
	ctx.r4.s64 = ctx.r8.s64 + 1464;
	// addi r3,r7,29916
	ctx.r3.s64 = ctx.r7.s64 + 29916;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r9,r9,1380
	ctx.r9.s64 = ctx.r9.s64 + 1380;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,36
	ctx.r6.s64 = 36;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323B6A0"))) PPC_WEAK_FUNC(sub_8323B6A0);
PPC_FUNC_IMPL(__imp__sub_8323B6A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,1572
	ctx.r7.s64 = ctx.r10.s64 + 1572;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,1644
	ctx.r4.s64 = ctx.r9.s64 + 1644;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,29964
	ctx.r3.s64 = ctx.r8.s64 + 29964;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323B710"))) PPC_WEAK_FUNC(sub_8323B710);
PPC_FUNC_IMPL(__imp__sub_8323B710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,1620
	ctx.r7.s64 = ctx.r10.s64 + 1620;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,1672
	ctx.r4.s64 = ctx.r9.s64 + 1672;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,30012
	ctx.r3.s64 = ctx.r8.s64 + 30012;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323B780"))) PPC_WEAK_FUNC(sub_8323B780);
PPC_FUNC_IMPL(__imp__sub_8323B780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r6,r10,1896
	ctx.r6.s64 = ctx.r10.s64 + 1896;
	// lis r7,-31943
	ctx.r7.s64 = -2093416448;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,2016
	ctx.r4.s64 = ctx.r8.s64 + 2016;
	// addi r3,r7,30060
	ctx.r3.s64 = ctx.r7.s64 + 30060;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r9,r9,1872
	ctx.r9.s64 = ctx.r9.s64 + 1872;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323B7F0"))) PPC_WEAK_FUNC(sub_8323B7F0);
PPC_FUNC_IMPL(__imp__sub_8323B7F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,2060
	ctx.r7.s64 = ctx.r10.s64 + 2060;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,2108
	ctx.r4.s64 = ctx.r9.s64 + 2108;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,30108
	ctx.r3.s64 = ctx.r8.s64 + 30108;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323B860"))) PPC_WEAK_FUNC(sub_8323B860);
PPC_FUNC_IMPL(__imp__sub_8323B860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// addi r8,r9,-14032
	ctx.r8.s64 = ctx.r9.s64 + -14032;
	// lwz r11,-14064(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -14064);
	// lwz r10,-14060(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14060);
	// stw r11,80(r8)
	PPC_STORE_U32(ctx.r8.u32 + 80, r11.u32);
	// stw r11,104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 104, r11.u32);
	// stw r10,152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 152, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323B888"))) PPC_WEAK_FUNC(sub_8323B888);
PPC_FUNC_IMPL(__imp__sub_8323B888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r6,r10,-14032
	ctx.r6.s64 = ctx.r10.s64 + -14032;
	// lis r7,-31943
	ctx.r7.s64 = -2093416448;
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,3236
	ctx.r4.s64 = ctx.r8.s64 + 3236;
	// addi r3,r7,30156
	ctx.r3.s64 = ctx.r7.s64 + 30156;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r9,r9,3176
	ctx.r9.s64 = ctx.r9.s64 + 3176;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323B8F8"))) PPC_WEAK_FUNC(sub_8323B8F8);
PPC_FUNC_IMPL(__imp__sub_8323B8F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,3316
	ctx.r7.s64 = ctx.r10.s64 + 3316;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,3364
	ctx.r4.s64 = ctx.r9.s64 + 3364;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,30204
	ctx.r3.s64 = ctx.r8.s64 + 30204;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323B968"))) PPC_WEAK_FUNC(sub_8323B968);
PPC_FUNC_IMPL(__imp__sub_8323B968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r9,r10,-13776
	ctx.r9.s64 = ctx.r10.s64 + -13776;
	// lwz r11,-13816(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -13816);
	// stw r11,80(r9)
	PPC_STORE_U32(ctx.r9.u32 + 80, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323B980"))) PPC_WEAK_FUNC(sub_8323B980);
PPC_FUNC_IMPL(__imp__sub_8323B980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r6,r10,-13776
	ctx.r6.s64 = ctx.r10.s64 + -13776;
	// lis r7,-31943
	ctx.r7.s64 = -2093416448;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,3380
	ctx.r4.s64 = ctx.r8.s64 + 3380;
	// addi r3,r7,30252
	ctx.r3.s64 = ctx.r7.s64 + 30252;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r9,r9,3296
	ctx.r9.s64 = ctx.r9.s64 + 3296;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323B9F0"))) PPC_WEAK_FUNC(sub_8323B9F0);
PPC_FUNC_IMPL(__imp__sub_8323B9F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r9,r10,-13656
	ctx.r9.s64 = ctx.r10.s64 + -13656;
	// lwz r11,-13676(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -13676);
	// stw r11,200(r9)
	PPC_STORE_U32(ctx.r9.u32 + 200, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323BA08"))) PPC_WEAK_FUNC(sub_8323BA08);
PPC_FUNC_IMPL(__imp__sub_8323BA08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r6,r10,-13656
	ctx.r6.s64 = ctx.r10.s64 + -13656;
	// lis r7,-31943
	ctx.r7.s64 = -2093416448;
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,3604
	ctx.r4.s64 = ctx.r8.s64 + 3604;
	// addi r3,r7,30300
	ctx.r3.s64 = ctx.r7.s64 + 30300;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r9,r9,3564
	ctx.r9.s64 = ctx.r9.s64 + 3564;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323BA78"))) PPC_WEAK_FUNC(sub_8323BA78);
PPC_FUNC_IMPL(__imp__sub_8323BA78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,3656
	ctx.r7.s64 = ctx.r10.s64 + 3656;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,3704
	ctx.r4.s64 = ctx.r9.s64 + 3704;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,30348
	ctx.r3.s64 = ctx.r8.s64 + 30348;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323BAE8"))) PPC_WEAK_FUNC(sub_8323BAE8);
PPC_FUNC_IMPL(__imp__sub_8323BAE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,3776
	ctx.r7.s64 = ctx.r10.s64 + 3776;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,3968
	ctx.r4.s64 = ctx.r9.s64 + 3968;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,30396
	ctx.r3.s64 = ctx.r8.s64 + 30396;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323BB58"))) PPC_WEAK_FUNC(sub_8323BB58);
PPC_FUNC_IMPL(__imp__sub_8323BB58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,3824
	ctx.r7.s64 = ctx.r10.s64 + 3824;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,3976
	ctx.r4.s64 = ctx.r9.s64 + 3976;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,30444
	ctx.r3.s64 = ctx.r8.s64 + 30444;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323BBC8"))) PPC_WEAK_FUNC(sub_8323BBC8);
PPC_FUNC_IMPL(__imp__sub_8323BBC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// addi r6,r10,4024
	ctx.r6.s64 = ctx.r10.s64 + 4024;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31943
	ctx.r7.s64 = -2093416448;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,30540
	ctx.r5.s64 = ctx.r9.s64 + 30540;
	// addi r4,r8,4072
	ctx.r4.s64 = ctx.r8.s64 + 4072;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,30492
	ctx.r3.s64 = ctx.r7.s64 + 30492;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,2
	r31.s64 = 2;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323BC40"))) PPC_WEAK_FUNC(sub_8323BC40);
PPC_FUNC_IMPL(__imp__sub_8323BC40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r10,-1548
	ctx.r4.s64 = ctx.r10.s64 + -1548;
	// addi r3,r9,30540
	ctx.r3.s64 = ctx.r9.s64 + 30540;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323BCA0"))) PPC_WEAK_FUNC(sub_8323BCA0);
PPC_FUNC_IMPL(__imp__sub_8323BCA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x831b0b08
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,-1
	r11.s64 = -1;
	// addi r9,r1,-224
	ctx.r9.s64 = ctx.r1.s64 + -224;
	// stw r10,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r10.u32);
	// addi r8,r1,-208
	ctx.r8.s64 = ctx.r1.s64 + -208;
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// addi r7,r1,-192
	ctx.r7.s64 = ctx.r1.s64 + -192;
	// stw r10,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r10.u32);
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// addi r5,r1,-176
	ctx.r5.s64 = ctx.r1.s64 + -176;
	// stw r10,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r10.u32);
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// addi r30,r1,-144
	r30.s64 = ctx.r1.s64 + -144;
	// stw r10,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r10.u32);
	// addi r27,r1,-128
	r27.s64 = ctx.r1.s64 + -128;
	// stw r11,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, r11.u32);
	// lis r6,-31943
	ctx.r6.s64 = -2093416448;
	// stw r10,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r10.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// addi r4,r6,30592
	ctx.r4.s64 = ctx.r6.s64 + 30592;
	// stw r11,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, r11.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// li r29,48
	r29.s64 = 48;
	// stw r10,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r10.u32);
	// addi r28,r1,-208
	r28.s64 = ctx.r1.s64 + -208;
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// addi r26,r1,-224
	r26.s64 = ctx.r1.s64 + -224;
	// stw r11,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, r11.u32);
	// li r25,64
	r25.s64 = 64;
	// stw r11,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, r11.u32);
	// li r24,80
	r24.s64 = 80;
	// stw r11,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, r11.u32);
	// addi r23,r1,-192
	r23.s64 = ctx.r1.s64 + -192;
	// stw r10,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r10.u32);
	// li r22,96
	r22.s64 = 96;
	// stw r11,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, r11.u32);
	// li r21,112
	r21.s64 = 112;
	// stw r10,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r10.u32);
	// li r20,128
	r20.s64 = 128;
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// stw r10,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r10.u32);
	// stw r11,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, r11.u32);
	// stw r10,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r10.u32);
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r10,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r10.u32);
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r10,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r10.u32);
	// stw r11,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, r11.u32);
	// lvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, r11.u32);
	// stvx128 v13,r4,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r10,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r10.u32);
	// stw r11,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, r11.u32);
	// stw r11,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, r11.u32);
	// lvx128 v12,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, r11.u32);
	// stvx128 v12,r4,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, r11.u32);
	// stw r10,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r10.u32);
	// lvx128 v10,r0,r26
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// stvx128 v0,r4,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, r11.u32);
	// lvx128 v0,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// stw r10,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r10.u32);
	// stw r11,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, r11.u32);
	// lvx128 v13,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, r11.u32);
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// stvx128 v13,r4,r25
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + r25.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, r11.u32);
	// lvx128 v12,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// stvx128 v12,r4,r24
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + r24.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,-176
	ctx.r5.s64 = ctx.r1.s64 + -176;
	// lvx128 v13,r0,r23
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r23.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,144
	ctx.r3.s64 = 144;
	// stvx128 v0,r4,r20
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + r20.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,-144
	ctx.r6.s64 = ctx.r1.s64 + -144;
	// stvx128 v11,r4,r22
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + r22.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,160
	ctx.r9.s64 = 160;
	// stw r11,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, r11.u32);
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// stw r11,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, r11.u32);
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,-160
	ctx.r5.s64 = ctx.r1.s64 + -160;
	// stvx128 v13,r4,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,-144
	ctx.r3.s64 = ctx.r1.s64 + -144;
	// addi r7,r1,-128
	ctx.r7.s64 = ctx.r1.s64 + -128;
	// stw r11,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, r11.u32);
	// stw r10,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r10.u32);
	// stvx128 v0,r4,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, r11.u32);
	// lvx128 v11,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, r11.u32);
	// stvx128 v10,r4,r21
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + r21.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, r11.u32);
	// li r9,176
	ctx.r9.s64 = 176;
	// stw r11,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, r11.u32);
	// li r6,192
	ctx.r6.s64 = 192;
	// stw r11,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, r11.u32);
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r10,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r10.u32);
	// li r31,224
	r31.s64 = 224;
	// stw r11,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, r11.u32);
	// li r8,240
	ctx.r8.s64 = 240;
	// stw r11,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, r11.u32);
	// lvx128 v13,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, r11.u32);
	// stw r11,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, r11.u32);
	// stw r11,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, r11.u32);
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// lvx128 v10,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, r11.u32);
	// li r5,208
	ctx.r5.s64 = 208;
	// stw r11,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, r11.u32);
	// stw r10,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r10.u32);
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// lvx128 v12,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r4,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r4,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v10,r4,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r4,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_8323BEB8"))) PPC_WEAK_FUNC(sub_8323BEB8);
PPC_FUNC_IMPL(__imp__sub_8323BEB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x831b0b08
	// li r11,-1
	r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,-224
	ctx.r9.s64 = ctx.r1.s64 + -224;
	// stw r11,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, r11.u32);
	// addi r8,r1,-208
	ctx.r8.s64 = ctx.r1.s64 + -208;
	// stw r11,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, r11.u32);
	// addi r7,r1,-192
	ctx.r7.s64 = ctx.r1.s64 + -192;
	// stw r11,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, r11.u32);
	// stw r11,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, r11.u32);
	// addi r5,r1,-176
	ctx.r5.s64 = ctx.r1.s64 + -176;
	// stw r11,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, r11.u32);
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stw r11,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, r11.u32);
	// addi r30,r1,-144
	r30.s64 = ctx.r1.s64 + -144;
	// stw r11,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, r11.u32);
	// addi r27,r1,-128
	r27.s64 = ctx.r1.s64 + -128;
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// lis r6,-31943
	ctx.r6.s64 = -2093416448;
	// stw r11,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, r11.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r11,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, r11.u32);
	// addi r4,r6,30848
	ctx.r4.s64 = ctx.r6.s64 + 30848;
	// stw r10,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r10.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r11,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, r11.u32);
	// li r29,48
	r29.s64 = 48;
	// stw r11,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, r11.u32);
	// addi r28,r1,-208
	r28.s64 = ctx.r1.s64 + -208;
	// stw r11,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, r11.u32);
	// addi r26,r1,-224
	r26.s64 = ctx.r1.s64 + -224;
	// stw r10,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r10.u32);
	// li r25,64
	r25.s64 = 64;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// li r24,80
	r24.s64 = 80;
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// addi r23,r1,-192
	r23.s64 = ctx.r1.s64 + -192;
	// stw r11,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, r11.u32);
	// li r22,96
	r22.s64 = 96;
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// li r21,112
	r21.s64 = 112;
	// stw r11,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, r11.u32);
	// li r20,128
	r20.s64 = 128;
	// stw r11,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, r11.u32);
	// stw r11,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, r11.u32);
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// stw r11,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, r11.u32);
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, r11.u32);
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, r11.u32);
	// stw r10,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r10.u32);
	// lvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r10,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r10.u32);
	// stvx128 v13,r4,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, r11.u32);
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// stw r10,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r10.u32);
	// lvx128 v12,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// stvx128 v12,r4,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r10,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r10.u32);
	// stw r11,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, r11.u32);
	// lvx128 v10,r0,r26
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, r11.u32);
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, r11.u32);
	// stvx128 v0,r4,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r10,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r10.u32);
	// lvx128 v0,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, r11.u32);
	// stw r11,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, r11.u32);
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// lvx128 v13,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r10,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r10.u32);
	// stw r11,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, r11.u32);
	// stvx128 v13,r4,r25
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + r25.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r10,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r10.u32);
	// lvx128 v12,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, r11.u32);
	// stvx128 v12,r4,r24
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + r24.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,-176
	ctx.r5.s64 = ctx.r1.s64 + -176;
	// lvx128 v13,r0,r23
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r23.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,144
	ctx.r3.s64 = 144;
	// stvx128 v0,r4,r20
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + r20.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,-144
	ctx.r6.s64 = ctx.r1.s64 + -144;
	// stvx128 v11,r4,r22
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + r22.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,160
	ctx.r9.s64 = 160;
	// stw r10,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r10.u32);
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// stw r10,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r10.u32);
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,-160
	ctx.r5.s64 = ctx.r1.s64 + -160;
	// stvx128 v13,r4,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,-144
	ctx.r3.s64 = ctx.r1.s64 + -144;
	// addi r7,r1,-128
	ctx.r7.s64 = ctx.r1.s64 + -128;
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// stw r11,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, r11.u32);
	// stvx128 v0,r4,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// lvx128 v11,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r10,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r10.u32);
	// stvx128 v10,r4,r21
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + r21.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// li r9,176
	ctx.r9.s64 = 176;
	// stw r10,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r10.u32);
	// li r6,192
	ctx.r6.s64 = 192;
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, r11.u32);
	// li r31,224
	r31.s64 = 224;
	// stw r10,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r10.u32);
	// li r8,240
	ctx.r8.s64 = 240;
	// stw r10,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r10.u32);
	// lvx128 v13,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r10,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r10.u32);
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// stw r10,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r10.u32);
	// stw r11,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, r11.u32);
	// lvx128 v10,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r10,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r10.u32);
	// li r5,208
	ctx.r5.s64 = 208;
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// stw r11,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, r11.u32);
	// stw r11,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, r11.u32);
	// lvx128 v12,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r4,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r4,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v10,r4,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r4,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_8323C0D0"))) PPC_WEAK_FUNC(sub_8323C0D0);
PPC_FUNC_IMPL(__imp__sub_8323C0D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r9,r11,4496
	ctx.r9.s64 = r11.s64 + 4496;
	// addi r8,r10,31104
	ctx.r8.s64 = ctx.r10.s64 + 31104;
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323C0F0"))) PPC_WEAK_FUNC(sub_8323C0F0);
PPC_FUNC_IMPL(__imp__sub_8323C0F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r9,r11,22880
	ctx.r9.s64 = r11.s64 + 22880;
	// addi r8,r10,31120
	ctx.r8.s64 = ctx.r10.s64 + 31120;
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323C110"))) PPC_WEAK_FUNC(sub_8323C110);
PPC_FUNC_IMPL(__imp__sub_8323C110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r9,r11,-13104
	ctx.r9.s64 = r11.s64 + -13104;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r6,r10,31136
	ctx.r6.s64 = ctx.r10.s64 + 31136;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r9,r8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r9,r7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r6,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r6,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323C150"))) PPC_WEAK_FUNC(sub_8323C150);
PPC_FUNC_IMPL(__imp__sub_8323C150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,31184
	r31.s64 = r11.s64 + 31184;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8324b9fc
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// std r11,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r11.u64);
	// addi r3,r10,-21992
	ctx.r3.s64 = ctx.r10.s64 + -21992;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323C1A0"))) PPC_WEAK_FUNC(sub_8323C1A0);
PPC_FUNC_IMPL(__imp__sub_8323C1A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// addi r7,r8,-12168
	ctx.r7.s64 = ctx.r8.s64 + -12168;
	// lwz r11,31240(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31240);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r10,31240(r9)
	PPC_STORE_U32(ctx.r9.u32 + 31240, ctx.r10.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323C1C0"))) PPC_WEAK_FUNC(sub_8323C1C0);
PPC_FUNC_IMPL(__imp__sub_8323C1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// addi r7,r8,-12148
	ctx.r7.s64 = ctx.r8.s64 + -12148;
	// lwz r11,31240(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31240);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r10,31240(r9)
	PPC_STORE_U32(ctx.r9.u32 + 31240, ctx.r10.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323C1E0"))) PPC_WEAK_FUNC(sub_8323C1E0);
PPC_FUNC_IMPL(__imp__sub_8323C1E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// addi r6,r11,8048
	ctx.r6.s64 = r11.s64 + 8048;
	// addi r4,r10,-16600
	ctx.r4.s64 = ctx.r10.s64 + -16600;
	// addi r3,r9,31268
	ctx.r3.s64 = ctx.r9.s64 + 31268;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x82ec49f0
	sub_82EC49F0(ctx, base);
	// lis r8,-31963
	ctx.r8.s64 = -2094727168;
	// addi r3,r8,-21976
	ctx.r3.s64 = ctx.r8.s64 + -21976;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323C228"))) PPC_WEAK_FUNC(sub_8323C228);
PPC_FUNC_IMPL(__imp__sub_8323C228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// addi r7,r8,-11848
	ctx.r7.s64 = ctx.r8.s64 + -11848;
	// lwz r11,31240(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31240);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r10,31240(r9)
	PPC_STORE_U32(ctx.r9.u32 + 31240, ctx.r10.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323C248"))) PPC_WEAK_FUNC(sub_8323C248);
PPC_FUNC_IMPL(__imp__sub_8323C248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,8136
	ctx.r7.s64 = ctx.r10.s64 + 8136;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,8232
	ctx.r4.s64 = ctx.r9.s64 + 8232;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,31292
	ctx.r3.s64 = ctx.r8.s64 + 31292;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323C2B8"))) PPC_WEAK_FUNC(sub_8323C2B8);
PPC_FUNC_IMPL(__imp__sub_8323C2B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,8208
	ctx.r7.s64 = ctx.r10.s64 + 8208;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,8268
	ctx.r4.s64 = ctx.r9.s64 + 8268;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,31340
	ctx.r3.s64 = ctx.r8.s64 + 31340;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323C328"))) PPC_WEAK_FUNC(sub_8323C328);
PPC_FUNC_IMPL(__imp__sub_8323C328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,8440
	ctx.r7.s64 = ctx.r10.s64 + 8440;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,9
	ctx.r6.s64 = 9;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,8656
	ctx.r4.s64 = ctx.r9.s64 + 8656;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,31388
	ctx.r3.s64 = ctx.r8.s64 + 31388;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323C398"))) PPC_WEAK_FUNC(sub_8323C398);
PPC_FUNC_IMPL(__imp__sub_8323C398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,8864
	ctx.r7.s64 = ctx.r10.s64 + 8864;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,11
	ctx.r6.s64 = 11;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,9128
	ctx.r4.s64 = ctx.r9.s64 + 9128;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,31436
	ctx.r3.s64 = ctx.r8.s64 + 31436;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323C408"))) PPC_WEAK_FUNC(sub_8323C408);
PPC_FUNC_IMPL(__imp__sub_8323C408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// addi r7,r8,-11520
	ctx.r7.s64 = ctx.r8.s64 + -11520;
	// lwz r11,31240(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31240);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r10,31240(r9)
	PPC_STORE_U32(ctx.r9.u32 + 31240, ctx.r10.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323C428"))) PPC_WEAK_FUNC(sub_8323C428);
PPC_FUNC_IMPL(__imp__sub_8323C428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r9,r10,-10620
	ctx.r9.s64 = ctx.r10.s64 + -10620;
	// lwz r11,12124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12124);
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r7,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stb r11,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323C450"))) PPC_WEAK_FUNC(sub_8323C450);
PPC_FUNC_IMPL(__imp__sub_8323C450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,13544
	ctx.r7.s64 = ctx.r10.s64 + 13544;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,13568
	ctx.r4.s64 = ctx.r9.s64 + 13568;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,31532
	ctx.r3.s64 = ctx.r8.s64 + 31532;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323C4C0"))) PPC_WEAK_FUNC(sub_8323C4C0);
PPC_FUNC_IMPL(__imp__sub_8323C4C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,13616
	ctx.r7.s64 = ctx.r10.s64 + 13616;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,13640
	ctx.r4.s64 = ctx.r9.s64 + 13640;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,31580
	ctx.r3.s64 = ctx.r8.s64 + 31580;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323C530"))) PPC_WEAK_FUNC(sub_8323C530);
PPC_FUNC_IMPL(__imp__sub_8323C530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,13696
	ctx.r7.s64 = ctx.r10.s64 + 13696;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,13864
	ctx.r4.s64 = ctx.r9.s64 + 13864;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,31628
	ctx.r3.s64 = ctx.r8.s64 + 31628;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323C5A0"))) PPC_WEAK_FUNC(sub_8323C5A0);
PPC_FUNC_IMPL(__imp__sub_8323C5A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,13896
	ctx.r7.s64 = ctx.r10.s64 + 13896;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,14088
	ctx.r4.s64 = ctx.r9.s64 + 14088;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,31676
	ctx.r3.s64 = ctx.r8.s64 + 31676;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323C610"))) PPC_WEAK_FUNC(sub_8323C610);
PPC_FUNC_IMPL(__imp__sub_8323C610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,14112
	ctx.r7.s64 = ctx.r10.s64 + 14112;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,9
	ctx.r6.s64 = 9;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,14328
	ctx.r4.s64 = ctx.r9.s64 + 14328;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,31724
	ctx.r3.s64 = ctx.r8.s64 + 31724;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323C680"))) PPC_WEAK_FUNC(sub_8323C680);
PPC_FUNC_IMPL(__imp__sub_8323C680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,14368
	ctx.r7.s64 = ctx.r10.s64 + 14368;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,14560
	ctx.r4.s64 = ctx.r9.s64 + 14560;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,31772
	ctx.r3.s64 = ctx.r8.s64 + 31772;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323C6F0"))) PPC_WEAK_FUNC(sub_8323C6F0);
PPC_FUNC_IMPL(__imp__sub_8323C6F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,14584
	ctx.r7.s64 = ctx.r10.s64 + 14584;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,14728
	ctx.r4.s64 = ctx.r9.s64 + 14728;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,31820
	ctx.r3.s64 = ctx.r8.s64 + 31820;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323C760"))) PPC_WEAK_FUNC(sub_8323C760);
PPC_FUNC_IMPL(__imp__sub_8323C760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,14764
	ctx.r7.s64 = ctx.r10.s64 + 14764;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,14788
	ctx.r4.s64 = ctx.r9.s64 + 14788;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,31868
	ctx.r3.s64 = ctx.r8.s64 + 31868;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323C7D0"))) PPC_WEAK_FUNC(sub_8323C7D0);
PPC_FUNC_IMPL(__imp__sub_8323C7D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,15016
	ctx.r7.s64 = ctx.r10.s64 + 15016;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r11,0
	r11.s64 = 0;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r9,15304
	ctx.r4.s64 = ctx.r9.s64 + 15304;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r8,31916
	ctx.r3.s64 = ctx.r8.s64 + 31916;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323C838"))) PPC_WEAK_FUNC(sub_8323C838);
PPC_FUNC_IMPL(__imp__sub_8323C838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,15336
	ctx.r7.s64 = ctx.r10.s64 + 15336;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,15360
	ctx.r4.s64 = ctx.r9.s64 + 15360;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,31964
	ctx.r3.s64 = ctx.r8.s64 + 31964;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323C8A8"))) PPC_WEAK_FUNC(sub_8323C8A8);
PPC_FUNC_IMPL(__imp__sub_8323C8A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,15400
	ctx.r7.s64 = ctx.r10.s64 + 15400;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,15448
	ctx.r4.s64 = ctx.r9.s64 + 15448;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,32012
	ctx.r3.s64 = ctx.r8.s64 + 32012;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323C918"))) PPC_WEAK_FUNC(sub_8323C918);
PPC_FUNC_IMPL(__imp__sub_8323C918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,15484
	ctx.r7.s64 = ctx.r10.s64 + 15484;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,15508
	ctx.r4.s64 = ctx.r9.s64 + 15508;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,32060
	ctx.r3.s64 = ctx.r8.s64 + 32060;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323C988"))) PPC_WEAK_FUNC(sub_8323C988);
PPC_FUNC_IMPL(__imp__sub_8323C988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,15556
	ctx.r7.s64 = ctx.r10.s64 + 15556;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,15604
	ctx.r4.s64 = ctx.r9.s64 + 15604;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,32108
	ctx.r3.s64 = ctx.r8.s64 + 32108;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323C9F8"))) PPC_WEAK_FUNC(sub_8323C9F8);
PPC_FUNC_IMPL(__imp__sub_8323C9F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,15636
	ctx.r7.s64 = ctx.r10.s64 + 15636;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,15660
	ctx.r4.s64 = ctx.r9.s64 + 15660;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,32156
	ctx.r3.s64 = ctx.r8.s64 + 32156;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323CA68"))) PPC_WEAK_FUNC(sub_8323CA68);
PPC_FUNC_IMPL(__imp__sub_8323CA68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,15692
	ctx.r7.s64 = ctx.r10.s64 + 15692;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,15764
	ctx.r4.s64 = ctx.r9.s64 + 15764;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,32204
	ctx.r3.s64 = ctx.r8.s64 + 32204;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323CAD8"))) PPC_WEAK_FUNC(sub_8323CAD8);
PPC_FUNC_IMPL(__imp__sub_8323CAD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,15716
	ctx.r7.s64 = ctx.r10.s64 + 15716;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,15800
	ctx.r4.s64 = ctx.r9.s64 + 15800;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,32252
	ctx.r3.s64 = ctx.r8.s64 + 32252;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323CB48"))) PPC_WEAK_FUNC(sub_8323CB48);
PPC_FUNC_IMPL(__imp__sub_8323CB48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,15836
	ctx.r7.s64 = ctx.r10.s64 + 15836;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,15884
	ctx.r4.s64 = ctx.r9.s64 + 15884;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,32300
	ctx.r3.s64 = ctx.r8.s64 + 32300;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323CBB8"))) PPC_WEAK_FUNC(sub_8323CBB8);
PPC_FUNC_IMPL(__imp__sub_8323CBB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// addi r6,r10,15908
	ctx.r6.s64 = ctx.r10.s64 + 15908;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31943
	ctx.r7.s64 = -2093416448;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,32300
	ctx.r5.s64 = ctx.r9.s64 + 32300;
	// addi r4,r8,15932
	ctx.r4.s64 = ctx.r8.s64 + 15932;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,32348
	ctx.r3.s64 = ctx.r7.s64 + 32348;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,1
	r31.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323CC30"))) PPC_WEAK_FUNC(sub_8323CC30);
PPC_FUNC_IMPL(__imp__sub_8323CC30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,15964
	ctx.r7.s64 = ctx.r10.s64 + 15964;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,16012
	ctx.r4.s64 = ctx.r9.s64 + 16012;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,32396
	ctx.r3.s64 = ctx.r8.s64 + 32396;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323CCA0"))) PPC_WEAK_FUNC(sub_8323CCA0);
PPC_FUNC_IMPL(__imp__sub_8323CCA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,16088
	ctx.r7.s64 = ctx.r10.s64 + 16088;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,16184
	ctx.r4.s64 = ctx.r9.s64 + 16184;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,32444
	ctx.r3.s64 = ctx.r8.s64 + 32444;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323CD10"))) PPC_WEAK_FUNC(sub_8323CD10);
PPC_FUNC_IMPL(__imp__sub_8323CD10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r11,r11,16368
	r11.s64 = r11.s64 + 16368;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// addi r7,r11,312
	ctx.r7.s64 = r11.s64 + 312;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r6,13
	ctx.r6.s64 = 13;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r4,r9,16780
	ctx.r4.s64 = ctx.r9.s64 + 16780;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,32492
	ctx.r3.s64 = ctx.r8.s64 + 32492;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323CD80"))) PPC_WEAK_FUNC(sub_8323CD80);
PPC_FUNC_IMPL(__imp__sub_8323CD80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r6,r10,16808
	ctx.r6.s64 = ctx.r10.s64 + 16808;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31943
	ctx.r7.s64 = -2093416448;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-32276
	ctx.r5.s64 = ctx.r9.s64 + -32276;
	// addi r4,r8,16856
	ctx.r4.s64 = ctx.r8.s64 + 16856;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,32540
	ctx.r3.s64 = ctx.r7.s64 + 32540;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,2
	r31.s64 = 2;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323CDF8"))) PPC_WEAK_FUNC(sub_8323CDF8);
PPC_FUNC_IMPL(__imp__sub_8323CDF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,16952
	ctx.r7.s64 = ctx.r10.s64 + 16952;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,17168
	ctx.r4.s64 = ctx.r9.s64 + 17168;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,32588
	ctx.r3.s64 = ctx.r8.s64 + 32588;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323CE68"))) PPC_WEAK_FUNC(sub_8323CE68);
PPC_FUNC_IMPL(__imp__sub_8323CE68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r6,r10,17000
	ctx.r6.s64 = ctx.r10.s64 + 17000;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31943
	ctx.r7.s64 = -2093416448;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-32276
	ctx.r5.s64 = ctx.r9.s64 + -32276;
	// addi r4,r8,17192
	ctx.r4.s64 = ctx.r8.s64 + 17192;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,32636
	ctx.r3.s64 = ctx.r7.s64 + 32636;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,7
	r31.s64 = 7;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,52
	ctx.r6.s64 = 52;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323CEE0"))) PPC_WEAK_FUNC(sub_8323CEE0);
PPC_FUNC_IMPL(__imp__sub_8323CEE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r6,r10,17232
	ctx.r6.s64 = ctx.r10.s64 + 17232;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31943
	ctx.r7.s64 = -2093416448;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-32276
	ctx.r5.s64 = ctx.r9.s64 + -32276;
	// addi r4,r8,17328
	ctx.r4.s64 = ctx.r8.s64 + 17328;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,32684
	ctx.r3.s64 = ctx.r7.s64 + 32684;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,2
	r31.s64 = 2;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323CF58"))) PPC_WEAK_FUNC(sub_8323CF58);
PPC_FUNC_IMPL(__imp__sub_8323CF58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,17280
	ctx.r7.s64 = ctx.r10.s64 + 17280;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,17352
	ctx.r4.s64 = ctx.r9.s64 + 17352;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,32732
	ctx.r3.s64 = ctx.r8.s64 + 32732;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323CFC8"))) PPC_WEAK_FUNC(sub_8323CFC8);
PPC_FUNC_IMPL(__imp__sub_8323CFC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,17424
	ctx.r7.s64 = ctx.r10.s64 + 17424;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,17520
	ctx.r4.s64 = ctx.r9.s64 + 17520;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-32756
	ctx.r3.s64 = ctx.r8.s64 + -32756;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323D038"))) PPC_WEAK_FUNC(sub_8323D038);
PPC_FUNC_IMPL(__imp__sub_8323D038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,17812
	ctx.r7.s64 = ctx.r10.s64 + 17812;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,18056
	ctx.r4.s64 = ctx.r9.s64 + 18056;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-32708
	ctx.r3.s64 = ctx.r8.s64 + -32708;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323D0A8"))) PPC_WEAK_FUNC(sub_8323D0A8);
PPC_FUNC_IMPL(__imp__sub_8323D0A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r9,r11,17792
	ctx.r9.s64 = r11.s64 + 17792;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r6,r9,72
	ctx.r6.s64 = ctx.r9.s64 + 72;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// li r11,0
	r11.s64 = 0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r5,r10,-32276
	ctx.r5.s64 = ctx.r10.s64 + -32276;
	// addi r4,r8,18080
	ctx.r4.s64 = ctx.r8.s64 + 18080;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-32660
	ctx.r3.s64 = ctx.r7.s64 + -32660;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,8
	r31.s64 = 8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323D120"))) PPC_WEAK_FUNC(sub_8323D120);
PPC_FUNC_IMPL(__imp__sub_8323D120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r9,r10,-9832
	ctx.r9.s64 = ctx.r10.s64 + -9832;
	// lwz r11,-9856(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9856);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323D138"))) PPC_WEAK_FUNC(sub_8323D138);
PPC_FUNC_IMPL(__imp__sub_8323D138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r6,r10,-9832
	ctx.r6.s64 = ctx.r10.s64 + -9832;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,18252
	ctx.r4.s64 = ctx.r8.s64 + 18252;
	// addi r3,r7,-32612
	ctx.r3.s64 = ctx.r7.s64 + -32612;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r9,r9,18232
	ctx.r9.s64 = ctx.r9.s64 + 18232;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323D1A8"))) PPC_WEAK_FUNC(sub_8323D1A8);
PPC_FUNC_IMPL(__imp__sub_8323D1A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r9,r10,-9736
	ctx.r9.s64 = ctx.r10.s64 + -9736;
	// lwz r11,-9760(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9760);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323D1C0"))) PPC_WEAK_FUNC(sub_8323D1C0);
PPC_FUNC_IMPL(__imp__sub_8323D1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r6,r10,-9736
	ctx.r6.s64 = ctx.r10.s64 + -9736;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,18372
	ctx.r4.s64 = ctx.r8.s64 + 18372;
	// addi r3,r7,-32564
	ctx.r3.s64 = ctx.r7.s64 + -32564;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r9,r9,18352
	ctx.r9.s64 = ctx.r9.s64 + 18352;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323D230"))) PPC_WEAK_FUNC(sub_8323D230);
PPC_FUNC_IMPL(__imp__sub_8323D230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r9,r10,-9592
	ctx.r9.s64 = ctx.r10.s64 + -9592;
	// lwz r11,-9616(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9616);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323D248"))) PPC_WEAK_FUNC(sub_8323D248);
PPC_FUNC_IMPL(__imp__sub_8323D248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r6,r10,-9592
	ctx.r6.s64 = ctx.r10.s64 + -9592;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,18592
	ctx.r4.s64 = ctx.r8.s64 + 18592;
	// addi r3,r7,-32516
	ctx.r3.s64 = ctx.r7.s64 + -32516;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r9,r9,18572
	ctx.r9.s64 = ctx.r9.s64 + 18572;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323D2B8"))) PPC_WEAK_FUNC(sub_8323D2B8);
PPC_FUNC_IMPL(__imp__sub_8323D2B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,18652
	ctx.r7.s64 = ctx.r10.s64 + 18652;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,18724
	ctx.r4.s64 = ctx.r9.s64 + 18724;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-32468
	ctx.r3.s64 = ctx.r8.s64 + -32468;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323D328"))) PPC_WEAK_FUNC(sub_8323D328);
PPC_FUNC_IMPL(__imp__sub_8323D328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,18700
	ctx.r7.s64 = ctx.r10.s64 + 18700;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,18748
	ctx.r4.s64 = ctx.r9.s64 + 18748;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-32420
	ctx.r3.s64 = ctx.r8.s64 + -32420;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323D398"))) PPC_WEAK_FUNC(sub_8323D398);
PPC_FUNC_IMPL(__imp__sub_8323D398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,18780
	ctx.r7.s64 = ctx.r10.s64 + 18780;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,18804
	ctx.r4.s64 = ctx.r9.s64 + 18804;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-32372
	ctx.r3.s64 = ctx.r8.s64 + -32372;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323D408"))) PPC_WEAK_FUNC(sub_8323D408);
PPC_FUNC_IMPL(__imp__sub_8323D408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,18872
	ctx.r7.s64 = ctx.r10.s64 + 18872;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,19040
	ctx.r4.s64 = ctx.r9.s64 + 19040;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-32324
	ctx.r3.s64 = ctx.r8.s64 + -32324;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323D478"))) PPC_WEAK_FUNC(sub_8323D478);
PPC_FUNC_IMPL(__imp__sub_8323D478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,19068
	ctx.r7.s64 = ctx.r10.s64 + 19068;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,19092
	ctx.r4.s64 = ctx.r9.s64 + 19092;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-32276
	ctx.r3.s64 = ctx.r8.s64 + -32276;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323D4E8"))) PPC_WEAK_FUNC(sub_8323D4E8);
PPC_FUNC_IMPL(__imp__sub_8323D4E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,19112
	ctx.r7.s64 = ctx.r10.s64 + 19112;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,19160
	ctx.r4.s64 = ctx.r9.s64 + 19160;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-32228
	ctx.r3.s64 = ctx.r8.s64 + -32228;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323D558"))) PPC_WEAK_FUNC(sub_8323D558);
PPC_FUNC_IMPL(__imp__sub_8323D558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r9,r11,19320
	ctx.r9.s64 = r11.s64 + 19320;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// addi r7,r9,20
	ctx.r7.s64 = ctx.r9.s64 + 20;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r11,0
	r11.s64 = 0;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r4,r10,19388
	ctx.r4.s64 = ctx.r10.s64 + 19388;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-32180
	ctx.r3.s64 = ctx.r8.s64 + -32180;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323D5C8"))) PPC_WEAK_FUNC(sub_8323D5C8);
PPC_FUNC_IMPL(__imp__sub_8323D5C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r9,r10,-9340
	ctx.r9.s64 = ctx.r10.s64 + -9340;
	// lwz r11,-9376(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9376);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323D5E0"))) PPC_WEAK_FUNC(sub_8323D5E0);
PPC_FUNC_IMPL(__imp__sub_8323D5E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-9340
	ctx.r7.s64 = ctx.r10.s64 + -9340;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,19412
	ctx.r4.s64 = ctx.r9.s64 + 19412;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-32132
	ctx.r3.s64 = ctx.r8.s64 + -32132;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323D650"))) PPC_WEAK_FUNC(sub_8323D650);
PPC_FUNC_IMPL(__imp__sub_8323D650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,19444
	ctx.r7.s64 = ctx.r10.s64 + 19444;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,19468
	ctx.r4.s64 = ctx.r9.s64 + 19468;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-32084
	ctx.r3.s64 = ctx.r8.s64 + -32084;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323D6C0"))) PPC_WEAK_FUNC(sub_8323D6C0);
PPC_FUNC_IMPL(__imp__sub_8323D6C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r9,r10,-9260
	ctx.r9.s64 = ctx.r10.s64 + -9260;
	// lwz r11,-9376(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9376);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323D6D8"))) PPC_WEAK_FUNC(sub_8323D6D8);
PPC_FUNC_IMPL(__imp__sub_8323D6D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-9260
	ctx.r7.s64 = ctx.r10.s64 + -9260;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,19504
	ctx.r4.s64 = ctx.r9.s64 + 19504;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-32036
	ctx.r3.s64 = ctx.r8.s64 + -32036;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323D748"))) PPC_WEAK_FUNC(sub_8323D748);
PPC_FUNC_IMPL(__imp__sub_8323D748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r9,r10,-9196
	ctx.r9.s64 = ctx.r10.s64 + -9196;
	// lwz r11,-9376(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9376);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323D760"))) PPC_WEAK_FUNC(sub_8323D760);
PPC_FUNC_IMPL(__imp__sub_8323D760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-9196
	ctx.r7.s64 = ctx.r10.s64 + -9196;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,19532
	ctx.r4.s64 = ctx.r9.s64 + 19532;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-31988
	ctx.r3.s64 = ctx.r8.s64 + -31988;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323D7D0"))) PPC_WEAK_FUNC(sub_8323D7D0);
PPC_FUNC_IMPL(__imp__sub_8323D7D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// addi r7,r8,-9120
	ctx.r7.s64 = ctx.r8.s64 + -9120;
	// lwz r11,31240(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31240);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r10,31240(r9)
	PPC_STORE_U32(ctx.r9.u32 + 31240, ctx.r10.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323D7F0"))) PPC_WEAK_FUNC(sub_8323D7F0);
PPC_FUNC_IMPL(__imp__sub_8323D7F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r11,r11,20088
	r11.s64 = r11.s64 + 20088;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// addi r7,r11,288
	ctx.r7.s64 = r11.s64 + 288;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r4,r9,20468
	ctx.r4.s64 = ctx.r9.s64 + 20468;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-31936
	ctx.r3.s64 = ctx.r8.s64 + -31936;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323D860"))) PPC_WEAK_FUNC(sub_8323D860);
PPC_FUNC_IMPL(__imp__sub_8323D860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r10,20508
	ctx.r4.s64 = ctx.r10.s64 + 20508;
	// addi r3,r9,-31888
	ctx.r3.s64 = ctx.r9.s64 + -31888;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323D8C0"))) PPC_WEAK_FUNC(sub_8323D8C0);
PPC_FUNC_IMPL(__imp__sub_8323D8C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// addi r6,r10,20592
	ctx.r6.s64 = ctx.r10.s64 + 20592;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,30492
	ctx.r5.s64 = ctx.r9.s64 + 30492;
	// addi r4,r8,20708
	ctx.r4.s64 = ctx.r8.s64 + 20708;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-31840
	ctx.r3.s64 = ctx.r7.s64 + -31840;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,4
	r31.s64 = 4;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323D938"))) PPC_WEAK_FUNC(sub_8323D938);
PPC_FUNC_IMPL(__imp__sub_8323D938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// addi r5,r10,23488
	ctx.r5.s64 = ctx.r10.s64 + 23488;
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// lis r6,-31942
	ctx.r6.s64 = -2093350912;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r11,0
	r11.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r5,r8,30492
	ctx.r5.s64 = ctx.r8.s64 + 30492;
	// addi r4,r7,23632
	ctx.r4.s64 = ctx.r7.s64 + 23632;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,-31788
	ctx.r3.s64 = ctx.r6.s64 + -31788;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,23468
	ctx.r9.s64 = ctx.r9.s64 + 23468;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323D9B0"))) PPC_WEAK_FUNC(sub_8323D9B0);
PPC_FUNC_IMPL(__imp__sub_8323D9B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r6,r10,23656
	ctx.r6.s64 = ctx.r10.s64 + 23656;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-31116
	ctx.r5.s64 = ctx.r9.s64 + -31116;
	// addi r4,r8,23680
	ctx.r4.s64 = ctx.r8.s64 + 23680;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-31740
	ctx.r3.s64 = ctx.r7.s64 + -31740;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,1
	r31.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323DA28"))) PPC_WEAK_FUNC(sub_8323DA28);
PPC_FUNC_IMPL(__imp__sub_8323DA28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r6,r10,23708
	ctx.r6.s64 = ctx.r10.s64 + 23708;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-31596
	ctx.r5.s64 = ctx.r9.s64 + -31596;
	// addi r4,r8,23732
	ctx.r4.s64 = ctx.r8.s64 + 23732;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-31692
	ctx.r3.s64 = ctx.r7.s64 + -31692;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,1
	r31.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,336
	ctx.r6.s64 = 336;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323DAA0"))) PPC_WEAK_FUNC(sub_8323DAA0);
PPC_FUNC_IMPL(__imp__sub_8323DAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// lis r6,-31942
	ctx.r6.s64 = -2093350912;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,23876
	ctx.r9.s64 = ctx.r10.s64 + 23876;
	// addi r5,r8,-31404
	ctx.r5.s64 = ctx.r8.s64 + -31404;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r4,r7,23896
	ctx.r4.s64 = ctx.r7.s64 + 23896;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r3,r6,-31644
	ctx.r3.s64 = ctx.r6.s64 + -31644;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323DB08"))) PPC_WEAK_FUNC(sub_8323DB08);
PPC_FUNC_IMPL(__imp__sub_8323DB08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r6,r10,23960
	ctx.r6.s64 = ctx.r10.s64 + 23960;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-31788
	ctx.r5.s64 = ctx.r9.s64 + -31788;
	// addi r4,r8,24008
	ctx.r4.s64 = ctx.r8.s64 + 24008;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-31596
	ctx.r3.s64 = ctx.r7.s64 + -31596;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,2
	r31.s64 = 2;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,152
	ctx.r6.s64 = 152;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323DB80"))) PPC_WEAK_FUNC(sub_8323DB80);
PPC_FUNC_IMPL(__imp__sub_8323DB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,30492
	ctx.r5.s64 = ctx.r10.s64 + 30492;
	// addi r4,r9,24020
	ctx.r4.s64 = ctx.r9.s64 + 24020;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r8,-31548
	ctx.r3.s64 = ctx.r8.s64 + -31548;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323DBE8"))) PPC_WEAK_FUNC(sub_8323DBE8);
PPC_FUNC_IMPL(__imp__sub_8323DBE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r9,r10,-7864
	ctx.r9.s64 = ctx.r10.s64 + -7864;
	// lwz r11,-7872(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -7872);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323DC00"))) PPC_WEAK_FUNC(sub_8323DC00);
PPC_FUNC_IMPL(__imp__sub_8323DC00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// addi r5,r10,-7864
	ctx.r5.s64 = ctx.r10.s64 + -7864;
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// lis r6,-31942
	ctx.r6.s64 = -2093350912;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r10,11
	ctx.r10.s64 = 11;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r11,0
	r11.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r5,r8,30492
	ctx.r5.s64 = ctx.r8.s64 + 30492;
	// addi r4,r7,24592
	ctx.r4.s64 = ctx.r7.s64 + 24592;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,-31500
	ctx.r3.s64 = ctx.r6.s64 + -31500;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,24368
	ctx.r9.s64 = ctx.r9.s64 + 24368;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,288
	ctx.r6.s64 = 288;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323DC78"))) PPC_WEAK_FUNC(sub_8323DC78);
PPC_FUNC_IMPL(__imp__sub_8323DC78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r6,r10,24628
	ctx.r6.s64 = ctx.r10.s64 + 24628;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-31356
	ctx.r5.s64 = ctx.r9.s64 + -31356;
	// addi r4,r8,24676
	ctx.r4.s64 = ctx.r8.s64 + 24676;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-31452
	ctx.r3.s64 = ctx.r7.s64 + -31452;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,2
	r31.s64 = 2;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323DCF0"))) PPC_WEAK_FUNC(sub_8323DCF0);
PPC_FUNC_IMPL(__imp__sub_8323DCF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,30492
	ctx.r5.s64 = ctx.r10.s64 + 30492;
	// addi r4,r9,24708
	ctx.r4.s64 = ctx.r9.s64 + 24708;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r8,-31404
	ctx.r3.s64 = ctx.r8.s64 + -31404;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323DD58"))) PPC_WEAK_FUNC(sub_8323DD58);
PPC_FUNC_IMPL(__imp__sub_8323DD58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r9,r10,-7596
	ctx.r9.s64 = ctx.r10.s64 + -7596;
	// lwz r11,-7600(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -7600);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323DD70"))) PPC_WEAK_FUNC(sub_8323DD70);
PPC_FUNC_IMPL(__imp__sub_8323DD70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// addi r5,r10,-7596
	ctx.r5.s64 = ctx.r10.s64 + -7596;
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// lis r6,-31942
	ctx.r6.s64 = -2093350912;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r5,r8,30492
	ctx.r5.s64 = ctx.r8.s64 + 30492;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r4,r7,24896
	ctx.r4.s64 = ctx.r7.s64 + 24896;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r3,r6,-31356
	ctx.r3.s64 = ctx.r6.s64 + -31356;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r9,r9,24876
	ctx.r9.s64 = ctx.r9.s64 + 24876;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323DDE0"))) PPC_WEAK_FUNC(sub_8323DDE0);
PPC_FUNC_IMPL(__imp__sub_8323DDE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r9,r11,25744
	ctx.r9.s64 = r11.s64 + 25744;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r6,r9,20
	ctx.r6.s64 = ctx.r9.s64 + 20;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// li r11,0
	r11.s64 = 0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r5,r10,30492
	ctx.r5.s64 = ctx.r10.s64 + 30492;
	// addi r4,r8,25788
	ctx.r4.s64 = ctx.r8.s64 + 25788;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-31308
	ctx.r3.s64 = ctx.r7.s64 + -31308;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,1
	r31.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323DE58"))) PPC_WEAK_FUNC(sub_8323DE58);
PPC_FUNC_IMPL(__imp__sub_8323DE58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-31308
	ctx.r5.s64 = ctx.r10.s64 + -31308;
	// addi r4,r9,25808
	ctx.r4.s64 = ctx.r9.s64 + 25808;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r8,-31260
	ctx.r3.s64 = ctx.r8.s64 + -31260;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323DEC0"))) PPC_WEAK_FUNC(sub_8323DEC0);
PPC_FUNC_IMPL(__imp__sub_8323DEC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r6,r10,25848
	ctx.r6.s64 = ctx.r10.s64 + 25848;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-31116
	ctx.r5.s64 = ctx.r9.s64 + -31116;
	// addi r4,r8,25896
	ctx.r4.s64 = ctx.r8.s64 + 25896;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-31212
	ctx.r3.s64 = ctx.r7.s64 + -31212;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,2
	r31.s64 = 2;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323DF38"))) PPC_WEAK_FUNC(sub_8323DF38);
PPC_FUNC_IMPL(__imp__sub_8323DF38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r6,r10,25924
	ctx.r6.s64 = ctx.r10.s64 + 25924;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-31116
	ctx.r5.s64 = ctx.r9.s64 + -31116;
	// addi r4,r8,25948
	ctx.r4.s64 = ctx.r8.s64 + 25948;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-31164
	ctx.r3.s64 = ctx.r7.s64 + -31164;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,1
	r31.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,36
	ctx.r6.s64 = 36;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323DFB0"))) PPC_WEAK_FUNC(sub_8323DFB0);
PPC_FUNC_IMPL(__imp__sub_8323DFB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// addi r6,r10,25976
	ctx.r6.s64 = ctx.r10.s64 + 25976;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,30492
	ctx.r5.s64 = ctx.r9.s64 + 30492;
	// addi r4,r8,26072
	ctx.r4.s64 = ctx.r8.s64 + 26072;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-31116
	ctx.r3.s64 = ctx.r7.s64 + -31116;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,4
	r31.s64 = 4;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323E028"))) PPC_WEAK_FUNC(sub_8323E028);
PPC_FUNC_IMPL(__imp__sub_8323E028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// addi r6,r10,26104
	ctx.r6.s64 = ctx.r10.s64 + 26104;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,30492
	ctx.r5.s64 = ctx.r9.s64 + 30492;
	// addi r4,r8,26128
	ctx.r4.s64 = ctx.r8.s64 + 26128;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-31068
	ctx.r3.s64 = ctx.r7.s64 + -31068;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,1
	r31.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323E0A0"))) PPC_WEAK_FUNC(sub_8323E0A0);
PPC_FUNC_IMPL(__imp__sub_8323E0A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r9,r10,-7076
	ctx.r9.s64 = ctx.r10.s64 + -7076;
	// lwz r11,-7568(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -7568);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323E0B8"))) PPC_WEAK_FUNC(sub_8323E0B8);
PPC_FUNC_IMPL(__imp__sub_8323E0B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r6,r10,-7076
	ctx.r6.s64 = ctx.r10.s64 + -7076;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,30288
	ctx.r4.s64 = ctx.r8.s64 + 30288;
	// addi r3,r7,-31020
	ctx.r3.s64 = ctx.r7.s64 + -31020;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r9,r9,28224
	ctx.r9.s64 = ctx.r9.s64 + 28224;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323E128"))) PPC_WEAK_FUNC(sub_8323E128);
PPC_FUNC_IMPL(__imp__sub_8323E128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r6,r10,28264
	ctx.r6.s64 = ctx.r10.s64 + 28264;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-31020
	ctx.r5.s64 = ctx.r9.s64 + -31020;
	// addi r4,r8,30308
	ctx.r4.s64 = ctx.r8.s64 + 30308;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-30972
	ctx.r3.s64 = ctx.r7.s64 + -30972;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,2
	r31.s64 = 2;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323E1A0"))) PPC_WEAK_FUNC(sub_8323E1A0);
PPC_FUNC_IMPL(__imp__sub_8323E1A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,28312
	ctx.r7.s64 = ctx.r10.s64 + 28312;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,30332
	ctx.r4.s64 = ctx.r9.s64 + 30332;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-30924
	ctx.r3.s64 = ctx.r8.s64 + -30924;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323E210"))) PPC_WEAK_FUNC(sub_8323E210);
PPC_FUNC_IMPL(__imp__sub_8323E210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r6,r10,28336
	ctx.r6.s64 = ctx.r10.s64 + 28336;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-31020
	ctx.r5.s64 = ctx.r9.s64 + -31020;
	// addi r4,r8,30348
	ctx.r4.s64 = ctx.r8.s64 + 30348;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-30876
	ctx.r3.s64 = ctx.r7.s64 + -30876;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,8
	r31.s64 = 8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323E288"))) PPC_WEAK_FUNC(sub_8323E288);
PPC_FUNC_IMPL(__imp__sub_8323E288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-31020
	ctx.r5.s64 = ctx.r10.s64 + -31020;
	// addi r4,r9,30380
	ctx.r4.s64 = ctx.r9.s64 + 30380;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r8,-30828
	ctx.r3.s64 = ctx.r8.s64 + -30828;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323E2F0"))) PPC_WEAK_FUNC(sub_8323E2F0);
PPC_FUNC_IMPL(__imp__sub_8323E2F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r6,r10,28528
	ctx.r6.s64 = ctx.r10.s64 + 28528;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-31020
	ctx.r5.s64 = ctx.r9.s64 + -31020;
	// addi r4,r8,30408
	ctx.r4.s64 = ctx.r8.s64 + 30408;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-30780
	ctx.r3.s64 = ctx.r7.s64 + -30780;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,1
	r31.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323E368"))) PPC_WEAK_FUNC(sub_8323E368);
PPC_FUNC_IMPL(__imp__sub_8323E368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r6,r10,28552
	ctx.r6.s64 = ctx.r10.s64 + 28552;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-31020
	ctx.r5.s64 = ctx.r9.s64 + -31020;
	// addi r4,r8,30440
	ctx.r4.s64 = ctx.r8.s64 + 30440;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-30732
	ctx.r3.s64 = ctx.r7.s64 + -30732;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,2
	r31.s64 = 2;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,144
	ctx.r6.s64 = 144;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323E3E0"))) PPC_WEAK_FUNC(sub_8323E3E0);
PPC_FUNC_IMPL(__imp__sub_8323E3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r6,r10,28600
	ctx.r6.s64 = ctx.r10.s64 + 28600;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-31020
	ctx.r5.s64 = ctx.r9.s64 + -31020;
	// addi r4,r8,30476
	ctx.r4.s64 = ctx.r8.s64 + 30476;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-30684
	ctx.r3.s64 = ctx.r7.s64 + -30684;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,2
	r31.s64 = 2;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323E458"))) PPC_WEAK_FUNC(sub_8323E458);
PPC_FUNC_IMPL(__imp__sub_8323E458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r6,r10,28648
	ctx.r6.s64 = ctx.r10.s64 + 28648;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-31020
	ctx.r5.s64 = ctx.r9.s64 + -31020;
	// addi r4,r8,30516
	ctx.r4.s64 = ctx.r8.s64 + 30516;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-30636
	ctx.r3.s64 = ctx.r7.s64 + -30636;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,2
	r31.s64 = 2;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323E4D0"))) PPC_WEAK_FUNC(sub_8323E4D0);
PPC_FUNC_IMPL(__imp__sub_8323E4D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r6,r10,28696
	ctx.r6.s64 = ctx.r10.s64 + 28696;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-31020
	ctx.r5.s64 = ctx.r9.s64 + -31020;
	// addi r4,r8,30552
	ctx.r4.s64 = ctx.r8.s64 + 30552;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-30588
	ctx.r3.s64 = ctx.r7.s64 + -30588;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,1
	r31.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323E548"))) PPC_WEAK_FUNC(sub_8323E548);
PPC_FUNC_IMPL(__imp__sub_8323E548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r6,r10,28720
	ctx.r6.s64 = ctx.r10.s64 + 28720;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-31020
	ctx.r5.s64 = ctx.r9.s64 + -31020;
	// addi r4,r8,30584
	ctx.r4.s64 = ctx.r8.s64 + 30584;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-30540
	ctx.r3.s64 = ctx.r7.s64 + -30540;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,1
	r31.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

