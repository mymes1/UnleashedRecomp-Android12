#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8279DDF8"))) PPC_WEAK_FUNC(sub_8279DDF8);
PPC_FUNC_IMPL(__imp__sub_8279DDF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v63{};
	// li r11,144
	r11.s64 = 144;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279DE08"))) PPC_WEAK_FUNC(sub_8279DE08);
PPC_FUNC_IMPL(__imp__sub_8279DE08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f2,144(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stfs f3,148(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-5308
	ctx.r10.s64 = ctx.r10.s64 + -5308;
	// stb r9,156(r3)
	PPC_STORE_U8(ctx.r3.u32 + 156, ctx.r9.u8);
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stfs f0,152(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stfs f0,160(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279DE38"))) PPC_WEAK_FUNC(sub_8279DE38);
PPC_FUNC_IMPL(__imp__sub_8279DE38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,152(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279DE40"))) PPC_WEAK_FUNC(sub_8279DE40);
PPC_FUNC_IMPL(__imp__sub_8279DE40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,144(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279DE48"))) PPC_WEAK_FUNC(sub_8279DE48);
PPC_FUNC_IMPL(__imp__sub_8279DE48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,148(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279DE50"))) PPC_WEAK_FUNC(sub_8279DE50);
PPC_FUNC_IMPL(__imp__sub_8279DE50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCVRegister v63{};
	PPCRegister temp{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stfs f2,144(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// li r10,160
	ctx.r10.s64 = 160;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,-5276
	r11.s64 = r11.s64 + -5276;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stb r8,148(r3)
	PPC_STORE_U8(ctx.r3.u32 + 148, ctx.r8.u8);
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,2240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stvx128 v63,r3,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,176(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stfs f0,180(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279DE88"))) PPC_WEAK_FUNC(sub_8279DE88);
PPC_FUNC_IMPL(__imp__sub_8279DE88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,176(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279DE90"))) PPC_WEAK_FUNC(sub_8279DE90);
PPC_FUNC_IMPL(__imp__sub_8279DE90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	// li r7,16
	ctx.r7.s64 = 16;
	// lvlx128 v63,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r8,32
	ctx.r8.s64 = 32;
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// addi r10,r3,80
	ctx.r10.s64 = ctx.r3.s64 + 80;
	// lvlx128 v62,r7,r4
	temp.u32 = ctx.r7.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r11,r7
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r11,r9
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v63,r7,r4
	temp.u32 = ctx.r7.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v60,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r10,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r10,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r10,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279DEE8"))) PPC_WEAK_FUNC(sub_8279DEE8);
PPC_FUNC_IMPL(__imp__sub_8279DEE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	// addi r11,r4,80
	r11.s64 = ctx.r4.s64 + 80;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r10,48
	ctx.r10.s64 = 48;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r8,r11
	temp.u32 = ctx.r8.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r9,r11
	temp.u32 = ctx.r9.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r10,r11
	temp.u32 = ctx.r10.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r3,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r3,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r3,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279DF20"))) PPC_WEAK_FUNC(sub_8279DF20);
PPC_FUNC_IMPL(__imp__sub_8279DF20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r11,r11,-5244
	r11.s64 = r11.s64 + -5244;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279DF30"))) PPC_WEAK_FUNC(sub_8279DF30);
PPC_FUNC_IMPL(__imp__sub_8279DF30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,164(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f13,164(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// lfs f12,160(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f12
	f0.f64 = double(float(f0.f64 / ctx.f12.f64));
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 * ctx.f13.f64));
	// bl 0x831b1788
	sub_831B1788(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// li r10,144
	ctx.r10.s64 = 144;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// li r28,16
	r28.s64 = 16;
	// addi r9,r9,29088
	ctx.r9.s64 = ctx.r9.s64 + 29088;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v62,r31,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r29,32
	r29.s64 = 32;
	// vmulfp128 v63,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// li r30,48
	r30.s64 = 48;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lvlx128 v61,r28,r9
	temp.u32 = r28.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lvlx128 v60,r29,r9
	temp.u32 = r29.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lvlx128 v59,r30,r9
	temp.u32 = r30.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stvx128 v61,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stvx128 v60,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v59,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e853e8
	sub_82E853E8(ctx, base);
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lvlx128 v62,r28,r11
	temp.u32 = r28.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lvlx128 v61,r29,r11
	temp.u32 = r29.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lvlx128 v60,r30,r11
	temp.u32 = r30.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r31,r31,80
	r31.s64 = r31.s64 + 80;
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x822c6a10
	sub_822C6A10(ctx, base);
	// lvlx128 v63,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r28,r3
	temp.u32 = r28.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r29,r3
	temp.u32 = r29.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r30,r3
	temp.u32 = r30.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r31,r28
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r31,r29
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r31,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8279E050"))) PPC_WEAK_FUNC(sub_8279E050);
PPC_FUNC_IMPL(__imp__sub_8279E050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,156(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 156);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8279e148
	if (!cr0.eq) goto loc_8279E148;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// lvx128 v62,r0,r6
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,48
	ctx.r10.s64 = 48;
	// vmsum3fp128 v62,v62,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v62.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// vspltisw128 v61,1
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_set1_epi32(int(0x1)));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// vspltisw128 v60,0
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f13,144(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lvlx128 v59,r10,r11
	temp.u32 = ctx.r10.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stvx128 v59,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v0,v61,1
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v61.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// lfs f11,144(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,2240(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2240);
	f0.f64 = double(temp.f32);
	// lfs f12,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vrsqrtefp128 v13,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(v62.f32))));
	// stfs f10,84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// vmulfp128 v12,v62,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v61,r0,r7
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v63,v61,v63
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v61.f32), simde_mm_load_ps(v63.f32)));
	// vmsum3fp128 v63,v63,v63
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// vmulfp128 v11,v13,v13
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp128 v10,v62,v60
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v60.f32)));
	// vor128 v9,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)v62.u8));
	// vnmsubfp v11,v12,v11,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vrsqrtefp128 v12,v63
	simde_mm_store_ps(ctx.v12.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(v63.f32))));
	// vor128 v8,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)v63.u8));
	// vmulfp128 v7,v63,v0
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v6,v63,v60
	simde_mm_store_ps(ctx.v6.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v60.f32)));
	// vmaddfp v13,v13,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v11,v12,v12
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v13,v62,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v0,v7,v11,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vsel v13,v13,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// vmaddfp v0,v12,v0,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v13,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// vmulfp128 v0,v63,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v0,v0,v8,v6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8))));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x8279e25c
	if (cr6.gt) goto loc_8279E25C;
	// li r11,1
	r11.s64 = 1;
	// stb r11,156(r31)
	PPC_STORE_U8(r31.u32 + 156, r11.u8);
	// b 0x8279e25c
	goto loc_8279E25C;
loc_8279E148:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 160);
	f0.f64 = double(temp.f32);
	// addi r11,r31,160
	r11.s64 = r31.s64 + 160;
	// lfs f13,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x8279e25c
	if (cr6.gt) goto loc_8279E25C;
	// lfs f12,152(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// li r28,48
	r28.s64 = 48;
	// addi r10,r10,29088
	ctx.r10.s64 = ctx.r10.s64 + 29088;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// li r30,32
	r30.s64 = 32;
	// li r9,148
	ctx.r9.s64 = 148;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r29,16
	r29.s64 = 16;
	// addi r8,r8,-20912
	ctx.r8.s64 = ctx.r8.s64 + -20912;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lvlx128 v63,r31,r9
	temp.u32 = r31.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// fmadds f0,f13,f12,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lvlx128 v62,r28,r10
	temp.u32 = r28.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lvlx128 v61,r30,r10
	temp.u32 = r30.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r27,r1,80
	r27.s64 = ctx.r1.s64 + 80;
	// lvlx128 v59,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvx128 v60,r0,r8
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// vmulfp128 v63,v60,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v60.f32), simde_mm_load_ps(v63.f32)));
	// lvlx128 v60,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v60,v60,0
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), 0xFF));
	// vmulfp128 v63,v63,v60
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v60.f32)));
	// lvlx128 v60,r29,r10
	temp.u32 = r29.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v59,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r27
	simde_mm_store_si128((simde__m128i*)(base + ((r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e853e8
	sub_82E853E8(ctx, base);
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lvlx128 v62,r29,r11
	temp.u32 = r29.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lvlx128 v61,r30,r11
	temp.u32 = r30.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lvlx128 v60,r28,r11
	temp.u32 = r28.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r31,r31,80
	r31.s64 = r31.s64 + 80;
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x822c6a10
	sub_822C6A10(ctx, base);
	// lvlx128 v63,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r29,r3
	temp.u32 = r29.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r30,r3
	temp.u32 = r30.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r28,r3
	temp.u32 = r28.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r31,r29
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r31,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r31,r28
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8279E25C:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8279E268"))) PPC_WEAK_FUNC(sub_8279E268);
PPC_FUNC_IMPL(__imp__sub_8279E268) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,148(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 148);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8279e360
	if (!cr0.eq) goto loc_8279E360;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// lvx128 v62,r0,r6
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,48
	ctx.r10.s64 = 48;
	// vmsum3fp128 v62,v62,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v62.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// vspltisw128 v61,1
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_set1_epi32(int(0x1)));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// vspltisw128 v60,0
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f13,144(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lvlx128 v59,r10,r11
	temp.u32 = ctx.r10.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stvx128 v59,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v0,v61,1
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v61.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// lfs f11,144(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,2240(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2240);
	f0.f64 = double(temp.f32);
	// lfs f12,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vrsqrtefp128 v13,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(v62.f32))));
	// stfs f10,84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// vmulfp128 v12,v62,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v61,r0,r7
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v63,v61,v63
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v61.f32), simde_mm_load_ps(v63.f32)));
	// vmsum3fp128 v63,v63,v63
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// vmulfp128 v11,v13,v13
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp128 v10,v62,v60
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v60.f32)));
	// vor128 v9,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)v62.u8));
	// vnmsubfp v11,v12,v11,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vrsqrtefp128 v12,v63
	simde_mm_store_ps(ctx.v12.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(v63.f32))));
	// vor128 v8,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)v63.u8));
	// vmulfp128 v7,v63,v0
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v6,v63,v60
	simde_mm_store_ps(ctx.v6.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v60.f32)));
	// vmaddfp v13,v13,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v11,v12,v12
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v13,v62,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v0,v7,v11,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vsel v13,v13,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// vmaddfp v0,v12,v0,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v13,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// vmulfp128 v0,v63,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v0,v0,v8,v6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8))));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x8279e42c
	if (cr6.gt) goto loc_8279E42C;
	// li r11,1
	r11.s64 = 1;
	// stb r11,148(r31)
	PPC_STORE_U8(r31.u32 + 148, r11.u8);
	// b 0x8279e42c
	goto loc_8279E42C;
loc_8279E360:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 180);
	f0.f64 = double(temp.f32);
	// lfs f13,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x8279e42c
	if (cr6.gt) goto loc_8279E42C;
	// lfs f12,176(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// fdivs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f13,-22120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22120);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + f0.f64));
	// stfs f12,180(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 180, temp.u32);
	// lfs f0,-3780(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -3780);
	f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 * ctx.f13.f64));
	// bl 0x82e85988
	sub_82E85988(ctx, base);
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// li r29,16
	r29.s64 = 16;
	// li r30,32
	r30.s64 = 32;
	// li r28,48
	r28.s64 = 48;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lvlx128 v62,r29,r11
	temp.u32 = r29.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lvlx128 v61,r30,r11
	temp.u32 = r30.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvlx128 v60,r28,r11
	temp.u32 = r28.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r31,80
	r31.s64 = r31.s64 + 80;
	// stvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e84be0
	sub_82E84BE0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x822c6a10
	sub_822C6A10(ctx, base);
	// lvlx128 v63,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r29,r3
	temp.u32 = r29.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r30,r3
	temp.u32 = r30.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r28,r3
	temp.u32 = r28.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r31,r29
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r31,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r31,r28
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8279E42C:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8279E438"))) PPC_WEAK_FUNC(sub_8279E438);
PPC_FUNC_IMPL(__imp__sub_8279E438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31956
	r11.s64 = -2094268416;
	// stfs f1,-30568(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -30568, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279E448"))) PPC_WEAK_FUNC(sub_8279E448);
PPC_FUNC_IMPL(__imp__sub_8279E448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31956
	r11.s64 = -2094268416;
	// stfs f1,-30564(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -30564, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279E458"))) PPC_WEAK_FUNC(sub_8279E458);
PPC_FUNC_IMPL(__imp__sub_8279E458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lfs f1,-30568(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -30568);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279E468"))) PPC_WEAK_FUNC(sub_8279E468);
PPC_FUNC_IMPL(__imp__sub_8279E468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lfs f1,-30564(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -30564);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279E478"))) PPC_WEAK_FUNC(sub_8279E478);
PPC_FUNC_IMPL(__imp__sub_8279E478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// stw r4,48(r11)
	PPC_STORE_U32(r11.u32 + 48, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279E488"))) PPC_WEAK_FUNC(sub_8279E488);
PPC_FUNC_IMPL(__imp__sub_8279E488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// lfs f0,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	f0.f64 = double(temp.f32);
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 + ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279E4A0"))) PPC_WEAK_FUNC(sub_8279E4A0);
PPC_FUNC_IMPL(__imp__sub_8279E4A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// stfs f1,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 56, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279E4B0"))) PPC_WEAK_FUNC(sub_8279E4B0);
PPC_FUNC_IMPL(__imp__sub_8279E4B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,192(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 192);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279E4C0"))) PPC_WEAK_FUNC(sub_8279E4C0);
PPC_FUNC_IMPL(__imp__sub_8279E4C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// lfs f1,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279E4D0"))) PPC_WEAK_FUNC(sub_8279E4D0);
PPC_FUNC_IMPL(__imp__sub_8279E4D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// stw r4,92(r11)
	PPC_STORE_U32(r11.u32 + 92, ctx.r4.u32);
	// lwz r11,192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// stw r5,96(r11)
	PPC_STORE_U32(r11.u32 + 96, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279E4E8"))) PPC_WEAK_FUNC(sub_8279E4E8);
PPC_FUNC_IMPL(__imp__sub_8279E4E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279E4F8"))) PPC_WEAK_FUNC(sub_8279E4F8);
PPC_FUNC_IMPL(__imp__sub_8279E4F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279E508"))) PPC_WEAK_FUNC(sub_8279E508);
PPC_FUNC_IMPL(__imp__sub_8279E508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// lfs f1,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279E518"))) PPC_WEAK_FUNC(sub_8279E518);
PPC_FUNC_IMPL(__imp__sub_8279E518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// lfs f1,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279E528"))) PPC_WEAK_FUNC(sub_8279E528);
PPC_FUNC_IMPL(__imp__sub_8279E528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// lfs f0,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	f0.f64 = double(temp.f32);
	// stfs f0,56(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 56, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279E538"))) PPC_WEAK_FUNC(sub_8279E538);
PPC_FUNC_IMPL(__imp__sub_8279E538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lfs f0,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279E550"))) PPC_WEAK_FUNC(sub_8279E550);
PPC_FUNC_IMPL(__imp__sub_8279E550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// lfs f0,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	f0.f64 = double(temp.f32);
	// lfs f13,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f0,56(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 56, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279E568"))) PPC_WEAK_FUNC(sub_8279E568);
PPC_FUNC_IMPL(__imp__sub_8279E568) {
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
	// lwz r11,192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8279e59c
	if (!cr6.eq) goto loc_8279E59C;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
loc_8279E59C:
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

__attribute__((alias("__imp__sub_8279E5B0"))) PPC_WEAK_FUNC(sub_8279E5B0);
PPC_FUNC_IMPL(__imp__sub_8279E5B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 60);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279E5C0"))) PPC_WEAK_FUNC(sub_8279E5C0);
PPC_FUNC_IMPL(__imp__sub_8279E5C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8279e5d8
	if (!cr6.eq) goto loc_8279E5D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8279E5D8:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r3,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	ctx.r3.s64 = r11.s32 >> 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279E5E8"))) PPC_WEAK_FUNC(sub_8279E5E8);
PPC_FUNC_IMPL(__imp__sub_8279E5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8279e640
	if (cr0.eq) goto loc_8279E640;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-5192
	ctx.r9.s64 = r11.s64 + -5192;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8279e644
	goto loc_8279E644;
loc_8279E640:
	// li r11,0
	r11.s64 = 0;
loc_8279E644:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8279e690
	if (!cr6.eq) goto loc_8279E690;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8279e670
	if (cr6.eq) goto loc_8279E670;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8279E670:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-30556(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -30556);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8279E690:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_8279E6B0"))) PPC_WEAK_FUNC(sub_8279E6B0);
PPC_FUNC_IMPL(__imp__sub_8279E6B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r10,192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r10,76
	r11.s64 = ctx.r10.s64 + 76;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r9,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r9.u32);
	// b 0x822c6570
	sub_822C6570(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279E6D0"))) PPC_WEAK_FUNC(sub_8279E6D0);
PPC_FUNC_IMPL(__imp__sub_8279E6D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,192(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 192);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8279E6F0:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8279e6f0
	if (!cr0.eq) goto loc_8279E6F0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279E710"))) PPC_WEAK_FUNC(sub_8279E710);
PPC_FUNC_IMPL(__imp__sub_8279E710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r30,r4,4
	r30.s64 = ctx.r4.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// beq cr6,0x8279e760
	if (cr6.eq) goto loc_8279E760;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8279E744:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8279e744
	if (!cr0.eq) goto loc_8279E744;
loc_8279E760:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// beq cr6,0x8279e79c
	if (cr6.eq) goto loc_8279E79C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8279E780:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8279e780
	if (!cr0.eq) goto loc_8279E780;
loc_8279E79C:
	// stfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stb r8,20(r31)
	PPC_STORE_U8(r31.u32 + 20, ctx.r8.u8);
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// lfs f0,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// bl 0x8279e458
	sub_8279E458(ctx, base);
	// stfs f1,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// bl 0x8279e468
	sub_8279E468(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f1,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stb r10,60(r31)
	PPC_STORE_U8(r31.u32 + 60, ctx.r10.u8);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279e7f4
	if (cr6.eq) goto loc_8279E7F4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8279E7F4:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279e804
	if (cr6.eq) goto loc_8279E804;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8279E804:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8279E810"))) PPC_WEAK_FUNC(sub_8279E810);
PPC_FUNC_IMPL(__imp__sub_8279E810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
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
	// li r31,0
	r31.s64 = 0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r9,r10,-15648
	ctx.r9.s64 = ctx.r10.s64 + -15648;
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r31.u32);
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
	// stfs f0,16(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// stb r31,20(r30)
	PPC_STORE_U8(r30.u32 + 20, r31.u8);
	// lfs f0,-15648(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15648);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 32, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 36, temp.u32);
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 40, temp.u32);
	// lfs f0,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 44, temp.u32);
	// bl 0x8279e458
	sub_8279E458(ctx, base);
	// stfs f1,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 48, temp.u32);
	// bl 0x8279e468
	sub_8279E468(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stfs f1,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 52, temp.u32);
	// stb r31,60(r30)
	PPC_STORE_U8(r30.u32 + 60, r31.u8);
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_8279E8B0"))) PPC_WEAK_FUNC(sub_8279E8B0);
PPC_FUNC_IMPL(__imp__sub_8279E8B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// addi r10,r30,8
	ctx.r10.s64 = r30.s64 + 8;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lbz r11,20(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 20);
	// stb r11,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,32(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f0,36(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 36);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f0,40(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 40);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// lfs f0,44(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 44);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// lfs f0,48(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 48);
	f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// lfs f0,52(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 52);
	f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// lbz r11,60(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 60);
	// stb r11,60(r31)
	PPC_STORE_U8(r31.u32 + 60, r11.u8);
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

__attribute__((alias("__imp__sub_8279E968"))) PPC_WEAK_FUNC(sub_8279E968);
PPC_FUNC_IMPL(__imp__sub_8279E968) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8279E9B8"))) PPC_WEAK_FUNC(sub_8279E9B8);
PPC_FUNC_IMPL(__imp__sub_8279E9B8) {
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
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8279ea1c
	if (cr6.eq) goto loc_8279EA1C;
	// bl 0x827cb988
	sub_827CB988(ctx, base);
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8279ea04
	goto loc_8279EA04;
loc_8279E9F0:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// bl 0x827cb990
	sub_827CB990(ctx, base);
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_8279EA04:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x8279e9f0
	if (!cr6.eq) goto loc_8279E9F0;
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// bl 0x827cb998
	sub_827CB998(ctx, base);
loc_8279EA1C:
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

__attribute__((alias("__imp__sub_8279EA38"))) PPC_WEAK_FUNC(sub_8279EA38);
PPC_FUNC_IMPL(__imp__sub_8279EA38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r30,r31,40
	r30.s64 = r31.s64 + 40;
	// bne cr6,0x8279ea5c
	if (!cr6.eq) goto loc_8279EA5C;
	// li r30,0
	r30.s64 = 0;
loc_8279EA5C:
	// lis r11,-31959
	r11.s64 = -2094465024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-10412(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -10412);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250c3a8
	sub_8250C3A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82512b90
	sub_82512B90(ctx, base);
	// lwz r11,192(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// li r29,1
	r29.s64 = 1;
	// stb r29,72(r11)
	PPC_STORE_U8(r11.u32 + 72, r29.u8);
	// lwz r11,192(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// lwz r30,4(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8279eb2c
	goto loc_8279EB2C;
loc_8279EAA8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8279eb24
	if (!cr0.eq) goto loc_8279EB24;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// beq cr6,0x8279eaf0
	if (cr6.eq) goto loc_8279EAF0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8279EAD4:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8279ead4
	if (!cr0.eq) goto loc_8279EAD4;
loc_8279EAF0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r27,r1,80
	r27.s64 = ctx.r1.s64 + 80;
	// bl 0x82512d38
	sub_82512D38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82510d20
	sub_82510D20(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stb r29,32(r11)
	PPC_STORE_U8(r11.u32 + 32, r29.u8);
loc_8279EB24:
	// lwz r11,192(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
loc_8279EB2C:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x8279eaa8
	if (!cr6.eq) goto loc_8279EAA8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8279EB40"))) PPC_WEAK_FUNC(sub_8279EB40);
PPC_FUNC_IMPL(__imp__sub_8279EB40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,192(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 192);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8279ec10
	if (cr6.eq) goto loc_8279EC10;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// blt cr6,0x8279ec10
	if (cr6.lt) goto loc_8279EC10;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r28,28(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lwz r27,24(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8279ebac
	if (cr6.eq) goto loc_8279EBAC;
	// addi r11,r28,4
	r11.s64 = r28.s64 + 4;
loc_8279EB90:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8279eb90
	if (!cr0.eq) goto loc_8279EB90;
loc_8279EBAC:
	// lwz r11,192(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 192);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8279ebc4
	if (!cr6.eq) goto loc_8279EBC4;
	// li r31,0
	r31.s64 = 0;
	// b 0x8279ebd0
	goto loc_8279EBD0;
loc_8279EBC4:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r31,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r31.s64 = r11.s32 >> 3;
loc_8279EBD0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8279ec00
	if (cr6.eq) goto loc_8279EC00;
	// li r30,0
	r30.s64 = 0;
loc_8279EBDC:
	// lwz r11,192(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 192);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x825a5e40
	sub_825A5E40(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x8279ebdc
	if (!cr0.eq) goto loc_8279EBDC;
loc_8279EC00:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8279ec10
	if (cr6.eq) goto loc_8279EC10;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8279EC10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8279EC18"))) PPC_WEAK_FUNC(sub_8279EC18);
PPC_FUNC_IMPL(__imp__sub_8279EC18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8279ec48
	if (cr6.eq) goto loc_8279EC48;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi. r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8279ec48
	if (cr0.eq) goto loc_8279EC48;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// blr 
	return;
loc_8279EC48:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279EC50"))) PPC_WEAK_FUNC(sub_8279EC50);
PPC_FUNC_IMPL(__imp__sub_8279EC50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,192(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 192);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8279ecb4
	if (cr6.eq) goto loc_8279ECB4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi. r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8279ecb4
	if (cr0.eq) goto loc_8279ECB4;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8279EC94:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8279ec94
	if (!cr0.eq) goto loc_8279EC94;
	// blr 
	return;
loc_8279ECB4:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279ECC8"))) PPC_WEAK_FUNC(sub_8279ECC8);
PPC_FUNC_IMPL(__imp__sub_8279ECC8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8279ed00
	goto loc_8279ED00;
loc_8279ECE8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x825a5e40
	sub_825A5E40(ctx, base);
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_8279ED00:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8279ece8
	if (!cr6.eq) goto loc_8279ECE8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8279ED18"))) PPC_WEAK_FUNC(sub_8279ED18);
PPC_FUNC_IMPL(__imp__sub_8279ED18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,-4
	r31.s64 = r11.s64 + -4;
	// bne cr6,0x8279ed50
	if (!cr6.eq) goto loc_8279ED50;
	// li r31,0
	r31.s64 = 0;
loc_8279ED50:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8279edf4
	if (cr6.eq) goto loc_8279EDF4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8279eb40
	sub_8279EB40(ctx, base);
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8279ede8
	goto loc_8279EDE8;
loc_8279ED74:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8279ede0
	if (cr6.eq) goto loc_8279EDE0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8279edcc
	if (cr6.eq) goto loc_8279EDCC;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi. r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8279edcc
	if (cr0.eq) goto loc_8279EDCC;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// b 0x8279edd0
	goto loc_8279EDD0;
loc_8279EDCC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8279EDD0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8279EDE0:
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_8279EDE8:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8279ed74
	if (!cr6.eq) goto loc_8279ED74;
loc_8279EDF4:
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

__attribute__((alias("__imp__sub_8279EE10"))) PPC_WEAK_FUNC(sub_8279EE10);
PPC_FUNC_IMPL(__imp__sub_8279EE10) {
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
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8279ee5c
	goto loc_8279EE5C;
loc_8279EE34:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8279ee54
	if (cr6.eq) goto loc_8279EE54;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8279EE54:
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_8279EE5C:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8279ee34
	if (!cr6.eq) goto loc_8279EE34;
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

__attribute__((alias("__imp__sub_8279EE80"))) PPC_WEAK_FUNC(sub_8279EE80);
PPC_FUNC_IMPL(__imp__sub_8279EE80) {
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
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8279eecc
	goto loc_8279EECC;
loc_8279EEA4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8279eec4
	if (cr6.eq) goto loc_8279EEC4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8279EEC4:
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_8279EECC:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8279eea4
	if (!cr6.eq) goto loc_8279EEA4;
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

__attribute__((alias("__imp__sub_8279EEF0"))) PPC_WEAK_FUNC(sub_8279EEF0);
PPC_FUNC_IMPL(__imp__sub_8279EEF0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8279ef3c
	goto loc_8279EF3C;
loc_8279EF10:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8279ef34
	if (cr6.eq) goto loc_8279EF34;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8279EF34:
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_8279EF3C:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8279ef10
	if (!cr6.eq) goto loc_8279EF10;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8279EF50"))) PPC_WEAK_FUNC(sub_8279EF50);
PPC_FUNC_IMPL(__imp__sub_8279EF50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8279efa8
	goto loc_8279EFA8;
loc_8279EF74:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8279efa0
	if (cr6.eq) goto loc_8279EFA0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8279efd0
	if (cr0.eq) goto loc_8279EFD0;
loc_8279EFA0:
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_8279EFA8:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8279ef74
	if (!cr6.eq) goto loc_8279EF74;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8279EFB8:
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
loc_8279EFD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8279efb8
	goto loc_8279EFB8;
}

__attribute__((alias("__imp__sub_8279EFD8"))) PPC_WEAK_FUNC(sub_8279EFD8);
PPC_FUNC_IMPL(__imp__sub_8279EFD8) {
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
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8279f024
	goto loc_8279F024;
loc_8279EFFC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8279f01c
	if (cr6.eq) goto loc_8279F01C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8279F01C:
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_8279F024:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8279effc
	if (!cr6.eq) goto loc_8279EFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82513ed8
	sub_82513ED8(ctx, base);
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

__attribute__((alias("__imp__sub_8279F050"))) PPC_WEAK_FUNC(sub_8279F050);
PPC_FUNC_IMPL(__imp__sub_8279F050) {
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
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8279f09c
	goto loc_8279F09C;
loc_8279F074:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8279f094
	if (cr6.eq) goto loc_8279F094;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8279F094:
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_8279F09C:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8279f074
	if (!cr6.eq) goto loc_8279F074;
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

__attribute__((alias("__imp__sub_8279F0C0"))) PPC_WEAK_FUNC(sub_8279F0C0);
PPC_FUNC_IMPL(__imp__sub_8279F0C0) {
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
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8279f10c
	goto loc_8279F10C;
loc_8279F0E4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8279f104
	if (cr6.eq) goto loc_8279F104;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8279F104:
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_8279F10C:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8279f0e4
	if (!cr6.eq) goto loc_8279F0E4;
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8279f150
	if (cr6.eq) goto loc_8279F150;
	// bl 0x82a62618
	sub_82A62618(ctx, base);
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,84
	r11.s64 = r11.s64 + 84;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// beq cr6,0x8279f150
	if (cr6.eq) goto loc_8279F150;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8279F150:
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

__attribute__((alias("__imp__sub_8279F168"))) PPC_WEAK_FUNC(sub_8279F168);
PPC_FUNC_IMPL(__imp__sub_8279F168) {
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
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8279f1b4
	goto loc_8279F1B4;
loc_8279F18C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8279f1ac
	if (cr6.eq) goto loc_8279F1AC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8279F1AC:
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_8279F1B4:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8279f18c
	if (!cr6.eq) goto loc_8279F18C;
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

__attribute__((alias("__imp__sub_8279F1D8"))) PPC_WEAK_FUNC(sub_8279F1D8);
PPC_FUNC_IMPL(__imp__sub_8279F1D8) {
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
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8279f224
	goto loc_8279F224;
loc_8279F1FC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8279f21c
	if (cr6.eq) goto loc_8279F21C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8279F21C:
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_8279F224:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8279f1fc
	if (!cr6.eq) goto loc_8279F1FC;
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

__attribute__((alias("__imp__sub_8279F248"))) PPC_WEAK_FUNC(sub_8279F248);
PPC_FUNC_IMPL(__imp__sub_8279F248) {
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
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8279f294
	goto loc_8279F294;
loc_8279F26C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8279f28c
	if (cr6.eq) goto loc_8279F28C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8279F28C:
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_8279F294:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8279f26c
	if (!cr6.eq) goto loc_8279F26C;
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

__attribute__((alias("__imp__sub_8279F2B8"))) PPC_WEAK_FUNC(sub_8279F2B8);
PPC_FUNC_IMPL(__imp__sub_8279F2B8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8279f304
	goto loc_8279F304;
loc_8279F2D8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8279f2fc
	if (cr6.eq) goto loc_8279F2FC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8279F2FC:
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_8279F304:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8279f2d8
	if (!cr6.eq) goto loc_8279F2D8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8279F318"))) PPC_WEAK_FUNC(sub_8279F318);
PPC_FUNC_IMPL(__imp__sub_8279F318) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8279f364
	goto loc_8279F364;
loc_8279F338:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8279f35c
	if (cr6.eq) goto loc_8279F35C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8279F35C:
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_8279F364:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8279f338
	if (!cr6.eq) goto loc_8279F338;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8279F378"))) PPC_WEAK_FUNC(sub_8279F378);
PPC_FUNC_IMPL(__imp__sub_8279F378) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r4,r30,40
	ctx.r4.s64 = r30.s64 + 40;
	// bne cr6,0x8279f39c
	if (!cr6.eq) goto loc_8279F39C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8279F39C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250c358
	sub_8250C358(ctx, base);
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8279f3d8
	goto loc_8279F3D8;
loc_8279F3B0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,40
	ctx.r4.s64 = r11.s64 + 40;
	// bne cr6,0x8279f3c8
	if (!cr6.eq) goto loc_8279F3C8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8279F3C8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250c358
	sub_8250C358(ctx, base);
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_8279F3D8:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8279f3b0
	if (!cr6.eq) goto loc_8279F3B0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8279F3F0"))) PPC_WEAK_FUNC(sub_8279F3F0);
PPC_FUNC_IMPL(__imp__sub_8279F3F0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r4,r30,40
	ctx.r4.s64 = r30.s64 + 40;
	// bne cr6,0x8279f414
	if (!cr6.eq) goto loc_8279F414;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8279F414:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250c688
	sub_8250C688(ctx, base);
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8279f450
	goto loc_8279F450;
loc_8279F428:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,40
	ctx.r4.s64 = r11.s64 + 40;
	// bne cr6,0x8279f440
	if (!cr6.eq) goto loc_8279F440;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8279F440:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250c688
	sub_8250C688(ctx, base);
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_8279F450:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8279f428
	if (!cr6.eq) goto loc_8279F428;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8279F468"))) PPC_WEAK_FUNC(sub_8279F468);
PPC_FUNC_IMPL(__imp__sub_8279F468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8279f49c
	if (cr6.eq) goto loc_8279F49C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi. r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8279f49c
	if (cr0.eq) goto loc_8279F49C;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// b 0x83159478
	sub_83159478(ctx, base);
	return;
loc_8279F49C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279F4A8"))) PPC_WEAK_FUNC(sub_8279F4A8);
PPC_FUNC_IMPL(__imp__sub_8279F4A8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r28,0
	r28.s64 = 0;
	// lwz r11,192(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 192);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lwz r29,4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x8279f620
	if (cr6.eq) goto loc_8279F620;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r24,r11,-5176
	r24.s64 = r11.s64 + -5176;
loc_8279F4E8:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8279f60c
	if (!cr6.eq) goto loc_8279F60C;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,937
	ctx.r5.s64 = 937;
	// li r3,220
	ctx.r3.s64 = 220;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8279f558
	if (cr0.eq) goto loc_8279F558;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,192(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 192);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ori r30,r30,1
	r30.u64 = r30.u64 | 1;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// lwz r23,68(r10)
	r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// bl 0x827b4d80
	sub_827B4D80(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// bl 0x827bb9f8
	sub_827BB9F8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x8279f55c
	goto loc_8279F55C;
loc_8279F558:
	// li r31,0
	r31.s64 = 0;
loc_8279F55C:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8279e5e8
	sub_8279E5E8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8279f598
	if (cr0.eq) goto loc_8279F598;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r30,r30,0,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279f598
	if (cr6.eq) goto loc_8279F598;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8279F598:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x827b0378
	sub_827B0378(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x827be590
	sub_827BE590(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r31,8
	ctx.r10.s64 = r31.s64 + 8;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279f5ec
	if (cr6.eq) goto loc_8279F5EC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8279F5EC:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279f5fc
	if (cr6.eq) goto loc_8279F5FC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8279F5FC:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279f60c
	if (cr6.eq) goto loc_8279F60C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8279F60C:
	// lwz r11,192(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 192);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x8279f4e8
	if (!cr6.eq) goto loc_8279F4E8;
loc_8279F620:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_8279F628"))) PPC_WEAK_FUNC(sub_8279F628);
PPC_FUNC_IMPL(__imp__sub_8279F628) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,192(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 192);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8279f680
	goto loc_8279F680;
loc_8279F648:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stb r29,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r29.u8);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r30,8(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r10,80(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8279f678
	if (!cr6.eq) goto loc_8279F678;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// stw r3,80(r30)
	PPC_STORE_U32(r30.u32 + 80, ctx.r3.u32);
loc_8279F678:
	// lwz r11,192(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 192);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_8279F680:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8279f648
	if (!cr6.eq) goto loc_8279F648;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8279F698"))) PPC_WEAK_FUNC(sub_8279F698);
PPC_FUNC_IMPL(__imp__sub_8279F698) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,192(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 192);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8279f70c
	goto loc_8279F70C;
loc_8279F6B4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82512d88
	sub_82512D88(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,-192
	ctx.r4.s64 = r11.s64 + -192;
	// bne cr6,0x8279f6d8
	if (!cr6.eq) goto loc_8279F6D8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8279F6D8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827b0378
	sub_827B0378(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x827bdf00
	sub_827BDF00(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279f6fc
	if (cr6.eq) goto loc_8279F6FC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8279F6FC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r11,192(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 192);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_8279F70C:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8279f6b4
	if (!cr6.eq) goto loc_8279F6B4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8279F720"))) PPC_WEAK_FUNC(sub_8279F720);
PPC_FUNC_IMPL(__imp__sub_8279F720) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,192(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 192);
	// stw r28,68(r11)
	PPC_STORE_U32(r11.u32 + 68, r28.u32);
	// lwz r11,192(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 192);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8279f778
	goto loc_8279F778;
loc_8279F74C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,192(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 192);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_8279F778:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8279f74c
	if (!cr6.eq) goto loc_8279F74C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8279F790"))) PPC_WEAK_FUNC(sub_8279F790);
PPC_FUNC_IMPL(__imp__sub_8279F790) {
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
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// stw r29,68(r11)
	PPC_STORE_U32(r11.u32 + 68, r29.u32);
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8279f7e4
	goto loc_8279F7E4;
loc_8279F7BC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_8279F7E4:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8279f7bc
	if (!cr6.eq) goto loc_8279F7BC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8279F7F8"))) PPC_WEAK_FUNC(sub_8279F7F8);
PPC_FUNC_IMPL(__imp__sub_8279F7F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8279f81c
	goto loc_8279F81C;
loc_8279F808:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8279f82c
	if (!cr6.eq) goto loc_8279F82C;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_8279F81C:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8279f808
	if (!cr6.eq) goto loc_8279F808;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8279F82C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8279F848"))) PPC_WEAK_FUNC(sub_8279F848);
PPC_FUNC_IMPL(__imp__sub_8279F848) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8279f8b0
	goto loc_8279F8B0;
loc_8279F868:
	// lwz r11,192(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 192);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8279f898
	if (cr6.eq) goto loc_8279F898;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi. r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8279f898
	if (cr0.eq) goto loc_8279F898;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// b 0x8279f89c
	goto loc_8279F89C;
loc_8279F898:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8279F89C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x825a5e40
	sub_825A5E40(ctx, base);
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_8279F8B0:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8279f868
	if (!cr6.eq) goto loc_8279F868;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8279F8C8"))) PPC_WEAK_FUNC(sub_8279F8C8);
PPC_FUNC_IMPL(__imp__sub_8279F8C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// clrlwi r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	// lbz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 52);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stb r4,52(r10)
	PPC_STORE_U8(ctx.r10.u32 + 52, ctx.r4.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8279f8ec
	if (cr6.eq) goto loc_8279F8EC;
	// b 0x8279f050
	sub_8279F050(ctx, base);
	return;
loc_8279F8EC:
	// b 0x8279f0c0
	sub_8279F0C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279F8F0"))) PPC_WEAK_FUNC(sub_8279F8F0);
PPC_FUNC_IMPL(__imp__sub_8279F8F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279F8F8"))) PPC_WEAK_FUNC(sub_8279F8F8);
PPC_FUNC_IMPL(__imp__sub_8279F8F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,28(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8279f92c
	if (cr6.lt) goto loc_8279F92C;
	// beq cr6,0x8279f928
	if (cr6.eq) goto loc_8279F928;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// b 0x8279efd8
	sub_8279EFD8(ctx, base);
	return;
loc_8279F928:
	// b 0x8279ee10
	sub_8279EE10(ctx, base);
	return;
loc_8279F92C:
	// b 0x82513ed8
	sub_82513ED8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279F930"))) PPC_WEAK_FUNC(sub_8279F930);
PPC_FUNC_IMPL(__imp__sub_8279F930) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279F938"))) PPC_WEAK_FUNC(sub_8279F938);
PPC_FUNC_IMPL(__imp__sub_8279F938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r11,192(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 192);
	// lwz r10,52(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 52);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x8279fa94
	if (!cr6.eq) goto loc_8279FA94;
	// lbz r11,52(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 52);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8279fa94
	if (!cr0.eq) goto loc_8279FA94;
	// bl 0x82e5ec98
	sub_82E5EC98(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8279fa94
	if (!cr0.eq) goto loc_8279FA94;
	// lwz r11,192(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 192);
	// lwz r30,4(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x8279fa94
	if (cr6.eq) goto loc_8279FA94;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// addi r29,r27,40
	r29.s64 = r27.s64 + 40;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r28,r11,-5176
	r28.s64 = r11.s64 + -5176;
loc_8279F9A0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823205d8
	sub_823205D8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// beq cr6,0x8279f9e4
	if (cr6.eq) goto loc_8279F9E4;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8279F9C8:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8279f9c8
	if (!cr0.eq) goto loc_8279F9C8;
loc_8279F9E4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r31,r1,88
	r31.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,590
	ctx.r5.s64 = 590;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8279fa28
	if (cr6.eq) goto loc_8279FA28;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8279FA28:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279fa38
	if (cr6.eq) goto loc_8279FA38;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8279FA38:
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8279fa80
	if (cr0.eq) goto loc_8279FA80;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lfs f13,56(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r26,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r26.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v63,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// vmsum3fp128 v63,v63,v63
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x8279fa80
	if (!cr6.lt) goto loc_8279FA80;
	// stfs f0,56(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 56, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// stw r3,48(r26)
	PPC_STORE_U32(r26.u32 + 48, ctx.r3.u32);
loc_8279FA80:
	// lwz r11,192(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 192);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x8279f9a0
	if (!cr6.eq) goto loc_8279F9A0;
loc_8279FA94:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8279FAA0"))) PPC_WEAK_FUNC(sub_8279FAA0);
PPC_FUNC_IMPL(__imp__sub_8279FAA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,192(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 192);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x8279fb70
	if (cr6.eq) goto loc_8279FB70;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r29,r28,40
	r29.s64 = r28.s64 + 40;
	// addi r30,r11,-5176
	r30.s64 = r11.s64 + -5176;
loc_8279FAD0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823d6a88
	sub_823D6A88(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// beq cr6,0x8279fb10
	if (cr6.eq) goto loc_8279FB10;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8279FAF4:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8279faf4
	if (!cr0.eq) goto loc_8279FAF4;
loc_8279FB10:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r27,r1,80
	r27.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,887
	ctx.r5.s64 = 887;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279fb4c
	if (cr6.eq) goto loc_8279FB4C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8279FB4C:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279fb5c
	if (cr6.eq) goto loc_8279FB5C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8279FB5C:
	// lwz r11,192(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 192);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8279fad0
	if (!cr6.eq) goto loc_8279FAD0;
loc_8279FB70:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82513ed8
	sub_82513ED8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8279FB80"))) PPC_WEAK_FUNC(sub_8279FB80);
PPC_FUNC_IMPL(__imp__sub_8279FB80) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8279fce4
	if (cr6.eq) goto loc_8279FCE4;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// beq cr6,0x8279fdd4
	if (cr6.eq) goto loc_8279FDD4;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r25,r11,-5176
	r25.s64 = r11.s64 + -5176;
loc_8279FBCC:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,950
	ctx.r5.s64 = 950;
	// li r3,220
	ctx.r3.s64 = 220;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8279fc2c
	if (cr0.eq) goto loc_8279FC2C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r10,192(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 192);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r28,12(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// ori r29,r29,1
	r29.u64 = r29.u64 | 1;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// lwz r24,68(r10)
	r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// bl 0x827b4d80
	sub_827B4D80(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// bl 0x827bb9f8
	sub_827BB9F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8279fc30
	goto loc_8279FC30;
loc_8279FC2C:
	// li r30,0
	r30.s64 = 0;
loc_8279FC30:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8279e5e8
	sub_8279E5E8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8279fc6c
	if (cr0.eq) goto loc_8279FC6C;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r29,r29,0,0,30
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279fc6c
	if (cr6.eq) goto loc_8279FC6C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8279FC6C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x827b0378
	sub_827B0378(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x827be590
	sub_827BE590(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279fca0
	if (cr6.eq) goto loc_8279FCA0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8279FCA0:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279fcb0
	if (cr6.eq) goto loc_8279FCB0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8279FCB0:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279fcc0
	if (cr6.eq) goto loc_8279FCC0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8279FCC0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827e1578
	sub_827E1578(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x8279fbcc
	if (!cr6.eq) goto loc_8279FBCC;
	// b 0x8279fdd4
	goto loc_8279FDD4;
loc_8279FCE4:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-5176
	ctx.r4.s64 = r11.s64 + -5176;
	// li r5,954
	ctx.r5.s64 = 954;
	// li r3,220
	ctx.r3.s64 = 220;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8279fd44
	if (cr0.eq) goto loc_8279FD44;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r10,192(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 192);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r29,2
	r29.s64 = 2;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// lwz r28,68(r10)
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// bl 0x827b4d80
	sub_827B4D80(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x827bb9f8
	sub_827BB9F8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8279fd48
	goto loc_8279FD48;
loc_8279FD44:
	// li r31,0
	r31.s64 = 0;
loc_8279FD48:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8279e5e8
	sub_8279E5E8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// rlwinm. r11,r29,0,30,30
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8279fd80
	if (cr0.eq) goto loc_8279FD80;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279fd80
	if (cr6.eq) goto loc_8279FD80;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8279FD80:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827b0378
	sub_827B0378(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x827be590
	sub_827BE590(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279fdb4
	if (cr6.eq) goto loc_8279FDB4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8279FDB4:
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279fdc4
	if (cr6.eq) goto loc_8279FDC4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8279FDC4:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279fdd4
	if (cr6.eq) goto loc_8279FDD4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8279FDD4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_8279FDE0"))) PPC_WEAK_FUNC(sub_8279FDE0);
PPC_FUNC_IMPL(__imp__sub_8279FDE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,192(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82377548
	sub_82377548(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// beq cr6,0x8279fe58
	if (cr6.eq) goto loc_8279FE58;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8279FE3C:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8279fe3c
	if (!cr0.eq) goto loc_8279FE3C;
loc_8279FE58:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-5176
	ctx.r4.s64 = r11.s64 + -5176;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,1034
	ctx.r5.s64 = 1034;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279fe84
	if (cr6.eq) goto loc_8279FE84;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8279FE84:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279fe94
	if (cr6.eq) goto loc_8279FE94;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8279FE94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8279FEA0"))) PPC_WEAK_FUNC(sub_8279FEA0);
PPC_FUNC_IMPL(__imp__sub_8279FEA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,192(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82463218
	sub_82463218(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// beq cr6,0x8279ff18
	if (cr6.eq) goto loc_8279FF18;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8279FEFC:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8279fefc
	if (!cr0.eq) goto loc_8279FEFC;
loc_8279FF18:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-5176
	ctx.r4.s64 = r11.s64 + -5176;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,1040
	ctx.r5.s64 = 1040;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279ff44
	if (cr6.eq) goto loc_8279FF44;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8279FF44:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279ff54
	if (cr6.eq) goto loc_8279FF54;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8279FF54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8279FF60"))) PPC_WEAK_FUNC(sub_8279FF60);
PPC_FUNC_IMPL(__imp__sub_8279FF60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,192(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823205d8
	sub_823205D8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// beq cr6,0x8279ffdc
	if (cr6.eq) goto loc_8279FFDC;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8279FFC0:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8279ffc0
	if (!cr0.eq) goto loc_8279FFC0;
loc_8279FFDC:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-5176
	ctx.r4.s64 = r11.s64 + -5176;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,1053
	ctx.r5.s64 = 1053;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a0008
	if (cr6.eq) goto loc_827A0008;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827A0008:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a0018
	if (cr6.eq) goto loc_827A0018;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827A0018:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827A0028"))) PPC_WEAK_FUNC(sub_827A0028);
PPC_FUNC_IMPL(__imp__sub_827A0028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,192(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82416008
	sub_82416008(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// beq cr6,0x827a00a4
	if (cr6.eq) goto loc_827A00A4;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827A0088:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x827a0088
	if (!cr0.eq) goto loc_827A0088;
loc_827A00A4:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-5176
	ctx.r4.s64 = r11.s64 + -5176;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,1061
	ctx.r5.s64 = 1061;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a00d0
	if (cr6.eq) goto loc_827A00D0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827A00D0:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a00e0
	if (cr6.eq) goto loc_827A00E0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827A00E0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827A00F0"))) PPC_WEAK_FUNC(sub_827A00F0);
PPC_FUNC_IMPL(__imp__sub_827A00F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82377548
	sub_82377548(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// beq cr6,0x827a014c
	if (cr6.eq) goto loc_827A014C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827A0130:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x827a0130
	if (!cr0.eq) goto loc_827A0130;
loc_827A014C:
	// lwz r11,192(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-5176
	ctx.r4.s64 = r11.s64 + -5176;
	// li r5,1196
	ctx.r5.s64 = 1196;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a0194
	if (cr6.eq) goto loc_827A0194;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827A0194:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a01a4
	if (cr6.eq) goto loc_827A01A4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827A01A4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// bne cr6,0x827a01c4
	if (!cr6.eq) goto loc_827A01C4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_827A01C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8279e9b8
	sub_8279E9B8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8279ed18
	sub_8279ED18(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_827A01F8"))) PPC_WEAK_FUNC(sub_827A01F8);
PPC_FUNC_IMPL(__imp__sub_827A01F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x823205d8
	sub_823205D8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// beq cr6,0x827a025c
	if (cr6.eq) goto loc_827A025C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827A0240:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x827a0240
	if (!cr0.eq) goto loc_827A0240;
loc_827A025C:
	// lwz r11,192(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// addi r30,r1,88
	r30.s64 = ctx.r1.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-5176
	ctx.r4.s64 = r11.s64 + -5176;
	// li r5,1212
	ctx.r5.s64 = 1212;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a02a4
	if (cr6.eq) goto loc_827A02A4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827A02A4:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a02b4
	if (cr6.eq) goto loc_827A02B4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827A02B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_827A02D0"))) PPC_WEAK_FUNC(sub_827A02D0);
PPC_FUNC_IMPL(__imp__sub_827A02D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82463218
	sub_82463218(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// beq cr6,0x827a032c
	if (cr6.eq) goto loc_827A032C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827A0310:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x827a0310
	if (!cr0.eq) goto loc_827A0310;
loc_827A032C:
	// lwz r11,192(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-5176
	ctx.r4.s64 = r11.s64 + -5176;
	// li r5,1231
	ctx.r5.s64 = 1231;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a0374
	if (cr6.eq) goto loc_827A0374;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827A0374:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a0384
	if (cr6.eq) goto loc_827A0384;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827A0384:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// bne cr6,0x827a03a4
	if (!cr6.eq) goto loc_827A03A4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_827A03A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8279e9b8
	sub_8279E9B8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8279ed18
	sub_8279ED18(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_827A03D8"))) PPC_WEAK_FUNC(sub_827A03D8);
PPC_FUNC_IMPL(__imp__sub_827A03D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r4,48
	ctx.r5.s64 = ctx.r4.s64 + 48;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a1470
	sub_825A1470(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// beq cr6,0x827a0438
	if (cr6.eq) goto loc_827A0438;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827A041C:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x827a041c
	if (!cr0.eq) goto loc_827A041C;
loc_827A0438:
	// lwz r11,192(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-5176
	ctx.r4.s64 = r11.s64 + -5176;
	// li r5,1252
	ctx.r5.s64 = 1252;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a0480
	if (cr6.eq) goto loc_827A0480;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827A0480:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a0490
	if (cr6.eq) goto loc_827A0490;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827A0490:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// bne cr6,0x827a04b0
	if (!cr6.eq) goto loc_827A04B0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_827A04B0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8279e9b8
	sub_8279E9B8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8279ed18
	sub_8279ED18(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_827A04E0"))) PPC_WEAK_FUNC(sub_827A04E0);
PPC_FUNC_IMPL(__imp__sub_827A04E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82416008
	sub_82416008(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// beq cr6,0x827a0544
	if (cr6.eq) goto loc_827A0544;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827A0528:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x827a0528
	if (!cr0.eq) goto loc_827A0528;
loc_827A0544:
	// lwz r11,192(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// addi r30,r1,88
	r30.s64 = ctx.r1.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-5176
	ctx.r4.s64 = r11.s64 + -5176;
	// li r5,1267
	ctx.r5.s64 = 1267;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a058c
	if (cr6.eq) goto loc_827A058C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827A058C:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a059c
	if (cr6.eq) goto loc_827A059C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827A059C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_827A05B8"))) PPC_WEAK_FUNC(sub_827A05B8);
PPC_FUNC_IMPL(__imp__sub_827A05B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// b 0x8279faa0
	sub_8279FAA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A05D0"))) PPC_WEAK_FUNC(sub_827A05D0);
PPC_FUNC_IMPL(__imp__sub_827A05D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A05D8"))) PPC_WEAK_FUNC(sub_827A05D8);
PPC_FUNC_IMPL(__imp__sub_827A05D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	PPCVRegister v62{};
	PPCVRegister v63{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,192
	r11.s64 = ctx.r1.s64 + 192;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823205d8
	sub_823205D8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// beq cr6,0x827a0638
	if (cr6.eq) goto loc_827A0638;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827A061C:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x827a061c
	if (!cr0.eq) goto loc_827A061C;
loc_827A0638:
	// lwz r11,192(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 192);
	// addi r29,r26,40
	r29.s64 = r26.s64 + 40;
	// addi r31,r1,120
	r31.s64 = ctx.r1.s64 + 120;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r28,r11,-5176
	r28.s64 = r11.s64 + -5176;
	// li r5,1337
	ctx.r5.s64 = 1337;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a0688
	if (cr6.eq) goto loc_827A0688;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827A0688:
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a0698
	if (cr6.eq) goto loc_827A0698;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827A0698:
	// lwz r11,192(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 192);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// addi r24,r23,32
	r24.s64 = r23.s64 + 32;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82377548
	sub_82377548(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// beq cr6,0x827a06fc
	if (cr6.eq) goto loc_827A06FC;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827A06E0:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x827a06e0
	if (!cr0.eq) goto loc_827A06E0;
loc_827A06FC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,1341
	ctx.r5.s64 = 1341;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a0724
	if (cr6.eq) goto loc_827A0724;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827A0724:
	// lwz r3,188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a0734
	if (cr6.eq) goto loc_827A0734;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827A0734:
	// addi r25,r23,48
	r25.s64 = r23.s64 + 48;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82463218
	sub_82463218(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// beq cr6,0x827a077c
	if (cr6.eq) goto loc_827A077C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827A0760:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x827a0760
	if (!cr0.eq) goto loc_827A0760;
loc_827A077C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,1342
	ctx.r5.s64 = 1342;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a07a4
	if (cr6.eq) goto loc_827A07A4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827A07A4:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a07b4
	if (cr6.eq) goto loc_827A07B4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827A07B4:
	// lwz r11,192(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 192);
	// li r27,1
	r27.s64 = 1;
	// lwz r30,4(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x827a09bc
	goto loc_827A09BC;
loc_827A07C4:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x827a09b0
	if (!cr0.eq) goto loc_827A09B0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// addi r11,r1,224
	r11.s64 = ctx.r1.s64 + 224;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823205d8
	sub_823205D8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// beq cr6,0x827a082c
	if (cr6.eq) goto loc_827A082C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827A0810:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x827a0810
	if (!cr0.eq) goto loc_827A0810;
loc_827A082C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,1352
	ctx.r5.s64 = 1352;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a0854
	if (cr6.eq) goto loc_827A0854;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827A0854:
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a0864
	if (cr6.eq) goto loc_827A0864;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827A0864:
	// addi r11,r1,192
	r11.s64 = ctx.r1.s64 + 192;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// addi r4,r23,64
	ctx.r4.s64 = r23.s64 + 64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e84be0
	sub_82E84BE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82e84a10
	sub_82E84A10(ctx, base);
	// addi r11,r1,208
	r11.s64 = ctx.r1.s64 + 208;
	// lvx128 v63,r0,r24
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82377548
	sub_82377548(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// beq cr6,0x827a08f8
	if (cr6.eq) goto loc_827A08F8;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827A08DC:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x827a08dc
	if (!cr0.eq) goto loc_827A08DC;
loc_827A08F8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,1355
	ctx.r5.s64 = 1355;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a0920
	if (cr6.eq) goto loc_827A0920;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827A0920:
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a0930
	if (cr6.eq) goto loc_827A0930;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827A0930:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82463218
	sub_82463218(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// beq cr6,0x827a0974
	if (cr6.eq) goto loc_827A0974;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827A0958:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x827a0958
	if (!cr0.eq) goto loc_827A0958;
loc_827A0974:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,1358
	ctx.r5.s64 = 1358;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a099c
	if (cr6.eq) goto loc_827A099C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827A099C:
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a09b4
	if (cr6.eq) goto loc_827A09B4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
	// b 0x827a09b4
	goto loc_827A09B4;
loc_827A09B0:
	// li r27,0
	r27.s64 = 0;
loc_827A09B4:
	// lwz r11,192(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 192);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
loc_827A09BC:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x827a07c4
	if (!cr6.eq) goto loc_827A07C4;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// bne cr6,0x827a09e8
	if (!cr6.eq) goto loc_827A09E8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_827A09E8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8279e9b8
	sub_8279E9B8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8279ed18
	sub_8279ED18(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_827A0A08"))) PPC_WEAK_FUNC(sub_827A0A08);
PPC_FUNC_IMPL(__imp__sub_827A0A08) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// clrlwi. r29,r28,24
	r29.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x827a0a5c
	if (cr0.eq) goto loc_827A0A5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-30040
	ctx.r3.s64 = r11.s64 + -30040;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827a0a5c
	if (cr0.eq) goto loc_827A0A5C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x8279f8f8
	sub_8279F8F8(ctx, base);
loc_827A0A54:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827a0d0c
	goto loc_827A0D0C;
loc_827A0A5C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x827a0b44
	if (!cr6.eq) goto loc_827A0B44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-30088
	ctx.r3.s64 = r11.s64 + -30088;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827a0a94
	if (cr0.eq) goto loc_827A0A94;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x8279f938
	sub_8279F938(ctx, base);
	// b 0x827a0a54
	goto loc_827A0A54;
loc_827A0A94:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x827a0b44
	if (!cr6.eq) goto loc_827A0B44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,25024
	ctx.r3.s64 = r11.s64 + 25024;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827a0acc
	if (cr0.eq) goto loc_827A0ACC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x827a00f0
	sub_827A00F0(ctx, base);
	// b 0x827a0a54
	goto loc_827A0A54;
loc_827A0ACC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x827a0b44
	if (!cr6.eq) goto loc_827A0B44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31961
	r11.s64 = -2094596096;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,13432
	ctx.r3.s64 = r11.s64 + 13432;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827a0b04
	if (cr0.eq) goto loc_827A0B04;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x827a02d0
	sub_827A02D0(ctx, base);
	// b 0x827a0a54
	goto loc_827A0A54;
loc_827A0B04:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x827a0b44
	if (!cr6.eq) goto loc_827A0B44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31959
	r11.s64 = -2094465024;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-11656
	ctx.r3.s64 = r11.s64 + -11656;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827a0b3c
	if (cr0.eq) goto loc_827A0B3C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x827a03d8
	sub_827A03D8(ctx, base);
	// b 0x827a0a54
	goto loc_827A0A54;
loc_827A0B3C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x827a0c5c
	if (cr6.eq) goto loc_827A0C5C;
loc_827A0B44:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,25112
	ctx.r3.s64 = r11.s64 + 25112;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827a0b74
	if (cr0.eq) goto loc_827A0B74;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x827a01f8
	sub_827A01F8(ctx, base);
	// b 0x827a0a54
	goto loc_827A0A54;
loc_827A0B74:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x827a0c5c
	if (cr6.eq) goto loc_827A0C5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,25068
	ctx.r3.s64 = r11.s64 + 25068;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827a0bac
	if (cr0.eq) goto loc_827A0BAC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x827a04e0
	sub_827A04E0(ctx, base);
	// b 0x827a0a54
	goto loc_827A0A54;
loc_827A0BAC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x827a0c5c
	if (cr6.eq) goto loc_827A0C5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-30136
	ctx.r3.s64 = r11.s64 + -30136;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827a0be4
	if (cr0.eq) goto loc_827A0BE4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x8279e528
	sub_8279E528(ctx, base);
	// b 0x827a0a54
	goto loc_827A0A54;
loc_827A0BE4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x827a0c5c
	if (cr6.eq) goto loc_827A0C5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-30184
	ctx.r3.s64 = r11.s64 + -30184;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827a0c1c
	if (cr0.eq) goto loc_827A0C1C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x8279e538
	sub_8279E538(ctx, base);
	// b 0x827a0a54
	goto loc_827A0A54;
loc_827A0C1C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x827a0c5c
	if (cr6.eq) goto loc_827A0C5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-30232
	ctx.r3.s64 = r11.s64 + -30232;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827a0c54
	if (cr0.eq) goto loc_827A0C54;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x8279e550
	sub_8279E550(ctx, base);
	// b 0x827a0a54
	goto loc_827A0A54;
loc_827A0C54:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x827a0cfc
	if (!cr6.eq) goto loc_827A0CFC;
loc_827A0C5C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-30280
	ctx.r3.s64 = r11.s64 + -30280;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827a0c8c
	if (cr0.eq) goto loc_827A0C8C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x827a05b8
	sub_827A05B8(ctx, base);
	// b 0x827a0a54
	goto loc_827A0A54;
loc_827A0C8C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x827a0cfc
	if (!cr6.eq) goto loc_827A0CFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-30324
	ctx.r3.s64 = r11.s64 + -30324;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827a0cc4
	if (cr0.eq) goto loc_827A0CC4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x827a05d8
	sub_827A05D8(ctx, base);
	// b 0x827a0a54
	goto loc_827A0A54;
loc_827A0CC4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x827a0cfc
	if (!cr6.eq) goto loc_827A0CFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-30376
	ctx.r3.s64 = r11.s64 + -30376;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827a0cfc
	if (cr0.eq) goto loc_827A0CFC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x8279e568
	sub_8279E568(ctx, base);
	// b 0x827a0a54
	goto loc_827A0A54;
loc_827A0CFC:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82514ef8
	sub_82514EF8(ctx, base);
loc_827A0D0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_827A0D18"))) PPC_WEAK_FUNC(sub_827A0D18);
PPC_FUNC_IMPL(__imp__sub_827A0D18) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827a0d70
	if (cr0.eq) goto loc_827A0D70;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-5212
	ctx.r9.s64 = r11.s64 + -5212;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827a0d74
	goto loc_827A0D74;
loc_827A0D70:
	// li r11,0
	r11.s64 = 0;
loc_827A0D74:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827a0db8
	if (!cr6.eq) goto loc_827A0DB8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827a0d98
	if (cr6.eq) goto loc_827A0D98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bbdf08
	sub_82BBDF08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_827A0D98:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-30556(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -30556);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827A0DB8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_827A0DD8"))) PPC_WEAK_FUNC(sub_827A0DD8);
PPC_FUNC_IMPL(__imp__sub_827A0DD8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825e8508
	sub_825E8508(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// beq cr6,0x827a0e30
	if (cr6.eq) goto loc_827A0E30;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827A0E30:
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

__attribute__((alias("__imp__sub_827A0E48"))) PPC_WEAK_FUNC(sub_827A0E48);
PPC_FUNC_IMPL(__imp__sub_827A0E48) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-5176
	ctx.r4.s64 = r11.s64 + -5176;
	// li r5,71
	ctx.r5.s64 = 71;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827a0e9c
	if (cr0.eq) goto loc_827A0E9C;
	// bl 0x8279e810
	sub_8279E810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827a0ea0
	goto loc_827A0EA0;
loc_827A0E9C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_827A0EA0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a0dd8
	sub_827A0DD8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8279e8b0
	sub_8279E8B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827A0EC0"))) PPC_WEAK_FUNC(sub_827A0EC0);
PPC_FUNC_IMPL(__imp__sub_827A0EC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a0ee4
	if (cr6.eq) goto loc_827A0EE4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827A0EE4:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a0ef4
	if (cr6.eq) goto loc_827A0EF4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827A0EF4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b971e8
	sub_82B971E8(ctx, base);
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

__attribute__((alias("__imp__sub_827A0F10"))) PPC_WEAK_FUNC(sub_827A0F10);
PPC_FUNC_IMPL(__imp__sub_827A0F10) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,-5088
	r11.s64 = r11.s64 + -5088;
	// addi r10,r10,-5108
	ctx.r10.s64 = ctx.r10.s64 + -5108;
	// lwz r30,192(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// beq cr6,0x827a0f5c
	if (cr6.eq) goto loc_827A0F5C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827a0ec0
	sub_827A0EC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_827A0F5C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82514af8
	sub_82514AF8(ctx, base);
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

__attribute__((alias("__imp__sub_827A0F80"))) PPC_WEAK_FUNC(sub_827A0F80);
PPC_FUNC_IMPL(__imp__sub_827A0F80) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x827a1058
	sub_827A1058(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A0F88"))) PPC_WEAK_FUNC(sub_827A0F88);
PPC_FUNC_IMPL(__imp__sub_827A0F88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x82514a50
	sub_82514A50(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,-5088
	r11.s64 = r11.s64 + -5088;
	// addi r10,r10,-5108
	ctx.r10.s64 = ctx.r10.s64 + -5108;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-5176
	ctx.r4.s64 = r11.s64 + -5176;
	// li r5,201
	ctx.r5.s64 = 201;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x827a100c
	if (cr0.eq) goto loc_827A100C;
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// lwz r9,-29124(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29124);
	// stw r9,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, r11.u32);
	// b 0x827a1010
	goto loc_827A1010;
loc_827A100C:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_827A1010:
	// stw r10,192(r31)
	PPC_STORE_U32(r31.u32 + 192, ctx.r10.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stb r11,72(r10)
	PPC_STORE_U8(ctx.r10.u32 + 72, r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// stw r11,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, r11.u32);
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// lfs f0,2240(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stb r11,52(r10)
	PPC_STORE_U8(ctx.r10.u32 + 52, r11.u8);
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// stw r11,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, r11.u32);
	// lwz r11,192(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// stfs f0,56(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 56, temp.u32);
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

__attribute__((alias("__imp__sub_827A1058"))) PPC_WEAK_FUNC(sub_827A1058);
PPC_FUNC_IMPL(__imp__sub_827A1058) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x827a0f10
	sub_827A0F10(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827a1088
	if (cr0.eq) goto loc_827A1088;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_827A1088:
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

__attribute__((alias("__imp__sub_827A10A8"))) PPC_WEAK_FUNC(sub_827A10A8);
PPC_FUNC_IMPL(__imp__sub_827A10A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lwz r25,4(r4)
	r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r30,0(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x827a10e8
	if (cr6.eq) goto loc_827A10E8;
	// addi r11,r25,4
	r11.s64 = r25.s64 + 4;
loc_827A10CC:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x827a10cc
	if (!cr0.eq) goto loc_827A10CC;
loc_827A10E8:
	// lwz r11,192(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 192);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827a1108
	if (cr6.eq) goto loc_827A1108;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x827a1158
	if (!cr0.eq) goto loc_827A1158;
loc_827A1108:
	// lwz r11,192(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 192);
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// lwz r11,192(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 192);
	// lfs f0,32(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// lfs f0,36(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 36);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 36, temp.u32);
	// lfs f0,40(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 40);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// lfs f0,44(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 44);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 44, temp.u32);
	// lfs f0,48(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 48);
	f0.f64 = double(temp.f32);
	// stfs f0,60(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 60, temp.u32);
	// lwz r11,192(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 192);
	// lfs f0,52(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 52);
	f0.f64 = double(temp.f32);
	// stfs f0,64(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 64, temp.u32);
	// lwz r11,192(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 192);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// stw r10,100(r11)
	PPC_STORE_U32(r11.u32 + 100, ctx.r10.u32);
loc_827A1158:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r27,r11,-5176
	r27.s64 = r11.s64 + -5176;
	// li r5,253
	ctx.r5.s64 = 253;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r28,0
	r28.s64 = 0;
	// beq 0x827a11ac
	if (cr0.eq) goto loc_827A11AC;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r28.u32);
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r28.u32);
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r28.u32);
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r28.u32);
	// stw r28,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r28.u32);
	// stw r28,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r28.u32);
	// stb r28,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, r28.u8);
	// b 0x827a11b0
	goto loc_827A11B0;
loc_827A11AC:
	// mr r31,r28
	r31.u64 = r28.u64;
loc_827A11B0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x827a0d18
	sub_827A0D18(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827a122c
	if (cr0.eq) goto loc_827A122C;
	// bl 0x825a7648
	sub_825A7648(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827a1230
	goto loc_827A1230;
loc_827A122C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_827A1230:
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x825bad60
	sub_825BAD60(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,192(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 192);
	// bl 0x82afaf88
	sub_82AFAF88(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a126c
	if (cr6.eq) goto loc_827A126C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827A126C:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x827a127c
	if (cr6.eq) goto loc_827A127C;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827A127C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_827A1288"))) PPC_WEAK_FUNC(sub_827A1288);
PPC_FUNC_IMPL(__imp__sub_827A1288) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r10,-15648
	ctx.r8.s64 = ctx.r10.s64 + -15648;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,-15648(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15648);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f13,2240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f0,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// lfs f0,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stb r11,92(r31)
	PPC_STORE_U8(r31.u32 + 92, r11.u8);
	// stb r11,93(r31)
	PPC_STORE_U8(r31.u32 + 93, r11.u8);
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

__attribute__((alias("__imp__sub_827A1318"))) PPC_WEAK_FUNC(sub_827A1318);
PPC_FUNC_IMPL(__imp__sub_827A1318) {
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
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// stb r11,93(r31)
	PPC_STORE_U8(r31.u32 + 93, r11.u8);
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

__attribute__((alias("__imp__sub_827A1368"))) PPC_WEAK_FUNC(sub_827A1368);
PPC_FUNC_IMPL(__imp__sub_827A1368) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// lfs f0,2244(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// bl 0x825533a8
	sub_825533A8(ctx, base);
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

__attribute__((alias("__imp__sub_827A13C8"))) PPC_WEAK_FUNC(sub_827A13C8);
PPC_FUNC_IMPL(__imp__sub_827A13C8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A13D0"))) PPC_WEAK_FUNC(sub_827A13D0);
PPC_FUNC_IMPL(__imp__sub_827A13D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827a13f8
	if (cr6.eq) goto loc_827A13F8;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r8,12
	ctx.r8.s64 = 12;
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// divw r11,r11,r8
	r11.s32 = r11.s32 / ctx.r8.s32;
loc_827A13F8:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A1410"))) PPC_WEAK_FUNC(sub_827A1410);
PPC_FUNC_IMPL(__imp__sub_827A1410) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// bgelr 
	if (!cr0.lt) return;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827a143c
	if (cr6.eq) goto loc_827A143C;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r9,12
	ctx.r9.s64 = 12;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
loc_827A143C:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A1448"))) PPC_WEAK_FUNC(sub_827A1448);
PPC_FUNC_IMPL(__imp__sub_827A1448) {
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
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
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

__attribute__((alias("__imp__sub_827A1488"))) PPC_WEAK_FUNC(sub_827A1488);
PPC_FUNC_IMPL(__imp__sub_827A1488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A14A0"))) PPC_WEAK_FUNC(sub_827A14A0);
PPC_FUNC_IMPL(__imp__sub_827A14A0) {
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
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mulli r10,r5,12
	ctx.r10.s64 = ctx.r5.s64 * 12;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
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

__attribute__((alias("__imp__sub_827A14E0"))) PPC_WEAK_FUNC(sub_827A14E0);
PPC_FUNC_IMPL(__imp__sub_827A14E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mulli r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 * 12;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A14F8"))) PPC_WEAK_FUNC(sub_827A14F8);
PPC_FUNC_IMPL(__imp__sub_827A14F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827a150c
	if (!cr6.eq) goto loc_827A150C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_827A150C:
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r9,12
	ctx.r9.s64 = 12;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw r3,r11,r9
	ctx.r3.s32 = r11.s32 / ctx.r9.s32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A1520"))) PPC_WEAK_FUNC(sub_827A1520);
PPC_FUNC_IMPL(__imp__sub_827A1520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mulli r30,r5,12
	r30.s64 = ctx.r5.s64 * 12;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// beq cr6,0x827a1588
	if (cr6.eq) goto loc_827A1588;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827A156C:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x827a156c
	if (!cr0.eq) goto loc_827A156C;
loc_827A1588:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a1598
	if (cr6.eq) goto loc_827A1598;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827A1598:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x827db320
	sub_827DB320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827A15B8"))) PPC_WEAK_FUNC(sub_827A15B8);
PPC_FUNC_IMPL(__imp__sub_827A15B8) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A15F0"))) PPC_WEAK_FUNC(sub_827A15F0);
PPC_FUNC_IMPL(__imp__sub_827A15F0) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1628"))) PPC_WEAK_FUNC(sub_827A1628);
PPC_FUNC_IMPL(__imp__sub_827A1628) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1660"))) PPC_WEAK_FUNC(sub_827A1660);
PPC_FUNC_IMPL(__imp__sub_827A1660) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1698"))) PPC_WEAK_FUNC(sub_827A1698);
PPC_FUNC_IMPL(__imp__sub_827A1698) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A16D0"))) PPC_WEAK_FUNC(sub_827A16D0);
PPC_FUNC_IMPL(__imp__sub_827A16D0) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1708"))) PPC_WEAK_FUNC(sub_827A1708);
PPC_FUNC_IMPL(__imp__sub_827A1708) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1740"))) PPC_WEAK_FUNC(sub_827A1740);
PPC_FUNC_IMPL(__imp__sub_827A1740) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1778"))) PPC_WEAK_FUNC(sub_827A1778);
PPC_FUNC_IMPL(__imp__sub_827A1778) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A17B0"))) PPC_WEAK_FUNC(sub_827A17B0);
PPC_FUNC_IMPL(__imp__sub_827A17B0) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A17E8"))) PPC_WEAK_FUNC(sub_827A17E8);
PPC_FUNC_IMPL(__imp__sub_827A17E8) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1820"))) PPC_WEAK_FUNC(sub_827A1820);
PPC_FUNC_IMPL(__imp__sub_827A1820) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1858"))) PPC_WEAK_FUNC(sub_827A1858);
PPC_FUNC_IMPL(__imp__sub_827A1858) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1890"))) PPC_WEAK_FUNC(sub_827A1890);
PPC_FUNC_IMPL(__imp__sub_827A1890) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A18C8"))) PPC_WEAK_FUNC(sub_827A18C8);
PPC_FUNC_IMPL(__imp__sub_827A18C8) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1900"))) PPC_WEAK_FUNC(sub_827A1900);
PPC_FUNC_IMPL(__imp__sub_827A1900) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1938"))) PPC_WEAK_FUNC(sub_827A1938);
PPC_FUNC_IMPL(__imp__sub_827A1938) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1970"))) PPC_WEAK_FUNC(sub_827A1970);
PPC_FUNC_IMPL(__imp__sub_827A1970) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A19A8"))) PPC_WEAK_FUNC(sub_827A19A8);
PPC_FUNC_IMPL(__imp__sub_827A19A8) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A19E0"))) PPC_WEAK_FUNC(sub_827A19E0);
PPC_FUNC_IMPL(__imp__sub_827A19E0) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1A18"))) PPC_WEAK_FUNC(sub_827A1A18);
PPC_FUNC_IMPL(__imp__sub_827A1A18) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1A50"))) PPC_WEAK_FUNC(sub_827A1A50);
PPC_FUNC_IMPL(__imp__sub_827A1A50) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1A88"))) PPC_WEAK_FUNC(sub_827A1A88);
PPC_FUNC_IMPL(__imp__sub_827A1A88) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1AC0"))) PPC_WEAK_FUNC(sub_827A1AC0);
PPC_FUNC_IMPL(__imp__sub_827A1AC0) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1AF8"))) PPC_WEAK_FUNC(sub_827A1AF8);
PPC_FUNC_IMPL(__imp__sub_827A1AF8) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1B30"))) PPC_WEAK_FUNC(sub_827A1B30);
PPC_FUNC_IMPL(__imp__sub_827A1B30) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1B68"))) PPC_WEAK_FUNC(sub_827A1B68);
PPC_FUNC_IMPL(__imp__sub_827A1B68) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1BA0"))) PPC_WEAK_FUNC(sub_827A1BA0);
PPC_FUNC_IMPL(__imp__sub_827A1BA0) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1BD8"))) PPC_WEAK_FUNC(sub_827A1BD8);
PPC_FUNC_IMPL(__imp__sub_827A1BD8) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1C10"))) PPC_WEAK_FUNC(sub_827A1C10);
PPC_FUNC_IMPL(__imp__sub_827A1C10) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1C48"))) PPC_WEAK_FUNC(sub_827A1C48);
PPC_FUNC_IMPL(__imp__sub_827A1C48) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1C80"))) PPC_WEAK_FUNC(sub_827A1C80);
PPC_FUNC_IMPL(__imp__sub_827A1C80) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1CB8"))) PPC_WEAK_FUNC(sub_827A1CB8);
PPC_FUNC_IMPL(__imp__sub_827A1CB8) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1CF0"))) PPC_WEAK_FUNC(sub_827A1CF0);
PPC_FUNC_IMPL(__imp__sub_827A1CF0) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1D28"))) PPC_WEAK_FUNC(sub_827A1D28);
PPC_FUNC_IMPL(__imp__sub_827A1D28) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1D60"))) PPC_WEAK_FUNC(sub_827A1D60);
PPC_FUNC_IMPL(__imp__sub_827A1D60) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1D98"))) PPC_WEAK_FUNC(sub_827A1D98);
PPC_FUNC_IMPL(__imp__sub_827A1D98) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1DD0"))) PPC_WEAK_FUNC(sub_827A1DD0);
PPC_FUNC_IMPL(__imp__sub_827A1DD0) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1E08"))) PPC_WEAK_FUNC(sub_827A1E08);
PPC_FUNC_IMPL(__imp__sub_827A1E08) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1E40"))) PPC_WEAK_FUNC(sub_827A1E40);
PPC_FUNC_IMPL(__imp__sub_827A1E40) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1E78"))) PPC_WEAK_FUNC(sub_827A1E78);
PPC_FUNC_IMPL(__imp__sub_827A1E78) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1EB0"))) PPC_WEAK_FUNC(sub_827A1EB0);
PPC_FUNC_IMPL(__imp__sub_827A1EB0) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1EE8"))) PPC_WEAK_FUNC(sub_827A1EE8);
PPC_FUNC_IMPL(__imp__sub_827A1EE8) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1F20"))) PPC_WEAK_FUNC(sub_827A1F20);
PPC_FUNC_IMPL(__imp__sub_827A1F20) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1F58"))) PPC_WEAK_FUNC(sub_827A1F58);
PPC_FUNC_IMPL(__imp__sub_827A1F58) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1F90"))) PPC_WEAK_FUNC(sub_827A1F90);
PPC_FUNC_IMPL(__imp__sub_827A1F90) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A1FC8"))) PPC_WEAK_FUNC(sub_827A1FC8);
PPC_FUNC_IMPL(__imp__sub_827A1FC8) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82693980
	sub_82693980(ctx, base);
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

__attribute__((alias("__imp__sub_827A2000"))) PPC_WEAK_FUNC(sub_827A2000);
PPC_FUNC_IMPL(__imp__sub_827A2000) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x827a1520
	sub_827A1520(ctx, base);
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

__attribute__((alias("__imp__sub_827A2038"))) PPC_WEAK_FUNC(sub_827A2038);
PPC_FUNC_IMPL(__imp__sub_827A2038) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825531d8
	sub_825531D8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x827a2074
	if (cr6.eq) goto loc_827A2074;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_827A2074:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A2088"))) PPC_WEAK_FUNC(sub_827A2088);
PPC_FUNC_IMPL(__imp__sub_827A2088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x825531d8
	sub_825531D8(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x827a2160
	if (cr6.eq) goto loc_827A2160;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,4(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827a2108
	if (cr6.eq) goto loc_827A2108;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
loc_827A20EC:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x827a20ec
	if (!cr0.eq) goto loc_827A20EC;
loc_827A2108:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827a2118
	if (cr6.eq) goto loc_827A2118;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827A2118:
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827db320
	sub_827DB320(ctx, base);
	// stw r30,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r30.u32);
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827a2170
	if (cr6.eq) goto loc_827A2170;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
loc_827A2138:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x827a2138
	if (!cr0.eq) goto loc_827A2138;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
	// b 0x827a2170
	goto loc_827A2170;
loc_827A2160:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827a2180
	sub_827A2180(ctx, base);
loc_827A2170:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_827A2180"))) PPC_WEAK_FUNC(sub_827A2180);
PPC_FUNC_IMPL(__imp__sub_827A2180) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r30,32
	ctx.r4.s64 = r30.s64 + 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825531d8
	sub_825531D8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x827a21d0
	if (cr6.eq) goto loc_827A21D0;
	// addi r5,r11,16
	ctx.r5.s64 = r11.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x827a2088
	sub_827A2088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x827a21dc
	goto loc_827A21DC;
loc_827A21D0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_827A21DC:
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

__attribute__((alias("__imp__sub_827A21F8"))) PPC_WEAK_FUNC(sub_827A21F8);
PPC_FUNC_IMPL(__imp__sub_827A21F8) {
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827a2228
	if (!cr6.eq) goto loc_827A2228;
	// li r28,0
	r28.s64 = 0;
	// b 0x827a2238
	goto loc_827A2238;
loc_827A2228:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r9,12
	ctx.r9.s64 = 12;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw r28,r11,r9
	r28.s32 = r11.s32 / ctx.r9.s32;
loc_827A2238:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82b85970
	sub_82B85970(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827a22a4
	if (cr0.eq) goto loc_827A22A4;
	// lbz r11,44(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 44);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x827a22c4
	if (cr0.eq) goto loc_827A22C4;
loc_827A22A4:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r27.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r29.u8);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// bl 0x8270b0c0
	sub_8270B0C0(ctx, base);
loc_827A22C4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b70
	return;
}

extern bool DisableHintsMidAsmHook();

__attribute__((alias("__imp__sub_827A22D0"))) PPC_WEAK_FUNC(sub_827A22D0);
PPC_FUNC_IMPL(__imp__sub_827A22D0) {
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
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9920
	ctx.r4.s64 = r11.s64 + 9920;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32141
	r11.s64 = -2106392576;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-17800
	ctx.r5.s64 = r11.s64 + -17800;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9440
	ctx.r4.s64 = r11.s64 + 9440;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32141
	r11.s64 = -2106392576;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-21832
	ctx.r5.s64 = r11.s64 + -21832;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-856
	ctx.r4.s64 = r11.s64 + -856;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32141
	r11.s64 = -2106392576;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-15200
	ctx.r5.s64 = r11.s64 + -15200;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-872
	ctx.r4.s64 = r11.s64 + -872;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-23504
	ctx.r5.s64 = r11.s64 + -23504;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-892
	ctx.r4.s64 = r11.s64 + -892;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-31392
	ctx.r5.s64 = r11.s64 + -31392;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-916
	ctx.r4.s64 = r11.s64 + -916;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32141
	r11.s64 = -2106392576;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-9872
	ctx.r5.s64 = r11.s64 + -9872;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-944
	ctx.r4.s64 = r11.s64 + -944;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,5480
	ctx.r5.s64 = r11.s64 + 5480;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-956
	ctx.r4.s64 = r11.s64 + -956;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-1848
	ctx.r5.s64 = r11.s64 + -1848;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-972
	ctx.r4.s64 = r11.s64 + -972;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32160
	r11.s64 = -2107637760;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-21800
	ctx.r5.s64 = r11.s64 + -21800;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-992
	ctx.r4.s64 = r11.s64 + -992;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32159
	r11.s64 = -2107572224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,28256
	ctx.r5.s64 = r11.s64 + 28256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-11840
	ctx.r4.s64 = r11.s64 + -11840;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32135
	r11.s64 = -2105999360;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-3768
	ctx.r5.s64 = r11.s64 + -3768;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-6304
	ctx.r4.s64 = r11.s64 + -6304;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32141
	r11.s64 = -2106392576;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,30768
	ctx.r5.s64 = r11.s64 + 30768;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1032
	ctx.r4.s64 = r11.s64 + -1032;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-9848
	ctx.r5.s64 = r11.s64 + -9848;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1072
	ctx.r4.s64 = r11.s64 + -1072;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,-7752
	ctx.r5.s64 = r11.s64 + -7752;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1104
	ctx.r4.s64 = r11.s64 + -1104;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-12024
	ctx.r5.s64 = r11.s64 + -12024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1140
	ctx.r4.s64 = r11.s64 + -1140;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-5720
	ctx.r5.s64 = r11.s64 + -5720;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1180
	ctx.r4.s64 = r11.s64 + -1180;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7288
	ctx.r5.s64 = r11.s64 + -7288;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1220
	ctx.r4.s64 = r11.s64 + -1220;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-9096
	ctx.r5.s64 = r11.s64 + -9096;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1260
	ctx.r4.s64 = r11.s64 + -1260;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-11136
	ctx.r5.s64 = r11.s64 + -11136;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1292
	ctx.r4.s64 = r11.s64 + -1292;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,16440
	ctx.r5.s64 = r11.s64 + 16440;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1324
	ctx.r4.s64 = r11.s64 + -1324;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,14336
	ctx.r5.s64 = r11.s64 + 14336;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1336
	ctx.r4.s64 = r11.s64 + -1336;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32158
	r11.s64 = -2107506688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,27496
	ctx.r5.s64 = r11.s64 + 27496;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1348
	ctx.r4.s64 = r11.s64 + -1348;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,19720
	ctx.r5.s64 = r11.s64 + 19720;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1364
	ctx.r4.s64 = r11.s64 + -1364;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,16704
	ctx.r5.s64 = r11.s64 + 16704;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1372
	ctx.r4.s64 = r11.s64 + -1372;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,31320
	ctx.r5.s64 = r11.s64 + 31320;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1384
	ctx.r4.s64 = r11.s64 + -1384;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-30784
	ctx.r5.s64 = r11.s64 + -30784;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1396
	ctx.r4.s64 = r11.s64 + -1396;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-19744
	ctx.r5.s64 = r11.s64 + -19744;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1408
	ctx.r4.s64 = r11.s64 + -1408;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-20152
	ctx.r5.s64 = r11.s64 + -20152;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1420
	ctx.r4.s64 = r11.s64 + -1420;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-25152
	ctx.r5.s64 = r11.s64 + -25152;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1440
	ctx.r4.s64 = r11.s64 + -1440;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-16408
	ctx.r5.s64 = r11.s64 + -16408;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1464
	ctx.r4.s64 = r11.s64 + -1464;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-16240
	ctx.r5.s64 = r11.s64 + -16240;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1492
	ctx.r4.s64 = r11.s64 + -1492;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-16184
	ctx.r5.s64 = r11.s64 + -16184;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1516
	ctx.r4.s64 = r11.s64 + -1516;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-16352
	ctx.r5.s64 = r11.s64 + -16352;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1536
	ctx.r4.s64 = r11.s64 + -1536;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-16296
	ctx.r5.s64 = r11.s64 + -16296;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1552
	ctx.r4.s64 = r11.s64 + -1552;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-16128
	ctx.r5.s64 = r11.s64 + -16128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1564
	ctx.r4.s64 = r11.s64 + -1564;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-14392
	ctx.r5.s64 = r11.s64 + -14392;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1576
	ctx.r4.s64 = r11.s64 + -1576;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-13928
	ctx.r5.s64 = r11.s64 + -13928;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1588
	ctx.r4.s64 = r11.s64 + -1588;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-13464
	ctx.r5.s64 = r11.s64 + -13464;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1600
	ctx.r4.s64 = r11.s64 + -1600;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-13000
	ctx.r5.s64 = r11.s64 + -13000;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1612
	ctx.r4.s64 = r11.s64 + -1612;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-12536
	ctx.r5.s64 = r11.s64 + -12536;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1624
	ctx.r4.s64 = r11.s64 + -1624;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,-12080
	ctx.r5.s64 = r11.s64 + -12080;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1636
	ctx.r4.s64 = r11.s64 + -1636;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-11624
	ctx.r5.s64 = r11.s64 + -11624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1648
	ctx.r4.s64 = r11.s64 + -1648;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-11168
	ctx.r5.s64 = r11.s64 + -11168;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1660
	ctx.r4.s64 = r11.s64 + -1660;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32135
	r11.s64 = -2105999360;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-24472
	ctx.r5.s64 = r11.s64 + -24472;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1680
	ctx.r4.s64 = r11.s64 + -1680;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26112
	ctx.r5.s64 = r11.s64 + -26112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1700
	ctx.r4.s64 = r11.s64 + -1700;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-25632
	ctx.r5.s64 = r11.s64 + -25632;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1712
	ctx.r4.s64 = r11.s64 + -1712;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,5896
	ctx.r5.s64 = r11.s64 + 5896;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1724
	ctx.r4.s64 = r11.s64 + -1724;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,5952
	ctx.r5.s64 = r11.s64 + 5952;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1736
	ctx.r4.s64 = r11.s64 + -1736;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,6008
	ctx.r5.s64 = r11.s64 + 6008;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1748
	ctx.r4.s64 = r11.s64 + -1748;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,6064
	ctx.r5.s64 = r11.s64 + 6064;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1764
	ctx.r4.s64 = r11.s64 + -1764;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,6120
	ctx.r5.s64 = r11.s64 + 6120;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1780
	ctx.r4.s64 = r11.s64 + -1780;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,6176
	ctx.r5.s64 = r11.s64 + 6176;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1796
	ctx.r4.s64 = r11.s64 + -1796;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,6232
	ctx.r5.s64 = r11.s64 + 6232;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1812
	ctx.r4.s64 = r11.s64 + -1812;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,6288
	ctx.r5.s64 = r11.s64 + 6288;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1824
	ctx.r4.s64 = r11.s64 + -1824;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,6344
	ctx.r5.s64 = r11.s64 + 6344;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1832
	ctx.r4.s64 = r11.s64 + -1832;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,29824
	ctx.r5.s64 = r11.s64 + 29824;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1852
	ctx.r4.s64 = r11.s64 + -1852;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-10488
	ctx.r5.s64 = r11.s64 + -10488;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1868
	ctx.r4.s64 = r11.s64 + -1868;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-10432
	ctx.r5.s64 = r11.s64 + -10432;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1884
	ctx.r4.s64 = r11.s64 + -1884;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-10376
	ctx.r5.s64 = r11.s64 + -10376;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,20504
	ctx.r4.s64 = r11.s64 + 20504;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,1920
	ctx.r5.s64 = r11.s64 + 1920;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16132
	ctx.r4.s64 = r11.s64 + 16132;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32140
	if (DisableHintsMidAsmHook()) {
		goto loc_827A2E4C;
	}
	else {
	}
	r11.s64 = -2106327040;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-25400
	ctx.r5.s64 = r11.s64 + -25400;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
loc_827A2E4C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1896
	ctx.r4.s64 = r11.s64 + -1896;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,26680
	ctx.r5.s64 = r11.s64 + 26680;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1908
	ctx.r4.s64 = r11.s64 + -1908;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27880
	ctx.r5.s64 = r11.s64 + -27880;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1928
	ctx.r4.s64 = r11.s64 + -1928;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,6400
	ctx.r5.s64 = r11.s64 + 6400;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1948
	ctx.r4.s64 = r11.s64 + -1948;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,6456
	ctx.r5.s64 = r11.s64 + 6456;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1968
	ctx.r4.s64 = r11.s64 + -1968;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,6512
	ctx.r5.s64 = r11.s64 + 6512;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1988
	ctx.r4.s64 = r11.s64 + -1988;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,6568
	ctx.r5.s64 = r11.s64 + 6568;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-2008
	ctx.r4.s64 = r11.s64 + -2008;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,6624
	ctx.r5.s64 = r11.s64 + 6624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-2028
	ctx.r4.s64 = r11.s64 + -2028;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,7744
	ctx.r5.s64 = r11.s64 + 7744;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-2048
	ctx.r4.s64 = r11.s64 + -2048;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,6680
	ctx.r5.s64 = r11.s64 + 6680;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-2068
	ctx.r4.s64 = r11.s64 + -2068;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,6736
	ctx.r5.s64 = r11.s64 + 6736;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-2088
	ctx.r4.s64 = r11.s64 + -2088;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,6792
	ctx.r5.s64 = r11.s64 + 6792;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-2108
	ctx.r4.s64 = r11.s64 + -2108;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,6848
	ctx.r5.s64 = r11.s64 + 6848;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-2128
	ctx.r4.s64 = r11.s64 + -2128;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,6904
	ctx.r5.s64 = r11.s64 + 6904;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-2152
	ctx.r4.s64 = r11.s64 + -2152;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,6960
	ctx.r5.s64 = r11.s64 + 6960;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-2172
	ctx.r4.s64 = r11.s64 + -2172;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,7016
	ctx.r5.s64 = r11.s64 + 7016;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-2192
	ctx.r4.s64 = r11.s64 + -2192;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,7072
	ctx.r5.s64 = r11.s64 + 7072;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-2216
	ctx.r4.s64 = r11.s64 + -2216;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,7128
	ctx.r5.s64 = r11.s64 + 7128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-2240
	ctx.r4.s64 = r11.s64 + -2240;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,7184
	ctx.r5.s64 = r11.s64 + 7184;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-2260
	ctx.r4.s64 = r11.s64 + -2260;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,7240
	ctx.r5.s64 = r11.s64 + 7240;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-2280
	ctx.r4.s64 = r11.s64 + -2280;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,7296
	ctx.r5.s64 = r11.s64 + 7296;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-2304
	ctx.r4.s64 = r11.s64 + -2304;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,7352
	ctx.r5.s64 = r11.s64 + 7352;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-2328
	ctx.r4.s64 = r11.s64 + -2328;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,7408
	ctx.r5.s64 = r11.s64 + 7408;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-2352
	ctx.r4.s64 = r11.s64 + -2352;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,7464
	ctx.r5.s64 = r11.s64 + 7464;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-2376
	ctx.r4.s64 = r11.s64 + -2376;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,7520
	ctx.r5.s64 = r11.s64 + 7520;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-2396
	ctx.r4.s64 = r11.s64 + -2396;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,7576
	ctx.r5.s64 = r11.s64 + 7576;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,476
	ctx.r3.s64 = ctx.r1.s64 + 476;
	// addi r4,r11,-2416
	ctx.r4.s64 = r11.s64 + -2416;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,7632
	ctx.r5.s64 = r11.s64 + 7632;
	// addi r4,r1,476
	ctx.r4.s64 = ctx.r1.s64 + 476;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,476
	ctx.r3.s64 = ctx.r1.s64 + 476;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,-2436
	ctx.r4.s64 = r11.s64 + -2436;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,7688
	ctx.r5.s64 = r11.s64 + 7688;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,852
	ctx.r3.s64 = ctx.r1.s64 + 852;
	// addi r4,r11,-2452
	ctx.r4.s64 = r11.s64 + -2452;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,7800
	ctx.r5.s64 = r11.s64 + 7800;
	// addi r4,r1,852
	ctx.r4.s64 = ctx.r1.s64 + 852;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,852
	ctx.r3.s64 = ctx.r1.s64 + 852;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r4,r11,-2476
	ctx.r4.s64 = r11.s64 + -2476;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,7856
	ctx.r5.s64 = r11.s64 + 7856;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,484
	ctx.r3.s64 = ctx.r1.s64 + 484;
	// addi r4,r11,-2496
	ctx.r4.s64 = r11.s64 + -2496;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,7912
	ctx.r5.s64 = r11.s64 + 7912;
	// addi r4,r1,484
	ctx.r4.s64 = ctx.r1.s64 + 484;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,484
	ctx.r3.s64 = ctx.r1.s64 + 484;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// addi r4,r11,-2516
	ctx.r4.s64 = r11.s64 + -2516;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,7968
	ctx.r5.s64 = r11.s64 + 7968;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,676
	ctx.r3.s64 = ctx.r1.s64 + 676;
	// addi r4,r11,-2536
	ctx.r4.s64 = r11.s64 + -2536;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,8024
	ctx.r5.s64 = r11.s64 + 8024;
	// addi r4,r1,676
	ctx.r4.s64 = ctx.r1.s64 + 676;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,676
	ctx.r3.s64 = ctx.r1.s64 + 676;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// addi r4,r11,-2556
	ctx.r4.s64 = r11.s64 + -2556;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,8080
	ctx.r5.s64 = r11.s64 + 8080;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,492
	ctx.r3.s64 = ctx.r1.s64 + 492;
	// addi r4,r11,-2580
	ctx.r4.s64 = r11.s64 + -2580;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,8136
	ctx.r5.s64 = r11.s64 + 8136;
	// addi r4,r1,492
	ctx.r4.s64 = ctx.r1.s64 + 492;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,492
	ctx.r3.s64 = ctx.r1.s64 + 492;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// addi r4,r11,-2584
	ctx.r4.s64 = r11.s64 + -2584;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27568
	ctx.r5.s64 = r11.s64 + -27568;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,772
	ctx.r3.s64 = ctx.r1.s64 + 772;
	// addi r4,r11,-2588
	ctx.r4.s64 = r11.s64 + -2588;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27160
	ctx.r5.s64 = r11.s64 + -27160;
	// addi r4,r1,772
	ctx.r4.s64 = ctx.r1.s64 + 772;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,772
	ctx.r3.s64 = ctx.r1.s64 + 772;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r4,r11,-2612
	ctx.r4.s64 = r11.s64 + -2612;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,23792
	ctx.r5.s64 = r11.s64 + 23792;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,500
	ctx.r3.s64 = ctx.r1.s64 + 500;
	// addi r4,r11,-2640
	ctx.r4.s64 = r11.s64 + -2640;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,24200
	ctx.r5.s64 = r11.s64 + 24200;
	// addi r4,r1,500
	ctx.r4.s64 = ctx.r1.s64 + 500;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,500
	ctx.r3.s64 = ctx.r1.s64 + 500;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// addi r4,r11,-2668
	ctx.r4.s64 = r11.s64 + -2668;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,24608
	ctx.r5.s64 = r11.s64 + 24608;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,684
	ctx.r3.s64 = ctx.r1.s64 + 684;
	// addi r4,r11,-2696
	ctx.r4.s64 = r11.s64 + -2696;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,25016
	ctx.r5.s64 = r11.s64 + 25016;
	// addi r4,r1,684
	ctx.r4.s64 = ctx.r1.s64 + 684;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,684
	ctx.r3.s64 = ctx.r1.s64 + 684;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// addi r4,r11,-2724
	ctx.r4.s64 = r11.s64 + -2724;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,25424
	ctx.r5.s64 = r11.s64 + 25424;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,508
	ctx.r3.s64 = ctx.r1.s64 + 508;
	// addi r4,r11,-2752
	ctx.r4.s64 = r11.s64 + -2752;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,25832
	ctx.r5.s64 = r11.s64 + 25832;
	// addi r4,r1,508
	ctx.r4.s64 = ctx.r1.s64 + 508;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,508
	ctx.r3.s64 = ctx.r1.s64 + 508;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// addi r4,r11,-2780
	ctx.r4.s64 = r11.s64 + -2780;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,26240
	ctx.r5.s64 = r11.s64 + 26240;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,820
	ctx.r3.s64 = ctx.r1.s64 + 820;
	// addi r4,r11,-2808
	ctx.r4.s64 = r11.s64 + -2808;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,26648
	ctx.r5.s64 = r11.s64 + 26648;
	// addi r4,r1,820
	ctx.r4.s64 = ctx.r1.s64 + 820;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,820
	ctx.r3.s64 = ctx.r1.s64 + 820;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// addi r4,r11,-2836
	ctx.r4.s64 = r11.s64 + -2836;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,27056
	ctx.r5.s64 = r11.s64 + 27056;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,516
	ctx.r3.s64 = ctx.r1.s64 + 516;
	// addi r4,r11,-2864
	ctx.r4.s64 = r11.s64 + -2864;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,27464
	ctx.r5.s64 = r11.s64 + 27464;
	// addi r4,r1,516
	ctx.r4.s64 = ctx.r1.s64 + 516;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,516
	ctx.r3.s64 = ctx.r1.s64 + 516;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// addi r4,r11,-2884
	ctx.r4.s64 = r11.s64 + -2884;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32154
	r11.s64 = -2107244544;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-19256
	ctx.r5.s64 = r11.s64 + -19256;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,692
	ctx.r3.s64 = ctx.r1.s64 + 692;
	// addi r4,r11,-2908
	ctx.r4.s64 = r11.s64 + -2908;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32153
	r11.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,11000
	ctx.r5.s64 = r11.s64 + 11000;
	// addi r4,r1,692
	ctx.r4.s64 = ctx.r1.s64 + 692;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,692
	ctx.r3.s64 = ctx.r1.s64 + 692;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// addi r4,r11,-2924
	ctx.r4.s64 = r11.s64 + -2924;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-136
	ctx.r5.s64 = r11.s64 + -136;
	// addi r4,r1,180
	ctx.r4.s64 = ctx.r1.s64 + 180;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,524
	ctx.r3.s64 = ctx.r1.s64 + 524;
	// addi r4,r11,-2940
	ctx.r4.s64 = r11.s64 + -2940;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,16024
	ctx.r5.s64 = r11.s64 + 16024;
	// addi r4,r1,524
	ctx.r4.s64 = ctx.r1.s64 + 524;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,524
	ctx.r3.s64 = ctx.r1.s64 + 524;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// addi r4,r11,-2956
	ctx.r4.s64 = r11.s64 + -2956;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32155
	r11.s64 = -2107310080;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,7424
	ctx.r5.s64 = r11.s64 + 7424;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,780
	ctx.r3.s64 = ctx.r1.s64 + 780;
	// addi r4,r11,-2976
	ctx.r4.s64 = r11.s64 + -2976;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32155
	r11.s64 = -2107310080;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,28008
	ctx.r5.s64 = r11.s64 + 28008;
	// addi r4,r1,780
	ctx.r4.s64 = ctx.r1.s64 + 780;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,780
	ctx.r3.s64 = ctx.r1.s64 + 780;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// addi r4,r11,-3000
	ctx.r4.s64 = r11.s64 + -3000;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,24600
	ctx.r5.s64 = r11.s64 + 24600;
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,532
	ctx.r3.s64 = ctx.r1.s64 + 532;
	// addi r4,r11,-3020
	ctx.r4.s64 = r11.s64 + -3020;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32155
	r11.s64 = -2107310080;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-32576
	ctx.r5.s64 = r11.s64 + -32576;
	// addi r4,r1,532
	ctx.r4.s64 = ctx.r1.s64 + 532;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,532
	ctx.r3.s64 = ctx.r1.s64 + 532;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// addi r4,r11,-3040
	ctx.r4.s64 = r11.s64 + -3040;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32155
	r11.s64 = -2107310080;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,552
	ctx.r5.s64 = r11.s64 + 552;
	// addi r4,r1,204
	ctx.r4.s64 = ctx.r1.s64 + 204;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,700
	ctx.r3.s64 = ctx.r1.s64 + 700;
	// addi r4,r11,-3060
	ctx.r4.s64 = r11.s64 + -3060;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32155
	r11.s64 = -2107310080;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-22272
	ctx.r5.s64 = r11.s64 + -22272;
	// addi r4,r1,700
	ctx.r4.s64 = ctx.r1.s64 + 700;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,700
	ctx.r3.s64 = ctx.r1.s64 + 700;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// addi r4,r11,-3080
	ctx.r4.s64 = r11.s64 + -3080;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32155
	r11.s64 = -2107310080;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-9880
	ctx.r5.s64 = r11.s64 + -9880;
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,540
	ctx.r3.s64 = ctx.r1.s64 + 540;
	// addi r4,r11,-3100
	ctx.r4.s64 = r11.s64 + -3100;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7544
	ctx.r5.s64 = r11.s64 + -7544;
	// addi r4,r1,540
	ctx.r4.s64 = ctx.r1.s64 + 540;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,540
	ctx.r3.s64 = ctx.r1.s64 + 540;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// addi r4,r11,-3120
	ctx.r4.s64 = r11.s64 + -3120;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,7136
	ctx.r5.s64 = r11.s64 + 7136;
	// addi r4,r1,220
	ctx.r4.s64 = ctx.r1.s64 + 220;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,844
	ctx.r3.s64 = ctx.r1.s64 + 844;
	// addi r4,r11,-3136
	ctx.r4.s64 = r11.s64 + -3136;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-20024
	ctx.r5.s64 = r11.s64 + -20024;
	// addi r4,r1,844
	ctx.r4.s64 = ctx.r1.s64 + 844;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,844
	ctx.r3.s64 = ctx.r1.s64 + 844;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// addi r4,r11,-3172
	ctx.r4.s64 = r11.s64 + -3172;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32154
	r11.s64 = -2107244544;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,-7144
	ctx.r5.s64 = r11.s64 + -7144;
	// addi r4,r1,228
	ctx.r4.s64 = ctx.r1.s64 + 228;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,548
	ctx.r3.s64 = ctx.r1.s64 + 548;
	// addi r4,r11,-3200
	ctx.r4.s64 = r11.s64 + -3200;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32155
	r11.s64 = -2107310080;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,14360
	ctx.r5.s64 = r11.s64 + 14360;
	// addi r4,r1,548
	ctx.r4.s64 = ctx.r1.s64 + 548;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,548
	ctx.r3.s64 = ctx.r1.s64 + 548;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// addi r4,r11,-3224
	ctx.r4.s64 = r11.s64 + -3224;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32155
	r11.s64 = -2107310080;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,21456
	ctx.r5.s64 = r11.s64 + 21456;
	// addi r4,r1,236
	ctx.r4.s64 = ctx.r1.s64 + 236;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,708
	ctx.r3.s64 = ctx.r1.s64 + 708;
	// addi r4,r11,28564
	ctx.r4.s64 = r11.s64 + 28564;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-20304
	ctx.r5.s64 = r11.s64 + -20304;
	// addi r4,r1,708
	ctx.r4.s64 = ctx.r1.s64 + 708;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,708
	ctx.r3.s64 = ctx.r1.s64 + 708;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// addi r4,r11,-3244
	ctx.r4.s64 = r11.s64 + -3244;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-19896
	ctx.r5.s64 = r11.s64 + -19896;
	// addi r4,r1,244
	ctx.r4.s64 = ctx.r1.s64 + 244;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,556
	ctx.r3.s64 = ctx.r1.s64 + 556;
	// addi r4,r11,-10408
	ctx.r4.s64 = r11.s64 + -10408;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-9800
	ctx.r5.s64 = r11.s64 + -9800;
	// addi r4,r1,556
	ctx.r4.s64 = ctx.r1.s64 + 556;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,556
	ctx.r3.s64 = ctx.r1.s64 + 556;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// addi r4,r11,-3252
	ctx.r4.s64 = r11.s64 + -3252;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-9344
	ctx.r5.s64 = r11.s64 + -9344;
	// addi r4,r1,252
	ctx.r4.s64 = ctx.r1.s64 + 252;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,788
	ctx.r3.s64 = ctx.r1.s64 + 788;
	// addi r4,r11,-3260
	ctx.r4.s64 = r11.s64 + -3260;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-8904
	ctx.r5.s64 = r11.s64 + -8904;
	// addi r4,r1,788
	ctx.r4.s64 = ctx.r1.s64 + 788;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,788
	ctx.r3.s64 = ctx.r1.s64 + 788;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// addi r4,r11,-3268
	ctx.r4.s64 = r11.s64 + -3268;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-8464
	ctx.r5.s64 = r11.s64 + -8464;
	// addi r4,r1,260
	ctx.r4.s64 = ctx.r1.s64 + 260;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,564
	ctx.r3.s64 = ctx.r1.s64 + 564;
	// addi r4,r11,-3276
	ctx.r4.s64 = r11.s64 + -3276;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-8024
	ctx.r5.s64 = r11.s64 + -8024;
	// addi r4,r1,564
	ctx.r4.s64 = ctx.r1.s64 + 564;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,564
	ctx.r3.s64 = ctx.r1.s64 + 564;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,268
	ctx.r3.s64 = ctx.r1.s64 + 268;
	// addi r4,r11,-3284
	ctx.r4.s64 = r11.s64 + -3284;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7584
	ctx.r5.s64 = r11.s64 + -7584;
	// addi r4,r1,268
	ctx.r4.s64 = ctx.r1.s64 + 268;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,268
	ctx.r3.s64 = ctx.r1.s64 + 268;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,716
	ctx.r3.s64 = ctx.r1.s64 + 716;
	// addi r4,r11,-3288
	ctx.r4.s64 = r11.s64 + -3288;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7144
	ctx.r5.s64 = r11.s64 + -7144;
	// addi r4,r1,716
	ctx.r4.s64 = ctx.r1.s64 + 716;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,716
	ctx.r3.s64 = ctx.r1.s64 + 716;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,276
	ctx.r3.s64 = ctx.r1.s64 + 276;
	// addi r4,r11,-3296
	ctx.r4.s64 = r11.s64 + -3296;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-6704
	ctx.r5.s64 = r11.s64 + -6704;
	// addi r4,r1,276
	ctx.r4.s64 = ctx.r1.s64 + 276;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,276
	ctx.r3.s64 = ctx.r1.s64 + 276;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,572
	ctx.r3.s64 = ctx.r1.s64 + 572;
	// addi r4,r11,-3304
	ctx.r4.s64 = r11.s64 + -3304;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-6264
	ctx.r5.s64 = r11.s64 + -6264;
	// addi r4,r1,572
	ctx.r4.s64 = ctx.r1.s64 + 572;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,572
	ctx.r3.s64 = ctx.r1.s64 + 572;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,284
	ctx.r3.s64 = ctx.r1.s64 + 284;
	// addi r4,r11,-3316
	ctx.r4.s64 = r11.s64 + -3316;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-5824
	ctx.r5.s64 = r11.s64 + -5824;
	// addi r4,r1,284
	ctx.r4.s64 = ctx.r1.s64 + 284;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,284
	ctx.r3.s64 = ctx.r1.s64 + 284;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,828
	ctx.r3.s64 = ctx.r1.s64 + 828;
	// addi r4,r11,-3328
	ctx.r4.s64 = r11.s64 + -3328;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-5384
	ctx.r5.s64 = r11.s64 + -5384;
	// addi r4,r1,828
	ctx.r4.s64 = ctx.r1.s64 + 828;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,828
	ctx.r3.s64 = ctx.r1.s64 + 828;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,292
	ctx.r3.s64 = ctx.r1.s64 + 292;
	// addi r4,r11,-3336
	ctx.r4.s64 = r11.s64 + -3336;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-4944
	ctx.r5.s64 = r11.s64 + -4944;
	// addi r4,r1,292
	ctx.r4.s64 = ctx.r1.s64 + 292;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,292
	ctx.r3.s64 = ctx.r1.s64 + 292;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,580
	ctx.r3.s64 = ctx.r1.s64 + 580;
	// addi r4,r11,-3340
	ctx.r4.s64 = r11.s64 + -3340;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-4504
	ctx.r5.s64 = r11.s64 + -4504;
	// addi r4,r1,580
	ctx.r4.s64 = ctx.r1.s64 + 580;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,580
	ctx.r3.s64 = ctx.r1.s64 + 580;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,300
	ctx.r3.s64 = ctx.r1.s64 + 300;
	// addi r4,r11,-3348
	ctx.r4.s64 = r11.s64 + -3348;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-4064
	ctx.r5.s64 = r11.s64 + -4064;
	// addi r4,r1,300
	ctx.r4.s64 = ctx.r1.s64 + 300;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,300
	ctx.r3.s64 = ctx.r1.s64 + 300;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,724
	ctx.r3.s64 = ctx.r1.s64 + 724;
	// addi r4,r11,-3352
	ctx.r4.s64 = r11.s64 + -3352;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-3624
	ctx.r5.s64 = r11.s64 + -3624;
	// addi r4,r1,724
	ctx.r4.s64 = ctx.r1.s64 + 724;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,724
	ctx.r3.s64 = ctx.r1.s64 + 724;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,308
	ctx.r3.s64 = ctx.r1.s64 + 308;
	// addi r4,r11,-3360
	ctx.r4.s64 = r11.s64 + -3360;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-3184
	ctx.r5.s64 = r11.s64 + -3184;
	// addi r4,r1,308
	ctx.r4.s64 = ctx.r1.s64 + 308;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,308
	ctx.r3.s64 = ctx.r1.s64 + 308;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,588
	ctx.r3.s64 = ctx.r1.s64 + 588;
	// addi r4,r11,-3368
	ctx.r4.s64 = r11.s64 + -3368;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-2744
	ctx.r5.s64 = r11.s64 + -2744;
	// addi r4,r1,588
	ctx.r4.s64 = ctx.r1.s64 + 588;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,588
	ctx.r3.s64 = ctx.r1.s64 + 588;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,316
	ctx.r3.s64 = ctx.r1.s64 + 316;
	// addi r4,r11,-3376
	ctx.r4.s64 = r11.s64 + -3376;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-2304
	ctx.r5.s64 = r11.s64 + -2304;
	// addi r4,r1,316
	ctx.r4.s64 = ctx.r1.s64 + 316;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,316
	ctx.r3.s64 = ctx.r1.s64 + 316;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,796
	ctx.r3.s64 = ctx.r1.s64 + 796;
	// addi r4,r11,-3384
	ctx.r4.s64 = r11.s64 + -3384;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-1864
	ctx.r5.s64 = r11.s64 + -1864;
	// addi r4,r1,796
	ctx.r4.s64 = ctx.r1.s64 + 796;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,796
	ctx.r3.s64 = ctx.r1.s64 + 796;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,324
	ctx.r3.s64 = ctx.r1.s64 + 324;
	// addi r4,r11,-3396
	ctx.r4.s64 = r11.s64 + -3396;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-1424
	ctx.r5.s64 = r11.s64 + -1424;
	// addi r4,r1,324
	ctx.r4.s64 = ctx.r1.s64 + 324;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,324
	ctx.r3.s64 = ctx.r1.s64 + 324;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,596
	ctx.r3.s64 = ctx.r1.s64 + 596;
	// addi r4,r11,-3408
	ctx.r4.s64 = r11.s64 + -3408;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-984
	ctx.r5.s64 = r11.s64 + -984;
	// addi r4,r1,596
	ctx.r4.s64 = ctx.r1.s64 + 596;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,596
	ctx.r3.s64 = ctx.r1.s64 + 596;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,332
	ctx.r3.s64 = ctx.r1.s64 + 332;
	// addi r4,r11,-10964
	ctx.r4.s64 = r11.s64 + -10964;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-544
	ctx.r5.s64 = r11.s64 + -544;
	// addi r4,r1,332
	ctx.r4.s64 = ctx.r1.s64 + 332;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,332
	ctx.r3.s64 = ctx.r1.s64 + 332;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,732
	ctx.r3.s64 = ctx.r1.s64 + 732;
	// addi r4,r11,-3416
	ctx.r4.s64 = r11.s64 + -3416;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,-104
	ctx.r5.s64 = r11.s64 + -104;
	// addi r4,r1,732
	ctx.r4.s64 = ctx.r1.s64 + 732;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,732
	ctx.r3.s64 = ctx.r1.s64 + 732;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,340
	ctx.r3.s64 = ctx.r1.s64 + 340;
	// addi r4,r11,-3420
	ctx.r4.s64 = r11.s64 + -3420;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,336
	ctx.r5.s64 = r11.s64 + 336;
	// addi r4,r1,340
	ctx.r4.s64 = ctx.r1.s64 + 340;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,340
	ctx.r3.s64 = ctx.r1.s64 + 340;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,604
	ctx.r3.s64 = ctx.r1.s64 + 604;
	// addi r4,r11,-3428
	ctx.r4.s64 = r11.s64 + -3428;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,776
	ctx.r5.s64 = r11.s64 + 776;
	// addi r4,r1,604
	ctx.r4.s64 = ctx.r1.s64 + 604;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,604
	ctx.r3.s64 = ctx.r1.s64 + 604;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// addi r4,r11,-3436
	ctx.r4.s64 = r11.s64 + -3436;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,1216
	ctx.r5.s64 = r11.s64 + 1216;
	// addi r4,r1,348
	ctx.r4.s64 = ctx.r1.s64 + 348;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,860
	ctx.r3.s64 = ctx.r1.s64 + 860;
	// addi r4,r11,-3444
	ctx.r4.s64 = r11.s64 + -3444;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,1656
	ctx.r5.s64 = r11.s64 + 1656;
	// addi r4,r1,860
	ctx.r4.s64 = ctx.r1.s64 + 860;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,860
	ctx.r3.s64 = ctx.r1.s64 + 860;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,356
	ctx.r3.s64 = ctx.r1.s64 + 356;
	// addi r4,r11,-3452
	ctx.r4.s64 = r11.s64 + -3452;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,2096
	ctx.r5.s64 = r11.s64 + 2096;
	// addi r4,r1,356
	ctx.r4.s64 = ctx.r1.s64 + 356;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,356
	ctx.r3.s64 = ctx.r1.s64 + 356;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,612
	ctx.r3.s64 = ctx.r1.s64 + 612;
	// addi r4,r11,-3464
	ctx.r4.s64 = r11.s64 + -3464;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,2536
	ctx.r5.s64 = r11.s64 + 2536;
	// addi r4,r1,612
	ctx.r4.s64 = ctx.r1.s64 + 612;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,612
	ctx.r3.s64 = ctx.r1.s64 + 612;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,364
	ctx.r3.s64 = ctx.r1.s64 + 364;
	// addi r4,r11,-3476
	ctx.r4.s64 = r11.s64 + -3476;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,2976
	ctx.r5.s64 = r11.s64 + 2976;
	// addi r4,r1,364
	ctx.r4.s64 = ctx.r1.s64 + 364;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,364
	ctx.r3.s64 = ctx.r1.s64 + 364;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,740
	ctx.r3.s64 = ctx.r1.s64 + 740;
	// addi r4,r11,-3484
	ctx.r4.s64 = r11.s64 + -3484;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,3416
	ctx.r5.s64 = r11.s64 + 3416;
	// addi r4,r1,740
	ctx.r4.s64 = ctx.r1.s64 + 740;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,740
	ctx.r3.s64 = ctx.r1.s64 + 740;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,372
	ctx.r3.s64 = ctx.r1.s64 + 372;
	// addi r4,r11,-3492
	ctx.r4.s64 = r11.s64 + -3492;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,3856
	ctx.r5.s64 = r11.s64 + 3856;
	// addi r4,r1,372
	ctx.r4.s64 = ctx.r1.s64 + 372;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,372
	ctx.r3.s64 = ctx.r1.s64 + 372;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,620
	ctx.r3.s64 = ctx.r1.s64 + 620;
	// addi r4,r11,-3500
	ctx.r4.s64 = r11.s64 + -3500;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,4296
	ctx.r5.s64 = r11.s64 + 4296;
	// addi r4,r1,620
	ctx.r4.s64 = ctx.r1.s64 + 620;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,620
	ctx.r3.s64 = ctx.r1.s64 + 620;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,380
	ctx.r3.s64 = ctx.r1.s64 + 380;
	// addi r4,r11,-3508
	ctx.r4.s64 = r11.s64 + -3508;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,4736
	ctx.r5.s64 = r11.s64 + 4736;
	// addi r4,r1,380
	ctx.r4.s64 = ctx.r1.s64 + 380;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,380
	ctx.r3.s64 = ctx.r1.s64 + 380;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,804
	ctx.r3.s64 = ctx.r1.s64 + 804;
	// addi r4,r11,-3520
	ctx.r4.s64 = r11.s64 + -3520;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,5176
	ctx.r5.s64 = r11.s64 + 5176;
	// addi r4,r1,804
	ctx.r4.s64 = ctx.r1.s64 + 804;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,804
	ctx.r3.s64 = ctx.r1.s64 + 804;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,388
	ctx.r3.s64 = ctx.r1.s64 + 388;
	// addi r4,r11,-3528
	ctx.r4.s64 = r11.s64 + -3528;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,5616
	ctx.r5.s64 = r11.s64 + 5616;
	// addi r4,r1,388
	ctx.r4.s64 = ctx.r1.s64 + 388;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,388
	ctx.r3.s64 = ctx.r1.s64 + 388;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,628
	ctx.r3.s64 = ctx.r1.s64 + 628;
	// addi r4,r11,-3536
	ctx.r4.s64 = r11.s64 + -3536;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,6056
	ctx.r5.s64 = r11.s64 + 6056;
	// addi r4,r1,628
	ctx.r4.s64 = ctx.r1.s64 + 628;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,628
	ctx.r3.s64 = ctx.r1.s64 + 628;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,396
	ctx.r3.s64 = ctx.r1.s64 + 396;
	// addi r4,r11,-3544
	ctx.r4.s64 = r11.s64 + -3544;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,6496
	ctx.r5.s64 = r11.s64 + 6496;
	// addi r4,r1,396
	ctx.r4.s64 = ctx.r1.s64 + 396;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,396
	ctx.r3.s64 = ctx.r1.s64 + 396;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// addi r4,r11,-3552
	ctx.r4.s64 = r11.s64 + -3552;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,6936
	ctx.r5.s64 = r11.s64 + 6936;
	// addi r4,r1,748
	ctx.r4.s64 = ctx.r1.s64 + 748;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,404
	ctx.r3.s64 = ctx.r1.s64 + 404;
	// addi r4,r11,-3560
	ctx.r4.s64 = r11.s64 + -3560;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,7376
	ctx.r5.s64 = r11.s64 + 7376;
	// addi r4,r1,404
	ctx.r4.s64 = ctx.r1.s64 + 404;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,404
	ctx.r3.s64 = ctx.r1.s64 + 404;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,636
	ctx.r3.s64 = ctx.r1.s64 + 636;
	// addi r4,r11,-3572
	ctx.r4.s64 = r11.s64 + -3572;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,7816
	ctx.r5.s64 = r11.s64 + 7816;
	// addi r4,r1,636
	ctx.r4.s64 = ctx.r1.s64 + 636;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,636
	ctx.r3.s64 = ctx.r1.s64 + 636;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,412
	ctx.r3.s64 = ctx.r1.s64 + 412;
	// addi r4,r11,-3580
	ctx.r4.s64 = r11.s64 + -3580;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,8256
	ctx.r5.s64 = r11.s64 + 8256;
	// addi r4,r1,412
	ctx.r4.s64 = ctx.r1.s64 + 412;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,412
	ctx.r3.s64 = ctx.r1.s64 + 412;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,836
	ctx.r3.s64 = ctx.r1.s64 + 836;
	// addi r4,r11,-3588
	ctx.r4.s64 = r11.s64 + -3588;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,8696
	ctx.r5.s64 = r11.s64 + 8696;
	// addi r4,r1,836
	ctx.r4.s64 = ctx.r1.s64 + 836;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,836
	ctx.r3.s64 = ctx.r1.s64 + 836;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,420
	ctx.r3.s64 = ctx.r1.s64 + 420;
	// addi r4,r11,-3600
	ctx.r4.s64 = r11.s64 + -3600;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,9136
	ctx.r5.s64 = r11.s64 + 9136;
	// addi r4,r1,420
	ctx.r4.s64 = ctx.r1.s64 + 420;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,420
	ctx.r3.s64 = ctx.r1.s64 + 420;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,644
	ctx.r3.s64 = ctx.r1.s64 + 644;
	// addi r4,r11,-3612
	ctx.r4.s64 = r11.s64 + -3612;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,9576
	ctx.r5.s64 = r11.s64 + 9576;
	// addi r4,r1,644
	ctx.r4.s64 = ctx.r1.s64 + 644;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,644
	ctx.r3.s64 = ctx.r1.s64 + 644;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,428
	ctx.r3.s64 = ctx.r1.s64 + 428;
	// addi r4,r11,-3620
	ctx.r4.s64 = r11.s64 + -3620;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,10016
	ctx.r5.s64 = r11.s64 + 10016;
	// addi r4,r1,428
	ctx.r4.s64 = ctx.r1.s64 + 428;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,428
	ctx.r3.s64 = ctx.r1.s64 + 428;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,756
	ctx.r3.s64 = ctx.r1.s64 + 756;
	// addi r4,r11,-3628
	ctx.r4.s64 = r11.s64 + -3628;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,10456
	ctx.r5.s64 = r11.s64 + 10456;
	// addi r4,r1,756
	ctx.r4.s64 = ctx.r1.s64 + 756;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,756
	ctx.r3.s64 = ctx.r1.s64 + 756;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,436
	ctx.r3.s64 = ctx.r1.s64 + 436;
	// addi r4,r11,-3636
	ctx.r4.s64 = r11.s64 + -3636;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,10896
	ctx.r5.s64 = r11.s64 + 10896;
	// addi r4,r1,436
	ctx.r4.s64 = ctx.r1.s64 + 436;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,436
	ctx.r3.s64 = ctx.r1.s64 + 436;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,652
	ctx.r3.s64 = ctx.r1.s64 + 652;
	// addi r4,r11,-3644
	ctx.r4.s64 = r11.s64 + -3644;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,11336
	ctx.r5.s64 = r11.s64 + 11336;
	// addi r4,r1,652
	ctx.r4.s64 = ctx.r1.s64 + 652;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,652
	ctx.r3.s64 = ctx.r1.s64 + 652;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,444
	ctx.r3.s64 = ctx.r1.s64 + 444;
	// addi r4,r11,-3652
	ctx.r4.s64 = r11.s64 + -3652;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,11776
	ctx.r5.s64 = r11.s64 + 11776;
	// addi r4,r1,444
	ctx.r4.s64 = ctx.r1.s64 + 444;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,444
	ctx.r3.s64 = ctx.r1.s64 + 444;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,812
	ctx.r3.s64 = ctx.r1.s64 + 812;
	// addi r4,r11,-3664
	ctx.r4.s64 = r11.s64 + -3664;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,12216
	ctx.r5.s64 = r11.s64 + 12216;
	// addi r4,r1,812
	ctx.r4.s64 = ctx.r1.s64 + 812;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,812
	ctx.r3.s64 = ctx.r1.s64 + 812;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,452
	ctx.r3.s64 = ctx.r1.s64 + 452;
	// addi r4,r11,-3672
	ctx.r4.s64 = r11.s64 + -3672;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,12656
	ctx.r5.s64 = r11.s64 + 12656;
	// addi r4,r1,452
	ctx.r4.s64 = ctx.r1.s64 + 452;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,452
	ctx.r3.s64 = ctx.r1.s64 + 452;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,660
	ctx.r3.s64 = ctx.r1.s64 + 660;
	// addi r4,r11,-3680
	ctx.r4.s64 = r11.s64 + -3680;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,13096
	ctx.r5.s64 = r11.s64 + 13096;
	// addi r4,r1,660
	ctx.r4.s64 = ctx.r1.s64 + 660;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,660
	ctx.r3.s64 = ctx.r1.s64 + 660;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,460
	ctx.r3.s64 = ctx.r1.s64 + 460;
	// addi r4,r11,-3688
	ctx.r4.s64 = r11.s64 + -3688;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,13536
	ctx.r5.s64 = r11.s64 + 13536;
	// addi r4,r1,460
	ctx.r4.s64 = ctx.r1.s64 + 460;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,460
	ctx.r3.s64 = ctx.r1.s64 + 460;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,764
	ctx.r3.s64 = ctx.r1.s64 + 764;
	// addi r4,r11,-3696
	ctx.r4.s64 = r11.s64 + -3696;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,13976
	ctx.r5.s64 = r11.s64 + 13976;
	// addi r4,r1,764
	ctx.r4.s64 = ctx.r1.s64 + 764;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,764
	ctx.r3.s64 = ctx.r1.s64 + 764;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,468
	ctx.r3.s64 = ctx.r1.s64 + 468;
	// addi r4,r11,-3704
	ctx.r4.s64 = r11.s64 + -3704;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,14416
	ctx.r5.s64 = r11.s64 + 14416;
	// addi r4,r1,468
	ctx.r4.s64 = ctx.r1.s64 + 468;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,468
	ctx.r3.s64 = ctx.r1.s64 + 468;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,668
	ctx.r3.s64 = ctx.r1.s64 + 668;
	// addi r4,r11,-3712
	ctx.r4.s64 = r11.s64 + -3712;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,14856
	ctx.r5.s64 = r11.s64 + 14856;
	// addi r4,r1,668
	ctx.r4.s64 = ctx.r1.s64 + 668;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,668
	ctx.r3.s64 = ctx.r1.s64 + 668;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-3720
	ctx.r4.s64 = r11.s64 + -3720;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,15296
	ctx.r5.s64 = r11.s64 + 15296;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-3732
	ctx.r4.s64 = r11.s64 + -3732;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,15736
	ctx.r5.s64 = r11.s64 + 15736;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-3740
	ctx.r4.s64 = r11.s64 + -3740;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,16176
	ctx.r5.s64 = r11.s64 + 16176;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,-3748
	ctx.r4.s64 = r11.s64 + -3748;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,16616
	ctx.r5.s64 = r11.s64 + 16616;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-3756
	ctx.r4.s64 = r11.s64 + -3756;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,17056
	ctx.r5.s64 = r11.s64 + 17056;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r4,r11,-3764
	ctx.r4.s64 = r11.s64 + -3764;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,17496
	ctx.r5.s64 = r11.s64 + 17496;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-3772
	ctx.r4.s64 = r11.s64 + -3772;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,17936
	ctx.r5.s64 = r11.s64 + 17936;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,18376
	ctx.r5.s64 = r11.s64 + 18376;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-3792
	ctx.r4.s64 = r11.s64 + -3792;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,18816
	ctx.r5.s64 = r11.s64 + 18816;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addi r4,r11,-3804
	ctx.r4.s64 = r11.s64 + -3804;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,19256
	ctx.r5.s64 = r11.s64 + 19256;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-3812
	ctx.r4.s64 = r11.s64 + -3812;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,19696
	ctx.r5.s64 = r11.s64 + 19696;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// addi r4,r11,-3820
	ctx.r4.s64 = r11.s64 + -3820;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,20136
	ctx.r5.s64 = r11.s64 + 20136;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-3828
	ctx.r4.s64 = r11.s64 + -3828;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,20576
	ctx.r5.s64 = r11.s64 + 20576;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// addi r4,r11,-3836
	ctx.r4.s64 = r11.s64 + -3836;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,21016
	ctx.r5.s64 = r11.s64 + 21016;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-3844
	ctx.r4.s64 = r11.s64 + -3844;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,21456
	ctx.r5.s64 = r11.s64 + 21456;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// addi r4,r11,-3852
	ctx.r4.s64 = r11.s64 + -3852;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,21896
	ctx.r5.s64 = r11.s64 + 21896;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,-3860
	ctx.r4.s64 = r11.s64 + -3860;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,22336
	ctx.r5.s64 = r11.s64 + 22336;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// addi r4,r11,-3868
	ctx.r4.s64 = r11.s64 + -3868;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,22776
	ctx.r5.s64 = r11.s64 + 22776;
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-3876
	ctx.r4.s64 = r11.s64 + -3876;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,23216
	ctx.r5.s64 = r11.s64 + 23216;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// addi r4,r11,-3884
	ctx.r4.s64 = r11.s64 + -3884;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,23656
	ctx.r5.s64 = r11.s64 + 23656;
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-3888
	ctx.r4.s64 = r11.s64 + -3888;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,24096
	ctx.r5.s64 = r11.s64 + 24096;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// addi r4,r11,-3896
	ctx.r4.s64 = r11.s64 + -3896;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,24536
	ctx.r5.s64 = r11.s64 + 24536;
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-3904
	ctx.r4.s64 = r11.s64 + -3904;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,24976
	ctx.r5.s64 = r11.s64 + 24976;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// addi r4,r11,-3912
	ctx.r4.s64 = r11.s64 + -3912;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,25416
	ctx.r5.s64 = r11.s64 + 25416;
	// addi r4,r1,264
	ctx.r4.s64 = ctx.r1.s64 + 264;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,-3920
	ctx.r4.s64 = r11.s64 + -3920;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,25856
	ctx.r5.s64 = r11.s64 + 25856;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// addi r4,r11,-3928
	ctx.r4.s64 = r11.s64 + -3928;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,26296
	ctx.r5.s64 = r11.s64 + 26296;
	// addi r4,r1,280
	ctx.r4.s64 = ctx.r1.s64 + 280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,-3936
	ctx.r4.s64 = r11.s64 + -3936;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,26736
	ctx.r5.s64 = r11.s64 + 26736;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// addi r4,r11,-3944
	ctx.r4.s64 = r11.s64 + -3944;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,27176
	ctx.r5.s64 = r11.s64 + 27176;
	// addi r4,r1,296
	ctx.r4.s64 = ctx.r1.s64 + 296;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r11,-3952
	ctx.r4.s64 = r11.s64 + -3952;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,27616
	ctx.r5.s64 = r11.s64 + 27616;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// addi r4,r11,-3960
	ctx.r4.s64 = r11.s64 + -3960;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,28056
	ctx.r5.s64 = r11.s64 + 28056;
	// addi r4,r1,312
	ctx.r4.s64 = ctx.r1.s64 + 312;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r11,-3972
	ctx.r4.s64 = r11.s64 + -3972;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,28496
	ctx.r5.s64 = r11.s64 + 28496;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// addi r4,r11,-3984
	ctx.r4.s64 = r11.s64 + -3984;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,28936
	ctx.r5.s64 = r11.s64 + 28936;
	// addi r4,r1,328
	ctx.r4.s64 = ctx.r1.s64 + 328;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,-3992
	ctx.r4.s64 = r11.s64 + -3992;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,29376
	ctx.r5.s64 = r11.s64 + 29376;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// addi r4,r11,-4004
	ctx.r4.s64 = r11.s64 + -4004;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,29816
	ctx.r5.s64 = r11.s64 + 29816;
	// addi r4,r1,344
	ctx.r4.s64 = ctx.r1.s64 + 344;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r4,r11,-4016
	ctx.r4.s64 = r11.s64 + -4016;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,30256
	ctx.r5.s64 = r11.s64 + 30256;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// addi r4,r11,-4024
	ctx.r4.s64 = r11.s64 + -4024;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,30696
	ctx.r5.s64 = r11.s64 + 30696;
	// addi r4,r1,360
	ctx.r4.s64 = ctx.r1.s64 + 360;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,-4036
	ctx.r4.s64 = r11.s64 + -4036;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,31136
	ctx.r5.s64 = r11.s64 + 31136;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// addi r4,r11,-4044
	ctx.r4.s64 = r11.s64 + -4044;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,31576
	ctx.r5.s64 = r11.s64 + 31576;
	// addi r4,r1,376
	ctx.r4.s64 = ctx.r1.s64 + 376;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r4,r11,-4056
	ctx.r4.s64 = r11.s64 + -4056;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,32016
	ctx.r5.s64 = r11.s64 + 32016;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,392
	ctx.r3.s64 = ctx.r1.s64 + 392;
	// addi r4,r11,-4068
	ctx.r4.s64 = r11.s64 + -4068;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32105
	r11.s64 = -2104033280;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,32456
	ctx.r5.s64 = r11.s64 + 32456;
	// addi r4,r1,392
	ctx.r4.s64 = ctx.r1.s64 + 392;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,392
	ctx.r3.s64 = ctx.r1.s64 + 392;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r4,r11,-4080
	ctx.r4.s64 = r11.s64 + -4080;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32104
	r11.s64 = -2103967744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-32640
	ctx.r5.s64 = r11.s64 + -32640;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// addi r4,r11,-4092
	ctx.r4.s64 = r11.s64 + -4092;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32104
	r11.s64 = -2103967744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-32200
	ctx.r5.s64 = r11.s64 + -32200;
	// addi r4,r1,408
	ctx.r4.s64 = ctx.r1.s64 + 408;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r4,r11,-4104
	ctx.r4.s64 = r11.s64 + -4104;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32104
	r11.s64 = -2103967744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-31760
	ctx.r5.s64 = r11.s64 + -31760;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,424
	ctx.r3.s64 = ctx.r1.s64 + 424;
	// addi r4,r11,-4108
	ctx.r4.s64 = r11.s64 + -4108;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32104
	r11.s64 = -2103967744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-31320
	ctx.r5.s64 = r11.s64 + -31320;
	// addi r4,r1,424
	ctx.r4.s64 = ctx.r1.s64 + 424;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,424
	ctx.r3.s64 = ctx.r1.s64 + 424;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// addi r4,r11,-4116
	ctx.r4.s64 = r11.s64 + -4116;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32104
	r11.s64 = -2103967744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-30880
	ctx.r5.s64 = r11.s64 + -30880;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,440
	ctx.r3.s64 = ctx.r1.s64 + 440;
	// addi r4,r11,-4128
	ctx.r4.s64 = r11.s64 + -4128;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32104
	r11.s64 = -2103967744;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-30440
	ctx.r5.s64 = r11.s64 + -30440;
	// addi r4,r1,440
	ctx.r4.s64 = ctx.r1.s64 + 440;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,440
	ctx.r3.s64 = ctx.r1.s64 + 440;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r4,r11,-4144
	ctx.r4.s64 = r11.s64 + -4144;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32104
	r11.s64 = -2103967744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,-29992
	ctx.r5.s64 = r11.s64 + -29992;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,456
	ctx.r3.s64 = ctx.r1.s64 + 456;
	// addi r4,r11,-4156
	ctx.r4.s64 = r11.s64 + -4156;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32104
	r11.s64 = -2103967744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-29544
	ctx.r5.s64 = r11.s64 + -29544;
	// addi r4,r1,456
	ctx.r4.s64 = ctx.r1.s64 + 456;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,456
	ctx.r3.s64 = ctx.r1.s64 + 456;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// addi r4,r11,-4168
	ctx.r4.s64 = r11.s64 + -4168;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32104
	r11.s64 = -2103967744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-29096
	ctx.r5.s64 = r11.s64 + -29096;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// addi r4,r11,-4180
	ctx.r4.s64 = r11.s64 + -4180;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32104
	r11.s64 = -2103967744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28648
	ctx.r5.s64 = r11.s64 + -28648;
	// addi r4,r1,472
	ctx.r4.s64 = ctx.r1.s64 + 472;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// addi r4,r11,-4196
	ctx.r4.s64 = r11.s64 + -4196;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32104
	r11.s64 = -2103967744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28200
	ctx.r5.s64 = r11.s64 + -28200;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,488
	ctx.r3.s64 = ctx.r1.s64 + 488;
	// addi r4,r11,-4212
	ctx.r4.s64 = r11.s64 + -4212;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32104
	r11.s64 = -2103967744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27752
	ctx.r5.s64 = r11.s64 + -27752;
	// addi r4,r1,488
	ctx.r4.s64 = ctx.r1.s64 + 488;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,488
	ctx.r3.s64 = ctx.r1.s64 + 488;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// addi r4,r11,-4224
	ctx.r4.s64 = r11.s64 + -4224;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32104
	r11.s64 = -2103967744;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27304
	ctx.r5.s64 = r11.s64 + -27304;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,504
	ctx.r3.s64 = ctx.r1.s64 + 504;
	// addi r4,r11,-4240
	ctx.r4.s64 = r11.s64 + -4240;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32104
	r11.s64 = -2103967744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26856
	ctx.r5.s64 = r11.s64 + -26856;
	// addi r4,r1,504
	ctx.r4.s64 = ctx.r1.s64 + 504;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,504
	ctx.r3.s64 = ctx.r1.s64 + 504;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// addi r4,r11,-4256
	ctx.r4.s64 = r11.s64 + -4256;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32104
	r11.s64 = -2103967744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26408
	ctx.r5.s64 = r11.s64 + -26408;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,520
	ctx.r3.s64 = ctx.r1.s64 + 520;
	// addi r4,r11,-4268
	ctx.r4.s64 = r11.s64 + -4268;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32104
	r11.s64 = -2103967744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-25960
	ctx.r5.s64 = r11.s64 + -25960;
	// addi r4,r1,520
	ctx.r4.s64 = ctx.r1.s64 + 520;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,520
	ctx.r3.s64 = ctx.r1.s64 + 520;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// addi r4,r11,-4288
	ctx.r4.s64 = r11.s64 + -4288;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32104
	r11.s64 = -2103967744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,28072
	ctx.r5.s64 = r11.s64 + 28072;
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,536
	ctx.r3.s64 = ctx.r1.s64 + 536;
	// addi r4,r11,-4308
	ctx.r4.s64 = r11.s64 + -4308;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32104
	r11.s64 = -2103967744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,28560
	ctx.r5.s64 = r11.s64 + 28560;
	// addi r4,r1,536
	ctx.r4.s64 = ctx.r1.s64 + 536;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,536
	ctx.r3.s64 = ctx.r1.s64 + 536;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// addi r4,r11,-4328
	ctx.r4.s64 = r11.s64 + -4328;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32104
	r11.s64 = -2103967744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,29048
	ctx.r5.s64 = r11.s64 + 29048;
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,552
	ctx.r3.s64 = ctx.r1.s64 + 552;
	// addi r4,r11,-4348
	ctx.r4.s64 = r11.s64 + -4348;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32104
	r11.s64 = -2103967744;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,29536
	ctx.r5.s64 = r11.s64 + 29536;
	// addi r4,r1,552
	ctx.r4.s64 = ctx.r1.s64 + 552;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,552
	ctx.r3.s64 = ctx.r1.s64 + 552;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// addi r4,r11,-4368
	ctx.r4.s64 = r11.s64 + -4368;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32104
	r11.s64 = -2103967744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,30024
	ctx.r5.s64 = r11.s64 + 30024;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,568
	ctx.r3.s64 = ctx.r1.s64 + 568;
	// addi r4,r11,-4388
	ctx.r4.s64 = r11.s64 + -4388;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32104
	r11.s64 = -2103967744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,30512
	ctx.r5.s64 = r11.s64 + 30512;
	// addi r4,r1,568
	ctx.r4.s64 = ctx.r1.s64 + 568;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,568
	ctx.r3.s64 = ctx.r1.s64 + 568;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// addi r4,r11,-4412
	ctx.r4.s64 = r11.s64 + -4412;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32104
	r11.s64 = -2103967744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,31000
	ctx.r5.s64 = r11.s64 + 31000;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,584
	ctx.r3.s64 = ctx.r1.s64 + 584;
	// addi r4,r11,-4440
	ctx.r4.s64 = r11.s64 + -4440;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32104
	r11.s64 = -2103967744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,31488
	ctx.r5.s64 = r11.s64 + 31488;
	// addi r4,r1,584
	ctx.r4.s64 = ctx.r1.s64 + 584;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,584
	ctx.r3.s64 = ctx.r1.s64 + 584;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// addi r4,r11,-4460
	ctx.r4.s64 = r11.s64 + -4460;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32104
	r11.s64 = -2103967744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,31976
	ctx.r5.s64 = r11.s64 + 31976;
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,600
	ctx.r3.s64 = ctx.r1.s64 + 600;
	// addi r4,r11,-4484
	ctx.r4.s64 = r11.s64 + -4484;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32104
	r11.s64 = -2103967744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,32464
	ctx.r5.s64 = r11.s64 + 32464;
	// addi r4,r1,600
	ctx.r4.s64 = ctx.r1.s64 + 600;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,600
	ctx.r3.s64 = ctx.r1.s64 + 600;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// addi r4,r11,-4508
	ctx.r4.s64 = r11.s64 + -4508;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32103
	r11.s64 = -2103902208;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26368
	ctx.r5.s64 = r11.s64 + -26368;
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,616
	ctx.r3.s64 = ctx.r1.s64 + 616;
	// addi r4,r11,-4528
	ctx.r4.s64 = r11.s64 + -4528;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-17224
	ctx.r5.s64 = r11.s64 + -17224;
	// addi r4,r1,616
	ctx.r4.s64 = ctx.r1.s64 + 616;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,616
	ctx.r3.s64 = ctx.r1.s64 + 616;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// addi r4,r11,-4544
	ctx.r4.s64 = r11.s64 + -4544;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-16760
	ctx.r5.s64 = r11.s64 + -16760;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,632
	ctx.r3.s64 = ctx.r1.s64 + 632;
	// addi r4,r11,-4560
	ctx.r4.s64 = r11.s64 + -4560;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-18936
	ctx.r5.s64 = r11.s64 + -18936;
	// addi r4,r1,632
	ctx.r4.s64 = ctx.r1.s64 + 632;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,632
	ctx.r3.s64 = ctx.r1.s64 + 632;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// addi r4,r11,-4576
	ctx.r4.s64 = r11.s64 + -4576;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32067
	r11.s64 = -2101542912;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,8096
	ctx.r5.s64 = r11.s64 + 8096;
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,648
	ctx.r3.s64 = ctx.r1.s64 + 648;
	// addi r4,r11,-4592
	ctx.r4.s64 = r11.s64 + -4592;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26552
	ctx.r5.s64 = r11.s64 + -26552;
	// addi r4,r1,648
	ctx.r4.s64 = ctx.r1.s64 + 648;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,648
	ctx.r3.s64 = ctx.r1.s64 + 648;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// addi r4,r11,-4616
	ctx.r4.s64 = r11.s64 + -4616;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26144
	ctx.r5.s64 = r11.s64 + -26144;
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,664
	ctx.r3.s64 = ctx.r1.s64 + 664;
	// addi r4,r11,-4640
	ctx.r4.s64 = r11.s64 + -4640;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32067
	r11.s64 = -2101542912;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,14048
	ctx.r5.s64 = r11.s64 + 14048;
	// addi r4,r1,664
	ctx.r4.s64 = ctx.r1.s64 + 664;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,664
	ctx.r3.s64 = ctx.r1.s64 + 664;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// addi r4,r11,-4656
	ctx.r4.s64 = r11.s64 + -4656;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32067
	r11.s64 = -2101542912;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,9912
	ctx.r5.s64 = r11.s64 + 9912;
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,680
	ctx.r3.s64 = ctx.r1.s64 + 680;
	// addi r4,r11,-4672
	ctx.r4.s64 = r11.s64 + -4672;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32135
	r11.s64 = -2105999360;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-14216
	ctx.r5.s64 = r11.s64 + -14216;
	// addi r4,r1,680
	ctx.r4.s64 = ctx.r1.s64 + 680;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,680
	ctx.r3.s64 = ctx.r1.s64 + 680;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// addi r4,r11,-4692
	ctx.r4.s64 = r11.s64 + -4692;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32135
	r11.s64 = -2105999360;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-11120
	ctx.r5.s64 = r11.s64 + -11120;
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,696
	ctx.r3.s64 = ctx.r1.s64 + 696;
	// addi r4,r11,-4708
	ctx.r4.s64 = r11.s64 + -4708;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32135
	r11.s64 = -2105999360;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-7888
	ctx.r5.s64 = r11.s64 + -7888;
	// addi r4,r1,696
	ctx.r4.s64 = ctx.r1.s64 + 696;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,696
	ctx.r3.s64 = ctx.r1.s64 + 696;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// addi r4,r11,-4724
	ctx.r4.s64 = r11.s64 + -4724;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32166
	r11.s64 = -2108030976;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-11136
	ctx.r5.s64 = r11.s64 + -11136;
	// addi r4,r1,704
	ctx.r4.s64 = ctx.r1.s64 + 704;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,712
	ctx.r3.s64 = ctx.r1.s64 + 712;
	// addi r4,r11,-4740
	ctx.r4.s64 = r11.s64 + -4740;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32166
	r11.s64 = -2108030976;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-6368
	ctx.r5.s64 = r11.s64 + -6368;
	// addi r4,r1,712
	ctx.r4.s64 = ctx.r1.s64 + 712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,712
	ctx.r3.s64 = ctx.r1.s64 + 712;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// addi r4,r11,-4756
	ctx.r4.s64 = r11.s64 + -4756;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,12960
	ctx.r5.s64 = r11.s64 + 12960;
	// addi r4,r1,720
	ctx.r4.s64 = ctx.r1.s64 + 720;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,728
	ctx.r3.s64 = ctx.r1.s64 + 728;
	// addi r4,r11,-4776
	ctx.r4.s64 = r11.s64 + -4776;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,17888
	ctx.r5.s64 = r11.s64 + 17888;
	// addi r4,r1,728
	ctx.r4.s64 = ctx.r1.s64 + 728;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,728
	ctx.r3.s64 = ctx.r1.s64 + 728;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// addi r4,r11,-4792
	ctx.r4.s64 = r11.s64 + -4792;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,12128
	ctx.r5.s64 = r11.s64 + 12128;
	// addi r4,r1,736
	ctx.r4.s64 = ctx.r1.s64 + 736;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,744
	ctx.r3.s64 = ctx.r1.s64 + 744;
	// addi r4,r11,-4808
	ctx.r4.s64 = r11.s64 + -4808;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,12184
	ctx.r5.s64 = r11.s64 + 12184;
	// addi r4,r1,744
	ctx.r4.s64 = ctx.r1.s64 + 744;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,744
	ctx.r3.s64 = ctx.r1.s64 + 744;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// addi r4,r11,-4824
	ctx.r4.s64 = r11.s64 + -4824;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,12240
	ctx.r5.s64 = r11.s64 + 12240;
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,760
	ctx.r3.s64 = ctx.r1.s64 + 760;
	// addi r4,r11,-4840
	ctx.r4.s64 = r11.s64 + -4840;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,12296
	ctx.r5.s64 = r11.s64 + 12296;
	// addi r4,r1,760
	ctx.r4.s64 = ctx.r1.s64 + 760;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,760
	ctx.r3.s64 = ctx.r1.s64 + 760;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// addi r4,r11,-4860
	ctx.r4.s64 = r11.s64 + -4860;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,12352
	ctx.r5.s64 = r11.s64 + 12352;
	// addi r4,r1,768
	ctx.r4.s64 = ctx.r1.s64 + 768;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,776
	ctx.r3.s64 = ctx.r1.s64 + 776;
	// addi r4,r11,-4880
	ctx.r4.s64 = r11.s64 + -4880;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,12408
	ctx.r5.s64 = r11.s64 + 12408;
	// addi r4,r1,776
	ctx.r4.s64 = ctx.r1.s64 + 776;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,776
	ctx.r3.s64 = ctx.r1.s64 + 776;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// addi r4,r11,-4900
	ctx.r4.s64 = r11.s64 + -4900;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,12464
	ctx.r5.s64 = r11.s64 + 12464;
	// addi r4,r1,784
	ctx.r4.s64 = ctx.r1.s64 + 784;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,792
	ctx.r3.s64 = ctx.r1.s64 + 792;
	// addi r4,r11,-4920
	ctx.r4.s64 = r11.s64 + -4920;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,12520
	ctx.r5.s64 = r11.s64 + 12520;
	// addi r4,r1,792
	ctx.r4.s64 = ctx.r1.s64 + 792;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,792
	ctx.r3.s64 = ctx.r1.s64 + 792;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// addi r4,r11,-4940
	ctx.r4.s64 = r11.s64 + -4940;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,12576
	ctx.r5.s64 = r11.s64 + 12576;
	// addi r4,r1,800
	ctx.r4.s64 = ctx.r1.s64 + 800;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,808
	ctx.r3.s64 = ctx.r1.s64 + 808;
	// addi r4,r11,-4960
	ctx.r4.s64 = r11.s64 + -4960;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,12632
	ctx.r5.s64 = r11.s64 + 12632;
	// addi r4,r1,808
	ctx.r4.s64 = ctx.r1.s64 + 808;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,808
	ctx.r3.s64 = ctx.r1.s64 + 808;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// addi r4,r11,-4984
	ctx.r4.s64 = r11.s64 + -4984;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,12688
	ctx.r5.s64 = r11.s64 + 12688;
	// addi r4,r1,816
	ctx.r4.s64 = ctx.r1.s64 + 816;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,824
	ctx.r3.s64 = ctx.r1.s64 + 824;
	// addi r4,r11,-5008
	ctx.r4.s64 = r11.s64 + -5008;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,12744
	ctx.r5.s64 = r11.s64 + 12744;
	// addi r4,r1,824
	ctx.r4.s64 = ctx.r1.s64 + 824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,824
	ctx.r3.s64 = ctx.r1.s64 + 824;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// addi r4,r11,-5016
	ctx.r4.s64 = r11.s64 + -5016;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32135
	r11.s64 = -2105999360;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,272
	ctx.r5.s64 = r11.s64 + 272;
	// addi r4,r1,832
	ctx.r4.s64 = ctx.r1.s64 + 832;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,840
	ctx.r3.s64 = ctx.r1.s64 + 840;
	// addi r4,r11,-5024
	ctx.r4.s64 = r11.s64 + -5024;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32135
	r11.s64 = -2105999360;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,9416
	ctx.r5.s64 = r11.s64 + 9416;
	// addi r4,r1,840
	ctx.r4.s64 = ctx.r1.s64 + 840;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,840
	ctx.r3.s64 = ctx.r1.s64 + 840;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// addi r4,r11,-5032
	ctx.r4.s64 = r11.s64 + -5032;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32135
	r11.s64 = -2105999360;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,15056
	ctx.r5.s64 = r11.s64 + 15056;
	// addi r4,r1,848
	ctx.r4.s64 = ctx.r1.s64 + 848;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,856
	ctx.r3.s64 = ctx.r1.s64 + 856;
	// addi r4,r11,-5040
	ctx.r4.s64 = r11.s64 + -5040;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32135
	r11.s64 = -2105999360;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,22528
	ctx.r5.s64 = r11.s64 + 22528;
	// addi r4,r1,856
	ctx.r4.s64 = ctx.r1.s64 + 856;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,856
	ctx.r3.s64 = ctx.r1.s64 + 856;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// addi r4,r11,-5048
	ctx.r4.s64 = r11.s64 + -5048;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32135
	r11.s64 = -2105999360;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,30624
	ctx.r5.s64 = r11.s64 + 30624;
	// addi r4,r1,864
	ctx.r4.s64 = ctx.r1.s64 + 864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A57D8"))) PPC_WEAK_FUNC(sub_827A57D8);
PPC_FUNC_IMPL(__imp__sub_827A57D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,6048
	ctx.r4.s64 = r11.s64 + 6048;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7352
	ctx.r5.s64 = r11.s64 + -7352;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-11748
	ctx.r4.s64 = r11.s64 + -11748;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-15344
	ctx.r5.s64 = r11.s64 + -15344;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,6032
	ctx.r4.s64 = r11.s64 + 6032;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-10928
	ctx.r5.s64 = r11.s64 + -10928;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-11552
	ctx.r4.s64 = r11.s64 + -11552;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-1920
	ctx.r5.s64 = r11.s64 + -1920;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,3552
	ctx.r4.s64 = r11.s64 + 3552;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,5736
	ctx.r5.s64 = r11.s64 + 5736;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,6020
	ctx.r4.s64 = r11.s64 + 6020;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32158
	r11.s64 = -2107506688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-14464
	ctx.r5.s64 = r11.s64 + -14464;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5272
	ctx.r4.s64 = r11.s64 + 5272;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,21784
	ctx.r5.s64 = r11.s64 + 21784;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,18492
	ctx.r4.s64 = r11.s64 + 18492;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32159
	r11.s64 = -2107572224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,26840
	ctx.r5.s64 = r11.s64 + 26840;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,6008
	ctx.r4.s64 = r11.s64 + 6008;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,9000
	ctx.r5.s64 = r11.s64 + 9000;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5992
	ctx.r4.s64 = r11.s64 + 5992;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32111
	r11.s64 = -2104426496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-22576
	ctx.r5.s64 = r11.s64 + -22576;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5968
	ctx.r4.s64 = r11.s64 + 5968;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32112
	r11.s64 = -2104492032;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,13824
	ctx.r5.s64 = r11.s64 + 13824;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5944
	ctx.r4.s64 = r11.s64 + 5944;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32112
	r11.s64 = -2104492032;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,14320
	ctx.r5.s64 = r11.s64 + 14320;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5920
	ctx.r4.s64 = r11.s64 + 5920;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32112
	r11.s64 = -2104492032;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,14816
	ctx.r5.s64 = r11.s64 + 14816;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5900
	ctx.r4.s64 = r11.s64 + 5900;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32121
	r11.s64 = -2105081856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,-4768
	ctx.r5.s64 = r11.s64 + -4768;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5880
	ctx.r4.s64 = r11.s64 + 5880;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32121
	r11.s64 = -2105081856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-4280
	ctx.r5.s64 = r11.s64 + -4280;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5864
	ctx.r4.s64 = r11.s64 + 5864;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32115
	r11.s64 = -2104688640;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,24544
	ctx.r5.s64 = r11.s64 + 24544;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5844
	ctx.r4.s64 = r11.s64 + 5844;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32115
	r11.s64 = -2104688640;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,25032
	ctx.r5.s64 = r11.s64 + 25032;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5824
	ctx.r4.s64 = r11.s64 + 5824;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32120
	r11.s64 = -2105016320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-10680
	ctx.r5.s64 = r11.s64 + -10680;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5804
	ctx.r4.s64 = r11.s64 + 5804;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32120
	r11.s64 = -2105016320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-10192
	ctx.r5.s64 = r11.s64 + -10192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5784
	ctx.r4.s64 = r11.s64 + 5784;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32118
	r11.s64 = -2104885248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,27760
	ctx.r5.s64 = r11.s64 + 27760;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5768
	ctx.r4.s64 = r11.s64 + 5768;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32117
	r11.s64 = -2104819712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-9376
	ctx.r5.s64 = r11.s64 + -9376;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5748
	ctx.r4.s64 = r11.s64 + 5748;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32116
	r11.s64 = -2104754176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-17840
	ctx.r5.s64 = r11.s64 + -17840;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5724
	ctx.r4.s64 = r11.s64 + 5724;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32119
	r11.s64 = -2104950784;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-2208
	ctx.r5.s64 = r11.s64 + -2208;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5700
	ctx.r4.s64 = r11.s64 + 5700;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32119
	r11.s64 = -2104950784;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-1728
	ctx.r5.s64 = r11.s64 + -1728;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5676
	ctx.r4.s64 = r11.s64 + 5676;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32119
	r11.s64 = -2104950784;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-1248
	ctx.r5.s64 = r11.s64 + -1248;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5652
	ctx.r4.s64 = r11.s64 + 5652;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32119
	r11.s64 = -2104950784;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-768
	ctx.r5.s64 = r11.s64 + -768;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5628
	ctx.r4.s64 = r11.s64 + 5628;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32119
	r11.s64 = -2104950784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-288
	ctx.r5.s64 = r11.s64 + -288;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5604
	ctx.r4.s64 = r11.s64 + 5604;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32119
	r11.s64 = -2104950784;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,192
	ctx.r5.s64 = r11.s64 + 192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5580
	ctx.r4.s64 = r11.s64 + 5580;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32119
	r11.s64 = -2104950784;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,672
	ctx.r5.s64 = r11.s64 + 672;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5556
	ctx.r4.s64 = r11.s64 + 5556;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32119
	r11.s64 = -2104950784;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,1152
	ctx.r5.s64 = r11.s64 + 1152;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5536
	ctx.r4.s64 = r11.s64 + 5536;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32114
	r11.s64 = -2104623104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,7920
	ctx.r5.s64 = r11.s64 + 7920;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5512
	ctx.r4.s64 = r11.s64 + 5512;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32114
	r11.s64 = -2104623104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,8408
	ctx.r5.s64 = r11.s64 + 8408;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5492
	ctx.r4.s64 = r11.s64 + 5492;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32113
	r11.s64 = -2104557568;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,11512
	ctx.r5.s64 = r11.s64 + 11512;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5468
	ctx.r4.s64 = r11.s64 + 5468;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32113
	r11.s64 = -2104557568;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,12136
	ctx.r5.s64 = r11.s64 + 12136;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5444
	ctx.r4.s64 = r11.s64 + 5444;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32113
	r11.s64 = -2104557568;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,12760
	ctx.r5.s64 = r11.s64 + 12760;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5424
	ctx.r4.s64 = r11.s64 + 5424;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32113
	r11.s64 = -2104557568;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,13384
	ctx.r5.s64 = r11.s64 + 13384;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5396
	ctx.r4.s64 = r11.s64 + 5396;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32113
	r11.s64 = -2104557568;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,14008
	ctx.r5.s64 = r11.s64 + 14008;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5372
	ctx.r4.s64 = r11.s64 + 5372;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32112
	r11.s64 = -2104492032;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-24904
	ctx.r5.s64 = r11.s64 + -24904;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5352
	ctx.r4.s64 = r11.s64 + 5352;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-24568
	ctx.r5.s64 = r11.s64 + -24568;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5332
	ctx.r4.s64 = r11.s64 + 5332;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,9048
	ctx.r5.s64 = r11.s64 + 9048;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5320
	ctx.r4.s64 = r11.s64 + 5320;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32148
	r11.s64 = -2106851328;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,-32192
	ctx.r5.s64 = r11.s64 + -32192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5296
	ctx.r4.s64 = r11.s64 + 5296;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32144
	r11.s64 = -2106589184;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,15408
	ctx.r5.s64 = r11.s64 + 15408;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5264
	ctx.r4.s64 = r11.s64 + 5264;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32143
	r11.s64 = -2106523648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,26808
	ctx.r5.s64 = r11.s64 + 26808;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5248
	ctx.r4.s64 = r11.s64 + 5248;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32115
	r11.s64 = -2104688640;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-3008
	ctx.r5.s64 = r11.s64 + -3008;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5240
	ctx.r4.s64 = r11.s64 + 5240;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32116
	r11.s64 = -2104754176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,24200
	ctx.r5.s64 = r11.s64 + 24200;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5228
	ctx.r4.s64 = r11.s64 + 5228;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32116
	r11.s64 = -2104754176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,24728
	ctx.r5.s64 = r11.s64 + 24728;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5216
	ctx.r4.s64 = r11.s64 + 5216;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32116
	r11.s64 = -2104754176;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,25256
	ctx.r5.s64 = r11.s64 + 25256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5200
	ctx.r4.s64 = r11.s64 + 5200;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32161
	r11.s64 = -2107703296;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,12808
	ctx.r5.s64 = r11.s64 + 12808;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5180
	ctx.r4.s64 = r11.s64 + 5180;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32161
	r11.s64 = -2107703296;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,13360
	ctx.r5.s64 = r11.s64 + 13360;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5164
	ctx.r4.s64 = r11.s64 + 5164;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32161
	r11.s64 = -2107703296;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,13912
	ctx.r5.s64 = r11.s64 + 13912;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5152
	ctx.r4.s64 = r11.s64 + 5152;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32141
	r11.s64 = -2106392576;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-28568
	ctx.r5.s64 = r11.s64 + -28568;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5128
	ctx.r4.s64 = r11.s64 + 5128;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-22160
	ctx.r5.s64 = r11.s64 + -22160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-11764
	ctx.r4.s64 = r11.s64 + -11764;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,13944
	ctx.r5.s64 = r11.s64 + 13944;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7000
	ctx.r4.s64 = r11.s64 + -7000;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32161
	r11.s64 = -2107703296;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-23672
	ctx.r5.s64 = r11.s64 + -23672;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-22988
	ctx.r4.s64 = r11.s64 + -22988;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32154
	r11.s64 = -2107244544;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,1336
	ctx.r5.s64 = r11.s64 + 1336;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5116
	ctx.r4.s64 = r11.s64 + 5116;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32147
	r11.s64 = -2106785792;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,5680
	ctx.r5.s64 = r11.s64 + 5680;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,2640
	ctx.r4.s64 = r11.s64 + 2640;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32161
	r11.s64 = -2107703296;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-5264
	ctx.r5.s64 = r11.s64 + -5264;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5100
	ctx.r4.s64 = r11.s64 + 5100;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32161
	r11.s64 = -2107703296;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-4800
	ctx.r5.s64 = r11.s64 + -4800;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5084
	ctx.r4.s64 = r11.s64 + 5084;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32161
	r11.s64 = -2107703296;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-4336
	ctx.r5.s64 = r11.s64 + -4336;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5072
	ctx.r4.s64 = r11.s64 + 5072;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32161
	r11.s64 = -2107703296;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-3872
	ctx.r5.s64 = r11.s64 + -3872;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5060
	ctx.r4.s64 = r11.s64 + 5060;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32161
	r11.s64 = -2107703296;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-3408
	ctx.r5.s64 = r11.s64 + -3408;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,25844
	ctx.r4.s64 = r11.s64 + 25844;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32158
	r11.s64 = -2107506688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,19928
	ctx.r5.s64 = r11.s64 + 19928;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5048
	ctx.r4.s64 = r11.s64 + 5048;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,5616
	ctx.r5.s64 = r11.s64 + 5616;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,12160
	ctx.r4.s64 = r11.s64 + 12160;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32160
	r11.s64 = -2107637760;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,30560
	ctx.r5.s64 = r11.s64 + 30560;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5040
	ctx.r4.s64 = r11.s64 + 5040;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32159
	r11.s64 = -2107572224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,13528
	ctx.r5.s64 = r11.s64 + 13528;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,20796
	ctx.r4.s64 = r11.s64 + 20796;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32158
	r11.s64 = -2107506688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-21040
	ctx.r5.s64 = r11.s64 + -21040;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5016
	ctx.r4.s64 = r11.s64 + 5016;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32145
	r11.s64 = -2106654720;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,20728
	ctx.r5.s64 = r11.s64 + 20728;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4996
	ctx.r4.s64 = r11.s64 + 4996;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r11,-32157
	r11.s64 = -2107441152;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,-4056
	ctx.r5.s64 = r11.s64 + -4056;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4976
	ctx.r4.s64 = r11.s64 + 4976;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32157
	r11.s64 = -2107441152;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-7072
	ctx.r5.s64 = r11.s64 + -7072;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4952
	ctx.r4.s64 = r11.s64 + 4952;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-20744
	ctx.r5.s64 = r11.s64 + -20744;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4936
	ctx.r4.s64 = r11.s64 + 4936;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,21704
	ctx.r5.s64 = r11.s64 + 21704;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4924
	ctx.r4.s64 = r11.s64 + 4924;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,21760
	ctx.r5.s64 = r11.s64 + 21760;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4900
	ctx.r4.s64 = r11.s64 + 4900;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,28192
	ctx.r5.s64 = r11.s64 + 28192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4884
	ctx.r4.s64 = r11.s64 + 4884;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32099
	r11.s64 = -2103640064;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,18544
	ctx.r5.s64 = r11.s64 + 18544;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4872
	ctx.r4.s64 = r11.s64 + 4872;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32097
	r11.s64 = -2103508992;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-22552
	ctx.r5.s64 = r11.s64 + -22552;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4860
	ctx.r4.s64 = r11.s64 + 4860;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32096
	r11.s64 = -2103443456;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-23040
	ctx.r5.s64 = r11.s64 + -23040;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4844
	ctx.r4.s64 = r11.s64 + 4844;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32095
	r11.s64 = -2103377920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-1056
	ctx.r5.s64 = r11.s64 + -1056;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4832
	ctx.r4.s64 = r11.s64 + 4832;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32094
	r11.s64 = -2103312384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-1952
	ctx.r5.s64 = r11.s64 + -1952;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4824
	ctx.r4.s64 = r11.s64 + 4824;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32093
	r11.s64 = -2103246848;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7616
	ctx.r5.s64 = r11.s64 + -7616;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4808
	ctx.r4.s64 = r11.s64 + 4808;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32087
	r11.s64 = -2102853632;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-17392
	ctx.r5.s64 = r11.s64 + -17392;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4776
	ctx.r4.s64 = r11.s64 + 4776;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32086
	r11.s64 = -2102788096;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-23424
	ctx.r5.s64 = r11.s64 + -23424;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4760
	ctx.r4.s64 = r11.s64 + 4760;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32147
	r11.s64 = -2106785792;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-8816
	ctx.r5.s64 = r11.s64 + -8816;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4744
	ctx.r4.s64 = r11.s64 + 4744;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32132
	r11.s64 = -2105802752;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,14880
	ctx.r5.s64 = r11.s64 + 14880;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4732
	ctx.r4.s64 = r11.s64 + 4732;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32143
	r11.s64 = -2106523648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-9096
	ctx.r5.s64 = r11.s64 + -9096;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4716
	ctx.r4.s64 = r11.s64 + 4716;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-25344
	ctx.r5.s64 = r11.s64 + -25344;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4692
	ctx.r4.s64 = r11.s64 + 4692;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32153
	r11.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,19360
	ctx.r5.s64 = r11.s64 + 19360;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// addi r4,r11,4676
	ctx.r4.s64 = r11.s64 + 4676;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32148
	r11.s64 = -2106851328;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-8288
	ctx.r5.s64 = r11.s64 + -8288;
	// addi r4,r1,1104
	ctx.r4.s64 = ctx.r1.s64 + 1104;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,600
	ctx.r3.s64 = ctx.r1.s64 + 600;
	// addi r4,r11,4664
	ctx.r4.s64 = r11.s64 + 4664;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32148
	r11.s64 = -2106851328;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-19680
	ctx.r5.s64 = r11.s64 + -19680;
	// addi r4,r1,600
	ctx.r4.s64 = ctx.r1.s64 + 600;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,600
	ctx.r3.s64 = ctx.r1.s64 + 600;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,4648
	ctx.r4.s64 = r11.s64 + 4648;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-20840
	ctx.r5.s64 = r11.s64 + -20840;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,856
	ctx.r3.s64 = ctx.r1.s64 + 856;
	// addi r4,r11,4628
	ctx.r4.s64 = r11.s64 + 4628;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32148
	r11.s64 = -2106851328;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,11304
	ctx.r5.s64 = r11.s64 + 11304;
	// addi r4,r1,856
	ctx.r4.s64 = ctx.r1.s64 + 856;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,856
	ctx.r3.s64 = ctx.r1.s64 + 856;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,4604
	ctx.r4.s64 = r11.s64 + 4604;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32148
	r11.s64 = -2106851328;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,11360
	ctx.r5.s64 = r11.s64 + 11360;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// addi r4,r11,4584
	ctx.r4.s64 = r11.s64 + 4584;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32148
	r11.s64 = -2106851328;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,11416
	ctx.r5.s64 = r11.s64 + 11416;
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,4560
	ctx.r4.s64 = r11.s64 + 4560;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32148
	r11.s64 = -2106851328;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,11472
	ctx.r5.s64 = r11.s64 + 11472;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,984
	ctx.r3.s64 = ctx.r1.s64 + 984;
	// addi r4,r11,4540
	ctx.r4.s64 = r11.s64 + 4540;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32148
	r11.s64 = -2106851328;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,25008
	ctx.r5.s64 = r11.s64 + 25008;
	// addi r4,r1,984
	ctx.r4.s64 = ctx.r1.s64 + 984;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,984
	ctx.r3.s64 = ctx.r1.s64 + 984;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r4,r11,4516
	ctx.r4.s64 = r11.s64 + 4516;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32148
	r11.s64 = -2106851328;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,25064
	ctx.r5.s64 = r11.s64 + 25064;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,616
	ctx.r3.s64 = ctx.r1.s64 + 616;
	// addi r4,r11,4492
	ctx.r4.s64 = r11.s64 + 4492;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32148
	r11.s64 = -2106851328;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,25120
	ctx.r5.s64 = r11.s64 + 25120;
	// addi r4,r1,616
	ctx.r4.s64 = ctx.r1.s64 + 616;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,616
	ctx.r3.s64 = ctx.r1.s64 + 616;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,4468
	ctx.r4.s64 = r11.s64 + 4468;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32148
	r11.s64 = -2106851328;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,25176
	ctx.r5.s64 = r11.s64 + 25176;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// addi r4,r11,4452
	ctx.r4.s64 = r11.s64 + 4452;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32147
	r11.s64 = -2106785792;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-30720
	ctx.r5.s64 = r11.s64 + -30720;
	// addi r4,r1,864
	ctx.r4.s64 = ctx.r1.s64 + 864;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// addi r4,r11,4436
	ctx.r4.s64 = r11.s64 + 4436;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-28552
	ctx.r5.s64 = r11.s64 + -28552;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// addi r4,r11,4416
	ctx.r4.s64 = r11.s64 + 4416;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-8256
	ctx.r5.s64 = r11.s64 + -8256;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,4400
	ctx.r4.s64 = r11.s64 + 4400;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32144
	r11.s64 = -2106589184;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,2776
	ctx.r5.s64 = r11.s64 + 2776;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,1048
	ctx.r3.s64 = ctx.r1.s64 + 1048;
	// addi r4,r11,4384
	ctx.r4.s64 = r11.s64 + 4384;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32143
	r11.s64 = -2106523648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-24408
	ctx.r5.s64 = r11.s64 + -24408;
	// addi r4,r1,1048
	ctx.r4.s64 = ctx.r1.s64 + 1048;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,1048
	ctx.r3.s64 = ctx.r1.s64 + 1048;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addi r4,r11,4372
	ctx.r4.s64 = r11.s64 + 4372;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32144
	r11.s64 = -2106589184;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,13408
	ctx.r5.s64 = r11.s64 + 13408;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,632
	ctx.r3.s64 = ctx.r1.s64 + 632;
	// addi r4,r11,4356
	ctx.r4.s64 = r11.s64 + 4356;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32143
	r11.s64 = -2106523648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,4680
	ctx.r5.s64 = r11.s64 + 4680;
	// addi r4,r1,632
	ctx.r4.s64 = ctx.r1.s64 + 632;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,632
	ctx.r3.s64 = ctx.r1.s64 + 632;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,4340
	ctx.r4.s64 = r11.s64 + 4340;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32143
	r11.s64 = -2106523648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,10320
	ctx.r5.s64 = r11.s64 + 10320;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,872
	ctx.r3.s64 = ctx.r1.s64 + 872;
	// addi r4,r11,4328
	ctx.r4.s64 = r11.s64 + 4328;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32142
	r11.s64 = -2106458112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-9856
	ctx.r5.s64 = r11.s64 + -9856;
	// addi r4,r1,872
	ctx.r4.s64 = ctx.r1.s64 + 872;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,872
	ctx.r3.s64 = ctx.r1.s64 + 872;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// addi r4,r11,4308
	ctx.r4.s64 = r11.s64 + 4308;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,27384
	ctx.r5.s64 = r11.s64 + 27384;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// addi r4,r11,4288
	ctx.r4.s64 = r11.s64 + 4288;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,27440
	ctx.r5.s64 = r11.s64 + 27440;
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r30,r11,4260
	r30.s64 = r11.s64 + 4260;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32147
	r11.s64 = -2106785792;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,23056
	ctx.r5.s64 = r11.s64 + 23056;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// addi r29,r11,4232
	r29.s64 = r11.s64 + 4232;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32147
	r11.s64 = -2106785792;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,23112
	ctx.r5.s64 = r11.s64 + 23112;
	// addi r4,r1,992
	ctx.r4.s64 = ctx.r1.s64 + 992;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// addi r4,r11,4212
	ctx.r4.s64 = r11.s64 + 4212;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-11784
	ctx.r5.s64 = r11.s64 + -11784;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,648
	ctx.r3.s64 = ctx.r1.s64 + 648;
	// addi r4,r11,4192
	ctx.r4.s64 = r11.s64 + 4192;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-11728
	ctx.r5.s64 = r11.s64 + -11728;
	// addi r4,r1,648
	ctx.r4.s64 = ctx.r1.s64 + 648;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,648
	ctx.r3.s64 = ctx.r1.s64 + 648;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,4172
	ctx.r4.s64 = r11.s64 + 4172;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-5552
	ctx.r5.s64 = r11.s64 + -5552;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// addi r4,r11,4152
	ctx.r4.s64 = r11.s64 + 4152;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-5496
	ctx.r5.s64 = r11.s64 + -5496;
	// addi r4,r1,880
	ctx.r4.s64 = ctx.r1.s64 + 880;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// addi r4,r11,4132
	ctx.r4.s64 = r11.s64 + 4132;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,4656
	ctx.r5.s64 = r11.s64 + 4656;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// addi r4,r11,4112
	ctx.r4.s64 = r11.s64 + 4112;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,4712
	ctx.r5.s64 = r11.s64 + 4712;
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,4092
	ctx.r4.s64 = r11.s64 + 4092;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,4768
	ctx.r5.s64 = r11.s64 + 4768;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,1080
	ctx.r3.s64 = ctx.r1.s64 + 1080;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32147
	r11.s64 = -2106785792;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,23056
	ctx.r5.s64 = r11.s64 + 23056;
	// addi r4,r1,1080
	ctx.r4.s64 = ctx.r1.s64 + 1080;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,1080
	ctx.r3.s64 = ctx.r1.s64 + 1080;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32147
	r11.s64 = -2106785792;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,23112
	ctx.r5.s64 = r11.s64 + 23112;
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,664
	ctx.r3.s64 = ctx.r1.s64 + 664;
	// addi r4,r11,4060
	ctx.r4.s64 = r11.s64 + 4060;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,22816
	ctx.r5.s64 = r11.s64 + 22816;
	// addi r4,r1,664
	ctx.r4.s64 = ctx.r1.s64 + 664;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,664
	ctx.r3.s64 = ctx.r1.s64 + 664;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,4032
	ctx.r4.s64 = r11.s64 + 4032;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,29168
	ctx.r5.s64 = r11.s64 + 29168;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,888
	ctx.r3.s64 = ctx.r1.s64 + 888;
	// addi r4,r11,4000
	ctx.r4.s64 = r11.s64 + 4000;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32148
	r11.s64 = -2106851328;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,-27192
	ctx.r5.s64 = r11.s64 + -27192;
	// addi r4,r1,888
	ctx.r4.s64 = ctx.r1.s64 + 888;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,888
	ctx.r3.s64 = ctx.r1.s64 + 888;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// addi r4,r11,3968
	ctx.r4.s64 = r11.s64 + 3968;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32148
	r11.s64 = -2106851328;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27136
	ctx.r5.s64 = r11.s64 + -27136;
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// addi r4,r11,3936
	ctx.r4.s64 = r11.s64 + 3936;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32148
	r11.s64 = -2106851328;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27080
	ctx.r5.s64 = r11.s64 + -27080;
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,3912
	ctx.r4.s64 = r11.s64 + 3912;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32158
	r11.s64 = -2107506688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-14408
	ctx.r5.s64 = r11.s64 + -14408;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,1000
	ctx.r3.s64 = ctx.r1.s64 + 1000;
	// addi r4,r11,3888
	ctx.r4.s64 = r11.s64 + 3888;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32148
	r11.s64 = -2106851328;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,3456
	ctx.r5.s64 = r11.s64 + 3456;
	// addi r4,r1,1000
	ctx.r4.s64 = ctx.r1.s64 + 1000;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,1000
	ctx.r3.s64 = ctx.r1.s64 + 1000;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// addi r4,r11,3868
	ctx.r4.s64 = r11.s64 + 3868;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,14768
	ctx.r5.s64 = r11.s64 + 14768;
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,680
	ctx.r3.s64 = ctx.r1.s64 + 680;
	// addi r4,r11,3848
	ctx.r4.s64 = r11.s64 + 3848;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,14112
	ctx.r5.s64 = r11.s64 + 14112;
	// addi r4,r1,680
	ctx.r4.s64 = ctx.r1.s64 + 680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,680
	ctx.r3.s64 = ctx.r1.s64 + 680;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,3824
	ctx.r4.s64 = r11.s64 + 3824;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,15720
	ctx.r5.s64 = r11.s64 + 15720;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// addi r4,r11,3804
	ctx.r4.s64 = r11.s64 + 3804;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-5104
	ctx.r5.s64 = r11.s64 + -5104;
	// addi r4,r1,896
	ctx.r4.s64 = ctx.r1.s64 + 896;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// addi r4,r11,3784
	ctx.r4.s64 = r11.s64 + 3784;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-5048
	ctx.r5.s64 = r11.s64 + -5048;
	// addi r4,r1,264
	ctx.r4.s64 = ctx.r1.s64 + 264;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// addi r4,r11,3764
	ctx.r4.s64 = r11.s64 + 3764;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32161
	r11.s64 = -2107703296;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,14464
	ctx.r5.s64 = r11.s64 + 14464;
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,3732
	ctx.r4.s64 = r11.s64 + 3732;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32142
	r11.s64 = -2106458112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-29368
	ctx.r5.s64 = r11.s64 + -29368;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// addi r4,r11,3700
	ctx.r4.s64 = r11.s64 + 3700;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32142
	r11.s64 = -2106458112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,48
	ctx.r5.s64 = r11.s64 + 48;
	// addi r4,r1,1056
	ctx.r4.s64 = ctx.r1.s64 + 1056;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// addi r4,r11,3668
	ctx.r4.s64 = r11.s64 + 3668;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32142
	r11.s64 = -2106458112;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-29424
	ctx.r5.s64 = r11.s64 + -29424;
	// addi r4,r1,280
	ctx.r4.s64 = ctx.r1.s64 + 280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,696
	ctx.r3.s64 = ctx.r1.s64 + 696;
	// addi r4,r11,3636
	ctx.r4.s64 = r11.s64 + 3636;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32142
	r11.s64 = -2106458112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-8
	ctx.r5.s64 = r11.s64 + -8;
	// addi r4,r1,696
	ctx.r4.s64 = ctx.r1.s64 + 696;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,696
	ctx.r3.s64 = ctx.r1.s64 + 696;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,3608
	ctx.r4.s64 = r11.s64 + 3608;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32142
	r11.s64 = -2106458112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,27616
	ctx.r5.s64 = r11.s64 + 27616;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,904
	ctx.r3.s64 = ctx.r1.s64 + 904;
	// addi r4,r11,3580
	ctx.r4.s64 = r11.s64 + 3580;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32142
	r11.s64 = -2106458112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,28048
	ctx.r5.s64 = r11.s64 + 28048;
	// addi r4,r1,904
	ctx.r4.s64 = ctx.r1.s64 + 904;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,904
	ctx.r3.s64 = ctx.r1.s64 + 904;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// addi r4,r11,3552
	ctx.r4.s64 = r11.s64 + 3552;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32142
	r11.s64 = -2106458112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,28480
	ctx.r5.s64 = r11.s64 + 28480;
	// addi r4,r1,296
	ctx.r4.s64 = ctx.r1.s64 + 296;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// addi r4,r11,3532
	ctx.r4.s64 = r11.s64 + 3532;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,5160
	ctx.r5.s64 = r11.s64 + 5160;
	// addi r4,r1,704
	ctx.r4.s64 = ctx.r1.s64 + 704;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r11,3512
	ctx.r4.s64 = r11.s64 + 3512;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,5216
	ctx.r5.s64 = r11.s64 + 5216;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// addi r4,r11,3492
	ctx.r4.s64 = r11.s64 + 3492;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32148
	r11.s64 = -2106851328;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-5040
	ctx.r5.s64 = r11.s64 + -5040;
	// addi r4,r1,1008
	ctx.r4.s64 = ctx.r1.s64 + 1008;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// addi r4,r11,3476
	ctx.r4.s64 = r11.s64 + 3476;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32148
	r11.s64 = -2106851328;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-648
	ctx.r5.s64 = r11.s64 + -648;
	// addi r4,r1,312
	ctx.r4.s64 = ctx.r1.s64 + 312;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,712
	ctx.r3.s64 = ctx.r1.s64 + 712;
	// addi r4,r11,3456
	ctx.r4.s64 = r11.s64 + 3456;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32147
	r11.s64 = -2106785792;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-21976
	ctx.r5.s64 = r11.s64 + -21976;
	// addi r4,r1,712
	ctx.r4.s64 = ctx.r1.s64 + 712;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,712
	ctx.r3.s64 = ctx.r1.s64 + 712;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r11,3436
	ctx.r4.s64 = r11.s64 + 3436;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32147
	r11.s64 = -2106785792;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-21168
	ctx.r5.s64 = r11.s64 + -21168;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// addi r4,r11,3416
	ctx.r4.s64 = r11.s64 + 3416;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-3536
	ctx.r5.s64 = r11.s64 + -3536;
	// addi r4,r1,912
	ctx.r4.s64 = ctx.r1.s64 + 912;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// addi r4,r11,3392
	ctx.r4.s64 = r11.s64 + 3392;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32158
	r11.s64 = -2107506688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-14072
	ctx.r5.s64 = r11.s64 + -14072;
	// addi r4,r1,328
	ctx.r4.s64 = ctx.r1.s64 + 328;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// addi r4,r11,3372
	ctx.r4.s64 = r11.s64 + 3372;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,27776
	ctx.r5.s64 = r11.s64 + 27776;
	// addi r4,r1,720
	ctx.r4.s64 = ctx.r1.s64 + 720;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,3348
	ctx.r4.s64 = r11.s64 + 3348;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32147
	r11.s64 = -2106785792;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,23448
	ctx.r5.s64 = r11.s64 + 23448;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,1096
	ctx.r3.s64 = ctx.r1.s64 + 1096;
	// addi r4,r11,3320
	ctx.r4.s64 = r11.s64 + 3320;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,23152
	ctx.r5.s64 = r11.s64 + 23152;
	// addi r4,r1,1096
	ctx.r4.s64 = ctx.r1.s64 + 1096;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,1096
	ctx.r3.s64 = ctx.r1.s64 + 1096;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// addi r4,r11,3300
	ctx.r4.s64 = r11.s64 + 3300;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,15608
	ctx.r5.s64 = r11.s64 + 15608;
	// addi r4,r1,344
	ctx.r4.s64 = ctx.r1.s64 + 344;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,728
	ctx.r3.s64 = ctx.r1.s64 + 728;
	// addi r4,r11,3280
	ctx.r4.s64 = r11.s64 + 3280;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,15664
	ctx.r5.s64 = r11.s64 + 15664;
	// addi r4,r1,728
	ctx.r4.s64 = ctx.r1.s64 + 728;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,728
	ctx.r3.s64 = ctx.r1.s64 + 728;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r4,r11,3260
	ctx.r4.s64 = r11.s64 + 3260;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-5160
	ctx.r5.s64 = r11.s64 + -5160;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,920
	ctx.r3.s64 = ctx.r1.s64 + 920;
	// addi r4,r11,3244
	ctx.r4.s64 = r11.s64 + 3244;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-11392
	ctx.r5.s64 = r11.s64 + -11392;
	// addi r4,r1,920
	ctx.r4.s64 = ctx.r1.s64 + 920;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,920
	ctx.r3.s64 = ctx.r1.s64 + 920;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// addi r4,r11,3216
	ctx.r4.s64 = r11.s64 + 3216;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,29392
	ctx.r5.s64 = r11.s64 + 29392;
	// addi r4,r1,360
	ctx.r4.s64 = ctx.r1.s64 + 360;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// addi r4,r11,3192
	ctx.r4.s64 = r11.s64 + 3192;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32145
	r11.s64 = -2106654720;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-3704
	ctx.r5.s64 = r11.s64 + -3704;
	// addi r4,r1,736
	ctx.r4.s64 = ctx.r1.s64 + 736;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,3176
	ctx.r4.s64 = r11.s64 + 3176;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32142
	r11.s64 = -2106458112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-23240
	ctx.r5.s64 = r11.s64 + -23240;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,1016
	ctx.r3.s64 = ctx.r1.s64 + 1016;
	// addi r4,r11,3156
	ctx.r4.s64 = r11.s64 + 3156;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32161
	r11.s64 = -2107703296;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,15016
	ctx.r5.s64 = r11.s64 + 15016;
	// addi r4,r1,1016
	ctx.r4.s64 = ctx.r1.s64 + 1016;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,1016
	ctx.r3.s64 = ctx.r1.s64 + 1016;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// addi r4,r11,3132
	ctx.r4.s64 = r11.s64 + 3132;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32142
	r11.s64 = -2106458112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-29256
	ctx.r5.s64 = r11.s64 + -29256;
	// addi r4,r1,376
	ctx.r4.s64 = ctx.r1.s64 + 376;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,744
	ctx.r3.s64 = ctx.r1.s64 + 744;
	// addi r4,r11,3108
	ctx.r4.s64 = r11.s64 + 3108;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32142
	r11.s64 = -2106458112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,160
	ctx.r5.s64 = r11.s64 + 160;
	// addi r4,r1,744
	ctx.r4.s64 = ctx.r1.s64 + 744;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,744
	ctx.r3.s64 = ctx.r1.s64 + 744;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r4,r11,3080
	ctx.r4.s64 = r11.s64 + 3080;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32148
	r11.s64 = -2106851328;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26968
	ctx.r5.s64 = r11.s64 + -26968;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// addi r4,r11,3060
	ctx.r4.s64 = r11.s64 + 3060;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,4824
	ctx.r5.s64 = r11.s64 + 4824;
	// addi r4,r1,928
	ctx.r4.s64 = ctx.r1.s64 + 928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,392
	ctx.r3.s64 = ctx.r1.s64 + 392;
	// addi r4,r11,3036
	ctx.r4.s64 = r11.s64 + 3036;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,4880
	ctx.r5.s64 = r11.s64 + 4880;
	// addi r4,r1,392
	ctx.r4.s64 = ctx.r1.s64 + 392;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,392
	ctx.r3.s64 = ctx.r1.s64 + 392;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// addi r4,r11,3012
	ctx.r4.s64 = r11.s64 + 3012;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,27496
	ctx.r5.s64 = r11.s64 + 27496;
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r4,r11,2984
	ctx.r4.s64 = r11.s64 + 2984;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32147
	r11.s64 = -2106785792;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,23168
	ctx.r5.s64 = r11.s64 + 23168;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,1064
	ctx.r3.s64 = ctx.r1.s64 + 1064;
	// addi r4,r11,2964
	ctx.r4.s64 = r11.s64 + 2964;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-11672
	ctx.r5.s64 = r11.s64 + -11672;
	// addi r4,r1,1064
	ctx.r4.s64 = ctx.r1.s64 + 1064;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,1064
	ctx.r3.s64 = ctx.r1.s64 + 1064;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// addi r4,r11,2940
	ctx.r4.s64 = r11.s64 + 2940;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-5440
	ctx.r5.s64 = r11.s64 + -5440;
	// addi r4,r1,408
	ctx.r4.s64 = ctx.r1.s64 + 408;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,760
	ctx.r3.s64 = ctx.r1.s64 + 760;
	// addi r4,r11,2916
	ctx.r4.s64 = r11.s64 + 2916;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32158
	r11.s64 = -2107506688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-14352
	ctx.r5.s64 = r11.s64 + -14352;
	// addi r4,r1,760
	ctx.r4.s64 = ctx.r1.s64 + 760;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,760
	ctx.r3.s64 = ctx.r1.s64 + 760;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r4,r11,2892
	ctx.r4.s64 = r11.s64 + 2892;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,14824
	ctx.r5.s64 = r11.s64 + 14824;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,936
	ctx.r3.s64 = ctx.r1.s64 + 936;
	// addi r4,r11,2868
	ctx.r4.s64 = r11.s64 + 2868;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,14880
	ctx.r5.s64 = r11.s64 + 14880;
	// addi r4,r1,936
	ctx.r4.s64 = ctx.r1.s64 + 936;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,936
	ctx.r3.s64 = ctx.r1.s64 + 936;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,424
	ctx.r3.s64 = ctx.r1.s64 + 424;
	// addi r4,r11,2844
	ctx.r4.s64 = r11.s64 + 2844;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,15832
	ctx.r5.s64 = r11.s64 + 15832;
	// addi r4,r1,424
	ctx.r4.s64 = ctx.r1.s64 + 424;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,424
	ctx.r3.s64 = ctx.r1.s64 + 424;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// addi r4,r11,2820
	ctx.r4.s64 = r11.s64 + 2820;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32147
	r11.s64 = -2106785792;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-22784
	ctx.r5.s64 = r11.s64 + -22784;
	// addi r4,r1,768
	ctx.r4.s64 = ctx.r1.s64 + 768;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// addi r4,r11,2792
	ctx.r4.s64 = r11.s64 + 2792;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,29224
	ctx.r5.s64 = r11.s64 + 29224;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// addi r4,r11,2760
	ctx.r4.s64 = r11.s64 + 2760;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,22872
	ctx.r5.s64 = r11.s64 + 22872;
	// addi r4,r1,1024
	ctx.r4.s64 = ctx.r1.s64 + 1024;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,440
	ctx.r3.s64 = ctx.r1.s64 + 440;
	// addi r4,r11,2740
	ctx.r4.s64 = r11.s64 + 2740;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32161
	r11.s64 = -2107703296;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,16120
	ctx.r5.s64 = r11.s64 + 16120;
	// addi r4,r1,440
	ctx.r4.s64 = ctx.r1.s64 + 440;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,440
	ctx.r3.s64 = ctx.r1.s64 + 440;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,776
	ctx.r3.s64 = ctx.r1.s64 + 776;
	// addi r4,r11,2712
	ctx.r4.s64 = r11.s64 + 2712;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32142
	r11.s64 = -2106458112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,-29088
	ctx.r5.s64 = r11.s64 + -29088;
	// addi r4,r1,776
	ctx.r4.s64 = ctx.r1.s64 + 776;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,776
	ctx.r3.s64 = ctx.r1.s64 + 776;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r4,r11,2688
	ctx.r4.s64 = r11.s64 + 2688;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32142
	r11.s64 = -2106458112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,328
	ctx.r5.s64 = r11.s64 + 328;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// addi r4,r11,2672
	ctx.r4.s64 = r11.s64 + 2672;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,5384
	ctx.r5.s64 = r11.s64 + 5384;
	// addi r4,r1,944
	ctx.r4.s64 = ctx.r1.s64 + 944;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,456
	ctx.r3.s64 = ctx.r1.s64 + 456;
	// addi r4,r11,2656
	ctx.r4.s64 = r11.s64 + 2656;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,5440
	ctx.r5.s64 = r11.s64 + 5440;
	// addi r4,r1,456
	ctx.r4.s64 = ctx.r1.s64 + 456;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,456
	ctx.r3.s64 = ctx.r1.s64 + 456;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// addi r4,r11,2636
	ctx.r4.s64 = r11.s64 + 2636;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32147
	r11.s64 = -2106785792;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,11752
	ctx.r5.s64 = r11.s64 + 11752;
	// addi r4,r1,784
	ctx.r4.s64 = ctx.r1.s64 + 784;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// addi r4,r11,2616
	ctx.r4.s64 = r11.s64 + 2616;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32147
	r11.s64 = -2106785792;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,11808
	ctx.r5.s64 = r11.s64 + 11808;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// addi r4,r11,2596
	ctx.r4.s64 = r11.s64 + 2596;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32147
	r11.s64 = -2106785792;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,11864
	ctx.r5.s64 = r11.s64 + 11864;
	// addi r4,r1,1088
	ctx.r4.s64 = ctx.r1.s64 + 1088;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// addi r4,r11,2580
	ctx.r4.s64 = r11.s64 + 2580;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32147
	r11.s64 = -2106785792;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,31664
	ctx.r5.s64 = r11.s64 + 31664;
	// addi r4,r1,472
	ctx.r4.s64 = ctx.r1.s64 + 472;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,792
	ctx.r3.s64 = ctx.r1.s64 + 792;
	// addi r4,r11,2564
	ctx.r4.s64 = r11.s64 + 2564;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,10472
	ctx.r5.s64 = r11.s64 + 10472;
	// addi r4,r1,792
	ctx.r4.s64 = ctx.r1.s64 + 792;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,792
	ctx.r3.s64 = ctx.r1.s64 + 792;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// addi r4,r11,2548
	ctx.r4.s64 = r11.s64 + 2548;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,14056
	ctx.r5.s64 = r11.s64 + 14056;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,952
	ctx.r3.s64 = ctx.r1.s64 + 952;
	// addi r4,r11,2532
	ctx.r4.s64 = r11.s64 + 2532;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-11504
	ctx.r5.s64 = r11.s64 + -11504;
	// addi r4,r1,952
	ctx.r4.s64 = ctx.r1.s64 + 952;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,952
	ctx.r3.s64 = ctx.r1.s64 + 952;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,488
	ctx.r3.s64 = ctx.r1.s64 + 488;
	// addi r4,r11,2516
	ctx.r4.s64 = r11.s64 + 2516;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-5328
	ctx.r5.s64 = r11.s64 + -5328;
	// addi r4,r1,488
	ctx.r4.s64 = ctx.r1.s64 + 488;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,488
	ctx.r3.s64 = ctx.r1.s64 + 488;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// addi r4,r11,2492
	ctx.r4.s64 = r11.s64 + 2492;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,29336
	ctx.r5.s64 = r11.s64 + 29336;
	// addi r4,r1,800
	ctx.r4.s64 = ctx.r1.s64 + 800;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// addi r4,r11,2464
	ctx.r4.s64 = r11.s64 + 2464;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,22984
	ctx.r5.s64 = r11.s64 + 22984;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,1032
	ctx.r3.s64 = ctx.r1.s64 + 1032;
	// addi r4,r11,2444
	ctx.r4.s64 = r11.s64 + 2444;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,15272
	ctx.r5.s64 = r11.s64 + 15272;
	// addi r4,r1,1032
	ctx.r4.s64 = ctx.r1.s64 + 1032;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,1032
	ctx.r3.s64 = ctx.r1.s64 + 1032;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,504
	ctx.r3.s64 = ctx.r1.s64 + 504;
	// addi r4,r11,2424
	ctx.r4.s64 = r11.s64 + 2424;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,15328
	ctx.r5.s64 = r11.s64 + 15328;
	// addi r4,r1,504
	ctx.r4.s64 = ctx.r1.s64 + 504;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,504
	ctx.r3.s64 = ctx.r1.s64 + 504;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,808
	ctx.r3.s64 = ctx.r1.s64 + 808;
	// addi r4,r11,2404
	ctx.r4.s64 = r11.s64 + 2404;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,27608
	ctx.r5.s64 = r11.s64 + 27608;
	// addi r4,r1,808
	ctx.r4.s64 = ctx.r1.s64 + 808;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,808
	ctx.r3.s64 = ctx.r1.s64 + 808;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// addi r4,r11,2380
	ctx.r4.s64 = r11.s64 + 2380;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,27664
	ctx.r5.s64 = r11.s64 + 27664;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// addi r4,r11,2352
	ctx.r4.s64 = r11.s64 + 2352;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32147
	r11.s64 = -2106785792;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,23280
	ctx.r5.s64 = r11.s64 + 23280;
	// addi r4,r1,960
	ctx.r4.s64 = ctx.r1.s64 + 960;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,520
	ctx.r3.s64 = ctx.r1.s64 + 520;
	// addi r4,r11,2324
	ctx.r4.s64 = r11.s64 + 2324;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32147
	r11.s64 = -2106785792;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,23336
	ctx.r5.s64 = r11.s64 + 23336;
	// addi r4,r1,520
	ctx.r4.s64 = ctx.r1.s64 + 520;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,520
	ctx.r3.s64 = ctx.r1.s64 + 520;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// addi r4,r11,2308
	ctx.r4.s64 = r11.s64 + 2308;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32142
	r11.s64 = -2106458112;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-18616
	ctx.r5.s64 = r11.s64 + -18616;
	// addi r4,r1,816
	ctx.r4.s64 = ctx.r1.s64 + 816;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// addi r4,r11,2288
	ctx.r4.s64 = r11.s64 + 2288;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-24672
	ctx.r5.s64 = r11.s64 + -24672;
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,1072
	ctx.r3.s64 = ctx.r1.s64 + 1072;
	// addi r4,r11,2272
	ctx.r4.s64 = r11.s64 + 2272;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-24192
	ctx.r5.s64 = r11.s64 + -24192;
	// addi r4,r1,1072
	ctx.r4.s64 = ctx.r1.s64 + 1072;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,1072
	ctx.r3.s64 = ctx.r1.s64 + 1072;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,536
	ctx.r3.s64 = ctx.r1.s64 + 536;
	// addi r4,r11,2248
	ctx.r4.s64 = r11.s64 + 2248;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32142
	r11.s64 = -2106458112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-29144
	ctx.r5.s64 = r11.s64 + -29144;
	// addi r4,r1,536
	ctx.r4.s64 = ctx.r1.s64 + 536;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,536
	ctx.r3.s64 = ctx.r1.s64 + 536;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,824
	ctx.r3.s64 = ctx.r1.s64 + 824;
	// addi r4,r11,2228
	ctx.r4.s64 = r11.s64 + 2228;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32142
	r11.s64 = -2106458112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,272
	ctx.r5.s64 = r11.s64 + 272;
	// addi r4,r1,824
	ctx.r4.s64 = ctx.r1.s64 + 824;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,824
	ctx.r3.s64 = ctx.r1.s64 + 824;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// addi r4,r11,2200
	ctx.r4.s64 = r11.s64 + 2200;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32148
	r11.s64 = -2106851328;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26856
	ctx.r5.s64 = r11.s64 + -26856;
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,968
	ctx.r3.s64 = ctx.r1.s64 + 968;
	// addi r4,r11,2180
	ctx.r4.s64 = r11.s64 + 2180;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32147
	r11.s64 = -2106785792;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-17168
	ctx.r5.s64 = r11.s64 + -17168;
	// addi r4,r1,968
	ctx.r4.s64 = ctx.r1.s64 + 968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,968
	ctx.r3.s64 = ctx.r1.s64 + 968;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,552
	ctx.r3.s64 = ctx.r1.s64 + 552;
	// addi r4,r11,2160
	ctx.r4.s64 = r11.s64 + 2160;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32147
	r11.s64 = -2106785792;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,-16360
	ctx.r5.s64 = r11.s64 + -16360;
	// addi r4,r1,552
	ctx.r4.s64 = ctx.r1.s64 + 552;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,552
	ctx.r3.s64 = ctx.r1.s64 + 552;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// addi r4,r11,2140
	ctx.r4.s64 = r11.s64 + 2140;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32142
	r11.s64 = -2106458112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,22352
	ctx.r5.s64 = r11.s64 + 22352;
	// addi r4,r1,832
	ctx.r4.s64 = ctx.r1.s64 + 832;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// addi r4,r11,2120
	ctx.r4.s64 = r11.s64 + 2120;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32158
	r11.s64 = -2107506688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-13960
	ctx.r5.s64 = r11.s64 + -13960;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,1040
	ctx.r3.s64 = ctx.r1.s64 + 1040;
	// addi r4,r11,2104
	ctx.r4.s64 = r11.s64 + 2104;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,4936
	ctx.r5.s64 = r11.s64 + 4936;
	// addi r4,r1,1040
	ctx.r4.s64 = ctx.r1.s64 + 1040;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,1040
	ctx.r3.s64 = ctx.r1.s64 + 1040;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,568
	ctx.r3.s64 = ctx.r1.s64 + 568;
	// addi r4,r11,2088
	ctx.r4.s64 = r11.s64 + 2088;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,4992
	ctx.r5.s64 = r11.s64 + 4992;
	// addi r4,r1,568
	ctx.r4.s64 = ctx.r1.s64 + 568;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,568
	ctx.r3.s64 = ctx.r1.s64 + 568;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,840
	ctx.r3.s64 = ctx.r1.s64 + 840;
	// addi r4,r11,2072
	ctx.r4.s64 = r11.s64 + 2072;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32158
	r11.s64 = -2107506688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-14296
	ctx.r5.s64 = r11.s64 + -14296;
	// addi r4,r1,840
	ctx.r4.s64 = ctx.r1.s64 + 840;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,840
	ctx.r3.s64 = ctx.r1.s64 + 840;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// addi r4,r11,2048
	ctx.r4.s64 = r11.s64 + 2048;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32158
	r11.s64 = -2107506688;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-14240
	ctx.r5.s64 = r11.s64 + -14240;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// addi r4,r11,2032
	ctx.r4.s64 = r11.s64 + 2032;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-15544
	ctx.r5.s64 = r11.s64 + -15544;
	// addi r4,r1,976
	ctx.r4.s64 = ctx.r1.s64 + 976;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,584
	ctx.r3.s64 = ctx.r1.s64 + 584;
	// addi r4,r11,2016
	ctx.r4.s64 = r11.s64 + 2016;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-11560
	ctx.r5.s64 = r11.s64 + -11560;
	// addi r4,r1,584
	ctx.r4.s64 = ctx.r1.s64 + 584;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,584
	ctx.r3.s64 = ctx.r1.s64 + 584;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// addi r4,r11,1996
	ctx.r4.s64 = r11.s64 + 1996;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-5384
	ctx.r5.s64 = r11.s64 + -5384;
	// addi r4,r1,848
	ctx.r4.s64 = ctx.r1.s64 + 848;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// addi r4,r11,1972
	ctx.r4.s64 = r11.s64 + 1972;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32143
	r11.s64 = -2106523648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-18464
	ctx.r5.s64 = r11.s64 + -18464;
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,1960
	ctx.r4.s64 = r11.s64 + 1960;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32143
	r11.s64 = -2106523648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,16768
	ctx.r5.s64 = r11.s64 + 16768;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,1940
	ctx.r4.s64 = r11.s64 + 1940;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,14936
	ctx.r5.s64 = r11.s64 + 14936;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,1920
	ctx.r4.s64 = r11.s64 + 1920;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,14992
	ctx.r5.s64 = r11.s64 + 14992;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r4,r11,1892
	ctx.r4.s64 = r11.s64 + 1892;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,15048
	ctx.r5.s64 = r11.s64 + 15048;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// addi r4,r11,1864
	ctx.r4.s64 = r11.s64 + 1864;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,15104
	ctx.r5.s64 = r11.s64 + 15104;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// addi r4,r11,1840
	ctx.r4.s64 = r11.s64 + 1840;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32158
	r11.s64 = -2107506688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-14128
	ctx.r5.s64 = r11.s64 + -14128;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// addi r4,r11,1812
	ctx.r4.s64 = r11.s64 + 1812;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,22928
	ctx.r5.s64 = r11.s64 + 22928;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r4,r11,14524
	ctx.r4.s64 = r11.s64 + 14524;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,29280
	ctx.r5.s64 = r11.s64 + 29280;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// addi r4,r11,1792
	ctx.r4.s64 = r11.s64 + 1792;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32148
	r11.s64 = -2106851328;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,3888
	ctx.r5.s64 = r11.s64 + 3888;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// addi r4,r11,1772
	ctx.r4.s64 = r11.s64 + 1772;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,14224
	ctx.r5.s64 = r11.s64 + 14224;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// addi r4,r11,1748
	ctx.r4.s64 = r11.s64 + 1748;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32142
	r11.s64 = -2106458112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28920
	ctx.r5.s64 = r11.s64 + -28920;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// addi r4,r11,1728
	ctx.r4.s64 = r11.s64 + 1728;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32142
	r11.s64 = -2106458112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,496
	ctx.r5.s64 = r11.s64 + 496;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// addi r4,r11,1712
	ctx.r4.s64 = r11.s64 + 1712;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32142
	r11.s64 = -2106458112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,15616
	ctx.r5.s64 = r11.s64 + 15616;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// addi r4,r11,1696
	ctx.r4.s64 = r11.s64 + 1696;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32142
	r11.s64 = -2106458112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,15672
	ctx.r5.s64 = r11.s64 + 15672;
	// addi r4,r1,180
	ctx.r4.s64 = ctx.r1.s64 + 180;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// addi r4,r11,1680
	ctx.r4.s64 = r11.s64 + 1680;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32142
	r11.s64 = -2106458112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,15728
	ctx.r5.s64 = r11.s64 + 15728;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// addi r4,r11,1652
	ctx.r4.s64 = r11.s64 + 1652;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32148
	r11.s64 = -2106851328;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26688
	ctx.r5.s64 = r11.s64 + -26688;
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// addi r4,r11,1632
	ctx.r4.s64 = r11.s64 + 1632;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,5048
	ctx.r5.s64 = r11.s64 + 5048;
	// addi r4,r1,204
	ctx.r4.s64 = ctx.r1.s64 + 204;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// addi r4,r11,1612
	ctx.r4.s64 = r11.s64 + 1612;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,5104
	ctx.r5.s64 = r11.s64 + 5104;
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// addi r4,r11,1596
	ctx.r4.s64 = r11.s64 + 1596;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32145
	r11.s64 = -2106654720;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-4136
	ctx.r5.s64 = r11.s64 + -4136;
	// addi r4,r1,220
	ctx.r4.s64 = ctx.r1.s64 + 220;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// addi r4,r11,1572
	ctx.r4.s64 = r11.s64 + 1572;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32145
	r11.s64 = -2106654720;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-8352
	ctx.r5.s64 = r11.s64 + -8352;
	// addi r4,r1,228
	ctx.r4.s64 = ctx.r1.s64 + 228;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// addi r4,r11,1552
	ctx.r4.s64 = r11.s64 + 1552;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32145
	r11.s64 = -2106654720;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,1392
	ctx.r5.s64 = r11.s64 + 1392;
	// addi r4,r1,236
	ctx.r4.s64 = ctx.r1.s64 + 236;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// addi r4,r11,1540
	ctx.r4.s64 = r11.s64 + 1540;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32145
	r11.s64 = -2106654720;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-13536
	ctx.r5.s64 = r11.s64 + -13536;
	// addi r4,r1,244
	ctx.r4.s64 = ctx.r1.s64 + 244;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// addi r4,r11,1524
	ctx.r4.s64 = r11.s64 + 1524;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32144
	r11.s64 = -2106589184;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-5992
	ctx.r5.s64 = r11.s64 + -5992;
	// addi r4,r1,252
	ctx.r4.s64 = ctx.r1.s64 + 252;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// addi r4,r11,1508
	ctx.r4.s64 = r11.s64 + 1508;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32144
	r11.s64 = -2106589184;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-5560
	ctx.r5.s64 = r11.s64 + -5560;
	// addi r4,r1,260
	ctx.r4.s64 = ctx.r1.s64 + 260;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,268
	ctx.r3.s64 = ctx.r1.s64 + 268;
	// addi r4,r11,1492
	ctx.r4.s64 = r11.s64 + 1492;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32145
	r11.s64 = -2106654720;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,30848
	ctx.r5.s64 = r11.s64 + 30848;
	// addi r4,r1,268
	ctx.r4.s64 = ctx.r1.s64 + 268;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,268
	ctx.r3.s64 = ctx.r1.s64 + 268;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,276
	ctx.r3.s64 = ctx.r1.s64 + 276;
	// addi r4,r11,1472
	ctx.r4.s64 = r11.s64 + 1472;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-3480
	ctx.r5.s64 = r11.s64 + -3480;
	// addi r4,r1,276
	ctx.r4.s64 = ctx.r1.s64 + 276;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,276
	ctx.r3.s64 = ctx.r1.s64 + 276;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,284
	ctx.r3.s64 = ctx.r1.s64 + 284;
	// addi r4,r11,1452
	ctx.r4.s64 = r11.s64 + 1452;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,14168
	ctx.r5.s64 = r11.s64 + 14168;
	// addi r4,r1,284
	ctx.r4.s64 = ctx.r1.s64 + 284;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,284
	ctx.r3.s64 = ctx.r1.s64 + 284;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,292
	ctx.r3.s64 = ctx.r1.s64 + 292;
	// addi r4,r11,1432
	ctx.r4.s64 = r11.s64 + 1432;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,27720
	ctx.r5.s64 = r11.s64 + 27720;
	// addi r4,r1,292
	ctx.r4.s64 = ctx.r1.s64 + 292;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,292
	ctx.r3.s64 = ctx.r1.s64 + 292;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,300
	ctx.r3.s64 = ctx.r1.s64 + 300;
	// addi r4,r11,1408
	ctx.r4.s64 = r11.s64 + 1408;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32147
	r11.s64 = -2106785792;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,23392
	ctx.r5.s64 = r11.s64 + 23392;
	// addi r4,r1,300
	ctx.r4.s64 = ctx.r1.s64 + 300;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,300
	ctx.r3.s64 = ctx.r1.s64 + 300;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,308
	ctx.r3.s64 = ctx.r1.s64 + 308;
	// addi r4,r11,1388
	ctx.r4.s64 = r11.s64 + 1388;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,15384
	ctx.r5.s64 = r11.s64 + 15384;
	// addi r4,r1,308
	ctx.r4.s64 = ctx.r1.s64 + 308;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,308
	ctx.r3.s64 = ctx.r1.s64 + 308;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,316
	ctx.r3.s64 = ctx.r1.s64 + 316;
	// addi r4,r11,1368
	ctx.r4.s64 = r11.s64 + 1368;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,15440
	ctx.r5.s64 = r11.s64 + 15440;
	// addi r4,r1,316
	ctx.r4.s64 = ctx.r1.s64 + 316;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,316
	ctx.r3.s64 = ctx.r1.s64 + 316;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,324
	ctx.r3.s64 = ctx.r1.s64 + 324;
	// addi r4,r11,1348
	ctx.r4.s64 = r11.s64 + 1348;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-5272
	ctx.r5.s64 = r11.s64 + -5272;
	// addi r4,r1,324
	ctx.r4.s64 = ctx.r1.s64 + 324;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,324
	ctx.r3.s64 = ctx.r1.s64 + 324;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,332
	ctx.r3.s64 = ctx.r1.s64 + 332;
	// addi r4,r11,1332
	ctx.r4.s64 = r11.s64 + 1332;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-11448
	ctx.r5.s64 = r11.s64 + -11448;
	// addi r4,r1,332
	ctx.r4.s64 = ctx.r1.s64 + 332;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,332
	ctx.r3.s64 = ctx.r1.s64 + 332;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,340
	ctx.r3.s64 = ctx.r1.s64 + 340;
	// addi r4,r11,1304
	ctx.r4.s64 = r11.s64 + 1304;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,23040
	ctx.r5.s64 = r11.s64 + 23040;
	// addi r4,r1,340
	ctx.r4.s64 = ctx.r1.s64 + 340;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,340
	ctx.r3.s64 = ctx.r1.s64 + 340;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// addi r30,r11,1276
	r30.s64 = r11.s64 + 1276;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32148
	r11.s64 = -2106851328;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27024
	ctx.r5.s64 = r11.s64 + -27024;
	// addi r4,r1,348
	ctx.r4.s64 = ctx.r1.s64 + 348;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,356
	ctx.r3.s64 = ctx.r1.s64 + 356;
	// addi r4,r11,1256
	ctx.r4.s64 = r11.s64 + 1256;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32161
	r11.s64 = -2107703296;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,16672
	ctx.r5.s64 = r11.s64 + 16672;
	// addi r4,r1,356
	ctx.r4.s64 = ctx.r1.s64 + 356;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,356
	ctx.r3.s64 = ctx.r1.s64 + 356;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,364
	ctx.r3.s64 = ctx.r1.s64 + 364;
	// addi r4,r11,1232
	ctx.r4.s64 = r11.s64 + 1232;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32142
	r11.s64 = -2106458112;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-29312
	ctx.r5.s64 = r11.s64 + -29312;
	// addi r4,r1,364
	ctx.r4.s64 = ctx.r1.s64 + 364;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,364
	ctx.r3.s64 = ctx.r1.s64 + 364;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,372
	ctx.r3.s64 = ctx.r1.s64 + 372;
	// addi r4,r11,1208
	ctx.r4.s64 = r11.s64 + 1208;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32142
	r11.s64 = -2106458112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,104
	ctx.r5.s64 = r11.s64 + 104;
	// addi r4,r1,372
	ctx.r4.s64 = ctx.r1.s64 + 372;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,372
	ctx.r3.s64 = ctx.r1.s64 + 372;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,380
	ctx.r3.s64 = ctx.r1.s64 + 380;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32148
	r11.s64 = -2106851328;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27024
	ctx.r5.s64 = r11.s64 + -27024;
	// addi r4,r1,380
	ctx.r4.s64 = ctx.r1.s64 + 380;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,380
	ctx.r3.s64 = ctx.r1.s64 + 380;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,388
	ctx.r3.s64 = ctx.r1.s64 + 388;
	// addi r4,r11,1188
	ctx.r4.s64 = r11.s64 + 1188;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32147
	r11.s64 = -2106785792;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-20368
	ctx.r5.s64 = r11.s64 + -20368;
	// addi r4,r1,388
	ctx.r4.s64 = ctx.r1.s64 + 388;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,388
	ctx.r3.s64 = ctx.r1.s64 + 388;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,396
	ctx.r3.s64 = ctx.r1.s64 + 396;
	// addi r4,r11,1156
	ctx.r4.s64 = r11.s64 + 1156;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32147
	r11.s64 = -2106785792;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-19568
	ctx.r5.s64 = r11.s64 + -19568;
	// addi r4,r1,396
	ctx.r4.s64 = ctx.r1.s64 + 396;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,396
	ctx.r3.s64 = ctx.r1.s64 + 396;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,404
	ctx.r3.s64 = ctx.r1.s64 + 404;
	// addi r4,r11,1128
	ctx.r4.s64 = r11.s64 + 1128;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32147
	r11.s64 = -2106785792;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-18768
	ctx.r5.s64 = r11.s64 + -18768;
	// addi r4,r1,404
	ctx.r4.s64 = ctx.r1.s64 + 404;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,404
	ctx.r3.s64 = ctx.r1.s64 + 404;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,412
	ctx.r3.s64 = ctx.r1.s64 + 412;
	// addi r4,r11,1112
	ctx.r4.s64 = r11.s64 + 1112;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,5496
	ctx.r5.s64 = r11.s64 + 5496;
	// addi r4,r1,412
	ctx.r4.s64 = ctx.r1.s64 + 412;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,412
	ctx.r3.s64 = ctx.r1.s64 + 412;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,420
	ctx.r3.s64 = ctx.r1.s64 + 420;
	// addi r4,r11,1096
	ctx.r4.s64 = r11.s64 + 1096;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,5552
	ctx.r5.s64 = r11.s64 + 5552;
	// addi r4,r1,420
	ctx.r4.s64 = ctx.r1.s64 + 420;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,420
	ctx.r3.s64 = ctx.r1.s64 + 420;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,428
	ctx.r3.s64 = ctx.r1.s64 + 428;
	// addi r4,r11,1080
	ctx.r4.s64 = r11.s64 + 1080;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,5608
	ctx.r5.s64 = r11.s64 + 5608;
	// addi r4,r1,428
	ctx.r4.s64 = ctx.r1.s64 + 428;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,428
	ctx.r3.s64 = ctx.r1.s64 + 428;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,436
	ctx.r3.s64 = ctx.r1.s64 + 436;
	// addi r4,r11,1064
	ctx.r4.s64 = r11.s64 + 1064;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,5664
	ctx.r5.s64 = r11.s64 + 5664;
	// addi r4,r1,436
	ctx.r4.s64 = ctx.r1.s64 + 436;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,436
	ctx.r3.s64 = ctx.r1.s64 + 436;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,444
	ctx.r3.s64 = ctx.r1.s64 + 444;
	// addi r4,r11,1048
	ctx.r4.s64 = r11.s64 + 1048;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,5720
	ctx.r5.s64 = r11.s64 + 5720;
	// addi r4,r1,444
	ctx.r4.s64 = ctx.r1.s64 + 444;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,444
	ctx.r3.s64 = ctx.r1.s64 + 444;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,452
	ctx.r3.s64 = ctx.r1.s64 + 452;
	// addi r4,r11,1032
	ctx.r4.s64 = r11.s64 + 1032;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,5776
	ctx.r5.s64 = r11.s64 + 5776;
	// addi r4,r1,452
	ctx.r4.s64 = ctx.r1.s64 + 452;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,452
	ctx.r3.s64 = ctx.r1.s64 + 452;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,460
	ctx.r3.s64 = ctx.r1.s64 + 460;
	// addi r4,r11,1008
	ctx.r4.s64 = r11.s64 + 1008;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,27552
	ctx.r5.s64 = r11.s64 + 27552;
	// addi r4,r1,460
	ctx.r4.s64 = ctx.r1.s64 + 460;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,460
	ctx.r3.s64 = ctx.r1.s64 + 460;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,468
	ctx.r3.s64 = ctx.r1.s64 + 468;
	// addi r4,r11,980
	ctx.r4.s64 = r11.s64 + 980;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32147
	r11.s64 = -2106785792;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,23224
	ctx.r5.s64 = r11.s64 + 23224;
	// addi r4,r1,468
	ctx.r4.s64 = ctx.r1.s64 + 468;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,468
	ctx.r3.s64 = ctx.r1.s64 + 468;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,476
	ctx.r3.s64 = ctx.r1.s64 + 476;
	// addi r4,r11,960
	ctx.r4.s64 = r11.s64 + 960;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-11616
	ctx.r5.s64 = r11.s64 + -11616;
	// addi r4,r1,476
	ctx.r4.s64 = ctx.r1.s64 + 476;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,476
	ctx.r3.s64 = ctx.r1.s64 + 476;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,484
	ctx.r3.s64 = ctx.r1.s64 + 484;
	// addi r4,r11,932
	ctx.r4.s64 = r11.s64 + 932;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32143
	r11.s64 = -2106523648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26624
	ctx.r5.s64 = r11.s64 + -26624;
	// addi r4,r1,484
	ctx.r4.s64 = ctx.r1.s64 + 484;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,484
	ctx.r3.s64 = ctx.r1.s64 + 484;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,492
	ctx.r3.s64 = ctx.r1.s64 + 492;
	// addi r4,r11,920
	ctx.r4.s64 = r11.s64 + 920;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32145
	r11.s64 = -2106654720;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-19104
	ctx.r5.s64 = r11.s64 + -19104;
	// addi r4,r1,492
	ctx.r4.s64 = ctx.r1.s64 + 492;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,492
	ctx.r3.s64 = ctx.r1.s64 + 492;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,500
	ctx.r3.s64 = ctx.r1.s64 + 500;
	// addi r4,r11,900
	ctx.r4.s64 = r11.s64 + 900;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32145
	r11.s64 = -2106654720;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-23936
	ctx.r5.s64 = r11.s64 + -23936;
	// addi r4,r1,500
	ctx.r4.s64 = ctx.r1.s64 + 500;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,500
	ctx.r3.s64 = ctx.r1.s64 + 500;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,508
	ctx.r3.s64 = ctx.r1.s64 + 508;
	// addi r4,r11,884
	ctx.r4.s64 = r11.s64 + 884;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32145
	r11.s64 = -2106654720;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28360
	ctx.r5.s64 = r11.s64 + -28360;
	// addi r4,r1,508
	ctx.r4.s64 = ctx.r1.s64 + 508;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,508
	ctx.r3.s64 = ctx.r1.s64 + 508;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,516
	ctx.r3.s64 = ctx.r1.s64 + 516;
	// addi r4,r11,856
	ctx.r4.s64 = r11.s64 + 856;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32145
	r11.s64 = -2106654720;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,4208
	ctx.r5.s64 = r11.s64 + 4208;
	// addi r4,r1,516
	ctx.r4.s64 = ctx.r1.s64 + 516;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,516
	ctx.r3.s64 = ctx.r1.s64 + 516;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,524
	ctx.r3.s64 = ctx.r1.s64 + 524;
	// addi r4,r11,828
	ctx.r4.s64 = r11.s64 + 828;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32145
	r11.s64 = -2106654720;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,4640
	ctx.r5.s64 = r11.s64 + 4640;
	// addi r4,r1,524
	ctx.r4.s64 = ctx.r1.s64 + 524;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,524
	ctx.r3.s64 = ctx.r1.s64 + 524;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,532
	ctx.r3.s64 = ctx.r1.s64 + 532;
	// addi r4,r11,800
	ctx.r4.s64 = r11.s64 + 800;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32145
	r11.s64 = -2106654720;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,5072
	ctx.r5.s64 = r11.s64 + 5072;
	// addi r4,r1,532
	ctx.r4.s64 = ctx.r1.s64 + 532;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,532
	ctx.r3.s64 = ctx.r1.s64 + 532;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,540
	ctx.r3.s64 = ctx.r1.s64 + 540;
	// addi r4,r11,768
	ctx.r4.s64 = r11.s64 + 768;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,32400
	ctx.r5.s64 = r11.s64 + 32400;
	// addi r4,r1,540
	ctx.r4.s64 = ctx.r1.s64 + 540;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,540
	ctx.r3.s64 = ctx.r1.s64 + 540;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,548
	ctx.r3.s64 = ctx.r1.s64 + 548;
	// addi r4,r11,736
	ctx.r4.s64 = r11.s64 + 736;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32145
	r11.s64 = -2106654720;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-32704
	ctx.r5.s64 = r11.s64 + -32704;
	// addi r4,r1,548
	ctx.r4.s64 = ctx.r1.s64 + 548;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,548
	ctx.r3.s64 = ctx.r1.s64 + 548;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,556
	ctx.r3.s64 = ctx.r1.s64 + 556;
	// addi r4,r11,704
	ctx.r4.s64 = r11.s64 + 704;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32145
	r11.s64 = -2106654720;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-32272
	ctx.r5.s64 = r11.s64 + -32272;
	// addi r4,r1,556
	ctx.r4.s64 = ctx.r1.s64 + 556;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,556
	ctx.r3.s64 = ctx.r1.s64 + 556;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,564
	ctx.r3.s64 = ctx.r1.s64 + 564;
	// addi r4,r11,688
	ctx.r4.s64 = r11.s64 + 688;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,29328
	ctx.r5.s64 = r11.s64 + 29328;
	// addi r4,r1,564
	ctx.r4.s64 = ctx.r1.s64 + 564;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,564
	ctx.r3.s64 = ctx.r1.s64 + 564;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,572
	ctx.r3.s64 = ctx.r1.s64 + 572;
	// addi r4,r11,668
	ctx.r4.s64 = r11.s64 + 668;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,30464
	ctx.r5.s64 = r11.s64 + 30464;
	// addi r4,r1,572
	ctx.r4.s64 = ctx.r1.s64 + 572;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,572
	ctx.r3.s64 = ctx.r1.s64 + 572;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,580
	ctx.r3.s64 = ctx.r1.s64 + 580;
	// addi r4,r11,648
	ctx.r4.s64 = r11.s64 + 648;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32145
	r11.s64 = -2106654720;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,20784
	ctx.r5.s64 = r11.s64 + 20784;
	// addi r4,r1,580
	ctx.r4.s64 = ctx.r1.s64 + 580;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,580
	ctx.r3.s64 = ctx.r1.s64 + 580;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,588
	ctx.r3.s64 = ctx.r1.s64 + 588;
	// addi r4,r11,628
	ctx.r4.s64 = r11.s64 + 628;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32145
	r11.s64 = -2106654720;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,26832
	ctx.r5.s64 = r11.s64 + 26832;
	// addi r4,r1,588
	ctx.r4.s64 = ctx.r1.s64 + 588;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,588
	ctx.r3.s64 = ctx.r1.s64 + 588;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,596
	ctx.r3.s64 = ctx.r1.s64 + 596;
	// addi r4,r11,612
	ctx.r4.s64 = r11.s64 + 612;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32144
	r11.s64 = -2106589184;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-21496
	ctx.r5.s64 = r11.s64 + -21496;
	// addi r4,r1,596
	ctx.r4.s64 = ctx.r1.s64 + 596;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,596
	ctx.r3.s64 = ctx.r1.s64 + 596;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,604
	ctx.r3.s64 = ctx.r1.s64 + 604;
	// addi r4,r11,592
	ctx.r4.s64 = r11.s64 + 592;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32144
	r11.s64 = -2106589184;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-13312
	ctx.r5.s64 = r11.s64 + -13312;
	// addi r4,r1,604
	ctx.r4.s64 = ctx.r1.s64 + 604;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,604
	ctx.r3.s64 = ctx.r1.s64 + 604;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,612
	ctx.r3.s64 = ctx.r1.s64 + 612;
	// addi r4,r11,568
	ctx.r4.s64 = r11.s64 + 568;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32143
	r11.s64 = -2106523648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-4312
	ctx.r5.s64 = r11.s64 + -4312;
	// addi r4,r1,612
	ctx.r4.s64 = ctx.r1.s64 + 612;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,612
	ctx.r3.s64 = ctx.r1.s64 + 612;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,620
	ctx.r3.s64 = ctx.r1.s64 + 620;
	// addi r4,r11,544
	ctx.r4.s64 = r11.s64 + 544;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32143
	r11.s64 = -2106523648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-3880
	ctx.r5.s64 = r11.s64 + -3880;
	// addi r4,r1,620
	ctx.r4.s64 = ctx.r1.s64 + 620;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,620
	ctx.r3.s64 = ctx.r1.s64 + 620;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,628
	ctx.r3.s64 = ctx.r1.s64 + 628;
	// addi r4,r11,520
	ctx.r4.s64 = r11.s64 + 520;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32143
	r11.s64 = -2106523648;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-3448
	ctx.r5.s64 = r11.s64 + -3448;
	// addi r4,r1,628
	ctx.r4.s64 = ctx.r1.s64 + 628;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,628
	ctx.r3.s64 = ctx.r1.s64 + 628;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,636
	ctx.r3.s64 = ctx.r1.s64 + 636;
	// addi r4,r11,496
	ctx.r4.s64 = r11.s64 + 496;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32143
	r11.s64 = -2106523648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,-3016
	ctx.r5.s64 = r11.s64 + -3016;
	// addi r4,r1,636
	ctx.r4.s64 = ctx.r1.s64 + 636;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,636
	ctx.r3.s64 = ctx.r1.s64 + 636;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,644
	ctx.r3.s64 = ctx.r1.s64 + 644;
	// addi r4,r11,472
	ctx.r4.s64 = r11.s64 + 472;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32143
	r11.s64 = -2106523648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-2584
	ctx.r5.s64 = r11.s64 + -2584;
	// addi r4,r1,644
	ctx.r4.s64 = ctx.r1.s64 + 644;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,644
	ctx.r3.s64 = ctx.r1.s64 + 644;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,652
	ctx.r3.s64 = ctx.r1.s64 + 652;
	// addi r4,r11,448
	ctx.r4.s64 = r11.s64 + 448;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32143
	r11.s64 = -2106523648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-2152
	ctx.r5.s64 = r11.s64 + -2152;
	// addi r4,r1,652
	ctx.r4.s64 = ctx.r1.s64 + 652;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,652
	ctx.r3.s64 = ctx.r1.s64 + 652;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,660
	ctx.r3.s64 = ctx.r1.s64 + 660;
	// addi r4,r11,428
	ctx.r4.s64 = r11.s64 + 428;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,14000
	ctx.r5.s64 = r11.s64 + 14000;
	// addi r4,r1,660
	ctx.r4.s64 = ctx.r1.s64 + 660;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,660
	ctx.r3.s64 = ctx.r1.s64 + 660;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,668
	ctx.r3.s64 = ctx.r1.s64 + 668;
	// addi r4,r11,404
	ctx.r4.s64 = r11.s64 + 404;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-5216
	ctx.r5.s64 = r11.s64 + -5216;
	// addi r4,r1,668
	ctx.r4.s64 = ctx.r1.s64 + 668;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,668
	ctx.r3.s64 = ctx.r1.s64 + 668;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,676
	ctx.r3.s64 = ctx.r1.s64 + 676;
	// addi r4,r11,384
	ctx.r4.s64 = r11.s64 + 384;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,15496
	ctx.r5.s64 = r11.s64 + 15496;
	// addi r4,r1,676
	ctx.r4.s64 = ctx.r1.s64 + 676;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,676
	ctx.r3.s64 = ctx.r1.s64 + 676;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,684
	ctx.r3.s64 = ctx.r1.s64 + 684;
	// addi r4,r11,364
	ctx.r4.s64 = r11.s64 + 364;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,15552
	ctx.r5.s64 = r11.s64 + 15552;
	// addi r4,r1,684
	ctx.r4.s64 = ctx.r1.s64 + 684;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,684
	ctx.r3.s64 = ctx.r1.s64 + 684;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,692
	ctx.r3.s64 = ctx.r1.s64 + 692;
	// addi r4,r11,332
	ctx.r4.s64 = r11.s64 + 332;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,23096
	ctx.r5.s64 = r11.s64 + 23096;
	// addi r4,r1,692
	ctx.r4.s64 = ctx.r1.s64 + 692;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,692
	ctx.r3.s64 = ctx.r1.s64 + 692;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,700
	ctx.r3.s64 = ctx.r1.s64 + 700;
	// addi r30,r11,304
	r30.s64 = r11.s64 + 304;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32142
	r11.s64 = -2106458112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-29032
	ctx.r5.s64 = r11.s64 + -29032;
	// addi r4,r1,700
	ctx.r4.s64 = ctx.r1.s64 + 700;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,700
	ctx.r3.s64 = ctx.r1.s64 + 700;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,708
	ctx.r3.s64 = ctx.r1.s64 + 708;
	// addi r29,r11,280
	r29.s64 = r11.s64 + 280;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32142
	r11.s64 = -2106458112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,384
	ctx.r5.s64 = r11.s64 + 384;
	// addi r4,r1,708
	ctx.r4.s64 = ctx.r1.s64 + 708;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,708
	ctx.r3.s64 = ctx.r1.s64 + 708;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,716
	ctx.r3.s64 = ctx.r1.s64 + 716;
	// addi r4,r11,260
	ctx.r4.s64 = r11.s64 + 260;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32142
	r11.s64 = -2106458112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,10128
	ctx.r5.s64 = r11.s64 + 10128;
	// addi r4,r1,716
	ctx.r4.s64 = ctx.r1.s64 + 716;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,716
	ctx.r3.s64 = ctx.r1.s64 + 716;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,724
	ctx.r3.s64 = ctx.r1.s64 + 724;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32142
	r11.s64 = -2106458112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-29032
	ctx.r5.s64 = r11.s64 + -29032;
	// addi r4,r1,724
	ctx.r4.s64 = ctx.r1.s64 + 724;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,724
	ctx.r3.s64 = ctx.r1.s64 + 724;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,732
	ctx.r3.s64 = ctx.r1.s64 + 732;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32142
	r11.s64 = -2106458112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,384
	ctx.r5.s64 = r11.s64 + 384;
	// addi r4,r1,732
	ctx.r4.s64 = ctx.r1.s64 + 732;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,732
	ctx.r3.s64 = ctx.r1.s64 + 732;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,740
	ctx.r3.s64 = ctx.r1.s64 + 740;
	// addi r4,r11,228
	ctx.r4.s64 = r11.s64 + 228;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32148
	r11.s64 = -2106851328;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26800
	ctx.r5.s64 = r11.s64 + -26800;
	// addi r4,r1,740
	ctx.r4.s64 = ctx.r1.s64 + 740;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,740
	ctx.r3.s64 = ctx.r1.s64 + 740;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// addi r4,r11,200
	ctx.r4.s64 = r11.s64 + 200;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,29616
	ctx.r5.s64 = r11.s64 + 29616;
	// addi r4,r1,748
	ctx.r4.s64 = ctx.r1.s64 + 748;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,756
	ctx.r3.s64 = ctx.r1.s64 + 756;
	// addi r4,r11,176
	ctx.r4.s64 = r11.s64 + 176;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32147
	r11.s64 = -2106785792;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-15552
	ctx.r5.s64 = r11.s64 + -15552;
	// addi r4,r1,756
	ctx.r4.s64 = ctx.r1.s64 + 756;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,756
	ctx.r3.s64 = ctx.r1.s64 + 756;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,764
	ctx.r3.s64 = ctx.r1.s64 + 764;
	// addi r4,r11,152
	ctx.r4.s64 = r11.s64 + 152;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32158
	r11.s64 = -2107506688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-13904
	ctx.r5.s64 = r11.s64 + -13904;
	// addi r4,r1,764
	ctx.r4.s64 = ctx.r1.s64 + 764;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,764
	ctx.r3.s64 = ctx.r1.s64 + 764;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,772
	ctx.r3.s64 = ctx.r1.s64 + 772;
	// addi r4,r11,132
	ctx.r4.s64 = r11.s64 + 132;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,5832
	ctx.r5.s64 = r11.s64 + 5832;
	// addi r4,r1,772
	ctx.r4.s64 = ctx.r1.s64 + 772;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,772
	ctx.r3.s64 = ctx.r1.s64 + 772;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,780
	ctx.r3.s64 = ctx.r1.s64 + 780;
	// addi r4,r11,112
	ctx.r4.s64 = r11.s64 + 112;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,5888
	ctx.r5.s64 = r11.s64 + 5888;
	// addi r4,r1,780
	ctx.r4.s64 = ctx.r1.s64 + 780;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,780
	ctx.r3.s64 = ctx.r1.s64 + 780;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,788
	ctx.r3.s64 = ctx.r1.s64 + 788;
	// addi r4,r11,92
	ctx.r4.s64 = r11.s64 + 92;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,15160
	ctx.r5.s64 = r11.s64 + 15160;
	// addi r4,r1,788
	ctx.r4.s64 = ctx.r1.s64 + 788;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,788
	ctx.r3.s64 = ctx.r1.s64 + 788;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,796
	ctx.r3.s64 = ctx.r1.s64 + 796;
	// addi r4,r11,72
	ctx.r4.s64 = r11.s64 + 72;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,15216
	ctx.r5.s64 = r11.s64 + 15216;
	// addi r4,r1,796
	ctx.r4.s64 = ctx.r1.s64 + 796;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,796
	ctx.r3.s64 = ctx.r1.s64 + 796;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,804
	ctx.r3.s64 = ctx.r1.s64 + 804;
	// addi r4,r11,48
	ctx.r4.s64 = r11.s64 + 48;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,27832
	ctx.r5.s64 = r11.s64 + 27832;
	// addi r4,r1,804
	ctx.r4.s64 = ctx.r1.s64 + 804;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,804
	ctx.r3.s64 = ctx.r1.s64 + 804;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,812
	ctx.r3.s64 = ctx.r1.s64 + 812;
	// addi r4,r11,20
	ctx.r4.s64 = r11.s64 + 20;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32147
	r11.s64 = -2106785792;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,23504
	ctx.r5.s64 = r11.s64 + 23504;
	// addi r4,r1,812
	ctx.r4.s64 = ctx.r1.s64 + 812;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,812
	ctx.r3.s64 = ctx.r1.s64 + 812;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,820
	ctx.r3.s64 = ctx.r1.s64 + 820;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-4936
	ctx.r5.s64 = r11.s64 + -4936;
	// addi r4,r1,820
	ctx.r4.s64 = ctx.r1.s64 + 820;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,820
	ctx.r3.s64 = ctx.r1.s64 + 820;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,828
	ctx.r3.s64 = ctx.r1.s64 + 828;
	// addi r4,r11,-24
	ctx.r4.s64 = r11.s64 + -24;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-11280
	ctx.r5.s64 = r11.s64 + -11280;
	// addi r4,r1,828
	ctx.r4.s64 = ctx.r1.s64 + 828;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,828
	ctx.r3.s64 = ctx.r1.s64 + 828;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,836
	ctx.r3.s64 = ctx.r1.s64 + 836;
	// addi r4,r11,-56
	ctx.r4.s64 = r11.s64 + -56;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,23208
	ctx.r5.s64 = r11.s64 + 23208;
	// addi r4,r1,836
	ctx.r4.s64 = ctx.r1.s64 + 836;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,836
	ctx.r3.s64 = ctx.r1.s64 + 836;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,844
	ctx.r3.s64 = ctx.r1.s64 + 844;
	// addi r4,r11,-88
	ctx.r4.s64 = r11.s64 + -88;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,29504
	ctx.r5.s64 = r11.s64 + 29504;
	// addi r4,r1,844
	ctx.r4.s64 = ctx.r1.s64 + 844;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,844
	ctx.r3.s64 = ctx.r1.s64 + 844;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,852
	ctx.r3.s64 = ctx.r1.s64 + 852;
	// addi r4,r11,-116
	ctx.r4.s64 = r11.s64 + -116;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,29560
	ctx.r5.s64 = r11.s64 + 29560;
	// addi r4,r1,852
	ctx.r4.s64 = ctx.r1.s64 + 852;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,852
	ctx.r3.s64 = ctx.r1.s64 + 852;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,860
	ctx.r3.s64 = ctx.r1.s64 + 860;
	// addi r4,r11,-140
	ctx.r4.s64 = r11.s64 + -140;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-23712
	ctx.r5.s64 = r11.s64 + -23712;
	// addi r4,r1,860
	ctx.r4.s64 = ctx.r1.s64 + 860;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,860
	ctx.r3.s64 = ctx.r1.s64 + 860;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,868
	ctx.r3.s64 = ctx.r1.s64 + 868;
	// addi r4,r11,-164
	ctx.r4.s64 = r11.s64 + -164;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32142
	r11.s64 = -2106458112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28976
	ctx.r5.s64 = r11.s64 + -28976;
	// addi r4,r1,868
	ctx.r4.s64 = ctx.r1.s64 + 868;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,868
	ctx.r3.s64 = ctx.r1.s64 + 868;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,876
	ctx.r3.s64 = ctx.r1.s64 + 876;
	// addi r4,r11,-188
	ctx.r4.s64 = r11.s64 + -188;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32142
	r11.s64 = -2106458112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,440
	ctx.r5.s64 = r11.s64 + 440;
	// addi r4,r1,876
	ctx.r4.s64 = ctx.r1.s64 + 876;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,876
	ctx.r3.s64 = ctx.r1.s64 + 876;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,884
	ctx.r3.s64 = ctx.r1.s64 + 884;
	// addi r4,r11,-216
	ctx.r4.s64 = r11.s64 + -216;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32148
	r11.s64 = -2106851328;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26744
	ctx.r5.s64 = r11.s64 + -26744;
	// addi r4,r1,884
	ctx.r4.s64 = ctx.r1.s64 + 884;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,884
	ctx.r3.s64 = ctx.r1.s64 + 884;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,892
	ctx.r3.s64 = ctx.r1.s64 + 892;
	// addi r4,r11,-236
	ctx.r4.s64 = r11.s64 + -236;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32142
	r11.s64 = -2106458112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,17400
	ctx.r5.s64 = r11.s64 + 17400;
	// addi r4,r1,892
	ctx.r4.s64 = ctx.r1.s64 + 892;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,892
	ctx.r3.s64 = ctx.r1.s64 + 892;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,900
	ctx.r3.s64 = ctx.r1.s64 + 900;
	// addi r4,r11,-256
	ctx.r4.s64 = r11.s64 + -256;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,14280
	ctx.r5.s64 = r11.s64 + 14280;
	// addi r4,r1,900
	ctx.r4.s64 = ctx.r1.s64 + 900;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,900
	ctx.r3.s64 = ctx.r1.s64 + 900;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,908
	ctx.r3.s64 = ctx.r1.s64 + 908;
	// addi r4,r11,-280
	ctx.r4.s64 = r11.s64 + -280;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32147
	r11.s64 = -2106785792;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-14744
	ctx.r5.s64 = r11.s64 + -14744;
	// addi r4,r1,908
	ctx.r4.s64 = ctx.r1.s64 + 908;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,908
	ctx.r3.s64 = ctx.r1.s64 + 908;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,916
	ctx.r3.s64 = ctx.r1.s64 + 916;
	// addi r4,r11,-304
	ctx.r4.s64 = r11.s64 + -304;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32147
	r11.s64 = -2106785792;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-13936
	ctx.r5.s64 = r11.s64 + -13936;
	// addi r4,r1,916
	ctx.r4.s64 = ctx.r1.s64 + 916;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,916
	ctx.r3.s64 = ctx.r1.s64 + 916;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,924
	ctx.r3.s64 = ctx.r1.s64 + 924;
	// addi r4,r11,-320
	ctx.r4.s64 = r11.s64 + -320;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,5272
	ctx.r5.s64 = r11.s64 + 5272;
	// addi r4,r1,924
	ctx.r4.s64 = ctx.r1.s64 + 924;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,924
	ctx.r3.s64 = ctx.r1.s64 + 924;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,932
	ctx.r3.s64 = ctx.r1.s64 + 932;
	// addi r4,r11,-336
	ctx.r4.s64 = r11.s64 + -336;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,5328
	ctx.r5.s64 = r11.s64 + 5328;
	// addi r4,r1,932
	ctx.r4.s64 = ctx.r1.s64 + 932;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,932
	ctx.r3.s64 = ctx.r1.s64 + 932;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,940
	ctx.r3.s64 = ctx.r1.s64 + 940;
	// addi r4,r11,-352
	ctx.r4.s64 = r11.s64 + -352;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32145
	r11.s64 = -2106654720;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,10704
	ctx.r5.s64 = r11.s64 + 10704;
	// addi r4,r1,940
	ctx.r4.s64 = ctx.r1.s64 + 940;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,940
	ctx.r3.s64 = ctx.r1.s64 + 940;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,948
	ctx.r3.s64 = ctx.r1.s64 + 948;
	// addi r4,r11,-368
	ctx.r4.s64 = r11.s64 + -368;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32144
	r11.s64 = -2106589184;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,5128
	ctx.r5.s64 = r11.s64 + 5128;
	// addi r4,r1,948
	ctx.r4.s64 = ctx.r1.s64 + 948;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,948
	ctx.r3.s64 = ctx.r1.s64 + 948;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,956
	ctx.r3.s64 = ctx.r1.s64 + 956;
	// addi r4,r11,-384
	ctx.r4.s64 = r11.s64 + -384;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32143
	r11.s64 = -2106523648;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-31952
	ctx.r5.s64 = r11.s64 + -31952;
	// addi r4,r1,956
	ctx.r4.s64 = ctx.r1.s64 + 956;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,956
	ctx.r3.s64 = ctx.r1.s64 + 956;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,964
	ctx.r3.s64 = ctx.r1.s64 + 964;
	// addi r4,r11,-408
	ctx.r4.s64 = r11.s64 + -408;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32142
	r11.s64 = -2106458112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,6432
	ctx.r5.s64 = r11.s64 + 6432;
	// addi r4,r1,964
	ctx.r4.s64 = ctx.r1.s64 + 964;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,964
	ctx.r3.s64 = ctx.r1.s64 + 964;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,972
	ctx.r3.s64 = ctx.r1.s64 + 972;
	// addi r4,r11,-432
	ctx.r4.s64 = r11.s64 + -432;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32142
	r11.s64 = -2106458112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,6864
	ctx.r5.s64 = r11.s64 + 6864;
	// addi r4,r1,972
	ctx.r4.s64 = ctx.r1.s64 + 972;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,972
	ctx.r3.s64 = ctx.r1.s64 + 972;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,980
	ctx.r3.s64 = ctx.r1.s64 + 980;
	// addi r4,r11,-456
	ctx.r4.s64 = r11.s64 + -456;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32142
	r11.s64 = -2106458112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,7296
	ctx.r5.s64 = r11.s64 + 7296;
	// addi r4,r1,980
	ctx.r4.s64 = ctx.r1.s64 + 980;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,980
	ctx.r3.s64 = ctx.r1.s64 + 980;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,988
	ctx.r3.s64 = ctx.r1.s64 + 988;
	// addi r4,r11,-476
	ctx.r4.s64 = r11.s64 + -476;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-4992
	ctx.r5.s64 = r11.s64 + -4992;
	// addi r4,r1,988
	ctx.r4.s64 = ctx.r1.s64 + 988;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,988
	ctx.r3.s64 = ctx.r1.s64 + 988;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,996
	ctx.r3.s64 = ctx.r1.s64 + 996;
	// addi r4,r11,-496
	ctx.r4.s64 = r11.s64 + -496;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32158
	r11.s64 = -2107506688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-14016
	ctx.r5.s64 = r11.s64 + -14016;
	// addi r4,r1,996
	ctx.r4.s64 = ctx.r1.s64 + 996;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,996
	ctx.r3.s64 = ctx.r1.s64 + 996;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,1004
	ctx.r3.s64 = ctx.r1.s64 + 1004;
	// addi r4,r11,-516
	ctx.r4.s64 = r11.s64 + -516;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,15776
	ctx.r5.s64 = r11.s64 + 15776;
	// addi r4,r1,1004
	ctx.r4.s64 = ctx.r1.s64 + 1004;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,1004
	ctx.r3.s64 = ctx.r1.s64 + 1004;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,1012
	ctx.r3.s64 = ctx.r1.s64 + 1012;
	// addi r4,r11,-532
	ctx.r4.s64 = r11.s64 + -532;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-11336
	ctx.r5.s64 = r11.s64 + -11336;
	// addi r4,r1,1012
	ctx.r4.s64 = ctx.r1.s64 + 1012;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,1012
	ctx.r3.s64 = ctx.r1.s64 + 1012;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,1020
	ctx.r3.s64 = ctx.r1.s64 + 1020;
	// addi r4,r11,-556
	ctx.r4.s64 = r11.s64 + -556;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32149
	r11.s64 = -2106916864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,29448
	ctx.r5.s64 = r11.s64 + 29448;
	// addi r4,r1,1020
	ctx.r4.s64 = ctx.r1.s64 + 1020;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,1020
	ctx.r3.s64 = ctx.r1.s64 + 1020;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,1028
	ctx.r3.s64 = ctx.r1.s64 + 1028;
	// addi r4,r11,-576
	ctx.r4.s64 = r11.s64 + -576;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32143
	r11.s64 = -2106523648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,21864
	ctx.r5.s64 = r11.s64 + 21864;
	// addi r4,r1,1028
	ctx.r4.s64 = ctx.r1.s64 + 1028;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,1028
	ctx.r3.s64 = ctx.r1.s64 + 1028;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,1036
	ctx.r3.s64 = ctx.r1.s64 + 1036;
	// addi r4,r11,-600
	ctx.r4.s64 = r11.s64 + -600;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32143
	r11.s64 = -2106523648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,23864
	ctx.r5.s64 = r11.s64 + 23864;
	// addi r4,r1,1036
	ctx.r4.s64 = ctx.r1.s64 + 1036;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,1036
	ctx.r3.s64 = ctx.r1.s64 + 1036;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,1044
	ctx.r3.s64 = ctx.r1.s64 + 1044;
	// addi r4,r11,-612
	ctx.r4.s64 = r11.s64 + -612;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32143
	r11.s64 = -2106523648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,30136
	ctx.r5.s64 = r11.s64 + 30136;
	// addi r4,r1,1044
	ctx.r4.s64 = ctx.r1.s64 + 1044;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,1044
	ctx.r3.s64 = ctx.r1.s64 + 1044;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,1052
	ctx.r3.s64 = ctx.r1.s64 + 1052;
	// addi r4,r11,-632
	ctx.r4.s64 = r11.s64 + -632;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32161
	r11.s64 = -2107703296;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,15568
	ctx.r5.s64 = r11.s64 + 15568;
	// addi r4,r1,1052
	ctx.r4.s64 = ctx.r1.s64 + 1052;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,1052
	ctx.r3.s64 = ctx.r1.s64 + 1052;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,1060
	ctx.r3.s64 = ctx.r1.s64 + 1060;
	// addi r4,r11,-664
	ctx.r4.s64 = r11.s64 + -664;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32142
	r11.s64 = -2106458112;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-29200
	ctx.r5.s64 = r11.s64 + -29200;
	// addi r4,r1,1060
	ctx.r4.s64 = ctx.r1.s64 + 1060;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,1060
	ctx.r3.s64 = ctx.r1.s64 + 1060;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,1068
	ctx.r3.s64 = ctx.r1.s64 + 1068;
	// addi r4,r11,-692
	ctx.r4.s64 = r11.s64 + -692;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32142
	r11.s64 = -2106458112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,216
	ctx.r5.s64 = r11.s64 + 216;
	// addi r4,r1,1068
	ctx.r4.s64 = ctx.r1.s64 + 1068;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,1068
	ctx.r3.s64 = ctx.r1.s64 + 1068;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,1076
	ctx.r3.s64 = ctx.r1.s64 + 1076;
	// addi r4,r11,-728
	ctx.r4.s64 = r11.s64 + -728;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32148
	r11.s64 = -2106851328;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26912
	ctx.r5.s64 = r11.s64 + -26912;
	// addi r4,r1,1076
	ctx.r4.s64 = ctx.r1.s64 + 1076;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,1076
	ctx.r3.s64 = ctx.r1.s64 + 1076;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,1084
	ctx.r3.s64 = ctx.r1.s64 + 1084;
	// addi r4,r11,-756
	ctx.r4.s64 = r11.s64 + -756;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32147
	r11.s64 = -2106785792;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-17968
	ctx.r5.s64 = r11.s64 + -17968;
	// addi r4,r1,1084
	ctx.r4.s64 = ctx.r1.s64 + 1084;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,1084
	ctx.r3.s64 = ctx.r1.s64 + 1084;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,1092
	ctx.r3.s64 = ctx.r1.s64 + 1092;
	// addi r4,r11,-784
	ctx.r4.s64 = r11.s64 + -784;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32143
	r11.s64 = -2106523648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,5160
	ctx.r5.s64 = r11.s64 + 5160;
	// addi r4,r1,1092
	ctx.r4.s64 = ctx.r1.s64 + 1092;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,1092
	ctx.r3.s64 = ctx.r1.s64 + 1092;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,1100
	ctx.r3.s64 = ctx.r1.s64 + 1100;
	// addi r4,r11,-816
	ctx.r4.s64 = r11.s64 + -816;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32142
	r11.s64 = -2106458112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,25432
	ctx.r5.s64 = r11.s64 + 25432;
	// addi r4,r1,1100
	ctx.r4.s64 = ctx.r1.s64 + 1100;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,1100
	ctx.r3.s64 = ctx.r1.s64 + 1100;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,1108
	ctx.r3.s64 = ctx.r1.s64 + 1108;
	// addi r4,r11,-840
	ctx.r4.s64 = r11.s64 + -840;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-11568
	ctx.r5.s64 = r11.s64 + -11568;
	// addi r4,r1,1108
	ctx.r4.s64 = ctx.r1.s64 + 1108;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,1108
	ctx.r3.s64 = ctx.r1.s64 + 1108;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827A9840"))) PPC_WEAK_FUNC(sub_827A9840);
PPC_FUNC_IMPL(__imp__sub_827A9840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,5100
	r30.s64 = r11.s64 + 5100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32161
	r11.s64 = -2107703296;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-4800
	ctx.r5.s64 = r11.s64 + -4800;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,5084
	r29.s64 = r11.s64 + 5084;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32161
	r11.s64 = -2107703296;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-4336
	ctx.r5.s64 = r11.s64 + -4336;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,5072
	ctx.r4.s64 = r11.s64 + 5072;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r30,r31,32
	r30.s64 = r31.s64 + 32;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r28,r1,88
	r28.s64 = ctx.r1.s64 + 88;
	// bl 0x822fe3e8
	sub_822FE3E8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,5060
	ctx.r4.s64 = r11.s64 + 5060;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r30,r1,96
	r30.s64 = ctx.r1.s64 + 96;
	// bl 0x822fe3e8
	sub_822FE3E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,2920
	ctx.r4.s64 = r11.s64 + 2920;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32161
	r11.s64 = -2107703296;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,768
	ctx.r5.s64 = r11.s64 + 768;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,6116
	ctx.r4.s64 = r11.s64 + 6116;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32161
	r11.s64 = -2107703296;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,1288
	ctx.r5.s64 = r11.s64 + 1288;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,6104
	ctx.r4.s64 = r11.s64 + 6104;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32161
	r11.s64 = -2107703296;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-10288
	ctx.r5.s64 = r11.s64 + -10288;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,6092
	ctx.r4.s64 = r11.s64 + 6092;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32161
	r11.s64 = -2107703296;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-9736
	ctx.r5.s64 = r11.s64 + -9736;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,6932
	ctx.r4.s64 = r11.s64 + 6932;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32160
	r11.s64 = -2107637760;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-24592
	ctx.r5.s64 = r11.s64 + -24592;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,6084
	ctx.r4.s64 = r11.s64 + 6084;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32160
	r11.s64 = -2107637760;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-24024
	ctx.r5.s64 = r11.s64 + -24024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,6072
	ctx.r4.s64 = r11.s64 + 6072;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32160
	r11.s64 = -2107637760;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-25648
	ctx.r5.s64 = r11.s64 + -25648;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,6064
	ctx.r4.s64 = r11.s64 + 6064;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32160
	r11.s64 = -2107637760;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-25120
	ctx.r5.s64 = r11.s64 + -25120;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

extern bool DisableControlTutorialMidAsmHook();

__attribute__((alias("__imp__sub_827A9AD0"))) PPC_WEAK_FUNC(sub_827A9AD0);
PPC_FUNC_IMPL(__imp__sub_827A9AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-848(r1)
	ea = -848 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7000
	ctx.r4.s64 = r11.s64 + -7000;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32161
	r11.s64 = -2107703296;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-23672
	ctx.r5.s64 = r11.s64 + -23672;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9736
	ctx.r4.s64 = r11.s64 + 9736;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32161
	r11.s64 = -2107703296;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-18616
	ctx.r5.s64 = r11.s64 + -18616;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,2640
	r30.s64 = r11.s64 + 2640;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32161
	r11.s64 = -2107703296;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-5264
	ctx.r5.s64 = r11.s64 + -5264;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,444
	ctx.r3.s64 = ctx.r1.s64 + 444;
	// addi r4,r11,9728
	ctx.r4.s64 = r11.s64 + 9728;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r30,r31,32
	r30.s64 = r31.s64 + 32;
	// addi r4,r1,444
	ctx.r4.s64 = ctx.r1.s64 + 444;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r1,92
	r29.s64 = ctx.r1.s64 + 92;
	// bl 0x822fe3e8
	sub_822FE3E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// addi r3,r1,444
	ctx.r3.s64 = ctx.r1.s64 + 444;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9716
	ctx.r4.s64 = r11.s64 + 9716;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32158
	r11.s64 = -2107506688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-31080
	ctx.r5.s64 = r11.s64 + -31080;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-18468
	ctx.r4.s64 = r11.s64 + -18468;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32161
	r11.s64 = -2107703296;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-10800
	ctx.r5.s64 = r11.s64 + -10800;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,9704
	ctx.r4.s64 = r11.s64 + 9704;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32158
	r11.s64 = -2107506688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-25432
	ctx.r5.s64 = r11.s64 + -25432;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,1072
	ctx.r4.s64 = r11.s64 + 1072;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32161
	r11.s64 = -2107703296;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-30568
	ctx.r5.s64 = r11.s64 + -30568;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9692
	ctx.r4.s64 = r11.s64 + 9692;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32161
	r11.s64 = -2107703296;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-29624
	ctx.r5.s64 = r11.s64 + -29624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9680
	ctx.r4.s64 = r11.s64 + 9680;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,1224
	ctx.r5.s64 = r11.s64 + 1224;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9664
	ctx.r4.s64 = r11.s64 + 9664;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32160
	r11.s64 = -2107637760;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,8776
	ctx.r5.s64 = r11.s64 + 8776;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,18752
	ctx.r4.s64 = r11.s64 + 18752;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32160
	r11.s64 = -2107637760;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,8776
	ctx.r5.s64 = r11.s64 + 8776;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,-31376
	r29.s64 = r11.s64 + -31376;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32159
	r11.s64 = -2107572224;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-20976
	ctx.r5.s64 = r11.s64 + -20976;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,756
	ctx.r3.s64 = ctx.r1.s64 + 756;
	// addi r4,r11,9648
	ctx.r4.s64 = r11.s64 + 9648;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,756
	ctx.r4.s64 = ctx.r1.s64 + 756;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r1,100
	r29.s64 = ctx.r1.s64 + 100;
	// bl 0x822fe3e8
	sub_822FE3E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// addi r3,r1,756
	ctx.r3.s64 = ctx.r1.s64 + 756;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9636
	ctx.r4.s64 = r11.s64 + 9636;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32159
	r11.s64 = -2107572224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-20472
	ctx.r5.s64 = r11.s64 + -20472;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9616
	ctx.r4.s64 = r11.s64 + 9616;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32161
	r11.s64 = -2107703296;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,25416
	ctx.r5.s64 = r11.s64 + 25416;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9592
	ctx.r4.s64 = r11.s64 + 9592;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32161
	r11.s64 = -2107703296;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,25848
	ctx.r5.s64 = r11.s64 + 25848;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9568
	ctx.r4.s64 = r11.s64 + 9568;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32161
	r11.s64 = -2107703296;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,26280
	ctx.r5.s64 = r11.s64 + 26280;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9548
	ctx.r4.s64 = r11.s64 + 9548;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32161
	r11.s64 = -2107703296;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,26712
	ctx.r5.s64 = r11.s64 + 26712;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9524
	ctx.r4.s64 = r11.s64 + 9524;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32160
	r11.s64 = -2107637760;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-31328
	ctx.r5.s64 = r11.s64 + -31328;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9504
	ctx.r4.s64 = r11.s64 + 9504;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32160
	r11.s64 = -2107637760;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27608
	ctx.r5.s64 = r11.s64 + -27608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9480
	ctx.r4.s64 = r11.s64 + 9480;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32158
	r11.s64 = -2107506688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,10360
	ctx.r5.s64 = r11.s64 + 10360;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9468
	ctx.r4.s64 = r11.s64 + 9468;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32160
	r11.s64 = -2107637760;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-11944
	ctx.r5.s64 = r11.s64 + -11944;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8296
	ctx.r4.s64 = r11.s64 + 8296;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32160
	r11.s64 = -2107637760;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-11504
	ctx.r5.s64 = r11.s64 + -11504;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9452
	ctx.r4.s64 = r11.s64 + 9452;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32154
	r11.s64 = -2107244544;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,21000
	ctx.r5.s64 = r11.s64 + 21000;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8280
	ctx.r4.s64 = r11.s64 + 8280;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32160
	r11.s64 = -2107637760;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-11064
	ctx.r5.s64 = r11.s64 + -11064;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,19504
	ctx.r4.s64 = r11.s64 + 19504;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32160
	r11.s64 = -2107637760;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-2208
	ctx.r5.s64 = r11.s64 + -2208;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9440
	ctx.r4.s64 = r11.s64 + 9440;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32160
	r11.s64 = -2107637760;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-1728
	ctx.r5.s64 = r11.s64 + -1728;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,10928
	ctx.r4.s64 = r11.s64 + 10928;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32160
	r11.s64 = -2107637760;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,18248
	ctx.r5.s64 = r11.s64 + 18248;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,9432
	r29.s64 = r11.s64 + 9432;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32160
	r11.s64 = -2107637760;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,28368
	ctx.r5.s64 = r11.s64 + 28368;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,452
	ctx.r3.s64 = ctx.r1.s64 + 452;
	// addi r4,r11,9424
	ctx.r4.s64 = r11.s64 + 9424;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,452
	ctx.r4.s64 = ctx.r1.s64 + 452;
	// addi r30,r1,108
	r30.s64 = ctx.r1.s64 + 108;
	// bl 0x822fe3e8
	sub_822FE3E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// addi r3,r1,452
	ctx.r3.s64 = ctx.r1.s64 + 452;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,12160
	ctx.r4.s64 = r11.s64 + 12160;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32160
	r11.s64 = -2107637760;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,30560
	ctx.r5.s64 = r11.s64 + 30560;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,12928
	ctx.r4.s64 = r11.s64 + 12928;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32159
	r11.s64 = -2107572224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28272
	ctx.r5.s64 = r11.s64 + -28272;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,14616
	ctx.r4.s64 = r11.s64 + 14616;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32159
	r11.s64 = -2107572224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-11960
	ctx.r5.s64 = r11.s64 + -11960;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,3092
	ctx.r4.s64 = r11.s64 + 3092;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32159
	r11.s64 = -2107572224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-1520
	ctx.r5.s64 = r11.s64 + -1520;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9404
	ctx.r4.s64 = r11.s64 + 9404;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,24336
	ctx.r5.s64 = r11.s64 + 24336;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9392
	ctx.r4.s64 = r11.s64 + 9392;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32159
	r11.s64 = -2107572224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,5344
	ctx.r5.s64 = r11.s64 + 5344;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16664
	ctx.r4.s64 = r11.s64 + 16664;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32159
	r11.s64 = -2107572224;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,10840
	ctx.r5.s64 = r11.s64 + 10840;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5040
	ctx.r4.s64 = r11.s64 + 5040;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32159
	r11.s64 = -2107572224;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,13528
	ctx.r5.s64 = r11.s64 + 13528;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9376
	ctx.r4.s64 = r11.s64 + 9376;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32159
	r11.s64 = -2107572224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,18712
	ctx.r5.s64 = r11.s64 + 18712;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,18492
	ctx.r4.s64 = r11.s64 + 18492;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32159
	r11.s64 = -2107572224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,26408
	ctx.r5.s64 = r11.s64 + 26408;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9360
	ctx.r4.s64 = r11.s64 + 9360;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32157
	r11.s64 = -2107441152;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,5520
	ctx.r5.s64 = r11.s64 + 5520;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,21404
	ctx.r4.s64 = r11.s64 + 21404;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32158
	r11.s64 = -2107506688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-14464
	ctx.r5.s64 = r11.s64 + -14464;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9348
	ctx.r4.s64 = r11.s64 + 9348;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32159
	r11.s64 = -2107572224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,30696
	ctx.r5.s64 = r11.s64 + 30696;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9340
	ctx.r4.s64 = r11.s64 + 9340;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,5560
	ctx.r5.s64 = r11.s64 + 5560;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9324
	ctx.r4.s64 = r11.s64 + 9324;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,5672
	ctx.r5.s64 = r11.s64 + 5672;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9308
	ctx.r4.s64 = r11.s64 + 9308;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,5728
	ctx.r5.s64 = r11.s64 + 5728;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9292
	ctx.r4.s64 = r11.s64 + 9292;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,5784
	ctx.r5.s64 = r11.s64 + 5784;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9272
	ctx.r4.s64 = r11.s64 + 9272;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,5840
	ctx.r5.s64 = r11.s64 + 5840;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,20796
	ctx.r4.s64 = r11.s64 + 20796;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32158
	r11.s64 = -2107506688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-21040
	ctx.r5.s64 = r11.s64 + -21040;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9252
	ctx.r4.s64 = r11.s64 + 9252;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32158
	r11.s64 = -2107506688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-8248
	ctx.r5.s64 = r11.s64 + -8248;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9232
	ctx.r4.s64 = r11.s64 + 9232;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32158
	r11.s64 = -2107506688;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-5800
	ctx.r5.s64 = r11.s64 + -5800;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9216
	ctx.r4.s64 = r11.s64 + 9216;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32154
	r11.s64 = -2107244544;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,8256
	ctx.r5.s64 = r11.s64 + 8256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9192
	ctx.r4.s64 = r11.s64 + 9192;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32154
	r11.s64 = -2107244544;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,8744
	ctx.r5.s64 = r11.s64 + 8744;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9168
	ctx.r4.s64 = r11.s64 + 9168;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32154
	r11.s64 = -2107244544;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,9232
	ctx.r5.s64 = r11.s64 + 9232;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9156
	ctx.r4.s64 = r11.s64 + 9156;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,26904
	ctx.r5.s64 = r11.s64 + 26904;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9136
	ctx.r4.s64 = r11.s64 + 9136;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32141
	r11.s64 = -2106392576;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,23872
	ctx.r5.s64 = r11.s64 + 23872;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9116
	ctx.r4.s64 = r11.s64 + 9116;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32140
	if (DisableControlTutorialMidAsmHook()) {
		goto loc_827AA604;
	}
	else {
	}
	r11.s64 = -2106327040;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-14120
	ctx.r5.s64 = r11.s64 + -14120;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
loc_827AA604:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4744
	ctx.r4.s64 = r11.s64 + 4744;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32132
	r11.s64 = -2105802752;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,14448
	ctx.r5.s64 = r11.s64 + 14448;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1964
	ctx.r4.s64 = r11.s64 + -1964;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-12992
	ctx.r5.s64 = r11.s64 + -12992;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5128
	ctx.r4.s64 = r11.s64 + 5128;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-22216
	ctx.r5.s64 = r11.s64 + -22216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9096
	ctx.r4.s64 = r11.s64 + 9096;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,9304
	ctx.r5.s64 = r11.s64 + 9304;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5248
	ctx.r4.s64 = r11.s64 + 5248;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32124
	r11.s64 = -2105278464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-25656
	ctx.r5.s64 = r11.s64 + -25656;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5240
	ctx.r4.s64 = r11.s64 + 5240;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32125
	r11.s64 = -2105344000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-5456
	ctx.r5.s64 = r11.s64 + -5456;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5228
	ctx.r4.s64 = r11.s64 + 5228;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32125
	r11.s64 = -2105344000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-4976
	ctx.r5.s64 = r11.s64 + -4976;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5216
	ctx.r4.s64 = r11.s64 + 5216;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32125
	r11.s64 = -2105344000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-4496
	ctx.r5.s64 = r11.s64 + -4496;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9084
	ctx.r4.s64 = r11.s64 + 9084;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32125
	r11.s64 = -2105344000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,29736
	ctx.r5.s64 = r11.s64 + 29736;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9072
	ctx.r4.s64 = r11.s64 + 9072;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32125
	r11.s64 = -2105344000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,30216
	ctx.r5.s64 = r11.s64 + 30216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9052
	ctx.r4.s64 = r11.s64 + 9052;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32125
	r11.s64 = -2105344000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,8392
	ctx.r5.s64 = r11.s64 + 8392;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9036
	ctx.r4.s64 = r11.s64 + 9036;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32125
	r11.s64 = -2105344000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,8872
	ctx.r5.s64 = r11.s64 + 8872;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9012
	ctx.r4.s64 = r11.s64 + 9012;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32125
	r11.s64 = -2105344000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,9352
	ctx.r5.s64 = r11.s64 + 9352;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9000
	ctx.r4.s64 = r11.s64 + 9000;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32123
	r11.s64 = -2105212928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,4688
	ctx.r5.s64 = r11.s64 + 4688;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8980
	ctx.r4.s64 = r11.s64 + 8980;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32123
	r11.s64 = -2105212928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,-24376
	ctx.r5.s64 = r11.s64 + -24376;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8948
	ctx.r4.s64 = r11.s64 + 8948;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32123
	r11.s64 = -2105212928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-25576
	ctx.r5.s64 = r11.s64 + -25576;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8916
	ctx.r4.s64 = r11.s64 + 8916;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32123
	r11.s64 = -2105212928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-25176
	ctx.r5.s64 = r11.s64 + -25176;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8888
	ctx.r4.s64 = r11.s64 + 8888;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32123
	r11.s64 = -2105212928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-24776
	ctx.r5.s64 = r11.s64 + -24776;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8856
	ctx.r4.s64 = r11.s64 + 8856;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32123
	r11.s64 = -2105212928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-23976
	ctx.r5.s64 = r11.s64 + -23976;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8820
	ctx.r4.s64 = r11.s64 + 8820;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32123
	r11.s64 = -2105212928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-23576
	ctx.r5.s64 = r11.s64 + -23576;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8788
	ctx.r4.s64 = r11.s64 + 8788;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32123
	r11.s64 = -2105212928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-23176
	ctx.r5.s64 = r11.s64 + -23176;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8776
	ctx.r4.s64 = r11.s64 + 8776;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,17832
	ctx.r5.s64 = r11.s64 + 17832;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8764
	ctx.r4.s64 = r11.s64 + 8764;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32125
	r11.s64 = -2105344000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28752
	ctx.r5.s64 = r11.s64 + -28752;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8752
	ctx.r4.s64 = r11.s64 + 8752;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32125
	r11.s64 = -2105344000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-32616
	ctx.r5.s64 = r11.s64 + -32616;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8736
	ctx.r4.s64 = r11.s64 + 8736;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32125
	r11.s64 = -2105344000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-14992
	ctx.r5.s64 = r11.s64 + -14992;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8720
	ctx.r4.s64 = r11.s64 + 8720;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32125
	r11.s64 = -2105344000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-20688
	ctx.r5.s64 = r11.s64 + -20688;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,628
	ctx.r3.s64 = ctx.r1.s64 + 628;
	// addi r4,r11,8700
	ctx.r4.s64 = r11.s64 + 8700;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32125
	r11.s64 = -2105344000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-12712
	ctx.r5.s64 = r11.s64 + -12712;
	// addi r4,r1,628
	ctx.r4.s64 = ctx.r1.s64 + 628;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,628
	ctx.r3.s64 = ctx.r1.s64 + 628;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// addi r4,r11,8684
	ctx.r4.s64 = r11.s64 + 8684;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32122
	r11.s64 = -2105147392;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,29336
	ctx.r5.s64 = r11.s64 + 29336;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,460
	ctx.r3.s64 = ctx.r1.s64 + 460;
	// addi r4,r11,8672
	ctx.r4.s64 = r11.s64 + 8672;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32125
	r11.s64 = -2105344000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,20136
	ctx.r5.s64 = r11.s64 + 20136;
	// addi r4,r1,460
	ctx.r4.s64 = ctx.r1.s64 + 460;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,460
	ctx.r3.s64 = ctx.r1.s64 + 460;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// addi r4,r11,8656
	ctx.r4.s64 = r11.s64 + 8656;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32124
	r11.s64 = -2105278464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-9096
	ctx.r5.s64 = r11.s64 + -9096;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,716
	ctx.r3.s64 = ctx.r1.s64 + 716;
	// addi r4,r11,8640
	ctx.r4.s64 = r11.s64 + 8640;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32124
	r11.s64 = -2105278464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-9576
	ctx.r5.s64 = r11.s64 + -9576;
	// addi r4,r1,716
	ctx.r4.s64 = ctx.r1.s64 + 716;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,716
	ctx.r3.s64 = ctx.r1.s64 + 716;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r4,r11,8628
	ctx.r4.s64 = r11.s64 + 8628;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32124
	r11.s64 = -2105278464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-8136
	ctx.r5.s64 = r11.s64 + -8136;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,468
	ctx.r3.s64 = ctx.r1.s64 + 468;
	// addi r4,r11,8616
	ctx.r4.s64 = r11.s64 + 8616;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32124
	r11.s64 = -2105278464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-8616
	ctx.r5.s64 = r11.s64 + -8616;
	// addi r4,r1,468
	ctx.r4.s64 = ctx.r1.s64 + 468;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,468
	ctx.r3.s64 = ctx.r1.s64 + 468;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// addi r4,r11,8604
	ctx.r4.s64 = r11.s64 + 8604;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32124
	r11.s64 = -2105278464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-3472
	ctx.r5.s64 = r11.s64 + -3472;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,636
	ctx.r3.s64 = ctx.r1.s64 + 636;
	// addi r4,r11,8592
	ctx.r4.s64 = r11.s64 + 8592;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32122
	r11.s64 = -2105147392;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-16936
	ctx.r5.s64 = r11.s64 + -16936;
	// addi r4,r1,636
	ctx.r4.s64 = ctx.r1.s64 + 636;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,636
	ctx.r3.s64 = ctx.r1.s64 + 636;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// addi r4,r11,8576
	ctx.r4.s64 = r11.s64 + 8576;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32122
	r11.s64 = -2105147392;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,12696
	ctx.r5.s64 = r11.s64 + 12696;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,476
	ctx.r3.s64 = ctx.r1.s64 + 476;
	// addi r4,r11,8568
	ctx.r4.s64 = r11.s64 + 8568;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32158
	r11.s64 = -2107506688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,1168
	ctx.r5.s64 = r11.s64 + 1168;
	// addi r4,r1,476
	ctx.r4.s64 = ctx.r1.s64 + 476;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,476
	ctx.r3.s64 = ctx.r1.s64 + 476;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// addi r4,r11,8544
	ctx.r4.s64 = r11.s64 + 8544;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32154
	r11.s64 = -2107244544;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,17968
	ctx.r5.s64 = r11.s64 + 17968;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,780
	ctx.r3.s64 = ctx.r1.s64 + 780;
	// addi r4,r11,8528
	ctx.r4.s64 = r11.s64 + 8528;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32141
	r11.s64 = -2106392576;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,20328
	ctx.r5.s64 = r11.s64 + 20328;
	// addi r4,r1,780
	ctx.r4.s64 = ctx.r1.s64 + 780;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,780
	ctx.r3.s64 = ctx.r1.s64 + 780;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// addi r4,r11,8512
	ctx.r4.s64 = r11.s64 + 8512;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32141
	r11.s64 = -2106392576;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,20808
	ctx.r5.s64 = r11.s64 + 20808;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,484
	ctx.r3.s64 = ctx.r1.s64 + 484;
	// addi r4,r11,8488
	ctx.r4.s64 = r11.s64 + 8488;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32141
	r11.s64 = -2106392576;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,21288
	ctx.r5.s64 = r11.s64 + 21288;
	// addi r4,r1,484
	ctx.r4.s64 = ctx.r1.s64 + 484;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,484
	ctx.r3.s64 = ctx.r1.s64 + 484;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// addi r4,r11,27500
	ctx.r4.s64 = r11.s64 + 27500;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32141
	r11.s64 = -2106392576;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,21768
	ctx.r5.s64 = r11.s64 + 21768;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,644
	ctx.r3.s64 = ctx.r1.s64 + 644;
	// addi r4,r11,8468
	ctx.r4.s64 = r11.s64 + 8468;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-6200
	ctx.r5.s64 = r11.s64 + -6200;
	// addi r4,r1,644
	ctx.r4.s64 = ctx.r1.s64 + 644;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,644
	ctx.r3.s64 = ctx.r1.s64 + 644;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// addi r4,r11,8460
	ctx.r4.s64 = r11.s64 + 8460;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32158
	r11.s64 = -2107506688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,6752
	ctx.r5.s64 = r11.s64 + 6752;
	// addi r4,r1,180
	ctx.r4.s64 = ctx.r1.s64 + 180;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,492
	ctx.r3.s64 = ctx.r1.s64 + 492;
	// addi r4,r11,25844
	ctx.r4.s64 = r11.s64 + 25844;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32158
	r11.s64 = -2107506688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,19504
	ctx.r5.s64 = r11.s64 + 19504;
	// addi r4,r1,492
	ctx.r4.s64 = ctx.r1.s64 + 492;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,492
	ctx.r3.s64 = ctx.r1.s64 + 492;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// addi r4,r11,8452
	ctx.r4.s64 = r11.s64 + 8452;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32158
	r11.s64 = -2107506688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,25088
	ctx.r5.s64 = r11.s64 + 25088;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,724
	ctx.r3.s64 = ctx.r1.s64 + 724;
	// addi r4,r11,28188
	ctx.r4.s64 = r11.s64 + 28188;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32157
	r11.s64 = -2107441152;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-14512
	ctx.r5.s64 = r11.s64 + -14512;
	// addi r4,r1,724
	ctx.r4.s64 = ctx.r1.s64 + 724;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,724
	ctx.r3.s64 = ctx.r1.s64 + 724;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// addi r4,r11,8440
	ctx.r4.s64 = r11.s64 + 8440;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32157
	r11.s64 = -2107441152;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-23040
	ctx.r5.s64 = r11.s64 + -23040;
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,500
	ctx.r3.s64 = ctx.r1.s64 + 500;
	// addi r4,r11,4996
	ctx.r4.s64 = r11.s64 + 4996;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32157
	r11.s64 = -2107441152;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-4056
	ctx.r5.s64 = r11.s64 + -4056;
	// addi r4,r1,500
	ctx.r4.s64 = ctx.r1.s64 + 500;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,500
	ctx.r3.s64 = ctx.r1.s64 + 500;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// addi r4,r11,4976
	ctx.r4.s64 = r11.s64 + 4976;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32157
	r11.s64 = -2107441152;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7072
	ctx.r5.s64 = r11.s64 + -7072;
	// addi r4,r1,204
	ctx.r4.s64 = ctx.r1.s64 + 204;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,652
	ctx.r3.s64 = ctx.r1.s64 + 652;
	// addi r4,r11,8416
	ctx.r4.s64 = r11.s64 + 8416;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32157
	r11.s64 = -2107441152;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-2176
	ctx.r5.s64 = r11.s64 + -2176;
	// addi r4,r1,652
	ctx.r4.s64 = ctx.r1.s64 + 652;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,652
	ctx.r3.s64 = ctx.r1.s64 + 652;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// addi r4,r11,8392
	ctx.r4.s64 = r11.s64 + 8392;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32157
	r11.s64 = -2107441152;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-3648
	ctx.r5.s64 = r11.s64 + -3648;
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,508
	ctx.r3.s64 = ctx.r1.s64 + 508;
	// addi r4,r11,8368
	ctx.r4.s64 = r11.s64 + 8368;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32157
	r11.s64 = -2107441152;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-6648
	ctx.r5.s64 = r11.s64 + -6648;
	// addi r4,r1,508
	ctx.r4.s64 = ctx.r1.s64 + 508;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,508
	ctx.r3.s64 = ctx.r1.s64 + 508;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// addi r4,r11,8348
	ctx.r4.s64 = r11.s64 + 8348;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32157
	r11.s64 = -2107441152;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,1816
	ctx.r5.s64 = r11.s64 + 1816;
	// addi r4,r1,220
	ctx.r4.s64 = ctx.r1.s64 + 220;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,764
	ctx.r3.s64 = ctx.r1.s64 + 764;
	// addi r4,r11,5072
	ctx.r4.s64 = r11.s64 + 5072;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32161
	r11.s64 = -2107703296;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-3872
	ctx.r5.s64 = r11.s64 + -3872;
	// addi r4,r1,764
	ctx.r4.s64 = ctx.r1.s64 + 764;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,764
	ctx.r3.s64 = ctx.r1.s64 + 764;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// addi r4,r11,5060
	ctx.r4.s64 = r11.s64 + 5060;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32161
	r11.s64 = -2107703296;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-3408
	ctx.r5.s64 = r11.s64 + -3408;
	// addi r4,r1,228
	ctx.r4.s64 = ctx.r1.s64 + 228;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,516
	ctx.r3.s64 = ctx.r1.s64 + 516;
	// addi r4,r11,5152
	ctx.r4.s64 = r11.s64 + 5152;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32141
	r11.s64 = -2106392576;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-28568
	ctx.r5.s64 = r11.s64 + -28568;
	// addi r4,r1,516
	ctx.r4.s64 = ctx.r1.s64 + 516;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,516
	ctx.r3.s64 = ctx.r1.s64 + 516;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// addi r4,r11,-22988
	ctx.r4.s64 = r11.s64 + -22988;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32154
	r11.s64 = -2107244544;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,904
	ctx.r5.s64 = r11.s64 + 904;
	// addi r4,r1,236
	ctx.r4.s64 = ctx.r1.s64 + 236;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,660
	ctx.r3.s64 = ctx.r1.s64 + 660;
	// addi r4,r11,8328
	ctx.r4.s64 = r11.s64 + 8328;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32154
	r11.s64 = -2107244544;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,23592
	ctx.r5.s64 = r11.s64 + 23592;
	// addi r4,r1,660
	ctx.r4.s64 = ctx.r1.s64 + 660;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,660
	ctx.r3.s64 = ctx.r1.s64 + 660;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// addi r4,r11,8304
	ctx.r4.s64 = r11.s64 + 8304;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32154
	r11.s64 = -2107244544;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,24808
	ctx.r5.s64 = r11.s64 + 24808;
	// addi r4,r1,244
	ctx.r4.s64 = ctx.r1.s64 + 244;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,524
	ctx.r3.s64 = ctx.r1.s64 + 524;
	// addi r4,r11,8280
	ctx.r4.s64 = r11.s64 + 8280;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32154
	r11.s64 = -2107244544;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,25240
	ctx.r5.s64 = r11.s64 + 25240;
	// addi r4,r1,524
	ctx.r4.s64 = ctx.r1.s64 + 524;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,524
	ctx.r3.s64 = ctx.r1.s64 + 524;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// addi r4,r11,8256
	ctx.r4.s64 = r11.s64 + 8256;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32141
	r11.s64 = -2106392576;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7048
	ctx.r5.s64 = r11.s64 + -7048;
	// addi r4,r1,252
	ctx.r4.s64 = ctx.r1.s64 + 252;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,732
	ctx.r3.s64 = ctx.r1.s64 + 732;
	// addi r4,r11,8236
	ctx.r4.s64 = r11.s64 + 8236;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32141
	r11.s64 = -2106392576;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,7984
	ctx.r5.s64 = r11.s64 + 7984;
	// addi r4,r1,732
	ctx.r4.s64 = ctx.r1.s64 + 732;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,732
	ctx.r3.s64 = ctx.r1.s64 + 732;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// addi r4,r11,8212
	ctx.r4.s64 = r11.s64 + 8212;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32141
	r11.s64 = -2106392576;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,12632
	ctx.r5.s64 = r11.s64 + 12632;
	// addi r4,r1,260
	ctx.r4.s64 = ctx.r1.s64 + 260;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,532
	ctx.r3.s64 = ctx.r1.s64 + 532;
	// addi r4,r11,8196
	ctx.r4.s64 = r11.s64 + 8196;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32141
	r11.s64 = -2106392576;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-1200
	ctx.r5.s64 = r11.s64 + -1200;
	// addi r4,r1,532
	ctx.r4.s64 = ctx.r1.s64 + 532;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,532
	ctx.r3.s64 = ctx.r1.s64 + 532;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,268
	ctx.r3.s64 = ctx.r1.s64 + 268;
	// addi r4,r11,8172
	ctx.r4.s64 = r11.s64 + 8172;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32141
	r11.s64 = -2106392576;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,2792
	ctx.r5.s64 = r11.s64 + 2792;
	// addi r4,r1,268
	ctx.r4.s64 = ctx.r1.s64 + 268;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,268
	ctx.r3.s64 = ctx.r1.s64 + 268;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,668
	ctx.r3.s64 = ctx.r1.s64 + 668;
	// addi r4,r11,8148
	ctx.r4.s64 = r11.s64 + 8148;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32141
	r11.s64 = -2106392576;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,3224
	ctx.r5.s64 = r11.s64 + 3224;
	// addi r4,r1,668
	ctx.r4.s64 = ctx.r1.s64 + 668;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,668
	ctx.r3.s64 = ctx.r1.s64 + 668;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,276
	ctx.r3.s64 = ctx.r1.s64 + 276;
	// addi r4,r11,8124
	ctx.r4.s64 = r11.s64 + 8124;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32141
	r11.s64 = -2106392576;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,10656
	ctx.r5.s64 = r11.s64 + 10656;
	// addi r4,r1,276
	ctx.r4.s64 = ctx.r1.s64 + 276;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,276
	ctx.r3.s64 = ctx.r1.s64 + 276;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,540
	ctx.r3.s64 = ctx.r1.s64 + 540;
	// addi r4,r11,8108
	ctx.r4.s64 = r11.s64 + 8108;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32154
	r11.s64 = -2107244544;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,3976
	ctx.r5.s64 = r11.s64 + 3976;
	// addi r4,r1,540
	ctx.r4.s64 = ctx.r1.s64 + 540;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,540
	ctx.r3.s64 = ctx.r1.s64 + 540;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,284
	ctx.r3.s64 = ctx.r1.s64 + 284;
	// addi r4,r11,-10684
	ctx.r4.s64 = r11.s64 + -10684;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32153
	r11.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-12288
	ctx.r5.s64 = r11.s64 + -12288;
	// addi r4,r1,284
	ctx.r4.s64 = ctx.r1.s64 + 284;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,284
	ctx.r3.s64 = ctx.r1.s64 + 284;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r1,796
	ctx.r3.s64 = ctx.r1.s64 + 796;
	// addi r4,r11,-19088
	ctx.r4.s64 = r11.s64 + -19088;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-31632
	ctx.r5.s64 = r11.s64 + -31632;
	// addi r4,r1,796
	ctx.r4.s64 = ctx.r1.s64 + 796;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,796
	ctx.r3.s64 = ctx.r1.s64 + 796;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,292
	ctx.r3.s64 = ctx.r1.s64 + 292;
	// addi r4,r11,8084
	ctx.r4.s64 = r11.s64 + 8084;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32153
	r11.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-3832
	ctx.r5.s64 = r11.s64 + -3832;
	// addi r4,r1,292
	ctx.r4.s64 = ctx.r1.s64 + 292;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,292
	ctx.r3.s64 = ctx.r1.s64 + 292;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,548
	ctx.r3.s64 = ctx.r1.s64 + 548;
	// addi r4,r11,8068
	ctx.r4.s64 = r11.s64 + 8068;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,9872
	ctx.r5.s64 = r11.s64 + 9872;
	// addi r4,r1,548
	ctx.r4.s64 = ctx.r1.s64 + 548;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,548
	ctx.r3.s64 = ctx.r1.s64 + 548;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,300
	ctx.r3.s64 = ctx.r1.s64 + 300;
	// addi r4,r11,8056
	ctx.r4.s64 = r11.s64 + 8056;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32161
	r11.s64 = -2107703296;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-30096
	ctx.r5.s64 = r11.s64 + -30096;
	// addi r4,r1,300
	ctx.r4.s64 = ctx.r1.s64 + 300;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,300
	ctx.r3.s64 = ctx.r1.s64 + 300;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,676
	ctx.r3.s64 = ctx.r1.s64 + 676;
	// addi r4,r11,8040
	ctx.r4.s64 = r11.s64 + 8040;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32103
	r11.s64 = -2103902208;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,19760
	ctx.r5.s64 = r11.s64 + 19760;
	// addi r4,r1,676
	ctx.r4.s64 = ctx.r1.s64 + 676;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,676
	ctx.r3.s64 = ctx.r1.s64 + 676;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,308
	ctx.r3.s64 = ctx.r1.s64 + 308;
	// addi r4,r11,8024
	ctx.r4.s64 = r11.s64 + 8024;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32101
	r11.s64 = -2103771136;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,1520
	ctx.r5.s64 = r11.s64 + 1520;
	// addi r4,r1,308
	ctx.r4.s64 = ctx.r1.s64 + 308;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,308
	ctx.r3.s64 = ctx.r1.s64 + 308;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,556
	ctx.r3.s64 = ctx.r1.s64 + 556;
	// addi r4,r11,8008
	ctx.r4.s64 = r11.s64 + 8008;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32092
	r11.s64 = -2103181312;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-1776
	ctx.r5.s64 = r11.s64 + -1776;
	// addi r4,r1,556
	ctx.r4.s64 = ctx.r1.s64 + 556;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,556
	ctx.r3.s64 = ctx.r1.s64 + 556;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,316
	ctx.r3.s64 = ctx.r1.s64 + 316;
	// addi r4,r11,7972
	ctx.r4.s64 = r11.s64 + 7972;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32090
	r11.s64 = -2103050240;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-19992
	ctx.r5.s64 = r11.s64 + -19992;
	// addi r4,r1,316
	ctx.r4.s64 = ctx.r1.s64 + 316;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,316
	ctx.r3.s64 = ctx.r1.s64 + 316;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,740
	ctx.r3.s64 = ctx.r1.s64 + 740;
	// addi r4,r11,7940
	ctx.r4.s64 = r11.s64 + 7940;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32090
	r11.s64 = -2103050240;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-9256
	ctx.r5.s64 = r11.s64 + -9256;
	// addi r4,r1,740
	ctx.r4.s64 = ctx.r1.s64 + 740;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,740
	ctx.r3.s64 = ctx.r1.s64 + 740;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,324
	ctx.r3.s64 = ctx.r1.s64 + 324;
	// addi r4,r11,7908
	ctx.r4.s64 = r11.s64 + 7908;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32090
	r11.s64 = -2103050240;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-6144
	ctx.r5.s64 = r11.s64 + -6144;
	// addi r4,r1,324
	ctx.r4.s64 = ctx.r1.s64 + 324;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,324
	ctx.r3.s64 = ctx.r1.s64 + 324;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,564
	ctx.r3.s64 = ctx.r1.s64 + 564;
	// addi r4,r11,7880
	ctx.r4.s64 = r11.s64 + 7880;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32090
	r11.s64 = -2103050240;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-14984
	ctx.r5.s64 = r11.s64 + -14984;
	// addi r4,r1,564
	ctx.r4.s64 = ctx.r1.s64 + 564;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,564
	ctx.r3.s64 = ctx.r1.s64 + 564;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,332
	ctx.r3.s64 = ctx.r1.s64 + 332;
	// addi r4,r11,7864
	ctx.r4.s64 = r11.s64 + 7864;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32090
	r11.s64 = -2103050240;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,29872
	ctx.r5.s64 = r11.s64 + 29872;
	// addi r4,r1,332
	ctx.r4.s64 = ctx.r1.s64 + 332;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,332
	ctx.r3.s64 = ctx.r1.s64 + 332;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,684
	ctx.r3.s64 = ctx.r1.s64 + 684;
	// addi r4,r11,7844
	ctx.r4.s64 = r11.s64 + 7844;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32089
	r11.s64 = -2102984704;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-10632
	ctx.r5.s64 = r11.s64 + -10632;
	// addi r4,r1,684
	ctx.r4.s64 = ctx.r1.s64 + 684;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,684
	ctx.r3.s64 = ctx.r1.s64 + 684;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,340
	ctx.r3.s64 = ctx.r1.s64 + 340;
	// addi r4,r11,7820
	ctx.r4.s64 = r11.s64 + 7820;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32089
	r11.s64 = -2102984704;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-13368
	ctx.r5.s64 = r11.s64 + -13368;
	// addi r4,r1,340
	ctx.r4.s64 = ctx.r1.s64 + 340;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,340
	ctx.r3.s64 = ctx.r1.s64 + 340;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,572
	ctx.r3.s64 = ctx.r1.s64 + 572;
	// addi r4,r11,7796
	ctx.r4.s64 = r11.s64 + 7796;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32089
	r11.s64 = -2102984704;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-3696
	ctx.r5.s64 = r11.s64 + -3696;
	// addi r4,r1,572
	ctx.r4.s64 = ctx.r1.s64 + 572;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,572
	ctx.r3.s64 = ctx.r1.s64 + 572;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// addi r4,r11,7784
	ctx.r4.s64 = r11.s64 + 7784;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32085
	r11.s64 = -2102722560;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,17152
	ctx.r5.s64 = r11.s64 + 17152;
	// addi r4,r1,348
	ctx.r4.s64 = ctx.r1.s64 + 348;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,772
	ctx.r3.s64 = ctx.r1.s64 + 772;
	// addi r4,r11,7760
	ctx.r4.s64 = r11.s64 + 7760;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32085
	r11.s64 = -2102722560;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,29800
	ctx.r5.s64 = r11.s64 + 29800;
	// addi r4,r1,772
	ctx.r4.s64 = ctx.r1.s64 + 772;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,772
	ctx.r3.s64 = ctx.r1.s64 + 772;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,356
	ctx.r3.s64 = ctx.r1.s64 + 356;
	// addi r4,r11,7740
	ctx.r4.s64 = r11.s64 + 7740;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32084
	r11.s64 = -2102657024;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,704
	ctx.r5.s64 = r11.s64 + 704;
	// addi r4,r1,356
	ctx.r4.s64 = ctx.r1.s64 + 356;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,356
	ctx.r3.s64 = ctx.r1.s64 + 356;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,580
	ctx.r3.s64 = ctx.r1.s64 + 580;
	// addi r4,r11,7724
	ctx.r4.s64 = r11.s64 + 7724;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32083
	r11.s64 = -2102591488;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-17400
	ctx.r5.s64 = r11.s64 + -17400;
	// addi r4,r1,580
	ctx.r4.s64 = ctx.r1.s64 + 580;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,580
	ctx.r3.s64 = ctx.r1.s64 + 580;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,364
	ctx.r3.s64 = ctx.r1.s64 + 364;
	// addi r4,r11,7696
	ctx.r4.s64 = r11.s64 + 7696;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32082
	r11.s64 = -2102525952;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-16896
	ctx.r5.s64 = r11.s64 + -16896;
	// addi r4,r1,364
	ctx.r4.s64 = ctx.r1.s64 + 364;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,364
	ctx.r3.s64 = ctx.r1.s64 + 364;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,692
	ctx.r3.s64 = ctx.r1.s64 + 692;
	// addi r4,r11,7664
	ctx.r4.s64 = r11.s64 + 7664;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32083
	r11.s64 = -2102591488;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,25944
	ctx.r5.s64 = r11.s64 + 25944;
	// addi r4,r1,692
	ctx.r4.s64 = ctx.r1.s64 + 692;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,692
	ctx.r3.s64 = ctx.r1.s64 + 692;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,372
	ctx.r3.s64 = ctx.r1.s64 + 372;
	// addi r4,r11,7636
	ctx.r4.s64 = r11.s64 + 7636;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32083
	r11.s64 = -2102591488;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,15904
	ctx.r5.s64 = r11.s64 + 15904;
	// addi r4,r1,372
	ctx.r4.s64 = ctx.r1.s64 + 372;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,372
	ctx.r3.s64 = ctx.r1.s64 + 372;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,588
	ctx.r3.s64 = ctx.r1.s64 + 588;
	// addi r4,r11,7620
	ctx.r4.s64 = r11.s64 + 7620;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32080
	r11.s64 = -2102394880;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27584
	ctx.r5.s64 = r11.s64 + -27584;
	// addi r4,r1,588
	ctx.r4.s64 = ctx.r1.s64 + 588;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,588
	ctx.r3.s64 = ctx.r1.s64 + 588;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,380
	ctx.r3.s64 = ctx.r1.s64 + 380;
	// addi r4,r11,7596
	ctx.r4.s64 = r11.s64 + 7596;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32079
	r11.s64 = -2102329344;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,26208
	ctx.r5.s64 = r11.s64 + 26208;
	// addi r4,r1,380
	ctx.r4.s64 = ctx.r1.s64 + 380;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,380
	ctx.r3.s64 = ctx.r1.s64 + 380;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// addi r4,r11,7588
	ctx.r4.s64 = r11.s64 + 7588;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32159
	r11.s64 = -2107572224;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-31864
	ctx.r5.s64 = r11.s64 + -31864;
	// addi r4,r1,748
	ctx.r4.s64 = ctx.r1.s64 + 748;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,388
	ctx.r3.s64 = ctx.r1.s64 + 388;
	// addi r4,r11,-13876
	ctx.r4.s64 = r11.s64 + -13876;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r11,-32135
	r11.s64 = -2105999360;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,-21912
	ctx.r5.s64 = r11.s64 + -21912;
	// addi r4,r1,388
	ctx.r4.s64 = ctx.r1.s64 + 388;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,388
	ctx.r3.s64 = ctx.r1.s64 + 388;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,596
	ctx.r3.s64 = ctx.r1.s64 + 596;
	// addi r4,r11,7576
	ctx.r4.s64 = r11.s64 + 7576;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32135
	r11.s64 = -2105999360;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-15904
	ctx.r5.s64 = r11.s64 + -15904;
	// addi r4,r1,596
	ctx.r4.s64 = ctx.r1.s64 + 596;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,596
	ctx.r3.s64 = ctx.r1.s64 + 596;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,396
	ctx.r3.s64 = ctx.r1.s64 + 396;
	// addi r4,r11,-13596
	ctx.r4.s64 = r11.s64 + -13596;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32135
	r11.s64 = -2105999360;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-20184
	ctx.r5.s64 = r11.s64 + -20184;
	// addi r4,r1,396
	ctx.r4.s64 = ctx.r1.s64 + 396;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,396
	ctx.r3.s64 = ctx.r1.s64 + 396;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,700
	ctx.r3.s64 = ctx.r1.s64 + 700;
	// addi r4,r11,-13444
	ctx.r4.s64 = r11.s64 + -13444;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32135
	r11.s64 = -2105999360;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-17768
	ctx.r5.s64 = r11.s64 + -17768;
	// addi r4,r1,700
	ctx.r4.s64 = ctx.r1.s64 + 700;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,700
	ctx.r3.s64 = ctx.r1.s64 + 700;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,404
	ctx.r3.s64 = ctx.r1.s64 + 404;
	// addi r4,r11,6932
	ctx.r4.s64 = r11.s64 + 6932;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32160
	r11.s64 = -2107637760;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-24592
	ctx.r5.s64 = r11.s64 + -24592;
	// addi r4,r1,404
	ctx.r4.s64 = ctx.r1.s64 + 404;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,404
	ctx.r3.s64 = ctx.r1.s64 + 404;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,604
	ctx.r3.s64 = ctx.r1.s64 + 604;
	// addi r4,r11,7560
	ctx.r4.s64 = r11.s64 + 7560;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,16872
	ctx.r5.s64 = r11.s64 + 16872;
	// addi r4,r1,604
	ctx.r4.s64 = ctx.r1.s64 + 604;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,604
	ctx.r3.s64 = ctx.r1.s64 + 604;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,412
	ctx.r3.s64 = ctx.r1.s64 + 412;
	// addi r4,r11,7548
	ctx.r4.s64 = r11.s64 + 7548;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-31680
	ctx.r5.s64 = r11.s64 + -31680;
	// addi r4,r1,412
	ctx.r4.s64 = ctx.r1.s64 + 412;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,412
	ctx.r3.s64 = ctx.r1.s64 + 412;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,788
	ctx.r3.s64 = ctx.r1.s64 + 788;
	// addi r4,r11,4716
	ctx.r4.s64 = r11.s64 + 4716;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-25784
	ctx.r5.s64 = r11.s64 + -25784;
	// addi r4,r1,788
	ctx.r4.s64 = ctx.r1.s64 + 788;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,788
	ctx.r3.s64 = ctx.r1.s64 + 788;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,420
	ctx.r3.s64 = ctx.r1.s64 + 420;
	// addi r4,r11,4692
	ctx.r4.s64 = r11.s64 + 4692;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32153
	r11.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,18928
	ctx.r5.s64 = r11.s64 + 18928;
	// addi r4,r1,420
	ctx.r4.s64 = ctx.r1.s64 + 420;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,420
	ctx.r3.s64 = ctx.r1.s64 + 420;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,612
	ctx.r3.s64 = ctx.r1.s64 + 612;
	// addi r4,r11,7540
	ctx.r4.s64 = r11.s64 + 7540;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-31656
	ctx.r5.s64 = r11.s64 + -31656;
	// addi r4,r1,612
	ctx.r4.s64 = ctx.r1.s64 + 612;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,612
	ctx.r3.s64 = ctx.r1.s64 + 612;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,428
	ctx.r3.s64 = ctx.r1.s64 + 428;
	// addi r4,r11,7524
	ctx.r4.s64 = r11.s64 + 7524;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28792
	ctx.r5.s64 = r11.s64 + -28792;
	// addi r4,r1,428
	ctx.r4.s64 = ctx.r1.s64 + 428;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,428
	ctx.r3.s64 = ctx.r1.s64 + 428;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,708
	ctx.r3.s64 = ctx.r1.s64 + 708;
	// addi r4,r11,7508
	ctx.r4.s64 = r11.s64 + 7508;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-23312
	ctx.r5.s64 = r11.s64 + -23312;
	// addi r4,r1,708
	ctx.r4.s64 = ctx.r1.s64 + 708;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,708
	ctx.r3.s64 = ctx.r1.s64 + 708;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,436
	ctx.r3.s64 = ctx.r1.s64 + 436;
	// addi r4,r11,7492
	ctx.r4.s64 = r11.s64 + 7492;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-19136
	ctx.r5.s64 = r11.s64 + -19136;
	// addi r4,r1,436
	ctx.r4.s64 = ctx.r1.s64 + 436;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,436
	ctx.r3.s64 = ctx.r1.s64 + 436;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,620
	ctx.r3.s64 = ctx.r1.s64 + 620;
	// addi r4,r11,7480
	ctx.r4.s64 = r11.s64 + 7480;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32158
	r11.s64 = -2107506688;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-14184
	ctx.r5.s64 = r11.s64 + -14184;
	// addi r4,r1,620
	ctx.r4.s64 = ctx.r1.s64 + 620;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,620
	ctx.r3.s64 = ctx.r1.s64 + 620;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,7464
	ctx.r4.s64 = r11.s64 + 7464;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-14336
	ctx.r5.s64 = r11.s64 + -14336;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,7440
	ctx.r4.s64 = r11.s64 + 7440;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-13904
	ctx.r5.s64 = r11.s64 + -13904;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,7424
	ctx.r4.s64 = r11.s64 + 7424;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-9536
	ctx.r5.s64 = r11.s64 + -9536;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,2072
	ctx.r4.s64 = r11.s64 + 2072;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32158
	r11.s64 = -2107506688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-14296
	ctx.r5.s64 = r11.s64 + -14296;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,7404
	ctx.r4.s64 = r11.s64 + 7404;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-4056
	ctx.r5.s64 = r11.s64 + -4056;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r4,r11,7384
	ctx.r4.s64 = r11.s64 + 7384;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,14416
	ctx.r5.s64 = r11.s64 + 14416;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,7368
	ctx.r4.s64 = r11.s64 + 7368;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,17336
	ctx.r5.s64 = r11.s64 + 17336;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// addi r4,r11,7356
	ctx.r4.s64 = r11.s64 + 7356;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-10712
	ctx.r5.s64 = r11.s64 + -10712;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,7344
	ctx.r4.s64 = r11.s64 + 7344;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-10656
	ctx.r5.s64 = r11.s64 + -10656;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addi r4,r11,7332
	ctx.r4.s64 = r11.s64 + 7332;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-10600
	ctx.r5.s64 = r11.s64 + -10600;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,7320
	ctx.r4.s64 = r11.s64 + 7320;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-10544
	ctx.r5.s64 = r11.s64 + -10544;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// addi r4,r11,7300
	ctx.r4.s64 = r11.s64 + 7300;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32141
	r11.s64 = -2106392576;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-12400
	ctx.r5.s64 = r11.s64 + -12400;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,7284
	ctx.r4.s64 = r11.s64 + 7284;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,2352
	ctx.r5.s64 = r11.s64 + 2352;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// addi r4,r11,7272
	ctx.r4.s64 = r11.s64 + 7272;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,26832
	ctx.r5.s64 = r11.s64 + 26832;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,7260
	ctx.r4.s64 = r11.s64 + 7260;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32161
	r11.s64 = -2107703296;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-29152
	ctx.r5.s64 = r11.s64 + -29152;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// addi r4,r11,7244
	ctx.r4.s64 = r11.s64 + 7244;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32137
	r11.s64 = -2106130432;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-29544
	ctx.r5.s64 = r11.s64 + -29544;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,7220
	ctx.r4.s64 = r11.s64 + 7220;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,28288
	ctx.r5.s64 = r11.s64 + 28288;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// addi r4,r11,7208
	ctx.r4.s64 = r11.s64 + 7208;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32137
	r11.s64 = -2106130432;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-16264
	ctx.r5.s64 = r11.s64 + -16264;
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,7196
	ctx.r4.s64 = r11.s64 + 7196;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32137
	r11.s64 = -2106130432;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-13560
	ctx.r5.s64 = r11.s64 + -13560;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// addi r4,r11,7180
	ctx.r4.s64 = r11.s64 + 7180;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32137
	r11.s64 = -2106130432;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-10976
	ctx.r5.s64 = r11.s64 + -10976;
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,7164
	ctx.r4.s64 = r11.s64 + 7164;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32137
	r11.s64 = -2106130432;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-10544
	ctx.r5.s64 = r11.s64 + -10544;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// addi r4,r11,7148
	ctx.r4.s64 = r11.s64 + 7148;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32137
	r11.s64 = -2106130432;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-6728
	ctx.r5.s64 = r11.s64 + -6728;
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,7136
	ctx.r4.s64 = r11.s64 + 7136;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32137
	r11.s64 = -2106130432;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-3496
	ctx.r5.s64 = r11.s64 + -3496;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// addi r4,r11,7124
	ctx.r4.s64 = r11.s64 + 7124;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32137
	r11.s64 = -2106130432;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-3440
	ctx.r5.s64 = r11.s64 + -3440;
	// addi r4,r1,264
	ctx.r4.s64 = ctx.r1.s64 + 264;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,7112
	ctx.r4.s64 = r11.s64 + 7112;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32137
	r11.s64 = -2106130432;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-3384
	ctx.r5.s64 = r11.s64 + -3384;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// addi r4,r11,7100
	ctx.r4.s64 = r11.s64 + 7100;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32137
	r11.s64 = -2106130432;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-1416
	ctx.r5.s64 = r11.s64 + -1416;
	// addi r4,r1,280
	ctx.r4.s64 = ctx.r1.s64 + 280;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,7080
	ctx.r4.s64 = r11.s64 + 7080;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32137
	r11.s64 = -2106130432;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,4144
	ctx.r5.s64 = r11.s64 + 4144;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// addi r4,r11,7060
	ctx.r4.s64 = r11.s64 + 7060;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32137
	r11.s64 = -2106130432;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,6544
	ctx.r5.s64 = r11.s64 + 6544;
	// addi r4,r1,296
	ctx.r4.s64 = ctx.r1.s64 + 296;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r11,7048
	ctx.r4.s64 = r11.s64 + 7048;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-1344
	ctx.r5.s64 = r11.s64 + -1344;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// addi r4,r11,7028
	ctx.r4.s64 = r11.s64 + 7028;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32158
	r11.s64 = -2107506688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-25000
	ctx.r5.s64 = r11.s64 + -25000;
	// addi r4,r1,312
	ctx.r4.s64 = ctx.r1.s64 + 312;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r11,7004
	ctx.r4.s64 = r11.s64 + 7004;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32158
	r11.s64 = -2107506688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-24568
	ctx.r5.s64 = r11.s64 + -24568;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// addi r4,r11,6992
	ctx.r4.s64 = r11.s64 + 6992;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32137
	r11.s64 = -2106130432;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,11656
	ctx.r5.s64 = r11.s64 + 11656;
	// addi r4,r1,328
	ctx.r4.s64 = ctx.r1.s64 + 328;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,6972
	ctx.r4.s64 = r11.s64 + 6972;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32137
	r11.s64 = -2106130432;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,17096
	ctx.r5.s64 = r11.s64 + 17096;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// addi r4,r11,6952
	ctx.r4.s64 = r11.s64 + 6952;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32137
	r11.s64 = -2106130432;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,22344
	ctx.r5.s64 = r11.s64 + 22344;
	// addi r4,r1,344
	ctx.r4.s64 = ctx.r1.s64 + 344;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r4,r11,6936
	ctx.r4.s64 = r11.s64 + 6936;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32137
	r11.s64 = -2106130432;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,26392
	ctx.r5.s64 = r11.s64 + 26392;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// addi r4,r11,6916
	ctx.r4.s64 = r11.s64 + 6916;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32137
	r11.s64 = -2106130432;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,29624
	ctx.r5.s64 = r11.s64 + 29624;
	// addi r4,r1,360
	ctx.r4.s64 = ctx.r1.s64 + 360;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,6900
	ctx.r4.s64 = r11.s64 + 6900;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-31736
	ctx.r5.s64 = r11.s64 + -31736;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// addi r4,r11,6884
	ctx.r4.s64 = r11.s64 + 6884;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-13472
	ctx.r5.s64 = r11.s64 + -13472;
	// addi r4,r1,376
	ctx.r4.s64 = ctx.r1.s64 + 376;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r4,r11,6860
	ctx.r4.s64 = r11.s64 + 6860;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-13040
	ctx.r5.s64 = r11.s64 + -13040;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,392
	ctx.r3.s64 = ctx.r1.s64 + 392;
	// addi r4,r11,6840
	ctx.r4.s64 = r11.s64 + 6840;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-29408
	ctx.r5.s64 = r11.s64 + -29408;
	// addi r4,r1,392
	ctx.r4.s64 = ctx.r1.s64 + 392;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,392
	ctx.r3.s64 = ctx.r1.s64 + 392;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r4,r11,6832
	ctx.r4.s64 = r11.s64 + 6832;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,-25032
	ctx.r5.s64 = r11.s64 + -25032;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// addi r4,r11,6820
	ctx.r4.s64 = r11.s64 + 6820;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-18968
	ctx.r5.s64 = r11.s64 + -18968;
	// addi r4,r1,408
	ctx.r4.s64 = ctx.r1.s64 + 408;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r4,r11,6808
	ctx.r4.s64 = r11.s64 + 6808;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-14872
	ctx.r5.s64 = r11.s64 + -14872;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,424
	ctx.r3.s64 = ctx.r1.s64 + 424;
	// addi r4,r11,6796
	ctx.r4.s64 = r11.s64 + 6796;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7304
	ctx.r5.s64 = r11.s64 + -7304;
	// addi r4,r1,424
	ctx.r4.s64 = ctx.r1.s64 + 424;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,424
	ctx.r3.s64 = ctx.r1.s64 + 424;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// addi r4,r11,6776
	ctx.r4.s64 = r11.s64 + 6776;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,4664
	ctx.r5.s64 = r11.s64 + 4664;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,440
	ctx.r3.s64 = ctx.r1.s64 + 440;
	// addi r4,r11,6756
	ctx.r4.s64 = r11.s64 + 6756;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,5104
	ctx.r5.s64 = r11.s64 + 5104;
	// addi r4,r1,440
	ctx.r4.s64 = ctx.r1.s64 + 440;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,440
	ctx.r3.s64 = ctx.r1.s64 + 440;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r4,r11,6744
	ctx.r4.s64 = r11.s64 + 6744;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,14184
	ctx.r5.s64 = r11.s64 + 14184;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,456
	ctx.r3.s64 = ctx.r1.s64 + 456;
	// addi r4,r11,6728
	ctx.r4.s64 = r11.s64 + 6728;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,24272
	ctx.r5.s64 = r11.s64 + 24272;
	// addi r4,r1,456
	ctx.r4.s64 = ctx.r1.s64 + 456;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,456
	ctx.r3.s64 = ctx.r1.s64 + 456;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// addi r4,r11,6708
	ctx.r4.s64 = r11.s64 + 6708;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,32208
	ctx.r5.s64 = r11.s64 + 32208;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// addi r4,r11,6688
	ctx.r4.s64 = r11.s64 + 6688;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,27784
	ctx.r5.s64 = r11.s64 + 27784;
	// addi r4,r1,472
	ctx.r4.s64 = ctx.r1.s64 + 472;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// addi r4,r11,6672
	ctx.r4.s64 = r11.s64 + 6672;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-4904
	ctx.r5.s64 = r11.s64 + -4904;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,488
	ctx.r3.s64 = ctx.r1.s64 + 488;
	// addi r4,r11,6656
	ctx.r4.s64 = r11.s64 + 6656;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-4848
	ctx.r5.s64 = r11.s64 + -4848;
	// addi r4,r1,488
	ctx.r4.s64 = ctx.r1.s64 + 488;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,488
	ctx.r3.s64 = ctx.r1.s64 + 488;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// addi r4,r11,6640
	ctx.r4.s64 = r11.s64 + 6640;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-4792
	ctx.r5.s64 = r11.s64 + -4792;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,504
	ctx.r3.s64 = ctx.r1.s64 + 504;
	// addi r4,r11,6628
	ctx.r4.s64 = r11.s64 + 6628;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-4736
	ctx.r5.s64 = r11.s64 + -4736;
	// addi r4,r1,504
	ctx.r4.s64 = ctx.r1.s64 + 504;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,504
	ctx.r3.s64 = ctx.r1.s64 + 504;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// addi r4,r11,6616
	ctx.r4.s64 = r11.s64 + 6616;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-4680
	ctx.r5.s64 = r11.s64 + -4680;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,520
	ctx.r3.s64 = ctx.r1.s64 + 520;
	// addi r4,r11,6604
	ctx.r4.s64 = r11.s64 + 6604;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-4624
	ctx.r5.s64 = r11.s64 + -4624;
	// addi r4,r1,520
	ctx.r4.s64 = ctx.r1.s64 + 520;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,520
	ctx.r3.s64 = ctx.r1.s64 + 520;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// addi r4,r11,6592
	ctx.r4.s64 = r11.s64 + 6592;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-4568
	ctx.r5.s64 = r11.s64 + -4568;
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,536
	ctx.r3.s64 = ctx.r1.s64 + 536;
	// addi r4,r11,6580
	ctx.r4.s64 = r11.s64 + 6580;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-4512
	ctx.r5.s64 = r11.s64 + -4512;
	// addi r4,r1,536
	ctx.r4.s64 = ctx.r1.s64 + 536;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,536
	ctx.r3.s64 = ctx.r1.s64 + 536;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// addi r4,r11,6564
	ctx.r4.s64 = r11.s64 + 6564;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-4456
	ctx.r5.s64 = r11.s64 + -4456;
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,552
	ctx.r3.s64 = ctx.r1.s64 + 552;
	// addi r4,r11,6544
	ctx.r4.s64 = r11.s64 + 6544;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-4400
	ctx.r5.s64 = r11.s64 + -4400;
	// addi r4,r1,552
	ctx.r4.s64 = ctx.r1.s64 + 552;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,552
	ctx.r3.s64 = ctx.r1.s64 + 552;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// addi r4,r11,6524
	ctx.r4.s64 = r11.s64 + 6524;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-3896
	ctx.r5.s64 = r11.s64 + -3896;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,568
	ctx.r3.s64 = ctx.r1.s64 + 568;
	// addi r4,r11,6504
	ctx.r4.s64 = r11.s64 + 6504;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-3416
	ctx.r5.s64 = r11.s64 + -3416;
	// addi r4,r1,568
	ctx.r4.s64 = ctx.r1.s64 + 568;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,568
	ctx.r3.s64 = ctx.r1.s64 + 568;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// addi r4,r11,6488
	ctx.r4.s64 = r11.s64 + 6488;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-2912
	ctx.r5.s64 = r11.s64 + -2912;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,584
	ctx.r3.s64 = ctx.r1.s64 + 584;
	// addi r4,r11,6472
	ctx.r4.s64 = r11.s64 + 6472;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-2856
	ctx.r5.s64 = r11.s64 + -2856;
	// addi r4,r1,584
	ctx.r4.s64 = ctx.r1.s64 + 584;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,584
	ctx.r3.s64 = ctx.r1.s64 + 584;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// addi r4,r11,6456
	ctx.r4.s64 = r11.s64 + 6456;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-2800
	ctx.r5.s64 = r11.s64 + -2800;
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,600
	ctx.r3.s64 = ctx.r1.s64 + 600;
	// addi r4,r11,6440
	ctx.r4.s64 = r11.s64 + 6440;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-2744
	ctx.r5.s64 = r11.s64 + -2744;
	// addi r4,r1,600
	ctx.r4.s64 = ctx.r1.s64 + 600;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,600
	ctx.r3.s64 = ctx.r1.s64 + 600;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// addi r4,r11,6424
	ctx.r4.s64 = r11.s64 + 6424;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-2688
	ctx.r5.s64 = r11.s64 + -2688;
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,616
	ctx.r3.s64 = ctx.r1.s64 + 616;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,-2632
	ctx.r5.s64 = r11.s64 + -2632;
	// addi r4,r1,616
	ctx.r4.s64 = ctx.r1.s64 + 616;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,616
	ctx.r3.s64 = ctx.r1.s64 + 616;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// addi r4,r11,6392
	ctx.r4.s64 = r11.s64 + 6392;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-2576
	ctx.r5.s64 = r11.s64 + -2576;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,632
	ctx.r3.s64 = ctx.r1.s64 + 632;
	// addi r4,r11,6380
	ctx.r4.s64 = r11.s64 + 6380;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-2520
	ctx.r5.s64 = r11.s64 + -2520;
	// addi r4,r1,632
	ctx.r4.s64 = ctx.r1.s64 + 632;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,632
	ctx.r3.s64 = ctx.r1.s64 + 632;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// addi r4,r11,6368
	ctx.r4.s64 = r11.s64 + 6368;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-2464
	ctx.r5.s64 = r11.s64 + -2464;
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,648
	ctx.r3.s64 = ctx.r1.s64 + 648;
	// addi r4,r11,6356
	ctx.r4.s64 = r11.s64 + 6356;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-2408
	ctx.r5.s64 = r11.s64 + -2408;
	// addi r4,r1,648
	ctx.r4.s64 = ctx.r1.s64 + 648;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,648
	ctx.r3.s64 = ctx.r1.s64 + 648;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// addi r4,r11,6344
	ctx.r4.s64 = r11.s64 + 6344;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-2352
	ctx.r5.s64 = r11.s64 + -2352;
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,664
	ctx.r3.s64 = ctx.r1.s64 + 664;
	// addi r4,r11,6332
	ctx.r4.s64 = r11.s64 + 6332;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-2296
	ctx.r5.s64 = r11.s64 + -2296;
	// addi r4,r1,664
	ctx.r4.s64 = ctx.r1.s64 + 664;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,664
	ctx.r3.s64 = ctx.r1.s64 + 664;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// addi r4,r11,6320
	ctx.r4.s64 = r11.s64 + 6320;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-2240
	ctx.r5.s64 = r11.s64 + -2240;
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,680
	ctx.r3.s64 = ctx.r1.s64 + 680;
	// addi r4,r11,6308
	ctx.r4.s64 = r11.s64 + 6308;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-2184
	ctx.r5.s64 = r11.s64 + -2184;
	// addi r4,r1,680
	ctx.r4.s64 = ctx.r1.s64 + 680;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,680
	ctx.r3.s64 = ctx.r1.s64 + 680;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// addi r4,r11,6296
	ctx.r4.s64 = r11.s64 + 6296;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-2128
	ctx.r5.s64 = r11.s64 + -2128;
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,696
	ctx.r3.s64 = ctx.r1.s64 + 696;
	// addi r4,r11,6284
	ctx.r4.s64 = r11.s64 + 6284;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-2072
	ctx.r5.s64 = r11.s64 + -2072;
	// addi r4,r1,696
	ctx.r4.s64 = ctx.r1.s64 + 696;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,696
	ctx.r3.s64 = ctx.r1.s64 + 696;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// addi r4,r11,6272
	ctx.r4.s64 = r11.s64 + 6272;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-2016
	ctx.r5.s64 = r11.s64 + -2016;
	// addi r4,r1,704
	ctx.r4.s64 = ctx.r1.s64 + 704;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,712
	ctx.r3.s64 = ctx.r1.s64 + 712;
	// addi r4,r11,6260
	ctx.r4.s64 = r11.s64 + 6260;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-1960
	ctx.r5.s64 = r11.s64 + -1960;
	// addi r4,r1,712
	ctx.r4.s64 = ctx.r1.s64 + 712;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,712
	ctx.r3.s64 = ctx.r1.s64 + 712;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// addi r4,r11,6248
	ctx.r4.s64 = r11.s64 + 6248;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-1904
	ctx.r5.s64 = r11.s64 + -1904;
	// addi r4,r1,720
	ctx.r4.s64 = ctx.r1.s64 + 720;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,728
	ctx.r3.s64 = ctx.r1.s64 + 728;
	// addi r4,r11,6236
	ctx.r4.s64 = r11.s64 + 6236;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-1848
	ctx.r5.s64 = r11.s64 + -1848;
	// addi r4,r1,728
	ctx.r4.s64 = ctx.r1.s64 + 728;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,728
	ctx.r3.s64 = ctx.r1.s64 + 728;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// addi r4,r11,6224
	ctx.r4.s64 = r11.s64 + 6224;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-1792
	ctx.r5.s64 = r11.s64 + -1792;
	// addi r4,r1,736
	ctx.r4.s64 = ctx.r1.s64 + 736;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,744
	ctx.r3.s64 = ctx.r1.s64 + 744;
	// addi r4,r11,6212
	ctx.r4.s64 = r11.s64 + 6212;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-1736
	ctx.r5.s64 = r11.s64 + -1736;
	// addi r4,r1,744
	ctx.r4.s64 = ctx.r1.s64 + 744;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,744
	ctx.r3.s64 = ctx.r1.s64 + 744;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// addi r4,r11,6200
	ctx.r4.s64 = r11.s64 + 6200;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-1680
	ctx.r5.s64 = r11.s64 + -1680;
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,760
	ctx.r3.s64 = ctx.r1.s64 + 760;
	// addi r4,r11,6188
	ctx.r4.s64 = r11.s64 + 6188;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-1624
	ctx.r5.s64 = r11.s64 + -1624;
	// addi r4,r1,760
	ctx.r4.s64 = ctx.r1.s64 + 760;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,760
	ctx.r3.s64 = ctx.r1.s64 + 760;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// addi r4,r11,6176
	ctx.r4.s64 = r11.s64 + 6176;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-1568
	ctx.r5.s64 = r11.s64 + -1568;
	// addi r4,r1,768
	ctx.r4.s64 = ctx.r1.s64 + 768;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,776
	ctx.r3.s64 = ctx.r1.s64 + 776;
	// addi r4,r11,6160
	ctx.r4.s64 = r11.s64 + 6160;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-1512
	ctx.r5.s64 = r11.s64 + -1512;
	// addi r4,r1,776
	ctx.r4.s64 = ctx.r1.s64 + 776;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,776
	ctx.r3.s64 = ctx.r1.s64 + 776;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// addi r4,r11,6144
	ctx.r4.s64 = r11.s64 + 6144;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-1456
	ctx.r5.s64 = r11.s64 + -1456;
	// addi r4,r1,784
	ctx.r4.s64 = ctx.r1.s64 + 784;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,792
	ctx.r3.s64 = ctx.r1.s64 + 792;
	// addi r4,r11,6128
	ctx.r4.s64 = r11.s64 + 6128;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32152
	r11.s64 = -2107113472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-1400
	ctx.r5.s64 = r11.s64 + -1400;
	// addi r4,r1,792
	ctx.r4.s64 = ctx.r1.s64 + 792;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,792
	ctx.r3.s64 = ctx.r1.s64 + 792;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// addi r4,r11,-840
	ctx.r4.s64 = r11.s64 + -840;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32134
	r11.s64 = -2105933824;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-11568
	ctx.r5.s64 = r11.s64 + -11568;
	// addi r4,r1,800
	ctx.r4.s64 = ctx.r1.s64 + 800;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a21f8
	sub_827A21F8(ctx, base);
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827ACB98"))) PPC_WEAK_FUNC(sub_827ACB98);
PPC_FUNC_IMPL(__imp__sub_827ACB98) {
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
	// bl 0x82729528
	sub_82729528(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// bl 0x82729528
	sub_82729528(ctx, base);
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

__attribute__((alias("__imp__sub_827ACBE8"))) PPC_WEAK_FUNC(sub_827ACBE8);
PPC_FUNC_IMPL(__imp__sub_827ACBE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// stb r5,44(r31)
	PPC_STORE_U8(r31.u32 + 44, ctx.r5.u8);
	// blt cr6,0x827acc38
	if (cr6.lt) goto loc_827ACC38;
	// beq cr6,0x827acc1c
	if (cr6.eq) goto loc_827ACC1C;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bge cr6,0x827acc50
	if (!cr6.lt) goto loc_827ACC50;
	// bl 0x827a9840
	sub_827A9840(ctx, base);
	// b 0x827acc50
	goto loc_827ACC50;
loc_827ACC1C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a22d0
	sub_827A22D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a57d8
	sub_827A57D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a9ad0
	sub_827A9AD0(ctx, base);
	// b 0x827acc50
	goto loc_827ACC50;
loc_827ACC38:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a22d0
	sub_827A22D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a9ad0
	sub_827A9AD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a57d8
	sub_827A57D8(ctx, base);
loc_827ACC50:
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

__attribute__((alias("__imp__sub_827ACC68"))) PPC_WEAK_FUNC(sub_827ACC68);
PPC_FUNC_IMPL(__imp__sub_827ACC68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-20508
	r11.s64 = r11.s64 + -20508;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827ACC78"))) PPC_WEAK_FUNC(sub_827ACC78);
PPC_FUNC_IMPL(__imp__sub_827ACC78) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827ACC80"))) PPC_WEAK_FUNC(sub_827ACC80);
PPC_FUNC_IMPL(__imp__sub_827ACC80) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x824933c0
	sub_824933C0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827ACCE0"))) PPC_WEAK_FUNC(sub_827ACCE0);
PPC_FUNC_IMPL(__imp__sub_827ACCE0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x827acd30
	goto loc_827ACD30;
loc_827ACD08:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x827acd44
	if (!cr0.eq) goto loc_827ACD44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bl 0x827e1578
	sub_827E1578(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_827ACD30:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x827acd08
	if (!cr6.eq) goto loc_827ACD08;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_827ACD3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_827ACD44:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x827acd3c
	goto loc_827ACD3C;
}

__attribute__((alias("__imp__sub_827ACD50"))) PPC_WEAK_FUNC(sub_827ACD50);
PPC_FUNC_IMPL(__imp__sub_827ACD50) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x827acda4
	goto loc_827ACDA4;
loc_827ACD78:
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x827acdb8
	if (!cr0.eq) goto loc_827ACDB8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bl 0x827e1578
	sub_827E1578(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_827ACDA4:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x827acd78
	if (!cr6.eq) goto loc_827ACD78;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_827ACDB0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_827ACDB8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x827acdb0
	goto loc_827ACDB0;
}

__attribute__((alias("__imp__sub_827ACDC0"))) PPC_WEAK_FUNC(sub_827ACDC0);
PPC_FUNC_IMPL(__imp__sub_827ACDC0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x827ace00
	goto loc_827ACE00;
loc_827ACDE4:
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 20);
	// stb r10,21(r11)
	PPC_STORE_U8(r11.u32 + 21, ctx.r10.u8);
	// bl 0x827e1578
	sub_827E1578(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_827ACE00:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x827acde4
	if (!cr6.eq) goto loc_827ACDE4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827ACE20"))) PPC_WEAK_FUNC(sub_827ACE20);
PPC_FUNC_IMPL(__imp__sub_827ACE20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,25(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x827ace60
	if (!cr6.eq) goto loc_827ACE60;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_827ACE38:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x827ace4c
	if (!cr6.lt) goto loc_827ACE4C;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x827ace54
	goto loc_827ACE54;
loc_827ACE4C:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_827ACE54:
	// lbz r8,25(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x827ace38
	if (cr6.eq) goto loc_827ACE38;
loc_827ACE60:
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x827ace88
	if (cr6.eq) goto loc_827ACE88;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x827ace88
	if (cr6.lt) goto loc_827ACE88;
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// b 0x827ace90
	goto loc_827ACE90;
loc_827ACE88:
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, r11.u32);
	// addi r11,r1,-12
	r11.s64 = ctx.r1.s64 + -12;
loc_827ACE90:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827ACEA0"))) PPC_WEAK_FUNC(sub_827ACEA0);
PPC_FUNC_IMPL(__imp__sub_827ACEA0) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x827acc80
	sub_827ACC80(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,1
	r11.s64 = 1;
	// slw r11,r11,r9
	r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// and r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827ACF00"))) PPC_WEAK_FUNC(sub_827ACF00);
PPC_FUNC_IMPL(__imp__sub_827ACF00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x827ace20
	sub_827ACE20(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x827acf78
	if (cr6.eq) goto loc_827ACF78;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// beq cr6,0x827acf84
	if (cr6.eq) goto loc_827ACF84;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827ACF58:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x827acf58
	if (!cr0.eq) goto loc_827ACF58;
	// b 0x827acf84
	goto loc_827ACF84;
loc_827ACF78:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_827ACF84:
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

__attribute__((alias("__imp__sub_827ACFA0"))) PPC_WEAK_FUNC(sub_827ACFA0);
PPC_FUNC_IMPL(__imp__sub_827ACFA0) {
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
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x827ace20
	sub_827ACE20(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x827acfec
	if (cr6.eq) goto loc_827ACFEC;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// b 0x827acff8
	goto loc_827ACFF8;
loc_827ACFEC:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r4,r11,-23007
	ctx.r4.s64 = r11.s64 + -23007;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
loc_827ACFF8:
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

__attribute__((alias("__imp__sub_827AD018"))) PPC_WEAK_FUNC(sub_827AD018);
PPC_FUNC_IMPL(__imp__sub_827AD018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// blt cr6,0x827ad030
	if (cr6.lt) goto loc_827AD030;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_827AD030:
	// b 0x827acea0
	sub_827ACEA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AD038"))) PPC_WEAK_FUNC(sub_827AD038);
PPC_FUNC_IMPL(__imp__sub_827AD038) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827ace20
	sub_827ACE20(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x827ad07c
	if (cr6.eq) goto loc_827AD07C;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lbz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 20);
	// b 0x827ad080
	goto loc_827AD080;
loc_827AD07C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827AD080:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AD098"))) PPC_WEAK_FUNC(sub_827AD098);
PPC_FUNC_IMPL(__imp__sub_827AD098) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827ace20
	sub_827ACE20(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x827ad0dc
	if (cr6.eq) goto loc_827AD0DC;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lbz r3,21(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// b 0x827ad0e0
	goto loc_827AD0E0;
loc_827AD0DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827AD0E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AD0F8"))) PPC_WEAK_FUNC(sub_827AD0F8);
PPC_FUNC_IMPL(__imp__sub_827AD0F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x827ad158
	if (!cr6.lt) goto loc_827AD158;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82493860
	sub_82493860(ctx, base);
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// beq 0x827ad150
	if (cr0.eq) goto loc_827AD150;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x827ad154
	goto loc_827AD154;
loc_827AD150:
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
loc_827AD154:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_827AD158:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AD170"))) PPC_WEAK_FUNC(sub_827AD170);
PPC_FUNC_IMPL(__imp__sub_827AD170) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ad1d0
	if (cr6.eq) goto loc_827AD1D0;
	// bl 0x82fbdfb8
	sub_82FBDFB8(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x827ad1c8
	goto loc_827AD1C8;
loc_827AD1A4:
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r5,r4,21
	ctx.r5.s64 = ctx.r4.s64 + 21;
	// bl 0x825fd680
	sub_825FD680(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827e1578
	sub_827E1578(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_827AD1C8:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x827ad1a4
	if (!cr6.eq) goto loc_827AD1A4;
loc_827AD1D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AD1E8"))) PPC_WEAK_FUNC(sub_827AD1E8);
PPC_FUNC_IMPL(__imp__sub_827AD1E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82494210
	sub_82494210(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x824935c0
	sub_824935C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827AD260"))) PPC_WEAK_FUNC(sub_827AD260);
PPC_FUNC_IMPL(__imp__sub_827AD260) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x827ad2a0
	if (cr6.eq) goto loc_827AD2A0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824933c0
	sub_824933C0(ctx, base);
loc_827AD2A0:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x827ad1e8
	sub_827AD1E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_827AD2D0"))) PPC_WEAK_FUNC(sub_827AD2D0);
PPC_FUNC_IMPL(__imp__sub_827AD2D0) {
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
	// bl 0x825533a8
	sub_825533A8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r10,r31,12
	ctx.r10.s64 = r31.s64 + 12;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
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

__attribute__((alias("__imp__sub_827AD328"))) PPC_WEAK_FUNC(sub_827AD328);
PPC_FUNC_IMPL(__imp__sub_827AD328) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x827ad374
	if (cr6.eq) goto loc_827AD374;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827AD358:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x827ad358
	if (!cr0.eq) goto loc_827AD358;
loc_827AD374:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x827e26a8
	sub_827E26A8(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x827ad3c0
	if (cr6.eq) goto loc_827AD3C0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827AD3A4:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x827ad3a4
	if (!cr0.eq) goto loc_827AD3A4;
loc_827AD3C0:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82af3d70
	sub_82AF3D70(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ad3e0
	if (cr6.eq) goto loc_827AD3E0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827AD3E0:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ad3f0
	if (cr6.eq) goto loc_827AD3F0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827AD3F0:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x827ad260
	sub_827AD260(ctx, base);
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

__attribute__((alias("__imp__sub_827AD410"))) PPC_WEAK_FUNC(sub_827AD410);
PPC_FUNC_IMPL(__imp__sub_827AD410) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,9752
	ctx.r4.s64 = r11.s64 + 9752;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x827ad458
	if (cr0.eq) goto loc_827AD458;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x825533a8
	sub_825533A8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// b 0x827ad45c
	goto loc_827AD45C;
loc_827AD458:
	// li r4,0
	ctx.r4.s64 = 0;
loc_827AD45C:
	// addi r31,r30,32
	r31.s64 = r30.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82511998
	sub_82511998(ctx, base);
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x82eaaa80
	sub_82EAAA80(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x827ad4a4
	goto loc_827AD4A4;
loc_827AD480:
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r4,21
	ctx.r5.s64 = ctx.r4.s64 + 21;
	// bl 0x825fd680
	sub_825FD680(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827e1578
	sub_827E1578(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_827AD4A4:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x827ad480
	if (!cr6.eq) goto loc_827AD480;
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

__attribute__((alias("__imp__sub_827AD4C8"))) PPC_WEAK_FUNC(sub_827AD4C8);
PPC_FUNC_IMPL(__imp__sub_827AD4C8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x827ad508
	if (!cr6.eq) goto loc_827AD508;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827ad538
	if (cr6.eq) goto loc_827AD538;
	// ld r11,0(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// ld r11,8(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// b 0x827ad538
	goto loc_827AD538;
loc_827AD508:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x827ad538
	if (cr6.eq) goto loc_827AD538;
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-29600
	ctx.r4.s64 = r11.s64 + -29600;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827ad530
	if (cr0.eq) goto loc_827AD530;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x827ad538
	goto loc_827AD538;
loc_827AD530:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_827AD538:
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

__attribute__((alias("__imp__sub_827AD550"))) PPC_WEAK_FUNC(sub_827AD550);
PPC_FUNC_IMPL(__imp__sub_827AD550) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31959
	r11.s64 = -2094465024;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r4,-5808(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -5808);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250c338
	sub_8250C338(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r29,-31959
	r29.s64 = -2094465024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-10416(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + -10416);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82512b50
	sub_82512B50(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824ec530
	sub_824EC530(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r31,r31,40
	r31.s64 = r31.s64 + 40;
	// bne cr6,0x827ad5d4
	if (!cr6.eq) goto loc_827AD5D4;
	// li r31,0
	r31.s64 = 0;
loc_827AD5D4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-10416(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + -10416);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250c3a8
	sub_8250C3A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827AD600"))) PPC_WEAK_FUNC(sub_827AD600);
PPC_FUNC_IMPL(__imp__sub_827AD600) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827ad658
	if (cr0.eq) goto loc_827AD658;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,9848
	ctx.r9.s64 = r11.s64 + 9848;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827ad65c
	goto loc_827AD65C;
loc_827AD658:
	// li r11,0
	r11.s64 = 0;
loc_827AD65C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827ad690
	if (!cr6.eq) goto loc_827AD690;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,-29944(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -29944);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827AD690:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_827AD6B0"))) PPC_WEAK_FUNC(sub_827AD6B0);
PPC_FUNC_IMPL(__imp__sub_827AD6B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827ad708
	if (cr0.eq) goto loc_827AD708;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,9868
	ctx.r9.s64 = r11.s64 + 9868;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827ad70c
	goto loc_827AD70C;
loc_827AD708:
	// li r11,0
	r11.s64 = 0;
loc_827AD70C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827ad758
	if (!cr6.eq) goto loc_827AD758;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827ad738
	if (cr6.eq) goto loc_827AD738;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827AD738:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-29944(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -29944);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827AD758:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_827AD778"))) PPC_WEAK_FUNC(sub_827AD778);
PPC_FUNC_IMPL(__imp__sub_827AD778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x827ad7a4
	if (cr6.eq) goto loc_827AD7A4;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x827ad4c8
	sub_827AD4C8(ctx, base);
	// b 0x827ad7b0
	goto loc_827AD7B0;
loc_827AD7A4:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// addi r11,r11,-29600
	r11.s64 = r11.s64 + -29600;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_827AD7B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AD7C0"))) PPC_WEAK_FUNC(sub_827AD7C0);
PPC_FUNC_IMPL(__imp__sub_827AD7C0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,196(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x827ad8c4
	if (cr6.eq) goto loc_827AD8C4;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r28,r11,9904
	r28.s64 = r11.s64 + 9904;
loc_827AD7E8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,308
	ctx.r5.s64 = 308;
	// li r3,208
	ctx.r3.s64 = 208;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827ad818
	if (cr0.eq) goto loc_827AD818;
	// addi r5,r30,216
	ctx.r5.s64 = r30.s64 + 216;
	// addi r4,r29,8
	ctx.r4.s64 = r29.s64 + 8;
	// bl 0x827bb290
	sub_827BB290(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x827ad81c
	goto loc_827AD81C;
loc_827AD818:
	// li r31,0
	r31.s64 = 0;
loc_827AD81C:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x827ad6b0
	sub_827AD6B0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82512d88
	sub_82512D88(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,-192
	ctx.r4.s64 = r11.s64 + -192;
	// bne cr6,0x827ad85c
	if (!cr6.eq) goto loc_827AD85C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_827AD85C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827b0378
	sub_827B0378(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x827be590
	sub_827BE590(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ad88c
	if (cr6.eq) goto loc_827AD88C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827AD88C:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ad89c
	if (cr6.eq) goto loc_827AD89C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827AD89C:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ad8b4
	if (cr6.eq) goto loc_827AD8B4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827AD8B4:
	// lwz r29,0(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,196(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x827ad7e8
	if (!cr6.eq) goto loc_827AD7E8;
loc_827AD8C4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_827AD8D0"))) PPC_WEAK_FUNC(sub_827AD8D0);
PPC_FUNC_IMPL(__imp__sub_827AD8D0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827f0370
	sub_827F0370(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x827ad920
	if (cr6.eq) goto loc_827AD920;
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfaf58
	sub_82DFAF58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x827ad920
	if (!cr0.eq) goto loc_827AD920;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// b 0x827ad92c
	goto loc_827AD92C;
loc_827AD920:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827AD92C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827AD940"))) PPC_WEAK_FUNC(sub_827AD940);
PPC_FUNC_IMPL(__imp__sub_827AD940) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827ad998
	if (cr0.eq) goto loc_827AD998;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,9828
	ctx.r9.s64 = r11.s64 + 9828;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827ad99c
	goto loc_827AD99C;
loc_827AD998:
	// li r11,0
	r11.s64 = 0;
loc_827AD99C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827ad9e8
	if (!cr6.eq) goto loc_827AD9E8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827ad9c8
	if (cr6.eq) goto loc_827AD9C8;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_827AD9C8:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-29944(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -29944);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827AD9E8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_827ADA08"))) PPC_WEAK_FUNC(sub_827ADA08);
PPC_FUNC_IMPL(__imp__sub_827ADA08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r31,12(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827ada3c
	if (cr6.eq) goto loc_827ADA3C;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_827ADA3C:
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

__attribute__((alias("__imp__sub_827ADA50"))) PPC_WEAK_FUNC(sub_827ADA50);
PPC_FUNC_IMPL(__imp__sub_827ADA50) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ada7c
	if (cr6.eq) goto loc_827ADA7C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827ADA7C:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827ada8c
	if (cr0.eq) goto loc_827ADA8C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_827ADA8C:
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

__attribute__((alias("__imp__sub_827ADAA8"))) PPC_WEAK_FUNC(sub_827ADAA8);
PPC_FUNC_IMPL(__imp__sub_827ADAA8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827adb00
	if (cr0.eq) goto loc_827ADB00;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,9888
	ctx.r9.s64 = r11.s64 + 9888;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827adb04
	goto loc_827ADB04;
loc_827ADB00:
	// li r11,0
	r11.s64 = 0;
loc_827ADB04:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827adb44
	if (!cr6.eq) goto loc_827ADB44;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827adb24
	if (cr6.eq) goto loc_827ADB24;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827ada50
	sub_827ADA50(ctx, base);
loc_827ADB24:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-29944(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -29944);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827ADB44:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_827ADB60"))) PPC_WEAK_FUNC(sub_827ADB60);
PPC_FUNC_IMPL(__imp__sub_827ADB60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x827ada50
	sub_827ADA50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827ADB74"))) PPC_WEAK_FUNC(sub_827ADB74);
PPC_FUNC_IMPL(__imp__sub_827ADB74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827ADB78"))) PPC_WEAK_FUNC(sub_827ADB78);
PPC_FUNC_IMPL(__imp__sub_827ADB78) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x827adaa8
	sub_827ADAA8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// beq cr6,0x827adbd0
	if (cr6.eq) goto loc_827ADBD0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827ADBD0:
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

__attribute__((alias("__imp__sub_827ADBE8"))) PPC_WEAK_FUNC(sub_827ADBE8);
PPC_FUNC_IMPL(__imp__sub_827ADBE8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lis r11,-31945
	r11.s64 = -2093547520;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,-29120
	r31.s64 = r11.s64 + -29120;
	// lwz r11,-29112(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29112);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x827adc30
	if (!cr0.eq) goto loc_827ADC30;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// lis r8,-32133
	ctx.r8.s64 = -2105868288;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r9,r9,6712
	ctx.r9.s64 = ctx.r9.s64 + 6712;
	// addi r8,r8,-10376
	ctx.r8.s64 = ctx.r8.s64 + -10376;
	// stw r11,-29112(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29112, r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
loc_827ADC30:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r29,0
	r29.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r6,r30,8
	ctx.r6.s64 = r30.s64 + 8;
	// stb r29,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r29.u8);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x829319b8
	sub_829319B8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827adc5c
	if (cr0.eq) goto loc_827ADC5C;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// b 0x827adc60
	goto loc_827ADC60;
loc_827ADC5C:
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
loc_827ADC60:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827ADC68"))) PPC_WEAK_FUNC(sub_827ADC68);
PPC_FUNC_IMPL(__imp__sub_827ADC68) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,9904
	ctx.r4.s64 = r11.s64 + 9904;
	// li r5,207
	ctx.r5.s64 = 207;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x827adcb0
	if (cr0.eq) goto loc_827ADCB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// b 0x827adcb4
	goto loc_827ADCB4;
loc_827ADCB0:
	// li r31,0
	r31.s64 = 0;
loc_827ADCB4:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x827ad940
	sub_827AD940(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df458
	sub_825DF458(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,9984
	ctx.r4.s64 = r11.s64 + 9984;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// addi r4,r11,26984
	ctx.r4.s64 = r11.s64 + 26984;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4d0
	sub_825DF4D0(ctx, base);
	// addi r31,r30,228
	r31.s64 = r30.s64 + 228;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,232(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 232);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82bb6c30
	sub_82BB6C30(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830bde10
	sub_830BDE10(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// bl 0x825df490
	sub_825DF490(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827add64
	if (cr6.eq) goto loc_827ADD64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827ADD64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827ADD70"))) PPC_WEAK_FUNC(sub_827ADD70);
PPC_FUNC_IMPL(__imp__sub_827ADD70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lbz r11,268(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 268);
	// lwz r3,240(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 240);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x827addec
	if (cr0.eq) goto loc_827ADDEC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,224(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 224);
	// lfs f0,260(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 260);
	f0.f64 = double(temp.f32);
	// lwz r3,240(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 240);
	// lfs f13,264(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fnmsubs f0,f12,f0,f1
	f0.f64 = double(float(-(ctx.f12.f64 * f0.f64 - ctx.f1.f64)));
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// b 0x827ade0c
	goto loc_827ADE0C;
loc_827ADDEC:
	// lwz r11,224(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 224);
	// lfs f0,260(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 260);
	f0.f64 = double(temp.f32);
	// lfs f13,264(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmadds f0,f12,f0,f13
	f0.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
loc_827ADE0C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fadds f1,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f0.f64 + f31.f64));
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,240(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 240);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,268(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 268);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x827ade90
	if (cr0.eq) goto loc_827ADE90;
	// lfs f0,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	f0.f64 = double(temp.f32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_827ADE90:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lfs f31,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lfs f30,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f30.f64 = double(temp.f32);
	// stfs f31,176(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f30,184(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,160(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,164(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x82e85da8
	sub_82E85DA8(ctx, base);
	// stfs f31,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f30,148(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stfs f31,152(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// stfs f31,208(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stfs f31,212(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f30,216(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f31,220(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// bl 0x82e85da8
	sub_82E85DA8(ctx, base);
	// vspltisw128 v63,-1
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// addi r11,r1,272
	r11.s64 = ctx.r1.s64 + 272;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// vslw128 v61,v63,v63
	v61.u32[0] = v63.u32[0] << (v63.u8[0] & 0x1F);
	v61.u32[1] = v63.u32[1] << (v63.u8[4] & 0x1F);
	v61.u32[2] = v63.u32[2] << (v63.u8[8] & 0x1F);
	v61.u32[3] = v63.u32[3] << (v63.u8[12] & 0x1F);
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v60,v62,177
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0x4E));
	// vpermwi128 v59,v62,78
	simde_mm_store_si128((simde__m128i*)v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xB1));
	// vpermwi128 v58,v62,228
	simde_mm_store_si128((simde__m128i*)v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0x1B));
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v61,v63,v61
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)v61.u8)));
	// vor128 v57,v61,v61
	simde_mm_store_si128((simde__m128i*)v57.u8, simde_mm_load_si128((simde__m128i*)v61.u8));
	// vor128 v56,v61,v61
	simde_mm_store_si128((simde__m128i*)v56.u8, simde_mm_load_si128((simde__m128i*)v61.u8));
	// vor128 v55,v61,v61
	simde_mm_store_si128((simde__m128i*)v55.u8, simde_mm_load_si128((simde__m128i*)v61.u8));
	// vrlimi128 v61,v63,11,0
	simde_mm_store_ps(v61.f32, simde_mm_blend_ps(simde_mm_load_ps(v61.f32), simde_mm_permute_ps(simde_mm_load_ps(v63.f32), 228), 11));
	// vrlimi128 v57,v63,1,0
	simde_mm_store_ps(v57.f32, simde_mm_blend_ps(simde_mm_load_ps(v57.f32), simde_mm_permute_ps(simde_mm_load_ps(v63.f32), 228), 1));
	// vrlimi128 v56,v63,13,0
	simde_mm_store_ps(v56.f32, simde_mm_blend_ps(simde_mm_load_ps(v56.f32), simde_mm_permute_ps(simde_mm_load_ps(v63.f32), 228), 13));
	// vrlimi128 v55,v63,7,0
	simde_mm_store_ps(v55.f32, simde_mm_blend_ps(simde_mm_load_ps(v55.f32), simde_mm_permute_ps(simde_mm_load_ps(v63.f32), 228), 7));
	// vmsum4fp128 v61,v61,v58
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v61.f32, simde_mm_dp_ps(simde_mm_load_ps(v61.f32), simde_mm_load_ps(v58.f32), 0xFF));
	// vmsum4fp128 v63,v57,v62
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v57.f32), simde_mm_load_ps(v62.f32), 0xFF));
	// vmsum4fp128 v62,v56,v60
	simde_mm_store_ps(v62.f32, simde_mm_dp_ps(simde_mm_load_ps(v56.f32), simde_mm_load_ps(v60.f32), 0xFF));
	// vmsum4fp128 v60,v55,v59
	simde_mm_store_ps(v60.f32, simde_mm_dp_ps(simde_mm_load_ps(v55.f32), simde_mm_load_ps(v59.f32), 0xFF));
	// vmrghw128 v63,v62,v63
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), simde_mm_load_si128((simde__m128i*)v62.u32)));
	// vmrghw128 v62,v61,v60
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), simde_mm_load_si128((simde__m128i*)v61.u32)));
	// vmrghw128 v63,v62,v63
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), simde_mm_load_si128((simde__m128i*)v62.u32)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8279e488
	sub_8279E488(ctx, base);
	// fadds f0,f1,f29
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 + f29.f64));
	// stfs f31,192(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f31,200(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stfs f31,204(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f0,196(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// bl 0x82e84be0
	sub_82E84BE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82e84a10
	sub_82E84A10(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x8246e640
	sub_8246E640(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r30,r29,204
	r30.s64 = r29.s64 + 204;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x822cebc8
	sub_822CEBC8(ctx, base);
	// lbz r11,108(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// li r31,0
	r31.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// beq 0x827adff0
	if (cr0.eq) goto loc_827ADFF0;
	// li r5,267
	ctx.r5.s64 = 267;
	// b 0x827ae008
	goto loc_827AE008;
loc_827ADFF0:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// bl 0x82599a60
	sub_82599A60(ctx, base);
	// li r5,271
	ctx.r5.s64 = 271;
loc_827AE008:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,9904
	ctx.r4.s64 = r11.s64 + 9904;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827ae040
	if (cr0.eq) goto loc_827AE040;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r31,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r31.u32);
	// stw r31,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r31.u32);
	// b 0x827ae044
	goto loc_827AE044;
loc_827AE040:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_827AE044:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827adb78
	sub_827ADB78(ctx, base);
	// addi r11,r1,256
	r11.s64 = ctx.r1.s64 + 256;
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stvx128 v63,r31,r9
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f0,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f0,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// lfs f0,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// bl 0x8279ec18
	sub_8279EC18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x825a77a8
	sub_825A77A8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r31,48
	ctx.r10.s64 = r31.s64 + 48;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ae0cc
	if (cr6.eq) goto loc_827AE0CC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827AE0CC:
	// lwz r30,196(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 196);
	// addi r31,r29,192
	r31.s64 = r29.s64 + 192;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82bb6c30
	sub_82BB6C30(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830bde10
	sub_830BDE10(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq cr6,0x827ae114
	if (cr6.eq) goto loc_827AE114;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827AE114:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_827AE130"))) PPC_WEAK_FUNC(sub_827AE130);
PPC_FUNC_IMPL(__imp__sub_827AE130) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,9904
	ctx.r4.s64 = r11.s64 + 9904;
	// li r5,217
	ctx.r5.s64 = 217;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x827ad600
	sub_827AD600(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df458
	sub_825DF458(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,25992
	ctx.r4.s64 = r11.s64 + 25992;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// lwz r31,96(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,27704
	ctx.r4.s64 = r11.s64 + 27704;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df518
	sub_825DF518(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// addi r4,r11,19616
	ctx.r4.s64 = r11.s64 + 19616;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4d0
	sub_825DF4D0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,248
	ctx.r3.s64 = r30.s64 + 248;
	// bl 0x82b7e7c8
	sub_82B7E7C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df490
	sub_825DF490(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ae21c
	if (cr6.eq) goto loc_827AE21C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827AE21C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827AE228"))) PPC_WEAK_FUNC(sub_827AE228);
PPC_FUNC_IMPL(__imp__sub_827AE228) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,10016
	r11.s64 = r11.s64 + 10016;
	// addi r10,r10,9996
	ctx.r10.s64 = ctx.r10.s64 + 9996;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r3,r31,248
	ctx.r3.s64 = r31.s64 + 248;
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// bl 0x827dd5a0
	sub_827DD5A0(ctx, base);
	// lwz r3,244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ae268
	if (cr6.eq) goto loc_827AE268;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827AE268:
	// addi r3,r31,228
	ctx.r3.s64 = r31.s64 + 228;
	// bl 0x82b74ea0
	sub_82B74EA0(ctx, base);
	// lis r30,-31946
	r30.s64 = -2093613056;
	// lwz r4,232(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// lwz r3,6512(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// stw r29,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r29.u32);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ae298
	if (cr6.eq) goto loc_827AE298;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827AE298:
	// addi r3,r31,204
	ctx.r3.s64 = r31.s64 + 204;
	// bl 0x822cf140
	sub_822CF140(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x82b74ea0
	sub_82B74EA0(ctx, base);
	// lwz r3,6512(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 6512);
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
	// stw r29,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82514af8
	sub_82514AF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827AE2C8"))) PPC_WEAK_FUNC(sub_827AE2C8);
PPC_FUNC_IMPL(__imp__sub_827AE2C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x827ae368
	sub_827AE368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE2D0"))) PPC_WEAK_FUNC(sub_827AE2D0);
PPC_FUNC_IMPL(__imp__sub_827AE2D0) {
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
	// bl 0x82514a50
	sub_82514A50(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,10016
	r11.s64 = r11.s64 + 10016;
	// addi r10,r10,9996
	ctx.r10.s64 = ctx.r10.s64 + 9996;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// bl 0x822c0b50
	sub_822C0B50(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// stw r3,196(r31)
	PPC_STORE_U32(r31.u32 + 196, ctx.r3.u32);
	// addi r3,r31,204
	ctx.r3.s64 = r31.s64 + 204;
	// stw r30,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r30.u32);
	// bl 0x82320350
	sub_82320350(ctx, base);
	// stw r30,216(r31)
	PPC_STORE_U32(r31.u32 + 216, r30.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r30.u32);
	// addi r3,r31,228
	ctx.r3.s64 = r31.s64 + 228;
	// bl 0x822c0b50
	sub_822C0B50(ctx, base);
	// stw r3,232(r31)
	PPC_STORE_U32(r31.u32 + 232, ctx.r3.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(r31.u32 + 236, r30.u32);
	// addi r3,r31,248
	ctx.r3.s64 = r31.s64 + 248;
	// stw r30,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r30.u32);
	// stw r30,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r30.u32);
	// bl 0x825533a8
	sub_825533A8(ctx, base);
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

__attribute__((alias("__imp__sub_827AE368"))) PPC_WEAK_FUNC(sub_827AE368);
PPC_FUNC_IMPL(__imp__sub_827AE368) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x827ae228
	sub_827AE228(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827ae398
	if (cr0.eq) goto loc_827AE398;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_827AE398:
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

__attribute__((alias("__imp__sub_827AE3B8"))) PPC_WEAK_FUNC(sub_827AE3B8);
PPC_FUNC_IMPL(__imp__sub_827AE3B8) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r26,1
	r26.s64 = 1;
	// lwz r11,232(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 232);
	// lfs f30,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f30.f64 = double(temp.f32);
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x827ae48c
	if (cr6.eq) goto loc_827AE48C;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r30,r11,-12828
	r30.s64 = r11.s64 + -12828;
	// addi r29,r10,-30900
	r29.s64 = ctx.r10.s64 + -30900;
loc_827AE404:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827ae440
	if (cr0.eq) goto loc_827AE440;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x825ab2c8
	sub_825AB2C8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_827AE440:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827ae47c
	if (cr0.eq) goto loc_827AE47C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x825aafa0
	sub_825AAFA0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
loc_827AE47C:
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,232(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 232);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x827ae404
	if (!cr6.eq) goto loc_827AE404;
loc_827AE48C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,248
	ctx.r4.s64 = r27.s64 + 248;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x827ad8d0
	sub_827AD8D0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r29,0
	r29.s64 = 0;
	// lfs f31,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f31.f64 = double(temp.f32);
	// lwz r10,252(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 252);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x827ae4c4
	if (cr6.eq) goto loc_827AE4C4;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lfs f31,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f31.f64 = double(temp.f32);
loc_827AE4C4:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x827ae5b0
	if (cr6.eq) goto loc_827AE5B0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r28,r11,9904
	r28.s64 = r11.s64 + 9904;
loc_827AE4D8:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r4,216(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 216);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a2088
	sub_827A2088(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827ae594
	if (cr6.eq) goto loc_827AE594;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,349
	ctx.r5.s64 = 349;
	// li r3,196
	ctx.r3.s64 = 196;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827ae51c
	if (cr0.eq) goto loc_827AE51C;
	// bl 0x827a0f88
	sub_827A0F88(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x827ae520
	goto loc_827AE520;
loc_827AE51C:
	// li r31,0
	r31.s64 = 0;
loc_827AE520:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8259fe68
	sub_8259FE68(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r31,88(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a10a8
	sub_827A10A8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827ae584
	if (cr6.eq) goto loc_827AE584;
	// clrldi r11,r30,32
	r11.u64 = r30.u64 & 0xFFFFFFFF;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmuls f2,f0,f30
	ctx.f2.f64 = double(float(f0.f64 * f30.f64));
	// bl 0x827add70
	sub_827ADD70(ctx, base);
loc_827AE584:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ae594
	if (cr6.eq) goto loc_827AE594;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827AE594:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ae5a4
	if (cr6.eq) goto loc_827AE5A4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827AE5A4:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(r30.u32, r26.u32, xer);
	// blt cr6,0x827ae4d8
	if (cr6.lt) goto loc_827AE4D8;
loc_827AE5B0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_827AE5C0"))) PPC_WEAK_FUNC(sub_827AE5C0);
PPC_FUNC_IMPL(__imp__sub_827AE5C0) {
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x825df458
	sub_825DF458(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,10056
	ctx.r4.s64 = r11.s64 + 10056;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-17644
	ctx.r4.s64 = r11.s64 + -17644;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// lis r11,-32133
	r11.s64 = -2105868288;
	// li r27,0
	r27.s64 = 0;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// addi r11,r11,-9112
	r11.s64 = r11.s64 + -9112;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// bl 0x827adbe8
	sub_827ADBE8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,27092
	ctx.r4.s64 = r11.s64 + 27092;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825df5a8
	sub_825DF5A8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825df4d0
	sub_825DF4D0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-7000
	ctx.r4.s64 = r11.s64 + -7000;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827ae6ac
	if (cr0.eq) goto loc_827AE6AC;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827ae3b8
	sub_827AE3B8(ctx, base);
	// b 0x827ae820
	goto loc_827AE820;
loc_827AE6AC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x827a2088
	sub_827A2088(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827ae810
	if (cr6.eq) goto loc_827AE810;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,9904
	ctx.r4.s64 = r11.s64 + 9904;
	// li r5,173
	ctx.r5.s64 = 173;
	// li r3,196
	ctx.r3.s64 = 196;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827ae6f4
	if (cr0.eq) goto loc_827AE6F4;
	// bl 0x827a0f88
	sub_827A0F88(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x827ae6f8
	goto loc_827AE6F8;
loc_827AE6F4:
	// mr r31,r27
	r31.u64 = r27.u64;
loc_827AE6F8:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8259fe68
	sub_8259FE68(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r31,96(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a10a8
	sub_827A10A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8279ec18
	sub_8279EC18(ctx, base);
	// lwz r11,232(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 232);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lfs f31,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f31.f64 = double(temp.f32);
	// fmr f30,f31
	f30.f64 = f31.f64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x827ae7b8
	if (cr6.eq) goto loc_827AE7B8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r28,r11,-30432
	r28.s64 = r11.s64 + -30432;
loc_827AE758:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827ae798
	if (cr0.eq) goto loc_827AE798;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x825aafa0
	sub_825AAFA0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// b 0x827ae7a8
	goto loc_827AE7A8;
loc_827AE798:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r5,r4,4
	ctx.r5.s64 = ctx.r4.s64 + 4;
	// bl 0x825a5eb8
	sub_825A5EB8(ctx, base);
loc_827AE7A8:
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,232(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 232);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x827ae758
	if (!cr6.eq) goto loc_827AE758;
loc_827AE7B8:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r30,248
	ctx.r4.s64 = r30.s64 + 248;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x827ad8d0
	sub_827AD8D0(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,252(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 252);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = f31.f64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x827ae7ec
	if (cr6.eq) goto loc_827AE7EC;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
loc_827AE7EC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fadds f1,f0,f30
	ctx.f1.f64 = double(float(f0.f64 + f30.f64));
	// bl 0x827add70
	sub_827ADD70(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ae810
	if (cr6.eq) goto loc_827AE810;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827AE810:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ae820
	if (cr6.eq) goto loc_827AE820;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827AE820:
	// addi r3,r30,228
	ctx.r3.s64 = r30.s64 + 228;
	// bl 0x82b74ea0
	sub_82B74EA0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825df490
	sub_825DF490(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_827AE850"))) PPC_WEAK_FUNC(sub_827AE850);
PPC_FUNC_IMPL(__imp__sub_827AE850) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x825df458
	sub_825DF458(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r31,224
	ctx.r5.s64 = r31.s64 + 224;
	// addi r4,r11,27704
	ctx.r4.s64 = r11.s64 + 27704;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825df518
	sub_825DF518(ctx, base);
	// lis r10,-32133
	ctx.r10.s64 = -2105868288;
	// li r11,0
	r11.s64 = 0;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// addi r10,r10,-6720
	ctx.r10.s64 = ctx.r10.s64 + -6720;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x827adbe8
	sub_827ADBE8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,10064
	ctx.r4.s64 = r11.s64 + 10064;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825df5a8
	sub_825DF5A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825df4d0
	sub_825DF4D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825df490
	sub_825DF490(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_827AE8F8"))) PPC_WEAK_FUNC(sub_827AE8F8);
PPC_FUNC_IMPL(__imp__sub_827AE8F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r30,r31,216
	r30.s64 = r31.s64 + 216;
	// lwz r10,216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// stfs f1,264(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 264, temp.u32);
	// li r25,0
	r25.s64 = 0;
	// stb r7,268(r31)
	PPC_STORE_U8(r31.u32 + 268, ctx.r7.u8);
	// addi r27,r11,9904
	r27.s64 = r11.s64 + 9904;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x827ae978
	if (!cr6.eq) goto loc_827AE978;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,99
	ctx.r5.s64 = 99;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827ae95c
	if (cr0.eq) goto loc_827AE95C;
	// bl 0x827acb98
	sub_827ACB98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827ae960
	goto loc_827AE960;
loc_827AE95C:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_827AE960:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b7bb8
	sub_825B7BB8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x827acbe8
	sub_827ACBE8(ctx, base);
loc_827AE978:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r11,r31,240
	r11.s64 = r31.s64 + 240;
	// addi r26,r29,4
	r26.s64 = r29.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r10,240(r31)
	PPC_STORE_U32(r31.u32 + 240, ctx.r10.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825de468
	sub_825DE468(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x827ae9d8
	if (!cr6.eq) goto loc_827AE9D8;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_827AE9D8:
	// bl 0x8250c0b8
	sub_8250C0B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82421f88
	sub_82421F88(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r30,88(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x827aea38
	if (!cr6.eq) goto loc_827AEA38;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827aea18
	if (cr6.eq) goto loc_827AEA18;
loc_827AEA14:
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827AEA18:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825de520
	sub_825DE520(ctx, base);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827aea30
	if (cr6.eq) goto loc_827AEA30;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827AEA30:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x827aec9c
	goto loc_827AEC9C;
loc_827AEA38:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e06c40
	sub_82E06C40(ctx, base);
	// lwz r29,92(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x827aeaa0
	if (!cr0.eq) goto loc_827AEAA0;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// beq cr6,0x827aea7c
	if (cr6.eq) goto loc_827AEA7C;
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
loc_827AEA60:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x827aea60
	if (!cr0.eq) goto loc_827AEA60;
loc_827AEA7C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r6,114
	ctx.r6.s64 = 114;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x822e07c0
	sub_822E07C0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_827AEAA0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82e0ebe8
	sub_82E0EBE8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// bl 0x825de698
	sub_825DE698(ctx, base);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827aeaf0
	if (cr6.eq) goto loc_827AEAF0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827AEAF0:
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x827aeb1c
	if (!cr6.eq) goto loc_827AEB1C;
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827aeb0c
	if (cr6.eq) goto loc_827AEB0C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827AEB0C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x827aea18
	if (cr6.eq) goto loc_827AEA18;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x827aea14
	goto loc_827AEA14;
loc_827AEB1C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825ddd78
	sub_825DDD78(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r5,r11,10084
	ctx.r5.s64 = r11.s64 + 10084;
	// bl 0x825df298
	sub_825DF298(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827aebb0
	if (cr6.eq) goto loc_827AEBB0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df458
	sub_825DF458(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r5,r31,260
	ctx.r5.s64 = r31.s64 + 260;
	// addi r4,r11,-12828
	ctx.r4.s64 = r11.s64 + -12828;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// lis r11,-32133
	r11.s64 = -2105868288;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r31.u32);
	// addi r11,r11,-7888
	r11.s64 = r11.s64 + -7888;
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r25.u32);
	// ld r5,168(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// ld r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// stw r25,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r25.u32);
	// bl 0x827adbe8
	sub_827ADBE8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-17644
	ctx.r4.s64 = r11.s64 + -17644;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df5a8
	sub_825DF5A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x825df4d0
	sub_825DF4D0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df490
	sub_825DF490(ctx, base);
loc_827AEBB0:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,28464
	ctx.r5.s64 = r11.s64 + 28464;
	// bl 0x825df298
	sub_825DF298(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827aec28
	if (cr6.eq) goto loc_827AEC28;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df458
	sub_825DF458(ctx, base);
	// lis r11,-32133
	r11.s64 = -2105868288;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r31.u32);
	// addi r11,r11,-6064
	r11.s64 = r11.s64 + -6064;
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r25.u32);
	// ld r5,168(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// ld r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// stw r25,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r25.u32);
	// bl 0x827adbe8
	sub_827ADBE8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,10072
	ctx.r4.s64 = r11.s64 + 10072;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df5a8
	sub_825DF5A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825df4d0
	sub_825DF4D0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df490
	sub_825DF490(ctx, base);
loc_827AEC28:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827ad7c0
	sub_827AD7C0(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827aec40
	if (cr6.eq) goto loc_827AEC40;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827AEC40:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827aec50
	if (cr6.eq) goto loc_827AEC50;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827AEC50:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827aec60
	if (cr6.eq) goto loc_827AEC60;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827AEC60:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827aec70
	if (cr6.eq) goto loc_827AEC70;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827AEC70:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x827aec80
	if (cr6.eq) goto loc_827AEC80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827AEC80:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825de520
	sub_825DE520(ctx, base);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827aec98
	if (cr6.eq) goto loc_827AEC98;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827AEC98:
	// li r3,1
	ctx.r3.s64 = 1;
loc_827AEC9C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_827AECA8"))) PPC_WEAK_FUNC(sub_827AECA8);
PPC_FUNC_IMPL(__imp__sub_827AECA8) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// lbz r11,0(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// lbz r11,1(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 1);
	// stb r11,13(r31)
	PPC_STORE_U8(r31.u32 + 13, r11.u8);
	// lbz r11,2(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 2);
	// stb r11,14(r31)
	PPC_STORE_U8(r31.u32 + 14, r11.u8);
	// lbz r11,3(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 3);
	// stw r27,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r27.u32);
	// stb r26,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r26.u8);
	// stb r26,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r26.u8);
	// stw r25,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r25.u32);
	// stb r11,15(r31)
	PPC_STORE_U8(r31.u32 + 15, r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_827AED28"))) PPC_WEAK_FUNC(sub_827AED28);
PPC_FUNC_IMPL(__imp__sub_827AED28) {
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
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_827AED60"))) PPC_WEAK_FUNC(sub_827AED60);
PPC_FUNC_IMPL(__imp__sub_827AED60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,196(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r10,80(r11)
	PPC_STORE_U32(r11.u32 + 80, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AED70"))) PPC_WEAK_FUNC(sub_827AED70);
PPC_FUNC_IMPL(__imp__sub_827AED70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,196(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// lwz r3,248(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 248);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AED80"))) PPC_WEAK_FUNC(sub_827AED80);
PPC_FUNC_IMPL(__imp__sub_827AED80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,196(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// lwz r3,252(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 252);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AED90"))) PPC_WEAK_FUNC(sub_827AED90);
PPC_FUNC_IMPL(__imp__sub_827AED90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,196(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// lbz r3,120(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 120);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AEDA0"))) PPC_WEAK_FUNC(sub_827AEDA0);
PPC_FUNC_IMPL(__imp__sub_827AEDA0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// lbz r11,6(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 6);
	// stb r11,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r11.u8);
	// lbz r11,7(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 7);
	// stb r11,7(r31)
	PPC_STORE_U8(r31.u32 + 7, r11.u8);
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

__attribute__((alias("__imp__sub_827AEE00"))) PPC_WEAK_FUNC(sub_827AEE00);
PPC_FUNC_IMPL(__imp__sub_827AEE00) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// lbz r11,6(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 6);
	// stb r11,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r11.u8);
	// lbz r11,7(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 7);
	// stb r11,7(r31)
	PPC_STORE_U8(r31.u32 + 7, r11.u8);
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

__attribute__((alias("__imp__sub_827AEE60"))) PPC_WEAK_FUNC(sub_827AEE60);
PPC_FUNC_IMPL(__imp__sub_827AEE60) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x827aeea8
	if (!cr6.eq) goto loc_827AEEA8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827aeed8
	if (cr6.eq) goto loc_827AEED8;
	// ld r11,0(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// ld r11,8(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// ld r11,16(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 16);
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// b 0x827aeed8
	goto loc_827AEED8;
loc_827AEEA8:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x827aeed8
	if (cr6.eq) goto loc_827AEED8;
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-28048
	ctx.r4.s64 = r11.s64 + -28048;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827aeed0
	if (cr0.eq) goto loc_827AEED0;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x827aeed8
	goto loc_827AEED8;
loc_827AEED0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_827AEED8:
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

__attribute__((alias("__imp__sub_827AEEF0"))) PPC_WEAK_FUNC(sub_827AEEF0);
PPC_FUNC_IMPL(__imp__sub_827AEEF0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x827aef38
	if (!cr6.eq) goto loc_827AEF38;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827aef68
	if (cr6.eq) goto loc_827AEF68;
	// ld r11,0(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// ld r11,8(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// ld r11,16(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 16);
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// b 0x827aef68
	goto loc_827AEF68;
loc_827AEF38:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x827aef68
	if (cr6.eq) goto loc_827AEF68;
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-27776
	ctx.r4.s64 = r11.s64 + -27776;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827aef60
	if (cr0.eq) goto loc_827AEF60;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x827aef68
	goto loc_827AEF68;
loc_827AEF60:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_827AEF68:
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

__attribute__((alias("__imp__sub_827AEF80"))) PPC_WEAK_FUNC(sub_827AEF80);
PPC_FUNC_IMPL(__imp__sub_827AEF80) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x827aefc0
	if (!cr6.eq) goto loc_827AEFC0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827aeff0
	if (cr6.eq) goto loc_827AEFF0;
	// ld r11,0(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// ld r11,8(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// b 0x827aeff0
	goto loc_827AEFF0;
loc_827AEFC0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x827aeff0
	if (cr6.eq) goto loc_827AEFF0;
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-27528
	ctx.r4.s64 = r11.s64 + -27528;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827aefe8
	if (cr0.eq) goto loc_827AEFE8;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x827aeff0
	goto loc_827AEFF0;
loc_827AEFE8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_827AEFF0:
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

__attribute__((alias("__imp__sub_827AF008"))) PPC_WEAK_FUNC(sub_827AF008);
PPC_FUNC_IMPL(__imp__sub_827AF008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x825df458
	sub_825DF458(ctx, base);
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r11,r11,30976
	r11.s64 = r11.s64 + 30976;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,29232
	ctx.r10.s64 = ctx.r10.s64 + 29232;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// vor128 v61,v62,v62
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_load_si128((simde__m128i*)v62.u8));
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,2240(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f31.f64 = double(temp.f32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stvx128 v62,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,10488
	ctx.r4.s64 = r11.s64 + 10488;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df4f8
	sub_825DF4F8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,10472
	ctx.r4.s64 = r11.s64 + 10472;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,10464
	ctx.r4.s64 = r11.s64 + 10464;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df4f8
	sub_825DF4F8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,10452
	ctx.r4.s64 = r11.s64 + 10452;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,10436
	ctx.r4.s64 = r11.s64 + 10436;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,10424
	ctx.r4.s64 = r11.s64 + 10424;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df4f8
	sub_825DF4F8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,10412
	ctx.r4.s64 = r11.s64 + 10412;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df4f8
	sub_825DF4F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df4d0
	sub_825DF4D0(ctx, base);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lwz r7,196(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// li r10,144
	ctx.r10.s64 = 144;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// li r8,160
	ctx.r8.s64 = 160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r7,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// stfs f0,176(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 176, temp.u32);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// addi r3,r11,224
	ctx.r3.s64 = r11.s64 + 224;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// lwz r9,196(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// li r11,192
	r11.s64 = 192;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f0.f64 = double(temp.f32);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// li r10,208
	ctx.r10.s64 = 208;
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f0,180(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 180, temp.u32);
	// lwz r9,196(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stvx128 v63,r9,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// bl 0x827ad0f8
	sub_827AD0F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df490
	sub_825DF490(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827AF1C0"))) PPC_WEAK_FUNC(sub_827AF1C0);
PPC_FUNC_IMPL(__imp__sub_827AF1C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31945
	r11.s64 = -2093547520;
	// lwz r11,-29124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -29124);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,196(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// b 0x827b78e0
	sub_827B78E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AF1DC"))) PPC_WEAK_FUNC(sub_827AF1DC);
PPC_FUNC_IMPL(__imp__sub_827AF1DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AF1E0"))) PPC_WEAK_FUNC(sub_827AF1E0);
PPC_FUNC_IMPL(__imp__sub_827AF1E0) {
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
	// lwz r11,196(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 196);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// bl 0x827b76d8
	sub_827B76D8(ctx, base);
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

__attribute__((alias("__imp__sub_827AF218"))) PPC_WEAK_FUNC(sub_827AF218);
PPC_FUNC_IMPL(__imp__sub_827AF218) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// bl 0x827bcc38
	sub_827BCC38(ctx, base);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// bl 0x827bcc38
	sub_827BCC38(ctx, base);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// bl 0x827be0e8
	sub_827BE0E8(ctx, base);
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

__attribute__((alias("__imp__sub_827AF270"))) PPC_WEAK_FUNC(sub_827AF270);
PPC_FUNC_IMPL(__imp__sub_827AF270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,196(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// b 0x827be038
	sub_827BE038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AF280"))) PPC_WEAK_FUNC(sub_827AF280);
PPC_FUNC_IMPL(__imp__sub_827AF280) {
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
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// bl 0x827bca48
	sub_827BCA48(ctx, base);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// bl 0x827ad410
	sub_827AD410(ctx, base);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r3,100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// bl 0x827b80b0
	sub_827B80B0(ctx, base);
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

__attribute__((alias("__imp__sub_827AF2D0"))) PPC_WEAK_FUNC(sub_827AF2D0);
PPC_FUNC_IMPL(__imp__sub_827AF2D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,196(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// lwz r4,24(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r3,100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// b 0x827b7ee0
	sub_827B7EE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AF2E0"))) PPC_WEAK_FUNC(sub_827AF2E0);
PPC_FUNC_IMPL(__imp__sub_827AF2E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827af338
	if (cr0.eq) goto loc_827AF338;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,10096
	ctx.r9.s64 = r11.s64 + 10096;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827af33c
	goto loc_827AF33C;
loc_827AF338:
	// li r11,0
	r11.s64 = 0;
loc_827AF33C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827af388
	if (!cr6.eq) goto loc_827AF388;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827af368
	if (cr6.eq) goto loc_827AF368;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827AF368:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-29384(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -29384);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827AF388:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_827AF3A8"))) PPC_WEAK_FUNC(sub_827AF3A8);
PPC_FUNC_IMPL(__imp__sub_827AF3A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827af400
	if (cr0.eq) goto loc_827AF400;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,10116
	ctx.r9.s64 = r11.s64 + 10116;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827af404
	goto loc_827AF404;
loc_827AF400:
	// li r11,0
	r11.s64 = 0;
loc_827AF404:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827af450
	if (!cr6.eq) goto loc_827AF450;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827af430
	if (cr6.eq) goto loc_827AF430;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827AF430:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-29384(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -29384);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827AF450:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_827AF470"))) PPC_WEAK_FUNC(sub_827AF470);
PPC_FUNC_IMPL(__imp__sub_827AF470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827af4c8
	if (cr0.eq) goto loc_827AF4C8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,10156
	ctx.r9.s64 = r11.s64 + 10156;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827af4cc
	goto loc_827AF4CC;
loc_827AF4C8:
	// li r11,0
	r11.s64 = 0;
loc_827AF4CC:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827af518
	if (!cr6.eq) goto loc_827AF518;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827af4f8
	if (cr6.eq) goto loc_827AF4F8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827AF4F8:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-29384(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -29384);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827AF518:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_827AF538"))) PPC_WEAK_FUNC(sub_827AF538);
PPC_FUNC_IMPL(__imp__sub_827AF538) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827af574
	if (cr6.eq) goto loc_827AF574;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
loc_827AF574:
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

__attribute__((alias("__imp__sub_827AF590"))) PPC_WEAK_FUNC(sub_827AF590);
PPC_FUNC_IMPL(__imp__sub_827AF590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827af5e8
	if (cr0.eq) goto loc_827AF5E8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,10216
	ctx.r9.s64 = r11.s64 + 10216;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827af5ec
	goto loc_827AF5EC;
loc_827AF5E8:
	// li r11,0
	r11.s64 = 0;
loc_827AF5EC:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827af638
	if (!cr6.eq) goto loc_827AF638;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827af618
	if (cr6.eq) goto loc_827AF618;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827AF618:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-29384(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -29384);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827AF638:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_827AF658"))) PPC_WEAK_FUNC(sub_827AF658);
PPC_FUNC_IMPL(__imp__sub_827AF658) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827af6b0
	if (cr0.eq) goto loc_827AF6B0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,10276
	ctx.r9.s64 = r11.s64 + 10276;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827af6b4
	goto loc_827AF6B4;
loc_827AF6B0:
	// li r11,0
	r11.s64 = 0;
loc_827AF6B4:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827af6e8
	if (!cr6.eq) goto loc_827AF6E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,-29384(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -29384);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827AF6E8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_827AF708"))) PPC_WEAK_FUNC(sub_827AF708);
PPC_FUNC_IMPL(__imp__sub_827AF708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827af760
	if (cr0.eq) goto loc_827AF760;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,10296
	ctx.r9.s64 = r11.s64 + 10296;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827af764
	goto loc_827AF764;
loc_827AF760:
	// li r11,0
	r11.s64 = 0;
loc_827AF764:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827af7b0
	if (!cr6.eq) goto loc_827AF7B0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827af790
	if (cr6.eq) goto loc_827AF790;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827AF790:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-29384(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -29384);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827AF7B0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_827AF7D0"))) PPC_WEAK_FUNC(sub_827AF7D0);
PPC_FUNC_IMPL(__imp__sub_827AF7D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827af828
	if (cr0.eq) goto loc_827AF828;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,10316
	ctx.r9.s64 = r11.s64 + 10316;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827af82c
	goto loc_827AF82C;
loc_827AF828:
	// li r11,0
	r11.s64 = 0;
loc_827AF82C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827af878
	if (!cr6.eq) goto loc_827AF878;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827af858
	if (cr6.eq) goto loc_827AF858;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827AF858:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-29384(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -29384);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827AF878:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_827AF898"))) PPC_WEAK_FUNC(sub_827AF898);
PPC_FUNC_IMPL(__imp__sub_827AF898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827af8f0
	if (cr0.eq) goto loc_827AF8F0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,10336
	ctx.r9.s64 = r11.s64 + 10336;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827af8f4
	goto loc_827AF8F4;
loc_827AF8F0:
	// li r11,0
	r11.s64 = 0;
loc_827AF8F4:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827af940
	if (!cr6.eq) goto loc_827AF940;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827af920
	if (cr6.eq) goto loc_827AF920;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827AF920:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-29384(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -29384);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827AF940:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_827AF960"))) PPC_WEAK_FUNC(sub_827AF960);
PPC_FUNC_IMPL(__imp__sub_827AF960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827af9b8
	if (cr0.eq) goto loc_827AF9B8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,10356
	ctx.r9.s64 = r11.s64 + 10356;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827af9bc
	goto loc_827AF9BC;
loc_827AF9B8:
	// li r11,0
	r11.s64 = 0;
loc_827AF9BC:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827afa08
	if (!cr6.eq) goto loc_827AFA08;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827af9e8
	if (cr6.eq) goto loc_827AF9E8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827AF9E8:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-29384(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -29384);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827AFA08:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_827AFA28"))) PPC_WEAK_FUNC(sub_827AFA28);
PPC_FUNC_IMPL(__imp__sub_827AFA28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827afa80
	if (cr0.eq) goto loc_827AFA80;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,10376
	ctx.r9.s64 = r11.s64 + 10376;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827afa84
	goto loc_827AFA84;
loc_827AFA80:
	// li r11,0
	r11.s64 = 0;
loc_827AFA84:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827afad0
	if (!cr6.eq) goto loc_827AFAD0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827afab0
	if (cr6.eq) goto loc_827AFAB0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827AFAB0:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-29384(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -29384);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827AFAD0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_827AFAF0"))) PPC_WEAK_FUNC(sub_827AFAF0);
PPC_FUNC_IMPL(__imp__sub_827AFAF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827afb48
	if (cr0.eq) goto loc_827AFB48;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,10396
	ctx.r9.s64 = r11.s64 + 10396;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827afb4c
	goto loc_827AFB4C;
loc_827AFB48:
	// li r11,0
	r11.s64 = 0;
loc_827AFB4C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827afb98
	if (!cr6.eq) goto loc_827AFB98;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827afb78
	if (cr6.eq) goto loc_827AFB78;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827AFB78:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-29384(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -29384);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827AFB98:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_827AFBB8"))) PPC_WEAK_FUNC(sub_827AFBB8);
PPC_FUNC_IMPL(__imp__sub_827AFBB8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827afbfc
	if (cr0.eq) goto loc_827AFBFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_827AFBFC:
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

__attribute__((alias("__imp__sub_827AFC18"))) PPC_WEAK_FUNC(sub_827AFC18);
PPC_FUNC_IMPL(__imp__sub_827AFC18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r5,r11,10504
	ctx.r5.s64 = r11.s64 + 10504;
	// bl 0x825dee70
	sub_825DEE70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df458
	sub_825DF458(ctx, base);
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,29232
	r11.s64 = r11.s64 + 29232;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f0,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r7,-23007
	ctx.r4.s64 = ctx.r7.s64 + -23007;
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,10488
	ctx.r4.s64 = r11.s64 + 10488;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df4f8
	sub_825DF4F8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,10472
	ctx.r4.s64 = r11.s64 + 10472;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,10464
	ctx.r4.s64 = r11.s64 + 10464;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df4f8
	sub_825DF4F8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,10452
	ctx.r4.s64 = r11.s64 + 10452;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,10436
	ctx.r4.s64 = r11.s64 + 10436;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,10424
	ctx.r4.s64 = r11.s64 + 10424;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df4f8
	sub_825DF4F8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,10412
	ctx.r4.s64 = r11.s64 + 10412;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df4f8
	sub_825DF4F8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x825df4c8
	sub_825DF4C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df490
	sub_825DF490(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827afd50
	if (cr6.eq) goto loc_827AFD50;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827AFD50:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AFD60"))) PPC_WEAK_FUNC(sub_827AFD60);
PPC_FUNC_IMPL(__imp__sub_827AFD60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,196(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lfs f0,2244(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f0.f64 = double(temp.f32);
	// lfs f13,180(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x827afdc8
	if (cr6.lt) goto loc_827AFDC8;
	// li r10,160
	ctx.r10.s64 = 160;
	// lvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lvx128 v62,r11,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v63,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// lfs f13,180(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// vmsum3fp128 v63,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x827afdc8
	if (cr6.gt) goto loc_827AFDC8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827afef0
	goto loc_827AFEF0;
loc_827AFDC8:
	// lwz r9,196(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// li r10,208
	ctx.r10.s64 = 208;
	// li r11,192
	r11.s64 = 192;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r9,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r9,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// vmsum3fp128 v63,v63,v63
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x827afeec
	if (cr6.lt) goto loc_827AFEEC;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r9,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r9,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bge cr6,0x827afe2c
	if (!cr6.lt) goto loc_827AFE2C;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// b 0x827afe30
	goto loc_827AFE30;
loc_827AFE2C:
	// fmr f12,f10
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f10.f64;
loc_827AFE30:
	// lfs f7,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// fcmpu cr6,f7,f6
	cr6.compare(ctx.f7.f64, ctx.f6.f64);
	// bge cr6,0x827afe48
	if (!cr6.lt) goto loc_827AFE48;
	// fmr f13,f7
	ctx.f13.f64 = ctx.f7.f64;
	// b 0x827afe4c
	goto loc_827AFE4C;
loc_827AFE48:
	// fmr f13,f6
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f6.f64;
loc_827AFE4C:
	// lfs f9,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f9,f8
	cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// bge cr6,0x827afe64
	if (!cr6.lt) goto loc_827AFE64;
	// fmr f0,f9
	f0.f64 = ctx.f9.f64;
	// b 0x827afe68
	goto loc_827AFE68;
loc_827AFE64:
	// fmr f0,f8
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f8.f64;
loc_827AFE68:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f11,f10
	cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bgt cr6,0x827afe8c
	if (cr6.gt) goto loc_827AFE8C;
	// fmr f11,f10
	ctx.f11.f64 = ctx.f10.f64;
loc_827AFE8C:
	// fcmpu cr6,f7,f6
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f7.f64, ctx.f6.f64);
	// ble cr6,0x827afe9c
	if (!cr6.gt) goto loc_827AFE9C;
	// fmr f13,f7
	ctx.f13.f64 = ctx.f7.f64;
	// b 0x827afea0
	goto loc_827AFEA0;
loc_827AFE9C:
	// fmr f13,f6
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f6.f64;
loc_827AFEA0:
	// fcmpu cr6,f9,f8
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// ble cr6,0x827afeb0
	if (!cr6.gt) goto loc_827AFEB0;
	// fmr f0,f9
	f0.f64 = ctx.f9.f64;
	// b 0x827afeb4
	goto loc_827AFEB4;
loc_827AFEB0:
	// fmr f0,f8
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f8.f64;
loc_827AFEB4:
	// stfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82e86550
	sub_82E86550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e86588
	sub_82E86588(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x827afef0
	if (!cr0.eq) goto loc_827AFEF0;
loc_827AFEEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827AFEF0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AFF08"))) PPC_WEAK_FUNC(sub_827AFF08);
PPC_FUNC_IMPL(__imp__sub_827AFF08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r6,24
	ctx.r6.s64 = 24;
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// addi r4,r10,2300
	ctx.r4.s64 = ctx.r10.s64 + 2300;
	// li r5,45
	ctx.r5.s64 = 45;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// bl 0x82df9d90
	sub_82DF9D90(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x827aff70
	if (cr0.eq) goto loc_827AFF70;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// bl 0x827aeda0
	sub_827AEDA0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r26,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r26.u8);
	// stb r11,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r11.u8);
loc_827AFF70:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_827AFF80"))) PPC_WEAK_FUNC(sub_827AFF80);
PPC_FUNC_IMPL(__imp__sub_827AFF80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r6,24
	ctx.r6.s64 = 24;
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// addi r4,r10,2300
	ctx.r4.s64 = ctx.r10.s64 + 2300;
	// li r5,45
	ctx.r5.s64 = 45;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// bl 0x82df9d90
	sub_82DF9D90(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827affec
	if (cr0.eq) goto loc_827AFFEC;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r28.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stb r27,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, r27.u8);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, r11.u8);
loc_827AFFEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_827AFFF8"))) PPC_WEAK_FUNC(sub_827AFFF8);
PPC_FUNC_IMPL(__imp__sub_827AFFF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// beq cr6,0x827b003c
	if (cr6.eq) goto loc_827B003C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827B0020:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x827b0020
	if (!cr0.eq) goto loc_827B0020;
loc_827B003C:
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lbz r11,16(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0050"))) PPC_WEAK_FUNC(sub_827B0050);
PPC_FUNC_IMPL(__imp__sub_827B0050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827b0074
	if (cr6.eq) goto loc_827B0074;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827B0074:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827b0084
	if (cr6.eq) goto loc_827B0084;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827B0084:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827b0094
	if (cr6.eq) goto loc_827B0094;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827B0094:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
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

__attribute__((alias("__imp__sub_827B00B0"))) PPC_WEAK_FUNC(sub_827B00B0);
PPC_FUNC_IMPL(__imp__sub_827B00B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x827b00dc
	if (cr6.eq) goto loc_827B00DC;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x827aee60
	sub_827AEE60(ctx, base);
	// b 0x827b00e8
	goto loc_827B00E8;
loc_827B00DC:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// addi r11,r11,-28048
	r11.s64 = r11.s64 + -28048;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_827B00E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B00F8"))) PPC_WEAK_FUNC(sub_827B00F8);
PPC_FUNC_IMPL(__imp__sub_827B00F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x827b0124
	if (cr6.eq) goto loc_827B0124;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x827aeef0
	sub_827AEEF0(ctx, base);
	// b 0x827b0130
	goto loc_827B0130;
loc_827B0124:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// addi r11,r11,-27776
	r11.s64 = r11.s64 + -27776;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_827B0130:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0140"))) PPC_WEAK_FUNC(sub_827B0140);
PPC_FUNC_IMPL(__imp__sub_827B0140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x827b016c
	if (cr6.eq) goto loc_827B016C;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x827aef80
	sub_827AEF80(ctx, base);
	// b 0x827b0178
	goto loc_827B0178;
loc_827B016C:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// addi r11,r11,-27528
	r11.s64 = r11.s64 + -27528;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_827B0178:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B0188"))) PPC_WEAK_FUNC(sub_827B0188);
PPC_FUNC_IMPL(__imp__sub_827B0188) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x825df458
	sub_825DF458(ctx, base);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	f0.f64 = double(temp.f32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r24,1
	r24.s64 = 1;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// lwz r31,0(r5)
	r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r31,r5
	cr6.compare<uint32_t>(r31.u32, ctx.r5.u32, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// beq cr6,0x827b02c8
	if (cr6.eq) goto loc_827B02C8;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lfs f31,2244(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2244);
	f31.f64 = double(temp.f32);
	// addi r29,r11,5548
	r29.s64 = r11.s64 + 5548;
	// addi r28,r10,-17868
	r28.s64 = ctx.r10.s64 + -17868;
	// addi r27,r9,27704
	r27.s64 = ctx.r9.s64 + 27704;
	// addi r26,r8,10516
	r26.s64 = ctx.r8.s64 + 10516;
loc_827B0220:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827b0230
	if (cr0.eq) goto loc_827B0230;
	// li r24,0
	r24.s64 = 0;
	// b 0x827b02b0
	goto loc_827B02B0;
loc_827B0230:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x825dee70
	sub_825DEE70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825df458
	sub_825DF458(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// bl 0x825df510
	sub_825DF510(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x825df4f8
	sub_825DF4F8(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r11,16
	ctx.r5.s64 = r11.s64 + 16;
	// bl 0x825df508
	sub_825DF508(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x825df4c8
	sub_825DF4C8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825df490
	sub_825DF490(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827b02b0
	if (cr6.eq) goto loc_827B02B0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827B02B0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827e1578
	sub_827E1578(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x827b0220
	if (!cr6.eq) goto loc_827B0220;
loc_827B02C8:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-30900
	ctx.r4.s64 = r11.s64 + -30900;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df518
	sub_825DF518(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,-12828
	ctx.r4.s64 = r11.s64 + -12828;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-12864
	ctx.r4.s64 = r11.s64 + -12864;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df518
	sub_825DF518(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r11,-12840
	ctx.r4.s64 = r11.s64 + -12840;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df518
	sub_825DF518(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,-12888
	ctx.r4.s64 = r11.s64 + -12888;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df518
	sub_825DF518(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// addi r4,r11,-12904
	ctx.r4.s64 = r11.s64 + -12904;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df518
	sub_825DF518(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,27712
	ctx.r4.s64 = r11.s64 + 27712;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df518
	sub_825DF518(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df4c8
	sub_825DF4C8(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df490
	sub_825DF490(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831b0b68
	return;
}

