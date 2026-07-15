#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82EE2E60"))) PPC_WEAK_FUNC(sub_82EE2E60);
PPC_FUNC_IMPL(__imp__sub_82EE2E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x831b0b28
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r10,-15584
	ctx.r5.s64 = ctx.r10.s64 + -15584;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r8,r11,-23648
	ctx.r8.s64 = r11.s64 + -23648;
	// addi r4,r9,-15600
	ctx.r4.s64 = ctx.r9.s64 + -15600;
	// li r6,16
	ctx.r6.s64 = 16;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lvx128 v13,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r31,-32255
	r31.s64 = -2113863680;
	// lvx128 v12,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r7,-15612
	ctx.r5.s64 = ctx.r7.s64 + -15612;
	// stvx128 v0,r3,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// li r8,64
	ctx.r8.s64 = 64;
	// li r6,48
	ctx.r6.s64 = 48;
	// lfs f13,2244(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// lfs f0,-11900(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -11900);
	f0.f64 = double(temp.f32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// lfs f12,-14888(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + -14888);
	ctx.f12.f64 = double(temp.f32);
	// stb r10,190(r3)
	PPC_STORE_U8(ctx.r3.u32 + 190, ctx.r10.u8);
	// li r11,0
	r11.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// li r31,250
	r31.s64 = 250;
	// stfs f0,116(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// lis r30,-32255
	r30.s64 = -2113863680;
	// stfs f13,120(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// lis r29,-32245
	r29.s64 = -2113208320;
	// stw r9,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r9.u32);
	// lis r28,-32255
	r28.s64 = -2113863680;
	// stvx128 v13,r3,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stw r31,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, r31.u32);
	// lfs f0,-15620(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -15620);
	f0.f64 = double(temp.f32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, r11.u32);
	// lfs f13,-15624(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -15624);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, r11.u32);
	// stfs f12,36(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, r11.u32);
	// stvx128 v12,r3,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r10,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r10.u32);
	// stb r11,132(r3)
	PPC_STORE_U8(ctx.r3.u32 + 132, r11.u8);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stfs f0,136(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stfs f13,140(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// stb r11,144(r3)
	PPC_STORE_U8(ctx.r3.u32 + 144, r11.u8);
	// lfs f0,-24412(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -24412);
	f0.f64 = double(temp.f32);
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r11.u8);
	// lfs f13,-17192(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + -17192);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// stfs f0,80(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// li r31,20
	r31.s64 = 20;
	// stfs f13,172(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// stb r10,180(r3)
	PPC_STORE_U8(ctx.r3.u32 + 180, ctx.r10.u8);
	// lfs f0,-9488(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + -9488);
	f0.f64 = double(temp.f32);
	// stw r9,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r9.u32);
	// lfs f13,-24456(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -24456);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r10.u32);
	// stfs f0,168(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stfs f13,92(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lfs f0,-22340(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -22340);
	f0.f64 = double(temp.f32);
	// lfs f13,-24792(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -24792);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,100(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f13,148(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stb r11,145(r3)
	PPC_STORE_U8(ctx.r3.u32 + 145, r11.u8);
	// stw r31,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, r31.u32);
	// lfs f0,-10412(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -10412);
	f0.f64 = double(temp.f32);
	// stb r10,188(r3)
	PPC_STORE_U8(ctx.r3.u32 + 188, ctx.r10.u8);
	// stb r10,167(r3)
	PPC_STORE_U8(ctx.r3.u32 + 167, ctx.r10.u8);
	// stfs f0,200(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// stw r8,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r8.u32);
	// stb r11,164(r3)
	PPC_STORE_U8(ctx.r3.u32 + 164, r11.u8);
	// stb r11,165(r3)
	PPC_STORE_U8(ctx.r3.u32 + 165, r11.u8);
	// stb r11,166(r3)
	PPC_STORE_U8(ctx.r3.u32 + 166, r11.u8);
	// stb r9,112(r3)
	PPC_STORE_U8(ctx.r3.u32 + 112, ctx.r9.u8);
	// stb r9,189(r3)
	PPC_STORE_U8(ctx.r3.u32 + 189, ctx.r9.u8);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, r11.u32);
	// stb r10,196(r3)
	PPC_STORE_U8(ctx.r3.u32 + 196, ctx.r10.u8);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EE2FD0"))) PPC_WEAK_FUNC(sub_82EE2FD0);
PPC_FUNC_IMPL(__imp__sub_82EE2FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r3,48
	r11.s64 = ctx.r3.s64 + 48;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r10,r3,64
	ctx.r10.s64 = ctx.r3.s64 + 64;
	// lfs f0,-24784(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24784);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f0,48(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v13,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// lfs f0,-22120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -22120);
	f0.f64 = double(temp.f32);
	// stvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f13,64(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lvx128 v12,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v11,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// stvx128 v11,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE3018"))) PPC_WEAK_FUNC(sub_82EE3018);
PPC_FUNC_IMPL(__imp__sub_82EE3018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32237
	r11.s64 = -2112684032;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-15612
	ctx.r9.s64 = r11.s64 + -15612;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-14888(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -14888);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE3058"))) PPC_WEAK_FUNC(sub_82EE3058);
PPC_FUNC_IMPL(__imp__sub_82EE3058) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE3060"))) PPC_WEAK_FUNC(sub_82EE3060);
PPC_FUNC_IMPL(__imp__sub_82EE3060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r3,160
	r11.s64 = ctx.r3.s64 + 160;
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r11,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r4,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE3080"))) PPC_WEAK_FUNC(sub_82EE3080);
PPC_FUNC_IMPL(__imp__sub_82EE3080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r4,r3,160
	ctx.r4.s64 = ctx.r3.s64 + 160;
	// li r11,16
	r11.s64 = 16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r10,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r4,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82ede198
	sub_82EDE198(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE30A0"))) PPC_WEAK_FUNC(sub_82EE30A0);
PPC_FUNC_IMPL(__imp__sub_82EE30A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,0(r13)
	r25.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r24,24
	r24.s64 = 24;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwzx r11,r24,r25
	r11.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ee30ec
	if (!cr6.lt) goto loc_82EE30EC;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r8,r9,-15568
	ctx.r8.s64 = ctx.r9.s64 + -15568;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
loc_82EE30EC:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// beq cr6,0x82ee3124
	if (cr6.eq) goto loc_82EE3124;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ee3124
	if (cr6.eq) goto loc_82EE3124;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// b 0x82ee3128
	goto loc_82EE3128;
loc_82EE3124:
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
loc_82EE3128:
	// lwz r11,196(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// lwz r31,192(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82ee3200
	if (cr0.lt) goto loc_82EE3200;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r28,16
	r28.s64 = 16;
	// addi r29,r11,4496
	r29.s64 = r11.s64 + 4496;
loc_82EE3144:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ee31f4
	if (cr6.eq) goto loc_82EE31F4;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lvx128 v13,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,48
	ctx.r10.s64 = r11.s64 + 48;
	// lvx128 v12,r30,r28
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32 + r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// addi r8,r11,32
	ctx.r8.s64 = r11.s64 + 32;
	// lvx128 v11,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lvx128 v10,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// vsubfp v9,v13,v10
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32)));
	// lvx128 v8,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v6,v8,v9
	simde_mm_store_ps(ctx.v6.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v9.f32), 0xEF));
	// vmsum3fp128 v5,v7,v9
	simde_mm_store_ps(ctx.v5.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v9.f32), 0xEF));
	// vmsum3fp128 v4,v11,v9
	simde_mm_store_ps(ctx.v4.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32), 0xEF));
	// vmrghw v3,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vmrghw v2,v4,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), simde_mm_load_si128((simde__m128i*)ctx.v4.u32)));
	// vmrghw v1,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), simde_mm_load_si128((simde__m128i*)ctx.v2.u32)));
	// stvx128 v1,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v29,r0,r11
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v31,r0,r9
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v30,r0,r8
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v28,r0,r10
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v27,v12,v28
	simde_mm_store_ps(v27.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(v28.f32)));
	// vmsum3fp128 v26,v31,v27
	simde_mm_store_ps(v26.f32, simde_mm_dp_ps(simde_mm_load_ps(v31.f32), simde_mm_load_ps(v27.f32), 0xEF));
	// vmsum3fp128 v25,v30,v27
	simde_mm_store_ps(v25.f32, simde_mm_dp_ps(simde_mm_load_ps(v30.f32), simde_mm_load_ps(v27.f32), 0xEF));
	// vmsum3fp128 v24,v29,v27
	simde_mm_store_ps(v24.f32, simde_mm_dp_ps(simde_mm_load_ps(v29.f32), simde_mm_load_ps(v27.f32), 0xEF));
	// vmrghw v23,v26,v0
	simde_mm_store_si128((simde__m128i*)v23.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)v26.u32)));
	// vmrghw v22,v24,v25
	simde_mm_store_si128((simde__m128i*)v22.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v25.u32), simde_mm_load_si128((simde__m128i*)v24.u32)));
	// vmrghw v21,v22,v23
	simde_mm_store_si128((simde__m128i*)v21.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v23.u32), simde_mm_load_si128((simde__m128i*)v22.u32)));
	// stvx128 v21,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EE31F4:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bge 0x82ee3144
	if (!cr0.lt) goto loc_82EE3144;
loc_82EE3200:
	// lwzx r10,r24,r25
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ee3230
	if (!cr6.lt) goto loc_82EE3230;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-14788
	ctx.r8.s64 = ctx.r9.s64 + -14788;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82EE3230:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EE3238"))) PPC_WEAK_FUNC(sub_82EE3238);
PPC_FUNC_IMPL(__imp__sub_82EE3238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,0(r13)
	r25.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r24,24
	r24.s64 = 24;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwzx r11,r24,r25
	r11.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ee3284
	if (!cr6.lt) goto loc_82EE3284;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r8,r9,-15568
	ctx.r8.s64 = ctx.r9.s64 + -15568;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
loc_82EE3284:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// beq cr6,0x82ee32bc
	if (cr6.eq) goto loc_82EE32BC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ee32bc
	if (cr6.eq) goto loc_82EE32BC;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// b 0x82ee32c0
	goto loc_82EE32C0;
loc_82EE32BC:
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
loc_82EE32C0:
	// lwz r11,196(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// lwz r27,192(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82ee33ac
	if (cr0.lt) goto loc_82EE33AC;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r28,16
	r28.s64 = 16;
	// addi r29,r11,4496
	r29.s64 = r11.s64 + 4496;
loc_82EE32DC:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ee33a0
	if (cr6.eq) goto loc_82EE33A0;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lvx128 v13,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,48
	ctx.r10.s64 = r11.s64 + 48;
	// lvx128 v12,r31,r28
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// addi r8,r11,32
	ctx.r8.s64 = r11.s64 + 32;
	// lvx128 v11,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r23,r1,112
	r23.s64 = ctx.r1.s64 + 112;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lvx128 v10,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// vsubfp v9,v13,v10
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32)));
	// lvx128 v8,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// vmsum3fp128 v6,v8,v9
	simde_mm_store_ps(ctx.v6.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v9.f32), 0xEF));
	// vmsum3fp128 v5,v7,v9
	simde_mm_store_ps(ctx.v5.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v9.f32), 0xEF));
	// vmsum3fp128 v4,v11,v9
	simde_mm_store_ps(ctx.v4.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32), 0xEF));
	// vmrghw v3,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vmrghw v2,v4,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), simde_mm_load_si128((simde__m128i*)ctx.v4.u32)));
	// vmrghw v1,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), simde_mm_load_si128((simde__m128i*)ctx.v2.u32)));
	// stvx128 v1,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v29,r0,r11
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v31,r0,r9
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v30,r0,r8
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v28,r0,r10
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v27,v12,v28
	simde_mm_store_ps(v27.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(v28.f32)));
	// vmsum3fp128 v26,v31,v27
	simde_mm_store_ps(v26.f32, simde_mm_dp_ps(simde_mm_load_ps(v31.f32), simde_mm_load_ps(v27.f32), 0xEF));
	// vmsum3fp128 v25,v30,v27
	simde_mm_store_ps(v25.f32, simde_mm_dp_ps(simde_mm_load_ps(v30.f32), simde_mm_load_ps(v27.f32), 0xEF));
	// vmsum3fp128 v24,v29,v27
	simde_mm_store_ps(v24.f32, simde_mm_dp_ps(simde_mm_load_ps(v29.f32), simde_mm_load_ps(v27.f32), 0xEF));
	// vmrghw v23,v26,v0
	simde_mm_store_si128((simde__m128i*)v23.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)v26.u32)));
	// vmrghw v22,v24,v25
	simde_mm_store_si128((simde__m128i*)v22.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v25.u32), simde_mm_load_si128((simde__m128i*)v24.u32)));
	// vmrghw v21,v22,v23
	simde_mm_store_si128((simde__m128i*)v21.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v23.u32), simde_mm_load_si128((simde__m128i*)v22.u32)));
	// stvx128 v21,r0,r23
	simde_mm_store_si128((simde__m128i*)(base + ((r23.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ee33a0
	if (cr6.eq) goto loc_82EE33A0;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r11,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r11.u32);
loc_82EE33A0:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// bge 0x82ee32dc
	if (!cr0.lt) goto loc_82EE32DC;
loc_82EE33AC:
	// lwz r11,80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ee33c8
	if (cr6.eq) goto loc_82EE33C8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eaf210
	sub_82EAF210(ctx, base);
loc_82EE33C8:
	// lwzx r10,r24,r25
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ee33f8
	if (!cr6.lt) goto loc_82EE33F8;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-14788
	ctx.r8.s64 = ctx.r9.s64 + -14788;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82EE33F8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82EE3400"))) PPC_WEAK_FUNC(sub_82EE3400);
PPC_FUNC_IMPL(__imp__sub_82EE3400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,196(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 196);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82ee3430
	if (!cr6.gt) goto loc_82EE3430;
	// lwz r10,192(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 192);
loc_82EE3414:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// beq cr6,0x82ee343c
	if (cr6.eq) goto loc_82EE343C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82ee3414
	if (cr6.lt) goto loc_82EE3414;
loc_82EE3430:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82EE343C:
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE3448"))) PPC_WEAK_FUNC(sub_82EE3448);
PPC_FUNC_IMPL(__imp__sub_82EE3448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82edef18
	sub_82EDEF18(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ee34b0
	if (!cr6.eq) goto loc_82EE34B0;
	// addi r31,r31,192
	r31.s64 = r31.s64 + 192;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ee3494
	if (!cr6.eq) goto loc_82EE3494;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EE3494:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
loc_82EE34B0:
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

__attribute__((alias("__imp__sub_82EE34C8"))) PPC_WEAK_FUNC(sub_82EE34C8);
PPC_FUNC_IMPL(__imp__sub_82EE34C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// lwz r9,196(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82ee3510
	if (!cr6.gt) goto loc_82EE3510;
	// lwz r10,192(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 192);
loc_82EE34F4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ee3578
	if (cr6.eq) goto loc_82EE3578;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82ee34f4
	if (cr6.lt) goto loc_82EE34F4;
loc_82EE3510:
	// li r31,-1
	r31.s64 = -1;
loc_82EE3514:
	// cntlzw r11,r31
	r11.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// cntlzw r9,r11
	ctx.r9.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// bl 0x82edef88
	sub_82EDEF88(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x82ee3560
	if (cr6.lt) goto loc_82EE3560;
	// lwz r11,196(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,192(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,196(r30)
	PPC_STORE_U32(r30.u32 + 196, r11.u32);
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stwx r7,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u32);
loc_82EE3560:
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
loc_82EE3578:
	// mr r31,r11
	r31.u64 = r11.u64;
	// b 0x82ee3514
	goto loc_82EE3514;
}

__attribute__((alias("__imp__sub_82EE3580"))) PPC_WEAK_FUNC(sub_82EE3580);
PPC_FUNC_IMPL(__imp__sub_82EE3580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-15540
	ctx.r4.s64 = ctx.r10.s64 + -15540;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eddf88
	sub_82EDDF88(ctx, base);
	// lwz r11,200(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 200);
	// rlwinm r8,r11,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82ee360c
	if (!cr6.eq) goto loc_82EE360C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lwz r7,196(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,192(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// addi r4,r9,-15556
	ctx.r4.s64 = ctx.r9.s64 + -15556;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EE360C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82EE3638"))) PPC_WEAK_FUNC(sub_82EE3638);
PPC_FUNC_IMPL(__imp__sub_82EE3638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r10,r11,-15880
	ctx.r10.s64 = r11.s64 + -15880;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r11,200(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// rlwinm r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82ee3684
	if (!cr6.eq) goto loc_82EE3684;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,192(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EE3684:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ede100
	sub_82EDE100(ctx, base);
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

__attribute__((alias("__imp__sub_82EE36A0"))) PPC_WEAK_FUNC(sub_82EE36A0);
PPC_FUNC_IMPL(__imp__sub_82EE36A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b10
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,24
	ctx.r10.s64 = 24;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// add r22,r10,r11
	r22.u64 = ctx.r10.u64 + r11.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ee36f8
	if (!cr6.lt) goto loc_82EE36F8;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r8,r9,-15528
	ctx.r8.s64 = ctx.r9.s64 + -15528;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r4,r10,12
	ctx.r4.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r4.u32);
loc_82EE36F8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r10,48
	ctx.r10.s64 = 48;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lvx128 v13,r11,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f0,-12568(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12568);
	f0.f64 = double(temp.f32);
	// vsubfp v12,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stfs f0,192(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lwz r11,108(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r11,32
	ctx.r10.s64 = r11.s64 + 32;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// vmsum3fp128 v11,v12,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32), 0xEF));
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r30,r1,176
	r30.s64 = ctx.r1.s64 + 176;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stvx128 v11,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lfs f0,208(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	f0.f64 = double(temp.f32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(f0.f64)));
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// li r7,32
	ctx.r7.s64 = 32;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// addi r29,r1,88
	r29.s64 = ctx.r1.s64 + 88;
	// lvx128 v10,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,84
	r27.s64 = ctx.r1.s64 + 84;
	// stvx128 v10,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r28,8
	ctx.r9.s64 = r28.s64 + 8;
	// lvx128 v9,r10,r8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v9,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r10,r7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v8,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx v7,0,r29
	temp.u32 = r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r6,108(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// vspltw v6,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), 0xFF));
	// stw r6,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r6.u32);
	// stvx128 v12,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvewx v6,r0,r27
	ea = (r27.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v6.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lfs f11,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,196(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 196);
	// lfs f10,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,196(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f10,192(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r29,116(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	// lwz r10,112(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// ble cr6,0x82ee3894
	if (!cr6.gt) goto loc_82EE3894;
	// addi r27,r10,8
	r27.s64 = ctx.r10.s64 + 8;
	// li r26,0
	r26.s64 = 0;
	// mr r23,r11
	r23.u64 = r11.u64;
loc_82EE37F4:
	// lwz r11,192(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 192);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r30,r26,r11
	r30.u64 = PPC_LOAD_U32(r26.u32 + r11.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ee3888
	if (cr6.eq) goto loc_82EE3888;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ee3888
	if (cr6.eq) goto loc_82EE3888;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// beq cr6,0x82ee3888
	if (cr6.eq) goto loc_82EE3888;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// addi r8,r11,13
	ctx.r8.s64 = r11.s64 + 13;
	// rlwinm r11,r8,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbzx r11,r11,r29
	r11.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 2);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r29
	ctx.r9.u64 = r11.u64 + r29.u64;
	// lwz r8,2476(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2476);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EE3888:
	// addic. r23,r23,-1
	xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// bne 0x82ee37f4
	if (!cr0.eq) goto loc_82EE37F4;
loc_82EE3894:
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ee38c4
	if (!cr6.lt) goto loc_82EE38C4;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-14788
	ctx.r8.s64 = ctx.r9.s64 + -14788;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82EE38C4:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_82EE38D0"))) PPC_WEAK_FUNC(sub_82EE38D0);
PPC_FUNC_IMPL(__imp__sub_82EE38D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,196(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ee3940
	if (!cr6.eq) goto loc_82EE3940;
	// lwz r11,200(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 200);
	// addi r31,r30,192
	r31.s64 = r30.s64 + 192;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ee3924
	if (!cr6.eq) goto loc_82EE3924;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EE3924:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,0
	r11.s64 = 0;
	// rlwimi r10,r9,31,2,0
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 31) & 0xFFFFFFFFBFFFFFFF) | (ctx.r10.u64 & 0x40000000);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_82EE3940:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ede040
	sub_82EDE040(ctx, base);
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

__attribute__((alias("__imp__sub_82EE3960"))) PPC_WEAK_FUNC(sub_82EE3960);
PPC_FUNC_IMPL(__imp__sub_82EE3960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82edda18
	sub_82EDDA18(ctx, base);
	// addi r10,r31,16
	ctx.r10.s64 = r31.s64 + 16;
	// li r11,0
	r11.s64 = 0;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// subf r7,r10,r31
	ctx.r7.s64 = r31.s64 - ctx.r10.s64;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// stw r9,136(r31)
	PPC_STORE_U32(r31.u32 + 136, ctx.r9.u32);
	// addi r10,r31,160
	ctx.r10.s64 = r31.s64 + 160;
	// addi r6,r8,-15880
	ctx.r6.s64 = ctx.r8.s64 + -15880;
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r9,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r9.u32);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// stb r7,32(r31)
	PPC_STORE_U8(r31.u32 + 32, ctx.r7.u8);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r11.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r11.u32);
	// stw r9,200(r31)
	PPC_STORE_U32(r31.u32 + 200, ctx.r9.u32);
	// lvx128 v0,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r30,r8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r10,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r5,200(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// clrlwi r11,r5,2
	r11.u64 = ctx.r5.u32 & 0x3FFFFFFF;
	// stw r29,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ee3a08
	if (cr6.eq) goto loc_82EE3A08;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82ee3a30
	if (cr6.eq) goto loc_82EE3A30;
loc_82EE3A08:
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// bge cr6,0x82ee3a18
	if (!cr6.lt) goto loc_82EE3A18;
	// li r4,4
	ctx.r4.s64 = 4;
loc_82EE3A18:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// bge cr6,0x82ee3a30
	if (!cr6.lt) goto loc_82EE3A30;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EE3A30:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EE3A40"))) PPC_WEAK_FUNC(sub_82EE3A40);
PPC_FUNC_IMPL(__imp__sub_82EE3A40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r13)
	r29.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r28,20
	r28.s64 = 20;
	// li r5,49
	ctx.r5.s64 = 49;
	// li r4,208
	ctx.r4.s64 = 208;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r11,208
	r11.s64 = 208;
	// addi r4,r27,160
	ctx.r4.s64 = r27.s64 + 160;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// lwz r5,44(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 44);
	// bl 0x82ee3960
	sub_82EE3960(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r10,136(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 136);
	// addi r31,r26,128
	r31.s64 = r26.s64 + 128;
	// lwz r9,132(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 132);
	// addi r30,r27,128
	r30.s64 = r27.s64 + 128;
	// clrlwi r11,r10,2
	r11.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x82ee3ae8
	if (!cr6.lt) goto loc_82EE3AE8;
	// rlwinm r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ee3abc
	if (!cr6.eq) goto loc_82EE3ABC;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EE3ABC:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r5,23
	ctx.r5.s64 = 23;
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// rlwinm r9,r10,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
loc_82EE3AE8:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// ble cr6,0x82ee3b18
	if (!cr6.gt) goto loc_82EE3B18;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
loc_82EE3B04:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82ee3b04
	if (!cr0.eq) goto loc_82EE3B04;
loc_82EE3B18:
	// lwz r10,148(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 148);
	// addi r31,r26,140
	r31.s64 = r26.s64 + 140;
	// lwz r9,144(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 144);
	// addi r30,r27,140
	r30.s64 = r27.s64 + 140;
	// clrlwi r11,r10,2
	r11.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x82ee3b80
	if (!cr6.lt) goto loc_82EE3B80;
	// rlwinm r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ee3b54
	if (!cr6.eq) goto loc_82EE3B54;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EE3B54:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r5,23
	ctx.r5.s64 = 23;
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// rlwinm r9,r10,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
loc_82EE3B80:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// ble cr6,0x82ee3bb0
	if (!cr6.gt) goto loc_82EE3BB0;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
loc_82EE3B9C:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82ee3b9c
	if (!cr0.eq) goto loc_82EE3B9C;
loc_82EE3BB0:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82ed4c90
	sub_82ED4C90(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82EE3BC8"))) PPC_WEAK_FUNC(sub_82EE3BC8);
PPC_FUNC_IMPL(__imp__sub_82EE3BC8) {
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
	PPCRegister f0{};
	PPCVRegister v14{};
	PPCVRegister v15{};
	PPCVRegister v16{};
	PPCVRegister v17{};
	PPCVRegister v18{};
	PPCVRegister v19{};
	PPCVRegister v20{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCVRegister v51{};
	PPCVRegister v52{};
	PPCVRegister v53{};
	PPCVRegister v54{};
	PPCVRegister v55{};
	PPCVRegister v56{};
	PPCVRegister v57{};
	PPCVRegister v58{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x831b0b08
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,-128
	r30.s64 = ctx.r1.s64 + -128;
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// addi r27,r1,-128
	r27.s64 = ctx.r1.s64 + -128;
	// addi r25,r1,-128
	r25.s64 = ctx.r1.s64 + -128;
	// addi r22,r1,-128
	r22.s64 = ctx.r1.s64 + -128;
	// addi r20,r1,-128
	r20.s64 = ctx.r1.s64 + -128;
	// addi r26,r1,-128
	r26.s64 = ctx.r1.s64 + -128;
	// addi r23,r1,-128
	r23.s64 = ctx.r1.s64 + -128;
	// addi r21,r1,-128
	r21.s64 = ctx.r1.s64 + -128;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r31,r3,32
	r31.s64 = ctx.r3.s64 + 32;
	// li r29,32
	r29.s64 = 32;
	// addi r10,r31,16
	ctx.r10.s64 = r31.s64 + 16;
	// li r24,80
	r24.s64 = 80;
	// lfs f0,2244(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// addi r11,r3,96
	r11.s64 = ctx.r3.s64 + 96;
	// li r28,16
	r28.s64 = 16;
	// stvx128 v13,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r11,16
	ctx.r8.s64 = r11.s64 + 16;
	// lfs f13,-128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f11,f0,f12
	ctx.f11.f64 = double(float(f0.f64 / ctx.f12.f64));
	// stfs f11,-128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// lvx128 v12,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v11,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// vmulfp128 v10,v0,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)));
	// li r27,144
	r27.s64 = 144;
	// addi r30,r3,176
	r30.s64 = ctx.r3.s64 + 176;
	// stvx128 v10,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v8,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vmsum3fp128 v7,v8,v8
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v8.f32), 0xEF));
	// stvx128 v9,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v7,r0,r26
	simde_mm_store_si128((simde__m128i*)(base + ((r26.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f10,-128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f10.f64 = double(temp.f32);
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// fdivs f8,f0,f9
	ctx.f8.f64 = double(float(f0.f64 / ctx.f9.f64));
	// stfs f8,-128(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// lvx128 v6,r0,r25
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r25.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v5,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), 0xFF));
	// vmulfp128 v4,v8,v5
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v4.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v5.f32)));
	// vor v2,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// stvx128 v4,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v31,v3,135
	simde_mm_store_si128((simde__m128i*)v31.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), 0x78));
	// vpermwi128 v1,v2,99
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.u32), 0x9C));
	// vpermwi128 v30,v2,135
	simde_mm_store_si128((simde__m128i*)v30.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.u32), 0x78));
	// vpermwi128 v29,v3,99
	simde_mm_store_si128((simde__m128i*)v29.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), 0x9C));
	// vmulfp128 v28,v31,v1
	simde_mm_store_ps(v28.f32, simde_mm_mul_ps(simde_mm_load_ps(v31.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v27,v29,v30
	simde_mm_store_ps(v27.f32, simde_mm_mul_ps(simde_mm_load_ps(v29.f32), simde_mm_load_ps(v30.f32)));
	// vsubfp v26,v27,v28
	simde_mm_store_ps(v26.f32, simde_mm_sub_ps(simde_mm_load_ps(v27.f32), simde_mm_load_ps(v28.f32)));
	// stvx128 v26,r31,r29
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v25,r0,r4
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r3,r24
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + r24.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v24,r0,r9
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v23,v24,v24
	simde_mm_store_ps(v23.f32, simde_mm_dp_ps(simde_mm_load_ps(v24.f32), simde_mm_load_ps(v24.f32), 0xEF));
	// stvx128 v23,r0,r23
	simde_mm_store_si128((simde__m128i*)(base + ((r23.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f7,-128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f7.f64 = double(temp.f32);
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fdivs f5,f0,f6
	ctx.f5.f64 = double(float(f0.f64 / ctx.f6.f64));
	// stfs f5,-128(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// lvx128 v22,r0,r22
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r22.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v21,v22,0
	simde_mm_store_si128((simde__m128i*)v21.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v22.u32), 0xFF));
	// vmulfp128 v20,v24,v21
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v20.f32, simde_mm_mul_ps(simde_mm_load_ps(v24.f32), simde_mm_load_ps(v21.f32)));
	// stvx128 v20,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v19,r0,r7
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v18,v19,v19
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_load_si128((simde__m128i*)v19.u8));
	// vmsum3fp128 v17,v18,v18
	simde_mm_store_ps(v17.f32, simde_mm_dp_ps(simde_mm_load_ps(v18.f32), simde_mm_load_ps(v18.f32), 0xEF));
	// stvx128 v19,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r0,r21
	simde_mm_store_si128((simde__m128i*)(base + ((r21.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f4,-128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f4.f64 = double(temp.f32);
	// fsqrts f3,f4
	ctx.f3.f64 = double(float(sqrt(ctx.f4.f64)));
	// fdivs f2,f0,f3
	ctx.f2.f64 = double(float(f0.f64 / ctx.f3.f64));
	// stfs f2,-128(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// lvx128 v16,r0,r20
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r20.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v15,v16,0
	simde_mm_store_si128((simde__m128i*)v15.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v16.u32), 0xFF));
	// vmulfp128 v14,v18,v15
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v14.f32, simde_mm_mul_ps(simde_mm_load_ps(v18.f32), simde_mm_load_ps(v15.f32)));
	// stvx128 v14,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v63,v14,v14
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_load_si128((simde__m128i*)v14.u8));
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v61,v63,99
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0x9C));
	// vpermwi128 v60,v62,135
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0x78));
	// vpermwi128 v59,v63,135
	simde_mm_store_si128((simde__m128i*)v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0x78));
	// vpermwi128 v58,v62,99
	simde_mm_store_si128((simde__m128i*)v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0x9C));
	// vmulfp128 v57,v60,v61
	simde_mm_store_ps(v57.f32, simde_mm_mul_ps(simde_mm_load_ps(v60.f32), simde_mm_load_ps(v61.f32)));
	// vmulfp128 v56,v58,v59
	simde_mm_store_ps(v56.f32, simde_mm_mul_ps(simde_mm_load_ps(v58.f32), simde_mm_load_ps(v59.f32)));
	// vsubfp128 v55,v56,v57
	simde_mm_store_ps(v55.f32, simde_mm_sub_ps(simde_mm_load_ps(v56.f32), simde_mm_load_ps(v57.f32)));
	// stvx128 v55,r11,r29
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r0,r5
	simde_mm_store_si128((simde__m128i*)v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v54,r3,r27
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r0,r11
	simde_mm_store_si128((simde__m128i*)v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v53,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r11,r28
	simde_mm_store_si128((simde__m128i*)v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v52,r30,r28
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32 + r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v51,r11,r29
	simde_mm_store_si128((simde__m128i*)v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v51,r30,r29
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32 + r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_82EE3D58"))) PPC_WEAK_FUNC(sub_82EE3D58);
PPC_FUNC_IMPL(__imp__sub_82EE3D58) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,298
	ctx.r4.s64 = 298;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82ef5d78
	sub_82EF5D78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE3D68"))) PPC_WEAK_FUNC(sub_82EE3D68);
PPC_FUNC_IMPL(__imp__sub_82EE3D68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,12
	r11.s64 = 12;
	// li r10,128
	ctx.r10.s64 = 128;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE3D80"))) PPC_WEAK_FUNC(sub_82EE3D80);
PPC_FUNC_IMPL(__imp__sub_82EE3D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,248(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE3D88"))) PPC_WEAK_FUNC(sub_82EE3D88);
PPC_FUNC_IMPL(__imp__sub_82EE3D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// extsb r11,r4
	r11.s64 = ctx.r4.s8;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 ^ 1;
	// mulli r7,r8,56
	ctx.r7.s64 = ctx.r8.s64 * 56;
	// stb r7,278(r3)
	PPC_STORE_U8(ctx.r3.u32 + 278, ctx.r7.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE3DA8"))) PPC_WEAK_FUNC(sub_82EE3DA8);
PPC_FUNC_IMPL(__imp__sub_82EE3DA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,1
	r11.s64 = 1;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// addi r4,r30,32
	ctx.r4.s64 = r30.s64 + 32;
	// lfs f31,-21804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -21804);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82ea8ec0
	sub_82EA8EC0(ctx, base);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r5,r6,1
	ctx.r5.u64 = ctx.r6.u64 ^ 1;
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// stb r5,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r5.u8);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82ee3e2c
	if (cr6.eq) goto loc_82EE3E2C;
	// addi r4,r30,96
	ctx.r4.s64 = r30.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea8ec0
	sub_82EA8EC0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x82ee3e30
	if (!cr6.eq) goto loc_82EE3E30;
loc_82EE3E2C:
	// li r11,0
	r11.s64 = 0;
loc_82EE3E30:
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82ee3e58
	if (cr6.eq) goto loc_82EE3E58;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,280(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4800(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4800);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x82ee3e5c
	if (cr6.eq) goto loc_82EE3E5C;
loc_82EE3E58:
	// li r11,0
	r11.s64 = 0;
loc_82EE3E5C:
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82ee3e84
	if (cr6.eq) goto loc_82EE3E84;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,284(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82ee3e88
	if (!cr6.lt) goto loc_82EE3E88;
loc_82EE3E84:
	// li r11,0
	r11.s64 = 0;
loc_82EE3E88:
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82ee3eb0
	if (cr6.eq) goto loc_82EE3EB0;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lfs f13,284(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-31184(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31184);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x82ee3eb4
	if (cr6.lt) goto loc_82EE3EB4;
loc_82EE3EB0:
	// li r11,0
	r11.s64 = 0;
loc_82EE3EB4:
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82ee3ed8
	if (cr6.eq) goto loc_82EE3ED8;
	// lfs f0,300(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 300);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,304(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82ee3edc
	if (!cr6.gt) goto loc_82EE3EDC;
loc_82EE3ED8:
	// li r11,0
	r11.s64 = 0;
loc_82EE3EDC:
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82ee3f00
	if (cr6.eq) goto loc_82EE3F00;
	// lfs f0,260(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 260);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,264(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82ee3f04
	if (!cr6.gt) goto loc_82EE3F04;
loc_82EE3F00:
	// li r11,0
	r11.s64 = 0;
loc_82EE3F04:
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE3F28"))) PPC_WEAK_FUNC(sub_82EE3F28);
PPC_FUNC_IMPL(__imp__sub_82EE3F28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r11,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r4,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r11,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r4,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE3F50"))) PPC_WEAK_FUNC(sub_82EE3F50);
PPC_FUNC_IMPL(__imp__sub_82EE3F50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r3,96
	r11.s64 = ctx.r3.s64 + 96;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r11,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r4,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r11,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r4,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE3F78"))) PPC_WEAK_FUNC(sub_82EE3F78);
PPC_FUNC_IMPL(__imp__sub_82EE3F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r3,176
	r11.s64 = ctx.r3.s64 + 176;
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r4,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r9
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r4,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE3FA0"))) PPC_WEAK_FUNC(sub_82EE3FA0);
PPC_FUNC_IMPL(__imp__sub_82EE3FA0) {
	PPC_FUNC_PROLOGUE();
	// addi r5,r3,32
	ctx.r5.s64 = ctx.r3.s64 + 32;
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// b 0x82eb1860
	sub_82EB1860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE3FB0"))) PPC_WEAK_FUNC(sub_82EE3FB0);
PPC_FUNC_IMPL(__imp__sub_82EE3FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r3,176
	r11.s64 = ctx.r3.s64 + 176;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r11,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r4,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r11,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r4,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE3FD8"))) PPC_WEAK_FUNC(sub_82EE3FD8);
PPC_FUNC_IMPL(__imp__sub_82EE3FD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,224(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE3FE0"))) PPC_WEAK_FUNC(sub_82EE3FE0);
PPC_FUNC_IMPL(__imp__sub_82EE3FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ee4014
	if (cr6.eq) goto loc_82EE4014;
	// lhz r11,4(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ee4014
	if (cr6.eq) goto loc_82EE4014;
	// lhz r11,6(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 6);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// sth r10,6(r30)
	PPC_STORE_U16(r30.u32 + 6, ctx.r10.u16);
loc_82EE4014:
	// addi r11,r4,56
	r11.s64 = ctx.r4.s64 + 56;
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r31,r29
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r29.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ee4060
	if (cr6.eq) goto loc_82EE4060;
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ee4060
	if (cr6.eq) goto loc_82EE4060;
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82ee4060
	if (!cr6.eq) goto loc_82EE4060;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EE4060:
	// stwx r30,r31,r29
	PPC_STORE_U32(r31.u32 + r29.u32, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EE4070"))) PPC_WEAK_FUNC(sub_82EE4070);
PPC_FUNC_IMPL(__imp__sub_82EE4070) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82ee3fe0
	sub_82EE3FE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE4080"))) PPC_WEAK_FUNC(sub_82EE4080);
PPC_FUNC_IMPL(__imp__sub_82EE4080) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,232(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE4088"))) PPC_WEAK_FUNC(sub_82EE4088);
PPC_FUNC_IMPL(__imp__sub_82EE4088) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82ee3fe0
	sub_82EE3FE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE4098"))) PPC_WEAK_FUNC(sub_82EE4098);
PPC_FUNC_IMPL(__imp__sub_82EE4098) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,228(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE40A0"))) PPC_WEAK_FUNC(sub_82EE40A0);
PPC_FUNC_IMPL(__imp__sub_82EE40A0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82ee3fe0
	sub_82EE3FE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE40B0"))) PPC_WEAK_FUNC(sub_82EE40B0);
PPC_FUNC_IMPL(__imp__sub_82EE40B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,162(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 162);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE40C0"))) PPC_WEAK_FUNC(sub_82EE40C0);
PPC_FUNC_IMPL(__imp__sub_82EE40C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE40C8"))) PPC_WEAK_FUNC(sub_82EE40C8);
PPC_FUNC_IMPL(__imp__sub_82EE40C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// vmsum3fp128 v10,v0,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// lvx128 v9,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// vmsum3fp128 v8,v9,v9
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v9.f32), 0xEF));
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lvx128 v13,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r26,r1,112
	r26.s64 = ctx.r1.s64 + 112;
	// addi r25,r1,96
	r25.s64 = ctx.r1.s64 + 96;
	// li r28,16
	r28.s64 = 16;
	// li r29,32
	r29.s64 = 32;
	// lfs f0,2244(r6)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2244);
	f0.f64 = double(temp.f32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// li r11,2
	r11.s64 = 2;
	// stvx128 v10,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f11,f0,f12
	ctx.f11.f64 = double(float(f0.f64 / ctx.f12.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvx128 v7,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v6,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), 0xFF));
	// stvx128 v8,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v0,v0,v6
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v6.f32)));
	// lfs f10,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// fdivs f8,f0,f9
	ctx.f8.f64 = double(float(f0.f64 / ctx.f9.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvx128 v5,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v4,v5,0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), 0xFF));
	// vpermwi128 v3,v0,99
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x9C));
	// stvx128 v0,r0,r26
	simde_mm_store_si128((simde__m128i*)(base + ((r26.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v2,v0,135
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x78));
	// vmulfp128 v0,v9,v4
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v4.f32)));
	// lvx128 v12,r4,r28
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lvx128 v11,r4,r29
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r31,64
	ctx.r9.s64 = r31.s64 + 64;
	// addi r8,r8,4496
	ctx.r8.s64 = ctx.r8.s64 + 4496;
	// vpermwi128 v1,v0,135
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x78));
	// stvx128 v0,r0,r25
	simde_mm_store_si128((simde__m128i*)(base + ((r25.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v31,v0,99
	simde_mm_store_si128((simde__m128i*)v31.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x9C));
	// vmulfp128 v30,v1,v3
	simde_mm_store_ps(v30.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v3.f32)));
	// vmulfp128 v29,v31,v2
	simde_mm_store_ps(v29.f32, simde_mm_mul_ps(simde_mm_load_ps(v31.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vsubfp v28,v29,v30
	simde_mm_store_ps(v28.f32, simde_mm_sub_ps(simde_mm_load_ps(v29.f32), simde_mm_load_ps(v30.f32)));
	// stvx128 v28,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82EE41A4:
	// lvx128 v10,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// vmsum3fp128 v9,v12,v10
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v8,v11,v10
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// vmsum3fp128 v7,v13,v10
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// vmrghw v6,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v5,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmrghw v4,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), simde_mm_load_si128((simde__m128i*)ctx.v5.u32)));
	// stvx128 v4,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// bge 0x82ee41a4
	if (!cr0.lt) goto loc_82EE41A4;
	// lvx128 v13,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,2
	r11.s64 = 2;
	// lvx128 v12,r30,r28
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32 + r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lvx128 v11,r30,r29
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32 + r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r31,128
	ctx.r9.s64 = r31.s64 + 128;
loc_82EE41F0:
	// lvx128 v10,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// vmsum3fp128 v9,v12,v10
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v8,v11,v10
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// vmsum3fp128 v7,v13,v10
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// vmrghw v6,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v5,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmrghw v4,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), simde_mm_load_si128((simde__m128i*)ctx.v5.u32)));
	// stvx128 v4,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// bge 0x82ee41f0
	if (!cr0.lt) goto loc_82EE41F0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82eaf1c0
	sub_82EAF1C0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82eaf1c0
	sub_82EAF1C0(ctx, base);
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// addi r10,r31,176
	ctx.r10.s64 = r31.s64 + 176;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r11,r28
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r10,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r11,r29
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r10,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82EE4268"))) PPC_WEAK_FUNC(sub_82EE4268);
PPC_FUNC_IMPL(__imp__sub_82EE4268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v19{};
	PPCVRegister v20{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// fmr f29,f2
	f29.f64 = ctx.f2.f64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r29,96
	r31.s64 = r29.s64 + 96;
	// lfs f31,-22120(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	f31.f64 = double(temp.f32);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fadds f0,f30,f29
	f0.f64 = double(float(f30.f64 + f29.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(f0.f64 * f31.f64));
	// fneg f1,f13
	ctx.f1.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// bl 0x82eaf460
	sub_82EAF460(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v8,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// vpermwi128 v6,v8,99
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0x9C));
	// vpermwi128 v5,v8,135
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0x78));
	// fsubs f12,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(f29.f64 - f30.f64));
	// addi r7,r9,4624
	ctx.r7.s64 = ctx.r9.s64 + 4624;
	// li r8,32
	ctx.r8.s64 = 32;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v13,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x0));
	// vmsum3fp128 v7,v0,v8
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32), 0xEF));
	// vpermwi128 v11,v0,135
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x78));
	// lvx128 v12,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v10,v0,99
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x9C));
	// vmaddfp v9,v13,v13,v12
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v3,v11,v6
	simde_mm_store_ps(ctx.v3.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v6.f32)));
	// vmulfp128 v2,v10,v5
	simde_mm_store_ps(ctx.v2.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v5.f32)));
	// fmuls f11,f12,f31
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f11.f64 = double(float(ctx.f12.f64 * f31.f64));
	// vmulfp128 v4,v8,v9
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v4.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vspltw v1,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), 0xFF));
	// vsubfp v31,v2,v3
	simde_mm_store_ps(v31.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v3.f32)));
	// vmaddfp v30,v1,v0,v4
	simde_mm_store_ps(v30.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vmaddfp v29,v13,v31,v30
	simde_mm_store_ps(v29.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(v31.f32)), simde_mm_load_ps(v30.f32)));
	// vaddfp v28,v29,v29
	simde_mm_store_ps(v28.f32, simde_mm_add_ps(simde_mm_load_ps(v29.f32), simde_mm_load_ps(v29.f32)));
	// vor v26,v28,v28
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_load_si128((simde__m128i*)v28.u8));
	// stvx128 v28,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v27,r0,r30
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v24,v27,99
	simde_mm_store_si128((simde__m128i*)v24.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v27.u32), 0x9C));
	// vpermwi128 v25,v26,135
	simde_mm_store_si128((simde__m128i*)v25.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v26.u32), 0x78));
	// vpermwi128 v23,v27,135
	simde_mm_store_si128((simde__m128i*)v23.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v27.u32), 0x78));
	// vpermwi128 v22,v26,99
	simde_mm_store_si128((simde__m128i*)v22.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v26.u32), 0x9C));
	// vmulfp128 v21,v25,v24
	simde_mm_store_ps(v21.f32, simde_mm_mul_ps(simde_mm_load_ps(v25.f32), simde_mm_load_ps(v24.f32)));
	// vmulfp128 v20,v22,v23
	simde_mm_store_ps(v20.f32, simde_mm_mul_ps(simde_mm_load_ps(v22.f32), simde_mm_load_ps(v23.f32)));
	// vsubfp v19,v20,v21
	simde_mm_store_ps(v19.f32, simde_mm_sub_ps(simde_mm_load_ps(v20.f32), simde_mm_load_ps(v21.f32)));
	// stvx128 v19,r31,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f11,284(r29)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r29.u32 + 284, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-56(r1)
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EE4358"))) PPC_WEAK_FUNC(sub_82EE4358);
PPC_FUNC_IMPL(__imp__sub_82EE4358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r31,r29,224
	r31.s64 = r29.s64 + 224;
	// addi r10,r11,-31452
	ctx.r10.s64 = r11.s64 + -31452;
	// li r30,3
	r30.s64 = 3;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
loc_82EE437C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ee43c0
	if (cr6.eq) goto loc_82EE43C0;
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ee43c0
	if (cr6.eq) goto loc_82EE43C0;
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82ee43c0
	if (!cr6.eq) goto loc_82EE43C0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EE43C0:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x82ee437c
	if (!cr0.eq) goto loc_82EE437C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-22012
	ctx.r10.s64 = r11.s64 + -22012;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EE43E0"))) PPC_WEAK_FUNC(sub_82EE43E0);
PPC_FUNC_IMPL(__imp__sub_82EE43E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// extsb r11,r5
	r11.s64 = ctx.r5.s8;
	// stb r5,162(r3)
	PPC_STORE_U8(ctx.r3.u32 + 162, ctx.r5.u8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r9,242(r3)
	PPC_STORE_U8(ctx.r3.u32 + 242, ctx.r9.u8);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,40(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// stfs f0,32(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// stfs f0,36(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 36, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// stfs f0,44(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 44, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE4450"))) PPC_WEAK_FUNC(sub_82EE4450);
PPC_FUNC_IMPL(__imp__sub_82EE4450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x831b0b28
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r9,-31452
	ctx.r8.s64 = ctx.r9.s64 + -31452;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r6,19
	ctx.r6.s64 = 19;
	// sth r7,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r7.u16);
	// li r5,17
	ctx.r5.s64 = 17;
	// sth r6,160(r3)
	PPC_STORE_U16(ctx.r3.u32 + 160, ctx.r6.u16);
	// addi r8,r1,-64
	ctx.r8.s64 = ctx.r1.s64 + -64;
	// stb r10,162(r3)
	PPC_STORE_U8(ctx.r3.u32 + 162, ctx.r10.u8);
	// li r6,15
	ctx.r6.s64 = 15;
	// sth r11,164(r3)
	PPC_STORE_U16(ctx.r3.u32 + 164, r11.u16);
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// sth r11,166(r3)
	PPC_STORE_U16(ctx.r3.u32 + 166, r11.u16);
	// li r7,16
	ctx.r7.s64 = 16;
	// sth r5,240(r3)
	PPC_STORE_U16(ctx.r3.u32 + 240, ctx.r5.u16);
	// li r4,32
	ctx.r4.s64 = 32;
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r10,242(r3)
	PPC_STORE_U8(ctx.r3.u32 + 242, ctx.r10.u8);
	// stb r10,244(r3)
	PPC_STORE_U8(ctx.r3.u32 + 244, ctx.r10.u8);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// sth r6,252(r3)
	PPC_STORE_U16(ctx.r3.u32 + 252, ctx.r6.u16);
	// vxor v13,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_setzero_si128());
	// stb r10,254(r3)
	PPC_STORE_U8(ctx.r3.u32 + 254, ctx.r10.u8);
	// addi r31,r1,-64
	r31.s64 = ctx.r1.s64 + -64;
	// addi r6,r9,48
	ctx.r6.s64 = ctx.r9.s64 + 48;
	// sth r7,272(r3)
	PPC_STORE_U16(ctx.r3.u32 + 272, ctx.r7.u16);
	// li r30,5
	r30.s64 = 5;
	// stb r10,274(r3)
	PPC_STORE_U8(ctx.r3.u32 + 274, ctx.r10.u8);
	// stb r11,278(r3)
	PPC_STORE_U8(ctx.r3.u32 + 278, r11.u8);
	// lfs f0,2244(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2244);
	f0.f64 = double(temp.f32);
	// sth r7,292(r3)
	PPC_STORE_U16(ctx.r3.u32 + 292, ctx.r7.u16);
	// addi r8,r3,96
	ctx.r8.s64 = ctx.r3.s64 + 96;
	// stb r10,294(r3)
	PPC_STORE_U8(ctx.r3.u32 + 294, ctx.r10.u8);
	// lvx128 v0,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r11,298(r3)
	PPC_STORE_U8(ctx.r3.u32 + 298, r11.u8);
	// vxor v12,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_setzero_si128());
	// sth r30,312(r3)
	PPC_STORE_U16(ctx.r3.u32 + 312, r30.u16);
	// stvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r9,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r8,48
	ctx.r5.s64 = ctx.r8.s64 + 48;
	// stvx128 v13,r9,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,-64
	r31.s64 = ctx.r1.s64 + -64;
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lis r30,-32256
	r30.s64 = -2113929216;
	// stfs f0,52(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lis r29,-32237
	r29.s64 = -2112684032;
	// stfs f0,72(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// li r28,3
	r28.s64 = 3;
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// lvx128 v0,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r3,176
	ctx.r9.s64 = ctx.r3.s64 + 176;
	// lfs f13,2240(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
	// vxor v11,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_setzero_si128());
	// lvx128 v10,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v9,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_setzero_si128());
	// stvx128 v9,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r31,-32237
	r31.s64 = -2112684032;
	// stvx128 v12,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// stvx128 v12,r8,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r30,-32255
	r30.s64 = -2113863680;
	// stvx128 v12,r8,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stfs f0,96(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,116(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f0,136(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// lvx128 v8,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v7,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_setzero_si128());
	// stvx128 v7,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r11,243(r3)
	PPC_STORE_U8(ctx.r3.u32 + 243, r11.u8);
	// lfs f12,-15488(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + -15488);
	ctx.f12.f64 = double(temp.f32);
	// stb r28,244(r3)
	PPC_STORE_U8(ctx.r3.u32 + 244, r28.u8);
	// stfs f13,248(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// lis r29,-32237
	r29.s64 = -2112684032;
	// stb r11,162(r3)
	PPC_STORE_U8(ctx.r3.u32 + 162, r11.u8);
	// li r5,96
	ctx.r5.s64 = 96;
	// lfs f13,-28620(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -28620);
	ctx.f13.f64 = double(temp.f32);
	// li r6,100
	ctx.r6.s64 = 100;
	// sth r5,164(r3)
	PPC_STORE_U16(ctx.r3.u32 + 164, ctx.r5.u16);
	// li r5,56
	ctx.r5.s64 = 56;
	// sth r6,166(r3)
	PPC_STORE_U16(ctx.r3.u32 + 166, ctx.r6.u16);
	// stvx128 v11,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r9,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r9,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,176(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stfs f0,196(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// stfs f0,216(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// stw r11,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, r11.u32);
	// lfs f11,-15492(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + -15492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, r11.u32);
	// lfs f10,4800(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4800);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, r11.u32);
	// lfs f9,-15496(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + -15496);
	ctx.f9.f64 = double(temp.f32);
	// stb r11,255(r3)
	PPC_STORE_U8(ctx.r3.u32 + 255, r11.u8);
	// lfs f8,-7056(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -7056);
	ctx.f8.f64 = double(temp.f32);
	// stb r10,256(r3)
	PPC_STORE_U8(ctx.r3.u32 + 256, ctx.r10.u8);
	// stfs f12,260(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// stb r11,275(r3)
	PPC_STORE_U8(ctx.r3.u32 + 275, r11.u8);
	// stfs f11,264(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 264, temp.u32);
	// stb r11,276(r3)
	PPC_STORE_U8(ctx.r3.u32 + 276, r11.u8);
	// stfs f13,268(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 268, temp.u32);
	// stb r11,277(r3)
	PPC_STORE_U8(ctx.r3.u32 + 277, r11.u8);
	// stfs f10,280(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 280, temp.u32);
	// stb r5,278(r3)
	PPC_STORE_U8(ctx.r3.u32 + 278, ctx.r5.u8);
	// stfs f0,284(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 284, temp.u32);
	// stb r11,295(r3)
	PPC_STORE_U8(ctx.r3.u32 + 295, r11.u8);
	// stfs f13,288(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 288, temp.u32);
	// stb r10,296(r3)
	PPC_STORE_U8(ctx.r3.u32 + 296, ctx.r10.u8);
	// stfs f9,300(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 300, temp.u32);
	// stb r10,297(r3)
	PPC_STORE_U8(ctx.r3.u32 + 297, ctx.r10.u8);
	// stfs f8,304(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 304, temp.u32);
	// stfs f13,308(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 308, temp.u32);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EE4630"))) PPC_WEAK_FUNC(sub_82EE4630);
PPC_FUNC_IMPL(__imp__sub_82EE4630) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82ee4668
	if (cr6.eq) goto loc_82EE4668;
loc_82EE4648:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r8,r10,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsb r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82ee4648
	if (!cr6.eq) goto loc_82EE4648;
loc_82EE4668:
	// clrlwi r11,r10,1
	r11.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE4678"))) PPC_WEAK_FUNC(sub_82EE4678);
PPC_FUNC_IMPL(__imp__sub_82EE4678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,40(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// subf r10,r11,r8
	ctx.r10.s64 = ctx.r8.s64 - r11.s64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// subf r8,r9,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r9.s64;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// lwz r7,40(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// lwz r6,12(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r3,8(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lhz r11,24(r7)
	r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 24);
	// lhz r9,22(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 22);
	// lhz r10,20(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 20);
	// subf r5,r4,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r4.s64;
	// subf r8,r3,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r3.s64;
	// sth r5,20(r7)
	PPC_STORE_U16(ctx.r7.u32 + 20, ctx.r5.u16);
	// subf r4,r6,r11
	ctx.r4.s64 = r11.s64 - ctx.r6.s64;
	// sth r8,22(r7)
	PPC_STORE_U16(ctx.r7.u32 + 22, ctx.r8.u16);
	// sth r4,24(r7)
	PPC_STORE_U16(ctx.r7.u32 + 24, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE46F0"))) PPC_WEAK_FUNC(sub_82EE46F0);
PPC_FUNC_IMPL(__imp__sub_82EE46F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE46F8"))) PPC_WEAK_FUNC(sub_82EE46F8);
PPC_FUNC_IMPL(__imp__sub_82EE46F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// lhz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 16);
	// lhz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 4);
	// lhz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 12);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r8,-2
	ctx.r7.s64 = ctx.r8.s64 + -2;
	// add r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 + ctx.r4.u64;
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// ble cr6,0x82ee4728
	if (!cr6.gt) goto loc_82EE4728;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82EE4728:
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// sth r9,16(r11)
	PPC_STORE_U16(r11.u32 + 16, ctx.r9.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE4740"))) PPC_WEAK_FUNC(sub_82EE4740);
PPC_FUNC_IMPL(__imp__sub_82EE4740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,88(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r11,-1
	r11.s64 = -1;
	// lwz r30,92(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r11.u16);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82eec7b8
	sub_82EEC7B8(ctx, base);
	// lhz r10,500(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 500);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ee479c
	if (cr6.eq) goto loc_82EE479C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eebae8
	sub_82EEBAE8(ctx, base);
loc_82EE479C:
	// lhz r11,500(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 500);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ee47b4
	if (cr6.eq) goto loc_82EE47B4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eebae8
	sub_82EEBAE8(ctx, base);
loc_82EE47B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82EE47D0"))) PPC_WEAK_FUNC(sub_82EE47D0);
PPC_FUNC_IMPL(__imp__sub_82EE47D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EE47E8"))) PPC_WEAK_FUNC(sub_82EE47E8);
PPC_FUNC_IMPL(__imp__sub_82EE47E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EE4800"))) PPC_WEAK_FUNC(sub_82EE4800);
PPC_FUNC_IMPL(__imp__sub_82EE4800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ee4814
	if (!cr6.eq) goto loc_82EE4814;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EE4814:
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r7,r11,-48
	ctx.r7.s64 = r11.s64 + -48;
	// srawi r9,r7,5
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 5;
	// addic. r11,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	r11.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82ee4850
	if (cr0.lt) goto loc_82EE4850;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
loc_82EE483C:
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// beq cr6,0x82ee4850
	if (cr6.eq) goto loc_82EE4850;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x82ee483c
	if (!cr0.lt) goto loc_82EE483C;
loc_82EE4850:
	// clrlwi r3,r11,16
	ctx.r3.u64 = r11.u32 & 0xFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE4858"))) PPC_WEAK_FUNC(sub_82EE4858);
PPC_FUNC_IMPL(__imp__sub_82EE4858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r3,r11,-20
	ctx.r3.s64 = r11.s64 + -20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE4868"))) PPC_WEAK_FUNC(sub_82EE4868);
PPC_FUNC_IMPL(__imp__sub_82EE4868) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// addi r9,r3,20
	ctx.r9.s64 = ctx.r3.s64 + 20;
	// addi r8,r31,32
	ctx.r8.s64 = r31.s64 + 32;
	// addi r5,r31,64
	ctx.r5.s64 = r31.s64 + 64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r7,r11,16
	ctx.r7.s64 = r11.s64 + 16;
	// addi r6,r10,16
	ctx.r6.s64 = ctx.r10.s64 + 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r30,8(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// bl 0x82eec6d8
	sub_82EEC6D8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lhz r9,500(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 500);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ee48e8
	if (cr6.eq) goto loc_82EE48E8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82eeba10
	sub_82EEBA10(ctx, base);
loc_82EE48E8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lhz r11,500(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 500);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ee4900
	if (cr6.eq) goto loc_82EE4900;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82eeba10
	sub_82EEBA10(ctx, base);
loc_82EE4900:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lbz r11,216(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 216);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x82ee4920
	if (cr6.eq) goto loc_82EE4920;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x82ee4924
	if (!cr6.eq) goto loc_82EE4924;
loc_82EE4920:
	// li r11,1
	r11.s64 = 1;
loc_82EE4924:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ee4958
	if (cr6.eq) goto loc_82EE4958;
	// lbz r11,216(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 216);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x82ee4948
	if (cr6.eq) goto loc_82EE4948;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x82ee494c
	if (!cr6.eq) goto loc_82EE494C;
loc_82EE4948:
	// li r11,1
	r11.s64 = 1;
loc_82EE494C:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ee496c
	if (!cr6.eq) goto loc_82EE496C;
loc_82EE4958:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f68c68
	sub_82F68C68(ctx, base);
loc_82EE496C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EE4978"))) PPC_WEAK_FUNC(sub_82EE4978);
PPC_FUNC_IMPL(__imp__sub_82EE4978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,316(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r6,7
	ctx.r6.s64 = 7;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// bl 0x82ee54b0
	sub_82EE54B0(ctx, base);
	// lwz r26,308(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// li r11,0
	r11.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// lfs f0,0(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 0);
	f0.f64 = double(temp.f32);
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r25.u32);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r29.u32);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// xor r9,r11,r10
	ctx.r9.u64 = r11.u64 ^ ctx.r10.u64;
	// xor r27,r9,r30
	r27.u64 = ctx.r9.u64 ^ r30.u64;
	// bl 0x82eec5f8
	sub_82EEC5F8(ctx, base);
	// lhz r8,500(r30)
	ctx.r8.u64 = PPC_LOAD_U16(r30.u32 + 500);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82ee4a2c
	if (cr6.eq) goto loc_82EE4A2C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eeb938
	sub_82EEB938(ctx, base);
loc_82EE4A2C:
	// lhz r11,500(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 500);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ee4a44
	if (cr6.eq) goto loc_82EE4A44;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82eeb938
	sub_82EEB938(ctx, base);
loc_82EE4A44:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82ee4a7c
	if (!cr6.eq) goto loc_82EE4A7C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831b0b64
	return;
loc_82EE4A7C:
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 0, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-88(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82EE4A90"))) PPC_WEAK_FUNC(sub_82EE4A90);
PPC_FUNC_IMPL(__imp__sub_82EE4A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v16{};
	PPCVRegister v17{};
	PPCVRegister v18{};
	PPCVRegister v19{};
	PPCVRegister v20{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b0c
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lhz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 16);
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// lhz r11,4(r9)
	r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// lhz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 12);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// addi r7,r9,-2
	ctx.r7.s64 = ctx.r9.s64 + -2;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bgt cr6,0x82ee4cb4
	if (cr6.gt) goto loc_82EE4CB4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ee4b00
	if (!cr6.eq) goto loc_82EE4B00;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r4,r31,68
	ctx.r4.s64 = r31.s64 + 68;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EE4B00:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// addi r24,r27,4
	r24.s64 = r27.s64 + 4;
	// bl 0x82f00130
	sub_82F00130(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
	// lvx128 v0,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r6,10000
	ctx.r6.s64 = 10000;
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lvx128 v13,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stvx128 v13,r11,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ee54b0
	sub_82EE54B0(ctx, base);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lvx128 v12,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r29,208
	r11.s64 = r29.s64 + 208;
	// lvx128 v11,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// li r5,96
	ctx.r5.s64 = 96;
	// xor r28,r7,r29
	r28.u64 = ctx.r7.u64 ^ r29.u64;
	// addi r8,r11,224
	ctx.r8.s64 = r11.s64 + 224;
	// addi r10,r28,208
	ctx.r10.s64 = r28.s64 + 208;
	// li r6,208
	ctx.r6.s64 = 208;
	// lvx128 v10,r11,r5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r10,224
	ctx.r7.s64 = ctx.r10.s64 + 224;
	// vsubfp v9,v11,v10
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v10.f32)));
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lvx128 v8,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lvx128 v7,r10,r5
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v6,v8,135
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0x78));
	// vsubfp v5,v11,v7
	simde_mm_store_ps(ctx.v5.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v7.f32)));
	// vpermwi128 v4,v8,99
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0x9C));
	// lvx128 v3,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,0
	ctx.r9.s64 = 0;
	// vpermwi128 v2,v3,135
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), 0x78));
	// lvx128 v1,r10,r6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v31,v3,99
	simde_mm_store_si128((simde__m128i*)v31.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), 0x9C));
	// lvx128 v30,r11,r6
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// vpermwi128 v29,v9,99
	simde_mm_store_si128((simde__m128i*)v29.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0x9C));
	// vpermwi128 v28,v9,135
	simde_mm_store_si128((simde__m128i*)v28.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0x78));
	// vpermwi128 v27,v5,99
	simde_mm_store_si128((simde__m128i*)v27.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), 0x9C));
	// vpermwi128 v26,v5,135
	simde_mm_store_si128((simde__m128i*)v26.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), 0x78));
	// vmulfp128 v25,v6,v29
	simde_mm_store_ps(v25.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(v29.f32)));
	// vmulfp128 v24,v4,v28
	simde_mm_store_ps(v24.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(v28.f32)));
	// vmulfp128 v23,v2,v27
	simde_mm_store_ps(v23.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(v27.f32)));
	// vmulfp128 v22,v31,v26
	simde_mm_store_ps(v22.f32, simde_mm_mul_ps(simde_mm_load_ps(v31.f32), simde_mm_load_ps(v26.f32)));
	// vsubfp v21,v24,v25
	simde_mm_store_ps(v21.f32, simde_mm_sub_ps(simde_mm_load_ps(v24.f32), simde_mm_load_ps(v25.f32)));
	// vsubfp v20,v22,v23
	simde_mm_store_ps(v20.f32, simde_mm_sub_ps(simde_mm_load_ps(v22.f32), simde_mm_load_ps(v23.f32)));
	// vaddfp v19,v21,v30
	simde_mm_store_ps(v19.f32, simde_mm_add_ps(simde_mm_load_ps(v21.f32), simde_mm_load_ps(v30.f32)));
	// vaddfp v18,v20,v1
	simde_mm_store_ps(v18.f32, simde_mm_add_ps(simde_mm_load_ps(v20.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vsubfp v17,v19,v18
	simde_mm_store_ps(v17.f32, simde_mm_sub_ps(simde_mm_load_ps(v19.f32), simde_mm_load_ps(v18.f32)));
	// vmsum3fp128 v16,v17,v12
	simde_mm_store_ps(v16.f32, simde_mm_dp_ps(simde_mm_load_ps(v17.f32), simde_mm_load_ps(ctx.v12.f32), 0xEF));
	// stvewx v16,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, v16.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f30,84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f30.f64 = double(temp.f32);
	// lfs f31,2240(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2240);
	f31.f64 = double(temp.f32);
	// stfs f31,0(r6)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// stfs f30,124(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// stw r21,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r21.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// stw r22,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r22.u32);
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r27.u32);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// sth r23,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, r23.u16);
	// sth r9,146(r1)
	PPC_STORE_U16(ctx.r1.u32 + 146, ctx.r9.u16);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82eec5f8
	sub_82EEC5F8(ctx, base);
	// lhz r11,500(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 500);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ee4c74
	if (cr6.eq) goto loc_82EE4C74;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eeb938
	sub_82EEB938(ctx, base);
loc_82EE4C74:
	// lhz r11,500(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 500);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ee4c8c
	if (cr6.eq) goto loc_82EE4C8C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eeb938
	sub_82EEB938(ctx, base);
loc_82EE4C8C:
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82ee4cc8
	if (!cr6.eq) goto loc_82EE4CC8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r5,0(r24)
	ctx.r5.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EE4CB4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831b0b5c
	return;
loc_82EE4CC8:
	// lhz r11,146(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 146);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// sth r11,18(r31)
	PPC_STORE_U16(r31.u32 + 18, r11.u16);
	// lfs f0,-15484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15484);
	f0.f64 = double(temp.f32);
	// lbz r7,13(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 13);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fcmpu cr6,f10,f31
	cr6.compare(ctx.f10.f64, f31.f64);
	// bne cr6,0x82ee4db0
	if (!cr6.eq) goto loc_82EE4DB0;
	// lhz r11,500(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 500);
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82ee4db0
	if (!cr6.eq) goto loc_82EE4DB0;
	// lhz r11,500(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 500);
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82ee4db0
	if (!cr6.eq) goto loc_82EE4DB0;
	// li r11,400
	r11.s64 = 400;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lvx128 v0,r29,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// vspltw v13,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x0));
	// stvewx v13,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v12,r28,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r28.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v11,v12,3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x0));
	// stvewx v11,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,23352(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 23352);
	f0.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f13,12388(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12388);
	ctx.f13.f64 = double(temp.f32);
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + f0.f64));
	// lfs f0,2244(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2244);
	f0.f64 = double(temp.f32);
	// fdivs f9,f0,f10
	ctx.f9.f64 = double(float(f0.f64 / ctx.f10.f64));
	// fmuls f8,f9,f30
	ctx.f8.f64 = double(float(ctx.f9.f64 * f30.f64));
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f7,0(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f31,4(r4)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f6,28(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,16(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-112(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831b0b5c
	return;
loc_82EE4DB0:
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_82EE4DE0"))) PPC_WEAK_FUNC(sub_82EE4DE0);
PPC_FUNC_IMPL(__imp__sub_82EE4DE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// li r7,255
	ctx.r7.s64 = 255;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r30,40(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lbzx r29,r10,r11
	r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// stbx r7,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r7.u8);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// lhz r28,4(r30)
	r28.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(r28.s32, 2, xer);
	// lwz r26,40(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bne cr6,0x82ee4e3c
	if (!cr6.eq) goto loc_82EE4E3C;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
loc_82EE4E3C:
	// clrlwi r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r11,r9,48
	r11.s64 = ctx.r9.s64 + 48;
	// bne cr6,0x82ee4e58
	if (!cr6.eq) goto loc_82EE4E58;
	// addi r11,r9,64
	r11.s64 = ctx.r9.s64 + 64;
loc_82EE4E58:
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// bl 0x82ee5620
	sub_82EE5620(ctx, base);
	// lbz r9,10(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 10);
	// extsh r10,r29
	ctx.r10.s64 = r29.s16;
	// lhz r8,6(r30)
	ctx.r8.u64 = PPC_LOAD_U16(r30.u32 + 6);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mullw r11,r9,r10
	r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rotlwi r10,r8,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 5);
	// li r4,1
	ctx.r4.s64 = 1;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r10,r11,63
	ctx.r10.s64 = r11.s64 + 63;
	// lbz r7,63(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 63);
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r6,r6,0,31,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stb r6,63(r11)
	PPC_STORE_U8(r11.u32 + 63, ctx.r6.u8);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x82f01580
	sub_82F01580(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addic. r11,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	r11.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82ee4ef0
	if (cr0.lt) goto loc_82EE4EF0;
loc_82EE4EC4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r9,255
	cr6.compare<uint32_t>(ctx.r9.u32, 255, xer);
	// beq cr6,0x82ee4ee8
	if (cr6.eq) goto loc_82EE4EE8;
	// cmpw cr6,r9,r29
	cr6.compare<int32_t>(ctx.r9.s32, r29.s32, xer);
	// ble cr6,0x82ee4ee8
	if (!cr6.gt) goto loc_82EE4EE8;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// addi r9,r9,255
	ctx.r9.s64 = ctx.r9.s64 + 255;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r9.u8);
loc_82EE4EE8:
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x82ee4ec4
	if (!cr0.lt) goto loc_82EE4EC4;
loc_82EE4EF0:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ee4678
	sub_82EE4678(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ee4f2c
	if (cr6.eq) goto loc_82EE4F2C;
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lhz r6,2(r5)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r5.u32 + 2);
	// bl 0x82f00788
	sub_82F00788(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
loc_82EE4F2C:
	// lhz r11,16(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 16);
	// addi r3,r28,-1
	ctx.r3.s64 = r28.s64 + -1;
	// ori r10,r11,5
	ctx.r10.u64 = r11.u64 | 5;
	// sth r10,16(r30)
	PPC_STORE_U16(r30.u32 + 16, ctx.r10.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82EE4F48"))) PPC_WEAK_FUNC(sub_82EE4F48);
PPC_FUNC_IMPL(__imp__sub_82EE4F48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// clrlwi r10,r29,16
	ctx.r10.u64 = r29.u32 & 0xFFFF;
	// addi r30,r31,20
	r30.s64 = r31.s64 + 20;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r28,88(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r26,92(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// bne cr6,0x82ee4f88
	if (!cr6.eq) goto loc_82EE4F88;
	// li r11,0
	r11.s64 = 0;
	// b 0x82ee4fac
	goto loc_82EE4FAC;
loc_82EE4F88:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lbz r8,10(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 10);
	// lhz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// mullw r10,r8,r9
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// rotlwi r9,r7,5
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 5);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
loc_82EE4FAC:
	// sth r29,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r29.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82eec7b8
	sub_82EEC7B8(ctx, base);
	// lhz r11,500(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 500);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ee4fe8
	if (cr6.eq) goto loc_82EE4FE8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eebae8
	sub_82EEBAE8(ctx, base);
loc_82EE4FE8:
	// lhz r11,500(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 500);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ee5000
	if (cr6.eq) goto loc_82EE5000;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82eebae8
	sub_82EEBAE8(ctx, base);
loc_82EE5000:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ee4de0
	sub_82EE4DE0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ee5030
	if (!cr6.eq) goto loc_82EE5030;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r4,r31,68
	ctx.r4.s64 = r31.s64 + 68;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EE5030:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82EE5038"))) PPC_WEAK_FUNC(sub_82EE5038);
PPC_FUNC_IMPL(__imp__sub_82EE5038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// rotlwi r10,r8,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 5);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE5058"))) PPC_WEAK_FUNC(sub_82EE5058);
PPC_FUNC_IMPL(__imp__sub_82EE5058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// clrlwi r11,r4,16
	r11.u64 = ctx.r4.u32 & 0xFFFF;
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// bne cr6,0x82ee5074
	if (!cr6.eq) goto loc_82EE5074;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82EE5074:
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lbz r8,10(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 10);
	// lhz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// rotlwi r10,r7,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 5);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE50A0"))) PPC_WEAK_FUNC(sub_82EE50A0);
PPC_FUNC_IMPL(__imp__sub_82EE50A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32237
	r11.s64 = -2112684032;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-15476
	ctx.r9.s64 = r11.s64 + -15476;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE50C0"))) PPC_WEAK_FUNC(sub_82EE50C0);
PPC_FUNC_IMPL(__imp__sub_82EE50C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x82ee56d8
	sub_82EE56D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE50C8"))) PPC_WEAK_FUNC(sub_82EE50C8);
PPC_FUNC_IMPL(__imp__sub_82EE50C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-1184(r1)
	ea = -1184 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lhz r11,18(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 18);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// addi r29,r11,-1
	r29.s64 = r11.s64 + -1;
	// bne cr6,0x82ee51d8
	if (!cr6.eq) goto loc_82EE51D8;
	// lbz r11,16(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// lbz r9,16(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 16);
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// add r28,r10,r4
	r28.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r27,r11,r5
	r27.u64 = r11.u64 + ctx.r5.u64;
	// lhz r11,150(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 150);
	// lhz r10,150(r27)
	ctx.r10.u64 = PPC_LOAD_U16(r27.u32 + 150);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// blt cr6,0x82ee5120
	if (cr6.lt) goto loc_82EE5120;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82EE5120:
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r8,r30,16
	ctx.r8.s64 = r30.s64 + 16;
	// clrlwi r29,r11,16
	r29.u64 = r11.u32 & 0xFFFF;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// stw r31,1120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1120, r31.u32);
	// bge cr6,0x82ee519c
	if (!cr6.lt) goto loc_82EE519C;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 32);
loc_82EE514C:
	// lwz r11,32(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// lbzx r10,r11,r5
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r5.u32);
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// bne cr6,0x82ee5164
	if (!cr6.eq) goto loc_82EE5164;
	// li r11,0
	r11.s64 = 0;
	// b 0x82ee5188
	goto loc_82EE5188;
loc_82EE5164:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lbz r4,10(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 10);
	// lhz r3,6(r11)
	ctx.r3.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// mullw r10,r4,r9
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// rotlwi r9,r3,5
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 5);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
loc_82EE5188:
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// blt cr6,0x82ee514c
	if (cr6.lt) goto loc_82EE514C;
loc_82EE519C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82eec898
	sub_82EEC898(ctx, base);
	// lhz r11,500(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 500);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ee51c0
	if (cr6.eq) goto loc_82EE51C0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eebbc0
	sub_82EEBBC0(ctx, base);
loc_82EE51C0:
	// lhz r11,500(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 500);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ee51d8
	if (cr6.eq) goto loc_82EE51D8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82eebbc0
	sub_82EEBBC0(ctx, base);
loc_82EE51D8:
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
	// sth r29,18(r31)
	PPC_STORE_U16(r31.u32 + 18, r29.u16);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// bge cr6,0x82ee522c
	if (!cr6.lt) goto loc_82EE522C;
	// addi r9,r31,20
	ctx.r9.s64 = r31.s64 + 20;
	// li r7,16
	ctx.r7.s64 = 16;
loc_82EE51F4:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// lbzx r4,r10,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// rotlwi r10,r4,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 5);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// stvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r11,r7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// stvx128 v13,r10,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// blt cr6,0x82ee51f4
	if (cr6.lt) goto loc_82EE51F4;
loc_82EE522C:
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82EE5238"))) PPC_WEAK_FUNC(sub_82EE5238);
PPC_FUNC_IMPL(__imp__sub_82EE5238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,60(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r9,-15448
	ctx.r4.s64 = ctx.r9.s64 + -15448;
	// li r5,8
	ctx.r5.s64 = 8;
	// lhz r7,2(r6)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r6.u32 + 2);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// rlwinm r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82ee52dc
	if (!cr6.eq) goto loc_82EE52DC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// clrlwi r8,r11,2
	ctx.r8.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r7,36(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r6,32(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// addi r4,r9,-15460
	ctx.r4.s64 = ctx.r9.s64 + -15460;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EE52DC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82EE5308"))) PPC_WEAK_FUNC(sub_82EE5308);
PPC_FUNC_IMPL(__imp__sub_82EE5308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-15372
	ctx.r9.s64 = r11.s64 + -15372;
	// li r30,0
	r30.s64 = 0;
	// sth r10,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r10.u16);
	// addi r29,r31,68
	r29.s64 = r31.s64 + 68;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// addi r28,r31,20
	r28.s64 = r31.s64 + 20;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// bl 0x82f00618
	sub_82F00618(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82ee59c0
	sub_82EE59C0(ctx, base);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// stw r26,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r26.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r25,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r25.u32);
	// stw r27,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r27.u32);
	// sth r30,18(r31)
	PPC_STORE_U16(r31.u32 + 18, r30.u16);
	// sth r30,16(r31)
	PPC_STORE_U16(r31.u32 + 16, r30.u16);
	// sth r30,24(r31)
	PPC_STORE_U16(r31.u32 + 24, r30.u16);
	// sth r30,72(r31)
	PPC_STORE_U16(r31.u32 + 72, r30.u16);
	// lhz r8,42(r25)
	ctx.r8.u64 = PPC_LOAD_U16(r25.u32 + 42);
	// lwz r10,116(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 116);
	// lhz r11,42(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 42);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 2);
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// lbz r5,7088(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 7088);
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// rlwinm r11,r4,6,0,25
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lhz r4,7256(r11)
	ctx.r4.u64 = PPC_LOAD_U16(r11.u32 + 7256);
	// bl 0x82ee59f8
	sub_82EE59F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82EE53C8"))) PPC_WEAK_FUNC(sub_82EE53C8);
PPC_FUNC_IMPL(__imp__sub_82EE53C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r9,r11,-15372
	ctx.r9.s64 = r11.s64 + -15372;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lhz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82ee5408
	if (cr6.eq) goto loc_82EE5408;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r4,r31,68
	ctx.r4.s64 = r31.s64 + 68;
	// bl 0x82ee7100
	sub_82EE7100(ctx, base);
loc_82EE5408:
	// li r11,0
	r11.s64 = 0;
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82ee5b50
	sub_82EE5B50(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x82ee5768
	sub_82EE5768(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-22012
	ctx.r10.s64 = r11.s64 + -22012;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82EE5448"))) PPC_WEAK_FUNC(sub_82EE5448);
PPC_FUNC_IMPL(__imp__sub_82EE5448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,0(r13)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r7,20
	ctx.r7.s64 = 20;
	// li r5,34
	ctx.r5.s64 = 34;
	// lbz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// li r4,128
	ctx.r4.s64 = 128;
	// lbz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// extsb r8,r6
	ctx.r8.s64 = ctx.r6.s8;
	// lwzx r3,r7,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// add r31,r9,r11
	r31.u64 = ctx.r9.u64 + r11.u64;
	// add r30,r8,r10
	r30.u64 = ctx.r8.u64 + ctx.r10.u64;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r11,128
	r11.s64 = 128;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82ee5308
	sub_82EE5308(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EE54B0"))) PPC_WEAK_FUNC(sub_82EE54B0);
PPC_FUNC_IMPL(__imp__sub_82EE54B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r27,12
	ctx.r3.s64 = r27.s64 + 12;
	// lwz r29,88(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r31,92(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lfs f0,132(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 132);
	f0.f64 = double(temp.f32);
	// lfs f13,132(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82eafd60
	sub_82EAFD60(ctx, base);
	// lfs f10,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 136);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,136(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 136);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r28
	r11.u64 = r28.u64;
	// stb r9,14(r27)
	PPC_STORE_U8(r27.u32 + 14, ctx.r9.u8);
	// lfs f0,24336(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24336);
	f0.f64 = double(temp.f32);
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * f0.f64));
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r8,13(r27)
	PPC_STORE_U8(r27.u32 + 13, ctx.r8.u8);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ee554c
	if (cr6.eq) goto loc_82EE554C;
loc_82EE553C:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ee553c
	if (!cr6.eq) goto loc_82EE553C;
loc_82EE554C:
	// lwz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// lbz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// lbz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// lbz r6,9(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 9);
	// add. r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 + ctx.r7.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x82ee5618
	if (cr0.eq) goto loc_82EE5618;
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, xer);
	// bne cr6,0x82ee5580
	if (!cr6.eq) goto loc_82EE5580;
	// mr r11,r28
	r11.u64 = r28.u64;
	// mr r28,r26
	r28.u64 = r26.u64;
	// b 0x82ee5588
	goto loc_82EE5588;
loc_82EE5580:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r11,r26
	r11.u64 = r26.u64;
loc_82EE5588:
	// cmpw cr6,r7,r25
	cr6.compare<int32_t>(ctx.r7.s32, r25.s32, xer);
	// blt cr6,0x82ee5594
	if (cr6.lt) goto loc_82EE5594;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
loc_82EE5594:
	// subf r10,r7,r25
	ctx.r10.s64 = r25.s64 - ctx.r7.s64;
	// cmpw cr6,r6,r10
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, xer);
	// blt cr6,0x82ee55a4
	if (cr6.lt) goto loc_82EE55A4;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_82EE55A4:
	// addi r10,r7,5
	ctx.r10.s64 = ctx.r7.s64 + 5;
	// addi r9,r27,20
	ctx.r9.s64 = r27.s64 + 20;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 + r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ee55e4
	if (cr6.eq) goto loc_82EE55E4;
loc_82EE55C0:
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// bge cr6,0x82ee55e4
	if (!cr6.lt) goto loc_82EE55E4;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ee55c0
	if (!cr6.eq) goto loc_82EE55C0;
loc_82EE55E4:
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82ee5618
	if (cr6.eq) goto loc_82EE5618;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82EE55F4:
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(r11.s32, ctx.r6.s32, xer);
	// bge cr6,0x82ee5618
	if (!cr6.lt) goto loc_82EE5618;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r28,12(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82ee55f4
	if (!cr6.eq) goto loc_82EE55F4;
loc_82EE5618:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82EE5620"))) PPC_WEAK_FUNC(sub_82EE5620);
PPC_FUNC_IMPL(__imp__sub_82EE5620) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lbz r6,10(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// lhz r8,6(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// rlwinm r11,r4,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// rotlwi r8,r8,5
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 5);
	// mullw r9,r9,r5
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// bge cr6,0x82ee56cc
	if (!cr6.lt) goto loc_82EE56CC;
	// srawi r5,r6,2
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// subf r4,r4,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r4.s64;
	// li r31,48
	r31.s64 = 48;
	// li r3,16
	ctx.r3.s64 = 16;
loc_82EE567C:
	// addi r7,r11,32
	ctx.r7.s64 = r11.s64 + 32;
	// add r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 + ctx.r6.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lvx128 v0,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r11,r31
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r3
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ble cr6,0x82ee56bc
	if (!cr6.gt) goto loc_82EE56BC;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
loc_82EE56A8:
	// lwz r30,0(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82ee56a8
	if (!cr0.eq) goto loc_82EE56A8;
loc_82EE56BC:
	// addic. r4,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// bne 0x82ee567c
	if (!cr0.eq) goto loc_82EE567C;
loc_82EE56CC:
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE56D8"))) PPC_WEAK_FUNC(sub_82EE56D8);
PPC_FUNC_IMPL(__imp__sub_82EE56D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ee575c
	if (!cr6.gt) goto loc_82EE575C;
loc_82EE56FC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lbzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r30.u32);
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x82ee574c
	if (cr6.eq) goto loc_82EE574C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r29,r30,16
	r29.u64 = r30.u32 & 0xFFFF;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ee5730
	if (!cr6.eq) goto loc_82EE5730;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EE5730:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r29,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, r29.u16);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
loc_82EE574C:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82ee56fc
	if (cr6.lt) goto loc_82EE56FC;
loc_82EE575C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EE5768"))) PPC_WEAK_FUNC(sub_82EE5768);
PPC_FUNC_IMPL(__imp__sub_82EE5768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r10,r11,-15432
	ctx.r10.s64 = r11.s64 + -15432;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ee57ac
	if (cr6.eq) goto loc_82EE57AC;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,4
	ctx.r6.s64 = 4;
	// lhz r5,2(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EE57AC:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ee57d8
	if (!cr6.eq) goto loc_82EE57D8;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EE57D8:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-22012
	ctx.r10.s64 = r11.s64 + -22012;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82EE57F8"))) PPC_WEAK_FUNC(sub_82EE57F8);
PPC_FUNC_IMPL(__imp__sub_82EE57F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82ee5768
	sub_82EE5768(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ee5840
	if (cr6.eq) goto loc_82EE5840;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,44
	ctx.r6.s64 = 44;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EE5840:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82EE5860"))) PPC_WEAK_FUNC(sub_82EE5860);
PPC_FUNC_IMPL(__imp__sub_82EE5860) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82ee53c8
	sub_82EE53C8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ee58a8
	if (cr6.eq) goto loc_82EE58A8;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,34
	ctx.r6.s64 = 34;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EE58A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82EE58C8"))) PPC_WEAK_FUNC(sub_82EE58C8);
PPC_FUNC_IMPL(__imp__sub_82EE58C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE58D0"))) PPC_WEAK_FUNC(sub_82EE58D0);
PPC_FUNC_IMPL(__imp__sub_82EE58D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE58D8"))) PPC_WEAK_FUNC(sub_82EE58D8);
PPC_FUNC_IMPL(__imp__sub_82EE58D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r3,20
	r31.s64 = ctx.r3.s64 + 20;
	// li r30,2
	r30.s64 = 2;
	// li r28,0
	r28.s64 = 0;
loc_82EE58F4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x82ee590c
	if (!cr6.eq) goto loc_82EE590C;
	// bl 0x82edd568
	sub_82EDD568(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
loc_82EE590C:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x82ee58f4
	if (!cr0.eq) goto loc_82EE58F4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EE5920"))) PPC_WEAK_FUNC(sub_82EE5920);
PPC_FUNC_IMPL(__imp__sub_82EE5920) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-17068
	ctx.r9.s64 = ctx.r10.s64 + -17068;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r6,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r6.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// sth r8,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r8.u16);
	// stb r7,28(r31)
	PPC_STORE_U8(r31.u32 + 28, ctx.r7.u8);
	// stb r11,29(r31)
	PPC_STORE_U8(r31.u32 + 29, r11.u8);
	// stw r4,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r4.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r5,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r5.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x82edd770
	sub_82EDD770(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ee598c
	if (cr6.eq) goto loc_82EE598C;
	// bl 0x82edd770
	sub_82EDD770(ctx, base);
loc_82EE598C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ee59ac
	if (cr6.eq) goto loc_82EE59AC;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,6(r11)
	PPC_STORE_U16(r11.u32 + 6, ctx.r9.u16);
loc_82EE59AC:
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

__attribute__((alias("__imp__sub_82EE59C0"))) PPC_WEAK_FUNC(sub_82EE59C0);
PPC_FUNC_IMPL(__imp__sub_82EE59C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// li r11,0
	r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-17068
	ctx.r8.s64 = ctx.r10.s64 + -17068;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stb r4,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r4.u8);
	// stb r11,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, r11.u8);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE59F8"))) PPC_WEAK_FUNC(sub_82EE59F8);
PPC_FUNC_IMPL(__imp__sub_82EE59F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// stb r10,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r10.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stb r10,19(r11)
	PPC_STORE_U8(r11.u32 + 19, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE5A18"))) PPC_WEAK_FUNC(sub_82EE5A18);
PPC_FUNC_IMPL(__imp__sub_82EE5A18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82ee7100
	sub_82EE7100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE5A38"))) PPC_WEAK_FUNC(sub_82EE5A38);
PPC_FUNC_IMPL(__imp__sub_82EE5A38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE5A40"))) PPC_WEAK_FUNC(sub_82EE5A40);
PPC_FUNC_IMPL(__imp__sub_82EE5A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x82ee5a9c
	if (!cr6.eq) goto loc_82EE5A9C;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,44
	ctx.r4.s64 = 44;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r9,44
	ctx.r9.s64 = 44;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lbz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U8(r30.u32 + 28);
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82ee5920
	sub_82EE5920(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_82EE5A9C:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82f01930
	sub_82F01930(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82ee5acc
	if (!cr6.eq) goto loc_82EE5ACC;
	// lwz r31,12(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ee5acc
	if (cr6.eq) goto loc_82EE5ACC;
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// sth r10,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r10.u16);
loc_82EE5ACC:
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,44
	ctx.r4.s64 = 44;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r9,44
	ctx.r9.s64 = 44;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lbz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U8(r30.u32 + 28);
	// bl 0x82ee5920
	sub_82EE5920(ctx, base);
	// lhz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82ee5b40
	if (cr6.eq) goto loc_82EE5B40;
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82ee5b40
	if (!cr6.eq) goto loc_82EE5B40;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EE5B40:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EE5B50"))) PPC_WEAK_FUNC(sub_82EE5B50);
PPC_FUNC_IMPL(__imp__sub_82EE5B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r10,r11,-17068
	ctx.r10.s64 = r11.s64 + -17068;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ee5b84
	if (cr6.eq) goto loc_82EE5B84;
	// bl 0x82edd568
	sub_82EDD568(ctx, base);
loc_82EE5B84:
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ee5b94
	if (cr6.eq) goto loc_82EE5B94;
	// bl 0x82edd568
	sub_82EDD568(ctx, base);
loc_82EE5B94:
	// lwz r31,16(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ee5bd4
	if (cr6.eq) goto loc_82EE5BD4;
loc_82EE5BA0:
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(r11.u32, 23, xer);
	// blt cr6,0x82ee5bd4
	if (cr6.lt) goto loc_82EE5BD4;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// mr r11,r31
	r11.u64 = r31.u64;
	// li r9,20
	ctx.r9.s64 = 20;
	// lwz r31,20(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r6,44
	ctx.r6.s64 = 44;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// lhz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 16);
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
	// b 0x82ee5ba0
	goto loc_82EE5BA0;
loc_82EE5BD4:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ee5c18
	if (cr6.eq) goto loc_82EE5C18;
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ee5c18
	if (cr6.eq) goto loc_82EE5C18;
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82ee5c18
	if (!cr6.eq) goto loc_82EE5C18;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EE5C18:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-22012
	ctx.r10.s64 = r11.s64 + -22012;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82EE5C40"))) PPC_WEAK_FUNC(sub_82EE5C40);
PPC_FUNC_IMPL(__imp__sub_82EE5C40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r10,216(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 216);
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// bne cr6,0x82ee5c54
	if (!cr6.eq) goto loc_82EE5C54;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_82EE5C54:
	// lwz r3,184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 184);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE5C60"))) PPC_WEAK_FUNC(sub_82EE5C60);
PPC_FUNC_IMPL(__imp__sub_82EE5C60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r28,2
	r28.s64 = 2;
	// addi r29,r30,20
	r29.s64 = r30.s64 + 20;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_82EE5C7C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ee5cb8
	if (!cr6.eq) goto loc_82EE5CB8;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// xor r11,r8,r11
	r11.u64 = ctx.r8.u64 ^ r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ee5cb8
	if (cr6.eq) goto loc_82EE5CB8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ee5cb8
	if (cr6.eq) goto loc_82EE5CB8;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// bl 0x82edd548
	sub_82EDD548(ctx, base);
loc_82EE5CB8:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x82ee5c7c
	if (!cr0.eq) goto loc_82EE5C7C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EE5CD0"))) PPC_WEAK_FUNC(sub_82EE5CD0);
PPC_FUNC_IMPL(__imp__sub_82EE5CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r9,r31,16
	ctx.r9.s64 = r31.s64 + 16;
	// li r8,12
	ctx.r8.s64 = 12;
	// stw r9,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r9.u32);
	// stw r8,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82EE5D28"))) PPC_WEAK_FUNC(sub_82EE5D28);
PPC_FUNC_IMPL(__imp__sub_82EE5D28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EE5D40"))) PPC_WEAK_FUNC(sub_82EE5D40);
PPC_FUNC_IMPL(__imp__sub_82EE5D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE5D48"))) PPC_WEAK_FUNC(sub_82EE5D48);
PPC_FUNC_IMPL(__imp__sub_82EE5D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE5D50"))) PPC_WEAK_FUNC(sub_82EE5D50);
PPC_FUNC_IMPL(__imp__sub_82EE5D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82EE5D90"))) PPC_WEAK_FUNC(sub_82EE5D90);
PPC_FUNC_IMPL(__imp__sub_82EE5D90) {
	PPC_FUNC_PROLOGUE();
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE5D98"))) PPC_WEAK_FUNC(sub_82EE5D98);
PPC_FUNC_IMPL(__imp__sub_82EE5D98) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE5DA0"))) PPC_WEAK_FUNC(sub_82EE5DA0);
PPC_FUNC_IMPL(__imp__sub_82EE5DA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE5DA8"))) PPC_WEAK_FUNC(sub_82EE5DA8);
PPC_FUNC_IMPL(__imp__sub_82EE5DA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// li r11,1
	r11.s64 = 1;
	// addi r9,r10,-15296
	ctx.r9.s64 = ctx.r10.s64 + -15296;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r4,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// sth r11,6(r31)
	PPC_STORE_U16(r31.u32 + 6, r11.u16);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// sth r11,16(r31)
	PPC_STORE_U16(r31.u32 + 16, r11.u16);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lfs f0,-24792(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -24792);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// lhz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82ee5e0c
	if (cr6.eq) goto loc_82EE5E0C;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,6(r11)
	PPC_STORE_U16(r11.u32 + 6, ctx.r9.u16);
loc_82EE5E0C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82ef5910
	sub_82EF5910(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82EE5E30"))) PPC_WEAK_FUNC(sub_82EE5E30);
PPC_FUNC_IMPL(__imp__sub_82EE5E30) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-15296
	ctx.r9.s64 = r11.s64 + -15296;
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// sth r10,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r10.u16);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x82ef5910
	sub_82EF5910(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ef5910
	sub_82EF5910(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82EE5E98"))) PPC_WEAK_FUNC(sub_82EE5E98);
PPC_FUNC_IMPL(__imp__sub_82EE5E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r10,r11,-15296
	ctx.r10.s64 = r11.s64 + -15296;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lhz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ee5ef4
	if (cr6.eq) goto loc_82EE5EF4;
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82ee5ef4
	if (!cr6.eq) goto loc_82EE5EF4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EE5EF4:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-22012
	ctx.r10.s64 = r11.s64 + -22012;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82EE5F18"))) PPC_WEAK_FUNC(sub_82EE5F18);
PPC_FUNC_IMPL(__imp__sub_82EE5F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,12
	ctx.r9.s64 = 12;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82EE5F3C:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82ee5f3c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82EE5F3C;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	f0.f64 = double(temp.f32);
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lhz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r8,22
	cr6.compare<uint32_t>(ctx.r8.u32, 22, xer);
	// bne cr6,0x82ee5fb0
	if (!cr6.eq) goto loc_82EE5FB0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82f12230
	sub_82F12230(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82EE5FB0:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82f0ff18
	sub_82F0FF18(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE5FD0"))) PPC_WEAK_FUNC(sub_82EE5FD0);
PPC_FUNC_IMPL(__imp__sub_82EE5FD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82ee5e98
	sub_82EE5E98(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ee6018
	if (cr6.eq) goto loc_82EE6018;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,44
	ctx.r6.s64 = 44;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EE6018:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82EE6038"))) PPC_WEAK_FUNC(sub_82EE6038);
PPC_FUNC_IMPL(__imp__sub_82EE6038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x82eaf1c0
	sub_82EAF1C0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x82eaf1c0
	sub_82EAF1C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EE6078"))) PPC_WEAK_FUNC(sub_82EE6078);
PPC_FUNC_IMPL(__imp__sub_82EE6078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,32
	r11.s64 = 32;
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,48
	ctx.r10.s64 = 48;
	// stvx128 v0,r3,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r3,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6098"))) PPC_WEAK_FUNC(sub_82EE6098);
PPC_FUNC_IMPL(__imp__sub_82EE6098) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,50
	ctx.r4.s64 = 50;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82ef5d78
	sub_82EF5D78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EE60A8"))) PPC_WEAK_FUNC(sub_82EE60A8);
PPC_FUNC_IMPL(__imp__sub_82EE60A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// extsb r11,r4
	r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ee60c8
	if (cr6.eq) goto loc_82EE60C8;
	// li r11,3
	r11.s64 = 3;
	// li r10,24
	ctx.r10.s64 = 24;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82EE60C8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE60D8"))) PPC_WEAK_FUNC(sub_82EE60D8);
PPC_FUNC_IMPL(__imp__sub_82EE60D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE60E8"))) PPC_WEAK_FUNC(sub_82EE60E8);
PPC_FUNC_IMPL(__imp__sub_82EE60E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE60F0"))) PPC_WEAK_FUNC(sub_82EE60F0);
PPC_FUNC_IMPL(__imp__sub_82EE60F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// addi r9,r10,-26580
	ctx.r9.s64 = ctx.r10.s64 + -26580;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// sth r6,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r6.u16);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// sth r5,64(r3)
	PPC_STORE_U16(ctx.r3.u32 + 64, ctx.r5.u16);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v13,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_setzero_si128());
	// stvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v11,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_setzero_si128());
	// stvx128 v11,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6140"))) PPC_WEAK_FUNC(sub_82EE6140);
PPC_FUNC_IMPL(__imp__sub_82EE6140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lfs f13,192(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v0,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_setzero_si128());
	// lfs f0,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f0.f64 = double(temp.f32);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f12,20(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f12,40(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6180"))) PPC_WEAK_FUNC(sub_82EE6180);
PPC_FUNC_IMPL(__imp__sub_82EE6180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lfs f13,192(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v0,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_setzero_si128());
	// lfs f0,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f0.f64 = double(temp.f32);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f12,20(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f12,40(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE61C0"))) PPC_WEAK_FUNC(sub_82EE61C0);
PPC_FUNC_IMPL(__imp__sub_82EE61C0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f13,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fsel f9,f11,f12,f13
	ctx.f9.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fsel f13,f8,f9,f10
	ctx.f13.f64 = ctx.f8.f64 >= 0.0 ? ctx.f9.f64 : ctx.f10.f64;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82ee61f8
	if (!cr6.gt) goto loc_82EE61F8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
loc_82EE61F8:
	// stfs f0,192(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// stfs f0,196(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// stfs f0,200(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6208"))) PPC_WEAK_FUNC(sub_82EE6208);
PPC_FUNC_IMPL(__imp__sub_82EE6208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f11,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f12,f0,f13
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fsel f8,f9,f11,f10
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f11.f64 : ctx.f10.f64;
	// stfs f8,192(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// stfs f8,196(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// stfs f8,200(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6238"))) PPC_WEAK_FUNC(sub_82EE6238);
PPC_FUNC_IMPL(__imp__sub_82EE6238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lfs f0,192(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	f0.f64 = double(temp.f32);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v0,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_setzero_si128());
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f0,20(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f0,40(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6270"))) PPC_WEAK_FUNC(sub_82EE6270);
PPC_FUNC_IMPL(__imp__sub_82EE6270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lfs f0,192(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	f0.f64 = double(temp.f32);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v0,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_setzero_si128());
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f0,20(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f0,40(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE62A8"))) PPC_WEAK_FUNC(sub_82EE62A8);
PPC_FUNC_IMPL(__imp__sub_82EE62A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	// addi r11,r3,192
	r11.s64 = ctx.r3.s64 + 192;
	// lvx128 v12,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r3,208
	ctx.r10.s64 = ctx.r3.s64 + 208;
	// li r8,96
	ctx.r8.s64 = 96;
	// addi r9,r3,224
	ctx.r9.s64 = ctx.r3.s64 + 224;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v13,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x0));
	// lvx128 v11,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v10,v12,v13,v11
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// stvx128 v10,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r3,r8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v6,v7,v8
	simde_mm_store_ps(ctx.v6.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vpermwi128 v5,v6,135
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), 0x78));
	// lvx128 v4,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v3,v9,99
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0x9C));
	// lvx128 v2,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v1,v9,135
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0x78));
	// vpermwi128 v31,v6,99
	simde_mm_store_si128((simde__m128i*)v31.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), 0x9C));
	// vmulfp128 v30,v5,v3
	simde_mm_store_ps(v30.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v3.f32)));
	// vmulfp128 v29,v31,v1
	simde_mm_store_ps(v29.f32, simde_mm_mul_ps(simde_mm_load_ps(v31.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vsubfp v28,v29,v30
	simde_mm_store_ps(v28.f32, simde_mm_sub_ps(simde_mm_load_ps(v29.f32), simde_mm_load_ps(v30.f32)));
	// vmaddfp v27,v2,v28,v4
	simde_mm_store_ps(v27.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(v28.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// stvx128 v27,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6310"))) PPC_WEAK_FUNC(sub_82EE6310);
PPC_FUNC_IMPL(__imp__sub_82EE6310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r3,224
	r11.s64 = ctx.r3.s64 + 224;
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,192
	ctx.r10.s64 = 192;
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r3,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v11,v12,v0,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v11,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6330"))) PPC_WEAK_FUNC(sub_82EE6330);
PPC_FUNC_IMPL(__imp__sub_82EE6330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// addi r10,r1,28
	ctx.r10.s64 = ctx.r1.s64 + 28;
	// stfs f1,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,192
	ctx.r9.s64 = 192;
	// addi r11,r3,208
	r11.s64 = ctx.r3.s64 + 208;
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v8,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// lvx128 v11,r3,r9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v10,v11,3
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0x0));
	// lvx128 v9,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v7,v8,v10,v9
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// stvx128 v7,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6368"))) PPC_WEAK_FUNC(sub_82EE6368);
PPC_FUNC_IMPL(__imp__sub_82EE6368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,140
	r11.s64 = ctx.r1.s64 + 140;
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvlx v13,0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v11,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// lwz r8,76(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// stvx128 v11,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE63C0"))) PPC_WEAK_FUNC(sub_82EE63C0);
PPC_FUNC_IMPL(__imp__sub_82EE63C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,140
	r11.s64 = ctx.r1.s64 + 140;
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvlx v13,0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v11,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// lwz r8,80(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// stvx128 v11,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6410"))) PPC_WEAK_FUNC(sub_82EE6410);
PPC_FUNC_IMPL(__imp__sub_82EE6410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lfs f13,192(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v0,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_setzero_si128());
	// lfs f0,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f0.f64 = double(temp.f32);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f12,20(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f12,40(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6450"))) PPC_WEAK_FUNC(sub_82EE6450);
PPC_FUNC_IMPL(__imp__sub_82EE6450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lfs f13,192(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v0,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_setzero_si128());
	// lfs f0,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f0.f64 = double(temp.f32);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f12,20(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f12,40(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6490"))) PPC_WEAK_FUNC(sub_82EE6490);
PPC_FUNC_IMPL(__imp__sub_82EE6490) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f13,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fsel f9,f11,f12,f13
	ctx.f9.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fsel f13,f8,f9,f10
	ctx.f13.f64 = ctx.f8.f64 >= 0.0 ? ctx.f9.f64 : ctx.f10.f64;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82ee64c8
	if (!cr6.gt) goto loc_82EE64C8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
loc_82EE64C8:
	// stfs f0,192(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// stfs f0,196(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// stfs f0,200(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE64D8"))) PPC_WEAK_FUNC(sub_82EE64D8);
PPC_FUNC_IMPL(__imp__sub_82EE64D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f11,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f12,f0,f13
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fsel f8,f9,f11,f10
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f11.f64 : ctx.f10.f64;
	// stfs f8,192(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// stfs f8,196(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// stfs f8,200(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6508"))) PPC_WEAK_FUNC(sub_82EE6508);
PPC_FUNC_IMPL(__imp__sub_82EE6508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lfs f0,192(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	f0.f64 = double(temp.f32);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v0,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_setzero_si128());
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f0,20(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f0,40(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6540"))) PPC_WEAK_FUNC(sub_82EE6540);
PPC_FUNC_IMPL(__imp__sub_82EE6540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lfs f0,192(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	f0.f64 = double(temp.f32);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v0,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_setzero_si128());
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f0,20(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f0,40(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6578"))) PPC_WEAK_FUNC(sub_82EE6578);
PPC_FUNC_IMPL(__imp__sub_82EE6578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	// addi r11,r3,192
	r11.s64 = ctx.r3.s64 + 192;
	// lvx128 v12,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r3,208
	ctx.r10.s64 = ctx.r3.s64 + 208;
	// li r8,96
	ctx.r8.s64 = 96;
	// addi r9,r3,224
	ctx.r9.s64 = ctx.r3.s64 + 224;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v13,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x0));
	// lvx128 v11,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v10,v12,v13,v11
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// stvx128 v10,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r3,r8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v6,v7,v8
	simde_mm_store_ps(ctx.v6.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vpermwi128 v5,v6,135
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), 0x78));
	// lvx128 v4,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v3,v9,99
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0x9C));
	// lvx128 v2,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v1,v9,135
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0x78));
	// vpermwi128 v31,v6,99
	simde_mm_store_si128((simde__m128i*)v31.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), 0x9C));
	// vmulfp128 v30,v5,v3
	simde_mm_store_ps(v30.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v3.f32)));
	// vmulfp128 v29,v31,v1
	simde_mm_store_ps(v29.f32, simde_mm_mul_ps(simde_mm_load_ps(v31.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vsubfp v28,v29,v30
	simde_mm_store_ps(v28.f32, simde_mm_sub_ps(simde_mm_load_ps(v29.f32), simde_mm_load_ps(v30.f32)));
	// vmaddfp v27,v2,v28,v4
	simde_mm_store_ps(v27.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(v28.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// stvx128 v27,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE65E0"))) PPC_WEAK_FUNC(sub_82EE65E0);
PPC_FUNC_IMPL(__imp__sub_82EE65E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r3,224
	r11.s64 = ctx.r3.s64 + 224;
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,192
	ctx.r10.s64 = 192;
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r3,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v11,v12,v0,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v11,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6600"))) PPC_WEAK_FUNC(sub_82EE6600);
PPC_FUNC_IMPL(__imp__sub_82EE6600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// addi r10,r1,28
	ctx.r10.s64 = ctx.r1.s64 + 28;
	// stfs f1,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,192
	ctx.r9.s64 = 192;
	// addi r11,r3,208
	r11.s64 = ctx.r3.s64 + 208;
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v8,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// lvx128 v11,r3,r9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v10,v11,3
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0x0));
	// lvx128 v9,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v7,v8,v10,v9
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// stvx128 v7,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6638"))) PPC_WEAK_FUNC(sub_82EE6638);
PPC_FUNC_IMPL(__imp__sub_82EE6638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,140
	r11.s64 = ctx.r1.s64 + 140;
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvlx v13,0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v11,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// lwz r8,76(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// stvx128 v11,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6690"))) PPC_WEAK_FUNC(sub_82EE6690);
PPC_FUNC_IMPL(__imp__sub_82EE6690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,140
	r11.s64 = ctx.r1.s64 + 140;
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvlx v13,0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v11,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// lwz r8,80(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// stvx128 v11,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE66E0"))) PPC_WEAK_FUNC(sub_82EE66E0);
PPC_FUNC_IMPL(__imp__sub_82EE66E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE66E8"))) PPC_WEAK_FUNC(sub_82EE66E8);
PPC_FUNC_IMPL(__imp__sub_82EE66E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE66F0"))) PPC_WEAK_FUNC(sub_82EE66F0);
PPC_FUNC_IMPL(__imp__sub_82EE66F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE66F8"))) PPC_WEAK_FUNC(sub_82EE66F8);
PPC_FUNC_IMPL(__imp__sub_82EE66F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6700"))) PPC_WEAK_FUNC(sub_82EE6700);
PPC_FUNC_IMPL(__imp__sub_82EE6700) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6708"))) PPC_WEAK_FUNC(sub_82EE6708);
PPC_FUNC_IMPL(__imp__sub_82EE6708) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6710"))) PPC_WEAK_FUNC(sub_82EE6710);
PPC_FUNC_IMPL(__imp__sub_82EE6710) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6718"))) PPC_WEAK_FUNC(sub_82EE6718);
PPC_FUNC_IMPL(__imp__sub_82EE6718) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6720"))) PPC_WEAK_FUNC(sub_82EE6720);
PPC_FUNC_IMPL(__imp__sub_82EE6720) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6728"))) PPC_WEAK_FUNC(sub_82EE6728);
PPC_FUNC_IMPL(__imp__sub_82EE6728) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6730"))) PPC_WEAK_FUNC(sub_82EE6730);
PPC_FUNC_IMPL(__imp__sub_82EE6730) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6738"))) PPC_WEAK_FUNC(sub_82EE6738);
PPC_FUNC_IMPL(__imp__sub_82EE6738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ee6774
	if (cr6.eq) goto loc_82EE6774;
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ee6774
	if (cr6.eq) goto loc_82EE6774;
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// sth r10,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r10.u16);
loc_82EE6774:
	// lwz r3,280(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 280);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ee67b8
	if (cr6.eq) goto loc_82EE67B8;
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ee67b8
	if (cr6.eq) goto loc_82EE67B8;
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82ee67b8
	if (!cr6.eq) goto loc_82EE67B8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EE67B8:
	// stw r31,280(r30)
	PPC_STORE_U32(r30.u32 + 280, r31.u32);
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

__attribute__((alias("__imp__sub_82EE67D8"))) PPC_WEAK_FUNC(sub_82EE67D8);
PPC_FUNC_IMPL(__imp__sub_82EE67D8) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82ee2ac0
	sub_82EE2AC0(ctx, base);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r11,r31,192
	r11.s64 = r31.s64 + 192;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,21204
	ctx.r8.s64 = ctx.r9.s64 + 21204;
	// stw r10,280(r31)
	PPC_STORE_U32(r31.u32 + 280, ctx.r10.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r10,284(r31)
	PPC_STORE_U16(r31.u32 + 284, ctx.r10.u16);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v13,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_setzero_si128());
	// stvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r7,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r7.u8);
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

__attribute__((alias("__imp__sub_82EE6840"))) PPC_WEAK_FUNC(sub_82EE6840);
PPC_FUNC_IMPL(__imp__sub_82EE6840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r10,r11,21204
	ctx.r10.s64 = r11.s64 + 21204;
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 280);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ee68a4
	if (cr6.eq) goto loc_82EE68A4;
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ee68a4
	if (cr6.eq) goto loc_82EE68A4;
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82ee68a4
	if (!cr6.eq) goto loc_82EE68A4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EE68A4:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-22012
	ctx.r10.s64 = r11.s64 + -22012;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82EE68C8"))) PPC_WEAK_FUNC(sub_82EE68C8);
PPC_FUNC_IMPL(__imp__sub_82EE68C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v0,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_setzero_si128());
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE68F0"))) PPC_WEAK_FUNC(sub_82EE68F0);
PPC_FUNC_IMPL(__imp__sub_82EE68F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v0,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_setzero_si128());
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6918"))) PPC_WEAK_FUNC(sub_82EE6918);
PPC_FUNC_IMPL(__imp__sub_82EE6918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v0,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_setzero_si128());
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6940"))) PPC_WEAK_FUNC(sub_82EE6940);
PPC_FUNC_IMPL(__imp__sub_82EE6940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v0,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_setzero_si128());
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6968"))) PPC_WEAK_FUNC(sub_82EE6968);
PPC_FUNC_IMPL(__imp__sub_82EE6968) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6970"))) PPC_WEAK_FUNC(sub_82EE6970);
PPC_FUNC_IMPL(__imp__sub_82EE6970) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6978"))) PPC_WEAK_FUNC(sub_82EE6978);
PPC_FUNC_IMPL(__imp__sub_82EE6978) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6980"))) PPC_WEAK_FUNC(sub_82EE6980);
PPC_FUNC_IMPL(__imp__sub_82EE6980) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82ee67d8
	sub_82EE67D8(ctx, base);
	// lis r11,-32237
	r11.s64 = -2112684032;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r9,r11,-17716
	ctx.r9.s64 = r11.s64 + -17716;
	// stb r10,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82EE69C8"))) PPC_WEAK_FUNC(sub_82EE69C8);
PPC_FUNC_IMPL(__imp__sub_82EE69C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r11,64
	ctx.r9.s64 = r11.s64 + 64;
	// stvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r10,64
	ctx.r8.s64 = ctx.r10.s64 + 64;
	// lvx128 v13,r11,r5
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,64
	r30.s64 = 64;
	// stvx128 v13,r10,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,144
	r31.s64 = 144;
	// lvx128 v12,r11,r6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r10,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r11,r7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r10,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v10,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r9,r5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v9,r8,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r9,r6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v8,r8,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r9,r7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v7,r8,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r4,208
	ctx.r7.s64 = ctx.r4.s64 + 208;
	// lvx128 v6,r9,r30
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r4,224
	ctx.r9.s64 = ctx.r4.s64 + 224;
	// stvx128 v6,r8,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32 + r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r11,r31
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v5,r10,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,176(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	f0.f64 = double(temp.f32);
	// stfs f0,176(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 176, temp.u32);
	// lfs f13,180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,180(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 180, temp.u32);
	// lfs f12,184(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,184(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 184, temp.u32);
	// lbz r11,188(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 188);
	// stb r11,188(r4)
	PPC_STORE_U8(ctx.r4.u32 + 188, r11.u8);
	// lbz r10,189(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 189);
	// stb r10,189(r4)
	PPC_STORE_U8(ctx.r4.u32 + 189, ctx.r10.u8);
	// lbz r8,190(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 190);
	// stb r8,190(r4)
	PPC_STORE_U8(ctx.r4.u32 + 190, ctx.r8.u8);
	// lvx128 v4,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v3,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_setzero_si128());
	// stvx128 v3,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v1,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_setzero_si128());
	// stvx128 v1,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6AA0"))) PPC_WEAK_FUNC(sub_82EE6AA0);
PPC_FUNC_IMPL(__imp__sub_82EE6AA0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82ee6b50
	sub_82EE6B50(ctx, base);
	// lis r11,-32237
	r11.s64 = -2112684032;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r11,-19764
	ctx.r9.s64 = r11.s64 + -19764;
	// stb r10,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82EE6AE8"))) PPC_WEAK_FUNC(sub_82EE6AE8);
PPC_FUNC_IMPL(__imp__sub_82EE6AE8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82ee6b50
	sub_82EE6B50(ctx, base);
	// lis r11,-32237
	r11.s64 = -2112684032;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r9,r11,-19916
	ctx.r9.s64 = r11.s64 + -19916;
	// stb r10,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82EE6B30"))) PPC_WEAK_FUNC(sub_82EE6B30);
PPC_FUNC_IMPL(__imp__sub_82EE6B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// fdivs f1,f0,f1
	ctx.f1.f64 = double(float(f0.f64 / ctx.f1.f64));
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EE6B50"))) PPC_WEAK_FUNC(sub_82EE6B50);
PPC_FUNC_IMPL(__imp__sub_82EE6B50) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82ee2ac0
	sub_82EE2AC0(ctx, base);
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r9,r11,30896
	ctx.r9.s64 = r11.s64 + 30896;
	// li r8,192
	ctx.r8.s64 = 192;
	// addi r7,r10,-20020
	ctx.r7.s64 = ctx.r10.s64 + -20020;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r6,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r6.u8);
	// stvx128 v0,r31,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_82EE6BB0"))) PPC_WEAK_FUNC(sub_82EE6BB0);
PPC_FUNC_IMPL(__imp__sub_82EE6BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lfs f13,192(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// li r9,16
	ctx.r9.s64 = 16;
	// lfs f11,200(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// li r8,32
	ctx.r8.s64 = 32;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v0,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_setzero_si128());
	// lfs f0,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f0.f64 = double(temp.f32);
	// fdivs f10,f0,f13
	ctx.f10.f64 = double(float(f0.f64 / ctx.f13.f64));
	// fdivs f9,f0,f12
	ctx.f9.f64 = double(float(f0.f64 / ctx.f12.f64));
	// fdivs f8,f0,f11
	ctx.f8.f64 = double(float(f0.f64 / ctx.f11.f64));
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f10,0(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f9,20(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f8,40(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6C00"))) PPC_WEAK_FUNC(sub_82EE6C00);
PPC_FUNC_IMPL(__imp__sub_82EE6C00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f12,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// li r9,192
	ctx.r9.s64 = 192;
	// lfs f11,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,204(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,-4(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lfs f0,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// fdivs f9,f0,f13
	ctx.f9.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f9,-16(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fdivs f8,f0,f12
	ctx.f8.f64 = double(float(f0.f64 / ctx.f12.f64));
	// stfs f8,-12(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fdivs f7,f0,f11
	ctx.f7.f64 = double(float(f0.f64 / ctx.f11.f64));
	// stfs f7,-8(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r3,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6C48"))) PPC_WEAK_FUNC(sub_82EE6C48);
PPC_FUNC_IMPL(__imp__sub_82EE6C48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lfs f0,192(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	f0.f64 = double(temp.f32);
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f13,196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// li r9,32
	ctx.r9.s64 = 32;
	// lfs f12,200(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v0,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_setzero_si128());
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f13,20(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f12,40(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6C88"))) PPC_WEAK_FUNC(sub_82EE6C88);
PPC_FUNC_IMPL(__imp__sub_82EE6C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r10,192
	ctx.r10.s64 = 192;
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,204(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f12,-8(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f11,-4(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r3,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6CC0"))) PPC_WEAK_FUNC(sub_82EE6CC0);
PPC_FUNC_IMPL(__imp__sub_82EE6CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,192
	ctx.r10.s64 = 192;
	// addi r5,r11,16
	ctx.r5.s64 = r11.s64 + 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r11,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// vspltw v13,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v12,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v11,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// lvx128 v10,r11,r9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v9,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// lvx128 v8,r11,r8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// vmulfp128 v7,v13,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)));
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// vmulfp128 v6,v11,v10
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v10.f32)));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// vmulfp128 v5,v9,v8
	simde_mm_store_ps(ctx.v5.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v8.f32)));
	// stvx128 v7,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v6,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v5,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82eb18b0
	sub_82EB18B0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6D40"))) PPC_WEAK_FUNC(sub_82EE6D40);
PPC_FUNC_IMPL(__imp__sub_82EE6D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f13,192(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lfs f11,200(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// vxor v0,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_setzero_si128());
	// lfs f0,2244(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2244);
	f0.f64 = double(temp.f32);
	// fdivs f10,f0,f13
	ctx.f10.f64 = double(float(f0.f64 / ctx.f13.f64));
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// fdivs f9,f0,f12
	ctx.f9.f64 = double(float(f0.f64 / ctx.f12.f64));
	// fdivs f8,f0,f11
	ctx.f8.f64 = double(float(f0.f64 / ctx.f11.f64));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r7
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stfs f8,40(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// bl 0x82eb19c0
	sub_82EB19C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6DB8"))) PPC_WEAK_FUNC(sub_82EE6DB8);
PPC_FUNC_IMPL(__imp__sub_82EE6DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// addi r10,r1,28
	ctx.r10.s64 = ctx.r1.s64 + 28;
	// stfs f1,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,192
	ctx.r9.s64 = 192;
	// addi r11,r3,208
	r11.s64 = ctx.r3.s64 + 208;
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v8,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// lvx128 v11,r3,r9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v10,v11,3
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0x0));
	// lvx128 v9,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v7,v8,v10,v9
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// stvx128 v7,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6DF0"))) PPC_WEAK_FUNC(sub_82EE6DF0);
PPC_FUNC_IMPL(__imp__sub_82EE6DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,140
	r11.s64 = ctx.r1.s64 + 140;
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvlx v13,0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v11,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// lwz r8,76(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// stvx128 v11,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6E48"))) PPC_WEAK_FUNC(sub_82EE6E48);
PPC_FUNC_IMPL(__imp__sub_82EE6E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,140
	r11.s64 = ctx.r1.s64 + 140;
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvlx v13,0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v11,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// lwz r8,80(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// stvx128 v11,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6E98"))) PPC_WEAK_FUNC(sub_82EE6E98);
PPC_FUNC_IMPL(__imp__sub_82EE6E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v14{};
	PPCVRegister v15{};
	PPCVRegister v16{};
	PPCVRegister v17{};
	PPCVRegister v18{};
	PPCVRegister v19{};
	PPCVRegister v20{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r10,r3,192
	ctx.r10.s64 = ctx.r3.s64 + 192;
	// lvx128 v12,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r3,208
	ctx.r9.s64 = ctx.r3.s64 + 208;
	// li r31,96
	r31.s64 = 96;
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r30,-32238
	r30.s64 = -2112749568;
	// vspltw v13,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x0));
	// lvx128 v11,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,4496
	r30.s64 = r30.s64 + 4496;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r8,r3,224
	ctx.r8.s64 = ctx.r3.s64 + 224;
	// vmaddfp v10,v12,v13,v11
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// stvx128 v10,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r3,r31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v6,v7,v8
	simde_mm_store_ps(ctx.v6.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v8.f32)));
	// lvx128 v3,r11,r6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v2,v9,99
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0x9C));
	// lvx128 v29,r0,r11
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v1,v9,135
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0x78));
	// vpermwi128 v4,v6,135
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), 0x78));
	// lvx128 v0,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v31,v6,99
	simde_mm_store_si128((simde__m128i*)v31.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), 0x9C));
	// lvx128 v30,r0,r10
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r11,r7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v26,v5,v5
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vmulfp128 v28,v4,v2
	simde_mm_store_ps(v28.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vor v27,v29,v29
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_load_si128((simde__m128i*)v29.u8));
	// vmulfp128 v25,v31,v1
	simde_mm_store_ps(v25.f32, simde_mm_mul_ps(simde_mm_load_ps(v31.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vor v24,v3,v3
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// lvx128 v23,r0,r8
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v22,v25,v28
	simde_mm_store_ps(v22.f32, simde_mm_sub_ps(simde_mm_load_ps(v25.f32), simde_mm_load_ps(v28.f32)));
	// vmsum3fp128 v21,v29,v22
	simde_mm_store_ps(v21.f32, simde_mm_dp_ps(simde_mm_load_ps(v29.f32), simde_mm_load_ps(v22.f32), 0xEF));
	// vmsum3fp128 v20,v3,v22
	simde_mm_store_ps(v20.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(v22.f32), 0xEF));
	// vmsum3fp128 v19,v5,v22
	simde_mm_store_ps(v19.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(v22.f32), 0xEF));
	// vmrghw v18,v21,v20
	simde_mm_store_si128((simde__m128i*)v18.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v20.u32), simde_mm_load_si128((simde__m128i*)v21.u32)));
	// vmrghw v17,v19,v0
	simde_mm_store_si128((simde__m128i*)v17.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)v19.u32)));
	// vmrghw v16,v18,v17
	simde_mm_store_si128((simde__m128i*)v16.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v17.u32), simde_mm_load_si128((simde__m128i*)v18.u32)));
	// vmulfp128 v15,v30,v16
	simde_mm_store_ps(v15.f32, simde_mm_mul_ps(simde_mm_load_ps(v30.f32), simde_mm_load_ps(v16.f32)));
	// vspltw v14,v15,0
	simde_mm_store_si128((simde__m128i*)v14.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v15.u32), 0xFF));
	// vspltw v0,v15,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v15.u32), 0xAA));
	// vspltw v13,v15,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v15.u32), 0x55));
	// vmulfp128 v12,v27,v14
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(v27.f32), simde_mm_load_ps(v14.f32)));
	// vmaddfp v11,v26,v0,v12
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v26.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v10,v24,v13,v11
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v24.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vaddfp v9,v23,v10
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_load_ps(v23.f32), simde_mm_load_ps(ctx.v10.f32)));
	// stvx128 v9,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE6F78"))) PPC_WEAK_FUNC(sub_82EE6F78);
PPC_FUNC_IMPL(__imp__sub_82EE6F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,16
	ctx.r8.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// li r7,192
	ctx.r7.s64 = 192;
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r10,4496
	ctx.r6.s64 = ctx.r10.s64 + 4496;
	// lvx128 v12,r11,r8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v11,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// lvx128 v10,r11,r9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v9,v12,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v8,v10,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// vor v7,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// lvx128 v6,r3,r7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v5,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// lvx128 v0,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v4,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// addi r10,r3,224
	ctx.r10.s64 = ctx.r3.s64 + 224;
	// lvx128 v3,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v2,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v1,v11,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v31,v1,v2
	simde_mm_store_si128((simde__m128i*)v31.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.u32), simde_mm_load_si128((simde__m128i*)ctx.v1.u32)));
	// vmulfp128 v30,v6,v31
	simde_mm_store_ps(v30.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(v31.f32)));
	// vspltw v29,v30,0
	simde_mm_store_si128((simde__m128i*)v29.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v30.u32), 0xFF));
	// vspltw v28,v30,1
	simde_mm_store_si128((simde__m128i*)v28.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v30.u32), 0xAA));
	// vspltw v27,v30,2
	simde_mm_store_si128((simde__m128i*)v27.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v30.u32), 0x55));
	// vmulfp128 v26,v7,v29
	simde_mm_store_ps(v26.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(v29.f32)));
	// vmaddfp v25,v5,v28,v26
	simde_mm_store_ps(v25.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(v28.f32)), simde_mm_load_ps(v26.f32)));
	// vmaddfp v24,v4,v27,v25
	simde_mm_store_ps(v24.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(v27.f32)), simde_mm_load_ps(v25.f32)));
	// vaddfp v23,v3,v24
	simde_mm_store_ps(v23.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(v24.f32)));
	// stvx128 v23,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE7000"))) PPC_WEAK_FUNC(sub_82EE7000);
PPC_FUNC_IMPL(__imp__sub_82EE7000) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82f00d68
	sub_82F00D68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eec448
	sub_82EEC448(ctx, base);
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

__attribute__((alias("__imp__sub_82EE7048"))) PPC_WEAK_FUNC(sub_82EE7048);
PPC_FUNC_IMPL(__imp__sub_82EE7048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// bl 0x82f00d68
	sub_82F00D68(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x82ee7084
	if (cr6.eq) goto loc_82EE7084;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eec448
	sub_82EEC448(ctx, base);
loc_82EE7084:
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// bne 0x82ee70b4
	if (!cr0.eq) goto loc_82EE70B4;
	// lbz r11,140(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ee70b4
	if (!cr6.eq) goto loc_82EE70B4;
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ee70b4
	if (cr6.eq) goto loc_82EE70B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ed5370
	sub_82ED5370(ctx, base);
loc_82EE70B4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EE70C0"))) PPC_WEAK_FUNC(sub_82EE70C0);
PPC_FUNC_IMPL(__imp__sub_82EE70C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r11,280(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ee70e4
	if (cr6.eq) goto loc_82EE70E4;
	// bl 0x82eec520
	sub_82EEC520(ctx, base);
loc_82EE70E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f007e0
	sub_82F007E0(ctx, base);
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

__attribute__((alias("__imp__sub_82EE7100"))) PPC_WEAK_FUNC(sub_82EE7100);
PPC_FUNC_IMPL(__imp__sub_82EE7100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r11,1
	r11.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lbz r9,37(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 37);
	// rlwimi r9,r11,6,0,25
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 6) & 0xFFFFFFC0) | (ctx.r9.u64 & 0xFFFFFFFF0000003F);
	// stb r9,37(r10)
	PPC_STORE_U8(ctx.r10.u32 + 37, ctx.r9.u8);
	// lwz r8,132(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82ee7160
	if (cr6.eq) goto loc_82EE7160;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x82ee7154
	if (cr6.eq) goto loc_82EE7154;
	// lwz r11,280(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 280);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ee7154
	if (cr6.eq) goto loc_82EE7154;
	// bl 0x82eec520
	sub_82EEC520(ctx, base);
loc_82EE7154:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f007e0
	sub_82F007E0(ctx, base);
	// b 0x82ee71bc
	goto loc_82EE71BC;
loc_82EE7160:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// beq cr6,0x82ee7184
	if (cr6.eq) goto loc_82EE7184;
	// lwz r11,280(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 280);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ee7184
	if (cr6.eq) goto loc_82EE7184;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eec520
	sub_82EEC520(ctx, base);
loc_82EE7184:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f007e0
	sub_82F007E0(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// bne 0x82ee71bc
	if (!cr0.eq) goto loc_82EE71BC;
	// lbz r11,140(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ee71bc
	if (!cr6.eq) goto loc_82EE71BC;
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ee71bc
	if (cr6.eq) goto loc_82EE71BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ed5370
	sub_82ED5370(ctx, base);
loc_82EE71BC:
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

__attribute__((alias("__imp__sub_82EE71D8"))) PPC_WEAK_FUNC(sub_82EE71D8);
PPC_FUNC_IMPL(__imp__sub_82EE71D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// addic. r31,r11,-1
	xer.ca = r11.u32 > 0;
	r31.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82ee7210
	if (cr0.lt) goto loc_82EE7210;
	// rlwinm r30,r31,2,0,29
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_82EE71F8:
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x82ef4448
	sub_82EF4448(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// bge 0x82ee71f8
	if (!cr0.lt) goto loc_82EE71F8;
loc_82EE7210:
	// lwz r11,56(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// addic. r31,r11,-1
	xer.ca = r11.u32 > 0;
	r31.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82ee7238
	if (cr0.lt) goto loc_82EE7238;
	// rlwinm r30,r31,2,0,29
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_82EE7220:
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82ef4448
	sub_82EF4448(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// bge 0x82ee7220
	if (!cr0.lt) goto loc_82EE7220;
loc_82EE7238:
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// bl 0x82ef4448
	sub_82EF4448(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EE7248"))) PPC_WEAK_FUNC(sub_82EE7248);
PPC_FUNC_IMPL(__imp__sub_82EE7248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// li r26,0
	r26.s64 = 0;
	// lwz r11,96(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ee72fc
	if (!cr6.gt) goto loc_82EE72FC;
	// li r28,0
	r28.s64 = 0;
loc_82EE7278:
	// lwz r11,92(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 92);
	// add r31,r28,r11
	r31.u64 = r28.u64 + r11.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + r11.u64;
	// lbz r9,216(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 216);
	// cmplwi cr6,r9,7
	cr6.compare<uint32_t>(ctx.r9.u32, 7, xer);
	// bne cr6,0x82ee72a4
	if (!cr6.eq) goto loc_82EE72A4;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// b 0x82ee72d0
	goto loc_82EE72D0;
loc_82EE72A4:
	// cmpwi cr6,r24,7
	cr6.compare<int32_t>(r24.s32, 7, xer);
	// bne cr6,0x82ee72e8
	if (!cr6.eq) goto loc_82EE72E8;
	// lwz r4,184(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 184);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r5,184(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// bl 0x82ef53d8
	sub_82EF53D8(ctx, base);
	// lwz r11,184(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 184);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x82ee72e8
	if (!cr6.eq) goto loc_82EE72E8;
	// lwz r11,184(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// addi r3,r11,88
	ctx.r3.s64 = r11.s64 + 88;
loc_82EE72D0:
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f768e0
	sub_82F768E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82f76698
	sub_82F76698(ctx, base);
loc_82EE72E8:
	// lwz r11,96(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 96);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x82ee7278
	if (cr6.lt) goto loc_82EE7278;
loc_82EE72FC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EE7308"))) PPC_WEAK_FUNC(sub_82EE7308);
PPC_FUNC_IMPL(__imp__sub_82EE7308) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82ee731c
	if (!cr6.eq) goto loc_82EE731C;
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82EE731C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82ee7330
	if (!cr6.eq) goto loc_82EE7330;
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82EE7330:
	// lwz r11,72(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// lwz r10,72(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,192(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 192);
	// lwz r6,192(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 192);
	// subfc r5,r6,r7
	xer.ca = ctx.r7.u32 >= ctx.r6.u32;
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE7360"))) PPC_WEAK_FUNC(sub_82EE7360);
PPC_FUNC_IMPL(__imp__sub_82EE7360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r11,34(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 34);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// sth r7,34(r4)
	PPC_STORE_U16(ctx.r4.u32 + 34, ctx.r7.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE7388"))) PPC_WEAK_FUNC(sub_82EE7388);
PPC_FUNC_IMPL(__imp__sub_82EE7388) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,216(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 216);
	// stw r31,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r31.u32);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bne cr6,0x82ee73bc
	if (!cr6.eq) goto loc_82EE73BC;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x82ef45a8
	sub_82EF45A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_82EE73BC:
	// lbz r11,184(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 184);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ee753c
	if (cr6.eq) goto loc_82EE753C;
	// addi r11,r5,-1
	r11.s64 = ctx.r5.s64 + -1;
	// addi r30,r31,40
	r30.s64 = r31.s64 + 40;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r10,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r29,r11
	r29.u64 = r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ee73e8
	if (!cr6.eq) goto loc_82EE73E8;
	// addi r30,r31,52
	r30.s64 = r31.s64 + 52;
loc_82EE73E8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ee747c
	if (cr6.eq) goto loc_82EE747C;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// addic. r11,r4,-10
	xer.ca = ctx.r4.u32 > 9;
	r11.s64 = ctx.r4.s64 + -10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82ee7404
	if (cr0.lt) goto loc_82EE7404;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
loc_82EE7404:
	// addi r7,r4,-1
	ctx.r7.s64 = ctx.r4.s64 + -1;
	// cmpw cr6,r7,r5
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, xer);
	// blt cr6,0x82ee747c
	if (cr6.lt) goto loc_82EE747C;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r6
	ctx.r8.u64 = r11.u64 + ctx.r6.u64;
loc_82EE741C:
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// ble cr6,0x82ee743c
	if (!cr6.gt) goto loc_82EE743C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82EE743C:
	// lbz r11,38(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 38);
	// rlwinm r9,r11,0,26,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ee746c
	if (cr6.eq) goto loc_82EE746C;
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82ee7460
	if (cr6.lt) goto loc_82EE7460;
	// li r11,0
	r11.s64 = 0;
loc_82EE7460:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ee750c
	if (!cr6.eq) goto loc_82EE750C;
loc_82EE746C:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// cmpw cr6,r7,r5
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, xer);
	// bge cr6,0x82ee741c
	if (!cr6.lt) goto loc_82EE741C;
loc_82EE747C:
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r5,50
	ctx.r5.s64 = 50;
	// li r4,108
	ctx.r4.s64 = 108;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r9,108
	ctx.r9.s64 = 108;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x82ef4e10
	sub_82EF4E10(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// rlwimi r8,r29,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft32(r29.u32, 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// lbz r7,38(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 38);
	// rlwimi r7,r8,4,0,27
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 4) & 0xFFFFFFF0) | (ctx.r7.u64 & 0xFFFFFFFF0000000F);
	// stb r7,38(r31)
	PPC_STORE_U8(r31.u32 + 38, ctx.r7.u8);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r4,32(r31)
	PPC_STORE_U16(r31.u32 + 32, ctx.r4.u16);
	// stb r4,36(r31)
	PPC_STORE_U8(r31.u32 + 36, ctx.r4.u8);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// clrlwi r9,r10,2
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ee74ec
	if (!cr6.eq) goto loc_82EE74EC;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EE74EC:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r31.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// b 0x82ee7544
	goto loc_82EE7544;
loc_82EE750C:
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// lbz r10,37(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 37);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r9,r9,0,28,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// ori r8,r9,16
	ctx.r8.u64 = ctx.r9.u64 | 16;
	// stb r8,37(r3)
	PPC_STORE_U8(ctx.r3.u32 + 37, ctx.r8.u8);
	// bl 0x82ef45a8
	sub_82EF45A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_82EE753C:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82EE7544:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef45a8
	sub_82EF45A8(ctx, base);
	// lwz r11,192(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 192);
	// stb r11,36(r31)
	PPC_STORE_U8(r31.u32 + 36, r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EE7560"))) PPC_WEAK_FUNC(sub_82EE7560);
PPC_FUNC_IMPL(__imp__sub_82EE7560) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r25,0
	r25.s64 = 0;
	// lhz r11,508(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 508);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ee7688
	if (cr6.eq) goto loc_82EE7688;
	// li r27,0
	r27.s64 = 0;
loc_82EE758C:
	// lwz r11,504(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 504);
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// lwzx r31,r27,r11
	r31.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ee7674
	if (!cr6.eq) goto loc_82EE7674;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ee75c4
	if (!cr6.eq) goto loc_82EE75C4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EE75C4:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r31.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r8.u32);
	// lhz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82ee75f8
	if (cr6.eq) goto loc_82EE75F8;
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// sth r10,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r10.u16);
loc_82EE75F8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// bl 0x82ef44f8
	sub_82EF44F8(ctx, base);
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// lbz r10,37(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r9,r9,0,30,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// ori r8,r9,4
	ctx.r8.u64 = ctx.r9.u64 | 4;
	// stb r8,37(r11)
	PPC_STORE_U8(r11.u32 + 37, ctx.r8.u8);
	// lwz r30,32(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// lhz r7,34(r30)
	ctx.r7.u64 = PPC_LOAD_U16(r30.u32 + 34);
	// cmplwi cr6,r7,65535
	cr6.compare<uint32_t>(ctx.r7.u32, 65535, xer);
	// bne cr6,0x82ee7674
	if (!cr6.eq) goto loc_82EE7674;
	// lwz r11,68(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 68);
	// addi r31,r29,64
	r31.s64 = r29.s64 + 64;
	// sth r11,34(r30)
	PPC_STORE_U16(r30.u32 + 34, r11.u16);
	// lwz r9,68(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 68);
	// lwz r8,72(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// clrlwi r7,r8,2
	ctx.r7.u64 = ctx.r8.u32 & 0x3FFFFFFF;
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// bne cr6,0x82ee7658
	if (!cr6.eq) goto loc_82EE7658;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EE7658:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
loc_82EE7674:
	// lhz r11,508(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 508);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x82ee758c
	if (cr6.lt) goto loc_82EE758C;
loc_82EE7688:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82EE7690"))) PPC_WEAK_FUNC(sub_82EE7690);
PPC_FUNC_IMPL(__imp__sub_82EE7690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,38(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 38);
	// lhz r8,32(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 32);
	// rlwinm r10,r11,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFC0;
	// rotlwi r6,r8,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ee76e8
	if (!cr6.eq) goto loc_82EE76E8;
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r10,r3,52
	ctx.r10.s64 = ctx.r3.s64 + 52;
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// lwz r5,-4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// stwx r5,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + r11.u32, ctx.r5.u32);
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lhz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 32);
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// sth r10,32(r8)
	PPC_STORE_U16(ctx.r8.u32 + 32, ctx.r10.u16);
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// stw r7,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r7.u32);
	// b 0x82ee7724
	goto loc_82EE7724;
loc_82EE76E8:
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r10,r3,40
	ctx.r10.s64 = ctx.r3.s64 + 40;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// lwz r5,-4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// stwx r5,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + r11.u32, ctx.r5.u32);
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lhz r11,32(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 32);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 2);
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// sth r11,32(r8)
	PPC_STORE_U16(ctx.r8.u32 + 32, r11.u16);
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// stw r7,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r7.u32);
loc_82EE7724:
	// lhz r11,34(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 34);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// sth r7,34(r4)
	PPC_STORE_U16(ctx.r4.u32 + 34, ctx.r7.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE7750"))) PPC_WEAK_FUNC(sub_82EE7750);
PPC_FUNC_IMPL(__imp__sub_82EE7750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ee7780
	if (!cr6.gt) goto loc_82EE7780;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82EE776C:
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82ee776c
	if (!cr0.eq) goto loc_82EE776C;
loc_82EE7780:
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r6,r5,709
	ctx.r6.s64 = ctx.r5.s64 + 709;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ee7820
	if (!cr6.gt) goto loc_82EE7820;
	// li r31,1
	r31.s64 = 1;
loc_82EE7798:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r8,1(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// lhz r11,220(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 220);
	// srawi r30,r11,14
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFF) != 0);
	r30.s64 = r11.s32 >> 14;
	// cmpw cr6,r8,r30
	cr6.compare<int32_t>(ctx.r8.s32, r30.s32, xer);
	// bne cr6,0x82ee77b8
	if (!cr6.eq) goto loc_82EE77B8;
	// srawi r11,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	r11.s64 = r11.s32 >> 7;
loc_82EE77B8:
	// clrlwi r8,r11,25
	ctx.r8.u64 = r11.u32 & 0x7F;
	// lhz r11,218(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 218);
	// lbz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// srawi r30,r11,14
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFF) != 0);
	r30.s64 = r11.s32 >> 14;
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, r30.s32, xer);
	// bne cr6,0x82ee77d4
	if (!cr6.eq) goto loc_82EE77D4;
	// srawi r11,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	r11.s64 = r11.s32 >> 7;
loc_82EE77D4:
	// clrlwi r10,r11,25
	ctx.r10.u64 = r11.u32 & 0x7F;
	// clrlwi r11,r8,25
	r11.u64 = ctx.r8.u32 & 0x7F;
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// ble cr6,0x82ee77ec
	if (!cr6.gt) goto loc_82EE77EC;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82EE77EC:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bgt cr6,0x82ee780c
	if (cr6.gt) goto loc_82EE780C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r11,r8,r9
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, r31.u32);
loc_82EE780C:
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, r11.s32, xer);
	// blt cr6,0x82ee7798
	if (cr6.lt) goto loc_82EE7798;
loc_82EE7820:
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE7830"))) PPC_WEAK_FUNC(sub_82EE7830);
PPC_FUNC_IMPL(__imp__sub_82EE7830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x831b0b24
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ee78fc
	if (!cr6.gt) goto loc_82EE78FC;
	// li r31,0
	r31.s64 = 0;
	// li r28,1
	r28.s64 = 1;
loc_82EE7850:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r9,1(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lhz r11,220(r5)
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 220);
	// lwzx r29,r10,r31
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// srawi r10,r11,14
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFF) != 0);
	ctx.r10.s64 = r11.s32 >> 14;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x82ee787c
	if (!cr6.eq) goto loc_82EE787C;
	// srawi r11,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	r11.s64 = r11.s32 >> 7;
loc_82EE787C:
	// clrlwi r9,r11,25
	ctx.r9.u64 = r11.u32 & 0x7F;
	// lhz r11,218(r5)
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 218);
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// srawi r27,r11,14
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFF) != 0);
	r27.s64 = r11.s32 >> 14;
	// cmpw cr6,r10,r27
	cr6.compare<int32_t>(ctx.r10.s32, r27.s32, xer);
	// bne cr6,0x82ee7898
	if (!cr6.eq) goto loc_82EE7898;
	// srawi r11,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	r11.s64 = r11.s32 >> 7;
loc_82EE7898:
	// clrlwi r10,r11,25
	ctx.r10.u64 = r11.u32 & 0x7F;
	// clrlwi r11,r9,25
	r11.u64 = ctx.r9.u32 & 0x7F;
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// ble cr6,0x82ee78b0
	if (!cr6.gt) goto loc_82EE78B0;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82EE78B0:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bgt cr6,0x82ee78c4
	if (cr6.gt) goto loc_82EE78C4;
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r28.u32);
loc_82EE78C4:
	// lhz r5,156(r5)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r5.u32 + 156);
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bge cr6,0x82ee78d4
	if (!cr6.lt) goto loc_82EE78D4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_82EE78D4:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpw cr6,r30,r5
	cr6.compare<int32_t>(r30.s32, ctx.r5.s32, xer);
	// blt cr6,0x82ee7850
	if (cr6.lt) goto loc_82EE7850;
loc_82EE78FC:
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82EE7900"))) PPC_WEAK_FUNC(sub_82EE7900);
PPC_FUNC_IMPL(__imp__sub_82EE7900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ee7978
	if (!cr6.gt) goto loc_82EE7978;
	// li r11,0
	r11.s64 = 0;
	// li r30,1
	r30.s64 = 1;
loc_82EE7920:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r30
	r31.u64 = r30.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, r30.u32);
	// lhz r9,156(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 156);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// blt cr6,0x82ee7954
	if (cr6.lt) goto loc_82EE7954;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
loc_82EE7954:
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpw cr6,r5,r10
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, xer);
	// blt cr6,0x82ee7920
	if (cr6.lt) goto loc_82EE7920;
loc_82EE7978:
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EE7988"))) PPC_WEAK_FUNC(sub_82EE7988);
PPC_FUNC_IMPL(__imp__sub_82EE7988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r26,1
	r26.s64 = 1;
	// lhz r11,156(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 156);
	// lwz r29,8(r25)
	r29.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// addic. r28,r11,-1
	xer.ca = r11.u32 > 0;
	r28.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// blt 0x82ee7a84
	if (cr0.lt) goto loc_82EE7A84;
	// rlwinm r11,r28,1,0,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// rlwinm r27,r11,4,0,27
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
loc_82EE79BC:
	// lwz r11,152(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 152);
	// lwzx r31,r27,r11
	r31.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ee79dc
	if (cr6.eq) goto loc_82EE79DC;
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// sth r10,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r10.u16);
loc_82EE79DC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r10,37(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// rlwimi r10,r26,6,0,25
	ctx.r10.u64 = (__builtin_rotateleft32(r26.u32, 6) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
	// stb r10,37(r11)
	PPC_STORE_U8(r11.u32 + 37, ctx.r10.u8);
	// lwz r9,132(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82ee7a04
	if (cr6.eq) goto loc_82EE7A04;
	// bl 0x82f007e0
	sub_82F007E0(ctx, base);
	// b 0x82ee7a3c
	goto loc_82EE7A3C;
loc_82EE7A04:
	// stw r26,132(r29)
	PPC_STORE_U32(r29.u32 + 132, r26.u32);
	// bl 0x82f007e0
	sub_82F007E0(ctx, base);
	// lwz r11,132(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,132(r29)
	PPC_STORE_U32(r29.u32 + 132, r11.u32);
	// bne 0x82ee7a3c
	if (!cr0.eq) goto loc_82EE7A3C;
	// lbz r11,140(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ee7a3c
	if (!cr6.eq) goto loc_82EE7A3C;
	// lwz r11,128(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ee7a3c
	if (cr6.eq) goto loc_82EE7A3C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ed5370
	sub_82ED5370(ctx, base);
loc_82EE7A3C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ee7a5c
	if (!cr6.eq) goto loc_82EE7A5C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EE7A5C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r27,r27,-48
	r27.s64 = r27.s64 + -48;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r31.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// bge 0x82ee79bc
	if (!cr0.lt) goto loc_82EE79BC;
loc_82EE7A84:
	// lwz r11,164(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 164);
	// addic. r28,r11,-1
	xer.ca = r11.u32 > 0;
	r28.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// blt 0x82ee7b5c
	if (cr0.lt) goto loc_82EE7B5C;
	// rlwinm r27,r28,2,0,29
	r27.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
loc_82EE7A94:
	// lwz r11,160(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 160);
	// lwzx r31,r11,r27
	r31.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ee7ab4
	if (cr6.eq) goto loc_82EE7AB4;
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// sth r10,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r10.u16);
loc_82EE7AB4:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r10,37(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// rlwimi r10,r26,6,0,25
	ctx.r10.u64 = (__builtin_rotateleft32(r26.u32, 6) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
	// stb r10,37(r11)
	PPC_STORE_U8(r11.u32 + 37, ctx.r10.u8);
	// lwz r9,132(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82ee7adc
	if (cr6.eq) goto loc_82EE7ADC;
	// bl 0x82f007e0
	sub_82F007E0(ctx, base);
	// b 0x82ee7b14
	goto loc_82EE7B14;
loc_82EE7ADC:
	// stw r26,132(r29)
	PPC_STORE_U32(r29.u32 + 132, r26.u32);
	// bl 0x82f007e0
	sub_82F007E0(ctx, base);
	// lwz r11,132(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,132(r29)
	PPC_STORE_U32(r29.u32 + 132, r11.u32);
	// bne 0x82ee7b14
	if (!cr0.eq) goto loc_82EE7B14;
	// lbz r11,140(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ee7b14
	if (!cr6.eq) goto loc_82EE7B14;
	// lwz r11,128(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ee7b14
	if (cr6.eq) goto loc_82EE7B14;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ed5370
	sub_82ED5370(ctx, base);
loc_82EE7B14:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ee7b34
	if (!cr6.eq) goto loc_82EE7B34;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EE7B34:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r27,r27,-4
	r27.s64 = r27.s64 + -4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r31.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// bge 0x82ee7a94
	if (!cr0.lt) goto loc_82EE7A94;
loc_82EE7B5C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82EE7B68"))) PPC_WEAK_FUNC(sub_82EE7B68);
PPC_FUNC_IMPL(__imp__sub_82EE7B68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r25,r29,40
	r25.s64 = r29.s64 + 40;
	// lwz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// rotlwi r7,r9,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r10,r29,52
	ctx.r10.s64 = r29.s64 + 52;
	// lwz r6,-4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// stwx r6,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + r11.u32, ctx.r6.u32);
	// lwz r5,52(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// lhz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// rotlwi r3,r4,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// lwzx r11,r3,r5
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// sth r4,32(r11)
	PPC_STORE_U16(r11.u32 + 32, ctx.r4.u16);
	// lwz r11,56(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// stw r10,56(r29)
	PPC_STORE_U32(r29.u32 + 56, ctx.r10.u32);
	// lwz r9,44(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// lwz r8,48(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// clrlwi r7,r8,2
	ctx.r7.u64 = ctx.r8.u32 & 0x3FFFFFFF;
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// bne cr6,0x82ee7be8
	if (!cr6.eq) goto loc_82EE7BE8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EE7BE8:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r26,0
	r26.s64 = 0;
	// lfs f31,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f31.f64 = double(temp.f32);
	// mr r24,r26
	r24.u64 = r26.u64;
	// stwx r31,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, r31.u32);
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// stw r6,4(r25)
	PPC_STORE_U32(r25.u32 + 4, ctx.r6.u32);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r5,44(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// addis r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 65536;
	// lbz r3,38(r31)
	ctx.r3.u64 = PPC_LOAD_U8(r31.u32 + 38);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// rlwimi r3,r8,6,0,25
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 6) & 0xFFFFFFC0) | (ctx.r3.u64 & 0xFFFFFFFF0000003F);
	// stfs f31,48(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f31,52(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// sth r4,32(r31)
	PPC_STORE_U16(r31.u32 + 32, ctx.r4.u16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r3,38(r31)
	PPC_STORE_U8(r31.u32 + 38, ctx.r3.u8);
	// ble cr6,0x82ee7cd0
	if (!cr6.gt) goto loc_82EE7CD0;
	// addi r27,r29,709
	r27.s64 = r29.s64 + 709;
	// mr r28,r26
	r28.u64 = r26.u64;
loc_82EE7C50:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwzx r30,r28,r11
	r30.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// addi r5,r30,224
	ctx.r5.s64 = r30.s64 + 224;
	// bl 0x83206f38
	sub_83206F38(ctx, base);
	// sth r26,220(r30)
	PPC_STORE_U16(r30.u32 + 220, r26.u16);
	// sth r26,218(r30)
	PPC_STORE_U16(r30.u32 + 218, r26.u16);
	// addi r11,r30,208
	r11.s64 = r30.s64 + 208;
	// lbz r10,217(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 217);
	// lbz r7,1(r27)
	ctx.r7.u64 = PPC_LOAD_U8(r27.u32 + 1);
	// clrlwi r6,r10,30
	ctx.r6.u64 = ctx.r10.u32 & 0x3;
	// lbz r9,711(r29)
	ctx.r9.u64 = PPC_LOAD_U8(r29.u32 + 711);
	// lbz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U8(r27.u32 + 0);
	// clrlwi r5,r9,30
	ctx.r5.u64 = ctx.r9.u32 & 0x3;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bge cr6,0x82ee7c98
	if (!cr6.lt) goto loc_82EE7C98;
	// not r8,r8
	ctx.r8.u64 = ~ctx.r8.u64;
loc_82EE7C98:
	// rlwinm r8,r8,14,0,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0xFFFFC000;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bge cr6,0x82ee7cb0
	if (!cr6.lt) goto loc_82EE7CB0;
	// not r10,r7
	ctx.r10.u64 = ~ctx.r7.u64;
	// rlwinm r10,r10,14,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xFFFFC000;
	// b 0x82ee7cb4
	goto loc_82EE7CB4;
loc_82EE7CB0:
	// rlwinm r10,r7,14,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 14) & 0xFFFFC000;
loc_82EE7CB4:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// sth r8,10(r11)
	PPC_STORE_U16(r11.u32 + 10, ctx.r8.u16);
	// sth r10,12(r11)
	PPC_STORE_U16(r11.u32 + 12, ctx.r10.u16);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lwz r7,76(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmpw cr6,r24,r7
	cr6.compare<int32_t>(r24.s32, ctx.r7.s32, xer);
	// blt cr6,0x82ee7c50
	if (cr6.lt) goto loc_82EE7C50;
loc_82EE7CD0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,108(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 108);
	// lfs f2,400(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 400);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,68(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82ef55d0
	sub_82EF55D0(ctx, base);
	// lhz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82ee7d24
	if (cr6.eq) goto loc_82EE7D24;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,76(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// ble cr6,0x82ee7d24
	if (!cr6.gt) goto loc_82EE7D24;
	// sth r26,32(r31)
	PPC_STORE_U16(r31.u32 + 32, r26.u16);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// sth r10,32(r11)
	PPC_STORE_U16(r11.u32 + 32, ctx.r10.u16);
	// lwz r7,0(r25)
	ctx.r7.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// stw r31,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r31.u32);
	// lwz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// stwx r11,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, r11.u32);
loc_82EE7D24:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eeca50
	sub_82EECA50(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EE7D40"))) PPC_WEAK_FUNC(sub_82EE7D40);
PPC_FUNC_IMPL(__imp__sub_82EE7D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r27,r30,400
	r27.s64 = r30.s64 + 400;
	// li r6,208
	ctx.r6.s64 = 208;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// bl 0x82f01b00
	sub_82F01B00(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ee7d94
	if (!cr6.eq) goto loc_82EE7D94;
	// lbz r11,38(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 38);
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// rlwinm r10,r10,0,28,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// stb r9,38(r31)
	PPC_STORE_U8(r31.u32 + 38, ctx.r9.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
loc_82EE7D94:
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// addi r29,r30,52
	r29.s64 = r30.s64 + 52;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ee7db8
	if (!cr6.eq) goto loc_82EE7DB8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EE7DB8:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r11,r30,40
	r11.s64 = r30.s64 + 40;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, r31.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// stw r7,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r7.u32);
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lhz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// lwz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// rotlwi r3,r6,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// lwz r10,-4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// stwx r10,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + r11.u32, ctx.r10.u32);
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lhz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// rotlwi r7,r8,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// sth r8,32(r6)
	PPC_STORE_U16(ctx.r6.u32 + 32, ctx.r8.u16);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// stw r5,44(r30)
	PPC_STORE_U32(r30.u32 + 44, ctx.r5.u32);
	// lbz r4,38(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 38);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// addis r10,r11,1
	ctx.r10.s64 = r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r8,r4,26
	ctx.r8.u64 = ctx.r4.u32 & 0x3F;
	// sth r10,32(r31)
	PPC_STORE_U16(r31.u32 + 32, ctx.r10.u16);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stb r8,38(r31)
	PPC_STORE_U8(r31.u32 + 38, ctx.r8.u8);
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// ble cr6,0x82ee7eb4
	if (!cr6.gt) goto loc_82EE7EB4;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// li r26,0
	r26.s64 = 0;
	// addi r25,r11,31104
	r25.s64 = r11.s64 + 31104;
loc_82EE7E58:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// lfs f1,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// lwzx r29,r26,r11
	r29.u64 = PPC_LOAD_U32(r26.u32 + r11.u32);
	// addi r4,r29,224
	ctx.r4.s64 = r29.s64 + 224;
	// bl 0x83207700
	sub_83207700(ctx, base);
	// lwz r10,208(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 208);
	// addi r27,r29,208
	r27.s64 = r29.s64 + 208;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,208(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 208);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r7,68(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpw cr6,r28,r6
	cr6.compare<int32_t>(r28.s32, ctx.r6.s32, xer);
	// blt cr6,0x82ee7e58
	if (cr6.lt) goto loc_82EE7E58;
loc_82EE7EB4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eecc58
	sub_82EECC58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ed5148
	sub_82ED5148(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82EE7ED0"))) PPC_WEAK_FUNC(sub_82EE7ED0);
PPC_FUNC_IMPL(__imp__sub_82EE7ED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lbz r11,38(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 38);
	// lhz r10,34(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 34);
	// clrlwi r9,r11,24
	ctx.r9.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// rlwinm r9,r9,0,28,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// stb r9,38(r30)
	PPC_STORE_U8(r30.u32 + 38, ctx.r9.u8);
	// bne cr6,0x82ee7f4c
	if (!cr6.eq) goto loc_82EE7F4C;
	// lwz r11,68(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// addi r31,r3,64
	r31.s64 = ctx.r3.s64 + 64;
	// sth r11,34(r30)
	PPC_STORE_U16(r30.u32 + 34, r11.u16);
	// lwz r9,68(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r8,72(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// clrlwi r7,r8,2
	ctx.r7.u64 = ctx.r8.u32 & 0x3FFFFFFF;
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// bne cr6,0x82ee7f30
	if (!cr6.eq) goto loc_82EE7F30;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EE7F30:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
loc_82EE7F4C:
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

__attribute__((alias("__imp__sub_82EE7F68"))) PPC_WEAK_FUNC(sub_82EE7F68);
PPC_FUNC_IMPL(__imp__sub_82EE7F68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,38(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 38);
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// rlwinm r10,r10,0,28,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// stb r10,38(r30)
	PPC_STORE_U8(r30.u32 + 38, ctx.r10.u8);
	// lwz r3,176(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 176);
	// bl 0x82eaa3b0
	sub_82EAA3B0(ctx, base);
	// lhz r9,34(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 34);
	// cmplwi cr6,r9,65535
	cr6.compare<uint32_t>(ctx.r9.u32, 65535, xer);
	// bne cr6,0x82ee7fe8
	if (!cr6.eq) goto loc_82EE7FE8;
	// lwz r11,68(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 68);
	// addi r31,r29,64
	r31.s64 = r29.s64 + 64;
	// sth r11,34(r30)
	PPC_STORE_U16(r30.u32 + 34, r11.u16);
	// lwz r9,68(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 68);
	// lwz r8,72(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// clrlwi r7,r8,2
	ctx.r7.u64 = ctx.r8.u32 & 0x3FFFFFFF;
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// bne cr6,0x82ee7fcc
	if (!cr6.eq) goto loc_82EE7FCC;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EE7FCC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
loc_82EE7FE8:
	// lwz r3,176(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 176);
	// li r11,-1
	r11.s64 = -1;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EE8000"))) PPC_WEAK_FUNC(sub_82EE8000);
PPC_FUNC_IMPL(__imp__sub_82EE8000) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lbz r11,38(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 38);
	// lhz r10,34(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 34);
	// clrlwi r9,r11,24
	ctx.r9.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// rlwinm r9,r9,0,28,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// ori r8,r9,16
	ctx.r8.u64 = ctx.r9.u64 | 16;
	// stb r8,38(r30)
	PPC_STORE_U8(r30.u32 + 38, ctx.r8.u8);
	// bne cr6,0x82ee8080
	if (!cr6.eq) goto loc_82EE8080;
	// lwz r11,68(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// addi r31,r3,64
	r31.s64 = ctx.r3.s64 + 64;
	// sth r11,34(r30)
	PPC_STORE_U16(r30.u32 + 34, r11.u16);
	// lwz r9,68(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r8,72(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// clrlwi r7,r8,2
	ctx.r7.u64 = ctx.r8.u32 & 0x3FFFFFFF;
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// bne cr6,0x82ee8064
	if (!cr6.eq) goto loc_82EE8064;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EE8064:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
loc_82EE8080:
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

__attribute__((alias("__imp__sub_82EE8098"))) PPC_WEAK_FUNC(sub_82EE8098);
PPC_FUNC_IMPL(__imp__sub_82EE8098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsb r11,r5
	r11.s64 = ctx.r5.s8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r28,0
	r28.s64 = 0;
	// beq cr6,0x82ee82a4
	if (cr6.eq) goto loc_82EE82A4;
	// extsb r11,r25
	r11.s64 = r25.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ee819c
	if (!cr6.eq) goto loc_82EE819C;
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// lwz r30,488(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 488);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// sth r28,10(r30)
	PPC_STORE_U16(r30.u32 + 10, r28.u16);
	// sth r28,12(r30)
	PPC_STORE_U16(r30.u32 + 12, r28.u16);
	// li r11,18
	r11.s64 = 18;
	// lhz r9,492(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 492);
	// sth r9,42(r31)
	PPC_STORE_U16(r31.u32 + 42, ctx.r9.u16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
	// addi r10,r31,216
	ctx.r10.s64 = r31.s64 + 216;
loc_82EE8114:
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -8);
	// stw r9,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r9.u32);
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// stw r8,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r8.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x82ee8114
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82EE8114;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,496
	ctx.r3.s64 = r31.s64 + 496;
	// bl 0x82eb2a68
	sub_82EB2A68(ctx, base);
	// lhz r11,4(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ee818c
	if (cr6.eq) goto loc_82EE818C;
	// lhz r11,6(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r30)
	PPC_STORE_U16(r30.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82ee818c
	if (!cr6.eq) goto loc_82EE818C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EE818C:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ee0f00
	sub_82EE0F00(ctx, base);
loc_82EE819C:
	// lbz r11,216(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 216);
	// cmpw cr6,r11,r23
	cr6.compare<int32_t>(r11.s32, r23.s32, xer);
	// beq cr6,0x82ee84bc
	if (cr6.eq) goto loc_82EE84BC;
	// cmpwi cr6,r23,1
	cr6.compare<int32_t>(r23.s32, 1, xer);
	// beq cr6,0x82ee84bc
	if (cr6.eq) goto loc_82EE84BC;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// stw r28,664(r1)
	PPC_STORE_U32(ctx.r1.u32 + 664, r28.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,21316
	ctx.r9.s64 = r11.s64 + 21316;
	// sth r10,390(r1)
	PPC_STORE_U16(ctx.r1.u32 + 390, ctx.r10.u16);
	// li r11,18
	r11.s64 = 18;
	// stw r9,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r9.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r30,r31,208
	r30.s64 = r31.s64 + 208;
	// addi r10,r1,392
	ctx.r10.s64 = ctx.r1.s64 + 392;
	// subf r9,r31,r30
	ctx.r9.s64 = r30.s64 - r31.s64;
	// mr r11,r30
	r11.u64 = r30.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,-208
	ctx.r10.s64 = ctx.r10.s64 + -208;
loc_82EE81E8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r9,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r9.u32);
	// stw r8,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r8.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x82ee81e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82EE81E8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r7,573(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 573);
	// lbz r6,572(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 572);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// rotlwi r5,r7,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// addi r8,r9,4648
	ctx.r8.s64 = ctx.r9.s64 + 4648;
	// rotlwi r4,r6,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r29,r1,528
	r29.s64 = ctx.r1.s64 + 528;
	// addi r28,r1,672
	r28.s64 = ctx.r1.s64 + 672;
	// lfsx f31,r5,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	f31.f64 = double(temp.f32);
	// lfsx f30,r4,r8
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	f30.f64 = double(temp.f32);
	// bl 0x82ee2a30
	sub_82EE2A30(ctx, base);
	// addi r5,r1,512
	ctx.r5.s64 = ctx.r1.s64 + 512;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// bl 0x82ed39f0
	sub_82ED39F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82ee2b98
	sub_82EE2B98(ctx, base);
	// lfs f0,564(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	f0.f64 = double(temp.f32);
	// lfs f13,568(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 568);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stfs f0,180(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 180, temp.u32);
	// stfs f13,184(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 184, temp.u32);
	// b 0x82ee84b8
	goto loc_82EE84B8;
loc_82EE82A4:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// stw r28,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, r28.u32);
	// li r26,1
	r26.s64 = 1;
	// addi r30,r11,21316
	r30.s64 = r11.s64 + 21316;
	// sth r26,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, r26.u16);
	// li r11,18
	r11.s64 = 18;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// subf r9,r31,r3
	ctx.r9.s64 = ctx.r3.s64 - r31.s64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,-208
	ctx.r10.s64 = ctx.r10.s64 + -208;
loc_82EE82DC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r9,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r9.u32);
	// stw r8,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r8.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x82ee82dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82EE82DC;
	// cmpwi cr6,r23,7
	cr6.compare<int32_t>(r23.s32, 7, xer);
	// bne cr6,0x82ee8398
	if (!cr6.eq) goto loc_82EE8398;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ee832c
	if (cr6.eq) goto loc_82EE832C;
	// addi r5,r31,336
	ctx.r5.s64 = r31.s64 + 336;
	// addi r4,r31,272
	ctx.r4.s64 = r31.s64 + 272;
	// bl 0x82ee6980
	sub_82EE6980(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82ee8330
	goto loc_82EE8330;
loc_82EE832C:
	// mr r29,r28
	r29.u64 = r28.u64;
loc_82EE8330:
	// addi r27,r29,16
	r27.s64 = r29.s64 + 16;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ee2c68
	sub_82EE2C68(ctx, base);
	// lbz r10,105(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 105);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stb r10,9(r29)
	PPC_STORE_U8(r29.u32 + 9, ctx.r10.u8);
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// lfs f13,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x82ee83c4
	if (cr6.eq) goto loc_82EE83C4;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82ee8378
	if (cr6.eq) goto loc_82EE8378;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82ed5078
	sub_82ED5078(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x83207700
	sub_83207700(ctx, base);
	// b 0x82ee83c4
	goto loc_82EE83C4;
loc_82EE8378:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,188(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lfs f0,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// fdivs f11,f0,f13
	ctx.f11.f64 = double(float(f0.f64 / ctx.f13.f64));
	// fadds f1,f11,f12
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// bl 0x83207700
	sub_83207700(ctx, base);
	// b 0x82ee83c4
	goto loc_82EE83C4;
loc_82EE8398:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ee83b4
	if (cr6.eq) goto loc_82EE83B4;
	// addi r5,r31,336
	ctx.r5.s64 = r31.s64 + 336;
	// addi r4,r31,272
	ctx.r4.s64 = r31.s64 + 272;
	// bl 0x82ee67d8
	sub_82EE67D8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82ee83b8
	goto loc_82EE83B8;
loc_82EE83B4:
	// mr r29,r28
	r29.u64 = r28.u64;
loc_82EE83B8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ee2b98
	sub_82EE2B98(ctx, base);
loc_82EE83C4:
	// extsb r11,r25
	r11.s64 = r25.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ee8478
	if (cr6.eq) goto loc_82EE8478;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r5,46
	ctx.r5.s64 = 46;
	// li r4,288
	ctx.r4.s64 = 288;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r9,288
	ctx.r9.s64 = 288;
	// li r10,18
	ctx.r10.s64 = 18;
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// sth r9,4(r11)
	PPC_STORE_U16(r11.u32 + 4, ctx.r9.u16);
	// sth r26,6(r11)
	PPC_STORE_U16(r11.u32 + 6, r26.u16);
	// stw r28,280(r11)
	PPC_STORE_U32(r11.u32 + 280, r28.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - r11.s64;
	// subf r7,r11,r7
	ctx.r7.s64 = ctx.r7.s64 - r11.s64;
loc_82EE8424:
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r5,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r5.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stw r4,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r4.u32);
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// lwzx r5,r7,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x82ee8424
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82EE8424;
	// sth r6,4(r11)
	PPC_STORE_U16(r11.u32 + 4, ctx.r6.u16);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// sth r26,6(r11)
	PPC_STORE_U16(r11.u32 + 6, r26.u16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,280(r29)
	PPC_STORE_U32(r29.u32 + 280, r11.u32);
	// lhz r11,42(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 42);
	// sth r11,284(r29)
	PPC_STORE_U16(r29.u32 + 284, r11.u16);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82ee0f00
	sub_82EE0F00(ctx, base);
	// b 0x82ee8498
	goto loc_82EE8498;
loc_82EE8478:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,376(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lhz r9,380(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 380);
	// sth r9,284(r29)
	PPC_STORE_U16(r29.u32 + 284, ctx.r9.u16);
loc_82EE8498:
	// addi r11,r23,-7
	r11.s64 = r23.s64 + -7;
	// stw r28,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// sth r8,42(r31)
	PPC_STORE_U16(r31.u32 + 42, ctx.r8.u16);
loc_82EE84B8:
	// bl 0x82ee6840
	sub_82EE6840(ctx, base);
loc_82EE84BC:
	// addi r11,r31,224
	r11.s64 = r31.s64 + 224;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// beq cr6,0x82ee8530
	if (cr6.eq) goto loc_82EE8530;
	// addi r11,r24,416
	r11.s64 = r24.s64 + 416;
	// lbz r10,711(r24)
	ctx.r10.u64 = PPC_LOAD_U8(r24.u32 + 711);
	// lbz r11,217(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 217);
	// clrlwi r7,r10,30
	ctx.r7.u64 = ctx.r10.u32 & 0x3;
	// lbz r8,710(r24)
	ctx.r8.u64 = PPC_LOAD_U8(r24.u32 + 710);
	// clrlwi r6,r11,30
	ctx.r6.u64 = r11.u32 & 0x3;
	// lbz r9,709(r24)
	ctx.r9.u64 = PPC_LOAD_U8(r24.u32 + 709);
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// bge cr6,0x82ee84f4
	if (!cr6.lt) goto loc_82EE84F4;
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
loc_82EE84F4:
	// rlwinm r9,r9,14,0,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0xFFFFC000;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x82ee850c
	if (!cr6.lt) goto loc_82EE850C;
	// not r11,r8
	r11.u64 = ~ctx.r8.u64;
	// rlwinm r11,r11,14,0,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0xFFFFC000;
	// b 0x82ee8510
	goto loc_82EE8510;
loc_82EE850C:
	// rlwinm r11,r8,14,0,17
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0xFFFFC000;
loc_82EE8510:
	// lhz r10,218(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 218);
	// lhz r8,220(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 220);
	// clrlwi r7,r10,18
	ctx.r7.u64 = ctx.r10.u32 & 0x3FFF;
	// clrlwi r6,r8,18
	ctx.r6.u64 = ctx.r8.u32 & 0x3FFF;
	// or r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 | ctx.r9.u64;
	// or r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 | r11.u64;
	// sth r5,218(r31)
	PPC_STORE_U16(r31.u32 + 218, ctx.r5.u16);
	// sth r4,220(r31)
	PPC_STORE_U16(r31.u32 + 220, ctx.r4.u16);
loc_82EE8530:
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82EE8540"))) PPC_WEAK_FUNC(sub_82EE8540);
PPC_FUNC_IMPL(__imp__sub_82EE8540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// li r11,0
	r11.s64 = 0;
	// lwz r31,184(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef4490
	sub_82EF4490(ctx, base);
	// lhz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x82ee85b4
	if (cr6.eq) goto loc_82EE85B4;
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ee85b4
	if (!cr6.eq) goto loc_82EE85B4;
	// lbz r11,184(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 184);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ee85b4
	if (cr6.eq) goto loc_82EE85B4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ee7690
	sub_82EE7690(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EE85B4:
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

__attribute__((alias("__imp__sub_82EE85D0"))) PPC_WEAK_FUNC(sub_82EE85D0);
PPC_FUNC_IMPL(__imp__sub_82EE85D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lhz r10,508(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 508);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r28,184(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// li r26,0
	r26.s64 = 0;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ee8774
	if (cr6.eq) goto loc_82EE8774;
	// li r29,0
	r29.s64 = 0;
loc_82EE861C:
	// lwz r11,504(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 504);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r31,r29,r11
	r31.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82ee8688
	if (!cr6.gt) goto loc_82EE8688;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EE8654:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r6,216(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 216);
	// cmplwi cr6,r6,7
	cr6.compare<uint32_t>(ctx.r6.u32, 7, xer);
	// beq cr6,0x82ee8670
	if (cr6.eq) goto loc_82EE8670;
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmplw cr6,r7,r30
	cr6.compare<uint32_t>(ctx.r7.u32, r30.u32, xer);
	// bne cr6,0x82ee8684
	if (!cr6.eq) goto loc_82EE8684;
loc_82EE8670:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82ee8654
	if (cr6.lt) goto loc_82EE8654;
	// b 0x82ee8688
	goto loc_82EE8688;
loc_82EE8684:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82EE8688:
	// extsb r11,r8
	r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ee875c
	if (cr6.eq) goto loc_82EE875C;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ee86b4
	if (!cr6.eq) goto loc_82EE86B4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EE86B4:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r31.u32);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r27)
	PPC_STORE_U32(r27.u32 + 4, ctx.r8.u32);
	// lhz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82ee86e8
	if (cr6.eq) goto loc_82EE86E8;
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// sth r10,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r10.u16);
loc_82EE86E8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ef44f8
	sub_82EF44F8(ctx, base);
	// lbz r11,37(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 37);
	// lhz r10,34(r28)
	ctx.r10.u64 = PPC_LOAD_U16(r28.u32 + 34);
	// clrlwi r9,r11,24
	ctx.r9.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// rlwinm r9,r9,0,30,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// ori r8,r9,4
	ctx.r8.u64 = ctx.r9.u64 | 4;
	// stb r8,37(r28)
	PPC_STORE_U8(r28.u32 + 37, ctx.r8.u8);
	// bne cr6,0x82ee875c
	if (!cr6.eq) goto loc_82EE875C;
	// lwz r11,68(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 68);
	// addi r31,r25,64
	r31.s64 = r25.s64 + 64;
	// sth r11,34(r28)
	PPC_STORE_U16(r28.u32 + 34, r11.u16);
	// lwz r9,68(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 68);
	// lwz r8,72(r25)
	ctx.r8.u64 = PPC_LOAD_U32(r25.u32 + 72);
	// clrlwi r7,r8,2
	ctx.r7.u64 = ctx.r8.u32 & 0x3FFFFFFF;
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// bne cr6,0x82ee8740
	if (!cr6.eq) goto loc_82EE8740;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EE8740:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r28.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
loc_82EE875C:
	// lhz r11,508(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 508);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x82ee861c
	if (cr6.lt) goto loc_82EE861C;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82EE8774:
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ee879c
	if (!cr6.eq) goto loc_82EE879C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EE879C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82EE87A8"))) PPC_WEAK_FUNC(sub_82EE87A8);
PPC_FUNC_IMPL(__imp__sub_82EE87A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// lwz r26,0(r13)
	r26.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r27,20
	r27.s64 = 20;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r29,4(r24)
	r29.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// lwzx r3,r27,r26
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r26.u32);
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
	// rlwinm r4,r11,2,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFF0;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82ee87fc
	if (cr6.gt) goto loc_82EE87FC;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// b 0x82ee8810
	goto loc_82EE8810;
loc_82EE87FC:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82EE8810:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x82ee883c
	if (!cr6.gt) goto loc_82EE883C;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82EE8828:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stwx r4,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82ee8828
	if (!cr0.eq) goto loc_82EE8828;
loc_82EE883C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r7,r31,709
	ctx.r7.s64 = r31.s64 + 709;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ee88e0
	if (!cr6.gt) goto loc_82EE88E0;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_82EE8858:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lbz r9,1(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// lhz r11,220(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 220);
	// srawi r3,r11,14
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFF) != 0);
	ctx.r3.s64 = r11.s32 >> 14;
	// cmpw cr6,r9,r3
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, xer);
	// bne cr6,0x82ee8878
	if (!cr6.eq) goto loc_82EE8878;
	// srawi r11,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	r11.s64 = r11.s32 >> 7;
loc_82EE8878:
	// clrlwi r9,r11,25
	ctx.r9.u64 = r11.u32 & 0x7F;
	// lhz r11,218(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 218);
	// lbz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// srawi r3,r11,14
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFF) != 0);
	ctx.r3.s64 = r11.s32 >> 14;
	// cmpw cr6,r10,r3
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, xer);
	// bne cr6,0x82ee8894
	if (!cr6.eq) goto loc_82EE8894;
	// srawi r11,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	r11.s64 = r11.s32 >> 7;
loc_82EE8894:
	// clrlwi r10,r11,25
	ctx.r10.u64 = r11.u32 & 0x7F;
	// clrlwi r11,r9,25
	r11.u64 = ctx.r9.u32 & 0x7F;
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// ble cr6,0x82ee88ac
	if (!cr6.gt) goto loc_82EE88AC;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82EE88AC:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bgt cr6,0x82ee88cc
	if (cr6.gt) goto loc_82EE88CC;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r5.u32);
loc_82EE88CC:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// blt cr6,0x82ee8858
	if (cr6.lt) goto loc_82EE8858;
loc_82EE88E0:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r5,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r5.u8);
	// ble cr6,0x82ee8930
	if (!cr6.gt) goto loc_82EE8930;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_82EE88FC:
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x82ee8914
	if (cr6.eq) goto loc_82EE8914;
	// stwx r4,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// b 0x82ee8924
	goto loc_82EE8924;
loc_82EE8914:
	// stwx r5,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r5.u32);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stbx r4,r8,r5
	PPC_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r4.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_82EE8924:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82ee88fc
	if (!cr0.eq) goto loc_82EE88FC;
loc_82EE8930:
	// cmpw cr6,r5,r29
	cr6.compare<int32_t>(ctx.r5.s32, r29.s32, xer);
	// ble cr6,0x82ee8954
	if (!cr6.gt) goto loc_82EE8954;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stb r4,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r4.u8);
	// lwzx r3,r27,r26
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r26.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// b 0x82ee8974
	goto loc_82EE8974;
loc_82EE8954:
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x83208950
	sub_83208950(ctx, base);
	// lwzx r3,r27,r26
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r26.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
loc_82EE8974:
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// bne cr6,0x82ee898c
	if (!cr6.eq) goto loc_82EE898C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EE898C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EE8998"))) PPC_WEAK_FUNC(sub_82EE8998);
PPC_FUNC_IMPL(__imp__sub_82EE8998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0afc
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r6
	r17.u64 = ctx.r6.u64;
	// lwz r19,0(r13)
	r19.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r18,20
	r18.s64 = 20;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r23,4(r17)
	r23.u64 = PPC_LOAD_U32(r17.u32 + 4);
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// lwzx r3,r18,r19
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + r19.u32);
	// addi r11,r23,4
	r11.s64 = r23.s64 + 4;
	// rlwinm r31,r11,2,0,27
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFF0;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82ee89f0
	if (cr6.gt) goto loc_82EE89F0;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// mr r25,r11
	r25.u64 = r11.u64;
	// b 0x82ee8a08
	goto loc_82EE8A08;
loc_82EE89F0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_82EE8A08:
	// lwzx r3,r18,r19
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + r19.u32);
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82ee8a28
	if (cr6.gt) goto loc_82EE8A28;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// b 0x82ee8a40
	goto loc_82EE8A40;
loc_82EE8A28:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82EE8A40:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// li r24,0
	r24.s64 = 0;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// ble cr6,0x82ee8a70
	if (!cr6.gt) goto loc_82EE8A70;
	// mr r11,r24
	r11.u64 = r24.u64;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_82EE8A58:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stwx r24,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, r24.u32);
	// stwx r24,r11,r25
	PPC_STORE_U32(r11.u32 + r25.u32, r24.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82ee8a58
	if (!cr0.eq) goto loc_82EE8A58;
loc_82EE8A70:
	// lbz r11,197(r20)
	r11.u64 = PPC_LOAD_U8(r20.u32 + 197);
	// li r26,1
	r26.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// beq cr6,0x82ee8b44
	if (cr6.eq) goto loc_82EE8B44;
	// addi r4,r20,709
	ctx.r4.s64 = r20.s64 + 709;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ee8ba4
	if (!cr6.gt) goto loc_82EE8BA4;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
loc_82EE8A98:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lhz r11,220(r7)
	r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 220);
	// lwzx r6,r6,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// srawi r3,r11,14
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFF) != 0);
	ctx.r3.s64 = r11.s32 >> 14;
	// cmpw cr6,r9,r3
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, xer);
	// bne cr6,0x82ee8ac4
	if (!cr6.eq) goto loc_82EE8AC4;
	// srawi r11,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	r11.s64 = r11.s32 >> 7;
loc_82EE8AC4:
	// clrlwi r9,r11,25
	ctx.r9.u64 = r11.u32 & 0x7F;
	// lhz r11,218(r7)
	r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 218);
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// srawi r3,r11,14
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFF) != 0);
	ctx.r3.s64 = r11.s32 >> 14;
	// cmpw cr6,r10,r3
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, xer);
	// bne cr6,0x82ee8ae0
	if (!cr6.eq) goto loc_82EE8AE0;
	// srawi r11,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	r11.s64 = r11.s32 >> 7;
loc_82EE8AE0:
	// clrlwi r10,r11,25
	ctx.r10.u64 = r11.u32 & 0x7F;
	// clrlwi r11,r9,25
	r11.u64 = ctx.r9.u32 & 0x7F;
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// ble cr6,0x82ee8af8
	if (!cr6.gt) goto loc_82EE8AF8;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82EE8AF8:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bgt cr6,0x82ee8b0c
	if (cr6.gt) goto loc_82EE8B0C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r26,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r26.u32);
loc_82EE8B0C:
	// lhz r9,156(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 156);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bge cr6,0x82ee8b1c
	if (!cr6.lt) goto loc_82EE8B1C;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82EE8B1C:
	// rlwinm r11,r6,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwzx r10,r11,r25
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r25.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r10,r11,r25
	PPC_STORE_U32(r11.u32 + r25.u32, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r5,r9
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, xer);
	// blt cr6,0x82ee8a98
	if (cr6.lt) goto loc_82EE8A98;
	// b 0x82ee8ba4
	goto loc_82EE8BA4;
loc_82EE8B44:
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ee8ba4
	if (!cr6.gt) goto loc_82EE8BA4;
	// mr r11,r24
	r11.u64 = r24.u64;
loc_82EE8B54:
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// lwzx r4,r6,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + r11.u32);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r26,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, r26.u32);
	// lhz r9,156(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 156);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bge cr6,0x82ee8b84
	if (!cr6.lt) goto loc_82EE8B84;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82EE8B84:
	// lwzx r8,r10,r25
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r25.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stwx r9,r10,r25
	PPC_STORE_U32(ctx.r10.u32 + r25.u32, ctx.r9.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r7,r8
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, xer);
	// blt cr6,0x82ee8b54
	if (cr6.lt) goto loc_82EE8B54;
loc_82EE8BA4:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// ble cr6,0x82ee8bd8
	if (!cr6.gt) goto loc_82EE8BD8;
	// mr r11,r24
	r11.u64 = r24.u64;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_82EE8BB8:
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x82ee8bcc
	if (!cr6.eq) goto loc_82EE8BCC;
	// stwx r9,r11,r25
	PPC_STORE_U32(r11.u32 + r25.u32, ctx.r9.u32);
loc_82EE8BCC:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82ee8bb8
	if (!cr0.eq) goto loc_82EE8BB8;
loc_82EE8BD8:
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// mr r27,r30
	r27.u64 = r30.u64;
	// ble cr6,0x82ee8cc0
	if (!cr6.gt) goto loc_82EE8CC0;
	// mr r29,r26
	r29.u64 = r26.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
	// mr r28,r23
	r28.u64 = r23.u64;
	// li r3,-2
	ctx.r3.s64 = -2;
loc_82EE8BFC:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r8,-2
	cr6.compare<int32_t>(ctx.r8.s32, -2, xer);
	// beq cr6,0x82ee8cac
	if (cr6.eq) goto loc_82EE8CAC;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stbx r24,r11,r7
	PPC_STORE_U8(r11.u32 + ctx.r7.u32, r24.u8);
	// stw r7,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r7.u32);
	// blt cr6,0x82ee8cac
	if (cr6.lt) goto loc_82EE8CAC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmpw cr6,r29,r23
	cr6.compare<int32_t>(r29.s32, r23.s32, xer);
	// bge cr6,0x82ee8cac
	if (!cr6.lt) goto loc_82EE8CAC;
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// subf r6,r25,r27
	ctx.r6.s64 = r27.s64 - r25.s64;
loc_82EE8C38:
	// lwz r9,164(r20)
	ctx.r9.u64 = PPC_LOAD_U32(r20.u32 + 164);
	// addi r11,r8,10
	r11.s64 = ctx.r8.s64 + 10;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// mr r11,r26
	r11.u64 = r26.u64;
	// blt cr6,0x82ee8c50
	if (cr6.lt) goto loc_82EE8C50;
	// mr r11,r24
	r11.u64 = r24.u64;
loc_82EE8C50:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ee8cac
	if (cr6.eq) goto loc_82EE8CAC;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82ee8c9c
	if (cr6.lt) goto loc_82EE8C9C;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// blt cr6,0x82ee8c7c
	if (cr6.lt) goto loc_82EE8C7C;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
loc_82EE8C7C:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ee8c9c
	if (cr6.eq) goto loc_82EE8C9C;
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// stbx r26,r9,r7
	PPC_STORE_U8(ctx.r9.u32 + ctx.r7.u32, r26.u8);
	// stwx r7,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r7.u32);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
loc_82EE8C9C:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r4,r23
	cr6.compare<int32_t>(ctx.r4.s32, r23.s32, xer);
	// blt cr6,0x82ee8c38
	if (cr6.lt) goto loc_82EE8C38;
loc_82EE8CAC:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bne 0x82ee8bfc
	if (!cr0.eq) goto loc_82EE8BFC;
loc_82EE8CC0:
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x83208950
	sub_83208950(ctx, base);
	// lwzx r3,r18,r19
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + r19.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82ee8cf8
	if (!cr6.eq) goto loc_82EE8CF8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EE8CF8:
	// lwzx r3,r18,r19
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + r19.u32);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r25,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r25.u32);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// bne cr6,0x82ee8d20
	if (!cr6.eq) goto loc_82EE8D20;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EE8D20:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b4c
	return;
}

__attribute__((alias("__imp__sub_82EE8D28"))) PPC_WEAK_FUNC(sub_82EE8D28);
PPC_FUNC_IMPL(__imp__sub_82EE8D28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x82ee8d70
	if (cr6.gt) goto loc_82EE8D70;
	// blt cr6,0x82ee8d64
	if (cr6.lt) goto loc_82EE8D64;
	// lhz r11,32(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 32);
	// lhz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82ee8d70
	if (!cr6.gt) goto loc_82EE8D70;
loc_82EE8D64:
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r30,r31
	r30.u64 = r31.u64;
	// mr r31,r11
	r31.u64 = r11.u64;
loc_82EE8D70:
	// lwz r11,132(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 132);
	// li r25,0
	r25.s64 = 0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,132(r26)
	PPC_STORE_U32(r26.u32 + 132, r11.u32);
	// lbz r11,38(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 38);
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x3FFFFFF;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ee8da8
	if (!cr6.eq) goto loc_82EE8DA8;
	// lbz r8,38(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 38);
	// rlwinm r7,r8,0,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFC0;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82ee8dac
	if (cr6.eq) goto loc_82EE8DAC;
loc_82EE8DA8:
	// li r8,1
	ctx.r8.s64 = 1;
loc_82EE8DAC:
	// rlwinm r9,r9,0,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ee8dcc
	if (!cr6.eq) goto loc_82EE8DCC;
	// lbz r9,38(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 38);
	// mr r24,r25
	r24.u64 = r25.u64;
	// rlwinm r7,r9,0,26,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82ee8dd0
	if (cr6.eq) goto loc_82EE8DD0;
loc_82EE8DCC:
	// li r24,1
	r24.s64 = 1;
loc_82EE8DD0:
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82ee8e28
	if (cr6.eq) goto loc_82EE8E28;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ee8dfc
	if (!cr6.eq) goto loc_82EE8DFC;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// rlwinm r11,r11,0,28,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// ori r10,r11,16
	ctx.r10.u64 = r11.u64 | 16;
	// stb r10,38(r30)
	PPC_STORE_U8(r30.u32 + 38, ctx.r10.u8);
	// b 0x82ee8e20
	goto loc_82EE8E20;
loc_82EE8DFC:
	// lbz r11,38(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 38);
	// rlwinm r10,r11,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ee8e28
	if (!cr6.eq) goto loc_82EE8E28;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rlwinm r11,r11,0,28,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// ori r10,r11,16
	ctx.r10.u64 = r11.u64 | 16;
	// stb r10,38(r31)
	PPC_STORE_U8(r31.u32 + 38, ctx.r10.u8);
loc_82EE8E20:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82ee7b68
	sub_82EE7B68(ctx, base);
loc_82EE8E28:
	// lbz r11,37(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 37);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lbz r10,37(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 37);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// rlwinm r9,r11,0,26,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x30;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stb r8,37(r30)
	PPC_STORE_U8(r30.u32 + 37, ctx.r8.u8);
	// bl 0x82ed6ba8
	sub_82ED6BA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef4488
	sub_82EF4488(ctx, base);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// addi r3,r30,88
	ctx.r3.s64 = r30.s64 + 88;
	// bl 0x82f76fb8
	sub_82F76FB8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82ed53f0
	sub_82ED53F0(ctx, base);
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// addi r28,r30,72
	r28.s64 = r30.s64 + 72;
	// lwz r7,80(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// clrlwi r29,r11,16
	r29.u64 = r11.u32 & 0xFFFF;
	// add r27,r11,r10
	r27.u64 = r11.u64 + ctx.r10.u64;
	// clrlwi r11,r7,2
	r11.u64 = ctx.r7.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// bge cr6,0x82ee8eac
	if (!cr6.lt) goto loc_82EE8EAC;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x82ee8e9c
	if (cr6.lt) goto loc_82EE8E9C;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82EE8E9C:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EE8EAC:
	// stw r27,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r27.u32);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ee8f10
	if (!cr6.gt) goto loc_82EE8F10;
	// mr r11,r25
	r11.u64 = r25.u64;
loc_82EE8EC4:
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// rlwinm r7,r29,2,14,29
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0x3FFFC;
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// clrlwi r9,r29,16
	ctx.r9.u64 = r29.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// lwzx r4,r8,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// stwx r4,r7,r6
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r4.u32);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// lwzx r9,r3,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + r11.u32);
	// stw r30,184(r9)
	PPC_STORE_U32(ctx.r9.u32 + 184, r30.u32);
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// sth r29,148(r7)
	PPC_STORE_U16(ctx.r7.u32 + 148, r29.u16);
	// clrlwi r29,r5,16
	r29.u64 = ctx.r5.u32 & 0xFFFF;
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// blt cr6,0x82ee8ec4
	if (cr6.lt) goto loc_82EE8EC4;
loc_82EE8F10:
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// addi r29,r30,56
	r29.s64 = r30.s64 + 56;
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// mr r27,r11
	r27.u64 = r11.u64;
	// clrlwi r10,r10,2
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// add r28,r9,r11
	r28.u64 = ctx.r9.u64 + r11.u64;
	// cmpw cr6,r10,r28
	cr6.compare<int32_t>(ctx.r10.s32, r28.s32, xer);
	// bge cr6,0x82ee8f54
	if (!cr6.lt) goto loc_82EE8F54;
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82ee8f44
	if (cr6.lt) goto loc_82EE8F44;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82EE8F44:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EE8F54:
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ee8fb4
	if (!cr6.gt) goto loc_82EE8FB4;
	// rlwinm r11,r27,2,0,29
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_82EE8F70:
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82ee8fa0
	if (cr6.eq) goto loc_82EE8FA0;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stwx r6,r11,r7
	PPC_STORE_U32(r11.u32 + ctx.r7.u32, ctx.r6.u32);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwzx r4,r11,r5
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r5.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r30,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r30.u32);
loc_82EE8FA0:
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// blt cr6,0x82ee8f70
	if (cr6.lt) goto loc_82EE8F70;
loc_82EE8FB4:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// bge cr6,0x82ee8fe4
	if (!cr6.lt) goto loc_82EE8FE4;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x82ee8fd4
	if (cr6.lt) goto loc_82EE8FD4;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82EE8FD4:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EE8FE4:
	// stw r27,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r27.u32);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ee903c
	if (!cr6.gt) goto loc_82EE903C;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
loc_82EE8FFC:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lhz r7,156(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 156);
	// lwz r10,152(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 152);
	// addic. r11,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	r11.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82ee9028
	if (cr0.lt) goto loc_82EE9028;
loc_82EE9014:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// stw r30,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, r30.u32);
	// bge 0x82ee9014
	if (!cr0.lt) goto loc_82EE9014;
loc_82EE9028:
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, r11.s32, xer);
	// blt cr6,0x82ee8ffc
	if (cr6.lt) goto loc_82EE8FFC;
loc_82EE903C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ef4558
	sub_82EF4558(ctx, base);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// addi r11,r26,40
	r11.s64 = r26.s64 + 40;
	// stw r25,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r25.u32);
	// lbz r10,38(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 38);
	// rlwinm r9,r10,0,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// lhz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ee9078
	if (!cr6.eq) goto loc_82EE9078;
	// addi r11,r26,52
	r11.s64 = r26.s64 + 52;
loc_82EE9078:
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bge cr6,0x82ee90b0
	if (!cr6.lt) goto loc_82EE90B0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lwz r6,-4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// stwx r6,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r6.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r4,r8,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// sth r10,32(r4)
	PPC_STORE_U16(ctx.r4.u32 + 32, ctx.r10.u16);
loc_82EE90B0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lbz r10,37(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 37);
	// rlwinm r9,r10,0,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ee90e0
	if (!cr6.eq) goto loc_82EE90E0;
	// lbz r11,37(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 37);
	// rlwinm r9,r11,0,0,25
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFC0;
	// mr r11,r25
	r11.u64 = r25.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ee90e4
	if (cr6.eq) goto loc_82EE90E4;
loc_82EE90E0:
	// li r11,1
	r11.s64 = 1;
loc_82EE90E4:
	// rlwimi r10,r11,6,18,25
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 6) & 0x3FC0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFC03F);
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r10,r11,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC;
	// stb r11,37(r30)
	PPC_STORE_U8(r30.u32 + 37, r11.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ee9110
	if (!cr6.eq) goto loc_82EE9110;
	// lbz r10,37(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 37);
	// rlwinm r9,r10,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ee9114
	if (cr6.eq) goto loc_82EE9114;
loc_82EE9110:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82EE9114:
	// extsb r9,r24
	ctx.r9.s64 = r24.s8;
	// lbz r8,38(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 38);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// cntlzw r6,r9
	ctx.r6.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwimi r11,r7,2,28,29
	r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 2) & 0xC) | (r11.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stb r11,37(r30)
	PPC_STORE_U8(r30.u32 + 37, r11.u8);
	// xori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 ^ 1;
	// rlwimi r8,r4,4,26,27
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0x30) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFCF);
	// stb r8,38(r30)
	PPC_STORE_U8(r30.u32 + 38, ctx.r8.u8);
	// lhz r10,34(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x82ee919c
	if (cr6.eq) goto loc_82EE919C;
	// lhz r11,34(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 34);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
	// bne cr6,0x82ee919c
	if (!cr6.eq) goto loc_82EE919C;
	// lwz r11,68(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 68);
	// addi r29,r26,64
	r29.s64 = r26.s64 + 64;
	// sth r11,34(r30)
	PPC_STORE_U16(r30.u32 + 34, r11.u16);
	// lwz r8,72(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 72);
	// lwz r9,68(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 68);
	// clrlwi r7,r8,2
	ctx.r7.u64 = ctx.r8.u32 & 0x3FFFFFFF;
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// bne cr6,0x82ee9180
	if (!cr6.eq) goto loc_82EE9180;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EE9180:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r8.u32);
loc_82EE919C:
	// lhz r11,34(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
	// beq cr6,0x82ee91bc
	if (cr6.eq) goto loc_82EE91BC;
	// lwz r10,64(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 64);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stwx r25,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r25.u32);
	// sth r8,34(r31)
	PPC_STORE_U16(r31.u32 + 34, ctx.r8.u16);
loc_82EE91BC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,38(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 38);
	// rlwinm r8,r9,0,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82ee9224
	if (cr6.eq) goto loc_82EE9224;
	// lhz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82ee9224
	if (cr6.eq) goto loc_82EE9224;
	// lwz r11,40(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 40);
	// lwz r9,76(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,76(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// ble cr6,0x82ee9224
	if (!cr6.gt) goto loc_82EE9224;
	// sth r25,32(r30)
	PPC_STORE_U16(r30.u32 + 32, r25.u16);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// sth r10,32(r11)
	PPC_STORE_U16(r11.u32 + 32, ctx.r10.u16);
	// lwz r7,40(r26)
	ctx.r7.u64 = PPC_LOAD_U32(r26.u32 + 40);
	// stw r30,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r30.u32);
	// lwz r6,40(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 40);
	// stwx r11,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, r11.u32);
loc_82EE9224:
	// lwz r11,132(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 132);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,132(r26)
	PPC_STORE_U32(r26.u32 + 132, r11.u32);
	// bne 0x82ee9254
	if (!cr0.eq) goto loc_82EE9254;
	// lbz r11,140(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ee9254
	if (!cr6.eq) goto loc_82EE9254;
	// lwz r11,128(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ee9254
	if (cr6.eq) goto loc_82EE9254;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82ed5370
	sub_82ED5370(ctx, base);
loc_82EE9254:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EE9260"))) PPC_WEAK_FUNC(sub_82EE9260);
PPC_FUNC_IMPL(__imp__sub_82EE9260) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,68(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 68);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82ee9294
	if (!cr6.gt) goto loc_82EE9294;
	// lis r10,-32018
	ctx.r10.s64 = -2098331648;
	// lwz r3,64(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 64);
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// addi r6,r10,29448
	ctx.r6.s64 = ctx.r10.s64 + 29448;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82eb3b68
	sub_82EB3B68(ctx, base);
loc_82EE9294:
	// lwz r11,68(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 68);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ee93f8
	if (cr6.eq) goto loc_82EE93F8;
	// lis r11,0
	r11.s64 = 0;
	// addi r28,r27,64
	r28.s64 = r27.s64 + 64;
	// ori r26,r11,65535
	r26.u64 = r11.u64 | 65535;
loc_82EE92AC:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// lwz r29,-4(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// stw r9,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r9.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ee93ec
	if (cr6.eq) goto loc_82EE93EC;
	// lbz r11,37(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 37);
	// sth r26,34(r29)
	PPC_STORE_U16(r29.u32 + 34, r26.u16);
	// rlwinm r10,r11,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ee93bc
	if (cr6.eq) goto loc_82EE93BC;
	// lwz r9,60(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// addi r31,r29,56
	r31.s64 = r29.s64 + 56;
	// li r30,-1
	r30.s64 = -1;
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82ee932c
	if (!cr6.gt) goto loc_82EE932C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82EE9300:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82ee9324
	if (cr6.eq) goto loc_82EE9324;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x82ee9300
	if (cr6.lt) goto loc_82EE9300;
	// b 0x82ee932c
	goto loc_82EE932C;
loc_82EE9324:
	// mr r30,r11
	r30.u64 = r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_82EE932C:
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x82ee9370
	if (!cr6.lt) goto loc_82EE9370;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82EE933C:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82ee935c
	if (cr6.eq) goto loc_82EE935C;
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stwx r7,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
loc_82EE935C:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82ee933c
	if (cr6.lt) goto loc_82EE933C;
loc_82EE9370:
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// beq cr6,0x82ee93ac
	if (cr6.eq) goto loc_82EE93AC;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x82ee93a8
	if (!cr6.lt) goto loc_82EE93A8;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82ee9398
	if (cr6.lt) goto loc_82EE9398;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82EE9398:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EE93A8:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
loc_82EE93AC:
	// lbz r11,37(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 37);
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// rlwinm r10,r10,0,30,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// stb r10,37(r29)
	PPC_STORE_U8(r29.u32 + 37, ctx.r10.u8);
loc_82EE93BC:
	// lbz r10,38(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 38);
	// rlwinm r11,r10,28,30,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3;
	// rlwinm r9,r10,26,6,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82ee93ec
	if (cr6.eq) goto loc_82EE93EC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// beq cr6,0x82ee93e8
	if (cr6.eq) goto loc_82EE93E8;
	// bl 0x82ee7b68
	sub_82EE7B68(ctx, base);
	// b 0x82ee93ec
	goto loc_82EE93EC;
loc_82EE93E8:
	// bl 0x82ee7d40
	sub_82EE7D40(ctx, base);
loc_82EE93EC:
	// lwz r11,68(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 68);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ee92ac
	if (!cr6.eq) goto loc_82EE92AC;
loc_82EE93F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82EE9400"))) PPC_WEAK_FUNC(sub_82EE9400);
PPC_FUNC_IMPL(__imp__sub_82EE9400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r4,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r4.u32);
	// lwz r11,132(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 132);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ee943c
	if (cr6.eq) goto loc_82EE943C;
	// li r11,3
	r11.s64 = 3;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, r11.u8);
	// bl 0x82ed5388
	sub_82ED5388(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831b0b68
	return;
loc_82EE943C:
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r24,r4,16
	r24.s64 = ctx.r4.s64 + 16;
	// stw r10,132(r28)
	PPC_STORE_U32(r28.u32 + 132, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ee96d8
	if (cr6.eq) goto loc_82EE96D8;
	// lwz r26,0(r13)
	r26.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r25,20
	r25.s64 = 20;
	// li r27,0
	r27.s64 = 0;
	// lwz r31,760(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 760);
	// lis r30,-32768
	r30.s64 = -2147483648;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r27.u32);
	// addi r11,r31,2
	r11.s64 = r31.s64 + 2;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r27.u32);
	// lwzx r3,r25,r26
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + r26.u32);
	// rlwinm r4,r11,3,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF0;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r30.u32);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82ee94a0
	if (cr6.gt) goto loc_82EE94A0;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x82ee94b0
	goto loc_82EE94B0;
loc_82EE94A0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EE94B0:
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// or r11,r31,r30
	r11.u64 = r31.u64 | r30.u64;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// lwzx r3,r25,r26
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + r26.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// lwz r29,760(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 760);
	// addi r10,r29,2
	ctx.r10.s64 = r29.s64 + 2;
	// rlwinm r4,r10,3,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF0;
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82ee94f8
	if (cr6.gt) goto loc_82EE94F8;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// b 0x82ee950c
	goto loc_82EE950C;
loc_82EE94F8:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82EE950C:
	// or r10,r29,r30
	ctx.r10.u64 = r29.u64 | r30.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r31,r24,32
	r31.s64 = r24.s64 + 32;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lwz r9,32(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 32);
	// lwz r8,48(r24)
	ctx.r8.u64 = PPC_LOAD_U32(r24.u32 + 48);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// ble cr6,0x82ee9540
	if (!cr6.gt) goto loc_82EE9540;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,108(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 108);
	// addi r4,r1,268
	ctx.r4.s64 = ctx.r1.s64 + 268;
	// bl 0x82eff238
	sub_82EFF238(ctx, base);
loc_82EE9540:
	// lbz r9,15(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 15);
	// addi r6,r24,20
	ctx.r6.s64 = r24.s64 + 20;
	// lbz r5,13(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 13);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lbz r4,14(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 14);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lbz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// slw r11,r5,r9
	r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// slw r5,r4,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// slw r3,r3,r9
	ctx.r3.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// subf r10,r5,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r5.s64;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// subf r5,r3,r30
	ctx.r5.s64 = r30.s64 - ctx.r3.s64;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r5,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r5.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lbz r10,30(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 30);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lbz r24,28(r31)
	r24.u64 = PPC_LOAD_U8(r31.u32 + 28);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lbz r30,29(r31)
	r30.u64 = PPC_LOAD_U8(r31.u32 + 29);
	// slw r30,r30,r9
	r30.u64 = ctx.r9.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r9.u8 & 0x3F));
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r31,84(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 84);
	// slw r9,r24,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r9.u8 & 0x3F));
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add. r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x82ee9640
	if (!cr0.gt) goto loc_82EE9640;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f2bee8
	sub_82F2BEE8(ctx, base);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,88(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 88);
	// bl 0x82f2be78
	sub_82F2BE78(ctx, base);
	// lwz r11,112(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// bne cr6,0x82ee9630
	if (!cr6.eq) goto loc_82EE9630;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
loc_82EE9630:
	// lwz r3,88(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 88);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82f2bdc0
	sub_82F2BDC0(ctx, base);
loc_82EE9640:
	// lwzx r3,r25,r26
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + r26.u32);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82ee9668
	if (!cr6.eq) goto loc_82EE9668;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EE9668:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ee968c
	if (!cr6.eq) goto loc_82EE968C;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r25,r26
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + r26.u32);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EE968C:
	// lwzx r3,r25,r26
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + r26.u32);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82ee96b4
	if (!cr6.eq) goto loc_82EE96B4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EE96B4:
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ee96d8
	if (!cr6.eq) goto loc_82EE96D8;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r25,r26
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + r26.u32);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EE96D8:
	// lwz r11,132(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 132);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,132(r28)
	PPC_STORE_U32(r28.u32 + 132, r11.u32);
	// bne 0x82ee9708
	if (!cr0.eq) goto loc_82EE9708;
	// lbz r11,140(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ee9708
	if (!cr6.eq) goto loc_82EE9708;
	// lwz r11,128(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ee9708
	if (cr6.eq) goto loc_82EE9708;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ed5370
	sub_82ED5370(ctx, base);
loc_82EE9708:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EE9710"))) PPC_WEAK_FUNC(sub_82EE9710);
PPC_FUNC_IMPL(__imp__sub_82EE9710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// addi r25,r4,16
	r25.s64 = ctx.r4.s64 + 16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ee9874
	if (cr6.eq) goto loc_82EE9874;
	// lwz r27,0(r13)
	r27.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r26,20
	r26.s64 = 20;
	// li r28,0
	r28.s64 = 0;
	// lwz r30,760(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 760);
	// lis r29,-32768
	r29.s64 = -2147483648;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r11,r30,2
	r11.s64 = r30.s64 + 2;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// lwzx r3,r26,r27
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// rlwinm r4,r11,3,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF0;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82ee977c
	if (cr6.gt) goto loc_82EE977C;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// b 0x82ee9790
	goto loc_82EE9790;
loc_82EE977C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82EE9790:
	// or r10,r30,r29
	ctx.r10.u64 = r30.u64 | r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r4,r1,220
	ctx.r4.s64 = ctx.r1.s64 + 220;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// bl 0x82eff238
	sub_82EFF238(ctx, base);
	// lwz r11,220(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r8,r11,48
	ctx.r8.s64 = r11.s64 + 48;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// ld r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U64(r11.u32 + 48);
	// addi r4,r25,20
	ctx.r4.s64 = r25.s64 + 20;
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// ld r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 56);
	// std r10,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// ld r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U64(r11.u32 + 64);
	// std r8,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r8.u64);
	// ld r7,72(r11)
	ctx.r7.u64 = PPC_LOAD_U64(r11.u32 + 72);
	// std r7,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, ctx.r7.u64);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x82ee9828
	if (!cr6.gt) goto loc_82EE9828;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// bne cr6,0x82ee981c
	if (!cr6.eq) goto loc_82EE981C;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
loc_82EE981C:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82f2bdc0
	sub_82F2BDC0(ctx, base);
loc_82EE9828:
	// lwzx r3,r26,r27
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82ee9850
	if (!cr6.eq) goto loc_82EE9850;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EE9850:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ee9874
	if (!cr6.eq) goto loc_82EE9874;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r26,r27
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EE9874:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82EE9880"))) PPC_WEAK_FUNC(sub_82EE9880);
PPC_FUNC_IMPL(__imp__sub_82EE9880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,0(r13)
	r25.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r26,20
	r26.s64 = 20;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// lis r28,-32768
	r28.s64 = -2147483648;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwzx r3,r26,r25
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r25.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// lwz r29,760(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 760);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r11,r29,2
	r11.s64 = r29.s64 + 2;
	// rlwinm r4,r11,3,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF0;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82ee98dc
	if (cr6.gt) goto loc_82EE98DC;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// b 0x82ee98f0
	goto loc_82EE98F0;
loc_82EE98DC:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82EE98F0:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// or r9,r29,r28
	ctx.r9.u64 = r29.u64 | r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r30,36
	ctx.r4.s64 = r30.s64 + 36;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x82ee9964
	if (cr6.eq) goto loc_82EE9964;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// bne cr6,0x82ee9958
	if (!cr6.eq) goto loc_82EE9958;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
loc_82EE9958:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82f2bdc0
	sub_82F2BDC0(ctx, base);
loc_82EE9964:
	// lwzx r3,r26,r25
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r25.u32);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82ee998c
	if (!cr6.eq) goto loc_82EE998C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EE998C:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ee99b0
	if (!cr6.eq) goto loc_82EE99B0;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r26,r25
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r25.u32);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EE99B0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82EE99B8"))) PPC_WEAK_FUNC(sub_82EE99B8);
PPC_FUNC_IMPL(__imp__sub_82EE99B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// addi r26,r4,16
	r26.s64 = ctx.r4.s64 + 16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ee9af8
	if (cr6.eq) goto loc_82EE9AF8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,204
	ctx.r4.s64 = ctx.r1.s64 + 204;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r29,0(r13)
	r29.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r28,20
	r28.s64 = 20;
	// li r11,0
	r11.s64 = 0;
	// lis r27,-32768
	r27.s64 = -2147483648;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// lwz r7,44(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r30,760(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 760);
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r6,r30,2
	ctx.r6.s64 = r30.s64 + 2;
	// rlwinm r4,r6,3,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF0;
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bgt cr6,0x82ee9a54
	if (cr6.gt) goto loc_82EE9A54;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// b 0x82ee9a68
	goto loc_82EE9A68;
loc_82EE9A54:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82EE9A68:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// or r10,r30,r27
	ctx.r10.u64 = r30.u64 | r27.u64;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r4,r26,20
	ctx.r4.s64 = r26.s64 + 20;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x82ee9aac
	if (!cr6.gt) goto loc_82EE9AAC;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82f2be78
	sub_82F2BE78(ctx, base);
loc_82EE9AAC:
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82ee9ad4
	if (!cr6.eq) goto loc_82EE9AD4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EE9AD4:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ee9af8
	if (!cr6.eq) goto loc_82EE9AF8;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EE9AF8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82EE9B00"))) PPC_WEAK_FUNC(sub_82EE9B00);
PPC_FUNC_IMPL(__imp__sub_82EE9B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r13)
	r28.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r29,20
	r29.s64 = 20;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// lis r26,-32768
	r26.s64 = -2147483648;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r28.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// lwz r30,760(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 760);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r10,r30,2
	ctx.r10.s64 = r30.s64 + 2;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r4,r10,3,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF0;
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82ee9b5c
	if (cr6.gt) goto loc_82EE9B5C;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// b 0x82ee9b70
	goto loc_82EE9B70;
loc_82EE9B5C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82EE9B70:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// or r10,r30,r26
	ctx.r10.u64 = r30.u64 | r26.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// addi r4,r27,36
	ctx.r4.s64 = r27.s64 + 36;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x82ee9bb4
	if (cr6.eq) goto loc_82EE9BB4;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82f2be78
	sub_82F2BE78(ctx, base);
loc_82EE9BB4:
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r28.u32);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82ee9bdc
	if (!cr6.eq) goto loc_82EE9BDC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EE9BDC:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ee9c00
	if (!cr6.eq) goto loc_82EE9C00;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r28.u32);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EE9C00:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82EE9C08"))) PPC_WEAK_FUNC(sub_82EE9C08);
PPC_FUNC_IMPL(__imp__sub_82EE9C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af0
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// lwz r15,0(r13)
	r15.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r14,20
	r14.s64 = 20;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// stw r29,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, r29.u32);
	// mr r17,r6
	r17.u64 = ctx.r6.u64;
	// lwz r11,76(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 76);
	// lwzx r3,r14,r15
	ctx.r3.u64 = PPC_LOAD_U32(r14.u32 + r15.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// rlwinm r4,r11,2,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFF0;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82ee9c5c
	if (cr6.gt) goto loc_82EE9C5C;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// b 0x82ee9c70
	goto loc_82EE9C70;
loc_82EE9C5C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82EE9C70:
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,76(r18)
	ctx.r5.u64 = PPC_LOAD_U32(r18.u32 + 76);
	// bl 0x83208528
	sub_83208528(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef4a10
	sub_82EF4A10(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ee9cc4
	if (cr6.eq) goto loc_82EE9CC4;
	// lbz r11,37(r18)
	r11.u64 = PPC_LOAD_U8(r18.u32 + 37);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// rlwinm r10,r10,0,28,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// stb r10,37(r18)
	PPC_STORE_U8(r18.u32 + 37, ctx.r10.u8);
	// lwzx r3,r14,r15
	ctx.r3.u64 = PPC_LOAD_U32(r14.u32 + r15.u32);
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// b 0x82eeaa6c
	goto loc_82EEAA6C;
loc_82EE9CC4:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// addi r10,r1,172
	ctx.r10.s64 = ctx.r1.s64 + 172;
	// ori r9,r11,32
	ctx.r9.u64 = r11.u64 | 32;
	// li r27,0
	r27.s64 = 0;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83208718
	sub_83208718(ctx, base);
	// lwzx r3,r14,r15
	ctx.r3.u64 = PPC_LOAD_U32(r14.u32 + r15.u32);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r6,r8,17
	ctx.r6.s64 = ctx.r8.s64 + 17;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r4,r6,0,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// lwz r7,44(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bgt cr6,0x82ee9d1c
	if (cr6.gt) goto loc_82EE9D1C;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// mr r16,r11
	r16.u64 = r11.u64;
	// b 0x82ee9d30
	goto loc_82EE9D30;
loc_82EE9D1C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
loc_82EE9D30:
	// lbz r11,37(r18)
	r11.u64 = PPC_LOAD_U8(r18.u32 + 37);
	// rlwinm r10,r11,0,26,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ee9f04
	if (cr6.eq) goto loc_82EE9F04;
	// lbz r11,197(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 197);
	// lwzx r3,r14,r15
	ctx.r3.u64 = PPC_LOAD_U32(r14.u32 + r15.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eeaa14
	if (cr6.eq) goto loc_82EEAA14;
	// lwz r11,164(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r31,r18,72
	r31.s64 = r18.s64 + 72;
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// mr r30,r11
	r30.u64 = r11.u64;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r4,r10,2,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFF0;
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82ee9d80
	if (cr6.gt) goto loc_82EE9D80;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// b 0x82ee9d94
	goto loc_82EE9D94;
loc_82EE9D80:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82EE9D94:
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r11.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x82ee9dbc
	if (!cr6.gt) goto loc_82EE9DBC;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82EE9DA8:
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stwx r27,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r27.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82ee9da8
	if (!cr0.eq) goto loc_82EE9DA8;
loc_82EE9DBC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r7,r29,709
	ctx.r7.s64 = r29.s64 + 709;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ee9e60
	if (!cr6.gt) goto loc_82EE9E60;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
loc_82EE9DD4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r9,1(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// lhz r11,220(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 220);
	// srawi r5,r11,14
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFF) != 0);
	ctx.r5.s64 = r11.s32 >> 14;
	// cmpw cr6,r9,r5
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, xer);
	// bne cr6,0x82ee9df4
	if (!cr6.eq) goto loc_82EE9DF4;
	// srawi r11,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	r11.s64 = r11.s32 >> 7;
loc_82EE9DF4:
	// clrlwi r9,r11,25
	ctx.r9.u64 = r11.u32 & 0x7F;
	// lhz r11,218(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 218);
	// lbz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// srawi r5,r11,14
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFF) != 0);
	ctx.r5.s64 = r11.s32 >> 14;
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// bne cr6,0x82ee9e10
	if (!cr6.eq) goto loc_82EE9E10;
	// srawi r11,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	r11.s64 = r11.s32 >> 7;
loc_82EE9E10:
	// clrlwi r10,r11,25
	ctx.r10.u64 = r11.u32 & 0x7F;
	// clrlwi r11,r9,25
	r11.u64 = ctx.r9.u32 & 0x7F;
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// ble cr6,0x82ee9e28
	if (!cr6.gt) goto loc_82EE9E28;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82EE9E28:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bgt cr6,0x82ee9e4c
	if (cr6.gt) goto loc_82EE9E4C;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r4,r8,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r10.u32);
loc_82EE9E4C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// blt cr6,0x82ee9dd4
	if (cr6.lt) goto loc_82EE9DD4;
loc_82EE9E60:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stb r5,0(r16)
	PPC_STORE_U8(r16.u32 + 0, ctx.r5.u8);
	// ble cr6,0x82ee9eac
	if (!cr6.gt) goto loc_82EE9EAC;
	// mr r11,r27
	r11.u64 = r27.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_82EE9E7C:
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x82ee9e94
	if (cr6.eq) goto loc_82EE9E94;
	// stwx r27,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r27.u32);
	// b 0x82ee9ea0
	goto loc_82EE9EA0;
loc_82EE9E94:
	// stwx r5,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r5.u32);
	// stbx r27,r5,r16
	PPC_STORE_U8(ctx.r5.u32 + r16.u32, r27.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_82EE9EA0:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82ee9e7c
	if (!cr0.eq) goto loc_82EE9E7C;
loc_82EE9EAC:
	// cmpw cr6,r5,r30
	cr6.compare<int32_t>(ctx.r5.s32, r30.s32, xer);
	// ble cr6,0x82ee9ebc
	if (!cr6.gt) goto loc_82EE9EBC;
	// stb r27,0(r16)
	PPC_STORE_U8(r16.u32 + 0, r27.u8);
	// b 0x82ee9ecc
	goto loc_82EE9ECC;
loc_82EE9EBC:
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83208950
	sub_83208950(ctx, base);
loc_82EE9ECC:
	// lwzx r3,r14,r15
	ctx.r3.u64 = PPC_LOAD_U32(r14.u32 + r15.u32);
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82ee9ef4
	if (!cr6.eq) goto loc_82EE9EF4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EE9EF4:
	// lwz r11,164(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82eea288
	if (!cr6.eq) goto loc_82EEA288;
	// b 0x82eeaa10
	goto loc_82EEAA10;
loc_82EE9F04:
	// lwz r11,164(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 164);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,164(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// beq cr6,0x82eea278
	if (cr6.eq) goto loc_82EEA278;
	// lwzx r3,r14,r15
	ctx.r3.u64 = PPC_LOAD_U32(r14.u32 + r15.u32);
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// mr r24,r11
	r24.u64 = r11.u64;
	// rlwinm r4,r31,2,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFF0;
	// addi r30,r18,72
	r30.s64 = r18.s64 + 72;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82ee9f48
	if (cr6.gt) goto loc_82EE9F48;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// mr r25,r11
	r25.u64 = r11.u64;
	// b 0x82ee9f5c
	goto loc_82EE9F5C;
loc_82EE9F48:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_82EE9F5C:
	// lwzx r3,r14,r15
	ctx.r3.u64 = PPC_LOAD_U32(r14.u32 + r15.u32);
	// rlwinm r4,r31,2,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFF0;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82ee9f80
	if (cr6.gt) goto loc_82EE9F80;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// b 0x82ee9f94
	goto loc_82EE9F94;
loc_82EE9F80:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82EE9F94:
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// ble cr6,0x82ee9fc0
	if (!cr6.gt) goto loc_82EE9FC0;
	// mr r11,r27
	r11.u64 = r27.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_82EE9FA8:
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stwx r27,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, r27.u32);
	// stwx r27,r11,r25
	PPC_STORE_U32(r11.u32 + r25.u32, r27.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82ee9fa8
	if (!cr0.eq) goto loc_82EE9FA8;
loc_82EE9FC0:
	// lbz r11,197(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 197);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// beq cr6,0x82eea094
	if (cr6.eq) goto loc_82EEA094;
	// addi r4,r29,709
	ctx.r4.s64 = r29.s64 + 709;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82eea0f8
	if (!cr6.gt) goto loc_82EEA0F8;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
loc_82EE9FE4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lhz r11,220(r7)
	r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 220);
	// lwzx r6,r8,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// srawi r3,r11,14
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFF) != 0);
	ctx.r3.s64 = r11.s32 >> 14;
	// cmpw cr6,r9,r3
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, xer);
	// bne cr6,0x82eea010
	if (!cr6.eq) goto loc_82EEA010;
	// srawi r11,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	r11.s64 = r11.s32 >> 7;
loc_82EEA010:
	// clrlwi r9,r11,25
	ctx.r9.u64 = r11.u32 & 0x7F;
	// lhz r11,218(r7)
	r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 218);
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// srawi r3,r11,14
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFF) != 0);
	ctx.r3.s64 = r11.s32 >> 14;
	// cmpw cr6,r10,r3
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, xer);
	// bne cr6,0x82eea02c
	if (!cr6.eq) goto loc_82EEA02C;
	// srawi r11,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	r11.s64 = r11.s32 >> 7;
loc_82EEA02C:
	// clrlwi r10,r11,25
	ctx.r10.u64 = r11.u32 & 0x7F;
	// clrlwi r11,r9,25
	r11.u64 = ctx.r9.u32 & 0x7F;
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// ble cr6,0x82eea044
	if (!cr6.gt) goto loc_82EEA044;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82EEA044:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bgt cr6,0x82eea05c
	if (cr6.gt) goto loc_82EEA05C;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
loc_82EEA05C:
	// lhz r9,156(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 156);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bge cr6,0x82eea06c
	if (!cr6.lt) goto loc_82EEA06C;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82EEA06C:
	// rlwinm r11,r6,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwzx r10,r11,r25
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r25.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r10,r11,r25
	PPC_STORE_U32(r11.u32 + r25.u32, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r5,r9
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, xer);
	// blt cr6,0x82ee9fe4
	if (cr6.lt) goto loc_82EE9FE4;
	// b 0x82eea0f8
	goto loc_82EEA0F8;
loc_82EEA094:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82eea0f8
	if (!cr6.gt) goto loc_82EEA0F8;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82EEA0A4:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r4,r11,r8
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// lwzx r3,r11,r5
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r5.u32);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r9.u32);
	// lhz r9,156(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 156);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bge cr6,0x82eea0d8
	if (!cr6.lt) goto loc_82EEA0D8;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82EEA0D8:
	// lwzx r8,r25,r10
	ctx.r8.u64 = PPC_LOAD_U32(r25.u32 + ctx.r10.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r9,r25,r10
	PPC_STORE_U32(r25.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r7,r8
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, xer);
	// blt cr6,0x82eea0a4
	if (cr6.lt) goto loc_82EEA0A4;
loc_82EEA0F8:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// ble cr6,0x82eea12c
	if (!cr6.gt) goto loc_82EEA12C;
	// mr r11,r27
	r11.u64 = r27.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_82EEA10C:
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x82eea120
	if (!cr6.eq) goto loc_82EEA120;
	// stwx r9,r11,r25
	PPC_STORE_U32(r11.u32 + r25.u32, ctx.r9.u32);
loc_82EEA120:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82eea10c
	if (!cr0.eq) goto loc_82EEA10C;
loc_82EEA12C:
	// lwz r30,128(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// mr r26,r30
	r26.u64 = r30.u64;
	// ble cr6,0x82eea214
	if (!cr6.gt) goto loc_82EEA214;
	// li r23,1
	r23.s64 = 1;
	// mr r31,r25
	r31.u64 = r25.u64;
	// mr r29,r23
	r29.u64 = r23.u64;
	// mr r28,r24
	r28.u64 = r24.u64;
	// li r3,-2
	ctx.r3.s64 = -2;
loc_82EEA154:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r8,-2
	cr6.compare<int32_t>(ctx.r8.s32, -2, xer);
	// beq cr6,0x82eea200
	if (cr6.eq) goto loc_82EEA200;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stbx r27,r7,r16
	PPC_STORE_U8(ctx.r7.u32 + r16.u32, r27.u8);
	// stw r7,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r7.u32);
	// blt cr6,0x82eea200
	if (cr6.lt) goto loc_82EEA200;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmpw cr6,r29,r24
	cr6.compare<int32_t>(r29.s32, r24.s32, xer);
	// bge cr6,0x82eea200
	if (!cr6.lt) goto loc_82EEA200;
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// subf r6,r25,r26
	ctx.r6.s64 = r26.s64 - r25.s64;
loc_82EEA18C:
	// lwz r11,572(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 572);
	// addi r22,r8,10
	r22.s64 = ctx.r8.s64 + 10;
	// lwz r9,164(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 164);
	// mr r11,r23
	r11.u64 = r23.u64;
	// cmpw cr6,r22,r9
	cr6.compare<int32_t>(r22.s32, ctx.r9.s32, xer);
	// blt cr6,0x82eea1a8
	if (cr6.lt) goto loc_82EEA1A8;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82EEA1A8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eea200
	if (cr6.eq) goto loc_82EEA200;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82eea1f0
	if (cr6.lt) goto loc_82EEA1F0;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// blt cr6,0x82eea1d4
	if (cr6.lt) goto loc_82EEA1D4;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
loc_82EEA1D4:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82eea1f0
	if (cr6.eq) goto loc_82EEA1F0;
	// stbx r23,r7,r16
	PPC_STORE_U8(ctx.r7.u32 + r16.u32, r23.u8);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// stwx r7,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r7.u32);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
loc_82EEA1F0:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r4,r24
	cr6.compare<int32_t>(ctx.r4.s32, r24.s32, xer);
	// blt cr6,0x82eea18c
	if (cr6.lt) goto loc_82EEA18C;
loc_82EEA200:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bne 0x82eea154
	if (!cr0.eq) goto loc_82EEA154;
loc_82EEA214:
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83208950
	sub_83208950(ctx, base);
	// lwzx r3,r14,r15
	ctx.r3.u64 = PPC_LOAD_U32(r14.u32 + r15.u32);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82eea24c
	if (!cr6.eq) goto loc_82EEA24C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EEA24C:
	// lwzx r3,r14,r15
	ctx.r3.u64 = PPC_LOAD_U32(r14.u32 + r15.u32);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r25,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r25.u32);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// bne cr6,0x82eea288
	if (!cr6.eq) goto loc_82EEA288;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82eea288
	goto loc_82EEA288;
loc_82EEA278:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// bl 0x82eb2a68
	sub_82EB2A68(ctx, base);
loc_82EEA288:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x832087d8
	sub_832087D8(ctx, base);
	// lbzx r10,r16,r3
	ctx.r10.u64 = PPC_LOAD_U8(r16.u32 + ctx.r3.u32);
	// lbz r11,0(r16)
	r11.u64 = PPC_LOAD_U8(r16.u32 + 0);
	// stb r10,0(r16)
	PPC_STORE_U8(r16.u32 + 0, ctx.r10.u8);
	// stbx r11,r16,r3
	PPC_STORE_U8(r16.u32 + ctx.r3.u32, r11.u8);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r11,164(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r19,r11
	r19.u64 = r11.u64;
	// lwz r23,76(r18)
	r23.u64 = PPC_LOAD_U32(r18.u32 + 76);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// lwz r22,0(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwzx r3,r14,r15
	ctx.r3.u64 = PPC_LOAD_U32(r14.u32 + r15.u32);
	// beq cr6,0x82eeaa14
	if (cr6.eq) goto loc_82EEAA14;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r4,r11,2,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFF0;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82eea2ec
	if (cr6.gt) goto loc_82EEA2EC;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// mr r21,r11
	r21.u64 = r11.u64;
	// b 0x82eea300
	goto loc_82EEA300;
loc_82EEA2EC:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
loc_82EEA300:
	// lbz r11,0(r16)
	r11.u64 = PPC_LOAD_U8(r16.u32 + 0);
	// li r29,1
	r29.s64 = 1;
	// lbz r10,37(r18)
	ctx.r10.u64 = PPC_LOAD_U8(r18.u32 + 37);
	// cmpwi cr6,r19,1
	cr6.compare<int32_t>(r19.s32, 1, xer);
	// extsb r9,r11
	ctx.r9.s64 = r11.s8;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 ^ 1;
	// rlwimi r10,r6,4,26,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 4) & 0x30) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFCF);
	// stb r10,37(r18)
	PPC_STORE_U8(r18.u32 + 37, ctx.r10.u8);
	// stw r18,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r18.u32);
	// ble cr6,0x82eea404
	if (!cr6.gt) goto loc_82EEA404;
	// li r30,4
	r30.s64 = 4;
	// li r26,108
	r26.s64 = 108;
	// li r28,5
	r28.s64 = 5;
loc_82EEA33C:
	// li r5,50
	ctx.r5.s64 = 50;
	// lwzx r3,r14,r15
	ctx.r3.u64 = PPC_LOAD_U32(r14.u32 + r15.u32);
	// li r4,108
	ctx.r4.s64 = 108;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// sth r26,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r26.u16);
	// lwz r4,572(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 572);
	// bl 0x82ef4e10
	sub_82EF4E10(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,38(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 38);
	// lbz r10,37(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 37);
	// rlwimi r11,r28,4,0,27
	r11.u64 = (__builtin_rotateleft32(r28.u32, 4) & 0xFFFFFFF0) | (r11.u64 & 0xFFFFFFFF0000000F);
	// stb r11,38(r31)
	PPC_STORE_U8(r31.u32 + 38, r11.u8);
	// lbzx r9,r16,r29
	ctx.r9.u64 = PPC_LOAD_U8(r16.u32 + r29.u32);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r5,r6,1
	ctx.r5.u64 = ctx.r6.u64 ^ 1;
	// rlwimi r10,r5,4,26,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 4) & 0x30) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFCF);
	// stb r10,37(r31)
	PPC_STORE_U8(r31.u32 + 37, ctx.r10.u8);
	// lwz r3,4(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// sth r3,32(r31)
	PPC_STORE_U16(r31.u32 + 32, ctx.r3.u16);
	// lwz r10,4(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// lwz r9,8(r20)
	ctx.r9.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// clrlwi r8,r9,2
	ctx.r8.u64 = ctx.r9.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// bne cr6,0x82eea3b0
	if (!cr6.eq) goto loc_82EEA3B0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EEA3B0:
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r31.u32);
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r20)
	PPC_STORE_U32(r20.u32 + 4, ctx.r8.u32);
	// stwx r31,r30,r21
	PPC_STORE_U32(r30.u32 + r21.u32, r31.u32);
	// lwz r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// clrlwi r5,r6,2
	ctx.r5.u64 = ctx.r6.u32 & 0x3FFFFFFF;
	// lwzx r4,r30,r7
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + ctx.r7.u32);
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// bge cr6,0x82eea3f4
	if (!cr6.lt) goto loc_82EEA3F4;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EEA3F4:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r19
	cr6.compare<int32_t>(r29.s32, r19.s32, xer);
	// blt cr6,0x82eea33c
	if (cr6.lt) goto loc_82EEA33C;
loc_82EEA404:
	// lwz r31,76(r18)
	r31.u64 = PPC_LOAD_U32(r18.u32 + 76);
	// addi r3,r18,72
	ctx.r3.s64 = r18.s64 + 72;
	// lwz r25,72(r18)
	r25.u64 = PPC_LOAD_U32(r18.u32 + 72);
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// beq cr6,0x82eea470
	if (cr6.eq) goto loc_82EEA470;
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r10,0(r17)
	PPC_STORE_U32(r17.u32 + 0, ctx.r10.u32);
	// lwz r8,4(r17)
	ctx.r8.u64 = PPC_LOAD_U32(r17.u32 + 4);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r7,4(r17)
	PPC_STORE_U32(r17.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r17)
	ctx.r6.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r5,8(r17)
	PPC_STORE_U32(r17.u32 + 8, ctx.r5.u32);
	// stw r27,76(r18)
	PPC_STORE_U32(r18.u32 + 76, r27.u32);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r4,2
	r11.u64 = ctx.r4.u32 & 0x3FFFFFFF;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// bge cr6,0x82eea474
	if (!cr6.lt) goto loc_82EEA474;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
	// b 0x82eea474
	goto loc_82EEA474;
loc_82EEA470:
	// stw r27,76(r18)
	PPC_STORE_U32(r18.u32 + 76, r27.u32);
loc_82EEA474:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x82eea5ac
	if (!cr6.gt) goto loc_82EEA5AC;
	// mr r26,r27
	r26.u64 = r27.u64;
	// mr r24,r31
	r24.u64 = r31.u64;
loc_82EEA484:
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwzx r29,r26,r25
	r29.u64 = PPC_LOAD_U32(r26.u32 + r25.u32);
	// lwzx r10,r26,r11
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + r11.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r9,r21
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + r21.u32);
	// addi r11,r30,72
	r11.s64 = r30.s64 + 72;
	// cmplw cr6,r18,r30
	cr6.compare<uint32_t>(r18.u32, r30.u32, xer);
	// stw r30,184(r29)
	PPC_STORE_U32(r29.u32 + 184, r30.u32);
	// lwz r8,76(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// sth r8,148(r29)
	PPC_STORE_U16(r29.u32 + 148, ctx.r8.u16);
	// lwz r6,76(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// lwz r5,72(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r4,r5
	PPC_STORE_U32(ctx.r4.u32 + ctx.r5.u32, r29.u32);
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// stw r3,76(r30)
	PPC_STORE_U32(r30.u32 + 76, ctx.r3.u32);
	// beq cr6,0x82eea5a0
	if (cr6.eq) goto loc_82EEA5A0;
	// lhz r11,156(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 156);
	// mr r28,r27
	r28.u64 = r27.u64;
	// lwz r31,152(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eea5a0
	if (cr6.eq) goto loc_82EEA5A0;
loc_82EEA4E0:
	// lwz r11,28(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 28);
	// lhz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 20);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lhz r9,22(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 22);
	// lhz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 24);
	// stw r11,28(r18)
	PPC_STORE_U32(r18.u32 + 28, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r7,8(r18)
	ctx.r7.u64 = PPC_LOAD_U32(r18.u32 + 8);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// lwz r6,40(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82eea568
	if (cr6.eq) goto loc_82EEA568;
	// lwz r7,20(r18)
	ctx.r7.u64 = PPC_LOAD_U32(r18.u32 + 20);
	// lwz r6,12(r18)
	ctx.r6.u64 = PPC_LOAD_U32(r18.u32 + 12);
	// lwz r5,16(r18)
	ctx.r5.u64 = PPC_LOAD_U32(r18.u32 + 16);
	// subf r4,r8,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r8.s64;
	// subf r3,r10,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r10.s64;
	// subf r7,r9,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r9.s64;
	// stw r4,20(r18)
	PPC_STORE_U32(r18.u32 + 20, ctx.r4.u32);
	// stw r3,12(r18)
	PPC_STORE_U32(r18.u32 + 12, ctx.r3.u32);
	// stw r7,16(r18)
	PPC_STORE_U32(r18.u32 + 16, ctx.r7.u32);
	// lwz r6,40(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lhz r4,22(r6)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + 22);
	// lhz r3,24(r6)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r6.u32 + 24);
	// lhz r5,20(r6)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + 20);
	// subf r11,r10,r5
	r11.s64 = ctx.r5.s64 - ctx.r10.s64;
	// subf r10,r9,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r9.s64;
	// sth r11,20(r6)
	PPC_STORE_U16(ctx.r6.u32 + 20, r11.u16);
	// subf r9,r8,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r8.s64;
	// sth r10,22(r6)
	PPC_STORE_U16(ctx.r6.u32 + 22, ctx.r10.u16);
	// sth r9,24(r6)
	PPC_STORE_U16(ctx.r6.u32 + 24, ctx.r9.u16);
loc_82EEA568:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r30.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82eeb2e8
	sub_82EEB2E8(ctx, base);
	// lhz r9,156(r29)
	ctx.r9.u64 = PPC_LOAD_U16(r29.u32 + 156);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// cmpw cr6,r28,r9
	cr6.compare<int32_t>(r28.s32, ctx.r9.s32, xer);
	// blt cr6,0x82eea4e0
	if (cr6.lt) goto loc_82EEA4E0;
loc_82EEA5A0:
	// addic. r24,r24,-1
	xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// bne 0x82eea484
	if (!cr0.eq) goto loc_82EEA484;
loc_82EEA5AC:
	// lwz r9,572(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 572);
	// lwz r11,60(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 60);
	// lwz r10,56(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lwz r28,32(r9)
	r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// stw r27,60(r18)
	PPC_STORE_U32(r18.u32 + 60, r27.u32);
	// ble cr6,0x82eea6b8
	if (!cr6.gt) goto loc_82EEA6B8;
	// mr r25,r11
	r25.u64 = r11.u64;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// ori r29,r11,16
	r29.u64 = r11.u64 | 16;
loc_82EEA5D8:
	// lwz r30,0(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82eea6ac
	if (cr6.eq) goto loc_82EEA6AC;
	// stw r27,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, r27.u32);
	// addi r11,r1,316
	r11.s64 = ctx.r1.s64 + 316;
	// stw r29,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, r29.u32);
	// mr r31,r27
	r31.u64 = r27.u64;
	// stw r11,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, r11.u32);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,308(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82eea648
	if (!cr6.gt) goto loc_82EEA648;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_82EEA628:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r31,184(r8)
	r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 184);
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// bne cr6,0x82eea648
	if (!cr6.eq) goto loc_82EEA648;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82eea628
	if (cr6.lt) goto loc_82EEA628;
loc_82EEA648:
	// lwz r11,312(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eea668
	if (!cr6.eq) goto loc_82EEA668;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r14,r15
	ctx.r3.u64 = PPC_LOAD_U32(r14.u32 + r15.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EEA668:
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
	// addi r31,r31,56
	r31.s64 = r31.s64 + 56;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x82eea690
	if (!cr6.eq) goto loc_82EEA690;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EEA690:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
loc_82EEA6AC:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// bne 0x82eea5d8
	if (!cr0.eq) goto loc_82EEA5D8;
loc_82EEA6B8:
	// lwz r25,572(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 572);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ed6ba8
	sub_82ED6BA8(ctx, base);
	// subf r11,r22,r23
	r11.s64 = r23.s64 - r22.s64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r10,r23
	cr6.compare<int32_t>(ctx.r10.s32, r23.s32, xer);
	// bge cr6,0x82eea7bc
	if (!cr6.lt) goto loc_82EEA7BC;
	// lwz r11,96(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 96);
	// addi r29,r18,88
	r29.s64 = r18.s64 + 88;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82eea938
	if (!cr6.gt) goto loc_82EEA938;
	// mr r26,r27
	r26.u64 = r27.u64;
loc_82EEA6EC:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r30,r26,r11
	r30.u64 = PPC_LOAD_U32(r26.u32 + r11.u32);
	// mr r31,r30
	r31.u64 = r30.u64;
	// bl 0x82eeb2c8
	sub_82EEB2C8(ctx, base);
	// add r10,r3,r30
	ctx.r10.u64 = ctx.r3.u64 + r30.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bge cr6,0x82eea7a4
	if (!cr6.lt) goto loc_82EEA7A4;
loc_82EEA710:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,184(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 184);
	// lhz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 32);
	// cmplwi cr6,r8,65535
	cr6.compare<uint32_t>(ctx.r8.u32, 65535, xer);
	// bne cr6,0x82eea744
	if (!cr6.eq) goto loc_82EEA744;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,184(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 184);
loc_82EEA744:
	// cmplw cr6,r11,r18
	cr6.compare<uint32_t>(r11.u32, r18.u32, xer);
	// bne cr6,0x82eea758
	if (!cr6.eq) goto loc_82EEA758;
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	// b 0x82eea78c
	goto loc_82EEA78C;
loc_82EEA758:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,88
	ctx.r3.s64 = r11.s64 + 88;
	// subf r28,r30,r31
	r28.s64 = r31.s64 - r30.s64;
	// bl 0x82f768e0
	sub_82F768E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f76698
	sub_82F76698(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// bge cr6,0x82eea7a4
	if (!cr6.lt) goto loc_82EEA7A4;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwzx r30,r26,r11
	r30.u64 = PPC_LOAD_U32(r26.u32 + r11.u32);
	// add r31,r28,r30
	r31.u64 = r28.u64 + r30.u64;
loc_82EEA78C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eeb2c8
	sub_82EEB2C8(ctx, base);
	// add r11,r3,r30
	r11.u64 = ctx.r3.u64 + r30.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82eea710
	if (cr6.lt) goto loc_82EEA710;
loc_82EEA7A4:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x82eea6ec
	if (cr6.lt) goto loc_82EEA6EC;
	// b 0x82eea938
	goto loc_82EEA938;
loc_82EEA7BC:
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// lwz r10,96(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 96);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// mr r11,r27
	r11.u64 = r27.u64;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r7,512
	ctx.r7.s64 = 512;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// bne cr6,0x82eea804
	if (!cr6.eq) goto loc_82EEA804;
	// lwz r10,92(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 92);
	// li r11,1
	r11.s64 = 1;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r27,96(r18)
	PPC_STORE_U32(r18.u32 + 96, r27.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// b 0x82eea848
	goto loc_82EEA848;
loc_82EEA804:
	// ble cr6,0x82eea84c
	if (!cr6.gt) goto loc_82EEA84C;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
	// lwz r9,100(r18)
	ctx.r9.u64 = PPC_LOAD_U32(r18.u32 + 100);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r18,92
	r11.s64 = r18.s64 + 92;
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r6,92(r18)
	ctx.r6.u64 = PPC_LOAD_U32(r18.u32 + 92);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r10,92(r18)
	PPC_STORE_U32(r18.u32 + 92, ctx.r10.u32);
	// stw r7,100(r18)
	PPC_STORE_U32(r18.u32 + 100, ctx.r7.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lwz r11,96(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 96);
	// stw r8,96(r18)
	PPC_STORE_U32(r18.u32 + 96, ctx.r8.u32);
loc_82EEA848:
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
loc_82EEA84C:
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// lwz r7,88(r18)
	ctx.r7.u64 = PPC_LOAD_U32(r18.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r8,88(r18)
	PPC_STORE_U32(r18.u32 + 88, ctx.r8.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// ble cr6,0x82eea914
	if (!cr6.gt) goto loc_82EEA914;
	// mr r26,r27
	r26.u64 = r27.u64;
loc_82EEA86C:
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r28,r10,1
	r28.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwzx r30,r9,r26
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + r26.u32);
	// mr r31,r30
	r31.u64 = r30.u64;
	// beq cr6,0x82eea88c
	if (cr6.eq) goto loc_82EEA88C;
	// li r11,512
	r11.s64 = 512;
loc_82EEA88C:
	// add r29,r11,r30
	r29.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bge cr6,0x82eea8e8
	if (!cr6.lt) goto loc_82EEA8E8;
loc_82EEA898:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,184(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 184);
	// lhz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 32);
	// cmplwi cr6,r8,65535
	cr6.compare<uint32_t>(ctx.r8.u32, 65535, xer);
	// bne cr6,0x82eea8cc
	if (!cr6.eq) goto loc_82EEA8CC;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,184(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 184);
loc_82EEA8CC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,88
	ctx.r3.s64 = r11.s64 + 88;
	// bl 0x82f768e0
	sub_82F768E0(ctx, base);
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// blt cr6,0x82eea898
	if (cr6.lt) goto loc_82EEA898;
loc_82EEA8E8:
	// li r6,39
	ctx.r6.s64 = 39;
	// lwzx r3,r14,r15
	ctx.r3.u64 = PPC_LOAD_U32(r14.u32 + r15.u32);
	// li r5,512
	ctx.r5.s64 = 512;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82eea86c
	if (cr6.lt) goto loc_82EEA86C;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82EEA914:
	// rlwinm r11,r9,0,0,0
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82eea938
	if (!cr6.eq) goto loc_82EEA938;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r14,r15
	ctx.r3.u64 = PPC_LOAD_U32(r14.u32 + r15.u32);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EEA938:
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ed53f0
	sub_82ED53F0(ctx, base);
	// lwz r10,100(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 100);
	// addi r3,r18,92
	ctx.r3.s64 = r18.s64 + 92;
	// rlwinm r11,r10,0,0,0
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82eea9b8
	if (!cr6.eq) goto loc_82EEA9B8;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// rlwinm r9,r11,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// or r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 | r11.u64;
	// rlwinm r7,r8,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r5,r6,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rlwinm r11,r4,30,2,31
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// or r9,r11,r4
	ctx.r9.u64 = r11.u64 | ctx.r4.u64;
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r11,r8,r9
	r11.u64 = ctx.r8.u64 | ctx.r9.u64;
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// cmpwi cr6,r6,1
	cr6.compare<int32_t>(ctx.r6.s32, 1, xer);
	// bge cr6,0x82eea9a0
	if (!cr6.lt) goto loc_82EEA9A0;
	// addi r5,r3,12
	ctx.r5.s64 = ctx.r3.s64 + 12;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82eea9b0
	goto loc_82EEA9B0;
loc_82EEA9A0:
	// clrlwi r11,r10,2
	r11.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// bge cr6,0x82eea9b8
	if (!cr6.lt) goto loc_82EEA9B8;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82EEA9B0:
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82eaec28
	sub_82EAEC28(ctx, base);
loc_82EEA9B8:
	// li r11,1
	r11.s64 = 1;
	// cmpwi cr6,r19,1
	cr6.compare<int32_t>(r19.s32, 1, xer);
	// ble cr6,0x82eea9e8
	if (!cr6.gt) goto loc_82EEA9E8;
	// addi r10,r21,4
	ctx.r10.s64 = r21.s64 + 4;
loc_82EEA9C8:
	// lbz r9,36(r18)
	ctx.r9.u64 = PPC_LOAD_U8(r18.u32 + 36);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r19
	cr6.compare<int32_t>(r11.s32, r19.s32, xer);
	// stb r7,36(r8)
	PPC_STORE_U8(ctx.r8.u32 + 36, ctx.r7.u8);
	// blt cr6,0x82eea9c8
	if (cr6.lt) goto loc_82EEA9C8;
loc_82EEA9E8:
	// lwzx r3,r14,r15
	ctx.r3.u64 = PPC_LOAD_U32(r14.u32 + r15.u32);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r21,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r21.u32);
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// bne cr6,0x82eeaa10
	if (!cr6.eq) goto loc_82EEAA10;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EEAA10:
	// lwzx r3,r14,r15
	ctx.r3.u64 = PPC_LOAD_U32(r14.u32 + r15.u32);
loc_82EEAA14:
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r16,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r16.u32);
	// cmplw cr6,r16,r11
	cr6.compare<uint32_t>(r16.u32, r11.u32, xer);
	// bne cr6,0x82eeaa38
	if (!cr6.eq) goto loc_82EEAA38;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EEAA38:
	// lwz r11,168(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eeaa5c
	if (!cr6.eq) goto loc_82EEAA5C;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r14,r15
	ctx.r3.u64 = PPC_LOAD_U32(r14.u32 + r15.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EEAA5C:
	// lwzx r3,r14,r15
	ctx.r3.u64 = PPC_LOAD_U32(r14.u32 + r15.u32);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
loc_82EEAA6C:
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// bne cr6,0x82eeaa84
	if (!cr6.eq) goto loc_82EEAA84;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EEAA84:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_82EEAA90"))) PPC_WEAK_FUNC(sub_82EEAA90);
PPC_FUNC_IMPL(__imp__sub_82EEAA90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b0c
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// addi r28,r22,40
	r28.s64 = r22.s64 + 40;
	// lbz r11,38(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 38);
	// rlwinm r11,r11,26,6,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x3FFFFFF;
	// mr r23,r11
	r23.u64 = r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82eeaac0
	if (!cr6.eq) goto loc_82EEAAC0;
	// addi r28,r22,52
	r28.s64 = r22.s64 + 52;
loc_82EEAAC0:
	// lbz r11,37(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 37);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// clrlwi r10,r11,26
	ctx.r10.u64 = r11.u32 & 0x3F;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// stb r10,37(r26)
	PPC_STORE_U8(r26.u32 + 37, ctx.r10.u8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r27,4(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// bl 0x82ee9c08
	sub_82EE9C08(ctx, base);
	// lbz r9,38(r26)
	ctx.r9.u64 = PPC_LOAD_U8(r26.u32 + 38);
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r30,r27
	r30.u64 = r27.u64;
	// rlwinm r21,r9,28,30,31
	r21.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x3;
	// cmpw cr6,r27,r8
	cr6.compare<int32_t>(r27.s32, ctx.r8.s32, xer);
	// bge cr6,0x82eeab6c
	if (!cr6.lt) goto loc_82EEAB6C;
	// rlwinm r25,r23,4,26,27
	r25.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 4) & 0x30;
	// rlwinm r24,r23,6,0,25
	r24.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r29,r27,2,0,29
	r29.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
loc_82EEAB08:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// lwzx r31,r11,r29
	r31.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lbz r10,38(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 38);
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// or r8,r9,r25
	ctx.r8.u64 = ctx.r9.u64 | r25.u64;
	// clrlwi r7,r8,26
	ctx.r7.u64 = ctx.r8.u32 & 0x3F;
	// or r6,r7,r24
	ctx.r6.u64 = ctx.r7.u64 | r24.u64;
	// stb r6,38(r31)
	PPC_STORE_U8(r31.u32 + 38, ctx.r6.u8);
	// beq cr6,0x82eeab48
	if (cr6.eq) goto loc_82EEAB48;
	// extsb r11,r21
	r11.s64 = r21.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82eeab48
	if (!cr6.eq) goto loc_82EEAB48;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82ee7ed0
	sub_82EE7ED0(ctx, base);
loc_82EEAB48:
	// lbz r10,36(r26)
	ctx.r10.u64 = PPC_LOAD_U8(r26.u32 + 36);
	// subf r11,r27,r30
	r11.s64 = r30.s64 - r27.s64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// stb r11,36(r31)
	PPC_STORE_U8(r31.u32 + 36, r11.u8);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpw cr6,r30,r9
	cr6.compare<int32_t>(r30.s32, ctx.r9.s32, xer);
	// blt cr6,0x82eeab08
	if (cr6.lt) goto loc_82EEAB08;
loc_82EEAB6C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_82EEAB78"))) PPC_WEAK_FUNC(sub_82EEAB78);
PPC_FUNC_IMPL(__imp__sub_82EEAB78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,184(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 184);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eeabd0
	if (cr6.eq) goto loc_82EEABD0;
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// addic. r30,r11,-1
	xer.ca = r11.u32 > 0;
	r30.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x82eeabd0
	if (cr0.lt) goto loc_82EEABD0;
	// rlwinm r31,r30,2,0,29
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82EEABA4:
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lbz r10,37(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 37);
	// rlwinm r9,r10,0,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82eeabc4
	if (cr6.eq) goto loc_82EEABC4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eeaa90
	sub_82EEAA90(ctx, base);
loc_82EEABC4:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// bge 0x82eeaba4
	if (!cr0.lt) goto loc_82EEABA4;
loc_82EEABD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EEABD8"))) PPC_WEAK_FUNC(sub_82EEABD8);
PPC_FUNC_IMPL(__imp__sub_82EEABD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r9,132(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r4,184(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 184);
	// lwz r5,184(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	// beq cr6,0x82eeac28
	if (cr6.eq) goto loc_82EEAC28;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// bl 0x82ed5388
	sub_82ED5388(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82EEAC28:
	// bl 0x82ee8d28
	sub_82EE8D28(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EEAC40"))) PPC_WEAK_FUNC(sub_82EEAC40);
PPC_FUNC_IMPL(__imp__sub_82EEAC40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// li r23,0
	r23.s64 = 0;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// lwz r26,184(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 184);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// mr r25,r23
	r25.u64 = r23.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// ble cr6,0x82eeaddc
	if (!cr6.gt) goto loc_82EEADDC;
	// mr r27,r23
	r27.u64 = r23.u64;
loc_82EEAC8C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r3,32(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 32);
	// cmplw cr6,r26,r3
	cr6.compare<uint32_t>(r26.u32, ctx.r3.u32, xer);
	// lwzx r31,r27,r11
	r31.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// beq cr6,0x82eead84
	if (cr6.eq) goto loc_82EEAD84;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82ef49b0
	sub_82EF49B0(ctx, base);
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eeace8
	if (cr6.eq) goto loc_82EEACE8;
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82eeace8
	if (!cr6.eq) goto loc_82EEACE8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EEACE8:
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r23
	r30.u64 = r23.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82eeadc4
	if (!cr6.gt) goto loc_82EEADC4;
	// mr r31,r23
	r31.u64 = r23.u64;
loc_82EEAD18:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lbz r10,216(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 216);
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// beq cr6,0x82eead6c
	if (cr6.eq) goto loc_82EEAD6C;
	// rotlwi r11,r4,0
	r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x82eead6c
	if (cr6.eq) goto loc_82EEAD6C;
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x82eead6c
	if (cr6.eq) goto loc_82EEAD6C;
	// lbz r11,216(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 216);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x82eead6c
	if (cr6.eq) goto loc_82EEAD6C;
	// lwz r11,184(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// lwz r10,184(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 184);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82eead6c
	if (cr6.eq) goto loc_82EEAD6C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// bl 0x82eeabd8
	sub_82EEABD8(ctx, base);
loc_82EEAD6C:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82eead18
	if (cr6.lt) goto loc_82EEAD18;
	// b 0x82eeadc4
	goto loc_82EEADC4;
loc_82EEAD84:
	// bl 0x82ef49b0
	sub_82EF49B0(ctx, base);
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eeadc4
	if (cr6.eq) goto loc_82EEADC4;
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82eeadc4
	if (!cr6.eq) goto loc_82EEADC4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EEADC4:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x82eeac8c
	if (cr6.lt) goto loc_82EEAC8C;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82EEADDC:
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eeae04
	if (!cr6.eq) goto loc_82EEAE04;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EEAE04:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82EEAE10"))) PPC_WEAK_FUNC(sub_82EEAE10);
PPC_FUNC_IMPL(__imp__sub_82EEAE10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stw r3,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r3.u32);
	// lbz r29,216(r3)
	r29.u64 = PPC_LOAD_U8(ctx.r3.u32 + 216);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// cmpw cr6,r29,r25
	cr6.compare<int32_t>(r29.s32, r25.s32, xer);
	// beq cr6,0x82eeb2bc
	if (cr6.eq) goto loc_82EEB2BC;
	// li r24,0
	r24.s64 = 0;
	// li r27,1
	r27.s64 = 1;
	// cmpwi cr6,r25,7
	cr6.compare<int32_t>(r25.s32, 7, xer);
	// beq cr6,0x82eeae54
	if (cr6.eq) goto loc_82EEAE54;
	// cmpwi cr6,r25,6
	cr6.compare<int32_t>(r25.s32, 6, xer);
	// mr r11,r27
	r11.u64 = r27.u64;
	// bne cr6,0x82eeae58
	if (!cr6.eq) goto loc_82EEAE58;
loc_82EEAE54:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_82EEAE58:
	// clrlwi r28,r11,24
	r28.u64 = r11.u32 & 0xFF;
	// cmpwi cr6,r29,7
	cr6.compare<int32_t>(r29.s32, 7, xer);
	// beq cr6,0x82eeae70
	if (cr6.eq) goto loc_82EEAE70;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(r29.s32, 6, xer);
	// mr r11,r27
	r11.u64 = r27.u64;
	// bne cr6,0x82eeae74
	if (!cr6.eq) goto loc_82EEAE74;
loc_82EEAE70:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_82EEAE74:
	// clrlwi r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	// clrlwi r30,r11,24
	r30.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eeae9c
	if (cr6.eq) goto loc_82EEAE9C;
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82eeae9c
	if (!cr6.eq) goto loc_82EEAE9C;
	// lwz r11,488(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 488);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eeb2bc
	if (cr6.eq) goto loc_82EEB2BC;
loc_82EEAE9C:
	// bl 0x82edd548
	sub_82EDD548(ctx, base);
	// lwz r3,388(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r31,8(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82eeb274
	if (cr6.eq) goto loc_82EEB274;
	// addi r11,r29,-7
	r11.s64 = r29.s64 + -7;
	// addi r10,r25,-7
	ctx.r10.s64 = r25.s64 + -7;
	// cntlzw r9,r11
	ctx.r9.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmpw cr6,r7,r6
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, xer);
	// beq cr6,0x82eeb274
	if (cr6.eq) goto loc_82EEB274;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r24.u32);
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r24,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r24.u32);
	// addi r9,r1,140
	ctx.r9.s64 = ctx.r1.s64 + 140;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r24.u32);
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// addi r8,r1,220
	ctx.r8.s64 = ctx.r1.s64 + 220;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r11.u32);
	// ori r6,r10,1
	ctx.r6.u64 = ctx.r10.u64 | 1;
	// stw r8,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r8.u32);
	// li r5,512
	ctx.r5.s64 = 512;
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r11.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stb r27,140(r31)
	PPC_STORE_U8(r31.u32 + 140, r27.u8);
	// stb r24,141(r31)
	PPC_STORE_U8(r31.u32 + 141, r24.u8);
	// lwz r3,388(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// bl 0x82ee7988
	sub_82EE7988(ctx, base);
	// lwz r4,388(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// cmpwi cr6,r25,7
	cr6.compare<int32_t>(r25.s32, 7, xer);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x82eeaf48
	if (cr6.eq) goto loc_82EEAF48;
	// bl 0x82ee7560
	sub_82EE7560(ctx, base);
	// b 0x82eeaf4c
	goto loc_82EEAF4C;
loc_82EEAF48:
	// bl 0x82ee85d0
	sub_82EE85D0(ctx, base);
loc_82EEAF4C:
	// lwz r4,388(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r11,184(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// addi r3,r11,88
	ctx.r3.s64 = r11.s64 + 88;
	// bl 0x82ee7248
	sub_82EE7248(ctx, base);
	// cmpwi cr6,r29,7
	cr6.compare<int32_t>(r29.s32, 7, xer);
	// beq cr6,0x82eeaf90
	if (cr6.eq) goto loc_82EEAF90;
	// lwz r11,388(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 184);
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// ble cr6,0x82eeaf90
	if (!cr6.gt) goto loc_82EEAF90;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lbz r10,37(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// rlwimi r10,r27,6,0,25
	ctx.r10.u64 = (__builtin_rotateleft32(r27.u32, 6) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
	// stb r10,37(r11)
	PPC_STORE_U8(r11.u32 + 37, ctx.r10.u8);
loc_82EEAF90:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,388(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// bl 0x82ee8540
	sub_82EE8540(ctx, base);
	// addi r11,r1,81
	r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r30,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r30.u8);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,388(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// bl 0x82ee8098
	sub_82EE8098(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r4,388(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ee7388
	sub_82EE7388(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,388(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// bl 0x82eeac40
	sub_82EEAC40(ctx, base);
	// stb r27,141(r31)
	PPC_STORE_U8(r31.u32 + 141, r27.u8);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r28,r24
	r28.u64 = r24.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82eeb09c
	if (!cr6.gt) goto loc_82EEB09C;
	// mr r29,r24
	r29.u64 = r24.u64;
loc_82EEAFFC:
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// lwzx r30,r29,r10
	r30.u64 = PPC_LOAD_U32(r29.u32 + ctx.r10.u32);
	// stw r9,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r9.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f00d68
	sub_82F00D68(ctx, base);
	// lwz r8,132(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addic. r11,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	r11.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// bne 0x82eeb04c
	if (!cr0.eq) goto loc_82EEB04C;
	// lbz r11,140(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82eeb04c
	if (!cr6.eq) goto loc_82EEB04C;
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82eeb04c
	if (cr6.eq) goto loc_82EEB04C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ed5370
	sub_82ED5370(ctx, base);
loc_82EEB04C:
	// lhz r11,4(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eeb088
	if (cr6.eq) goto loc_82EEB088;
	// lhz r11,6(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r30)
	PPC_STORE_U16(r30.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82eeb088
	if (!cr6.eq) goto loc_82EEB088;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EEB088:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82eeaffc
	if (cr6.lt) goto loc_82EEAFFC;
loc_82EEB09C:
	// lwz r4,388(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// cmpwi cr6,r25,7
	cr6.compare<int32_t>(r25.s32, 7, xer);
	// beq cr6,0x82eeb120
	if (cr6.eq) goto loc_82EEB120;
	// lwz r11,96(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// mr r28,r24
	r28.u64 = r24.u64;
	// addi r29,r4,92
	r29.s64 = ctx.r4.s64 + 92;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82eeb120
	if (!cr6.gt) goto loc_82EEB120;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_82EEB0C0:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lbz r10,216(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 216);
	// add r9,r11,r30
	ctx.r9.u64 = r11.u64 + r30.u64;
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lbz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + r11.u64;
	// beq cr6,0x82eeb10c
	if (cr6.eq) goto loc_82EEB10C;
	// lbz r11,216(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 216);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x82eeb10c
	if (cr6.eq) goto loc_82EEB10C;
	// lwz r11,184(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// lwz r10,184(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 184);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82eeb10c
	if (cr6.eq) goto loc_82EEB10C;
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// bl 0x82eeabd8
	sub_82EEABD8(ctx, base);
	// lwz r4,388(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
loc_82EEB10C:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82eeb0c0
	if (cr6.lt) goto loc_82EEB0C0;
loc_82EEB120:
	// lwz r11,184(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,88
	ctx.r3.s64 = r11.s64 + 88;
	// bl 0x82f76fb8
	sub_82F76FB8(ctx, base);
	// cmpwi cr6,r25,7
	cr6.compare<int32_t>(r25.s32, 7, xer);
	// bne cr6,0x82eeb1a8
	if (!cr6.eq) goto loc_82EEB1A8;
	// lwz r11,388(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// lfs f1,400(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 400);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r11,224
	ctx.r4.s64 = r11.s64 + 224;
	// bl 0x83207700
	sub_83207700(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r24.u8);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stw r9,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,388
	ctx.r4.s64 = ctx.r1.s64 + 388;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lwz r11,32(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,388
	ctx.r3.s64 = ctx.r1.s64 + 388;
	// bl 0x82eeec18
	sub_82EEEC18(ctx, base);
	// lwz r4,388(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// bl 0x82eed3b0
	sub_82EED3B0(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// stw r10,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r10.u32);
loc_82EEB1A8:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,388(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ed9ea0
	sub_82ED9EA0(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// stb r24,140(r31)
	PPC_STORE_U8(r31.u32 + 140, r24.u8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82eeb1e0
	if (!cr6.eq) goto loc_82EEB1E0;
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82eeb1e0
	if (cr6.eq) goto loc_82EEB1E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ed5370
	sub_82ED5370(ctx, base);
loc_82EEB1E0:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eeb20c
	if (!cr6.eq) goto loc_82EEB20C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EEB20C:
	// lwz r11,216(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eeb238
	if (!cr6.eq) goto loc_82EEB238;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EEB238:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eeb2b4
	if (!cr6.eq) goto loc_82EEB2B4;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
	// lwz r3,388(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// bl 0x82edd568
	sub_82EDD568(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831b0b64
	return;
loc_82EEB274:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// stb r28,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r28.u8);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// bl 0x82ee8098
	sub_82EE8098(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82eeb2b4
	if (cr6.eq) goto loc_82EEB2B4;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,388(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ed9ea0
	sub_82ED9EA0(ctx, base);
loc_82EEB2B4:
	// lwz r3,388(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// bl 0x82edd568
	sub_82EDD568(ctx, base);
loc_82EEB2BC:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82EEB2C8"))) PPC_WEAK_FUNC(sub_82EEB2C8);
PPC_FUNC_IMPL(__imp__sub_82EEB2C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82eeb2e0
	if (!cr6.eq) goto loc_82EEB2E0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
loc_82EEB2E0:
	// li r3,512
	ctx.r3.s64 = 512;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EEB2E8"))) PPC_WEAK_FUNC(sub_82EEB2E8);
PPC_FUNC_IMPL(__imp__sub_82EEB2E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,40(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// ble cr6,0x82eeb308
	if (!cr6.gt) goto loc_82EEB308;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82EEB308:
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x82eeb31c
	if (cr6.gt) goto loc_82EEB31C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82EEB31C:
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lwz r6,40(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// lwz r7,12(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lhz r8,24(r6)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r6.u32 + 24);
	// lhz r11,22(r6)
	r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 22);
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// lhz r11,20(r6)
	r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 20);
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// add r11,r8,r7
	r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// sth r10,20(r6)
	PPC_STORE_U16(ctx.r6.u32 + 20, ctx.r10.u16);
	// sth r5,22(r6)
	PPC_STORE_U16(ctx.r6.u32 + 22, ctx.r5.u16);
	// sth r11,24(r6)
	PPC_STORE_U16(ctx.r6.u32 + 24, r11.u16);
	// lwz r7,40(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r10,20(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 20);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x82eeb39c
	if (cr6.gt) goto loc_82EEB39C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82EEB39C:
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EEB3A8"))) PPC_WEAK_FUNC(sub_82EEB3A8);
PPC_FUNC_IMPL(__imp__sub_82EEB3A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// addic. r8,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r8.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// lis r11,0
	r11.s64 = 0;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r6,r11,65535
	ctx.r6.u64 = r11.u64 | 65535;
loc_82EEB3C0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eeb414
	if (!cr6.eq) goto loc_82EEB414;
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// clrlwi r5,r9,16
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r5,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r5.u16);
	// cmpw cr6,r8,r5
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, xer);
	// bge cr6,0x82eeb414
	if (!cr6.lt) goto loc_82EEB414;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82EEB3F0:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// lhz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// blt cr6,0x82eeb3f0
	if (cr6.lt) goto loc_82EEB3F0;
loc_82EEB414:
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// bge 0x82eeb3c0
	if (!cr0.lt) goto loc_82EEB3C0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EEB428"))) PPC_WEAK_FUNC(sub_82EEB428);
PPC_FUNC_IMPL(__imp__sub_82EEB428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r28,204(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 204);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82eeb4f4
	if (cr6.eq) goto loc_82EEB4F4;
	// lhz r11,12(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 12);
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82eeb4f4
	if (cr0.lt) goto loc_82EEB4F4;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,-14788
	r25.s64 = r11.s64 + -14788;
	// addi r24,r10,-15248
	r24.s64 = ctx.r10.s64 + -15248;
loc_82EEB464:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eeb4e8
	if (cr6.eq) goto loc_82EEB4E8;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,24
	r31.s64 = 24;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eeb4a4
	if (!cr6.lt) goto loc_82EEB4A4;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEB4A4:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eeb4e8
	if (!cr6.lt) goto loc_82EEB4E8;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEB4E8:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82eeb464
	if (!cr0.lt) goto loc_82EEB464;
loc_82EEB4F4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EEB500"))) PPC_WEAK_FUNC(sub_82EEB500);
PPC_FUNC_IMPL(__imp__sub_82EEB500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r25,r11,-14788
	r25.s64 = r11.s64 + -14788;
	// addi r24,r10,-15236
	r24.s64 = ctx.r10.s64 + -15236;
	// lwz r28,204(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 204);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82eeb5cc
	if (cr6.eq) goto loc_82EEB5CC;
	// lhz r11,12(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 12);
	// addic. r27,r11,-1
	xer.ca = r11.u32 > 0;
	r27.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// blt 0x82eeb5cc
	if (cr0.lt) goto loc_82EEB5CC;
	// rlwinm r29,r27,2,0,29
	r29.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
loc_82EEB53C:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eeb5c0
	if (cr6.eq) goto loc_82EEB5C0;
	// lwz r31,0(r13)
	r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r30,24
	r30.s64 = 24;
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eeb57c
	if (!cr6.lt) goto loc_82EEB57C;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEB57C:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eeb5c0
	if (!cr6.lt) goto loc_82EEB5C0;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEB5C0:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82eeb53c
	if (!cr0.lt) goto loc_82EEB53C;
loc_82EEB5CC:
	// lhz r11,156(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 156);
	// addi r29,r26,152
	r29.s64 = r26.s64 + 152;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eeb65c
	if (cr6.eq) goto loc_82EEB65C;
	// lwz r31,0(r13)
	r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r30,24
	r30.s64 = 24;
loc_82EEB5E4:
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eeb60c
	if (!cr6.lt) goto loc_82EEB60C;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEB60C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eeb650
	if (!cr6.lt) goto loc_82EEB650;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEB650:
	// lhz r11,4(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82eeb5e4
	if (!cr6.eq) goto loc_82EEB5E4;
loc_82EEB65C:
	// lwz r11,164(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 164);
	// addi r29,r26,160
	r29.s64 = r26.s64 + 160;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82eeb6ec
	if (cr6.eq) goto loc_82EEB6EC;
	// lwz r31,0(r13)
	r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r30,24
	r30.s64 = 24;
loc_82EEB674:
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eeb69c
	if (!cr6.lt) goto loc_82EEB69C;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEB69C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eeb6e0
	if (!cr6.lt) goto loc_82EEB6E0;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEB6E0:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82eeb674
	if (!cr6.eq) goto loc_82EEB674;
loc_82EEB6EC:
	// lhz r11,508(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 508);
	// addi r29,r26,504
	r29.s64 = r26.s64 + 504;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eeb77c
	if (cr6.eq) goto loc_82EEB77C;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,24
	r31.s64 = 24;
loc_82EEB704:
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eeb72c
	if (!cr6.lt) goto loc_82EEB72C;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEB72C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eeb770
	if (!cr6.lt) goto loc_82EEB770;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEB770:
	// lhz r11,4(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82eeb704
	if (!cr6.eq) goto loc_82EEB704;
loc_82EEB77C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EEB788"))) PPC_WEAK_FUNC(sub_82EEB788);
PPC_FUNC_IMPL(__imp__sub_82EEB788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r28,204(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 204);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82eeb854
	if (cr6.eq) goto loc_82EEB854;
	// lhz r11,12(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 12);
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82eeb854
	if (cr0.lt) goto loc_82EEB854;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,-14788
	r25.s64 = r11.s64 + -14788;
	// addi r24,r10,-15224
	r24.s64 = ctx.r10.s64 + -15224;
loc_82EEB7C4:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eeb848
	if (cr6.eq) goto loc_82EEB848;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,24
	r31.s64 = 24;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eeb804
	if (!cr6.lt) goto loc_82EEB804;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEB804:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eeb848
	if (!cr6.lt) goto loc_82EEB848;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEB848:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82eeb7c4
	if (!cr0.lt) goto loc_82EEB7C4;
loc_82EEB854:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EEB860"))) PPC_WEAK_FUNC(sub_82EEB860);
PPC_FUNC_IMPL(__imp__sub_82EEB860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r28,204(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 204);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82eeb92c
	if (cr6.eq) goto loc_82EEB92C;
	// lhz r11,12(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 12);
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82eeb92c
	if (cr0.lt) goto loc_82EEB92C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,-14788
	r25.s64 = r11.s64 + -14788;
	// addi r24,r10,-15208
	r24.s64 = ctx.r10.s64 + -15208;
loc_82EEB89C:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eeb920
	if (cr6.eq) goto loc_82EEB920;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,24
	r31.s64 = 24;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eeb8dc
	if (!cr6.lt) goto loc_82EEB8DC;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEB8DC:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eeb920
	if (!cr6.lt) goto loc_82EEB920;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEB920:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82eeb89c
	if (!cr0.lt) goto loc_82EEB89C;
loc_82EEB92C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EEB938"))) PPC_WEAK_FUNC(sub_82EEB938);
PPC_FUNC_IMPL(__imp__sub_82EEB938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r3,496
	r28.s64 = ctx.r3.s64 + 496;
	// stw r3,12(r27)
	PPC_STORE_U32(r27.u32 + 12, ctx.r3.u32);
	// lhz r11,500(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 500);
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82eeba00
	if (cr0.lt) goto loc_82EEBA00;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,-14788
	r25.s64 = r11.s64 + -14788;
	// addi r24,r10,-15196
	r24.s64 = ctx.r10.s64 + -15196;
loc_82EEB970:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eeb9f4
	if (cr6.eq) goto loc_82EEB9F4;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,24
	r31.s64 = 24;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eeb9b0
	if (!cr6.lt) goto loc_82EEB9B0;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEB9B0:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eeb9f4
	if (!cr6.lt) goto loc_82EEB9F4;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEB9F4:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82eeb970
	if (!cr0.lt) goto loc_82EEB970;
loc_82EEBA00:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eeb3a8
	sub_82EEB3A8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EEBA10"))) PPC_WEAK_FUNC(sub_82EEBA10);
PPC_FUNC_IMPL(__imp__sub_82EEBA10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r3,496
	r28.s64 = ctx.r3.s64 + 496;
	// stw r3,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r3.u32);
	// lhz r11,500(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 500);
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82eebad8
	if (cr0.lt) goto loc_82EEBAD8;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,-14788
	r25.s64 = r11.s64 + -14788;
	// addi r24,r10,-15184
	r24.s64 = ctx.r10.s64 + -15184;
loc_82EEBA48:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eebacc
	if (cr6.eq) goto loc_82EEBACC;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,24
	r31.s64 = 24;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eeba88
	if (!cr6.lt) goto loc_82EEBA88;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEBA88:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eebacc
	if (!cr6.lt) goto loc_82EEBACC;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEBACC:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82eeba48
	if (!cr0.lt) goto loc_82EEBA48;
loc_82EEBAD8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eeb3a8
	sub_82EEB3A8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EEBAE8"))) PPC_WEAK_FUNC(sub_82EEBAE8);
PPC_FUNC_IMPL(__imp__sub_82EEBAE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r3,496
	r28.s64 = ctx.r3.s64 + 496;
	// stw r3,16(r27)
	PPC_STORE_U32(r27.u32 + 16, ctx.r3.u32);
	// lhz r11,500(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 500);
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82eebbb0
	if (cr0.lt) goto loc_82EEBBB0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,-14788
	r25.s64 = r11.s64 + -14788;
	// addi r24,r10,-15172
	r24.s64 = ctx.r10.s64 + -15172;
loc_82EEBB20:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eebba4
	if (cr6.eq) goto loc_82EEBBA4;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,24
	r31.s64 = 24;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eebb60
	if (!cr6.lt) goto loc_82EEBB60;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEBB60:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eebba4
	if (!cr6.lt) goto loc_82EEBBA4;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEBBA4:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82eebb20
	if (!cr0.lt) goto loc_82EEBB20;
loc_82EEBBB0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eeb3a8
	sub_82EEB3A8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EEBBC0"))) PPC_WEAK_FUNC(sub_82EEBBC0);
PPC_FUNC_IMPL(__imp__sub_82EEBBC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r3,496
	r28.s64 = ctx.r3.s64 + 496;
	// stw r3,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r3.u32);
	// lhz r11,500(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 500);
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82eebc88
	if (cr0.lt) goto loc_82EEBC88;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,-14788
	r25.s64 = r11.s64 + -14788;
	// addi r24,r10,-15160
	r24.s64 = ctx.r10.s64 + -15160;
loc_82EEBBF8:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eebc7c
	if (cr6.eq) goto loc_82EEBC7C;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,24
	r31.s64 = 24;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eebc38
	if (!cr6.lt) goto loc_82EEBC38;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEBC38:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eebc7c
	if (!cr6.lt) goto loc_82EEBC7C;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEBC7C:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82eebbf8
	if (!cr0.lt) goto loc_82EEBBF8;
loc_82EEBC88:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eeb3a8
	sub_82EEB3A8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EEBC98"))) PPC_WEAK_FUNC(sub_82EEBC98);
PPC_FUNC_IMPL(__imp__sub_82EEBC98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r8,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r8.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_82EEBCA8:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eebcf8
	if (!cr6.eq) goto loc_82EEBCF8;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// bge cr6,0x82eebcf8
	if (!cr6.lt) goto loc_82EEBCF8;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82EEBCD4:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(r11.s32, ctx.r5.s32, xer);
	// blt cr6,0x82eebcd4
	if (cr6.lt) goto loc_82EEBCD4;
loc_82EEBCF8:
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// bge 0x82eebca8
	if (!cr0.lt) goto loc_82EEBCA8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EEBD08"))) PPC_WEAK_FUNC(sub_82EEBD08);
PPC_FUNC_IMPL(__imp__sub_82EEBD08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// addic. r8,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r8.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// lis r11,0
	r11.s64 = 0;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r6,r11,65535
	ctx.r6.u64 = r11.u64 | 65535;
loc_82EEBD20:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eebd74
	if (!cr6.eq) goto loc_82EEBD74;
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// clrlwi r5,r9,16
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r5,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r5.u16);
	// cmpw cr6,r8,r5
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, xer);
	// bge cr6,0x82eebd74
	if (!cr6.lt) goto loc_82EEBD74;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82EEBD50:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// lhz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// blt cr6,0x82eebd50
	if (cr6.lt) goto loc_82EEBD50;
loc_82EEBD74:
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// bge 0x82eebd20
	if (!cr0.lt) goto loc_82EEBD20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EEBD88"))) PPC_WEAK_FUNC(sub_82EEBD88);
PPC_FUNC_IMPL(__imp__sub_82EEBD88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,244(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r3,240
	r28.s64 = ctx.r3.s64 + 240;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82eebe4c
	if (cr0.lt) goto loc_82EEBE4C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,-14788
	r25.s64 = r11.s64 + -14788;
	// addi r24,r10,-15148
	r24.s64 = ctx.r10.s64 + -15148;
loc_82EEBDBC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eebe40
	if (cr6.eq) goto loc_82EEBE40;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,24
	r31.s64 = 24;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eebdfc
	if (!cr6.lt) goto loc_82EEBDFC;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEBDFC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eebe40
	if (!cr6.lt) goto loc_82EEBE40;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEBE40:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82eebdbc
	if (!cr0.lt) goto loc_82EEBDBC;
loc_82EEBE4C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eebc98
	sub_82EEBC98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EEBE60"))) PPC_WEAK_FUNC(sub_82EEBE60);
PPC_FUNC_IMPL(__imp__sub_82EEBE60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,244(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r3,240
	r28.s64 = ctx.r3.s64 + 240;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82eebf24
	if (cr0.lt) goto loc_82EEBF24;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,-14788
	r25.s64 = r11.s64 + -14788;
	// addi r24,r10,-15136
	r24.s64 = ctx.r10.s64 + -15136;
loc_82EEBE94:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eebf18
	if (cr6.eq) goto loc_82EEBF18;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,24
	r31.s64 = 24;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eebed4
	if (!cr6.lt) goto loc_82EEBED4;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEBED4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eebf18
	if (!cr6.lt) goto loc_82EEBF18;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEBF18:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82eebe94
	if (!cr0.lt) goto loc_82EEBE94;
loc_82EEBF24:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eebc98
	sub_82EEBC98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EEBF38"))) PPC_WEAK_FUNC(sub_82EEBF38);
PPC_FUNC_IMPL(__imp__sub_82EEBF38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,256(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r3,252
	r28.s64 = ctx.r3.s64 + 252;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82eebffc
	if (cr0.lt) goto loc_82EEBFFC;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,-14788
	r25.s64 = r11.s64 + -14788;
	// addi r24,r10,-15248
	r24.s64 = ctx.r10.s64 + -15248;
loc_82EEBF6C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eebff0
	if (cr6.eq) goto loc_82EEBFF0;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,24
	r31.s64 = 24;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eebfac
	if (!cr6.lt) goto loc_82EEBFAC;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEBFAC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eebff0
	if (!cr6.lt) goto loc_82EEBFF0;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEBFF0:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82eebf6c
	if (!cr0.lt) goto loc_82EEBF6C;
loc_82EEBFFC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eebc98
	sub_82EEBC98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EEC010"))) PPC_WEAK_FUNC(sub_82EEC010);
PPC_FUNC_IMPL(__imp__sub_82EEC010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,256(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r3,252
	r28.s64 = ctx.r3.s64 + 252;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82eec0d4
	if (cr0.lt) goto loc_82EEC0D4;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,-14788
	r25.s64 = r11.s64 + -14788;
	// addi r24,r10,-15236
	r24.s64 = ctx.r10.s64 + -15236;
loc_82EEC044:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eec0c8
	if (cr6.eq) goto loc_82EEC0C8;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,24
	r31.s64 = 24;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eec084
	if (!cr6.lt) goto loc_82EEC084;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEC084:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eec0c8
	if (!cr6.lt) goto loc_82EEC0C8;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEC0C8:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82eec044
	if (!cr0.lt) goto loc_82EEC044;
loc_82EEC0D4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eebc98
	sub_82EEBC98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EEC0E8"))) PPC_WEAK_FUNC(sub_82EEC0E8);
PPC_FUNC_IMPL(__imp__sub_82EEC0E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,256(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r3,252
	r28.s64 = ctx.r3.s64 + 252;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82eec1ac
	if (cr0.lt) goto loc_82EEC1AC;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,-14788
	r25.s64 = r11.s64 + -14788;
	// addi r24,r10,-15224
	r24.s64 = ctx.r10.s64 + -15224;
loc_82EEC11C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eec1a0
	if (cr6.eq) goto loc_82EEC1A0;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,24
	r31.s64 = 24;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eec15c
	if (!cr6.lt) goto loc_82EEC15C;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEC15C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eec1a0
	if (!cr6.lt) goto loc_82EEC1A0;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEC1A0:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82eec11c
	if (!cr0.lt) goto loc_82EEC11C;
loc_82EEC1AC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eebc98
	sub_82EEBC98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EEC1C0"))) PPC_WEAK_FUNC(sub_82EEC1C0);
PPC_FUNC_IMPL(__imp__sub_82EEC1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,268(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r3,264
	r28.s64 = ctx.r3.s64 + 264;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82eec284
	if (cr0.lt) goto loc_82EEC284;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,-14788
	r25.s64 = r11.s64 + -14788;
	// addi r24,r10,-15124
	r24.s64 = ctx.r10.s64 + -15124;
loc_82EEC1F4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eec278
	if (cr6.eq) goto loc_82EEC278;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,24
	r31.s64 = 24;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eec234
	if (!cr6.lt) goto loc_82EEC234;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEC234:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eec278
	if (!cr6.lt) goto loc_82EEC278;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEC278:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82eec1f4
	if (!cr0.lt) goto loc_82EEC1F4;
loc_82EEC284:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eebc98
	sub_82EEBC98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EEC298"))) PPC_WEAK_FUNC(sub_82EEC298);
PPC_FUNC_IMPL(__imp__sub_82EEC298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,268(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r3,264
	r28.s64 = ctx.r3.s64 + 264;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82eec35c
	if (cr0.lt) goto loc_82EEC35C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,-14788
	r25.s64 = r11.s64 + -14788;
	// addi r24,r10,-15112
	r24.s64 = ctx.r10.s64 + -15112;
loc_82EEC2CC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eec350
	if (cr6.eq) goto loc_82EEC350;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,24
	r31.s64 = 24;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eec30c
	if (!cr6.lt) goto loc_82EEC30C;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEC30C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eec350
	if (!cr6.lt) goto loc_82EEC350;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEC350:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82eec2cc
	if (!cr0.lt) goto loc_82EEC2CC;
loc_82EEC35C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eebc98
	sub_82EEBC98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EEC370"))) PPC_WEAK_FUNC(sub_82EEC370);
PPC_FUNC_IMPL(__imp__sub_82EEC370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,268(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r3,264
	r28.s64 = ctx.r3.s64 + 264;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82eec434
	if (cr0.lt) goto loc_82EEC434;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,-14788
	r25.s64 = r11.s64 + -14788;
	// addi r24,r10,-15224
	r24.s64 = ctx.r10.s64 + -15224;
loc_82EEC3A4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eec428
	if (cr6.eq) goto loc_82EEC428;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,24
	r31.s64 = 24;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eec3e4
	if (!cr6.lt) goto loc_82EEC3E4;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEC3E4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eec428
	if (!cr6.lt) goto loc_82EEC428;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEC428:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82eec3a4
	if (!cr0.lt) goto loc_82EEC3A4;
loc_82EEC434:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eebc98
	sub_82EEBC98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EEC448"))) PPC_WEAK_FUNC(sub_82EEC448);
PPC_FUNC_IMPL(__imp__sub_82EEC448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,280(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r3,276
	r28.s64 = ctx.r3.s64 + 276;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82eec50c
	if (cr0.lt) goto loc_82EEC50C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,-14788
	r25.s64 = r11.s64 + -14788;
	// addi r24,r10,-15100
	r24.s64 = ctx.r10.s64 + -15100;
loc_82EEC47C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eec500
	if (cr6.eq) goto loc_82EEC500;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,24
	r31.s64 = 24;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eec4bc
	if (!cr6.lt) goto loc_82EEC4BC;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEC4BC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eec500
	if (!cr6.lt) goto loc_82EEC500;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEC500:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82eec47c
	if (!cr0.lt) goto loc_82EEC47C;
loc_82EEC50C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eebc98
	sub_82EEBC98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EEC520"))) PPC_WEAK_FUNC(sub_82EEC520);
PPC_FUNC_IMPL(__imp__sub_82EEC520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,280(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r3,276
	r28.s64 = ctx.r3.s64 + 276;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82eec5e4
	if (cr0.lt) goto loc_82EEC5E4;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,-14788
	r25.s64 = r11.s64 + -14788;
	// addi r24,r10,-15088
	r24.s64 = ctx.r10.s64 + -15088;
loc_82EEC554:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eec5d8
	if (cr6.eq) goto loc_82EEC5D8;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,24
	r31.s64 = 24;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eec594
	if (!cr6.lt) goto loc_82EEC594;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEC594:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eec5d8
	if (!cr6.lt) goto loc_82EEC5D8;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEC5D8:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82eec554
	if (!cr0.lt) goto loc_82EEC554;
loc_82EEC5E4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eebc98
	sub_82EEBC98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EEC5F8"))) PPC_WEAK_FUNC(sub_82EEC5F8);
PPC_FUNC_IMPL(__imp__sub_82EEC5F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r28,r3,372
	r28.s64 = ctx.r3.s64 + 372;
	// stw r11,12(r27)
	PPC_STORE_U32(r27.u32 + 12, r11.u32);
	// lwz r10,376(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	// addic. r26,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r26.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82eec6c4
	if (cr0.lt) goto loc_82EEC6C4;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,-14788
	r25.s64 = r11.s64 + -14788;
	// addi r24,r10,-15196
	r24.s64 = ctx.r10.s64 + -15196;
loc_82EEC634:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eec6b8
	if (cr6.eq) goto loc_82EEC6B8;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,24
	r31.s64 = 24;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eec674
	if (!cr6.lt) goto loc_82EEC674;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEC674:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eec6b8
	if (!cr6.lt) goto loc_82EEC6B8;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEC6B8:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82eec634
	if (!cr0.lt) goto loc_82EEC634;
loc_82EEC6C4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eebc98
	sub_82EEBC98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EEC6D8"))) PPC_WEAK_FUNC(sub_82EEC6D8);
PPC_FUNC_IMPL(__imp__sub_82EEC6D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r28,r3,372
	r28.s64 = ctx.r3.s64 + 372;
	// stw r11,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r11.u32);
	// lwz r10,376(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	// addic. r26,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r26.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82eec7a4
	if (cr0.lt) goto loc_82EEC7A4;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,-14788
	r25.s64 = r11.s64 + -14788;
	// addi r24,r10,-15184
	r24.s64 = ctx.r10.s64 + -15184;
loc_82EEC714:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eec798
	if (cr6.eq) goto loc_82EEC798;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,24
	r31.s64 = 24;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eec754
	if (!cr6.lt) goto loc_82EEC754;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEC754:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eec798
	if (!cr6.lt) goto loc_82EEC798;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEC798:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82eec714
	if (!cr0.lt) goto loc_82EEC714;
loc_82EEC7A4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eebc98
	sub_82EEBC98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EEC7B8"))) PPC_WEAK_FUNC(sub_82EEC7B8);
PPC_FUNC_IMPL(__imp__sub_82EEC7B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r28,r3,372
	r28.s64 = ctx.r3.s64 + 372;
	// stw r11,16(r27)
	PPC_STORE_U32(r27.u32 + 16, r11.u32);
	// lwz r10,376(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	// addic. r26,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r26.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82eec884
	if (cr0.lt) goto loc_82EEC884;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,-14788
	r25.s64 = r11.s64 + -14788;
	// addi r24,r10,-15172
	r24.s64 = ctx.r10.s64 + -15172;
loc_82EEC7F4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eec878
	if (cr6.eq) goto loc_82EEC878;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,24
	r31.s64 = 24;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eec834
	if (!cr6.lt) goto loc_82EEC834;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEC834:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eec878
	if (!cr6.lt) goto loc_82EEC878;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEC878:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82eec7f4
	if (!cr0.lt) goto loc_82EEC7F4;
loc_82EEC884:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eebc98
	sub_82EEBC98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EEC898"))) PPC_WEAK_FUNC(sub_82EEC898);
PPC_FUNC_IMPL(__imp__sub_82EEC898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r28,r3,372
	r28.s64 = ctx.r3.s64 + 372;
	// stw r11,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r11.u32);
	// lwz r10,376(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	// addic. r26,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r26.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82eec964
	if (cr0.lt) goto loc_82EEC964;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,-14788
	r25.s64 = r11.s64 + -14788;
	// addi r24,r10,-15076
	r24.s64 = ctx.r10.s64 + -15076;
loc_82EEC8D4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eec958
	if (cr6.eq) goto loc_82EEC958;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,24
	r31.s64 = 24;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eec914
	if (!cr6.lt) goto loc_82EEC914;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEC914:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eec958
	if (!cr6.lt) goto loc_82EEC958;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEC958:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82eec8d4
	if (!cr0.lt) goto loc_82EEC8D4;
loc_82EEC964:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eebc98
	sub_82EEBC98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EEC978"))) PPC_WEAK_FUNC(sub_82EEC978);
PPC_FUNC_IMPL(__imp__sub_82EEC978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r28,r27,288
	r28.s64 = r27.s64 + 288;
	// lwz r11,292(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 292);
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82eeca3c
	if (cr0.lt) goto loc_82EECA3C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,-14788
	r25.s64 = r11.s64 + -14788;
	// addi r24,r10,-15064
	r24.s64 = ctx.r10.s64 + -15064;
loc_82EEC9AC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eeca30
	if (cr6.eq) goto loc_82EECA30;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,24
	r31.s64 = 24;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eec9ec
	if (!cr6.lt) goto loc_82EEC9EC;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEC9EC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eeca30
	if (!cr6.lt) goto loc_82EECA30;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EECA30:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82eec9ac
	if (!cr0.lt) goto loc_82EEC9AC;
loc_82EECA3C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eebc98
	sub_82EEBC98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EECA50"))) PPC_WEAK_FUNC(sub_82EECA50);
PPC_FUNC_IMPL(__imp__sub_82EECA50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b0c
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r22,r11,-14788
	r22.s64 = r11.s64 + -14788;
	// addi r29,r21,300
	r29.s64 = r21.s64 + 300;
	// lwz r11,132(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 132);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,132(r21)
	PPC_STORE_U32(r21.u32 + 132, r11.u32);
	// lwz r10,304(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 304);
	// addic. r27,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r27.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// blt 0x82eecb24
	if (cr0.lt) goto loc_82EECB24;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// rlwinm r28,r27,2,0,29
	r28.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r11,-15036
	r26.s64 = r11.s64 + -15036;
loc_82EECA94:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eecb18
	if (cr6.eq) goto loc_82EECB18;
	// lwz r31,0(r13)
	r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r30,24
	r30.s64 = 24;
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eecad4
	if (!cr6.lt) goto loc_82EECAD4;
	// stw r26,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r26.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EECAD4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eecb18
	if (!cr6.lt) goto loc_82EECB18;
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EECB18:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r28,r28,-4
	r28.s64 = r28.s64 + -4;
	// bge 0x82eeca94
	if (!cr0.lt) goto loc_82EECA94;
loc_82EECB24:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eebc98
	sub_82EEBC98(ctx, base);
	// lwz r11,76(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 76);
	// li r23,0
	r23.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82eecc1c
	if (!cr6.gt) goto loc_82EECC1C;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// li r27,0
	r27.s64 = 0;
	// addi r24,r11,-15048
	r24.s64 = r11.s64 + -15048;
loc_82EECB48:
	// lwz r11,72(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 72);
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// lwz r28,204(r10)
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82eecc08
	if (cr6.eq) goto loc_82EECC08;
	// lhz r11,4(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 4);
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82eecc00
	if (cr0.lt) goto loc_82EECC00;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
loc_82EECB6C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eecbf4
	if (cr6.eq) goto loc_82EECBF4;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,24
	r31.s64 = 24;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eecbac
	if (!cr6.lt) goto loc_82EECBAC;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EECBAC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,72(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 72);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwzx r4,r10,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x82eecbf4
	if (!cr6.lt) goto loc_82EECBF4;
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EECBF4:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82eecb6c
	if (!cr0.lt) goto loc_82EECB6C;
loc_82EECC00:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eebd08
	sub_82EEBD08(ctx, base);
loc_82EECC08:
	// lwz r11,76(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 76);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r23,r11
	cr6.compare<int32_t>(r23.s32, r11.s32, xer);
	// blt cr6,0x82eecb48
	if (cr6.lt) goto loc_82EECB48;
loc_82EECC1C:
	// lwz r11,132(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 132);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,132(r21)
	PPC_STORE_U32(r21.u32 + 132, r11.u32);
	// bne 0x82eecc4c
	if (!cr0.eq) goto loc_82EECC4C;
	// lbz r11,140(r21)
	r11.u64 = PPC_LOAD_U8(r21.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82eecc4c
	if (!cr6.eq) goto loc_82EECC4C;
	// lwz r11,128(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82eecc4c
	if (cr6.eq) goto loc_82EECC4C;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82ed5370
	sub_82ED5370(ctx, base);
loc_82EECC4C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_82EECC58"))) PPC_WEAK_FUNC(sub_82EECC58);
PPC_FUNC_IMPL(__imp__sub_82EECC58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b0c
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r22,r11,-14788
	r22.s64 = r11.s64 + -14788;
	// addi r29,r21,300
	r29.s64 = r21.s64 + 300;
	// lwz r11,132(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 132);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,132(r21)
	PPC_STORE_U32(r21.u32 + 132, r11.u32);
	// lwz r10,304(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 304);
	// addic. r27,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r27.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// blt 0x82eecd2c
	if (cr0.lt) goto loc_82EECD2C;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// rlwinm r28,r27,2,0,29
	r28.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r11,-15012
	r26.s64 = r11.s64 + -15012;
loc_82EECC9C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eecd20
	if (cr6.eq) goto loc_82EECD20;
	// lwz r31,0(r13)
	r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r30,24
	r30.s64 = 24;
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eeccdc
	if (!cr6.lt) goto loc_82EECCDC;
	// stw r26,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r26.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EECCDC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eecd20
	if (!cr6.lt) goto loc_82EECD20;
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EECD20:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r28,r28,-4
	r28.s64 = r28.s64 + -4;
	// bge 0x82eecc9c
	if (!cr0.lt) goto loc_82EECC9C;
loc_82EECD2C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eebc98
	sub_82EEBC98(ctx, base);
	// lwz r11,76(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 76);
	// li r23,0
	r23.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82eece24
	if (!cr6.gt) goto loc_82EECE24;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// li r27,0
	r27.s64 = 0;
	// addi r24,r11,-15024
	r24.s64 = r11.s64 + -15024;
loc_82EECD50:
	// lwz r11,72(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 72);
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// lwz r28,204(r10)
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82eece10
	if (cr6.eq) goto loc_82EECE10;
	// lhz r11,4(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 4);
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82eece08
	if (cr0.lt) goto loc_82EECE08;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
loc_82EECD74:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eecdfc
	if (cr6.eq) goto loc_82EECDFC;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,24
	r31.s64 = 24;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eecdb4
	if (!cr6.lt) goto loc_82EECDB4;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EECDB4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,72(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 72);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwzx r4,r10,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x82eecdfc
	if (!cr6.lt) goto loc_82EECDFC;
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EECDFC:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82eecd74
	if (!cr0.lt) goto loc_82EECD74;
loc_82EECE08:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eebd08
	sub_82EEBD08(ctx, base);
loc_82EECE10:
	// lwz r11,76(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 76);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r23,r11
	cr6.compare<int32_t>(r23.s32, r11.s32, xer);
	// blt cr6,0x82eecd50
	if (cr6.lt) goto loc_82EECD50;
loc_82EECE24:
	// lwz r11,132(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 132);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,132(r21)
	PPC_STORE_U32(r21.u32 + 132, r11.u32);
	// bne 0x82eece54
	if (!cr0.eq) goto loc_82EECE54;
	// lbz r11,140(r21)
	r11.u64 = PPC_LOAD_U8(r21.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82eece54
	if (!cr6.eq) goto loc_82EECE54;
	// lwz r11,128(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82eece54
	if (cr6.eq) goto loc_82EECE54;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82ed5370
	sub_82ED5370(ctx, base);
loc_82EECE54:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_82EECE60"))) PPC_WEAK_FUNC(sub_82EECE60);
PPC_FUNC_IMPL(__imp__sub_82EECE60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r29,r26,312
	r29.s64 = r26.s64 + 312;
	// lwz r11,316(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 316);
	// addic. r28,r11,-1
	xer.ca = r11.u32 > 0;
	r28.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// mr r27,r11
	r27.u64 = r11.u64;
	// blt 0x82eecf40
	if (cr0.lt) goto loc_82EECF40;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r25,r11,-14788
	r25.s64 = r11.s64 + -14788;
	// addi r24,r10,-15000
	r24.s64 = ctx.r10.s64 + -15000;
loc_82EECE94:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// ble cr6,0x82eeceb0
	if (!cr6.gt) goto loc_82EECEB0;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// subf r10,r27,r11
	ctx.r10.s64 = r11.s64 - r27.s64;
	// mr r27,r11
	r27.u64 = r11.u64;
	// add r28,r10,r28
	r28.u64 = ctx.r10.u64 + r28.u64;
loc_82EECEB0:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eecf38
	if (cr6.eq) goto loc_82EECF38;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,24
	r31.s64 = 24;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eecef4
	if (!cr6.lt) goto loc_82EECEF4;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r8
	ctx.r8.u64 = __rdtsc();
	// addi r6,r11,12
	ctx.r6.s64 = r11.s64 + 12;
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
loc_82EECEF4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eecf38
	if (!cr6.lt) goto loc_82EECF38;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EECF38:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bge 0x82eece94
	if (!cr0.lt) goto loc_82EECE94;
loc_82EECF40:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eebc98
	sub_82EEBC98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EECF50"))) PPC_WEAK_FUNC(sub_82EECF50);
PPC_FUNC_IMPL(__imp__sub_82EECF50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r28,r27,324
	r28.s64 = r27.s64 + 324;
	// lwz r11,328(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 328);
	// addic. r25,r11,-1
	xer.ca = r11.u32 > 0;
	r25.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// blt 0x82eed01c
	if (cr0.lt) goto loc_82EED01C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r29,r25,2,0,29
	r29.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r11,-14788
	r24.s64 = r11.s64 + -14788;
	// addi r23,r10,-14988
	r23.s64 = ctx.r10.s64 + -14988;
loc_82EECF88:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eed010
	if (cr6.eq) goto loc_82EED010;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,24
	r31.s64 = 24;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eecfc8
	if (!cr6.lt) goto loc_82EECFC8;
	// stw r23,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r23.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EECFC8:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eed010
	if (!cr6.lt) goto loc_82EED010;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EED010:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82eecf88
	if (!cr0.lt) goto loc_82EECF88;
loc_82EED01C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eebc98
	sub_82EEBC98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82EED030"))) PPC_WEAK_FUNC(sub_82EED030);
PPC_FUNC_IMPL(__imp__sub_82EED030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r28,r27,336
	r28.s64 = r27.s64 + 336;
	// lwz r11,340(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 340);
	// addic. r25,r11,-1
	xer.ca = r11.u32 > 0;
	r25.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// blt 0x82eed0fc
	if (cr0.lt) goto loc_82EED0FC;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r29,r25,2,0,29
	r29.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r11,-14788
	r24.s64 = r11.s64 + -14788;
	// addi r23,r10,-14976
	r23.s64 = ctx.r10.s64 + -14976;
loc_82EED068:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eed0f0
	if (cr6.eq) goto loc_82EED0F0;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,24
	r31.s64 = 24;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eed0a8
	if (!cr6.lt) goto loc_82EED0A8;
	// stw r23,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r23.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EED0A8:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eed0f0
	if (!cr6.lt) goto loc_82EED0F0;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EED0F0:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82eed068
	if (!cr0.lt) goto loc_82EED068;
loc_82EED0FC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eebc98
	sub_82EEBC98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82EED110"))) PPC_WEAK_FUNC(sub_82EED110);
PPC_FUNC_IMPL(__imp__sub_82EED110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,352(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r28,r3,348
	r28.s64 = ctx.r3.s64 + 348;
	// addic. r25,r11,-1
	xer.ca = r11.u32 > 0;
	r25.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// blt 0x82eed1dc
	if (cr0.lt) goto loc_82EED1DC;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r29,r25,2,0,29
	r29.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r11,-14788
	r24.s64 = r11.s64 + -14788;
	// addi r23,r10,-14988
	r23.s64 = ctx.r10.s64 + -14988;
loc_82EED148:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eed1d0
	if (cr6.eq) goto loc_82EED1D0;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,24
	r31.s64 = 24;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eed188
	if (!cr6.lt) goto loc_82EED188;
	// stw r23,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r23.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EED188:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eed1d0
	if (!cr6.lt) goto loc_82EED1D0;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EED1D0:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82eed148
	if (!cr0.lt) goto loc_82EED148;
loc_82EED1DC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eebc98
	sub_82EEBC98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82EED1F0"))) PPC_WEAK_FUNC(sub_82EED1F0);
PPC_FUNC_IMPL(__imp__sub_82EED1F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,364(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r28,r3,360
	r28.s64 = ctx.r3.s64 + 360;
	// addic. r25,r11,-1
	xer.ca = r11.u32 > 0;
	r25.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// blt 0x82eed2bc
	if (cr0.lt) goto loc_82EED2BC;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r29,r25,2,0,29
	r29.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r11,-14788
	r24.s64 = r11.s64 + -14788;
	// addi r23,r10,-14976
	r23.s64 = ctx.r10.s64 + -14976;
loc_82EED228:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eed2b0
	if (cr6.eq) goto loc_82EED2B0;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,24
	r31.s64 = 24;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eed268
	if (!cr6.lt) goto loc_82EED268;
	// stw r23,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r23.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EED268:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eed2b0
	if (!cr6.lt) goto loc_82EED2B0;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EED2B0:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82eed228
	if (!cr0.lt) goto loc_82EED228;
loc_82EED2BC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eebc98
	sub_82EEBC98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82EED2D0"))) PPC_WEAK_FUNC(sub_82EED2D0);
PPC_FUNC_IMPL(__imp__sub_82EED2D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,388(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r28,r3,384
	r28.s64 = ctx.r3.s64 + 384;
	// addic. r25,r11,-1
	xer.ca = r11.u32 > 0;
	r25.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// blt 0x82eed39c
	if (cr0.lt) goto loc_82EED39C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r29,r25,2,0,29
	r29.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r11,-14788
	r24.s64 = r11.s64 + -14788;
	// addi r23,r10,-14960
	r23.s64 = ctx.r10.s64 + -14960;
loc_82EED308:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eed390
	if (cr6.eq) goto loc_82EED390;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,24
	r31.s64 = 24;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eed348
	if (!cr6.lt) goto loc_82EED348;
	// stw r23,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r23.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EED348:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eed390
	if (!cr6.lt) goto loc_82EED390;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EED390:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82eed308
	if (!cr0.lt) goto loc_82EED308;
loc_82EED39C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eebc98
	sub_82EEBC98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82EED3B0"))) PPC_WEAK_FUNC(sub_82EED3B0);
PPC_FUNC_IMPL(__imp__sub_82EED3B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,316(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r3,312
	r28.s64 = ctx.r3.s64 + 312;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82eed474
	if (cr0.lt) goto loc_82EED474;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,-14788
	r25.s64 = r11.s64 + -14788;
	// addi r24,r10,-14944
	r24.s64 = ctx.r10.s64 + -14944;
loc_82EED3E4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eed468
	if (cr6.eq) goto loc_82EED468;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,24
	r31.s64 = 24;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eed424
	if (!cr6.lt) goto loc_82EED424;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EED424:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eed468
	if (!cr6.lt) goto loc_82EED468;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EED468:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82eed3e4
	if (!cr0.lt) goto loc_82EED3E4;
loc_82EED474:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eebc98
	sub_82EEBC98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EED488"))) PPC_WEAK_FUNC(sub_82EED488);
PPC_FUNC_IMPL(__imp__sub_82EED488) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x82eed4e8
	if (cr6.lt) goto loc_82EED4E8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x82eed4d0
	if (!cr6.gt) goto loc_82EED4D0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f1,-7004(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -7004);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82EED4D0:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f1,9576(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9576);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82EED4E8:
	// bl 0x831b3c90
	sub_831B3C90(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EED500"))) PPC_WEAK_FUNC(sub_82EED500);
PPC_FUNC_IMPL(__imp__sub_82EED500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-22012
	ctx.r10.s64 = r11.s64 + -22012;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EED510"))) PPC_WEAK_FUNC(sub_82EED510);
PPC_FUNC_IMPL(__imp__sub_82EED510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	f0.f64 = double(temp.f32);
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(f0.f64 + ctx.f1.f64));
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EED520"))) PPC_WEAK_FUNC(sub_82EED520);
PPC_FUNC_IMPL(__imp__sub_82EED520) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x82eed538
	if (cr6.eq) goto loc_82EED538;
	// li r11,0
	r11.s64 = 0;
loc_82EED538:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EED540"))) PPC_WEAK_FUNC(sub_82EED540);
PPC_FUNC_IMPL(__imp__sub_82EED540) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x82eed558
	if (cr6.eq) goto loc_82EED558;
	// li r11,0
	r11.s64 = 0;
loc_82EED558:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EED560"))) PPC_WEAK_FUNC(sub_82EED560);
PPC_FUNC_IMPL(__imp__sub_82EED560) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	f0.f64 = double(temp.f32);
	// lfs f12,-24780(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24780);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// beq cr6,0x82eed590
	if (cr6.eq) goto loc_82EED590;
	// lfs f13,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f11,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fabs f10,f0
	ctx.f10.u64 = f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f11
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x82eed590
	if (!cr6.lt) goto loc_82EED590;
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
loc_82EED590:
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// bne cr6,0x82eed5a4
	if (!cr6.eq) goto loc_82EED5A4;
	// lfs f1,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82EED5A4:
	// lfs f13,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fsel f1,f12,f0,f13
	ctx.f1.f64 = ctx.f12.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EED5B8"))) PPC_WEAK_FUNC(sub_82EED5B8);
PPC_FUNC_IMPL(__imp__sub_82EED5B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eed5e0
	if (cr6.eq) goto loc_82EED5E0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82eed5f4
	if (!cr6.eq) goto loc_82EED5F4;
loc_82EED5E0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EED5F4:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eed608
	if (cr6.eq) goto loc_82EED608;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x82eed61c
	if (!cr6.eq) goto loc_82EED61C;
loc_82EED608:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EED61C:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eed630
	if (cr6.eq) goto loc_82EED630;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x82eed644
	if (!cr6.eq) goto loc_82EED644;
loc_82EED630:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EED644:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
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

__attribute__((alias("__imp__sub_82EED660"))) PPC_WEAK_FUNC(sub_82EED660);
PPC_FUNC_IMPL(__imp__sub_82EED660) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82f75f60
	sub_82F75F60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EED670"))) PPC_WEAK_FUNC(sub_82EED670);
PPC_FUNC_IMPL(__imp__sub_82EED670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32237
	ctx.r6.s64 = -2112684032;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	r11.s64 = 0;
	// lfs f0,2240(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f0.f64 = double(temp.f32);
	// addi r5,r6,-19260
	ctx.r5.s64 = ctx.r6.s64 + -19260;
	// lfs f13,-24780(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24780);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-10412(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -10412);
	ctx.f12.f64 = double(temp.f32);
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stb r10,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r10.u8);
	// stfs f12,36(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EED6C8"))) PPC_WEAK_FUNC(sub_82EED6C8);
PPC_FUNC_IMPL(__imp__sub_82EED6C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EED6D0"))) PPC_WEAK_FUNC(sub_82EED6D0);
PPC_FUNC_IMPL(__imp__sub_82EED6D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82edad70
	sub_82EDAD70(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// bne cr6,0x82eed72c
	if (!cr6.eq) goto loc_82EED72C;
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f13
	f0.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x82eed75c
	if (!cr6.eq) goto loc_82EED75C;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// b 0x82eed768
	goto loc_82EED768;
loc_82EED72C:
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	f0.f64 = double(temp.f32);
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 - f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x82eed75c
	if (!cr6.eq) goto loc_82EED75C;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// b 0x82eed768
	goto loc_82EED768;
loc_82EED75C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
loc_82EED768:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// lwz r11,29520(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29520);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// bne cr6,0x82eed7dc
	if (!cr6.eq) goto loc_82EED7DC;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,24
	ctx.r10.s64 = 24;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eed7d0
	if (!cr6.lt) goto loc_82EED7D0;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-14788
	ctx.r8.s64 = ctx.r9.s64 + -14788;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82EED7D0:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_82EED7DC:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x82eed884
	if (!cr6.eq) goto loc_82EED884;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	f0.f64 = double(temp.f32);
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f12,24(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 340);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82eed87c
	if (cr6.eq) goto loc_82EED87C;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r29,24
	r29.s64 = 24;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eed840
	if (!cr6.lt) goto loc_82EED840;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r8,r9,-14932
	ctx.r8.s64 = ctx.r9.s64 + -14932;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82EED840:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82eed030
	sub_82EED030(ctx, base);
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eed87c
	if (!cr6.lt) goto loc_82EED87C;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-14788
	ctx.r8.s64 = ctx.r9.s64 + -14788;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82EED87C:
	// li r11,1
	r11.s64 = 1;
	// stb r11,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r11.u8);
loc_82EED884:
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EED898"))) PPC_WEAK_FUNC(sub_82EED898);
PPC_FUNC_IMPL(__imp__sub_82EED898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 32);
	f0.f64 = double(temp.f32);
	// lfs f12,-24780(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24780);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// beq cr6,0x82eed8d8
	if (cr6.eq) goto loc_82EED8D8;
	// lfs f13,24(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f11,36(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fabs f10,f0
	ctx.f10.u64 = f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f11
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x82eed8d8
	if (!cr6.lt) goto loc_82EED8D8;
	// stfs f13,32(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r29.u32 + 32, temp.u32);
loc_82EED8D8:
	// lfs f0,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 32);
	f0.f64 = double(temp.f32);
	// lfs f13,24(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// beq cr6,0x82eed8f0
	if (cr6.eq) goto loc_82EED8F0;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fsel f13,f12,f0,f13
	ctx.f13.f64 = ctx.f12.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
loc_82EED8F0:
	// stfs f13,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r29.u32 + 20, temp.u32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x82eed97c
	if (cr6.lt) goto loc_82EED97C;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r10,316(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 316);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82eed97c
	if (cr6.eq) goto loc_82EED97C;
	// lwz r31,0(r13)
	r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r30,24
	r30.s64 = 24;
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eed944
	if (!cr6.lt) goto loc_82EED944;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r8,r9,-14916
	ctx.r8.s64 = ctx.r9.s64 + -14916;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82EED944:
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x82eece60
	sub_82EECE60(ctx, base);
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eed97c
	if (!cr6.lt) goto loc_82EED97C;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-14788
	ctx.r8.s64 = ctx.r9.s64 + -14788;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82EED97C:
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,40(r29)
	PPC_STORE_U32(r29.u32 + 40, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EED990"))) PPC_WEAK_FUNC(sub_82EED990);
PPC_FUNC_IMPL(__imp__sub_82EED990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// addi r26,r11,40
	r26.s64 = r11.s64 + 40;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82eeda24
	if (!cr6.gt) goto loc_82EEDA24;
	// li r27,0
	r27.s64 = 0;
loc_82EED9BC:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// lwzx r11,r11,r27
	r11.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// addi r29,r11,56
	r29.s64 = r11.s64 + 56;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82eeda10
	if (!cr6.gt) goto loc_82EEDA10;
	// li r30,0
	r30.s64 = 0;
loc_82EED9DC:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// addi r4,r11,400
	ctx.r4.s64 = r11.s64 + 400;
	// lwzx r3,r10,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r7
	cr6.compare<int32_t>(r31.s32, ctx.r7.s32, xer);
	// blt cr6,0x82eed9dc
	if (cr6.lt) goto loc_82EED9DC;
loc_82EEDA10:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x82eed9bc
	if (cr6.lt) goto loc_82EED9BC;
loc_82EEDA24:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82EEDA30"))) PPC_WEAK_FUNC(sub_82EEDA30);
PPC_FUNC_IMPL(__imp__sub_82EEDA30) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r30,224
	r31.s64 = r30.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ea8d80
	sub_82EA8D80(ctx, base);
	// addi r11,r30,352
	r11.s64 = r30.s64 + 352;
	// lvx128 v12,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,304
	ctx.r8.s64 = 304;
	// li r7,48
	ctx.r7.s64 = 48;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v13,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v10,r31,r10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v11,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// lvx128 v8,r31,r9
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v9,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// lvx128 v7,r30,r8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v6,v12,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v5,v10,v11,v6
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v4,v8,v9,v5
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vsubfp v3,v7,v4
	simde_mm_store_ps(ctx.v3.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v4.f32)));
	// stvx128 v3,r31,r7
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_82EEDAB8"))) PPC_WEAK_FUNC(sub_82EEDAB8);
PPC_FUNC_IMPL(__imp__sub_82EEDAB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r29,24
	r29.s64 = 24;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eedb00
	if (!cr6.lt) goto loc_82EEDB00;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r8,r9,-14876
	ctx.r8.s64 = ctx.r9.s64 + -14876;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82EEDB00:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eedb4c
	if (cr6.eq) goto loc_82EEDB4C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eed6d0
	sub_82EED6D0(ctx, base);
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eedcc8
	if (!cr6.lt) goto loc_82EEDCC8;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-14788
	ctx.r8.s64 = ctx.r9.s64 + -14788;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
loc_82EEDB4C:
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f13,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 - f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x82eedb80
	if (!cr6.eq) goto loc_82EEDB80;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// b 0x82eedb8c
	goto loc_82EEDB8C;
loc_82EEDB80:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
loc_82EEDB8C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// lwz r11,29520(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29520);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// bne cr6,0x82eedc00
	if (!cr6.eq) goto loc_82EEDC00;
	// li r11,2
	r11.s64 = 2;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eedbf4
	if (!cr6.lt) goto loc_82EEDBF4;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-14788
	ctx.r8.s64 = ctx.r9.s64 + -14788;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82EEDBF4:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
loc_82EEDC00:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	f0.f64 = double(temp.f32);
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f12,24(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// addi r28,r11,-14788
	r28.s64 = r11.s64 + -14788;
	// lwz r9,340(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 340);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82eedc8c
	if (cr6.eq) goto loc_82EEDC8C;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eedc58
	if (!cr6.lt) goto loc_82EEDC58;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r8,r9,-14932
	ctx.r8.s64 = ctx.r9.s64 + -14932;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82EEDC58:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82eed030
	sub_82EED030(ctx, base);
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eedc8c
	if (!cr6.lt) goto loc_82EEDC8C;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEDC8C:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	r11.s64 = 1;
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// stb r11,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r11.u8);
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eedcc4
	if (!cr6.lt) goto loc_82EEDCC4;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEDCC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EEDCC8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EEDCD0"))) PPC_WEAK_FUNC(sub_82EEDCD0);
PPC_FUNC_IMPL(__imp__sub_82EEDCD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b08
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r13)
	r28.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r27,24
	r27.s64 = 24;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eedd28
	if (!cr6.lt) goto loc_82EEDD28;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r7,r9,-14784
	ctx.r7.s64 = ctx.r9.s64 + -14784;
	// addi r6,r8,-14792
	ctx.r6.s64 = ctx.r8.s64 + -14792;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r6.u32);
	// mftb r5
	ctx.r5.u64 = __rdtsc();
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
loc_82EEDD28:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r10,16
	ctx.r10.s64 = 16;
	// ld r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U64(r26.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r11,400
	ctx.r7.s64 = r11.s64 + 400;
	// li r6,32
	ctx.r6.s64 = 32;
	// std r9,400(r11)
	PPC_STORE_U64(r11.u32 + 400, ctx.r9.u64);
	// ld r5,8(r26)
	ctx.r5.u64 = PPC_LOAD_U64(r26.u32 + 8);
	// std r5,408(r11)
	PPC_STORE_U64(r11.u32 + 408, ctx.r5.u64);
	// lfs f0,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 8);
	f0.f64 = double(temp.f32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r11,r11,416
	r11.s64 = r11.s64 + 416;
	// lfs f13,288(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// lwz r4,276(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 276);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f12,268(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 268, temp.u32);
	// lfs f11,12(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// addi r9,r11,268
	ctx.r9.s64 = r11.s64 + 268;
	// fmuls f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// stfs f7,272(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 272, temp.u32);
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v13,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v12,r7,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v11,v12,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v11,r11,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lfs f6,8(r26)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvx128 v10,r5,r10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx v9,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v8,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0xFF));
	// vmulfp128 v7,v10,v8
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v8.f32)));
	// stvx128 v7,r11,r6
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82f12db0
	sub_82F12DB0(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82ee9260
	sub_82EE9260(ctx, base);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,132(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// stw r3,132(r4)
	PPC_STORE_U32(ctx.r4.u32 + 132, ctx.r3.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,136(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// stw r9,136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 136, ctx.r9.u32);
	// lwzx r11,r27,r28
	r11.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eede20
	if (!cr6.lt) goto loc_82EEDE20;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r8,r9,-14804
	ctx.r8.s64 = ctx.r9.s64 + -14804;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
loc_82EEDE20:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eed990
	sub_82EED990(ctx, base);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,136(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 136, ctx.r9.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r8,132(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addic. r11,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	r11.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, r11.u32);
	// bne 0x82eede68
	if (!cr0.eq) goto loc_82EEDE68;
	// lbz r11,140(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82eede68
	if (!cr6.eq) goto loc_82EEDE68;
	// lwz r11,128(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82eede68
	if (cr6.eq) goto loc_82EEDE68;
	// bl 0x82ed5370
	sub_82ED5370(ctx, base);
loc_82EEDE68:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,132(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 132, ctx.r9.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r11,r11,416
	r11.s64 = r11.s64 + 416;
	// lbz r10,295(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 295);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
	// stb r10,295(r11)
	PPC_STORE_U8(r11.u32 + 295, ctx.r10.u8);
	// clrlwi r6,r7,29
	ctx.r6.u64 = ctx.r7.u32 & 0x7;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x82eedeac
	if (!cr6.eq) goto loc_82EEDEAC;
	// lbz r9,293(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 293);
	// xori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 ^ 1;
	// stb r8,293(r11)
	PPC_STORE_U8(r11.u32 + 293, ctx.r8.u8);
loc_82EEDEAC:
	// lbz r10,295(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 295);
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82eedec8
	if (!cr6.eq) goto loc_82EEDEC8;
	// lbz r9,293(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 293);
	// xori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 ^ 2;
	// stb r8,293(r11)
	PPC_STORE_U8(r11.u32 + 293, ctx.r8.u8);
loc_82EEDEC8:
	// lbz r10,295(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 295);
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82eedee8
	if (!cr6.eq) goto loc_82EEDEE8;
	// lbz r10,294(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 294);
	// stb r9,295(r11)
	PPC_STORE_U8(r11.u32 + 295, ctx.r9.u8);
	// subfic r8,r10,1
	xer.ca = ctx.r10.u32 <= 1;
	ctx.r8.s64 = 1 - ctx.r10.s64;
	// stb r8,294(r11)
	PPC_STORE_U8(r11.u32 + 294, ctx.r8.u8);
loc_82EEDEE8:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// addi r11,r11,416
	r11.s64 = r11.s64 + 416;
	// lwz r8,12(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lfs f0,268(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 268);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f13,284(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,268(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 268);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f10,272(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 272);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f9,288(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 288);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f8,284(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 284);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,288(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 288);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,160(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,164(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lfs f3,272(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 272);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,84(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// stfs f1,124(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f13,92(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,272(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 272);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x82eedfa0
	if (!cr6.lt) goto loc_82EEDFA0;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r8,r9,-14816
	ctx.r8.s64 = ctx.r9.s64 + -14816;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82EEDFA0:
	// lwz r24,12(r30)
	r24.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r20,r11,-14788
	r20.s64 = r11.s64 + -14788;
	// lwz r11,44(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 44);
	// addic. r23,r11,-1
	xer.ca = r11.u32 > 0;
	r23.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// blt 0x82eee110
	if (cr0.lt) goto loc_82EEE110;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// rlwinm r25,r23,2,0,29
	r25.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r22,r11,-14888
	r22.s64 = r11.s64 + -14888;
	// addi r21,r10,-14840
	r21.s64 = ctx.r10.s64 + -14840;
loc_82EEDFCC:
	// lwz r10,40(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 40);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r3,r11,400
	ctx.r3.s64 = r11.s64 + 400;
	// lwzx r31,r25,r10
	r31.u64 = PPC_LOAD_U32(r25.u32 + ctx.r10.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82eee070
	if (!cr6.eq) goto loc_82EEE070;
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eee010
	if (!cr6.lt) goto loc_82EEE010;
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEE010:
	// addi r5,r3,48
	ctx.r5.s64 = ctx.r3.s64 + 48;
	// lwz r7,76(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// li r8,208
	ctx.r8.s64 = 208;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82f01fe0
	sub_82F01FE0(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// bl 0x82eff238
	sub_82EFF238(ctx, base);
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eee08c
	if (!cr6.lt) goto loc_82EEE08C;
	// stw r20,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r20.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// b 0x82eee08c
	goto loc_82EEE08C;
loc_82EEE070:
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// lwz r8,76(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r7,72(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82f04638
	sub_82F04638(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82EEE08C:
	// cmpwi cr6,r29,5
	cr6.compare<int32_t>(r29.s32, 5, xer);
	// ble cr6,0x82eee0bc
	if (!cr6.gt) goto loc_82EEE0BC;
	// lbz r11,38(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 38);
	// rlwinm r10,r11,0,26,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eee0bc
	if (cr6.eq) goto loc_82EEE0BC;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lbz r11,197(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 197);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eee0bc
	if (cr6.eq) goto loc_82EEE0BC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82ee7ed0
	sub_82EE7ED0(ctx, base);
loc_82EEE0BC:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 352);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82eee104
	if (cr6.eq) goto loc_82EEE104;
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eee0f4
	if (!cr6.lt) goto loc_82EEE0F4;
	// stw r21,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r21.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEE0F4:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82eed110
	sub_82EED110(ctx, base);
loc_82EEE104:
	// addic. r23,r23,-1
	xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// addi r25,r25,-4
	r25.s64 = r25.s64 + -4;
	// bge 0x82eedfcc
	if (!cr0.lt) goto loc_82EEDFCC;
loc_82EEE110:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, r11.u32);
	// bne 0x82eee140
	if (!cr0.eq) goto loc_82EEE140;
	// lbz r11,140(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82eee140
	if (!cr6.eq) goto loc_82EEE140;
	// lwz r11,128(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82eee140
	if (cr6.eq) goto loc_82EEE140;
	// bl 0x82ed5370
	sub_82ED5370(ctx, base);
loc_82EEE140:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 328);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82eee1b4
	if (cr6.eq) goto loc_82EEE1B4;
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eee180
	if (!cr6.lt) goto loc_82EEE180;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r8,r9,-14864
	ctx.r8.s64 = ctx.r9.s64 + -14864;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82EEE180:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82eecf50
	sub_82EECF50(ctx, base);
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eee1b4
	if (!cr6.lt) goto loc_82EEE1B4;
	// stw r20,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r20.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EEE1B4:
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eee1e4
	if (!cr6.lt) goto loc_82EEE1E4;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r9,-22156
	ctx.r8.s64 = ctx.r9.s64 + -22156;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82EEE1E4:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_82EEE1F0"))) PPC_WEAK_FUNC(sub_82EEE1F0);
PPC_FUNC_IMPL(__imp__sub_82EEE1F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r27,r31,16
	r27.s64 = r31.s64 + 16;
	// lfs f0,-14888(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -14888);
	f0.f64 = double(temp.f32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r10,12416(r31)
	PPC_STORE_U32(r31.u32 + 12416, ctx.r10.u32);
	// stfs f0,12336(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12336, temp.u32);
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r9,r11,7264
	ctx.r9.s64 = r11.s64 + 7264;
	// stw r9,96(r30)
	PPC_STORE_U32(r30.u32 + 96, ctx.r9.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lbz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U8(r29.u32 + 12);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// rlwinm r10,r7,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + r11.u64;
	// lwz r4,7216(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 7216);
	// stw r4,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r4.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82f77188
	sub_82F77188(ctx, base);
	// lis r28,-31943
	r28.s64 = -2093416448;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,29520(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 29520);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82eee294
	if (!cr6.eq) goto loc_82EEE294;
	// lwz r11,29520(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 29520);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_82EEE294:
	// lwz r11,29520(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 29520);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82eee2d4
	if (cr6.eq) goto loc_82EEE2D4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// beq cr6,0x82eee2d4
	if (cr6.eq) goto loc_82EEE2D4;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r5,20(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EEE2D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82EEE2E0"))) PPC_WEAK_FUNC(sub_82EEE2E0);
PPC_FUNC_IMPL(__imp__sub_82EEE2E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r29,24
	r29.s64 = 24;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwzx r10,r30,r29
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r29.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eee328
	if (!cr6.lt) goto loc_82EEE328;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r8,r9,-14876
	ctx.r8.s64 = ctx.r9.s64 + -14876;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82EEE328:
	// stfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82ed6b28
	sub_82ED6B28(ctx, base);
	// li r11,20
	r11.s64 = 20;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// subf r11,r9,r10
	r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r8,r11,-16
	ctx.r8.s64 = r11.s64 + -16;
	// cmpw cr6,r5,r8
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, xer);
	// ble cr6,0x82eee3cc
	if (!cr6.gt) goto loc_82EEE3CC;
	// lis r28,-31943
	r28.s64 = -2093416448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,29520(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 29520);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82eee3cc
	if (!cr6.eq) goto loc_82EEE3CC;
	// lwz r11,29520(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 29520);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// lwzx r11,r30,r29
	r11.u64 = PPC_LOAD_U32(r30.u32 + r29.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eee3c0
	if (!cr6.lt) goto loc_82EEE3C0;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-14788
	ctx.r8.s64 = ctx.r9.s64 + -14788;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
loc_82EEE3C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
loc_82EEE3CC:
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f13,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 - f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x82eee400
	if (!cr6.eq) goto loc_82EEE400;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// b 0x82eee40c
	goto loc_82EEE40C;
loc_82EEE400:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
loc_82EEE40C:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r8,r11,400
	ctx.r8.s64 = r11.s64 + 400;
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r7,400(r11)
	PPC_STORE_U64(r11.u32 + 400, ctx.r7.u64);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r6,408(r11)
	PPC_STORE_U64(r11.u32 + 408, ctx.r6.u64);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// ld r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// lwz r11,108(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// addi r10,r11,80
	ctx.r10.s64 = r11.s64 + 80;
	// std r3,80(r11)
	PPC_STORE_U64(r11.u32 + 80, ctx.r3.u64);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r9,88(r11)
	PPC_STORE_U64(r11.u32 + 88, ctx.r9.u64);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,76(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eedcd0
	sub_82EEDCD0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r11.u8);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// lwzx r11,r30,r29
	r11.u64 = PPC_LOAD_U32(r30.u32 + r29.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bge cr6,0x82eee4b0
	if (!cr6.lt) goto loc_82EEE4B0;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-14788
	ctx.r8.s64 = ctx.r9.s64 + -14788;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
loc_82EEE4B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
}

