#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823171D0"))) PPC_WEAK_FUNC(sub_823171D0);
PPC_FUNC_IMPL(__imp__sub_823171D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1196(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1196);
	// b 0x82333d90
	sub_82333D90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823171D8"))) PPC_WEAK_FUNC(sub_823171D8);
PPC_FUNC_IMPL(__imp__sub_823171D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1196(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1196);
	// b 0x82333da0
	sub_82333DA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823171E0"))) PPC_WEAK_FUNC(sub_823171E0);
PPC_FUNC_IMPL(__imp__sub_823171E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1196(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1196);
	// b 0x82333db0
	sub_82333DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823171E8"))) PPC_WEAK_FUNC(sub_823171E8);
PPC_FUNC_IMPL(__imp__sub_823171E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1196(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1196);
	// b 0x82333dd0
	sub_82333DD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823171F0"))) PPC_WEAK_FUNC(sub_823171F0);
PPC_FUNC_IMPL(__imp__sub_823171F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,1176(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1176);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8231721c
	if (cr6.eq) goto loc_8231721C;
	// lwz r11,1168(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1168);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8231721c
	if (!cr6.eq) goto loc_8231721C;
	// lwz r11,1192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1192);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_8231721C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82317228"))) PPC_WEAK_FUNC(sub_82317228);
PPC_FUNC_IMPL(__imp__sub_82317228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v63{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82316eb0
	sub_82316EB0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82e84f18
	sub_82E84F18(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e84ee0
	sub_82E84EE0(ctx, base);
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82317278"))) PPC_WEAK_FUNC(sub_82317278);
PPC_FUNC_IMPL(__imp__sub_82317278) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r4,39
	ctx.r4.s64 = 39;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823172d8
	if (cr0.eq) goto loc_823172D8;
	// li r4,38
	ctx.r4.s64 = 38;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d90
	sub_82333D90(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f31,3348(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 3348, temp.u32);
	// stfs f30,3352(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 3352, temp.u32);
	// stb r10,3344(r31)
	PPC_STORE_U8(r31.u32 + 3344, ctx.r10.u8);
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,3312(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 3312, temp.u32);
loc_823172D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823172F8"))) PPC_WEAK_FUNC(sub_823172F8);
PPC_FUNC_IMPL(__imp__sub_823172F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r3,1196(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1196);
	// li r4,39
	ctx.r4.s64 = 39;
	// beq 0x8231730c
	if (cr0.eq) goto loc_8231730C;
	// b 0x82333d90
	sub_82333D90(ctx, base);
	return;
loc_8231730C:
	// b 0x82333da0
	sub_82333DA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82317310"))) PPC_WEAK_FUNC(sub_82317310);
PPC_FUNC_IMPL(__imp__sub_82317310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lbz r11,1288(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1288);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231735c
	if (cr0.eq) goto loc_8231735C;
	// lis r11,-31961
	r11.s64 = -2094596096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-17936(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -17936);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307e18
	sub_82307E18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82317360
	goto loc_82317360;
loc_8231735C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82317360:
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

__attribute__((alias("__imp__sub_82317378"))) PPC_WEAK_FUNC(sub_82317378);
PPC_FUNC_IMPL(__imp__sub_82317378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v63{};
	// li r11,1008
	r11.s64 = 1008;
	// lvx128 v63,r4,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82317388"))) PPC_WEAK_FUNC(sub_82317388);
PPC_FUNC_IMPL(__imp__sub_82317388) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,508(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x8245db60
	sub_8245DB60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82317398"))) PPC_WEAK_FUNC(sub_82317398);
PPC_FUNC_IMPL(__imp__sub_82317398) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lbz r11,1204(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1204);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82317434
	if (cr0.eq) goto loc_82317434;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,1176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1176);
	// bl 0x822d20b0
	sub_822D20B0(ctx, base);
	// lfs f13,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lfs f0,-20128(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20128);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x823173ec
	if (!cr6.gt) goto loc_823173EC;
	// li r11,1136
	r11.s64 = 1136;
	// lvx128 v63,r31,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x823173f0
	goto loc_823173F0;
loc_823173EC:
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_823173F0:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// lfs f0,2240(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82317428
	if (!cr6.lt) goto loc_82317428;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,-24780(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24780);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e86250
	sub_82E86250(ctx, base);
loc_82317428:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82317438
	goto loc_82317438;
loc_82317434:
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82317438:
	// stvx128 v63,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82317448"))) PPC_WEAK_FUNC(sub_82317448);
PPC_FUNC_IMPL(__imp__sub_82317448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v63{};
	// li r11,1040
	r11.s64 = 1040;
	// lvx128 v63,r4,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82317458"))) PPC_WEAK_FUNC(sub_82317458);
PPC_FUNC_IMPL(__imp__sub_82317458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v63{};
	// li r11,768
	r11.s64 = 768;
	// lvx128 v63,r4,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82317468"))) PPC_WEAK_FUNC(sub_82317468);
PPC_FUNC_IMPL(__imp__sub_82317468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v63{};
	// li r11,784
	r11.s64 = 784;
	// lvx128 v63,r4,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82317478"))) PPC_WEAK_FUNC(sub_82317478);
PPC_FUNC_IMPL(__imp__sub_82317478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v63{};
	// li r11,800
	r11.s64 = 800;
	// lvx128 v63,r4,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82317488"))) PPC_WEAK_FUNC(sub_82317488);
PPC_FUNC_IMPL(__imp__sub_82317488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v63{};
	// li r11,816
	r11.s64 = 816;
	// lvx128 v63,r4,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82317498"))) PPC_WEAK_FUNC(sub_82317498);
PPC_FUNC_IMPL(__imp__sub_82317498) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// bl 0x82303038
	sub_82303038(ctx, base);
	// li r4,27
	ctx.r4.s64 = 27;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d90
	sub_82333D90(ctx, base);
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333da0
	sub_82333DA0(ctx, base);
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lwz r3,1416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1416);
	// addi r4,r11,29088
	ctx.r4.s64 = r11.s64 + 29088;
	// bl 0x82e1bc30
	sub_82E1BC30(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,1356(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1356, temp.u32);
	// stfs f0,1360(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1360, temp.u32);
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

__attribute__((alias("__imp__sub_82317508"))) PPC_WEAK_FUNC(sub_82317508);
PPC_FUNC_IMPL(__imp__sub_82317508) {
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
	// lbz r11,1204(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1204);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82317538
	if (cr0.eq) goto loc_82317538;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r3,12204(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12204);
	// b 0x82317540
	goto loc_82317540;
loc_82317538:
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r3,12196(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12196);
loc_82317540:
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
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

__attribute__((alias("__imp__sub_82317578"))) PPC_WEAK_FUNC(sub_82317578);
PPC_FUNC_IMPL(__imp__sub_82317578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	PPCVRegister v63{};
	PPCRegister temp{};
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
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r31,1232
	ctx.r3.s64 = r31.s64 + 1232;
	// stvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e861d8
	sub_82E861D8(ctx, base);
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307eb8
	sub_82307EB8(ctx, base);
	// li r6,15
	ctx.r6.s64 = 15;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x8245eb00
	sub_8245EB00(ctx, base);
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

__attribute__((alias("__imp__sub_823175D0"))) PPC_WEAK_FUNC(sub_823175D0);
PPC_FUNC_IMPL(__imp__sub_823175D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1760(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1760);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823175D8"))) PPC_WEAK_FUNC(sub_823175D8);
PPC_FUNC_IMPL(__imp__sub_823175D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v63{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// addi r11,r11,-20912
	r11.s64 = r11.s64 + -20912;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// li r10,976
	ctx.r10.s64 = 976;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// lis r9,-31961
	ctx.r9.s64 = -2094596096;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r4,-17964(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17964);
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307e18
	sub_82307E18(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r11,276(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f29.f64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82340568
	sub_82340568(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82317698"))) PPC_WEAK_FUNC(sub_82317698);
PPC_FUNC_IMPL(__imp__sub_82317698) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1772(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1772);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823176A0"))) PPC_WEAK_FUNC(sub_823176A0);
PPC_FUNC_IMPL(__imp__sub_823176A0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,41
	ctx.r4.s64 = 41;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8231777c
	if (!cr0.eq) goto loc_8231777C;
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8231777c
	if (!cr0.eq) goto loc_8231777C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r4,1204(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 1204);
	// bl 0x82316488
	sub_82316488(ctx, base);
	// lis r11,-31961
	r11.s64 = -2094596096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-17996(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -17996);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307e18
	sub_82307E18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-31961
	r11.s64 = -2094596096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-17696(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -17696);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307db0
	sub_82307DB0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82342d20
	sub_82342D20(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7280
	ctx.r4.s64 = r11.s64 + -7280;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,10
	ctx.r6.s64 = 10;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8230b7e8
	sub_8230B7E8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82317774
	if (cr6.eq) goto loc_82317774;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82317774:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_8231777C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82317788"))) PPC_WEAK_FUNC(sub_82317788);
PPC_FUNC_IMPL(__imp__sub_82317788) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,41
	ctx.r4.s64 = 41;
	// lwz r3,1196(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82317804
	if (!cr0.eq) goto loc_82317804;
	// lis r31,-31961
	r31.s64 = -2094596096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-17952(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + -17952);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
	// bl 0x82307e20
	sub_82307E20(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82dfafc0
	sub_82DFAFC0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82317804
	if (cr0.eq) goto loc_82317804;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-17952(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + -17952);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82307e18
	sub_82307E18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_82317804:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82317810"))) PPC_WEAK_FUNC(sub_82317810);
PPC_FUNC_IMPL(__imp__sub_82317810) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1196(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1196);
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82333d78
	sub_82333D78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82317820"))) PPC_WEAK_FUNC(sub_82317820);
PPC_FUNC_IMPL(__imp__sub_82317820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
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
	// li r4,84
	ctx.r4.s64 = 84;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// stfs f1,1252(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 1252, temp.u32);
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

__attribute__((alias("__imp__sub_82317858"))) PPC_WEAK_FUNC(sub_82317858);
PPC_FUNC_IMPL(__imp__sub_82317858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// li r4,49
	ctx.r4.s64 = 49;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// fdivs f1,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f31.f64 / ctx.f1.f64));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823178A8"))) PPC_WEAK_FUNC(sub_823178A8);
PPC_FUNC_IMPL(__imp__sub_823178A8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-9716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -9716);
	f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
	// bl 0x831b4448
	sub_831B4448(ctx, base);
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

__attribute__((alias("__imp__sub_823178D8"))) PPC_WEAK_FUNC(sub_823178D8);
PPC_FUNC_IMPL(__imp__sub_823178D8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,1412(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	f0.f64 = double(temp.f32);
	// stfs f1,1292(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1292, temp.u32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x823178ec
	if (!cr6.lt) goto loc_823178EC;
	// fmr f0,f1
	f0.f64 = ctx.f1.f64;
loc_823178EC:
	// stfs f0,1412(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1412, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823178F8"))) PPC_WEAK_FUNC(sub_823178F8);
PPC_FUNC_IMPL(__imp__sub_823178F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82317920
	if (!cr0.eq) goto loc_82317920;
	// li r4,23
	ctx.r4.s64 = 23;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d90
	sub_82333D90(ctx, base);
loc_82317920:
	// li r4,22
	ctx.r4.s64 = 22;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823179b0
	if (!cr0.eq) goto loc_823179B0;
	// li r4,22
	ctx.r4.s64 = 22;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d90
	sub_82333D90(ctx, base);
	// lis r11,-31961
	r11.s64 = -2094596096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-17576(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -17576);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8230a3f8
	sub_8230A3F8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82317970
	if (cr6.eq) goto loc_82317970;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82317970:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31961
	r11.s64 = -2094596096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-17712(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -17712);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307db0
	sub_82307DB0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_823179B0:
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

__attribute__((alias("__imp__sub_823179C8"))) PPC_WEAK_FUNC(sub_823179C8);
PPC_FUNC_IMPL(__imp__sub_823179C8) {
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
	// li r4,22
	ctx.r4.s64 = 22;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333da0
	sub_82333DA0(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r3,12212(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12212);
	// bl 0x8245d018
	sub_8245D018(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8230b630
	sub_8230B630(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,1300(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1300, temp.u32);
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

__attribute__((alias("__imp__sub_82317A28"))) PPC_WEAK_FUNC(sub_82317A28);
PPC_FUNC_IMPL(__imp__sub_82317A28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCVRegister v62{};
	PPCVRegister v63{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82317b20
	if (!cr0.eq) goto loc_82317B20;
	// li r11,976
	r11.s64 = 976;
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// li r4,115
	ctx.r4.s64 = 115;
	// lvx128 v62,r31,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f31,-9716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -9716);
	f31.f64 = double(temp.f32);
	// fmuls f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 * f31.f64));
	// bl 0x831b1868
	sub_831B1868(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x82317b20
	if (cr6.gt) goto loc_82317B20;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r4,r31,1696
	ctx.r4.s64 = r31.s64 + 1696;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fneg f0,f11
	f0.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r4,115
	ctx.r4.s64 = 115;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// fmuls f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * f31.f64));
	// bl 0x831b1868
	sub_831B1868(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82317b24
	if (!cr6.gt) goto loc_82317B24;
loc_82317B20:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82317B24:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82317B40"))) PPC_WEAK_FUNC(sub_82317B40);
PPC_FUNC_IMPL(__imp__sub_82317B40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lbz r11,3216(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 3216);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82317c50
	if (!cr0.eq) goto loc_82317C50;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-20912
	r11.s64 = r11.s64 + -20912;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// lfs f0,-21820(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -21820);
	f0.f64 = double(temp.f32);
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82317be0
	if (!cr6.gt) goto loc_82317BE0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8230a4e0
	sub_8230A4E0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e86068
	sub_82E86068(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e86068
	sub_82E86068(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// b 0x82317c30
	goto loc_82317C30;
loc_82317BE0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// lfs f13,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82e86068
	sub_82E86068(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e861d8
	sub_82E861D8(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e86068
	sub_82E86068(ctx, base);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
loc_82317C30:
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r30,3152
	ctx.r3.s64 = r30.s64 + 3152;
	// bl 0x82e85878
	sub_82E85878(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,3216(r30)
	PPC_STORE_U8(r30.u32 + 3216, r11.u8);
loc_82317C50:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_82317C68"))) PPC_WEAK_FUNC(sub_82317C68);
PPC_FUNC_IMPL(__imp__sub_82317C68) {
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
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r28,28
	r11.s64 = r28.s64 + 28;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// rlwinm r11,r11,6,0,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lbzx r11,r11,r31
	r11.u64 = PPC_LOAD_U8(r11.u32 + r31.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82317d24
	if (cr0.eq) goto loc_82317D24;
	// addi r10,r29,28
	ctx.r10.s64 = r29.s64 + 28;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// lbzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + r31.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82317d24
	if (cr0.eq) goto loc_82317D24;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lis r30,-31946
	r30.s64 = -2093613056;
	// lwz r11,12256(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12256);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82317cdc
	if (!cr0.eq) goto loc_82317CDC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r11,12256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12256, r11.u32);
	// lfd f1,-7264(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r9.u32 + -7264);
	// bl 0x831b1868
	sub_831B1868(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,12252(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 12252, temp.u32);
	// b 0x82317ce0
	goto loc_82317CE0;
loc_82317CDC:
	// lfs f0,12252(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12252);
	f0.f64 = double(temp.f32);
loc_82317CE0:
	// rlwinm r10,r29,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r11,r28,6,0,25
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 6) & 0xFFFFFFC0;
	// li r9,1808
	ctx.r9.s64 = 1808;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r10,r9
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r11,r9
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82317d1c
	if (!cr6.lt) goto loc_82317D1C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82317d3c
	goto loc_82317D3C;
loc_82317D1C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82317d3c
	goto loc_82317D3C;
loc_82317D24:
	// addi r10,r29,28
	ctx.r10.s64 = r29.s64 + 28;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// lbzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + r31.u32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_82317D3C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82317D48"))) PPC_WEAK_FUNC(sub_82317D48);
PPC_FUNC_IMPL(__imp__sub_82317D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v63{};
	// li r11,1744
	r11.s64 = 1744;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82317D58"))) PPC_WEAK_FUNC(sub_82317D58);
PPC_FUNC_IMPL(__imp__sub_82317D58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v62{};
	PPCVRegister v63{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82317d8c
	if (cr0.eq) goto loc_82317D8C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82317e00
	goto loc_82317E00;
loc_82317D8C:
	// lbz r11,960(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 960);
	// li r4,115
	ctx.r4.s64 = 115;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82317dc0
	if (cr0.eq) goto loc_82317DC0;
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,8256(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8256);
	f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + f0.f64));
	// lfs f0,-9716(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9716);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// b 0x82317dd0
	goto loc_82317DD0;
loc_82317DC0:
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-9716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -9716);
	f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
loc_82317DD0:
	// lvx128 v63,r0,r29
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v62,r0,r30
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x831b1868
	sub_831B1868(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82317e00
	if (!cr6.lt) goto loc_82317E00;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82317E00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82317E08"))) PPC_WEAK_FUNC(sub_82317E08);
PPC_FUNC_IMPL(__imp__sub_82317E08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
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
	// lwz r3,508(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// clrlwi. r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r4,120
	ctx.r4.s64 = 120;
	// bne 0x82317e38
	if (!cr0.eq) goto loc_82317E38;
	// li r4,121
	ctx.r4.s64 = 121;
loc_82317E38:
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r30
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32255
	r11.s64 = -2113863680;
	// vmsum3fp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// lfs f0,-9716(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -9716);
	f0.f64 = double(temp.f32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x831b1868
	sub_831B1868(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82317e78
	if (!cr6.lt) goto loc_82317E78;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82317E78:
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

__attribute__((alias("__imp__sub_82317E90"))) PPC_WEAK_FUNC(sub_82317E90);
PPC_FUNC_IMPL(__imp__sub_82317E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,3272(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3272);
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82317EA0"))) PPC_WEAK_FUNC(sub_82317EA0);
PPC_FUNC_IMPL(__imp__sub_82317EA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1200(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1200);
	// b 0x82333d78
	sub_82333D78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82317EA8"))) PPC_WEAK_FUNC(sub_82317EA8);
PPC_FUNC_IMPL(__imp__sub_82317EA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1200(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1200);
	// b 0x82333d90
	sub_82333D90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82317EB0"))) PPC_WEAK_FUNC(sub_82317EB0);
PPC_FUNC_IMPL(__imp__sub_82317EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v63{};
	// li r11,288
	r11.s64 = 288;
	// lvx128 v63,r3,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82317EC0"))) PPC_WEAK_FUNC(sub_82317EC0);
PPC_FUNC_IMPL(__imp__sub_82317EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwa r11,3272(r3)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 3272));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lfs f0,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fnmsubs f13,f13,f2,f1
	ctx.f13.f64 = double(float(-(ctx.f13.f64 * ctx.f2.f64 - ctx.f1.f64)));
	// fsel f1,f13,f13,f0
	ctx.f1.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82317EE8"))) PPC_WEAK_FUNC(sub_82317EE8);
PPC_FUNC_IMPL(__imp__sub_82317EE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1200(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1200);
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x82333d90
	sub_82333D90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82317EF8"))) PPC_WEAK_FUNC(sub_82317EF8);
PPC_FUNC_IMPL(__imp__sub_82317EF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1196(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1196);
	// li r4,12
	ctx.r4.s64 = 12;
	// b 0x82333d90
	sub_82333D90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82317F08"))) PPC_WEAK_FUNC(sub_82317F08);
PPC_FUNC_IMPL(__imp__sub_82317F08) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1196(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1196);
	// li r4,13
	ctx.r4.s64 = 13;
	// b 0x82333d90
	sub_82333D90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82317F18"))) PPC_WEAK_FUNC(sub_82317F18);
PPC_FUNC_IMPL(__imp__sub_82317F18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31961
	r29.s64 = -2094596096;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,-17564(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + -17564);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82307e00
	sub_82307E00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-17564(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + -17564);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8230a3f8
	sub_8230A3F8(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82317f8c
	if (cr6.eq) goto loc_82317F8C;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82317F8C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823503f0
	sub_823503F0(ctx, base);
	// lis r11,-31961
	r11.s64 = -2094596096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-17604(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -17604);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82307de8
	sub_82307DE8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234f0e0
	sub_8234F0E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82317FF0"))) PPC_WEAK_FUNC(sub_82317FF0);
PPC_FUNC_IMPL(__imp__sub_82317FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v63{};
	// lbz r10,848(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 848);
	// addi r11,r4,848
	r11.s64 = ctx.r4.s64 + 848;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r9,64
	ctx.r9.s64 = 64;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// li r10,80
	ctx.r10.s64 = 80;
	// lvx128 v63,r11,r6
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r7
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r8
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r9
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,944(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 944);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, r11.u32);
	// lwz r11,948(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 948);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82318050"))) PPC_WEAK_FUNC(sub_82318050);
PPC_FUNC_IMPL(__imp__sub_82318050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v63{};
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r11,r3,848
	r11.s64 = ctx.r3.s64 + 848;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r9,64
	ctx.r9.s64 = 64;
	// stb r10,848(r3)
	PPC_STORE_U8(ctx.r3.u32 + 848, ctx.r10.u8);
	// lvx128 v63,r4,r6
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r6
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,80
	ctx.r10.s64 = 80;
	// lvx128 v63,r4,r7
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r7
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r4,r8
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r4,r9
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r9
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r4,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,96(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// stw r11,944(r3)
	PPC_STORE_U32(ctx.r3.u32 + 944, r11.u32);
	// lwz r11,100(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// stw r11,948(r3)
	PPC_STORE_U32(ctx.r3.u32 + 948, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823180B0"))) PPC_WEAK_FUNC(sub_823180B0);
PPC_FUNC_IMPL(__imp__sub_823180B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v63{};
	// li r11,864
	r11.s64 = 864;
	// lvx128 v63,r4,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823180C0"))) PPC_WEAK_FUNC(sub_823180C0);
PPC_FUNC_IMPL(__imp__sub_823180C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,508(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// li r4,183
	ctx.r4.s64 = 183;
	// b 0x8245db60
	sub_8245DB60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823180D0"))) PPC_WEAK_FUNC(sub_823180D0);
PPC_FUNC_IMPL(__imp__sub_823180D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82307eb8
	sub_82307EB8(ctx, base);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// li r4,183
	ctx.r4.s64 = 183;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8245eac0
	sub_8245EAC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82318108"))) PPC_WEAK_FUNC(sub_82318108);
PPC_FUNC_IMPL(__imp__sub_82318108) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,508(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// li r4,182
	ctx.r4.s64 = 182;
	// b 0x8245db60
	sub_8245DB60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82318118"))) PPC_WEAK_FUNC(sub_82318118);
PPC_FUNC_IMPL(__imp__sub_82318118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82307eb8
	sub_82307EB8(ctx, base);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// li r4,182
	ctx.r4.s64 = 182;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8245eac0
	sub_8245EAC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82318150"))) PPC_WEAK_FUNC(sub_82318150);
PPC_FUNC_IMPL(__imp__sub_82318150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r11,r31,1616
	r11.s64 = r31.s64 + 1616;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r10,1616(r31)
	PPC_STORE_U32(r31.u32 + 1616, ctx.r10.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r29,1616(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 1616);
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f1,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d24c8
	sub_822D24C8(ctx, base);
	// lwz r3,1616(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1616);
	// bl 0x822d1f30
	sub_822D1F30(ctx, base);
	// stb r30,1624(r31)
	PPC_STORE_U8(r31.u32 + 1624, r30.u8);
	// lis r11,-31961
	r11.s64 = -2094596096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-17704(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -17704);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307db0
	sub_82307DB0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_823181E0"))) PPC_WEAK_FUNC(sub_823181E0);
PPC_FUNC_IMPL(__imp__sub_823181E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82307eb8
	sub_82307EB8(ctx, base);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// li r4,38
	ctx.r4.s64 = 38;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8245eac0
	sub_8245EAC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82318218"))) PPC_WEAK_FUNC(sub_82318218);
PPC_FUNC_IMPL(__imp__sub_82318218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82307eb8
	sub_82307EB8(ctx, base);
	// li r4,38
	ctx.r4.s64 = 38;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8245e8f8
	sub_8245E8F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82318248"))) PPC_WEAK_FUNC(sub_82318248);
PPC_FUNC_IMPL(__imp__sub_82318248) {
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
	// lfd f2,-7256(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(r11.u32 + -7256);
	// bl 0x831b3f58
	sub_831B3F58(ctx, base);
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

__attribute__((alias("__imp__sub_82318278"))) PPC_WEAK_FUNC(sub_82318278);
PPC_FUNC_IMPL(__imp__sub_82318278) {
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
	// lis r29,-31961
	r29.s64 = -2094596096;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,-17556(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + -17556);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82307e00
	sub_82307E00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-17556(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + -17556);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8230a3f8
	sub_8230A3F8(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823182e4
	if (cr6.eq) goto loc_823182E4;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_823182E4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82351770
	sub_82351770(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82318300"))) PPC_WEAK_FUNC(sub_82318300);
PPC_FUNC_IMPL(__imp__sub_82318300) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,189
	ctx.r4.s64 = 189;
	// lfs f31,3276(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 3276);
	f31.f64 = double(temp.f32);
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, ctx.f1.f64);
	// blt cr6,0x8231835c
	if (cr6.lt) goto loc_8231835C;
	// lis r11,-31961
	r11.s64 = -2094596096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-17912(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -17912);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307e18
	sub_82307E18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82318360
	goto loc_82318360;
loc_8231835C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82318360:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82318378"))) PPC_WEAK_FUNC(sub_82318378);
PPC_FUNC_IMPL(__imp__sub_82318378) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8230a898
	sub_8230A898(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	f0.f64 = double(temp.f32);
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// beq cr6,0x823183dc
	if (cr6.eq) goto loc_823183DC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_823183DC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_823183F8"))) PPC_WEAK_FUNC(sub_823183F8);
PPC_FUNC_IMPL(__imp__sub_823183F8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// beq cr6,0x82318428
	if (cr6.eq) goto loc_82318428;
	// bl 0x82307eb8
	sub_82307EB8(ctx, base);
	// li r4,110
	ctx.r4.s64 = 110;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8245e8f8
	sub_8245E8F8(ctx, base);
	// b 0x8231845c
	goto loc_8231845C;
loc_82318428:
	// li r4,130
	ctx.r4.s64 = 130;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,-31000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31000);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82307eb8
	sub_82307EB8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,110
	ctx.r4.s64 = 110;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8245eac0
	sub_8245EAC0(ctx, base);
loc_8231845C:
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

__attribute__((alias("__imp__sub_82318470"))) PPC_WEAK_FUNC(sub_82318470);
PPC_FUNC_IMPL(__imp__sub_82318470) {
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
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// beq cr6,0x8231850c
	if (cr6.eq) goto loc_8231850C;
	// lis r30,-31961
	r30.s64 = -2094596096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-17552(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -17552);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307e00
	sub_82307E00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-17552(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -17552);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8230a3f8
	sub_8230A3F8(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823184f8
	if (cr6.eq) goto loc_823184F8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_823184F8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823504c0
	sub_823504C0(ctx, base);
loc_8231850C:
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

__attribute__((alias("__imp__sub_82318528"))) PPC_WEAK_FUNC(sub_82318528);
PPC_FUNC_IMPL(__imp__sub_82318528) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31961
	r29.s64 = -2094596096;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r4,-17552(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + -17552);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82307e00
	sub_82307E00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-17552(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + -17552);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8230a3f8
	sub_8230A3F8(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8231859c
	if (cr6.eq) goto loc_8231859C;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231859C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823504c0
	sub_823504C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823505b0
	sub_823505B0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_823185C8"))) PPC_WEAK_FUNC(sub_823185C8);
PPC_FUNC_IMPL(__imp__sub_823185C8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r31,1472
	ctx.r4.s64 = r31.s64 + 1472;
	// bl 0x82317578
	sub_82317578(ctx, base);
	// li r4,30
	ctx.r4.s64 = 30;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333da0
	sub_82333DA0(ctx, base);
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

__attribute__((alias("__imp__sub_82318608"))) PPC_WEAK_FUNC(sub_82318608);
PPC_FUNC_IMPL(__imp__sub_82318608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82307eb8
	sub_82307EB8(ctx, base);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8245eac0
	sub_8245EAC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82318640"))) PPC_WEAK_FUNC(sub_82318640);
PPC_FUNC_IMPL(__imp__sub_82318640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v63{};
	// li r11,576
	r11.s64 = 576;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82318650"))) PPC_WEAK_FUNC(sub_82318650);
PPC_FUNC_IMPL(__imp__sub_82318650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r4,223
	ctx.r4.s64 = 223;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db18
	sub_8245DB18(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82318680
	if (cr0.eq) goto loc_82318680;
loc_82318678:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823186d8
	goto loc_823186D8;
loc_82318680:
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82318678
	if (!cr0.eq) goto loc_82318678;
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82318678
	if (!cr0.eq) goto loc_82318678;
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82318678
	if (!cr0.eq) goto loc_82318678;
	// li r4,41
	ctx.r4.s64 = 41;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_823186D8:
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

__attribute__((alias("__imp__sub_823186F0"))) PPC_WEAK_FUNC(sub_823186F0);
PPC_FUNC_IMPL(__imp__sub_823186F0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
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
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831b1434
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f0,3388(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 3388);
	f0.f64 = double(temp.f32);
	// lfs f28,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f28.f64 = double(temp.f32);
	// lfs f29,-24780(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24780);
	f29.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	cr6.compare(f0.f64, f28.f64);
	// lfs f31,2240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f31.f64 = double(temp.f32);
	// ble cr6,0x82318790
	if (!cr6.gt) goto loc_82318790;
	// fmr f30,f28
	f30.f64 = f28.f64;
loc_82318740:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(f30.f64, f31.f64);
	// ble cr6,0x823187a0
	if (!cr6.gt) goto loc_823187A0;
	// li r4,192
	ctx.r4.s64 = 192;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// fsubs f0,f30,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f30.f64 - ctx.f1.f64));
	// li r4,193
	ctx.r4.s64 = 193;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// fsel f30,f0,f0,f31
	f30.f64 = f0.f64 >= 0.0 ? f0.f64 : f31.f64;
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// li r4,192
	ctx.r4.s64 = 192;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// fsubs f0,f29,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f29.f64 - ctx.f1.f64));
	// fdivs f0,f30,f0
	f0.f64 = double(float(f30.f64 / f0.f64));
	// fcmpu cr6,f0,f28
	cr6.compare(f0.f64, f28.f64);
	// ble cr6,0x823187e8
	if (!cr6.gt) goto loc_823187E8;
	// fmr f0,f28
	f0.f64 = f28.f64;
	// b 0x823187f0
	goto loc_823187F0;
loc_82318790:
	// fmr f30,f0
	ctx.fpscr.disableFlushMode();
	f30.f64 = f0.f64;
	// fcmpu cr6,f0,f29
	cr6.compare(f0.f64, f29.f64);
	// bge cr6,0x82318740
	if (!cr6.lt) goto loc_82318740;
	// fmr f30,f29
	f30.f64 = f29.f64;
loc_823187A0:
	// li r4,192
	ctx.r4.s64 = 192;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// fmsubs f0,f30,f29,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f30.f64 * f29.f64 - ctx.f1.f64));
	// li r4,193
	ctx.r4.s64 = 193;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// fsel f30,f0,f0,f31
	f30.f64 = f0.f64 >= 0.0 ? f0.f64 : f31.f64;
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// li r4,192
	ctx.r4.s64 = 192;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// fsubs f0,f29,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f29.f64 - ctx.f1.f64));
	// fdivs f0,f30,f0
	f0.f64 = double(float(f30.f64 / f0.f64));
	// fcmpu cr6,f0,f28
	cr6.compare(f0.f64, f28.f64);
	// ble cr6,0x823187fc
	if (!cr6.gt) goto loc_823187FC;
	// fmr f0,f28
	f0.f64 = f28.f64;
	// b 0x82318804
	goto loc_82318804;
loc_823187E8:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f31.f64);
	// blt cr6,0x823187f4
	if (cr6.lt) goto loc_823187F4;
loc_823187F0:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = f0.f64;
loc_823187F4:
	// fadds f31,f31,f28
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f31.f64 + f28.f64));
	// b 0x8231880c
	goto loc_8231880C;
loc_823187FC:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f31.f64);
	// blt cr6,0x82318808
	if (cr6.lt) goto loc_82318808;
loc_82318804:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = f0.f64;
loc_82318808:
	// fsubs f31,f28,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f28.f64 - f31.f64));
loc_8231880C:
	// li r4,195
	ctx.r4.s64 = 195;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fmr f3,f27
	ctx.f3.f64 = f27.f64;
	// bl 0x8249a660
	sub_8249A660(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831b1480
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

__attribute__((alias("__imp__sub_82318850"))) PPC_WEAK_FUNC(sub_82318850);
PPC_FUNC_IMPL(__imp__sub_82318850) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,137
	ctx.r4.s64 = 137;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f31,-9716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -9716);
	f31.f64 = double(temp.f32);
	// fmuls f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 * f31.f64));
	// bl 0x831b1868
	sub_831B1868(ctx, base);
	// li r4,139
	ctx.r4.s64 = 139;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f1.f64));
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// fmuls f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * f31.f64));
	// bl 0x831b1868
	sub_831B1868(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64));
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// lvx128 v62,r0,r3
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r29
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vmsum3fp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// fsubs f0,f31,f30
	ctx.fpscr.disableFlushModeUnconditional();
	f0.f64 = double(float(f31.f64 - f30.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 - f30.f64));
	// fdivs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 / f0.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82318924
	if (!cr6.gt) goto loc_82318924;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_823188EC:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = f0.f64;
loc_823188F0:
	// li r4,138
	ctx.r4.s64 = 138;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// li r4,136
	ctx.r4.s64 = 136;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// fsubs f0,f30,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f30.f64 - ctx.f1.f64));
	// fmadds f1,f0,f31,f1
	ctx.f1.f64 = double(float(f0.f64 * f31.f64 + ctx.f1.f64));
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
loc_82318924:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x823188ec
	if (!cr6.lt) goto loc_823188EC;
	// fmr f31,f13
	f31.f64 = ctx.f13.f64;
	// b 0x823188f0
	goto loc_823188F0;
}

__attribute__((alias("__imp__sub_82318940"))) PPC_WEAK_FUNC(sub_82318940);
PPC_FUNC_IMPL(__imp__sub_82318940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v63{};
	// li r11,1072
	r11.s64 = 1072;
	// lvx128 v63,r4,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82318950"))) PPC_WEAK_FUNC(sub_82318950);
PPC_FUNC_IMPL(__imp__sub_82318950) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// addi r11,r11,-20912
	r11.s64 = r11.s64 + -20912;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lvx128 v62,r0,r30
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// vmsum3fp128 v62,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v62.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// lfs f0,-20128(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -20128);
	f0.f64 = double(temp.f32);
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x823189e0
	if (cr6.gt) goto loc_823189E0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e86068
	sub_82E86068(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e861d8
	sub_82E861D8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e86068
	sub_82E86068(ctx, base);
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_823189E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_823189E8"))) PPC_WEAK_FUNC(sub_823189E8);
PPC_FUNC_IMPL(__imp__sub_823189E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister temp{};
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
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82318a84
	if (!cr0.eq) goto loc_82318A84;
	// lbz r11,1204(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1204);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82318a28
	if (cr0.eq) goto loc_82318A28;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// bl 0x82305fc8
	sub_82305FC8(ctx, base);
	// b 0x82318a60
	goto loc_82318A60;
loc_82318A28:
	// lis r11,-31960
	r11.s64 = -2094530560;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,21500(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 21500);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// li r8,3003
	ctx.r8.s64 = 3003;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82305908
	sub_82305908(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_82318A60:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-17868(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -17868);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307e18
	sub_82307E18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_82318A84:
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

__attribute__((alias("__imp__sub_82318A98"))) PPC_WEAK_FUNC(sub_82318A98);
PPC_FUNC_IMPL(__imp__sub_82318A98) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1432(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1432);
	// b 0x82e1bc30
	sub_82E1BC30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82318AA0"))) PPC_WEAK_FUNC(sub_82318AA0);
PPC_FUNC_IMPL(__imp__sub_82318AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,1336(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1336);
	// subf. r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,1336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1336, r11.u32);
	// bge 0x82318ab4
	if (!cr0.lt) goto loc_82318AB4;
	// li r11,0
	r11.s64 = 0;
loc_82318AB4:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,1336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1336, r11.u32);
	// lwz r10,108(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82318AC8"))) PPC_WEAK_FUNC(sub_82318AC8);
PPC_FUNC_IMPL(__imp__sub_82318AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v63{};
	// li r11,3232
	r11.s64 = 3232;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,3248
	ctx.r9.s64 = 3248;
	// stb r10,3224(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3224, ctx.r10.u8);
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82318AF0"))) PPC_WEAK_FUNC(sub_82318AF0);
PPC_FUNC_IMPL(__imp__sub_82318AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v63{};
	// li r11,3232
	r11.s64 = 3232;
	// lvx128 v63,r4,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82318B00"))) PPC_WEAK_FUNC(sub_82318B00);
PPC_FUNC_IMPL(__imp__sub_82318B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v63{};
	// li r11,3248
	r11.s64 = 3248;
	// lvx128 v63,r4,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82318B10"))) PPC_WEAK_FUNC(sub_82318B10);
PPC_FUNC_IMPL(__imp__sub_82318B10) {
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
	// li r4,22
	ctx.r4.s64 = 22;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82318b54
	if (cr0.eq) goto loc_82318B54;
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82318b60
	if (!cr0.eq) goto loc_82318B60;
loc_82318B54:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8230b740
	sub_8230B740(ctx, base);
loc_82318B60:
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

__attribute__((alias("__imp__sub_82318B78"))) PPC_WEAK_FUNC(sub_82318B78);
PPC_FUNC_IMPL(__imp__sub_82318B78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,47
	ctx.r4.s64 = 47;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82318c68
	if (!cr0.eq) goto loc_82318C68;
	// li r4,47
	ctx.r4.s64 = 47;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d90
	sub_82333D90(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,-7244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -7244);
	f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82307eb8
	sub_82307EB8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,88
	ctx.r4.s64 = 88;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8245eac0
	sub_8245EAC0(ctx, base);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307eb8
	sub_82307EB8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,86
	ctx.r4.s64 = 86;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8245eac0
	sub_8245EAC0(ctx, base);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307eb8
	sub_82307EB8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,87
	ctx.r4.s64 = 87;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8245eac0
	sub_8245EAC0(ctx, base);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307eb8
	sub_82307EB8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,85
	ctx.r4.s64 = 85;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8245eac0
	sub_8245EAC0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,-7248(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -7248);
	f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82307eb8
	sub_82307EB8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,92
	ctx.r4.s64 = 92;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8245eac0
	sub_8245EAC0(ctx, base);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307eb8
	sub_82307EB8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,91
	ctx.r4.s64 = 91;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8245eac0
	sub_8245EAC0(ctx, base);
loc_82318C68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82318C80"))) PPC_WEAK_FUNC(sub_82318C80);
PPC_FUNC_IMPL(__imp__sub_82318C80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r4,47
	ctx.r4.s64 = 47;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82318d2c
	if (cr0.eq) goto loc_82318D2C;
	// li r4,47
	ctx.r4.s64 = 47;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333da0
	sub_82333DA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307eb8
	sub_82307EB8(ctx, base);
	// li r4,88
	ctx.r4.s64 = 88;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8245e8f8
	sub_8245E8F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307eb8
	sub_82307EB8(ctx, base);
	// li r4,86
	ctx.r4.s64 = 86;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8245e8f8
	sub_8245E8F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307eb8
	sub_82307EB8(ctx, base);
	// li r4,87
	ctx.r4.s64 = 87;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8245e8f8
	sub_8245E8F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307eb8
	sub_82307EB8(ctx, base);
	// li r4,85
	ctx.r4.s64 = 85;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8245e8f8
	sub_8245E8F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307eb8
	sub_82307EB8(ctx, base);
	// li r4,92
	ctx.r4.s64 = 92;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8245e8f8
	sub_8245E8F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307eb8
	sub_82307EB8(ctx, base);
	// li r4,91
	ctx.r4.s64 = 91;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8245e8f8
	sub_8245E8F8(ctx, base);
loc_82318D2C:
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

__attribute__((alias("__imp__sub_82318D40"))) PPC_WEAK_FUNC(sub_82318D40);
PPC_FUNC_IMPL(__imp__sub_82318D40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v63{};
	PPCRegister temp{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lbz r11,960(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 960);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82318dc4
	if (!cr0.eq) goto loc_82318DC4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8230a590
	sub_8230A590(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmadds f13,f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + f0.f64));
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82318da0
	if (!cr6.gt) goto loc_82318DA0;
	// bl 0x8230a4e0
	sub_8230A4E0(ctx, base);
	// b 0x82318da4
	goto loc_82318DA4;
loc_82318DA0:
	// bl 0x8230a590
	sub_8230A590(ctx, base);
loc_82318DA4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// bl 0x82e861d8
	sub_82E861D8(ctx, base);
	// b 0x82318dd4
	goto loc_82318DD4;
loc_82318DC4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8230a4e0
	sub_8230A4E0(ctx, base);
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82318DD4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_82318DF0"))) PPC_WEAK_FUNC(sub_82318DF0);
PPC_FUNC_IMPL(__imp__sub_82318DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,212
	ctx.r4.s64 = 212;
	// lwz r11,1492(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1492);
	// lwz r10,1488(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 1488);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 / f0.f64));
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// li r4,211
	ctx.r4.s64 = 211;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// fsubs f0,f30,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f30.f64 - ctx.f1.f64));
	// fmadds f1,f0,f31,f1
	ctx.f1.f64 = double(float(f0.f64 * f31.f64 + ctx.f1.f64));
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-32(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82318E88"))) PPC_WEAK_FUNC(sub_82318E88);
PPC_FUNC_IMPL(__imp__sub_82318E88) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1196(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1196);
	// li r4,12
	ctx.r4.s64 = 12;
	// b 0x82333d78
	sub_82333D78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82318E98"))) PPC_WEAK_FUNC(sub_82318E98);
PPC_FUNC_IMPL(__imp__sub_82318E98) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1368(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1368);
	// b 0x82352fa8
	sub_82352FA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82318EA0"))) PPC_WEAK_FUNC(sub_82318EA0);
PPC_FUNC_IMPL(__imp__sub_82318EA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1368(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1368);
	// b 0x82352fb0
	sub_82352FB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82318EA8"))) PPC_WEAK_FUNC(sub_82318EA8);
PPC_FUNC_IMPL(__imp__sub_82318EA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1368(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1368);
	// b 0x82353070
	sub_82353070(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82318EB0"))) PPC_WEAK_FUNC(sub_82318EB0);
PPC_FUNC_IMPL(__imp__sub_82318EB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1368(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1368);
	// b 0x82635468
	sub_82635468(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82318EB8"))) PPC_WEAK_FUNC(sub_82318EB8);
PPC_FUNC_IMPL(__imp__sub_82318EB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1196(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1196);
	// li r4,41
	ctx.r4.s64 = 41;
	// b 0x82333d90
	sub_82333D90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82318EC8"))) PPC_WEAK_FUNC(sub_82318EC8);
PPC_FUNC_IMPL(__imp__sub_82318EC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1196(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1196);
	// li r4,41
	ctx.r4.s64 = 41;
	// b 0x82333da0
	sub_82333DA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82318ED8"))) PPC_WEAK_FUNC(sub_82318ED8);
PPC_FUNC_IMPL(__imp__sub_82318ED8) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824eb8b0
	sub_824EB8B0(ctx, base);
	// bl 0x824eb208
	sub_824EB208(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r30,r11,27,31,31
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x82318f30
	if (cr0.eq) goto loc_82318F30;
	// li r11,1
	r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,3408(r31)
	PPC_STORE_U8(r31.u32 + 3408, r11.u8);
	// bl 0x82308000
	sub_82308000(ctx, base);
loc_82318F30:
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

__attribute__((alias("__imp__sub_82318F48"))) PPC_WEAK_FUNC(sub_82318F48);
PPC_FUNC_IMPL(__imp__sub_82318F48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82318F60:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x82318f74
	if (cr6.lt) goto loc_82318F74;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82318F74:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82318f84
	if (cr0.eq) goto loc_82318F84;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x82318f8c
	goto loc_82318F8C;
loc_82318F84:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82318F8C:
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82318f60
	if (cr6.eq) goto loc_82318F60;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82318FA0"))) PPC_WEAK_FUNC(sub_82318FA0);
PPC_FUNC_IMPL(__imp__sub_82318FA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
loc_82318FB8:
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x82318fcc
	if (cr6.lt) goto loc_82318FCC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82318FCC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82318fdc
	if (cr0.eq) goto loc_82318FDC;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x82318fe4
	goto loc_82318FE4;
loc_82318FDC:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82318FE4:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82318fb8
	if (cr6.eq) goto loc_82318FB8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82318FF8"))) PPC_WEAK_FUNC(sub_82318FF8);
PPC_FUNC_IMPL(__imp__sub_82318FF8) {
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
	// beq 0x82319050
	if (cr0.eq) goto loc_82319050;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-7536
	ctx.r9.s64 = r11.s64 + -7536;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82319054
	goto loc_82319054;
loc_82319050:
	// li r11,0
	r11.s64 = 0;
loc_82319054:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823190a0
	if (!cr6.eq) goto loc_823190A0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82319080
	if (cr6.eq) goto loc_82319080;
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
loc_82319080:
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,32432(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32432);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_823190A0:
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

__attribute__((alias("__imp__sub_823190C0"))) PPC_WEAK_FUNC(sub_823190C0);
PPC_FUNC_IMPL(__imp__sub_823190C0) {
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
	// beq 0x82319118
	if (cr0.eq) goto loc_82319118;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-7516
	ctx.r9.s64 = r11.s64 + -7516;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8231911c
	goto loc_8231911C;
loc_82319118:
	// li r11,0
	r11.s64 = 0;
loc_8231911C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82319168
	if (!cr6.eq) goto loc_82319168;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82319148
	if (cr6.eq) goto loc_82319148;
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
loc_82319148:
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,32432(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32432);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82319168:
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

__attribute__((alias("__imp__sub_82319188"))) PPC_WEAK_FUNC(sub_82319188);
PPC_FUNC_IMPL(__imp__sub_82319188) {
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
	// beq 0x823191e0
	if (cr0.eq) goto loc_823191E0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-7496
	ctx.r9.s64 = r11.s64 + -7496;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x823191e4
	goto loc_823191E4;
loc_823191E0:
	// li r11,0
	r11.s64 = 0;
loc_823191E4:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82319230
	if (!cr6.eq) goto loc_82319230;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82319210
	if (cr6.eq) goto loc_82319210;
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
loc_82319210:
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,32432(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32432);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82319230:
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

__attribute__((alias("__imp__sub_82319250"))) PPC_WEAK_FUNC(sub_82319250);
PPC_FUNC_IMPL(__imp__sub_82319250) {
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
	// beq 0x823192a8
	if (cr0.eq) goto loc_823192A8;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-7476
	ctx.r9.s64 = r11.s64 + -7476;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x823192ac
	goto loc_823192AC;
loc_823192A8:
	// li r11,0
	r11.s64 = 0;
loc_823192AC:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823192f8
	if (!cr6.eq) goto loc_823192F8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823192d8
	if (cr6.eq) goto loc_823192D8;
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
loc_823192D8:
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,32432(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32432);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_823192F8:
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

__attribute__((alias("__imp__sub_82319318"))) PPC_WEAK_FUNC(sub_82319318);
PPC_FUNC_IMPL(__imp__sub_82319318) {
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
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_82319370"))) PPC_WEAK_FUNC(sub_82319370);
PPC_FUNC_IMPL(__imp__sub_82319370) {
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
	// beq 0x823193c8
	if (cr0.eq) goto loc_823193C8;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-7456
	ctx.r9.s64 = r11.s64 + -7456;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x823193cc
	goto loc_823193CC;
loc_823193C8:
	// li r11,0
	r11.s64 = 0;
loc_823193CC:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82319418
	if (!cr6.eq) goto loc_82319418;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823193f8
	if (cr6.eq) goto loc_823193F8;
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
loc_823193F8:
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,32432(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32432);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82319418:
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

__attribute__((alias("__imp__sub_82319438"))) PPC_WEAK_FUNC(sub_82319438);
PPC_FUNC_IMPL(__imp__sub_82319438) {
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
	// beq 0x82319490
	if (cr0.eq) goto loc_82319490;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-7436
	ctx.r9.s64 = r11.s64 + -7436;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82319494
	goto loc_82319494;
loc_82319490:
	// li r11,0
	r11.s64 = 0;
loc_82319494:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823194e0
	if (!cr6.eq) goto loc_823194E0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823194c0
	if (cr6.eq) goto loc_823194C0;
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
loc_823194C0:
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,32432(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32432);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_823194E0:
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

__attribute__((alias("__imp__sub_82319500"))) PPC_WEAK_FUNC(sub_82319500);
PPC_FUNC_IMPL(__imp__sub_82319500) {
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
	// beq 0x82319558
	if (cr0.eq) goto loc_82319558;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-7416
	ctx.r9.s64 = r11.s64 + -7416;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8231955c
	goto loc_8231955C;
loc_82319558:
	// li r11,0
	r11.s64 = 0;
loc_8231955C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823195a8
	if (!cr6.eq) goto loc_823195A8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82319588
	if (cr6.eq) goto loc_82319588;
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
loc_82319588:
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,32432(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32432);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_823195A8:
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

__attribute__((alias("__imp__sub_823195C8"))) PPC_WEAK_FUNC(sub_823195C8);
PPC_FUNC_IMPL(__imp__sub_823195C8) {
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
	// beq 0x82319620
	if (cr0.eq) goto loc_82319620;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-7396
	ctx.r9.s64 = r11.s64 + -7396;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82319624
	goto loc_82319624;
loc_82319620:
	// li r11,0
	r11.s64 = 0;
loc_82319624:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82319670
	if (!cr6.eq) goto loc_82319670;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82319650
	if (cr6.eq) goto loc_82319650;
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
loc_82319650:
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,32432(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32432);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82319670:
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

__attribute__((alias("__imp__sub_82319690"))) PPC_WEAK_FUNC(sub_82319690);
PPC_FUNC_IMPL(__imp__sub_82319690) {
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
	// beq 0x823196e8
	if (cr0.eq) goto loc_823196E8;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-7376
	ctx.r9.s64 = r11.s64 + -7376;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x823196ec
	goto loc_823196EC;
loc_823196E8:
	// li r11,0
	r11.s64 = 0;
loc_823196EC:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82319738
	if (!cr6.eq) goto loc_82319738;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82319718
	if (cr6.eq) goto loc_82319718;
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
loc_82319718:
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,32432(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32432);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82319738:
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

__attribute__((alias("__imp__sub_82319758"))) PPC_WEAK_FUNC(sub_82319758);
PPC_FUNC_IMPL(__imp__sub_82319758) {
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
	// beq 0x823197b0
	if (cr0.eq) goto loc_823197B0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-7356
	ctx.r9.s64 = r11.s64 + -7356;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x823197b4
	goto loc_823197B4;
loc_823197B0:
	// li r11,0
	r11.s64 = 0;
loc_823197B4:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82319800
	if (!cr6.eq) goto loc_82319800;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823197e0
	if (cr6.eq) goto loc_823197E0;
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
loc_823197E0:
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,32432(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32432);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82319800:
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

__attribute__((alias("__imp__sub_82319820"))) PPC_WEAK_FUNC(sub_82319820);
PPC_FUNC_IMPL(__imp__sub_82319820) {
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
	// beq 0x82319878
	if (cr0.eq) goto loc_82319878;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-7336
	ctx.r9.s64 = r11.s64 + -7336;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8231987c
	goto loc_8231987C;
loc_82319878:
	// li r11,0
	r11.s64 = 0;
loc_8231987C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823198c8
	if (!cr6.eq) goto loc_823198C8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823198a8
	if (cr6.eq) goto loc_823198A8;
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
loc_823198A8:
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,32432(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32432);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_823198C8:
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

__attribute__((alias("__imp__sub_823198E8"))) PPC_WEAK_FUNC(sub_823198E8);
PPC_FUNC_IMPL(__imp__sub_823198E8) {
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
	// beq 0x82319940
	if (cr0.eq) goto loc_82319940;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-7316
	ctx.r9.s64 = r11.s64 + -7316;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82319944
	goto loc_82319944;
loc_82319940:
	// li r11,0
	r11.s64 = 0;
loc_82319944:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82319990
	if (!cr6.eq) goto loc_82319990;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82319970
	if (cr6.eq) goto loc_82319970;
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
loc_82319970:
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,32432(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32432);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82319990:
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

__attribute__((alias("__imp__sub_823199B0"))) PPC_WEAK_FUNC(sub_823199B0);
PPC_FUNC_IMPL(__imp__sub_823199B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82319a28
	if (cr6.eq) goto loc_82319A28;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r31,r30,160
	r31.s64 = r30.s64 + 160;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r30,96
	ctx.r4.s64 = r30.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c6a10
	sub_822C6A10(ctx, base);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// lvlx128 v63,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r9,48
	ctx.r9.s64 = 48;
	// lvlx128 v62,r7,r3
	temp.u32 = ctx.r7.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r8,r3
	temp.u32 = ctx.r8.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r9,r3
	temp.u32 = ctx.r9.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r31,r7
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r31,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r31,r9
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82319a5c
	goto loc_82319A5C;
loc_82319A28:
	// addi r11,r30,96
	r11.s64 = r30.s64 + 96;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r10,r30,160
	ctx.r10.s64 = r30.s64 + 160;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r7,r11
	temp.u32 = ctx.r7.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r8,r11
	temp.u32 = ctx.r8.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r9,r11
	temp.u32 = ctx.r9.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r10,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r10,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r10,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82319A5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_82319A78"))) PPC_WEAK_FUNC(sub_82319A78);
PPC_FUNC_IMPL(__imp__sub_82319A78) {
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
	// lwz r3,512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 512);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82319a9c
	if (cr6.eq) goto loc_82319A9C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82319A9C:
	// lwz r3,504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 504);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82319aac
	if (cr6.eq) goto loc_82319AAC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82319AAC:
	// lwz r3,360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 360);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82319abc
	if (cr6.eq) goto loc_82319ABC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82319ABC:
	// lwz r3,352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 352);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82319acc
	if (cr6.eq) goto loc_82319ACC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82319ACC:
	// lwz r3,324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82319adc
	if (cr6.eq) goto loc_82319ADC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82319ADC:
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82319aec
	if (cr6.eq) goto loc_82319AEC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82319AEC:
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82319afc
	if (cr6.eq) goto loc_82319AFC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82319AFC:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82319b0c
	if (cr6.eq) goto loc_82319B0C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82319B0C:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82319b1c
	if (cr6.eq) goto loc_82319B1C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82319B1C:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82319b2c
	if (cr6.eq) goto loc_82319B2C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82319B2C:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82319b3c
	if (cr6.eq) goto loc_82319B3C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82319B3C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82319b4c
	if (cr6.eq) goto loc_82319B4C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82319B4C:
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

__attribute__((alias("__imp__sub_82319B60"))) PPC_WEAK_FUNC(sub_82319B60);
PPC_FUNC_IMPL(__imp__sub_82319B60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCVRegister v63{};
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r11,r3,736
	r11.s64 = ctx.r3.s64 + 736;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r9,64
	ctx.r9.s64 = 64;
	// stb r10,736(r3)
	PPC_STORE_U8(ctx.r3.u32 + 736, ctx.r10.u8);
	// lvx128 v63,r4,r6
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r6
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,80
	ctx.r10.s64 = 80;
	// lvx128 v63,r4,r7
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r7
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r4,r8
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r4,r9
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r9
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r4,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,96(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// stw r11,832(r3)
	PPC_STORE_U32(ctx.r3.u32 + 832, r11.u32);
	// lwz r11,100(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// stw r11,836(r3)
	PPC_STORE_U32(ctx.r3.u32 + 836, r11.u32);
	// lbz r11,736(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 736);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// li r11,752
	r11.s64 = 752;
	// li r10,1072
	ctx.r10.s64 = 1072;
	// lvx128 v63,r3,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

extern void DownForceDeltaTimeFixMidAsmHook(PPCRegister& f0);

extern void DownForceDeltaTimeFixMidAsmHook(PPCVRegister& v127, PPCRegister& f24);

__attribute__((alias("__imp__sub_82319BD8"))) PPC_WEAK_FUNC(sub_82319BD8);
PPC_FUNC_IMPL(__imp__sub_82319BD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// addi r12,r1,-72
	r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831b1428
	// li r12,-160
	r12.s64 = -160;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	f24.f64 = ctx.f1.f64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lfs f0,1408(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 1408);
	f0.f64 = double(temp.f32);
	// lfs f13,-6772(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -6772);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82319c20
	if (!cr6.gt) goto loc_82319C20;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_82319C20:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v62,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// vmulfp128 v127,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v127.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// bl 0x823083a8
	sub_823083A8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f28,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 112);
	f28.f64 = double(temp.f32);
	// lfs f30,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f30.f64 = double(temp.f32);
	// lfs f27,116(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 116);
	f27.f64 = double(temp.f32);
	// stfs f30,116(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// stfs f30,112(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// bl 0x82ae9d28
	sub_82AE9D28(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	f26.f64 = ctx.f1.f64;
	// bl 0x82aea028
	sub_82AEA028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ae9d60
	sub_82AE9D60(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	f25.f64 = ctx.f1.f64;
	// lfs f1,-21828(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -21828);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82ae9d68
	sub_82AE9D68(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f0,-396(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -396);
	f0.f64 = double(temp.f32);
	// lfs f13,-31000(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31000);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,2240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f31.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f31,128(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x82ae9ee0
	sub_82AE9EE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82ae9d20
	sub_82AE9D20(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ae9f60
	sub_82AE9F60(ctx, base);
	// li r11,768
	r11.s64 = 768;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// lvx128 v62,r0,r30
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// lvx128 v63,r28,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r28.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// stvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// vmulfp128 v63,v62,v63
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e86270
	sub_82E86270(ctx, base);
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r25,0
	r25.s64 = 0;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,1
	r11.s64 = 1;
	// vmsum3fp128 v63,v63,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// lfd f0,-7232(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -7232);
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x82319d5c
	if (cr6.gt) goto loc_82319D5C;
	// mr r11,r25
	r11.u64 = r25.u64;
loc_82319D5C:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fdivs f0,f30,f24
	DownForceDeltaTimeFixMidAsmHook(f0);
	goto loc_82319D64;
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f30.f64 / f24.f64));
loc_82319D64:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r26,r28,1412
	r26.s64 = r28.s64 + 1412;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lvlx128 v62,r0,r26
	temp.u32 = r26.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// clrlwi r24,r11,24
	r24.u64 = r11.u32 & 0xFF;
	// lvx128 v61,r0,r9
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v62,v61,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v62.f32, simde_mm_mul_ps(simde_mm_load_ps(v61.f32), simde_mm_load_ps(v62.f32)));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// vmaddfp128 v127,v62,v63,v127
	simde_mm_store_ps(v127.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)), simde_mm_load_ps(v127.f32)));
	// stvx128 v127,r0,r10
	DownForceDeltaTimeFixMidAsmHook(v127, f24);
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82ae9f40
	sub_82AE9F40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f24
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f24.f64;
	// bl 0x82aeda48
	sub_82AEDA48(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lvx128 v63,r0,r27
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lvx128 v62,r0,r30
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lvx128 v61,r0,r11
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v63,v63,v61
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v61.f32)));
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// vmsum3fp128 v63,v63,v62
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// fsel f29,f0,f0,f31
	f29.f64 = f0.f64 >= 0.0 ? f0.f64 : f31.f64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r1,192
	r11.s64 = ctx.r1.s64 + 192;
	// lvx128 v63,r0,r27
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmplwi r24,0
	cr0.compare<uint32_t>(r24.u32, 0, xer);
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq 0x82319e80
	if (cr0.eq) goto loc_82319E80;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lvx128 v62,r0,r30
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lfs f0,-24412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24412);
	f0.f64 = double(temp.f32);
	// fadds f0,f29,f0
	f0.f64 = double(float(f29.f64 + f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v61,v61,0
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0xFF));
	// vmulfp128 v62,v62,v61
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v62.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v61.f32)));
	// vsubfp128 v63,v63,v62
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82319e90
	goto loc_82319E90;
loc_82319E80:
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82319E90:
	// lwz r10,1384(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 1384);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r8,28652(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 28652);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x822ed088
	sub_822ED088(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82319ed0
	if (cr0.eq) goto loc_82319ED0;
	// addi r11,r1,208
	r11.s64 = ctx.r1.s64 + 208;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82319ed8
	goto loc_82319ED8;
loc_82319ED0:
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82319ED8:
	// lvx128 v62,r0,r27
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vsubfp128 v62,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v62.f32, simde_mm_sub_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// lvx128 v61,r0,r30
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,1292(r28)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 1292);
	f0.f64 = double(temp.f32);
	// vmsum3fp128 v62,v62,v61
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v62.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v61.f32), 0xEF));
	// stvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82319f04
	if (cr6.lt) goto loc_82319F04;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_82319F04:
	// lis r11,-31943
	r11.s64 = -2093416448;
	// stfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 0, temp.u32);
	// stvx128 v63,r0,r27
	simde_mm_store_si128((simde__m128i*)(base + ((r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r11,29232
	r11.s64 = r11.s64 + 29232;
	// stfs f28,112(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// stfs f27,116(r31)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// stb r25,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r25.u8);
	// stfs f31,16(r29)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r29.u32 + 16, temp.u32);
	// li r9,48
	ctx.r9.s64 = 48;
	// stfs f30,20(r29)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r29.u32 + 20, temp.u32);
	// li r8,64
	ctx.r8.s64 = 64;
	// stfs f31,24(r29)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r29.u32 + 24, temp.u32);
	// li r5,80
	ctx.r5.s64 = 80;
	// stfs f31,28(r29)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r29.u32 + 28, temp.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stvx128 v63,r29,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r29.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stvx128 v63,r29,r9
	simde_mm_store_si128((simde__m128i*)(base + ((r29.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fmr f1,f24
	ctx.f1.f64 = f24.f64;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r29,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r29.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r29,r5
	simde_mm_store_si128((simde__m128i*)(base + ((r29.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r25,100(r29)
	PPC_STORE_U32(r29.u32 + 100, r25.u32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82aec620
	sub_82AEC620(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f26.f64;
	// bl 0x82ae9d20
	sub_82AE9D20(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ae9ee0
	sub_82AE9EE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f25.f64;
	// bl 0x82ae9d68
	sub_82AE9D68(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// li r0,-160
	r0.s64 = -160;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r12,r1,-72
	r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831b1474
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82319FF0"))) PPC_WEAK_FUNC(sub_82319FF0);
PPC_FUNC_IMPL(__imp__sub_82319FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,1416(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1416);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,48
	r11.s64 = 48;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lvlx128 v63,r11,r3
	temp.u32 = r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f11,4(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
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

__attribute__((alias("__imp__sub_8231A060"))) PPC_WEAK_FUNC(sub_8231A060);
PPC_FUNC_IMPL(__imp__sub_8231A060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCVRegister v60{};
	PPCVRegister v61{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,1416(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1416);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,16
	r11.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvlx128 v63,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvlx128 v62,r11,r3
	temp.u32 = r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// lvlx128 v61,r10,r3
	temp.u32 = ctx.r10.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r9,r3
	temp.u32 = ctx.r9.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stvx128 v62,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e85b50
	sub_82E85B50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_8231A0E8"))) PPC_WEAK_FUNC(sub_8231A0E8);
PPC_FUNC_IMPL(__imp__sub_8231A0E8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831b1434
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r30,r31,592
	r30.s64 = r31.s64 + 592;
	// addi r5,r31,528
	ctx.r5.s64 = r31.s64 + 528;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82e84a90
	sub_82E84A90(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// vspltisw128 v63,1
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_set1_epi32(int(0x1)));
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lfs f0,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	f0.f64 = double(temp.f32);
	// stfs f0,132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// vspltisw128 v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// lfs f31,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// vcsxwfp128 v0,v63,1
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v63.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f31,164(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v61,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v61.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v63
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// vrsqrtefp128 v13,v61
	simde_mm_store_ps(ctx.v13.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(v61.f32))));
	// vor128 v11,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v61.u8));
	// vrsqrtefp128 v12,v63
	simde_mm_store_ps(ctx.v12.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(v63.f32))));
	// vor128 v9,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)v63.u8));
	// vmulfp128 v8,v61,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_load_ps(v61.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v10,v63,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v5,v61,v62
	simde_mm_store_ps(ctx.v5.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(v61.f32), simde_mm_load_ps(v62.f32)));
	// vcmpeqfp128 v6,v63,v62
	simde_mm_store_ps(ctx.v6.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// vmulfp128 v7,v13,v13
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v4,v12,v12
	simde_mm_store_ps(ctx.v4.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vnmsubfp v8,v8,v7,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v0,v10,v4,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v8,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v12,v0,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v13,v61,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(v61.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v0,v63,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v13,v13,v11,v5
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8))));
	// vsel v0,v0,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// stvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f27,144(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	f27.f64 = double(temp.f32);
	// stvx128 v0,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f30,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	f30.f64 = double(temp.f32);
	// stfs f27,84(r1)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,80(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f29,-24792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24792);
	f29.f64 = double(temp.f32);
	// lfs f28,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f28.f64 = double(temp.f32);
	// fcmpu cr6,f30,f29
	cr6.compare(f30.f64, f29.f64);
	// bge cr6,0x8231a26c
	if (!cr6.lt) goto loc_8231A26C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82308308
	sub_82308308(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82e84be0
	sub_82E84BE0(ctx, base);
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stfs f28,184(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e84a90
	sub_82E84A90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e84a90
	sub_82E84A90(ctx, base);
	// addi r11,r1,224
	r11.s64 = ctx.r1.s64 + 224;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f31,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82e861d8
	sub_82E861D8(ctx, base);
loc_8231A26C:
	// fcmpu cr6,f27,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(f27.f64, f29.f64);
	// bge cr6,0x8231a284
	if (!cr6.lt) goto loc_8231A284;
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f28,116(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f28,124(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
loc_8231A284:
	// addi r30,r31,656
	r30.s64 = r31.s64 + 656;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82e84a90
	sub_82E84A90(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82e84a90
	sub_82E84A90(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// li r7,544
	ctx.r7.s64 = 544;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r6,560
	ctx.r6.s64 = 560;
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// lvx128 v61,r0,r9
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r0,r8
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,0
	r11.s64 = 0;
	// vmulfp128 v63,v61,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v61.f32), simde_mm_load_ps(v63.f32)));
	// vmulfp128 v62,v60,v62
	simde_mm_store_ps(v62.f32, simde_mm_mul_ps(simde_mm_load_ps(v60.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v63,r31,r7
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r31,r6
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r11,1381(r31)
	PPC_STORE_U8(r31.u32 + 1381, r11.u8);
	// stb r11,1382(r31)
	PPC_STORE_U8(r31.u32 + 1382, r11.u8);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831b1480
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

__attribute__((alias("__imp__sub_8231A318"))) PPC_WEAK_FUNC(sub_8231A318);
PPC_FUNC_IMPL(__imp__sub_8231A318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v55{};
	PPCVRegister v56{};
	PPCVRegister v57{};
	PPCVRegister v58{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltisw128 v63,-1
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// li r11,1120
	r11.s64 = 1120;
	// li r10,1088
	ctx.r10.s64 = 1088;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// vslw128 v63,v63,v63
	v63.u32[0] = v63.u32[0] << (v63.u8[0] & 0x1F);
	v63.u32[1] = v63.u32[1] << (v63.u8[4] & 0x1F);
	v63.u32[2] = v63.u32[2] << (v63.u8[8] & 0x1F);
	v63.u32[3] = v63.u32[3] << (v63.u8[12] & 0x1F);
	// lvx128 v62,r3,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r3,r10
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v60,v61,177
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0x4E));
	// vxor128 v63,v62,v63
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)v63.u8)));
	// vpermwi128 v59,v61,78
	simde_mm_store_si128((simde__m128i*)v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0xB1));
	// vpermwi128 v58,v61,228
	simde_mm_store_si128((simde__m128i*)v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0x1B));
	// vor128 v57,v63,v63
	simde_mm_store_si128((simde__m128i*)v57.u8, simde_mm_load_si128((simde__m128i*)v63.u8));
	// vor128 v56,v63,v63
	simde_mm_store_si128((simde__m128i*)v56.u8, simde_mm_load_si128((simde__m128i*)v63.u8));
	// vor128 v55,v63,v63
	simde_mm_store_si128((simde__m128i*)v55.u8, simde_mm_load_si128((simde__m128i*)v63.u8));
	// vrlimi128 v63,v62,11,0
	simde_mm_store_ps(v63.f32, simde_mm_blend_ps(simde_mm_load_ps(v63.f32), simde_mm_permute_ps(simde_mm_load_ps(v62.f32), 228), 11));
	// vrlimi128 v57,v62,1,0
	simde_mm_store_ps(v57.f32, simde_mm_blend_ps(simde_mm_load_ps(v57.f32), simde_mm_permute_ps(simde_mm_load_ps(v62.f32), 228), 1));
	// vrlimi128 v56,v62,13,0
	simde_mm_store_ps(v56.f32, simde_mm_blend_ps(simde_mm_load_ps(v56.f32), simde_mm_permute_ps(simde_mm_load_ps(v62.f32), 228), 13));
	// vrlimi128 v55,v62,7,0
	simde_mm_store_ps(v55.f32, simde_mm_blend_ps(simde_mm_load_ps(v55.f32), simde_mm_permute_ps(simde_mm_load_ps(v62.f32), 228), 7));
	// vmsum4fp128 v63,v63,v58
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v58.f32), 0xFF));
	// vmsum4fp128 v62,v57,v61
	simde_mm_store_ps(v62.f32, simde_mm_dp_ps(simde_mm_load_ps(v57.f32), simde_mm_load_ps(v61.f32), 0xFF));
	// vmsum4fp128 v61,v56,v60
	simde_mm_store_ps(v61.f32, simde_mm_dp_ps(simde_mm_load_ps(v56.f32), simde_mm_load_ps(v60.f32), 0xFF));
	// vmsum4fp128 v60,v55,v59
	simde_mm_store_ps(v60.f32, simde_mm_dp_ps(simde_mm_load_ps(v55.f32), simde_mm_load_ps(v59.f32), 0xFF));
	// vmrghw128 v62,v61,v62
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), simde_mm_load_si128((simde__m128i*)v61.u32)));
	// vmrghw128 v63,v63,v60
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), simde_mm_load_si128((simde__m128i*)v63.u32)));
	// vmrghw128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), simde_mm_load_si128((simde__m128i*)v63.u32)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82308300
	sub_82308300(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231A3A8"))) PPC_WEAK_FUNC(sub_8231A3A8);
PPC_FUNC_IMPL(__imp__sub_8231A3A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
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
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r11,r3,1120
	r11.s64 = ctx.r3.s64 + 1120;
	// stfs f0,1120(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1120, temp.u32);
	// clrlwi. r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,1124(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1124, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,1128(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1128, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,1132(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1132, temp.u32);
	// beq 0x8231a44c
	if (cr0.eq) goto loc_8231A44C;
	// vspltisw128 v63,-1
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,1088
	r11.s64 = 1088;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// vslw128 v63,v63,v63
	v63.u32[0] = v63.u32[0] << (v63.u8[0] & 0x1F);
	v63.u32[1] = v63.u32[1] << (v63.u8[4] & 0x1F);
	v63.u32[2] = v63.u32[2] << (v63.u8[8] & 0x1F);
	v63.u32[3] = v63.u32[3] << (v63.u8[12] & 0x1F);
	// lvx128 v61,r3,r11
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v60,v61,177
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0x4E));
	// vxor128 v63,v62,v63
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)v63.u8)));
	// vpermwi128 v59,v61,78
	simde_mm_store_si128((simde__m128i*)v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0xB1));
	// vpermwi128 v58,v61,228
	simde_mm_store_si128((simde__m128i*)v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0x1B));
	// vor128 v57,v63,v63
	simde_mm_store_si128((simde__m128i*)v57.u8, simde_mm_load_si128((simde__m128i*)v63.u8));
	// vor128 v56,v63,v63
	simde_mm_store_si128((simde__m128i*)v56.u8, simde_mm_load_si128((simde__m128i*)v63.u8));
	// vor128 v55,v63,v63
	simde_mm_store_si128((simde__m128i*)v55.u8, simde_mm_load_si128((simde__m128i*)v63.u8));
	// vrlimi128 v63,v62,11,0
	simde_mm_store_ps(v63.f32, simde_mm_blend_ps(simde_mm_load_ps(v63.f32), simde_mm_permute_ps(simde_mm_load_ps(v62.f32), 228), 11));
	// vrlimi128 v57,v62,1,0
	simde_mm_store_ps(v57.f32, simde_mm_blend_ps(simde_mm_load_ps(v57.f32), simde_mm_permute_ps(simde_mm_load_ps(v62.f32), 228), 1));
	// vrlimi128 v56,v62,13,0
	simde_mm_store_ps(v56.f32, simde_mm_blend_ps(simde_mm_load_ps(v56.f32), simde_mm_permute_ps(simde_mm_load_ps(v62.f32), 228), 13));
	// vrlimi128 v55,v62,7,0
	simde_mm_store_ps(v55.f32, simde_mm_blend_ps(simde_mm_load_ps(v55.f32), simde_mm_permute_ps(simde_mm_load_ps(v62.f32), 228), 7));
	// vmsum4fp128 v63,v63,v58
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v58.f32), 0xFF));
	// vmsum4fp128 v62,v57,v61
	simde_mm_store_ps(v62.f32, simde_mm_dp_ps(simde_mm_load_ps(v57.f32), simde_mm_load_ps(v61.f32), 0xFF));
	// vmsum4fp128 v61,v56,v60
	simde_mm_store_ps(v61.f32, simde_mm_dp_ps(simde_mm_load_ps(v56.f32), simde_mm_load_ps(v60.f32), 0xFF));
	// vmsum4fp128 v60,v55,v59
	simde_mm_store_ps(v60.f32, simde_mm_dp_ps(simde_mm_load_ps(v55.f32), simde_mm_load_ps(v59.f32), 0xFF));
	// vmrghw128 v62,v61,v62
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), simde_mm_load_si128((simde__m128i*)v61.u32)));
	// vmrghw128 v63,v63,v60
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), simde_mm_load_si128((simde__m128i*)v63.u32)));
	// vmrghw128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), simde_mm_load_si128((simde__m128i*)v63.u32)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82308300
	sub_82308300(ctx, base);
loc_8231A44C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231A460"))) PPC_WEAK_FUNC(sub_8231A460);
PPC_FUNC_IMPL(__imp__sub_8231A460) {
	PPC_FUNC_PROLOGUE();
	// b 0x8231a3a8
	sub_8231A3A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231A468"))) PPC_WEAK_FUNC(sub_8231A468);
PPC_FUNC_IMPL(__imp__sub_8231A468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
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
	// lbz r11,1381(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1381);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231a48c
	if (cr0.eq) goto loc_8231A48C;
	// bl 0x8231a0e8
	sub_8231A0E8(ctx, base);
loc_8231A48C:
	// vspltisw128 v63,1
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_set1_epi32(int(0x1)));
	// li r11,544
	r11.s64 = 544;
	// vspltisw128 v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// vcsxwfp128 v13,v63,1
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v63.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// lvx128 v63,r31,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v63
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// vrsqrtefp128 v0,v63
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(v63.f32))));
	// vor128 v12,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)v63.u8));
	// vmulfp128 v11,v63,v13
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp128 v10,v63,v62
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// vmulfp128 v9,v0,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v11,v9,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v63,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v0,v0,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// stvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
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

__attribute__((alias("__imp__sub_8231A4E8"))) PPC_WEAK_FUNC(sub_8231A4E8);
PPC_FUNC_IMPL(__imp__sub_8231A4E8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lbz r11,1381(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1381);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231a518
	if (cr0.eq) goto loc_8231A518;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231a0e8
	sub_8231A0E8(ctx, base);
loc_8231A518:
	// addi r4,r31,544
	ctx.r4.s64 = r31.s64 + 544;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e86198
	sub_82E86198(ctx, base);
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

__attribute__((alias("__imp__sub_8231A540"))) PPC_WEAK_FUNC(sub_8231A540);
PPC_FUNC_IMPL(__imp__sub_8231A540) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v63{};
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
	// lbz r11,1381(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1381);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231a570
	if (cr0.eq) goto loc_8231A570;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231a0e8
	sub_8231A0E8(ctx, base);
loc_8231A570:
	// li r11,560
	r11.s64 = 560;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lvx128 v63,r31,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_8231A598"))) PPC_WEAK_FUNC(sub_8231A598);
PPC_FUNC_IMPL(__imp__sub_8231A598) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
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
	// lbz r11,1381(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1381);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231a5bc
	if (cr0.eq) goto loc_8231A5BC;
	// bl 0x8231a0e8
	sub_8231A0E8(ctx, base);
loc_8231A5BC:
	// vspltisw128 v63,1
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_set1_epi32(int(0x1)));
	// li r11,560
	r11.s64 = 560;
	// vspltisw128 v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// vcsxwfp128 v13,v63,1
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v63.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// lvx128 v63,r31,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v63
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// vrsqrtefp128 v0,v63
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(v63.f32))));
	// vor128 v12,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)v63.u8));
	// vmulfp128 v11,v63,v13
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp128 v10,v63,v62
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// vmulfp128 v9,v0,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v11,v9,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v63,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v0,v0,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// stvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
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

__attribute__((alias("__imp__sub_8231A618"))) PPC_WEAK_FUNC(sub_8231A618);
PPC_FUNC_IMPL(__imp__sub_8231A618) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lbz r11,1381(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1381);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231a648
	if (cr0.eq) goto loc_8231A648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231a0e8
	sub_8231A0E8(ctx, base);
loc_8231A648:
	// addi r4,r31,560
	ctx.r4.s64 = r31.s64 + 560;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e86198
	sub_82E86198(ctx, base);
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

__attribute__((alias("__imp__sub_8231A670"))) PPC_WEAK_FUNC(sub_8231A670);
PPC_FUNC_IMPL(__imp__sub_8231A670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,1176(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1176);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,1180(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1180);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8231A68C:
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
	// bne 0x8231a68c
	if (!cr0.eq) goto loc_8231A68C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231A6B0"))) PPC_WEAK_FUNC(sub_8231A6B0);
PPC_FUNC_IMPL(__imp__sub_8231A6B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r4,31
	ctx.r4.s64 = 31;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8231a718
	if (!cr0.eq) goto loc_8231A718;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1200);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231a718
	if (cr0.eq) goto loc_8231A718;
	// lis r11,-31961
	r11.s64 = -2094596096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-18008(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -18008);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307e18
	sub_82307E18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8231a71c
	goto loc_8231A71C;
loc_8231A718:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231A71C:
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

__attribute__((alias("__imp__sub_8231A730"))) PPC_WEAK_FUNC(sub_8231A730);
PPC_FUNC_IMPL(__imp__sub_8231A730) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCVRegister v58{};
	PPCVRegister v59{};
	PPCVRegister v60{};
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231a7a8
	if (cr0.eq) goto loc_8231A7A8;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,29088
	r11.s64 = r11.s64 + 29088;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lvlx128 v62,r10,r11
	temp.u32 = ctx.r10.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r9,r11
	temp.u32 = ctx.r9.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r8,r11
	temp.u32 = ctx.r8.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x8231a838
	goto loc_8231A838;
loc_8231A7A8:
	// lfs f0,1088(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1088);
	f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f13,1092(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1092);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lfs f12,1096(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1096);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1100(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1100);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82e84be0
	sub_82E84BE0(ctx, base);
	// li r11,16
	r11.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvlx128 v63,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lvlx128 v62,r11,r3
	temp.u32 = r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// lvlx128 v61,r10,r3
	temp.u32 = ctx.r10.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lvlx128 v60,r9,r3
	temp.u32 = ctx.r9.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// vmrghw128 v59,v63,v61
	simde_mm_store_si128((simde__m128i*)v59.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), simde_mm_load_si128((simde__m128i*)v63.u32)));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw128 v58,v62,v60
	simde_mm_store_si128((simde__m128i*)v58.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), simde_mm_load_si128((simde__m128i*)v62.u32)));
	// vmrglw128 v62,v62,v60
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), simde_mm_load_si128((simde__m128i*)v62.u32)));
	// vmrglw128 v63,v63,v61
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), simde_mm_load_si128((simde__m128i*)v63.u32)));
	// vmrghw128 v61,v59,v58
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v58.u32), simde_mm_load_si128((simde__m128i*)v59.u32)));
	// vmrglw128 v60,v59,v58
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v58.u32), simde_mm_load_si128((simde__m128i*)v59.u32)));
	// vmrghw128 v59,v63,v62
	simde_mm_store_si128((simde__m128i*)v59.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), simde_mm_load_si128((simde__m128i*)v63.u32)));
	// vmrglw128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), simde_mm_load_si128((simde__m128i*)v63.u32)));
	// stvx128 v61,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v59,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8231A838:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e84a90
	sub_82E84A90(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f2,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x831b3a68
	sub_831B3A68(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// frsp f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// lfs f0,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82e85988
	sub_82E85988(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231a3a8
	sub_8231A3A8(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8231A8B0"))) PPC_WEAK_FUNC(sub_8231A8B0);
PPC_FUNC_IMPL(__imp__sub_8231A8B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r29
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// lbz r10,960(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 960);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq 0x8231a948
	if (cr0.eq) goto loc_8231A948;
	// li r4,42
	ctx.r4.s64 = 42;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db18
	sub_8245DB18(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231a948
	if (cr0.eq) goto loc_8231A948;
	// li r4,41
	ctx.r4.s64 = 41;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// bge cr6,0x8231a948
	if (!cr6.lt) goto loc_8231A948;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,1200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1200);
	// bl 0x82333d90
	sub_82333D90(ctx, base);
	// li r11,1008
	r11.s64 = 1008;
	// li r10,992
	ctx.r10.s64 = 992;
	// lvx128 v63,r0,r29
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stvx128 v63,r31,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x823170e8
	sub_823170E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8231a94c
	goto loc_8231A94C;
loc_8231A948:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231A94C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8231A958"))) PPC_WEAK_FUNC(sub_8231A958);
PPC_FUNC_IMPL(__imp__sub_8231A958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r29
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// lbz r10,960(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 960);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne 0x8231aa10
	if (!cr0.eq) goto loc_8231AA10;
	// li r4,70
	ctx.r4.s64 = 70;
	// lfs f31,1360(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1360);
	f31.f64 = double(temp.f32);
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, ctx.f1.f64);
	// ble cr6,0x8231aa10
	if (!cr6.gt) goto loc_8231AA10;
	// li r4,71
	ctx.r4.s64 = 71;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// lfs f31,1024(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1024);
	f31.f64 = double(temp.f32);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, ctx.f1.f64);
	// ble cr6,0x8231aa10
	if (!cr6.gt) goto loc_8231AA10;
	// li r4,69
	ctx.r4.s64 = 69;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// bge cr6,0x8231aa10
	if (!cr6.lt) goto loc_8231AA10;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,1200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1200);
	// bl 0x82333d90
	sub_82333D90(ctx, base);
	// li r11,1008
	r11.s64 = 1008;
	// li r10,992
	ctx.r10.s64 = 992;
	// lvx128 v63,r0,r29
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stvx128 v63,r31,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x823170e8
	sub_823170E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8231aa14
	goto loc_8231AA14;
loc_8231AA10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231AA14:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8231AA20"))) PPC_WEAK_FUNC(sub_8231AA20);
PPC_FUNC_IMPL(__imp__sub_8231AA20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,1728(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1728);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x8231aa3c
	if (!cr6.lt) goto loc_8231AA3C;
	// li r11,0
	r11.s64 = 0;
loc_8231AA3C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// addi r11,r3,1696
	r11.s64 = ctx.r3.s64 + 1696;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231AA60"))) PPC_WEAK_FUNC(sub_8231AA60);
PPC_FUNC_IMPL(__imp__sub_8231AA60) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
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
	// addi r4,r4,1712
	ctx.r4.s64 = ctx.r4.s64 + 1712;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// lfs f0,-10412(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10412);
	f0.f64 = double(temp.f32);
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x8231aaf8
	if (!cr6.gt) goto loc_8231AAF8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v61,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v61.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// lfs f0,2240(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stvx128 v61,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x8231aadc
	if (cr6.gt) goto loc_8231AADC;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_8231AADC:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v61,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v61,v61,0
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0xFF));
	// vmulfp128 v62,v62,v61
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v62.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v61.f32)));
	// vsubfp128 v63,v63,v62
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// b 0x8231aafc
	goto loc_8231AAFC;
loc_8231AAF8:
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8231AAFC:
	// stvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_8231AB20"))) PPC_WEAK_FUNC(sub_8231AB20);
PPC_FUNC_IMPL(__imp__sub_8231AB20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8231a468
	sub_8231A468(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfs f30,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f30.f64 = double(temp.f32);
	// bne 0x8231ab74
	if (!cr0.eq) goto loc_8231AB74;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-22656(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22656);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x8231ab74
	if (!cr6.lt) goto loc_8231AB74;
	// stfs f30,80(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_8231AB74:
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r29,976
	r29.s64 = 976;
	// beq 0x8231ab9c
	if (cr0.eq) goto loc_8231AB9C;
	// addi r30,r31,720
	r30.s64 = r31.s64 + 720;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e860b8
	sub_82E860B8(ctx, base);
	// b 0x8231acb0
	goto loc_8231ACB0;
loc_8231AB9C:
	// lbz r11,960(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 960);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8231ac38
	if (!cr0.eq) goto loc_8231AC38;
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8231ac38
	if (!cr0.eq) goto loc_8231AC38;
	// addi r30,r31,720
	r30.s64 = r31.s64 + 720;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// lfs f0,-10412(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10412);
	f0.f64 = double(temp.f32);
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x8231acb0
	if (!cr6.gt) goto loc_8231ACB0;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r31,r29
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x8231a468
	sub_8231A468(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82317858
	sub_82317858(ctx, base);
	// b 0x8231ac80
	goto loc_8231AC80;
loc_8231AC38:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r31,r29
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f11,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f0.f64 = double(temp.f32);
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82317858
	sub_82317858(ctx, base);
	// addi r30,r31,720
	r30.s64 = r31.s64 + 720;
loc_8231AC80:
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v63,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// lvlx128 v61,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v61,v61,0
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0xFF));
	// vmulfp128 v63,v63,v61
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v61.f32)));
	// stvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8231ACB0:
	// lbz r11,960(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 960);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231ad28
	if (cr0.eq) goto loc_8231AD28;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r31,r29
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,1696
	ctx.r10.s64 = 1696;
	// lvx128 v62,r0,r30
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// lfs f12,104(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f0,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f0.f64 = double(temp.f32);
	// stfs f0,1408(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1408, temp.u32);
	// b 0x8231ad2c
	goto loc_8231AD2C;
loc_8231AD28:
	// stfs f30,1408(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 1408, temp.u32);
loc_8231AD2C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8231AD40"))) PPC_WEAK_FUNC(sub_8231AD40);
PPC_FUNC_IMPL(__imp__sub_8231AD40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,1732(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1732);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,1736(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1736);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8231AD5C:
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
	// bne 0x8231ad5c
	if (!cr0.eq) goto loc_8231AD5C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231AD80"))) PPC_WEAK_FUNC(sub_8231AD80);
PPC_FUNC_IMPL(__imp__sub_8231AD80) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r11,r31,1732
	r11.s64 = r31.s64 + 1732;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r10,1732(r31)
	PPC_STORE_U32(r31.u32 + 1732, ctx.r10.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r30,1732(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 1732);
	// bl 0x8230b4e8
	sub_8230B4E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82e1b9b8
	sub_82E1B9B8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8231addc
	if (cr6.eq) goto loc_8231ADDC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231ADDC:
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

__attribute__((alias("__imp__sub_8231ADF8"))) PPC_WEAK_FUNC(sub_8231ADF8);
PPC_FUNC_IMPL(__imp__sub_8231ADF8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// lwz r11,1740(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1740);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8231aecc
	if (!cr6.eq) goto loc_8231AECC;
	// bl 0x8231ad80
	sub_8231AD80(ctx, base);
	// li r4,112
	ctx.r4.s64 = 112;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f1,1748(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 1748, temp.u32);
	// lis r9,-31961
	ctx.r9.s64 = -2094596096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// lfs f13,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,1744(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1744, temp.u32);
	// stfs f0,1752(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1752, temp.u32);
	// stfs f13,1756(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 1756, temp.u32);
	// stw r30,1740(r31)
	PPC_STORE_U32(r31.u32 + 1740, r30.u32);
	// lwz r4,-17976(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17976);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307e18
	sub_82307E18(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82337e08
	sub_82337E08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823170e8
	sub_823170E8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7224
	ctx.r4.s64 = r11.s64 + -7224;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8230b488
	sub_8230B488(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8231aec4
	if (cr6.eq) goto loc_8231AEC4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231AEC4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_8231AECC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8231AED8"))) PPC_WEAK_FUNC(sub_8231AED8);
PPC_FUNC_IMPL(__imp__sub_8231AED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v62{};
	PPCVRegister v63{};
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
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,508(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r10,1232
	ctx.r10.s64 = 1232;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v62,r30,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v63,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_8231AF40"))) PPC_WEAK_FUNC(sub_8231AF40);
PPC_FUNC_IMPL(__imp__sub_8231AF40) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r11,r31,1760
	r11.s64 = r31.s64 + 1760;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r10,1760(r31)
	PPC_STORE_U32(r31.u32 + 1760, ctx.r10.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// addi r4,r31,268
	ctx.r4.s64 = r31.s64 + 268;
	// lwz r3,1760(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1760);
	// bl 0x8230fc40
	sub_8230FC40(ctx, base);
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

__attribute__((alias("__imp__sub_8231AF90"))) PPC_WEAK_FUNC(sub_8231AF90);
PPC_FUNC_IMPL(__imp__sub_8231AF90) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r11,r31,1772
	r11.s64 = r31.s64 + 1772;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r10,1772(r31)
	PPC_STORE_U32(r31.u32 + 1772, ctx.r10.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// addi r4,r31,268
	ctx.r4.s64 = r31.s64 + 268;
	// lwz r3,1772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1772);
	// bl 0x82332438
	sub_82332438(ctx, base);
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

__attribute__((alias("__imp__sub_8231AFE0"))) PPC_WEAK_FUNC(sub_8231AFE0);
PPC_FUNC_IMPL(__imp__sub_8231AFE0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8231a468
	sub_8231A468(ctx, base);
	// li r4,89
	ctx.r4.s64 = 89;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// li r4,90
	ctx.r4.s64 = 90;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// li r4,89
	ctx.r4.s64 = 89;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// fsubs f30,f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(f30.f64 - ctx.f1.f64));
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// li r4,90
	ctx.r4.s64 = 90;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// fsubs f31,f31,f30
	f31.f64 = double(float(f31.f64 - f30.f64));
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// fadds f0,f1,f29
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 + f29.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	f0.f64 = double(float(f0.f64 - f30.f64));
	// fdivs f0,f31,f0
	f0.f64 = double(float(f31.f64 / f0.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x8231b074
	if (cr6.gt) goto loc_8231B074;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x8231b078
	if (!cr6.lt) goto loc_8231B078;
loc_8231B074:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f13.f64;
loc_8231B078:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f0.f64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f29,-40(r1)
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231B0A0"))) PPC_WEAK_FUNC(sub_8231B0A0);
PPC_FUNC_IMPL(__imp__sub_8231B0A0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// li r4,96
	ctx.r4.s64 = 96;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lfs f0,1412(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1412);
	f0.f64 = double(temp.f32);
	// stfs f1,1292(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 1292, temp.u32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x8231b0d4
	if (!cr6.lt) goto loc_8231B0D4;
	// fmr f0,f1
	f0.f64 = ctx.f1.f64;
loc_8231B0D4:
	// stfs f0,1412(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1412, temp.u32);
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

__attribute__((alias("__imp__sub_8231B0F0"))) PPC_WEAK_FUNC(sub_8231B0F0);
PPC_FUNC_IMPL(__imp__sub_8231B0F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v63{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// li r12,-32
	r12.s64 = -32;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8231a468
	sub_8231A468(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blt cr6,0x8231b1a0
	if (cr6.lt) goto loc_8231B1A0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823083f0
	sub_823083F0(ctx, base);
	// lbz r11,960(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 960);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq 0x8231b148
	if (cr0.eq) goto loc_8231B148;
	// bl 0x8230a4e0
	sub_8230A4E0(ctx, base);
	// b 0x8231b14c
	goto loc_8231B14C;
loc_8231B148:
	// bl 0x8231a4e8
	sub_8231A4E8(ctx, base);
loc_8231B14C:
	// lvx128 v127,r0,r3
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// li r4,31
	ctx.r4.s64 = 31;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v127,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-9716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -9716);
	f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
	// bl 0x831b1868
	sub_831B1868(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x8231b1a4
	if (cr6.lt) goto loc_8231B1A4;
loc_8231B1A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231B1A4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// li r0,-32
	r0.s64 = -32;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231B1C0"))) PPC_WEAK_FUNC(sub_8231B1C0);
PPC_FUNC_IMPL(__imp__sub_8231B1C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,1416(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1416);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,1420(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1420);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8231B1DC:
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
	// bne 0x8231b1dc
	if (!cr0.eq) goto loc_8231B1DC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231B200"))) PPC_WEAK_FUNC(sub_8231B200);
PPC_FUNC_IMPL(__imp__sub_8231B200) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,1424(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1424);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,1428(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1428);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8231B21C:
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
	// bne 0x8231b21c
	if (!cr0.eq) goto loc_8231B21C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231B240"))) PPC_WEAK_FUNC(sub_8231B240);
PPC_FUNC_IMPL(__imp__sub_8231B240) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8231b364
	if (!cr0.eq) goto loc_8231B364;
	// li r4,224
	ctx.r4.s64 = 224;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db18
	sub_8245DB18(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8231b364
	if (!cr0.eq) goto loc_8231B364;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231a468
	sub_8231A468(ctx, base);
	// li r4,104
	ctx.r4.s64 = 104;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// li r4,105
	ctx.r4.s64 = 105;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// li r4,104
	ctx.r4.s64 = 104;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// fsubs f31,f31,f30
	f31.f64 = double(float(f31.f64 - f30.f64));
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// fsubs f0,f29,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f29.f64 - ctx.f1.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f31,f0
	f0.f64 = double(float(f31.f64 / f0.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8231b34c
	if (!cr6.gt) goto loc_8231B34C;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_8231B2E0:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = f0.f64;
loc_8231B2E4:
	// li r4,108
	ctx.r4.s64 = 108;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// bl 0x8231aed8
	sub_8231AED8(ctx, base);
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// vspltisw128 v62,1
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_set1_epi32(int(0x1)));
	// vspltisw128 v61,0
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vcsxwfp128 v13,v62,1
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v62.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// vrsqrtefp128 v0,v63
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(v63.f32))));
	// vor128 v12,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)v63.u8));
	// vmulfp128 v11,v63,v13
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp128 v10,v63,v61
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v61.f32)));
	// vmulfp128 v9,v0,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v11,v9,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v63,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v0,v0,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	f0.f64 = double(float(f0.f64 * f30.f64));
	// b 0x8231b3c4
	goto loc_8231B3C4;
loc_8231B34C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x8231b2e0
	if (!cr6.lt) goto loc_8231B2E0;
	// fmr f31,f13
	f31.f64 = ctx.f13.f64;
	// b 0x8231b2e4
	goto loc_8231B2E4;
loc_8231B364:
	// li r4,108
	ctx.r4.s64 = 108;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x8231aed8
	sub_8231AED8(ctx, base);
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// vspltisw128 v62,1
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_set1_epi32(int(0x1)));
	// vspltisw128 v61,0
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vcsxwfp128 v13,v62,1
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v62.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// vrsqrtefp128 v0,v63
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(v63.f32))));
	// vor128 v12,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)v63.u8));
	// vmulfp128 v11,v63,v13
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp128 v10,v63,v61
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v61.f32)));
	// vmulfp128 v9,v0,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v11,v9,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v63,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v0,v0,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
loc_8231B3C4:
	// fmuls f1,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f29,-40(r1)
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231B3E8"))) PPC_WEAK_FUNC(sub_8231B3E8);
PPC_FUNC_IMPL(__imp__sub_8231B3E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r11,1
	r11.s64 = 1;
	// li r4,22
	ctx.r4.s64 = 22;
	// stb r11,960(r31)
	PPC_STORE_U8(r31.u32 + 960, r11.u8);
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8231b420
	if (!cr0.eq) goto loc_8231B420;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231ab20
	sub_8231AB20(ctx, base);
loc_8231B420:
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

__attribute__((alias("__imp__sub_8231B438"))) PPC_WEAK_FUNC(sub_8231B438);
PPC_FUNC_IMPL(__imp__sub_8231B438) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCVRegister v63{};
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r10,752
	ctx.r10.s64 = 752;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1040
	ctx.r8.s64 = 1040;
	// stb r9,960(r31)
	PPC_STORE_U8(r31.u32 + 960, ctx.r9.u8);
	// li r4,22
	ctx.r4.s64 = 22;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8231b48c
	if (!cr0.eq) goto loc_8231B48C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231ab20
	sub_8231AB20(ctx, base);
loc_8231B48C:
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

__attribute__((alias("__imp__sub_8231B4A0"))) PPC_WEAK_FUNC(sub_8231B4A0);
PPC_FUNC_IMPL(__imp__sub_8231B4A0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,99
	ctx.r4.s64 = 99;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// li r4,100
	ctx.r4.s64 = 100;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x8231a468
	sub_8231A468(ctx, base);
	// fdivs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 / f31.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8231b500
	if (!cr6.gt) goto loc_8231B500;
	// fmr f31,f13
	f31.f64 = ctx.f13.f64;
	// b 0x8231b504
	goto loc_8231B504;
loc_8231B500:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = f0.f64;
loc_8231B504:
	// li r4,101
	ctx.r4.s64 = 101;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// fmadds f1,f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * f31.f64 + f30.f64));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-32(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231B530"))) PPC_WEAK_FUNC(sub_8231B530);
PPC_FUNC_IMPL(__imp__sub_8231B530) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v63{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,28
	ctx.r9.s64 = r11.s64 + 28;
	// rlwinm r10,r11,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// add r29,r10,r31
	r29.u64 = ctx.r10.u64 + r31.u64;
	// li r8,1808
	ctx.r8.s64 = 1808;
	// addi r10,r31,752
	ctx.r10.s64 = r31.s64 + 752;
	// li r3,1072
	ctx.r3.s64 = 1072;
	// lbzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + r31.u32);
	// lis r7,-31962
	ctx.r7.s64 = -2094661632;
	// lis r5,-31962
	ctx.r5.s64 = -2094661632;
	// addi r6,r7,15052
	ctx.r6.s64 = ctx.r7.s64 + 15052;
	// addi r5,r5,14836
	ctx.r5.s64 = ctx.r5.s64 + 14836;
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r9,736(r31)
	PPC_STORE_U8(r31.u32 + 736, ctx.r9.u8);
	// lvx128 v63,r29,r8
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r4,0
	ctx.r4.s64 = 0;
	// stvx128 v63,r31,r3
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,3220(r31)
	PPC_STORE_U32(r31.u32 + 3220, r11.u32);
	// lwz r3,1840(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 1840);
	// bl 0x831b29f8
	sub_831B29F8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8231b638
	if (cr0.eq) goto loc_8231B638;
	// addi r29,r29,1824
	r29.s64 = r29.s64 + 1824;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822ef1f8
	sub_822EF1F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,768
	ctx.r10.s64 = 768;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x822eeeb0
	sub_822EEEB0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,784
	ctx.r10.s64 = 784;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x822eeec8
	sub_822EEEC8(ctx, base);
	// li r11,800
	r11.s64 = 800;
	// li r10,816
	ctx.r10.s64 = 816;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// li r4,8208
	ctx.r4.s64 = 8208;
	// stvx128 v63,r31,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lvx128 v63,r0,r29
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82491858
	sub_82491858(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231b658
	if (cr0.eq) goto loc_8231B658;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,1200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1200);
	// bl 0x82333d90
	sub_82333D90(ctx, base);
	// b 0x8231b658
	goto loc_8231B658;
loc_8231B638:
	// addi r3,r31,768
	ctx.r3.s64 = r31.s64 + 768;
	// bl 0x82e860b8
	sub_82E860B8(ctx, base);
	// addi r3,r31,784
	ctx.r3.s64 = r31.s64 + 784;
	// bl 0x82e860b8
	sub_82E860B8(ctx, base);
	// addi r3,r31,800
	ctx.r3.s64 = r31.s64 + 800;
	// bl 0x82e860b8
	sub_82E860B8(ctx, base);
	// addi r3,r31,816
	ctx.r3.s64 = r31.s64 + 816;
	// bl 0x82e860b8
	sub_82E860B8(ctx, base);
loc_8231B658:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8231B660"))) PPC_WEAK_FUNC(sub_8231B660);
PPC_FUNC_IMPL(__imp__sub_8231B660) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x8231ad80
	sub_8231AD80(ctx, base);
	// stw r30,1740(r31)
	PPC_STORE_U32(r31.u32 + 1740, r30.u32);
	// lis r11,-31961
	r11.s64 = -2094596096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-17924(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -17924);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307e18
	sub_82307E18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lfs f12,1328(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1328);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1748(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 1748, temp.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi. r9,r29,24
	ctx.r9.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// li r4,24
	ctx.r4.s64 = 24;
	// lfs f13,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,1744(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1744, temp.u32);
	// stfs f0,1752(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1752, temp.u32);
	// stfs f13,1756(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 1756, temp.u32);
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// beq 0x8231b6e0
	if (cr0.eq) goto loc_8231B6E0;
	// bl 0x82333d90
	sub_82333D90(ctx, base);
	// b 0x8231b6e4
	goto loc_8231B6E4;
loc_8231B6E0:
	// bl 0x82333da0
	sub_82333DA0(ctx, base);
loc_8231B6E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8231B6F0"))) PPC_WEAK_FUNC(sub_8231B6F0);
PPC_FUNC_IMPL(__imp__sub_8231B6F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,1432(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1432);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,48
	ctx.r10.s64 = 48;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lis r29,-31961
	r29.s64 = -2094596096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvlx128 v63,r10,r11
	temp.u32 = ctx.r10.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// lwz r4,-17572(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + -17572);
	// lfs f12,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82307e00
	sub_82307E00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-17572(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + -17572);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8230a3f8
	sub_8230A3F8(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8231b7ac
	if (cr6.eq) goto loc_8231B7AC;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231B7AC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82351a10
	sub_82351A10(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8231B7D8"))) PPC_WEAK_FUNC(sub_8231B7D8);
PPC_FUNC_IMPL(__imp__sub_8231B7D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,1200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1200);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231b808
	if (cr0.eq) goto loc_8231B808;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8231b818
	goto loc_8231B818;
loc_8231B808:
	// lwz r11,3272(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 3272);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_8231B818:
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

__attribute__((alias("__imp__sub_8231B830"))) PPC_WEAK_FUNC(sub_8231B830);
PPC_FUNC_IMPL(__imp__sub_8231B830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8231b7d8
	sub_8231B7D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231b898
	if (cr0.eq) goto loc_8231B898;
	// li r4,146
	ctx.r4.s64 = 146;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// li r4,145
	ctx.r4.s64 = 145;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lwa r11,3272(r31)
	r11.s64 = int32_t(PPC_LOAD_U32(r31.u32 + 3272));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fnmsubs f13,f13,f31,f1
	ctx.f13.f64 = double(float(-(ctx.f13.f64 * f31.f64 - ctx.f1.f64)));
	// fsel f1,f13,f13,f0
	ctx.f1.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// b 0x8231b89c
	goto loc_8231B89C;
loc_8231B898:
	// lfs f1,1208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1208);
	ctx.f1.f64 = double(temp.f32);
loc_8231B89C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231B8B8"))) PPC_WEAK_FUNC(sub_8231B8B8);
PPC_FUNC_IMPL(__imp__sub_8231B8B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f13,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82e85da8
	sub_82E85DA8(ctx, base);
	// vspltisw128 v63,-1
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// li r11,1120
	r11.s64 = 1120;
	// lvx128 v62,r0,r3
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v61,v62,177
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0x4E));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// vpermwi128 v60,v62,78
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xB1));
	// vslw128 v63,v63,v63
	v63.u32[0] = v63.u32[0] << (v63.u8[0] & 0x1F);
	v63.u32[1] = v63.u32[1] << (v63.u8[4] & 0x1F);
	v63.u32[2] = v63.u32[2] << (v63.u8[8] & 0x1F);
	v63.u32[3] = v63.u32[3] << (v63.u8[12] & 0x1F);
	// vpermwi128 v59,v62,228
	simde_mm_store_si128((simde__m128i*)v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0x1B));
	// lvx128 v58,r30,r11
	simde_mm_store_si128((simde__m128i*)v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v63,v58,v63
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)v58.u8), simde_mm_load_si128((simde__m128i*)v63.u8)));
	// vor128 v57,v63,v63
	simde_mm_store_si128((simde__m128i*)v57.u8, simde_mm_load_si128((simde__m128i*)v63.u8));
	// vor128 v56,v63,v63
	simde_mm_store_si128((simde__m128i*)v56.u8, simde_mm_load_si128((simde__m128i*)v63.u8));
	// vor128 v55,v63,v63
	simde_mm_store_si128((simde__m128i*)v55.u8, simde_mm_load_si128((simde__m128i*)v63.u8));
	// vrlimi128 v63,v58,11,0
	simde_mm_store_ps(v63.f32, simde_mm_blend_ps(simde_mm_load_ps(v63.f32), simde_mm_permute_ps(simde_mm_load_ps(v58.f32), 228), 11));
	// vrlimi128 v57,v58,1,0
	simde_mm_store_ps(v57.f32, simde_mm_blend_ps(simde_mm_load_ps(v57.f32), simde_mm_permute_ps(simde_mm_load_ps(v58.f32), 228), 1));
	// vrlimi128 v56,v58,13,0
	simde_mm_store_ps(v56.f32, simde_mm_blend_ps(simde_mm_load_ps(v56.f32), simde_mm_permute_ps(simde_mm_load_ps(v58.f32), 228), 13));
	// vrlimi128 v55,v58,7,0
	simde_mm_store_ps(v55.f32, simde_mm_blend_ps(simde_mm_load_ps(v55.f32), simde_mm_permute_ps(simde_mm_load_ps(v58.f32), 228), 7));
	// vmsum4fp128 v63,v63,v59
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v59.f32), 0xFF));
	// vmsum4fp128 v62,v57,v62
	simde_mm_store_ps(v62.f32, simde_mm_dp_ps(simde_mm_load_ps(v57.f32), simde_mm_load_ps(v62.f32), 0xFF));
	// vmsum4fp128 v61,v56,v61
	simde_mm_store_ps(v61.f32, simde_mm_dp_ps(simde_mm_load_ps(v56.f32), simde_mm_load_ps(v61.f32), 0xFF));
	// vmsum4fp128 v60,v55,v60
	simde_mm_store_ps(v60.f32, simde_mm_dp_ps(simde_mm_load_ps(v55.f32), simde_mm_load_ps(v60.f32), 0xFF));
	// vmrghw128 v62,v61,v62
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), simde_mm_load_si128((simde__m128i*)v61.u32)));
	// vmrghw128 v63,v63,v60
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), simde_mm_load_si128((simde__m128i*)v63.u32)));
	// vmrghw128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), simde_mm_load_si128((simde__m128i*)v63.u32)));
	// stvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_8231B990"))) PPC_WEAK_FUNC(sub_8231B990);
PPC_FUNC_IMPL(__imp__sub_8231B990) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8231b7d8
	sub_8231B7D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// beq 0x8231ba04
	if (cr0.eq) goto loc_8231BA04;
	// li r4,152
	ctx.r4.s64 = 152;
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// li r4,151
	ctx.r4.s64 = 151;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lwa r11,3272(r31)
	r11.s64 = int32_t(PPC_LOAD_U32(r31.u32 + 3272));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f12,f0
	ctx.f12.f64 = double(float(f0.f64));
	// lfs f0,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f0.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,-9716(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -9716);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f12,f12,f31,f1
	ctx.f12.f64 = double(float(-(ctx.f12.f64 * f31.f64 - ctx.f1.f64)));
	// fsel f0,f12,f12,f0
	f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : f0.f64;
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 * ctx.f13.f64));
	// b 0x8231ba18
	goto loc_8231BA18;
loc_8231BA04:
	// li r4,161
	ctx.r4.s64 = 161;
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-9716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -9716);
	f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
loc_8231BA18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231BA30"))) PPC_WEAK_FUNC(sub_8231BA30);
PPC_FUNC_IMPL(__imp__sub_8231BA30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
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
	// li r12,-112
	r12.s64 = -112;
	// stvx128 v125,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v125.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,-96
	r12.s64 = -96;
	// stvx128 v126,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,-80
	r12.s64 = -80;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r31,848
	r11.s64 = r31.s64 + 848;
	// li r30,1
	r30.s64 = 1;
	// lbz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 848);
	// lvx128 v127,r11,r9
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8231ba88
	if (!cr0.eq) goto loc_8231BA88;
	// li r30,0
	r30.s64 = 0;
loc_8231BA88:
	// lvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// vmsum3fp128 v63,v127,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// li r4,187
	ctx.r4.s64 = 187;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	f0.f64 = double(temp.f32);
	// fneg f31,f0
	f31.u64 = f0.u64 ^ 0x8000000000000000;
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, ctx.f1.f64);
	// bge cr6,0x8231bab8
	if (!cr6.lt) goto loc_8231BAB8;
	// li r30,0
	r30.s64 = 0;
loc_8231BAB8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8230a4e0
	sub_8230A4E0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// li r4,188
	ctx.r4.s64 = 188;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v127,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// fneg f31,f0
	f31.u64 = f0.u64 ^ 0x8000000000000000;
	// lfs f0,-9716(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -9716);
	f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
	// bl 0x831b1868
	sub_831B1868(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bgt cr6,0x8231bb0c
	if (cr6.gt) goto loc_8231BB0C;
	// li r30,0
	r30.s64 = 0;
loc_8231BB0C:
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231be08
	if (cr0.eq) goto loc_8231BE08;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// li r4,130
	ctx.r4.s64 = 130;
	// lfs f31,-24412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24412);
	f31.f64 = double(temp.f32);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfs f0,-17192(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -17192);
	f0.f64 = double(temp.f32);
	// fadds f30,f1,f0
	f30.f64 = double(float(ctx.f1.f64 + f0.f64));
	// bl 0x8230a4e0
	sub_8230A4E0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v125,r0,r11
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8230a430
	sub_8230A430(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r30,r31,976
	r30.s64 = r31.s64 + 976;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lfs f0,-7196(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -7196);
	f0.f64 = double(temp.f32);
	// lfs f13,-7200(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -7200);
	ctx.f13.f64 = double(temp.f32);
	// lvx128 v127,r0,r9
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v126,r0,r30
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lvlx128 v62,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v61,v61,0
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0xFF));
	// vspltw128 v60,v60,0
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), 0xFF));
	// vmaddfp128 v63,v126,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(v62.f32)), simde_mm_load_ps(v63.f32)));
	// vmulfp128 v62,v125,v61
	simde_mm_store_ps(v62.f32, simde_mm_mul_ps(simde_mm_load_ps(v125.f32), simde_mm_load_ps(v61.f32)));
	// vmaddfp128 v63,v127,v60,v63
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(v60.f32)), simde_mm_load_ps(v63.f32)));
	// vsubfp128 v63,v63,v62
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8230a4e0
	sub_8230A4E0(ctx, base);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// fadds f31,f30,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f30.f64 + f31.f64));
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,1384(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 1384);
	// lis r29,-31946
	r29.s64 = -2093613056;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v13,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v12,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// vmaddfp v0,v0,v13,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r7,28652(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 28652);
	// stvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x822ecd48
	sub_822ECD48(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231be08
	if (cr0.eq) goto loc_8231BE08;
	// li r11,0
	r11.s64 = 0;
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8200
	ctx.r4.s64 = 8200;
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f30,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f30.f64 = double(temp.f32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82491858
	sub_82491858(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231be08
	if (cr0.eq) goto loc_8231BE08;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8230a4e0
	sub_8230A4E0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lvx128 v125,r0,r11
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8230a430
	sub_8230A430(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lvx128 v127,r0,r30
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lfs f0,-7204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -7204);
	f0.f64 = double(temp.f32);
	// lfs f13,-7208(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -7208);
	ctx.f13.f64 = double(temp.f32);
	// lvx128 v126,r0,r9
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lvlx128 v62,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v61,v61,0
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0xFF));
	// vspltw128 v60,v60,0
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), 0xFF));
	// vmaddfp128 v63,v127,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(v62.f32)), simde_mm_load_ps(v63.f32)));
	// vmulfp128 v62,v125,v61
	simde_mm_store_ps(v62.f32, simde_mm_mul_ps(simde_mm_load_ps(v125.f32), simde_mm_load_ps(v61.f32)));
	// vmaddfp128 v63,v126,v60,v63
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(v60.f32)), simde_mm_load_ps(v63.f32)));
	// vsubfp128 v63,v63,v62
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8230a4e0
	sub_8230A4E0(ctx, base);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lwz r8,1384(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 1384);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r7,28652(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 28652);
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v13,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v12,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// vmaddfp v0,v0,v13,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x822ecd48
	sub_822ECD48(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231be08
	if (cr0.eq) goto loc_8231BE08;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r4,8200
	ctx.r4.s64 = 8200;
	// bl 0x82491858
	sub_82491858(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231be08
	if (cr0.eq) goto loc_8231BE08;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lfs f13,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lfs f12,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f30,140(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// lfs f0,-7212(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -7212);
	f0.f64 = double(temp.f32);
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f10,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, f0.f64);
	// ble cr6,0x8231be08
	if (!cr6.gt) goto loc_8231BE08;
	// lfs f0,3276(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 3276);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// bge cr6,0x8231bdd8
	if (!cr6.lt) goto loc_8231BDD8;
	// stfs f29,3276(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 3276, temp.u32);
	// b 0x8231bde0
	goto loc_8231BDE0;
loc_8231BDD8:
	// fadds f0,f0,f29
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 + f29.f64));
	// stfs f0,3276(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 3276, temp.u32);
loc_8231BDE0:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stfs f12,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r10,864
	ctx.r10.s64 = 864;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x8231be18
	goto loc_8231BE18;
loc_8231BE08:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,-24780(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24780);
	f0.f64 = double(temp.f32);
	// stfs f0,3276(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 3276, temp.u32);
loc_8231BE18:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// li r0,-112
	r0.s64 = -112;
	// lvx128 v125,r1,r0
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r0,-96
	r0.s64 = -96;
	// lvx128 v126,r1,r0
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r0,-80
	r0.s64 = -80;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8231BE48"))) PPC_WEAK_FUNC(sub_8231BE48);
PPC_FUNC_IMPL(__imp__sub_8231BE48) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824ee0f8
	sub_824EE0F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82519c08
	sub_82519C08(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r30,r11,27,31,31
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// beq cr6,0x8231bea0
	if (cr6.eq) goto loc_8231BEA0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231BEA0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231beb8
	if (cr0.eq) goto loc_8231BEB8;
loc_8231BEB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8231bf28
	goto loc_8231BF28;
loc_8231BEB8:
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8231beb0
	if (!cr0.eq) goto loc_8231BEB0;
	// li r4,42
	ctx.r4.s64 = 42;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8231beb0
	if (!cr0.eq) goto loc_8231BEB0;
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8231beb0
	if (!cr0.eq) goto loc_8231BEB0;
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8231beb0
	if (!cr0.eq) goto loc_8231BEB0;
	// lwz r11,1784(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1784);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8231bf1c
	if (!cr6.gt) goto loc_8231BF1C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8231bf28
	goto loc_8231BF28;
loc_8231BF1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blt cr6,0x8231bf28
	if (cr6.lt) goto loc_8231BF28;
	// lbz r3,1780(r31)
	ctx.r3.u64 = PPC_LOAD_U8(r31.u32 + 1780);
loc_8231BF28:
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

__attribute__((alias("__imp__sub_8231BF40"))) PPC_WEAK_FUNC(sub_8231BF40);
PPC_FUNC_IMPL(__imp__sub_8231BF40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8231aed8
	sub_8231AED8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,1472
	ctx.r10.s64 = 1472;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e861d8
	sub_82E861D8(ctx, base);
	// li r11,1476
	r11.s64 = 1476;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lvlx128 v63,r31,r11
	temp.u32 = r31.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82317578
	sub_82317578(ctx, base);
	// li r4,30
	ctx.r4.s64 = 30;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d90
	sub_82333D90(ctx, base);
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

__attribute__((alias("__imp__sub_8231BFE0"))) PPC_WEAK_FUNC(sub_8231BFE0);
PPC_FUNC_IMPL(__imp__sub_8231BFE0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f1,3368(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 3368, temp.u32);
	// stfs f0,3376(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 3376, temp.u32);
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x822d2058
	sub_822D2058(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e86068
	sub_82E86068(ctx, base);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lvx128 v61,r0,r10
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v62,v62,v61
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v62.f32, simde_mm_sub_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v61.f32)));
	// lfs f13,-24792(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24792);
	ctx.f13.f64 = double(temp.f32);
	// vmsum3fp128 v63,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	f0.f64 = double(temp.f32);
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x8231c07c
	if (!cr6.lt) goto loc_8231C07C;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_8231C07C:
	// stfs f0,3372(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 3372, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_8231C098"))) PPC_WEAK_FUNC(sub_8231C098);
PPC_FUNC_IMPL(__imp__sub_8231C098) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31961
	r11.s64 = -2094596096;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r4,-17908(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -17908);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307e18
	sub_82307E18(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8233c250
	sub_8233C250(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// bl 0x827d9200
	sub_827D9200(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82e65728
	sub_82E65728(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8231c138
	if (cr6.eq) goto loc_8231C138;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231C138:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_8231C140"))) PPC_WEAK_FUNC(sub_8231C140);
PPC_FUNC_IMPL(__imp__sub_8231C140) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// lvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lvx128 v62,r0,r29
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// vmsum3fp128 v61,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v61.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v62,v63,v62
	simde_mm_store_ps(v62.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// stvx128 v61,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f30,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f30.f64 = double(temp.f32);
	// stvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f31,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	cr6.compare(f31.f64, f30.f64);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ble cr6,0x8231c1f8
	if (!cr6.gt) goto loc_8231C1F8;
	// li r4,175
	ctx.r4.s64 = 175;
	// lwz r3,508(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, ctx.f1.f64);
	// blt cr6,0x8231c1b4
	if (cr6.lt) goto loc_8231C1B4;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
loc_8231C1B4:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(f30.f64, f31.f64);
	// ble cr6,0x8231c1c4
	if (!cr6.gt) goto loc_8231C1C4;
	// stfs f30,80(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x8231c1c8
	goto loc_8231C1C8;
loc_8231C1C4:
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_8231C1C8:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// lvx128 v63,r0,r29
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v62,r0,r30
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v61,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v61,v61,0
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0xFF));
	// vspltw128 v60,v60,0
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), 0xFF));
	// vmulfp128 v61,v63,v61
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v61.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v61.f32)));
	// vmulfp128 v63,v63,v60
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v60.f32)));
	// vsubfp128 v63,v63,v61
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v61.f32)));
	// vaddfp128 v63,v62,v63
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
loc_8231C1F8:
	// stvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8231C210"))) PPC_WEAK_FUNC(sub_8231C210);
PPC_FUNC_IMPL(__imp__sub_8231C210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	// li r8,16
	ctx.r8.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r10,48
	ctx.r10.s64 = 48;
	// addi r11,r3,1552
	r11.s64 = ctx.r3.s64 + 1552;
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,1536(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1536, ctx.r7.u8);
	// lvlx128 v63,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v60,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r11,r9
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r11,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231C250"))) PPC_WEAK_FUNC(sub_8231C250);
PPC_FUNC_IMPL(__imp__sub_8231C250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r31,r30,976
	r31.s64 = r30.s64 + 976;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lvx128 v62,r0,r31
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// vmsum3fp128 v61,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v61.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stvx128 v61,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// vmulfp128 v63,v62,v63
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e86270
	sub_82E86270(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// lfs f0,-10412(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -10412);
	f0.f64 = double(temp.f32);
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x8231c2d8
	if (!cr6.lt) goto loc_8231C2D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8231c384
	goto loc_8231C384;
loc_8231C2D8:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e86068
	sub_82E86068(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e861d8
	sub_82E861D8(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// lfs f0,2240(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x8231c32c
	if (!cr6.lt) goto loc_8231C32C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,-24780(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24780);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e86250
	sub_82E86250(ctx, base);
loc_8231C32C:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r3,508(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 508);
	// li r4,115
	ctx.r4.s64 = 115;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-9716(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -9716);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x8231c380
	if (!cr6.lt) goto loc_8231C380;
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r3,1196(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x8231c384
	if (cr0.eq) goto loc_8231C384;
loc_8231C380:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8231C384:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8231C390"))) PPC_WEAK_FUNC(sub_8231C390);
PPC_FUNC_IMPL(__imp__sub_8231C390) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lbz r11,3356(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3356);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231c3a4
	if (cr0.eq) goto loc_8231C3A4;
	// lfs f1,3360(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3360);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8231C3A4:
	// b 0x8231a468
	sub_8231A468(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231C3A8"))) PPC_WEAK_FUNC(sub_8231C3A8);
PPC_FUNC_IMPL(__imp__sub_8231C3A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831b1430
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f31,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f31.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f30,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f30.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f30,104(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f30,112(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f30,120(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f30,124(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82e85da8
	sub_82E85DA8(ctx, base);
	// lbz r11,960(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 960);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231c54c
	if (cr0.eq) goto loc_8231C54C;
	// li r4,44
	ctx.r4.s64 = 44;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8231c54c
	if (!cr0.eq) goto loc_8231C54C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r10,752
	ctx.r10.s64 = 752;
	// addi r11,r11,-20912
	r11.s64 = r11.s64 + -20912;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,144(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, f31.f64);
	// ble cr6,0x8231c460
	if (!cr6.gt) goto loc_8231C460;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// b 0x8231c478
	goto loc_8231C478;
loc_8231C460:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmr f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f13.f64;
	// lfs f0,-24780(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24780);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x8231c478
	if (!cr6.lt) goto loc_8231C478;
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
loc_8231C478:
	// bl 0x82316df8
	sub_82316DF8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-7188(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -7188);
	f0.f64 = double(temp.f32);
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - f0.f64));
	// lfs f0,-7192(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -7192);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x8231c4f8
	if (!cr6.gt) goto loc_8231C4F8;
	// fmr f0,f31
	f0.f64 = f31.f64;
loc_8231C4A0:
	// fmr f29,f0
	ctx.fpscr.disableFlushMode();
	f29.f64 = f0.f64;
loc_8231C4A4:
	// li r4,170
	ctx.r4.s64 = 170;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// li r4,171
	ctx.r4.s64 = 171;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// li r4,170
	ctx.r4.s64 = 170;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	f26.f64 = ctx.f1.f64;
	// bl 0x8231a468
	sub_8231A468(ctx, base);
	// fsubs f0,f1,f28
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 - f28.f64));
	// fsubs f13,f27,f26
	ctx.f13.f64 = double(float(f27.f64 - f26.f64));
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x8231c508
	if (!cr6.gt) goto loc_8231C508;
	// fmr f0,f31
	f0.f64 = f31.f64;
	// b 0x8231c514
	goto loc_8231C514;
loc_8231C4F8:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f30.f64);
	// bge cr6,0x8231c4a0
	if (!cr6.lt) goto loc_8231C4A0;
	// fmr f29,f30
	f29.f64 = f30.f64;
	// b 0x8231c4a4
	goto loc_8231C4A4;
loc_8231C508:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f30.f64);
	// bge cr6,0x8231c514
	if (!cr6.lt) goto loc_8231C514;
	// fmr f0,f30
	f0.f64 = f30.f64;
loc_8231C514:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f29.f64);
	// bgt cr6,0x8231c520
	if (cr6.gt) goto loc_8231C520;
	// fmr f0,f29
	f0.f64 = f29.f64;
loc_8231C520:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f0.f64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15648
	ctx.r4.s64 = r11.s64 + -15648;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e86010
	sub_82E86010(ctx, base);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// b 0x8231c55c
	goto loc_8231C55C;
loc_8231C54C:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
loc_8231C55C:
	// stfs f11,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831b147c
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

__attribute__((alias("__imp__sub_8231C590"))) PPC_WEAK_FUNC(sub_8231C590);
PPC_FUNC_IMPL(__imp__sub_8231C590) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// bl 0x82318df0
	sub_82318DF0(ctx, base);
	// lfs f0,1340(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1340);
	f0.f64 = double(temp.f32);
	// fadds f0,f31,f0
	f0.f64 = double(float(f31.f64 + f0.f64));
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x8231c5c4
	if (!cr6.lt) goto loc_8231C5C4;
	// fmr f0,f1
	f0.f64 = ctx.f1.f64;
loc_8231C5C4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f0,f0,f13
	f0.f64 = f0.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// stfs f0,1340(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1340, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231C5F0"))) PPC_WEAK_FUNC(sub_8231C5F0);
PPC_FUNC_IMPL(__imp__sub_8231C5F0) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82318df0
	sub_82318DF0(ctx, base);
	// lfs f0,1340(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1340);
	f0.f64 = double(temp.f32);
	// fdivs f1,f0,f1
	ctx.f1.f64 = double(float(f0.f64 / ctx.f1.f64));
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

__attribute__((alias("__imp__sub_8231C628"))) PPC_WEAK_FUNC(sub_8231C628);
PPC_FUNC_IMPL(__imp__sub_8231C628) {
	PPC_FUNC_PROLOGUE();
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
	// lfs f0,1340(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1340);
	f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 + f0.f64));
	// stfs f0,1340(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1340, temp.u32);
	// bl 0x82318df0
	sub_82318DF0(ctx, base);
	// lfs f0,1340(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1340);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x8231c65c
	if (!cr6.lt) goto loc_8231C65C;
	// fmr f0,f1
	f0.f64 = ctx.f1.f64;
loc_8231C65C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f0,f0,f13
	f0.f64 = f0.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// stfs f0,1340(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1340, temp.u32);
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

__attribute__((alias("__imp__sub_8231C680"))) PPC_WEAK_FUNC(sub_8231C680);
PPC_FUNC_IMPL(__imp__sub_8231C680) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v63{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831b1434
	// li r12,-80
	r12.s64 = -80;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-20912
	r11.s64 = r11.s64 + -20912;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8230a430
	sub_8230A430(ctx, base);
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vmsum3fp128 v63,v63,v127
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v127.f32), 0xEF));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f30,2244(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f30.f64 = double(temp.f32);
	// lfs f29,-24780(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24780);
	f29.f64 = double(temp.f32);
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// ble cr6,0x8231c768
	if (!cr6.gt) goto loc_8231C768;
	// fmr f0,f30
	f0.f64 = f30.f64;
loc_8231C6EC:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = f0.f64;
loc_8231C6F0:
	// fabs f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = f31.u64 & ~0x8000000000000000;
	// bl 0x82316df8
	sub_82316DF8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r4,196
	ctx.r4.s64 = 196;
	// lfs f0,-14516(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -14516);
	f0.f64 = double(temp.f32);
	// lfs f13,-24672(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24672);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f28,f1,f0,f13
	f28.f64 = double(float(-(ctx.f1.f64 * f0.f64 - ctx.f13.f64)));
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
	// li r4,197
	ctx.r4.s64 = 197;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// fsubs f28,f28,f27
	f28.f64 = double(float(f28.f64 - f27.f64));
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// fsubs f0,f1,f27
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 - f27.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f28,f0
	f0.f64 = double(float(f28.f64 / f0.f64));
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// ble cr6,0x8231c778
	if (!cr6.gt) goto loc_8231C778;
	// fmr f0,f30
	f0.f64 = f30.f64;
loc_8231C748:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = f0.f64;
loc_8231C74C:
	// fabs f11,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = f31.u64 & ~0x8000000000000000;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lfs f0,-3776(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -3776);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// bge cr6,0x8231c788
	if (!cr6.lt) goto loc_8231C788;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// b 0x8231c79c
	goto loc_8231C79C;
loc_8231C768:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f29.f64);
	// bge cr6,0x8231c6ec
	if (!cr6.lt) goto loc_8231C6EC;
	// fmr f31,f29
	f31.f64 = f29.f64;
	// b 0x8231c6f0
	goto loc_8231C6F0;
loc_8231C778:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x8231c748
	if (!cr6.lt) goto loc_8231C748;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// b 0x8231c74c
	goto loc_8231C74C;
loc_8231C788:
	// fcmpu cr6,f31,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, ctx.f13.f64);
	// ble cr6,0x8231c798
	if (!cr6.gt) goto loc_8231C798;
	// fmr f0,f30
	f0.f64 = f30.f64;
	// b 0x8231c79c
	goto loc_8231C79C;
loc_8231C798:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	f0.f64 = f29.f64;
loc_8231C79C:
	// fnmsubs f1,f12,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(-(ctx.f12.f64 * f0.f64 - f30.f64)));
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// li r0,-80
	r0.s64 = -80;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831b1480
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231C7C8"))) PPC_WEAK_FUNC(sub_8231C7C8);
PPC_FUNC_IMPL(__imp__sub_8231C7C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v63{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// li r12,-80
	r12.s64 = -80;
	// stvx128 v126,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,-64
	r12.s64 = -64;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// lbz r11,960(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 960);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231c810
	if (cr0.eq) goto loc_8231C810;
	// li r10,1136
	ctx.r10.s64 = 1136;
	// b 0x8231c824
	goto loc_8231C824;
loc_8231C810:
	// lbz r10,1204(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 1204);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r10,1136
	ctx.r10.s64 = 1136;
	// bne 0x8231c824
	if (!cr0.eq) goto loc_8231C824;
	// li r10,976
	ctx.r10.s64 = 976;
loc_8231C824:
	// lvx128 v126,r31,r10
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,1740(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 1740);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lfs f31,2244(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f31.f64 = double(temp.f32);
	// beq cr6,0x8231c85c
	if (cr6.eq) goto loc_8231C85C;
	// li r11,1744
	r11.s64 = 1744;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lvx128 v127,r31,r11
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v127,v126
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(v126.f32), 0xEF));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// stfs f0,1328(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1328, temp.u32);
	// b 0x8231c8b4
	goto loc_8231C8B4;
loc_8231C85C:
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r4,111
	ctx.r4.s64 = 111;
	// bne cr6,0x8231c870
	if (!cr6.eq) goto loc_8231C870;
	// li r4,112
	ctx.r4.s64 = 112;
loc_8231C870:
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// li r4,113
	ctx.r4.s64 = 113;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 * f30.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x8231c894
	if (!cr6.gt) goto loc_8231C894;
	// fmr f0,f31
	f0.f64 = f31.f64;
loc_8231C894:
	// lfs f13,1328(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1328);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,1328
	r11.s64 = r31.s64 + 1328;
	// fsubs f12,f29,f13
	ctx.f12.f64 = double(float(f29.f64 - ctx.f13.f64));
	// fmadds f0,f12,f0,f13
	f0.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// stfs f0,1328(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1328, temp.u32);
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// vmulfp128 v127,v126,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v127.f32, simde_mm_mul_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(v63.f32)));
loc_8231C8B4:
	// li r4,114
	ctx.r4.s64 = 114;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 * f30.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x8231c8d0
	if (!cr6.gt) goto loc_8231C8D0;
	// fmr f0,f31
	f0.f64 = f31.f64;
loc_8231C8D0:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r31,1312
	r11.s64 = r31.s64 + 1312;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v0,v127,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(v63.f32)));
	// lvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v13,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// vmaddfp v0,v0,v13,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// li r0,-80
	r0.s64 = -80;
	// lvx128 v126,r1,r0
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r0,-64
	r0.s64 = -64;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231C928"))) PPC_WEAK_FUNC(sub_8231C928);
PPC_FUNC_IMPL(__imp__sub_8231C928) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x831b0b1c
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,3296
	r11.s64 = 3296;
	// li r10,976
	ctx.r10.s64 = 976;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// li r7,3280
	ctx.r7.s64 = 3280;
	// lvx128 v63,r31,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,256
	r11.s64 = ctx.r1.s64 + 256;
	// lvx128 v62,r31,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// vmsum3fp128 v61,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v61.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f0,-20128(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -20128);
	f0.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lvx128 v60,r31,r7
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x8231c9c0
	if (!cr6.gt) goto loc_8231C9C0;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// bl 0x82e86068
	sub_82E86068(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e861d8
	sub_82E861D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e86068
	sub_82E86068(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// b 0x8231c9e8
	goto loc_8231C9E8;
loc_8231C9C0:
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// bl 0x82e86068
	sub_82E86068(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e861d8
	sub_82E861D8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e86068
	sub_82E86068(ctx, base);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_8231C9E8:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82e85900
	sub_82E85900(ctx, base);
	// addi r11,r1,192
	r11.s64 = ctx.r1.s64 + 192;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lvlx128 v62,r7,r10
	temp.u32 = ctx.r7.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lvlx128 v61,r8,r6
	temp.u32 = ctx.r8.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lvlx128 v60,r9,r5
	temp.u32 = ctx.r9.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v59,v63,v61
	simde_mm_store_si128((simde__m128i*)v59.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), simde_mm_load_si128((simde__m128i*)v63.u32)));
	// vmrghw128 v57,v62,v60
	simde_mm_store_si128((simde__m128i*)v57.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), simde_mm_load_si128((simde__m128i*)v62.u32)));
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// vmrglw128 v56,v62,v60
	simde_mm_store_si128((simde__m128i*)v56.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), simde_mm_load_si128((simde__m128i*)v62.u32)));
	// addi r30,r1,160
	r30.s64 = ctx.r1.s64 + 160;
	// vmrglw128 v58,v63,v61
	simde_mm_store_si128((simde__m128i*)v58.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), simde_mm_load_si128((simde__m128i*)v63.u32)));
	// addi r29,r1,176
	r29.s64 = ctx.r1.s64 + 176;
	// stvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw128 v62,v59,v57
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v57.u32), simde_mm_load_si128((simde__m128i*)v59.u32)));
	// stvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw128 v63,v59,v57
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v57.u32), simde_mm_load_si128((simde__m128i*)v59.u32)));
	// stvx128 v60,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw128 v59,v58,v56
	simde_mm_store_si128((simde__m128i*)v59.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v56.u32), simde_mm_load_si128((simde__m128i*)v58.u32)));
	// vmrglw128 v61,v58,v56
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v56.u32), simde_mm_load_si128((simde__m128i*)v58.u32)));
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r11,r31,592
	r11.s64 = r31.s64 + 592;
	// addi r28,r1,128
	r28.s64 = ctx.r1.s64 + 128;
	// addi r27,r1,128
	r27.s64 = ctx.r1.s64 + 128;
	// stvx128 v62,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lvlx128 v60,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stvx128 v60,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,192
	r26.s64 = ctx.r1.s64 + 192;
	// stvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r25,r1,192
	r25.s64 = ctx.r1.s64 + 192;
	// stvx128 v59,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// stvx128 v61,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r31,656
	ctx.r10.s64 = r31.s64 + 656;
	// lvlx128 v62,r9,r28
	temp.u32 = ctx.r9.u32 + r28.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r0,r27
	temp.u32 = r27.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r7,r3
	temp.u32 = ctx.r7.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v63,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r4,1
	ctx.r4.s64 = 1;
	// lvlx128 v59,r7,r26
	temp.u32 = ctx.r7.u32 + r26.u32;
	simde_mm_store_si128((simde__m128i*)v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v58,r8,r25
	temp.u32 = ctx.r8.u32 + r25.u32;
	simde_mm_store_si128((simde__m128i*)v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v57,r9,r5
	temp.u32 = ctx.r9.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v59,r11,r7
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v58,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v57,r11,r9
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r10,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r10,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r10,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r4,1381(r31)
	PPC_STORE_U8(r31.u32 + 1381, ctx.r4.u8);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_8231CAF8"))) PPC_WEAK_FUNC(sub_8231CAF8);
PPC_FUNC_IMPL(__imp__sub_8231CAF8) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r28,r11,-20912
	r28.s64 = r11.s64 + -20912;
	// lbz r10,1288(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 1288);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8231cb38
	if (cr0.eq) goto loc_8231CB38;
	// li r11,0
	r11.s64 = 0;
	// b 0x8231cb84
	goto loc_8231CB84;
loc_8231CB38:
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v62,r0,r28
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r4,116
	ctx.r4.s64 = 116;
	// vmsum3fp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-9716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -9716);
	f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
	// bl 0x831b1868
	sub_831B1868(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x8231cb80
	if (cr6.gt) goto loc_8231CB80;
	// li r11,0
	r11.s64 = 0;
loc_8231CB80:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
loc_8231CB84:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231cc70
	if (cr0.eq) goto loc_8231CC70;
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231cbb0
	if (cr0.eq) goto loc_8231CBB0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,2244
	r11.s64 = r11.s64 + 2244;
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// b 0x8231cc08
	goto loc_8231CC08;
loc_8231CBB0:
	// li r4,172
	ctx.r4.s64 = 172;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// li r4,171
	ctx.r4.s64 = 171;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// li r4,172
	ctx.r4.s64 = 172;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// bl 0x8231a468
	sub_8231A468(ctx, base);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 - f31.f64));
	// fsubs f13,f30,f29
	ctx.f13.f64 = double(float(f30.f64 - f29.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,2244
	r11.s64 = r11.s64 + 2244;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// ble cr6,0x8231cc10
	if (!cr6.gt) goto loc_8231CC10;
loc_8231CC08:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f12.f64;
	// b 0x8231cc24
	goto loc_8231CC24;
loc_8231CC10:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x8231cc24
	if (!cr6.lt) goto loc_8231CC24;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_8231CC24:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 - f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvx128 v63,r0,r28
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lvlx128 v62,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// vmulfp128 v13,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v12,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// vmaddfp v0,v0,v12,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// b 0x8231cc78
	goto loc_8231CC78;
loc_8231CC70:
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8231CC78:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_8231CC90"))) PPC_WEAK_FUNC(sub_8231CC90);
PPC_FUNC_IMPL(__imp__sub_8231CC90) {
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
	// mulli r11,r30,12
	r11.s64 = r30.s64 * 12;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x8231cd00
	if (!cr6.eq) goto loc_8231CD00;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_8231CD00:
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

__attribute__((alias("__imp__sub_8231CD18"))) PPC_WEAK_FUNC(sub_8231CD18);
PPC_FUNC_IMPL(__imp__sub_8231CD18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r6,20
	ctx.r6.s64 = 20;
	// addi r4,r10,2300
	ctx.r4.s64 = ctx.r10.s64 + 2300;
	// li r5,45
	ctx.r5.s64 = 45;
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9d90
	sub_82DF9D90(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8231cd50
	if (cr0.eq) goto loc_8231CD50;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_8231CD50:
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231cd5c
	if (cr0.eq) goto loc_8231CD5C;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8231CD5C:
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231cd68
	if (cr0.eq) goto loc_8231CD68;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8231CD68:
	// li r11,1
	r11.s64 = 1;
	// stb r10,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r10.u8);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231CD88"))) PPC_WEAK_FUNC(sub_8231CD88);
PPC_FUNC_IMPL(__imp__sub_8231CD88) {
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
	// beq cr6,0x8231cdb4
	if (cr6.eq) goto loc_8231CDB4;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82316d70
	sub_82316D70(ctx, base);
	// b 0x8231cdc0
	goto loc_8231CDC0;
loc_8231CDB4:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// addi r11,r11,-31616
	r11.s64 = r11.s64 + -31616;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_8231CDC0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231CDD0"))) PPC_WEAK_FUNC(sub_8231CDD0);
PPC_FUNC_IMPL(__imp__sub_8231CDD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,12188
	ctx.r9.s64 = ctx.r10.s64 + 12188;
	// stw r11,12188(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12188, r11.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8231ce00
	if (cr0.eq) goto loc_8231CE00;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231CE00:
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,12196
	ctx.r9.s64 = ctx.r10.s64 + 12196;
	// stw r11,12196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12196, r11.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8231ce24
	if (cr0.eq) goto loc_8231CE24;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231CE24:
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,12204
	ctx.r9.s64 = ctx.r10.s64 + 12204;
	// stw r11,12204(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12204, r11.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8231ce48
	if (cr0.eq) goto loc_8231CE48;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231CE48:
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,12212
	ctx.r9.s64 = ctx.r10.s64 + 12212;
	// stw r11,12212(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12212, r11.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8231ce6c
	if (cr0.eq) goto loc_8231CE6C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231CE6C:
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,12220
	ctx.r9.s64 = ctx.r10.s64 + 12220;
	// stw r11,12220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12220, r11.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8231ce90
	if (cr0.eq) goto loc_8231CE90;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231CE90:
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,12228
	ctx.r9.s64 = ctx.r10.s64 + 12228;
	// stw r11,12228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12228, r11.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8231ceb4
	if (cr0.eq) goto loc_8231CEB4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231CEB4:
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,12236
	ctx.r9.s64 = ctx.r10.s64 + 12236;
	// stw r11,12236(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12236, r11.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8231ced8
	if (cr0.eq) goto loc_8231CED8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231CED8:
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,12244
	ctx.r9.s64 = ctx.r10.s64 + 12244;
	// stw r11,12244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12244, r11.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8231cefc
	if (cr0.eq) goto loc_8231CEFC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231CEFC:
	// bl 0x8230d5d0
	sub_8230D5D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231CF10"))) PPC_WEAK_FUNC(sub_8231CF10);
PPC_FUNC_IMPL(__imp__sub_8231CF10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	// lbz r11,1382(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1382);
	// li r10,528
	ctx.r10.s64 = 528;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231cf44
	if (cr0.eq) goto loc_8231CF44;
	// li r9,560
	ctx.r9.s64 = 560;
	// li r8,544
	ctx.r8.s64 = 544;
	// li r11,0
	r11.s64 = 0;
	// lvx128 v63,r4,r9
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r4,r8
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r4,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r11,1382(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1382, r11.u8);
	// stb r11,1381(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1381, r11.u8);
loc_8231CF44:
	// lvx128 v63,r4,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231CF50"))) PPC_WEAK_FUNC(sub_8231CF50);
PPC_FUNC_IMPL(__imp__sub_8231CF50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v63{};
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
	// lbz r11,1381(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1381);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231cf7c
	if (cr0.eq) goto loc_8231CF7C;
	// bl 0x8231a0e8
	sub_8231A0E8(ctx, base);
loc_8231CF7C:
	// li r11,544
	r11.s64 = 544;
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stvx128 v63,r31,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r10,1382(r31)
	PPC_STORE_U8(r31.u32 + 1382, ctx.r10.u8);
	// stb r9,1381(r31)
	PPC_STORE_U8(r31.u32 + 1381, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_8231CFB0"))) PPC_WEAK_FUNC(sub_8231CFB0);
PPC_FUNC_IMPL(__imp__sub_8231CFB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8231cf50
	sub_8231CF50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231CFB8"))) PPC_WEAK_FUNC(sub_8231CFB8);
PPC_FUNC_IMPL(__imp__sub_8231CFB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v63{};
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
	// lbz r11,1381(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1381);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231cfe4
	if (cr0.eq) goto loc_8231CFE4;
	// bl 0x8231a0e8
	sub_8231A0E8(ctx, base);
loc_8231CFE4:
	// li r11,560
	r11.s64 = 560;
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stvx128 v63,r31,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r10,1382(r31)
	PPC_STORE_U8(r31.u32 + 1382, ctx.r10.u8);
	// stb r9,1381(r31)
	PPC_STORE_U8(r31.u32 + 1381, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_8231D018"))) PPC_WEAK_FUNC(sub_8231D018);
PPC_FUNC_IMPL(__imp__sub_8231D018) {
	PPC_FUNC_PROLOGUE();
	// b 0x8231cfb8
	sub_8231CFB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231D020"))) PPC_WEAK_FUNC(sub_8231D020);
PPC_FUNC_IMPL(__imp__sub_8231D020) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	// lbz r11,1382(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1382);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231d054
	if (cr0.eq) goto loc_8231D054;
	// li r11,560
	r11.s64 = 560;
	// li r9,544
	ctx.r9.s64 = 544;
	// li r8,528
	ctx.r8.s64 = 528;
	// lvx128 v63,r3,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r3,r9
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r3,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r10,1382(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1382, ctx.r10.u8);
	// stb r10,1381(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1381, ctx.r10.u8);
loc_8231D054:
	// addi r11,r3,528
	r11.s64 = ctx.r3.s64 + 528;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,1
	ctx.r9.s64 = 1;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r9,1381(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1381, ctx.r9.u8);
	// stb r10,1382(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1382, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231D078"))) PPC_WEAK_FUNC(sub_8231D078);
PPC_FUNC_IMPL(__imp__sub_8231D078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8231d020
	sub_8231D020(ctx, base);
	// lbz r11,1382(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1382);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231d0bc
	if (cr0.eq) goto loc_8231D0BC;
	// li r10,560
	ctx.r10.s64 = 560;
	// li r9,544
	ctx.r9.s64 = 544;
	// li r8,528
	ctx.r8.s64 = 528;
	// li r11,0
	r11.s64 = 0;
	// lvx128 v63,r3,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r3,r9
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r3,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r11,1382(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1382, r11.u8);
	// stb r11,1381(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1381, r11.u8);
loc_8231D0BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231D0D0"))) PPC_WEAK_FUNC(sub_8231D0D0);
PPC_FUNC_IMPL(__imp__sub_8231D0D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v63{};
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
	// lbz r11,1381(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1381);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231d100
	if (cr0.eq) goto loc_8231D100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231a0e8
	sub_8231A0E8(ctx, base);
loc_8231D100:
	// li r11,544
	r11.s64 = 544;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lvx128 v63,r31,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_8231D128"))) PPC_WEAK_FUNC(sub_8231D128);
PPC_FUNC_IMPL(__imp__sub_8231D128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831b36c4
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// stfs f31,428(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 428, temp.u32);
	// lbz r11,960(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 960);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231d4c4
	if (cr0.eq) goto loc_8231D4C4;
	// li r4,98
	ctx.r4.s64 = 98;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// lfs f30,1292(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1292);
	f30.f64 = double(temp.f32);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lfs f11,1412(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1412);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f30,f11
	ctx.f13.f64 = double(float(f30.f64 - ctx.f11.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x8231d1a4
	if (!cr6.gt) goto loc_8231D1A4;
	// lfs f12,1292(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1292);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsel f12,f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : f0.f64;
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x8231d1c0
	if (cr6.lt) goto loc_8231D1C0;
	// b 0x8231d1bc
	goto loc_8231D1BC;
loc_8231D1A4:
	// fneg f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// ble cr6,0x8231d1b4
	if (!cr6.gt) goto loc_8231D1B4;
	// fmr f12,f0
	ctx.f12.f64 = f0.f64;
loc_8231D1B4:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x8231d1c0
	if (cr6.gt) goto loc_8231D1C0;
loc_8231D1BC:
	// fmr f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f12.f64;
loc_8231D1C0:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fadds f13,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// li r10,768
	ctx.r10.s64 = 768;
	// stfs f13,1412(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 1412, temp.u32);
	// addi r11,r11,-20912
	r11.s64 = r11.s64 + -20912;
	// lfs f12,1292(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1292);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// li r4,47
	ctx.r4.s64 = 47;
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// lvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v127,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// fsubs f0,f13,f12
	ctx.fpscr.disableFlushModeUnconditional();
	f0.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231d404
	if (cr0.eq) goto loc_8231D404;
	// li r4,206
	ctx.r4.s64 = 206;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x8231a468
	sub_8231A468(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// bge cr6,0x8231d404
	if (!cr6.lt) goto loc_8231D404;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// li r4,205
	ctx.r4.s64 = 205;
	// lvx128 v125,r0,r11
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v126,v63,v125
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v126.f32, simde_mm_add_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v125.f32)));
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lwz r3,1384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1384);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r29,r1,208
	r29.s64 = ctx.r1.s64 + 208;
	// lfs f0,-31000(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31000);
	f0.f64 = double(temp.f32);
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fneg f0,f1
	f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r30,-31946
	r30.s64 = -2093613056;
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v0,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// vmaddcfp128 v0,v127,v0,v126
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(v126.f32)));
	// lvlx128 v62,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// vmulfp128 v13,v127,v62
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(v62.f32)));
	// vspltw128 v12,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lwz r8,28608(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 28608);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// vmaddfp v0,v13,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822ed088
	sub_822ED088(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231d3e8
	if (cr0.eq) goto loc_8231D3E8;
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v62,v63,v127
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v62.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v127.f32), 0xEF));
	// lfs f0,-20128(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -20128);
	f0.f64 = double(temp.f32);
	// stvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x8231d3e8
	if (!cr6.gt) goto loc_8231D3E8;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vor128 v124,v63,v63
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_load_si128((simde__m128i*)v63.u8));
	// addi r10,r1,428
	ctx.r10.s64 = ctx.r1.s64 + 428;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvlx128 v62,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r4,98
	ctx.r4.s64 = 98;
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v0,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0xFF));
	// lvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v12,v127,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(v62.f32)));
	// vmaddfp v0,v12,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vsubfp128 v62,v0,v126
	simde_mm_store_ps(v62.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(v126.f32)));
	// stvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v62,v63
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// stvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r31,1504
	r11.s64 = r31.s64 + 1504;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,428
	ctx.r8.s64 = ctx.r1.s64 + 428;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r10,1520
	ctx.r10.s64 = 1520;
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v61,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v61,v61,0
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0xFF));
	// vmulfp128 v63,v124,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v124.f32), simde_mm_load_ps(v63.f32)));
	// lvlx128 v60,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v0,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), 0xFF));
	// vor128 v13,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)v62.u8));
	// lvx128 v60,r0,r7
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// vsubfp128 v63,v63,v62
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// vmulfp128 v12,v63,v61
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v61.f32)));
	// vmaddfp v0,v12,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r29,1416(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 1416);
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v63,v125
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v125.f32)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e84d20
	sub_82E84D20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e1bc30
	sub_82E1BC30(ctx, base);
loc_8231D3E8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a6fe20
	sub_82A6FE20(ctx, base);
	// addi r3,r3,192
	ctx.r3.s64 = ctx.r3.s64 + 192;
	// lwz r31,28608(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 28608);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8231d4b4
	goto loc_8231D4B4;
loc_8231D404:
	// li r4,98
	ctx.r4.s64 = 98;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r11,r31,1504
	r11.s64 = r31.s64 + 1504;
	// addi r10,r10,29232
	ctx.r10.s64 = ctx.r10.s64 + 29232;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,428
	ctx.r8.s64 = ctx.r1.s64 + 428;
	// li r7,752
	ctx.r7.s64 = 752;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v0,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)v62.u8));
	// vsubfp128 v63,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// li r10,1520
	ctx.r10.s64 = 1520;
	// lvlx128 v62,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// vspltw128 v13,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lvx128 v62,r0,r6
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lvlx128 v61,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v61,v61,0
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0xFF));
	// vmulfp128 v12,v63,v61
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v61.f32)));
	// vmaddfp v0,v12,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r31,r7
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r30,1416(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 1416);
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v63,v62
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e84d20
	sub_82E84D20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e1bc30
	sub_82E1BC30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a6fe20
	sub_82A6FE20(ctx, base);
	// addi r3,r3,192
	ctx.r3.s64 = ctx.r3.s64 + 192;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,28612(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 28612);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8231D4B4:
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82bb4b50
	sub_82BB4B50(ctx, base);
loc_8231D4C4:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831b395c
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8231D4E0"))) PPC_WEAK_FUNC(sub_8231D4E0);
PPC_FUNC_IMPL(__imp__sub_8231D4E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r4,r31,1088
	ctx.r4.s64 = r31.s64 + 1088;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f0,1088(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1088, temp.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
	// stfs f0,1092(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1092, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,1096(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1096, temp.u32);
	// lfs f0,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f0.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,2244(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,1100(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 1100, temp.u32);
	// bl 0x82e84be0
	sub_82E84BE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82e84a90
	sub_82E84A90(ctx, base);
	// li r11,1136
	r11.s64 = 1136;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// clrlwi. r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stvx128 v63,r31,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq 0x8231d574
	if (cr0.eq) goto loc_8231D574;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231a318
	sub_8231A318(ctx, base);
loc_8231D574:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8231D580"))) PPC_WEAK_FUNC(sub_8231D580);
PPC_FUNC_IMPL(__imp__sub_8231D580) {
	PPC_FUNC_PROLOGUE();
	// b 0x8231d4e0
	sub_8231D4E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231D588"))) PPC_WEAK_FUNC(sub_8231D588);
PPC_FUNC_IMPL(__imp__sub_8231D588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r4,45
	ctx.r4.s64 = 45;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231d6f4
	if (cr0.eq) goto loc_8231D6F4;
	// li r11,1152
	r11.s64 = 1152;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r31,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// lbz r10,1382(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 1382);
	// li r8,560
	ctx.r8.s64 = 560;
	// li r9,544
	ctx.r9.s64 = 544;
	// li r11,0
	r11.s64 = 0;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8231d610
	if (cr0.eq) goto loc_8231D610;
	// lvx128 v63,r31,r8
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,528
	ctx.r10.s64 = 528;
	// lvx128 v62,r31,r9
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r11,1382(r31)
	PPC_STORE_U8(r31.u32 + 1382, r11.u8);
	// stb r11,1381(r31)
	PPC_STORE_U8(r31.u32 + 1381, r11.u8);
loc_8231D610:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r10,r31,528
	ctx.r10.s64 = r31.s64 + 528;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v62,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v62.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// lfs f0,2240(r5)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stvx128 v62,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x8231d6f4
	if (!cr6.gt) goto loc_8231D6F4;
	// lbz r7,1382(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 1382);
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq 0x8231d664
	if (cr0.eq) goto loc_8231D664;
	// lvx128 v62,r31,r8
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r31,r9
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v62,v61,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v62.f32, simde_mm_add_ps(simde_mm_load_ps(v61.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r11,1382(r31)
	PPC_STORE_U8(r31.u32 + 1382, r11.u8);
	// stb r11,1381(r31)
	PPC_STORE_U8(r31.u32 + 1381, r11.u8);
loc_8231D664:
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// vmsum3fp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f12,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f13,f1,f31,f30
	ctx.f13.f64 = double(float(-(ctx.f1.f64 * f31.f64 - f30.f64)));
	// lfs f0,-19120(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -19120);
	f0.f64 = double(temp.f32);
	// fnmsubs f0,f12,f0,f12
	f0.f64 = double(float(-(ctx.f12.f64 * f0.f64 - ctx.f12.f64)));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x8231d6a0
	if (cr6.gt) goto loc_8231D6A0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_8231D6A0:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fsubs f0,f0,f12
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 - ctx.f12.f64));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r6,2369
	ctx.r6.s64 = 2369;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r8,-7184
	ctx.r5.s64 = ctx.r8.s64 + -7184;
	// vmulfp128 v63,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8231d078
	sub_8231D078(ctx, base);
	// li r4,45
	ctx.r4.s64 = 45;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333da0
	sub_82333DA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8231d6f8
	goto loc_8231D6F8;
loc_8231D6F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231D6F8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231D718"))) PPC_WEAK_FUNC(sub_8231D718);
PPC_FUNC_IMPL(__imp__sub_8231D718) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// addi r11,r31,1168
	r11.s64 = r31.s64 + 1168;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// stw r10,1168(r31)
	PPC_STORE_U32(r31.u32 + 1168, ctx.r10.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x822d1418
	sub_822D1418(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r28,r31,1176
	r28.s64 = r31.s64 + 1176;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r28,4
	ctx.r3.s64 = r28.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,1176(r31)
	PPC_STORE_U32(r31.u32 + 1176, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8231d78c
	if (cr6.eq) goto loc_8231D78C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231D78C:
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// bne cr6,0x8231d7b8
	if (!cr6.eq) goto loc_8231D7B8;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1184
	r11.s64 = r31.s64 + 1184;
	// stw r10,1184(r31)
	PPC_STORE_U32(r31.u32 + 1184, ctx.r10.u32);
	// lwz r3,1188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1188);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,1188(r31)
	PPC_STORE_U32(r31.u32 + 1188, ctx.r10.u32);
	// beq cr6,0x8231d800
	if (cr6.eq) goto loc_8231D800;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
	// b 0x8231d800
	goto loc_8231D800;
loc_8231D7B8:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822d1418
	sub_822D1418(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r30,r31,1184
	r30.s64 = r31.s64 + 1184;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,1184(r31)
	PPC_STORE_U32(r31.u32 + 1184, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8231d7f4
	if (cr6.eq) goto loc_8231D7F4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231D7F4:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x822d2968
	sub_822D2968(ctx, base);
loc_8231D800:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x822d2968
	sub_822D2968(ctx, base);
	// stw r27,1192(r31)
	PPC_STORE_U32(r31.u32 + 1192, r27.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8231D818"))) PPC_WEAK_FUNC(sub_8231D818);
PPC_FUNC_IMPL(__imp__sub_8231D818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// lwz r3,1176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1176);
	// bl 0x822d1f30
	sub_822D1F30(ctx, base);
	// lwz r30,1184(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 1184);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8231d878
	if (cr6.eq) goto loc_8231D878;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r29,1176(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 1176);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d1f38
	sub_822D1F38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x822d2830
	sub_822D2830(ctx, base);
	// lwz r3,1184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1184);
	// bl 0x822d1f30
	sub_822D1F30(ctx, base);
loc_8231D878:
	// lwz r30,1180(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 1180);
	// lwz r11,1176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1176);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x8231d8b0
	if (cr6.eq) goto loc_8231D8B0;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
loc_8231D894:
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
	// bne 0x8231d894
	if (!cr0.eq) goto loc_8231D894;
loc_8231D8B0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231bfe0
	sub_8231BFE0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8231d8d0
	if (cr6.eq) goto loc_8231D8D0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231D8D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8231D8E0"))) PPC_WEAK_FUNC(sub_8231D8E0);
PPC_FUNC_IMPL(__imp__sub_8231D8E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r26,r25,1176
	r26.s64 = r25.s64 + 1176;
	// lwz r31,1180(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 1180);
	// lwz r3,1176(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 1176);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8231d928
	if (cr6.eq) goto loc_8231D928;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
loc_8231D90C:
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
	// bne 0x8231d90c
	if (!cr0.eq) goto loc_8231D90C;
loc_8231D928:
	// bl 0x822d1f30
	sub_822D1F30(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8231d93c
	if (cr6.eq) goto loc_8231D93C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231D93C:
	// lwz r3,1188(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 1188);
	// addi r30,r25,1184
	r30.s64 = r25.s64 + 1184;
	// lwz r11,1184(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 1184);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8231d970
	if (cr6.eq) goto loc_8231D970;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
loc_8231D954:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x8231d954
	if (!cr0.eq) goto loc_8231D954;
loc_8231D970:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r31,r11,1
	r31.u64 = r11.u64 ^ 1;
	// beq cr6,0x8231d988
	if (cr6.eq) goto loc_8231D988;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231D988:
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231da84
	if (cr0.eq) goto loc_8231DA84;
	// lwz r27,4(r26)
	r27.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r28,0(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8231d9c0
	if (cr6.eq) goto loc_8231D9C0;
	// addi r11,r27,4
	r11.s64 = r27.s64 + 4;
loc_8231D9A4:
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
	// bne 0x8231d9a4
	if (!cr0.eq) goto loc_8231D9A4;
loc_8231D9C0:
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8231d9f0
	if (cr6.eq) goto loc_8231D9F0;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
loc_8231D9D4:
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
	// bne 0x8231d9d4
	if (!cr0.eq) goto loc_8231D9D4;
loc_8231D9F0:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822d1f38
	sub_822D1F38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// bl 0x822d2830
	sub_822D2830(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8231da2c
	if (cr6.eq) goto loc_8231DA2C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231DA2C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8231da3c
	if (cr6.eq) goto loc_8231DA3C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231DA3C:
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8231da6c
	if (cr6.eq) goto loc_8231DA6C;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
loc_8231DA50:
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
	// bne 0x8231da50
	if (!cr0.eq) goto loc_8231DA50;
loc_8231DA6C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822d1f30
	sub_822D1F30(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8231da84
	if (cr6.eq) goto loc_8231DA84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231DA84:
	// lwz r31,4(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x8231dabc
	if (cr6.eq) goto loc_8231DABC;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
loc_8231DAA0:
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
	// bne 0x8231daa0
	if (!cr0.eq) goto loc_8231DAA0;
loc_8231DABC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lfs f1,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8231bfe0
	sub_8231BFE0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8231dae0
	if (cr6.eq) goto loc_8231DAE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231DAE0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_8231DAF0"))) PPC_WEAK_FUNC(sub_8231DAF0);
PPC_FUNC_IMPL(__imp__sub_8231DAF0) {
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
	PPCRegister f31{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// bl 0x82316eb0
	sub_82316EB0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82e84f18
	sub_82E84F18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e84ee0
	sub_82E84EE0(ctx, base);
	// lfs f0,3312(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 3312);
	f0.f64 = double(temp.f32);
	// fadds f0,f31,f0
	f0.f64 = double(float(f31.f64 + f0.f64));
	// stfs f0,3312(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 3312, temp.u32);
	// li r4,38
	ctx.r4.s64 = 38;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r29,3296
	r29.s64 = 3296;
	// li r30,3280
	r30.s64 = 3280;
	// beq 0x8231dd98
	if (cr0.eq) goto loc_8231DD98;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,8028(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8028);
	// bl 0x82df98c0
	sub_82DF98C0(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82b4e2f0
	sub_82B4E2F0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f13,20(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lbz r6,3344(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 3344);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// lvx128 v61,r0,r8
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v0,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// vmulfp128 v13,v61,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(v61.f32), simde_mm_load_ps(v62.f32)));
	// lvx128 v12,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v0,v12,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v0,v0
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// beq 0x8231dcc0
	if (cr0.eq) goto loc_8231DCC0;
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,-28616(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28616);
	f0.f64 = double(temp.f32);
	// lfs f13,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x8231dd84
	if (!cr6.gt) goto loc_8231DD84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231a468
	sub_8231A468(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lfs f0,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x8231dc24
	if (!cr6.lt) goto loc_8231DC24;
	// bl 0x8230a4e0
	sub_8230A4E0(ctx, base);
	// b 0x8231dc28
	goto loc_8231DC28;
loc_8231DC24:
	// bl 0x8231a4e8
	sub_8231A4E8(ctx, base);
loc_8231DC28:
	// addi r11,r1,224
	r11.s64 = ctx.r1.s64 + 224;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// addi r6,r31,976
	ctx.r6.s64 = r31.s64 + 976;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e85da8
	sub_82E85DA8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82e84be0
	sub_82E84BE0(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82e84a90
	sub_82E84A90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r29
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e84a90
	sub_82E84A90(ctx, base);
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,3348(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 3348);
	f0.f64 = double(temp.f32);
	// lfs f13,3312(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 3312);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x8231dd90
	if (!cr6.gt) goto loc_8231DD90;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,3328
	ctx.r10.s64 = 3328;
	// li r9,0
	ctx.r9.s64 = 0;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r9,3344(r31)
	PPC_STORE_U8(r31.u32 + 3344, ctx.r9.u8);
	// b 0x8231dd90
	goto loc_8231DD90;
loc_8231DCC0:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,-7096(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -7096);
	f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x8231dd84
	if (cr6.lt) goto loc_8231DD84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231a468
	sub_8231A468(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f0,-6772(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -6772);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blt cr6,0x8231dd84
	if (cr6.lt) goto loc_8231DD84;
	// lfs f0,3312(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 3312);
	f0.f64 = double(temp.f32);
	// lfs f13,3352(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 3352);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x8231dd84
	if (cr6.gt) goto loc_8231DD84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// li r11,3328
	r11.s64 = 3328;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lvx128 v62,r31,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// lfd f31,-7104(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + -7104);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x831b1868
	sub_831B1868(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x8231dd84
	if (cr6.lt) goto loc_8231DD84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8230a4e0
	sub_8230A4E0(ctx, base);
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x831b1868
	sub_831B1868(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x8231dd90
	if (!cr6.gt) goto loc_8231DD90;
loc_8231DD84:
	// li r4,38
	ctx.r4.s64 = 38;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333da0
	sub_82333DA0(ctx, base);
loc_8231DD90:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231c928
	sub_8231C928(ctx, base);
loc_8231DD98:
	// li r4,38
	ctx.r4.s64 = 38;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8231ddc4
	if (!cr0.eq) goto loc_8231DDC4;
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r31,r29
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8231DDC4:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8231DDD0"))) PPC_WEAK_FUNC(sub_8231DDD0);
PPC_FUNC_IMPL(__imp__sub_8231DDD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,1632(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1632);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8231de1c
	if (cr6.eq) goto loc_8231DE1C;
	// lwz r9,1636(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1636);
	// li r7,12
	ctx.r7.s64 = 12;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// divw r9,r9,r7
	ctx.r9.s32 = ctx.r9.s32 / ctx.r7.s32;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8231de1c
	if (!cr6.lt) goto loc_8231DE1C;
	// mulli r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 * 12;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// b 0x8231de20
	goto loc_8231DE20;
loc_8231DE1C:
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_8231DE20:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231de70
	if (cr0.eq) goto loc_8231DE70;
	// lwz r11,1632(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1632);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8231DE50:
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
	// bne 0x8231de50
	if (!cr0.eq) goto loc_8231DE50;
	// blr 
	return;
loc_8231DE70:
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231DE80"))) PPC_WEAK_FUNC(sub_8231DE80);
PPC_FUNC_IMPL(__imp__sub_8231DE80) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8231df58
	if (cr6.eq) goto loc_8231DF58;
	// lwz r11,1632(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1632);
	// addi r3,r31,1628
	ctx.r3.s64 = r31.s64 + 1628;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8231dee8
	if (cr6.eq) goto loc_8231DEE8;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,12
	ctx.r9.s64 = 12;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r10,r9
	ctx.r10.s32 = ctx.r10.s32 / ctx.r9.s32;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x8231dee8
	if (!cr6.lt) goto loc_8231DEE8;
	// mulli r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 * 12;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// b 0x8231deec
	goto loc_8231DEEC;
loc_8231DEE8:
	// li r11,0
	r11.s64 = 0;
loc_8231DEEC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231df58
	if (cr0.eq) goto loc_8231DF58;
	// lwz r11,1632(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1632);
	// mulli r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 * 12;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
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
	// beq cr6,0x8231df38
	if (cr6.eq) goto loc_8231DF38;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8231DF1C:
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
	// bne 0x8231df1c
	if (!cr0.eq) goto loc_8231DF1C;
loc_8231DF38:
	// bl 0x8231cc90
	sub_8231CC90(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307e08
	sub_82307E08(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8231df58
	if (cr6.eq) goto loc_8231DF58;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231DF58:
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

__attribute__((alias("__imp__sub_8231DF70"))) PPC_WEAK_FUNC(sub_8231DF70);
PPC_FUNC_IMPL(__imp__sub_8231DF70) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8231dfac
	if (cr6.eq) goto loc_8231DFAC;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// addi r3,r31,1628
	ctx.r3.s64 = r31.s64 + 1628;
	// bl 0x8231cc90
	sub_8231CC90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// bl 0x82314758
	sub_82314758(ctx, base);
loc_8231DFAC:
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

__attribute__((alias("__imp__sub_8231DFC8"))) PPC_WEAK_FUNC(sub_8231DFC8);
PPC_FUNC_IMPL(__imp__sub_8231DFC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x823087b0
	sub_823087B0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r11,3136(r31)
	PPC_STORE_U32(r31.u32 + 3136, r11.u32);
	// stb r11,3216(r31)
	PPC_STORE_U8(r31.u32 + 3216, r11.u8);
	// stw r10,3220(r31)
	PPC_STORE_U32(r31.u32 + 3220, ctx.r10.u32);
	// lbz r11,960(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 960);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231e01c
	if (cr0.eq) goto loc_8231E01C;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,1356(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1356);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f0,1356(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1356, temp.u32);
	// b 0x8231e02c
	goto loc_8231E02C;
loc_8231E01C:
	// lfs f0,1360(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1360);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f0,1360(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1360, temp.u32);
loc_8231E02C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8231daf0
	sub_8231DAF0(ctx, base);
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

__attribute__((alias("__imp__sub_8231E050"))) PPC_WEAK_FUNC(sub_8231E050);
PPC_FUNC_IMPL(__imp__sub_8231E050) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,1200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1200);
	// bl 0x82334138
	sub_82334138(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,3388(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 3388, temp.u32);
	// stfs f0,3392(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 3392, temp.u32);
	// lfs f1,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8231c7c8
	sub_8231C7C8(ctx, base);
	// addi r3,r31,1696
	ctx.r3.s64 = r31.s64 + 1696;
	// bl 0x82e860b8
	sub_82E860B8(ctx, base);
	// lfs f0,1728(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1728);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f0,1728(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1728, temp.u32);
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

__attribute__((alias("__imp__sub_8231E0C0"))) PPC_WEAK_FUNC(sub_8231E0C0);
PPC_FUNC_IMPL(__imp__sub_8231E0C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8230d9f8
	sub_8230D9F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8231d0d0
	sub_8231D0D0(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// li r4,135
	ctx.r4.s64 = 135;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// fmuls f13,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8231e16c
	if (!cr6.gt) goto loc_8231E16C;
	// li r4,135
	ctx.r4.s64 = 135;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v63,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8231cf50
	sub_8231CF50(ctx, base);
loc_8231E16C:
	// lbz r11,960(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 960);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231e1c8
	if (cr0.eq) goto loc_8231E1C8;
	// li r11,976
	r11.s64 = 976;
	// lvlx128 v63,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r10,768
	ctx.r10.s64 = 768;
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,1456
	ctx.r7.s64 = 1456;
	// lvx128 v62,r31,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r31,r10
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v61,v61,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v61.f32, simde_mm_dp_ps(simde_mm_load_ps(v61.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// stvx128 v61,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v61,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v61,v61,0
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0xFF));
	// vmulfp128 v62,v62,v61
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v62.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v61.f32)));
	// vmulfp128 v63,v62,v63
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r31,r7
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x8231e1d0
	goto loc_8231E1D0;
loc_8231E1C8:
	// addi r3,r31,1456
	ctx.r3.s64 = r31.s64 + 1456;
	// bl 0x82e860b8
	sub_82E860B8(ctx, base);
loc_8231E1D0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_8231E1F0"))) PPC_WEAK_FUNC(sub_8231E1F0);
PPC_FUNC_IMPL(__imp__sub_8231E1F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,332
	r11.s64 = ctx.r1.s64 + 332;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stfs f31,332(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// addi r7,r31,1712
	ctx.r7.s64 = r31.s64 + 1712;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v62,r0,r7
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,3868
	ctx.r6.s64 = 3868;
	// vmulfp128 v63,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// addi r5,r9,-7184
	ctx.r5.s64 = ctx.r9.s64 + -7184;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8231d078
	sub_8231D078(ctx, base);
	// lbz r11,1382(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1382);
	// li r10,528
	ctx.r10.s64 = 528;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231e284
	if (cr0.eq) goto loc_8231E284;
	// li r9,560
	ctx.r9.s64 = 560;
	// li r8,544
	ctx.r8.s64 = 544;
	// li r11,0
	r11.s64 = 0;
	// lvx128 v63,r31,r9
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r31,r8
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r11,1382(r31)
	PPC_STORE_U8(r31.u32 + 1382, r11.u8);
	// stb r11,1381(r31)
	PPC_STORE_U8(r31.u32 + 1381, r11.u8);
loc_8231E284:
	// addi r11,r1,208
	r11.s64 = ctx.r1.s64 + 208;
	// lbz r9,1288(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 1288);
	// lvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne 0x8231e3f8
	if (!cr0.eq) goto loc_8231E3F8;
	// lvx128 v62,r0,r7
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vmsum3fp128 v62,v62,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v62.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-10412(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10412);
	f0.f64 = double(temp.f32);
	// stvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x8231e3f8
	if (!cr6.gt) goto loc_8231E3F8;
	// vmsum3fp128 v63,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x8231e3f8
	if (!cr6.gt) goto loc_8231E3F8;
	// addi r4,r31,1088
	ctx.r4.s64 = r31.s64 + 1088;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e84be0
	sub_82E84BE0(ctx, base);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lvx128 v61,r0,r9
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw128 v59,v63,v62
	simde_mm_store_si128((simde__m128i*)v59.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), simde_mm_load_si128((simde__m128i*)v63.u32)));
	// lvx128 v60,r0,r8
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), simde_mm_load_si128((simde__m128i*)v63.u32)));
	// vmrghw128 v62,v61,v60
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), simde_mm_load_si128((simde__m128i*)v61.u32)));
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// vmrglw128 v61,v61,v60
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), simde_mm_load_si128((simde__m128i*)v61.u32)));
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// vmrghw128 v60,v59,v62
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), simde_mm_load_si128((simde__m128i*)v59.u32)));
	// vmrglw128 v62,v59,v62
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), simde_mm_load_si128((simde__m128i*)v59.u32)));
	// vmrghw128 v59,v63,v61
	simde_mm_store_si128((simde__m128i*)v59.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), simde_mm_load_si128((simde__m128i*)v63.u32)));
	// vmrglw128 v63,v63,v61
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), simde_mm_load_si128((simde__m128i*)v63.u32)));
	// stvx128 v60,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v59,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8230a4e0
	sub_8230A4E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e84a90
	sub_82E84A90(ctx, base);
	// lfs f2,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831b3a68
	sub_831B3A68(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(ctx.f1.f64));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e84a90
	sub_82E84A90(ctx, base);
	// lfs f2,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831b3a68
	sub_831B3A68(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x8249a6a8
	sub_8249A6A8(ctx, base);
	// stfs f29,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x8249a660
	sub_8249A660(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// lfs f13,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82e85988
	sub_82E85988(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231a3a8
	sub_8231A3A8(ctx, base);
loc_8231E3F8:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231E418"))) PPC_WEAK_FUNC(sub_8231E418);
PPC_FUNC_IMPL(__imp__sub_8231E418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lfs f13,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
	// lfs f0,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x82e85da8
	sub_82E85DA8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231d4e0
	sub_8231D4E0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8231E498"))) PPC_WEAK_FUNC(sub_8231E498);
PPC_FUNC_IMPL(__imp__sub_8231E498) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v63{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,1732(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1732);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8231e5c4
	if (cr6.eq) goto loc_8231E5C4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8230a4e0
	sub_8230A4E0(ctx, base);
	// li r11,976
	r11.s64 = 976;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lvx128 v63,r31,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8231e418
	sub_8231E418(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231a730
	sub_8231A730(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8230b4e8
	sub_8230B4E8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,1732(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1732);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82e1b3d8
	sub_82E1B3D8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8231e51c
	if (cr6.eq) goto loc_8231E51C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231E51C:
	// lwz r11,1732(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1732);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8231e54c
	if (cr6.eq) goto loc_8231E54C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7092
	ctx.r4.s64 = r11.s64 + -7092;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,1732(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1732);
	// bl 0x82e1b290
	sub_82E1B290(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_8231E54C:
	// li r29,0
	r29.s64 = 0;
	// stw r29,1732(r31)
	PPC_STORE_U32(r31.u32 + 1732, r29.u32);
	// lwz r3,1736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1736);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r29,1736(r31)
	PPC_STORE_U32(r31.u32 + 1736, r29.u32);
	// beq cr6,0x8231e568
	if (cr6.eq) goto loc_8231E568;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231E568:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8230b4e8
	sub_8230B4E8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,256(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8231e59c
	if (!cr6.eq) goto loc_8231E59C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8231E59C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8250c758
	sub_8250C758(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8231e5c0
	if (cr6.eq) goto loc_8231E5C0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231E5C0:
	// stw r29,1740(r31)
	PPC_STORE_U32(r31.u32 + 1740, r29.u32);
loc_8231E5C4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8231E5D0"))) PPC_WEAK_FUNC(sub_8231E5D0);
PPC_FUNC_IMPL(__imp__sub_8231E5D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,1740(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1740);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x8231e498
	sub_8231E498(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231E5E0"))) PPC_WEAK_FUNC(sub_8231E5E0);
PPC_FUNC_IMPL(__imp__sub_8231E5E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231E5E8"))) PPC_WEAK_FUNC(sub_8231E5E8);
PPC_FUNC_IMPL(__imp__sub_8231E5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// li r12,-48
	r12.s64 = -48;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,78
	ctx.r4.s64 = 78;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// li r10,1008
	ctx.r10.s64 = 1008;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r4,77
	ctx.r4.s64 = 77;
	// lfs f31,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// lvx128 v127,r31,r10
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,128(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 128);
	// vmaddfp128 v62,v127,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v62.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(v63.f32)), simde_mm_load_ps(v62.f32)));
	// stvx128 v62,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,-7184
	ctx.r5.s64 = r11.s64 + -7184;
	// li r6,4892
	ctx.r6.s64 = 4892;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8231d078
	sub_8231D078(ctx, base);
	// lis r11,-31961
	r11.s64 = -2094596096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-17944(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -17944);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307e18
	sub_82307E18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// li r0,-48
	r0.s64 = -48;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231E6D8"))) PPC_WEAK_FUNC(sub_8231E6D8);
PPC_FUNC_IMPL(__imp__sub_8231E6D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// li r12,-64
	r12.s64 = -64;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8231e888
	if (!cr0.eq) goto loc_8231E888;
	// li r4,21
	ctx.r4.s64 = 21;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8231e8cc
	if (!cr0.eq) goto loc_8231E8CC;
	// lbz r11,1288(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1288);
	// li r4,91
	ctx.r4.s64 = 91;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231e890
	if (cr0.eq) goto loc_8231E890;
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-9716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -9716);
	f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
	// bl 0x831b4448
	sub_831B4448(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// fmuls f0,f0,f31
	ctx.fpscr.disableFlushModeUnconditional();
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x8231e908
	if (!cr6.lt) goto loc_8231E908;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8230a4e0
	sub_8230A4E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8231d0d0
	sub_8231D0D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// fabs f31,f0
	f31.u64 = f0.u64 & ~0x8000000000000000;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x8230a4e0
	sub_8230A4E0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8231d0d0
	sub_8231D0D0(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vspltisw128 v63,1
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_set1_epi32(int(0x1)));
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// vspltisw128 v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// li r4,93
	ctx.r4.s64 = 93;
	// vcsxwfp128 v13,v63,1
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v63.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v61,r0,r10
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v63,v127,v63
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(v63.f32)));
	// vsubfp128 v63,v61,v63
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v61.f32), simde_mm_load_ps(v63.f32)));
	// vmsum3fp128 v63,v63,v63
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// vrsqrtefp128 v0,v63
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(v63.f32))));
	// vor128 v12,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)v63.u8));
	// vmulfp128 v11,v63,v13
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp128 v10,v63,v62
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// vmulfp128 v9,v0,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v11,v9,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v63,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v0,v0,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// stvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// bl 0x8231a468
	sub_8231A468(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f30.f64);
	// blt cr6,0x8231e888
	if (cr6.lt) goto loc_8231E888;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lfs f0,26548(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 26548);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x8231e86c
	if (!cr6.lt) goto loc_8231E86C;
	// fmr f31,f0
	f31.f64 = f0.f64;
loc_8231E86C:
	// li r4,94
	ctx.r4.s64 = 94;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 * f31.f64));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x8231e908
	if (!cr6.lt) goto loc_8231E908;
loc_8231E888:
	// li r11,0
	r11.s64 = 0;
	// b 0x8231e8d0
	goto loc_8231E8D0;
loc_8231E890:
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-9716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -9716);
	f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
	// bl 0x831b4448
	sub_831B4448(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// fmuls f0,f0,f31
	ctx.fpscr.disableFlushModeUnconditional();
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x8231e8d8
	if (!cr6.gt) goto loc_8231E8D8;
loc_8231E8CC:
	// li r11,1
	r11.s64 = 1;
loc_8231E8D0:
	// stb r11,1288(r31)
	PPC_STORE_U8(r31.u32 + 1288, r11.u8);
	// b 0x8231e908
	goto loc_8231E908;
loc_8231E8D8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8230a4e0
	sub_8230A4E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8231d0d0
	sub_8231D0D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8230a4e0
	sub_8230A4E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8231d0d0
	sub_8231D0D0(ctx, base);
loc_8231E908:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// li r0,-64
	r0.s64 = -64;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231E930"))) PPC_WEAK_FUNC(sub_8231E930);
PPC_FUNC_IMPL(__imp__sub_8231E930) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8231b0f0
	sub_8231B0F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231e988
	if (cr0.eq) goto loc_8231E988;
	// li r4,27
	ctx.r4.s64 = 27;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x8231a468
	sub_8231A468(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x8231e980
	if (!cr6.gt) goto loc_8231E980;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1200);
	// bl 0x82333d90
	sub_82333D90(ctx, base);
loc_8231E980:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8231e98c
	goto loc_8231E98C;
loc_8231E988:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231E98C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231E9A8"))) PPC_WEAK_FUNC(sub_8231E9A8);
PPC_FUNC_IMPL(__imp__sub_8231E9A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,3136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3136, r11.u32);
	// stb r11,3216(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3216, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231E9B8"))) PPC_WEAK_FUNC(sub_8231E9B8);
PPC_FUNC_IMPL(__imp__sub_8231E9B8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// bl 0x82311130
	sub_82311130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231e498
	sub_8231E498(ctx, base);
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

__attribute__((alias("__imp__sub_8231E9F0"))) PPC_WEAK_FUNC(sub_8231E9F0);
PPC_FUNC_IMPL(__imp__sub_8231E9F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltisw128 v62,1
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_set1_epi32(int(0x1)));
	// vmsum3fp128 v63,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// vspltisw128 v61,0
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// vcsxwfp128 v13,v62,1
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v62.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,-24792(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24792);
	f0.f64 = double(temp.f32);
	// vrsqrtefp128 v0,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(v63.f32))));
	// vor128 v12,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)v63.u8));
	// vmulfp128 v11,v63,v13
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp128 v10,v63,v61
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v61.f32)));
	// vmulfp128 v9,v0,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v11,v9,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v63,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v0,v0,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x8231ea70
	if (!cr6.lt) goto loc_8231EA70;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8231eb40
	goto loc_8231EB40;
loc_8231EA70:
	// lbz r11,1382(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1382);
	// li r10,528
	ctx.r10.s64 = 528;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231eaa4
	if (cr0.eq) goto loc_8231EAA4;
	// li r9,560
	ctx.r9.s64 = 560;
	// li r8,544
	ctx.r8.s64 = 544;
	// li r11,0
	r11.s64 = 0;
	// lvx128 v63,r31,r9
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r31,r8
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r11,1382(r31)
	PPC_STORE_U8(r31.u32 + 1382, r11.u8);
	// stb r11,1381(r31)
	PPC_STORE_U8(r31.u32 + 1381, r11.u8);
loc_8231EAA4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lvx128 v62,r31,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v61,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v61,v61,0
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0xFF));
	// vmulfp128 v63,v63,v61
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v61.f32)));
	// lfs f31,2240(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2240);
	f31.f64 = double(temp.f32);
	// vmsum3fp128 v63,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f30,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	cr6.compare(f30.f64, f31.f64);
	// bgt cr6,0x8231eaf0
	if (cr6.gt) goto loc_8231EAF0;
	// fmr f30,f31
	f30.f64 = f31.f64;
loc_8231EAF0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfs f29,1208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1208);
	f29.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 112);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fmuls f0,f29,f29
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f29.f64 * f29.f64));
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 112);
	// fdivs f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 / f0.f64));
	// fmuls f0,f0,f30
	f0.f64 = double(float(f0.f64 * f30.f64));
	// fmuls f30,f0,f30
	f30.f64 = double(float(f0.f64 * f30.f64));
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fsubs f0,f1,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 - f30.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bgt cr6,0x8231eb3c
	if (cr6.gt) goto loc_8231EB3C;
	// fmr f0,f31
	f0.f64 = f31.f64;
loc_8231EB3C:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f0.f64;
loc_8231EB40:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231EB60"))) PPC_WEAK_FUNC(sub_8231EB60);
PPC_FUNC_IMPL(__imp__sub_8231EB60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v63{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231ebb4
	if (cr0.eq) goto loc_8231EBB4;
	// li r11,976
	r11.s64 = 976;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r30,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8231caf8
	sub_8231CAF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231b8b8
	sub_8231B8B8(ctx, base);
	// b 0x8231ebbc
	goto loc_8231EBBC;
loc_8231EBB4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82308308
	sub_82308308(ctx, base);
loc_8231EBBC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_8231EBD8"))) PPC_WEAK_FUNC(sub_8231EBD8);
PPC_FUNC_IMPL(__imp__sub_8231EBD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// li r12,-96
	r12.s64 = -96;
	// stvx128 v126,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,-80
	r12.s64 = -80;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,960(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 960);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231ee50
	if (cr0.eq) goto loc_8231EE50;
	// li r4,178
	ctx.r4.s64 = 178;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x8231a468
	sub_8231A468(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// bgt cr6,0x8231ee50
	if (cr6.gt) goto loc_8231EE50;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8231a4e8
	sub_8231A4E8(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823083f0
	sub_823083F0(ctx, base);
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// li r4,179
	ctx.r4.s64 = 179;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// bgt cr6,0x8231ee50
	if (cr6.gt) goto loc_8231EE50;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r4,177
	ctx.r4.s64 = 177;
	// lfs f0,-24412(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24412);
	f0.f64 = double(temp.f32);
	// lfs f13,-22120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22120);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r30,r31,976
	r30.s64 = r31.s64 + 976;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v127,r0,r30
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v126,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v126.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// vaddfp128 v0,v63,v126
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v126.f32)));
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r3,1384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1384);
	// addi r28,r1,112
	r28.s64 = ctx.r1.s64 + 112;
	// addi r27,r1,96
	r27.s64 = ctx.r1.s64 + 96;
	// lfs f0,-11900(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11900);
	f0.f64 = double(temp.f32);
	// lis r29,-31946
	r29.s64 = -2093613056;
	// lvlx128 v62,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// lvlx128 v61,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v61,v61,0
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0xFF));
	// vmaddfp128 v0,v127,v62,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(v62.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// vmulfp128 v63,v63,v61
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v61.f32)));
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r8,28652(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 28652);
	// stvx128 v0,r0,r27
	simde_mm_store_si128((simde__m128i*)(base + ((r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v63,v0,v63
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r0,r28
	simde_mm_store_si128((simde__m128i*)(base + ((r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822ed088
	sub_822ED088(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8231ee50
	if (!cr0.eq) goto loc_8231EE50;
	// lbz r11,1204(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1204);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231ed64
	if (cr0.eq) goto loc_8231ED64;
loc_8231ED4C:
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r4,r11,29232
	ctx.r4.s64 = r11.s64 + 29232;
loc_8231ED54:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231cf50
	sub_8231CF50(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8231ee54
	goto loc_8231EE54;
loc_8231ED64:
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r28,0
	r28.s64 = 0;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f31,-7076(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -7076);
	f31.f64 = double(temp.f32);
loc_8231ED80:
	// vsubfp128 v63,v0,v126
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(v126.f32)));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lwz r10,1384(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 1384);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r8,28652(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 28652);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x822ed088
	sub_822ED088(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8231edfc
	if (!cr0.eq) goto loc_8231EDFC;
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lvlx128 v62,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v0,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0xFF));
	// lvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v12,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(r28.s32, 3, xer);
	// vmaddfp v0,v12,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blt cr6,0x8231ed80
	if (cr6.lt) goto loc_8231ED80;
	// b 0x8231ed4c
	goto loc_8231ED4C;
loc_8231EDFC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8231d0d0
	sub_8231D0D0(ctx, base);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// vmsum3fp128 v62,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v62.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// stvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v62,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// vmulfp128 v63,v63,v62
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e86270
	sub_82E86270(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// b 0x8231ed54
	goto loc_8231ED54;
loc_8231EE50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231EE54:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// li r0,-96
	r0.s64 = -96;
	// lvx128 v126,r1,r0
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r0,-80
	r0.s64 = -80;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8231EE70"))) PPC_WEAK_FUNC(sub_8231EE70);
PPC_FUNC_IMPL(__imp__sub_8231EE70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// li r12,-96
	r12.s64 = -96;
	// stvx128 v126,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,-80
	r12.s64 = -80;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231f00c
	if (cr0.eq) goto loc_8231F00C;
	// lwz r11,1616(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1616);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8231ef3c
	if (cr6.eq) goto loc_8231EF3C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231a468
	sub_8231A468(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lbz r9,1624(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 1624);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lfs f0,-24412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24412);
	f0.f64 = double(temp.f32);
	// lfs f30,-24780(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24780);
	f30.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 * f0.f64));
	// bne 0x8231eef0
	if (!cr0.eq) goto loc_8231EEF0;
	// fmuls f31,f31,f30
	f31.f64 = double(float(f31.f64 * f30.f64));
loc_8231EEF0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r29,1616(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 1616);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x822d2cc0
	sub_822D2CC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,1616(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1616);
	// bl 0x822d20b0
	sub_822D20B0(ctx, base);
	// lbz r11,1624(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1624);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8231ef48
	if (!cr0.eq) goto loc_8231EF48;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82e86250
	sub_82E86250(ctx, base);
	// b 0x8231ef48
	goto loc_8231EF48;
loc_8231EF3C:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r29
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8231EF48:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v62,r0,r30
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r4,32
	ctx.r4.s64 = 32;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v61,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v61.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// stvx128 v61,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f31,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v61,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v61,v61,0
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0xFF));
	// vmulfp128 v63,v63,v61
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v61.f32)));
	// vsubfp128 v126,v62,v63
	simde_mm_store_ps(v126.f32, simde_mm_sub_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f30,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f30.f64 = double(temp.f32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne 0x8231efac
	if (!cr0.eq) goto loc_8231EFAC;
	// fsel f0,f31,f31,f30
	f0.f64 = f31.f64 >= 0.0 ? f31.f64 : f30.f64;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_8231EFAC:
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// vmulfp128 v127,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v127.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// bl 0x8231d0d0
	sub_8231D0D0(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// li r4,182
	ctx.r4.s64 = 182;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f0.f64 = double(temp.f32);
	// fsel f31,f0,f0,f30
	f31.f64 = f0.f64 >= 0.0 ? f0.f64 : f30.f64;
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, ctx.f1.f64);
	// bge cr6,0x8231f004
	if (!cr6.lt) goto loc_8231F004;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8231F004:
	// vaddfp128 v63,v127,v126
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(v126.f32)));
	// b 0x8231f010
	goto loc_8231F010;
loc_8231F00C:
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8231F010:
	// stvx128 v63,r0,r28
	simde_mm_store_si128((simde__m128i*)(base + ((r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// li r0,-96
	r0.s64 = -96;
	// lvx128 v126,r1,r0
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r0,-80
	r0.s64 = -80;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8231F038"))) PPC_WEAK_FUNC(sub_8231F038);
PPC_FUNC_IMPL(__imp__sub_8231F038) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1616
	r11.s64 = r31.s64 + 1616;
	// stw r10,1616(r31)
	PPC_STORE_U32(r31.u32 + 1616, ctx.r10.u32);
	// lwz r3,1620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1620);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,1620(r31)
	PPC_STORE_U32(r31.u32 + 1620, ctx.r10.u32);
	// beq cr6,0x8231f06c
	if (cr6.eq) goto loc_8231F06C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231F06C:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-17704(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -17704);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307db0
	sub_82307DB0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_8231F0B0"))) PPC_WEAK_FUNC(sub_8231F0B0);
PPC_FUNC_IMPL(__imp__sub_8231F0B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1616
	r11.s64 = r31.s64 + 1616;
	// stw r10,1616(r31)
	PPC_STORE_U32(r31.u32 + 1616, ctx.r10.u32);
	// lwz r3,1620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1620);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,1620(r31)
	PPC_STORE_U32(r31.u32 + 1620, ctx.r10.u32);
	// beq cr6,0x8231f0ec
	if (cr6.eq) goto loc_8231F0EC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231F0EC:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-17704(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -17704);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307db0
	sub_82307DB0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8239ed98
	sub_8239ED98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231F140"))) PPC_WEAK_FUNC(sub_8231F140);
PPC_FUNC_IMPL(__imp__sub_8231F140) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1616
	r11.s64 = r31.s64 + 1616;
	// stw r10,1616(r31)
	PPC_STORE_U32(r31.u32 + 1616, ctx.r10.u32);
	// lwz r3,1620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1620);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,1620(r31)
	PPC_STORE_U32(r31.u32 + 1620, ctx.r10.u32);
	// beq cr6,0x8231f174
	if (cr6.eq) goto loc_8231F174;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231F174:
	// lis r11,-31961
	r11.s64 = -2094596096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-17704(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -17704);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307db8
	sub_82307DB8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
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

__attribute__((alias("__imp__sub_8231F1B0"))) PPC_WEAK_FUNC(sub_8231F1B0);
PPC_FUNC_IMPL(__imp__sub_8231F1B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831b142c
	// li r12,-128
	r12.s64 = -128;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	f26.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stfs f26,452(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 452, temp.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f13,-24792(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24792);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3368(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 3368);
	f0.f64 = double(temp.f32);
	// addi r11,r11,2244
	r11.s64 = r11.s64 + 2244;
	// lfs f12,3376(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 3376);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// fadds f13,f26,f12
	ctx.f13.f64 = double(float(f26.f64 + ctx.f12.f64));
	// stfs f13,3376(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 3376, temp.u32);
	// lfs f30,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f30.f64 = double(temp.f32);
	// ble cr6,0x8231f214
	if (!cr6.gt) goto loc_8231F214;
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// ble cr6,0x8231f218
	if (!cr6.gt) goto loc_8231F218;
loc_8231F214:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = f30.f64;
loc_8231F218:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lfs f31,-22120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	f31.f64 = double(temp.f32);
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(f0.f64 - f31.f64));
	// lfs f0,-3780(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -3780);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x831b1788
	sub_831B1788(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,3372(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 3372);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// fadds f0,f0,f30
	f0.f64 = double(float(f0.f64 + f30.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// fsubs f0,f30,f0
	f0.f64 = double(float(f30.f64 - f0.f64));
	// fmuls f28,f0,f13
	f28.f64 = double(float(f0.f64 * ctx.f13.f64));
	// bl 0x822d2058
	sub_822D2058(ctx, base);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e86068
	sub_82E86068(ctx, base);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// lbz r10,960(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 960);
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq 0x8231f294
	if (cr0.eq) goto loc_8231F294;
	// addi r11,r1,192
	r11.s64 = ctx.r1.s64 + 192;
	// lvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x8231f29c
	goto loc_8231F29C;
loc_8231F294:
	// li r11,976
	r11.s64 = 976;
	// lvx128 v127,r31,r11
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8231F29C:
	// vmsum3fp128 v63,v63,v127
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v127.f32), 0xEF));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// vmulfp128 v63,v127,v63
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e86270
	sub_82E86270(ctx, base);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// lfs f0,-28616(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -28616);
	f0.f64 = double(temp.f32);
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x8231f7bc
	if (cr6.lt) goto loc_8231F7BC;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e861d8
	sub_82E861D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// addi r11,r1,208
	r11.s64 = ctx.r1.s64 + 208;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f31,2240(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2240);
	f31.f64 = double(temp.f32);
	// lfs f27,-24780(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -24780);
	f27.f64 = double(temp.f32);
	// vmsum3fp128 v63,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f29,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f29.f64 = double(temp.f32);
	// fcmpu cr6,f29,f31
	cr6.compare(f29.f64, f31.f64);
	// bge cr6,0x8231f354
	if (!cr6.lt) goto loc_8231F354;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// bl 0x82e86250
	sub_82E86250(ctx, base);
loc_8231F354:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fabs f29,f29
	ctx.fpscr.disableFlushMode();
	f29.u64 = f29.u64 & ~0x8000000000000000;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// addi r11,r1,208
	r11.s64 = ctx.r1.s64 + 208;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r4,204
	ctx.r4.s64 = 204;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// vmsum3fp128 v63,v63,v127
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v127.f32), 0xEF));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// li r4,203
	ctx.r4.s64 = 203;
	// fsubs f0,f0,f1
	f0.f64 = double(float(f0.f64 - ctx.f1.f64));
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// fsel f25,f0,f0,f31
	f25.f64 = f0.f64 >= 0.0 ? f0.f64 : f31.f64;
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-9716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -9716);
	f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
	// bl 0x831b4448
	sub_831B4448(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fdivs f25,f25,f0
	f25.f64 = double(float(f25.f64 / f0.f64));
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// fadds f0,f25,f28
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f25.f64 + f28.f64));
	// fsubs f0,f0,f29
	f0.f64 = double(float(f0.f64 - f29.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x8231f3e4
	if (!cr6.gt) goto loc_8231F3E4;
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// b 0x8231f3e8
	goto loc_8231F3E8;
loc_8231F3E4:
	// stfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_8231F3E8:
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// fdivs f0,f30,f26
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f30.f64 / f26.f64));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v61,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v61,v61,0
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0xFF));
	// vmulfp128 v63,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// vmulfp128 v63,v63,v61
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v61.f32)));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8230a430
	sub_8230A430(ctx, base);
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// lvx128 v62,r0,r3
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v62,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v62.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// lfs f0,-24412(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24412);
	f0.f64 = double(temp.f32);
	// stvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// ble cr6,0x8231f464
	if (!cr6.gt) goto loc_8231F464;
	// fmr f0,f30
	f0.f64 = f30.f64;
	// b 0x8231f470
	goto loc_8231F470;
loc_8231F464:
	// fcmpu cr6,f0,f27
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f27.f64);
	// bge cr6,0x8231f470
	if (!cr6.lt) goto loc_8231F470;
	// fmr f0,f27
	f0.f64 = f27.f64;
loc_8231F470:
	// lfs f13,3388(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 3388);
	ctx.f13.f64 = double(temp.f32);
	// lbz r11,1204(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1204);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f0,3388(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 3388, temp.u32);
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231f718
	if (cr0.eq) goto loc_8231F718;
	// vmsum3fp128 v63,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,1
	r11.s64 = 1;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// bgt cr6,0x8231f4b0
	if (cr6.gt) goto loc_8231F4B0;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8231F4B0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// bne 0x8231f4cc
	if (!cr0.eq) goto loc_8231F4CC;
	// lbz r11,960(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 960);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r29
	r11.u64 = r29.u64;
	// bne 0x8231f4d0
	if (!cr0.eq) goto loc_8231F4D0;
loc_8231F4CC:
	// li r11,1
	r11.s64 = 1;
loc_8231F4D0:
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// xori r30,r10,1
	r30.u64 = ctx.r10.u64 ^ 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq 0x8231f624
	if (cr0.eq) goto loc_8231F624;
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// lis r28,-31942
	r28.s64 = -2093350912;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-7052
	ctx.r4.s64 = r11.s64 + -7052;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r3,-31940(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -31940);
	// bl 0x82ecf968
	sub_82ECF968(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,-31940(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -31940);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f31,-7056(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -7056);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82ecf4c0
	sub_82ECF4C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823083a8
	sub_823083A8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ae9f60
	sub_82AE9F60(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82ae9f40
	sub_82AE9F40(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f26.f64;
	// bl 0x82aeda48
	sub_82AEDA48(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r26,r11,-7184
	r26.s64 = r11.s64 + -7184;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r6,8221
	ctx.r6.s64 = 8221;
	// bl 0x823082f8
	sub_823082F8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ae9f50
	sub_82AE9F50(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// lwz r11,-31940(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -31940);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r4,r10,-7060
	ctx.r4.s64 = ctx.r10.s64 + -7060;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82ecf968
	sub_82ECF968(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// lwz r11,-31940(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -31940);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ecf4c0
	sub_82ECF4C0(ctx, base);
	// b 0x8231f718
	goto loc_8231F718;
loc_8231F624:
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// lis r30,-31942
	r30.s64 = -2093350912;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-7064
	ctx.r4.s64 = r11.s64 + -7064;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r3,-31940(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -31940);
	// bl 0x82ecf968
	sub_82ECF968(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,-31940(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -31940);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f31,-7056(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -7056);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82ecf4c0
	sub_82ECF4C0(ctx, base);
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// addi r11,r1,452
	r11.s64 = ctx.r1.s64 + 452;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r6,8231
	ctx.r6.s64 = 8231;
	// addi r5,r9,-7184
	ctx.r5.s64 = ctx.r9.s64 + -7184;
	// lvlx128 v62,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// vmaddfp128 v63,v127,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(v62.f32)), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x823082f8
	sub_823082F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// lwz r11,-31940(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -31940);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r4,r10,-7068
	ctx.r4.s64 = ctx.r10.s64 + -7068;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82ecf968
	sub_82ECF968(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// lwz r11,-31940(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -31940);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ecf4c0
	sub_82ECF4C0(ctx, base);
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8231F718:
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231f7bc
	if (cr0.eq) goto loc_8231F7BC;
	// lbz r11,1382(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1382);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231f750
	if (cr0.eq) goto loc_8231F750;
	// li r11,560
	r11.s64 = 560;
	// li r10,544
	ctx.r10.s64 = 544;
	// li r9,528
	ctx.r9.s64 = 528;
	// lvx128 v63,r31,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r31,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r31,r9
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r29,1382(r31)
	PPC_STORE_U8(r31.u32 + 1382, r29.u8);
	// stb r29,1381(r31)
	PPC_STORE_U8(r31.u32 + 1381, r29.u8);
loc_8231F750:
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// addi r30,r31,528
	r30.s64 = r31.s64 + 528;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// vmsum3fp128 v61,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v61.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// vmulfp128 v63,v62,v63
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e86270
	sub_82E86270(ctx, base);
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// li r9,1
	ctx.r9.s64 = 1;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r9,1381(r31)
	PPC_STORE_U8(r31.u32 + 1381, ctx.r9.u8);
	// stb r29,1382(r31)
	PPC_STORE_U8(r31.u32 + 1382, r29.u8);
loc_8231F7BC:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// li r0,-128
	r0.s64 = -128;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831b1478
	// b 0x831b0b70
	return;
}

extern void PostureDPadSupportMidAsmHook(PPCRegister& r29, PPCRegister& f12, PPCRegister& f13);

__attribute__((alias("__imp__sub_8231F7D8"))) PPC_WEAK_FUNC(sub_8231F7D8);
PPC_FUNC_IMPL(__imp__sub_8231F7D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,8028(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8028);
	// bl 0x82df98c0
	sub_82DF98C0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b4e2f0
	sub_82B4E2F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f12,16(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fneg f13,f13
	PostureDPadSupportMidAsmHook(r29, ctx.f12, ctx.f13);
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r31,656
	ctx.r4.s64 = r31.s64 + 656;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82e84a90
	sub_82E84A90(ctx, base);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8231F860"))) PPC_WEAK_FUNC(sub_8231F860);
PPC_FUNC_IMPL(__imp__sub_8231F860) {
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
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lfs f31,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lfs f30,-24780(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24780);
	f30.f64 = double(temp.f32);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8231f948
	if (cr6.eq) goto loc_8231F948;
	// addi r29,r30,976
	r29.s64 = r30.s64 + 976;
	// lvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lvx128 v62,r0,r29
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// lfd f1,-7048(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + -7048);
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fabs f29,f0
	f29.u64 = f0.u64 & ~0x8000000000000000;
	// bl 0x831b1868
	sub_831B1868(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fcmpu cr6,f29,f0
	cr6.compare(f29.f64, f0.f64);
	// bge cr6,0x8231f924
	if (!cr6.lt) goto loc_8231F924;
	// lvx128 v62,r0,r28
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// vmsum3fp128 v63,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// lvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v62,r0,r3
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// b 0x8231f934
	goto loc_8231F934;
loc_8231F924:
	// lvx128 v62,r0,r29
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
loc_8231F934:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f31.f64);
	// bge cr6,0x8231f948
	if (!cr6.lt) goto loc_8231F948;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82e86250
	sub_82E86250(ctx, base);
loc_8231F948:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8231f9bc
	if (cr6.eq) goto loc_8231F9BC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8231d0d0
	sub_8231D0D0(ctx, base);
	// lvx128 v63,r0,r27
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r3
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vmsum3fp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,2244(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x8231f9a8
	if (cr6.gt) goto loc_8231F9A8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8230a4e0
	sub_8230A4E0(ctx, base);
	// lvx128 v63,r0,r27
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r3
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vmsum3fp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
loc_8231F9A8:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f31.f64);
	// bge cr6,0x8231f9bc
	if (!cr6.lt) goto loc_8231F9BC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82e86250
	sub_82E86250(ctx, base);
loc_8231F9BC:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8231f9dc
	if (cr6.eq) goto loc_8231F9DC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e86068
	sub_82E86068(ctx, base);
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r26
	simde_mm_store_si128((simde__m128i*)(base + ((r26.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8231F9DC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8231F9F0"))) PPC_WEAK_FUNC(sub_8231F9F0);
PPC_FUNC_IMPL(__imp__sub_8231F9F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,213
	ctx.r4.s64 = 213;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lbz r11,1382(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1382);
	// li r10,528
	ctx.r10.s64 = 528;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231fa54
	if (cr0.eq) goto loc_8231FA54;
	// li r9,560
	ctx.r9.s64 = 560;
	// li r8,544
	ctx.r8.s64 = 544;
	// li r11,0
	r11.s64 = 0;
	// lvx128 v63,r31,r9
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r31,r8
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r11,1382(r31)
	PPC_STORE_U8(r31.u32 + 1382, r11.u8);
	// stb r11,1381(r31)
	PPC_STORE_U8(r31.u32 + 1381, r11.u8);
loc_8231FA54:
	// lvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltisw128 v62,1
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_set1_epi32(int(0x1)));
	// vmsum3fp128 v63,v63,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// vspltisw128 v61,0
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// li r4,214
	ctx.r4.s64 = 214;
	// vcsxwfp128 v13,v62,1
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v62.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// vrsqrtefp128 v0,v63
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(v63.f32))));
	// vor128 v12,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)v63.u8));
	// vmulfp128 v11,v63,v13
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp128 v10,v63,v61
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v61.f32)));
	// vmulfp128 v9,v0,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v11,v9,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v63,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v0,v0,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// clrldi r11,r30,32
	r11.u64 = r30.u64 & 0xFFFFFFFF;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fmadds f0,f0,f31,f1
	f0.f64 = double(float(f0.f64 * f31.f64 + ctx.f1.f64));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 * ctx.f13.f64));
	// bl 0x8231c590
	sub_8231C590(ctx, base);
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

__attribute__((alias("__imp__sub_8231FAE8"))) PPC_WEAK_FUNC(sub_8231FAE8);
PPC_FUNC_IMPL(__imp__sub_8231FAE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	PPCVRegister v62{};
	PPCVRegister v63{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r27
	r28.u64 = r27.u64;
	// lwz r11,1336(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1336);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// blt cr6,0x8231fb18
	if (cr6.lt) goto loc_8231FB18;
	// mr r26,r11
	r26.u64 = r11.u64;
loc_8231FB18:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x8231fea8
	if (!cr6.gt) goto loc_8231FEA8;
	// cmpwi cr6,r26,50
	cr6.compare<int32_t>(r26.s32, 50, xer);
	// mr r29,r26
	r29.u64 = r26.u64;
	// blt cr6,0x8231fb30
	if (cr6.lt) goto loc_8231FB30;
	// li r29,50
	r29.s64 = 50;
loc_8231FB30:
	// lbz r11,1204(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1204);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8231fce4
	if (cr0.eq) goto loc_8231FCE4;
	// lwz r30,1180(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 1180);
	// lwz r3,1176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1176);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8231fb6c
	if (cr6.eq) goto loc_8231FB6C;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
loc_8231FB50:
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
	// bne 0x8231fb50
	if (!cr0.eq) goto loc_8231FB50;
loc_8231FB6C:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x822d20b0
	sub_822D20B0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8231fb84
	if (cr6.eq) goto loc_8231FB84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231FB84:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-7184
	ctx.r4.s64 = r11.s64 + -7184;
	// li r5,9110
	ctx.r5.s64 = 9110;
	// li r3,288
	ctx.r3.s64 = 288;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8231fc18
	if (cr0.eq) goto loc_8231FC18;
	// lbz r10,1382(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 1382);
	// li r11,528
	r11.s64 = 528;
	// li r28,1
	r28.s64 = 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8231fbd8
	if (cr0.eq) goto loc_8231FBD8;
	// li r10,560
	ctx.r10.s64 = 560;
	// li r9,544
	ctx.r9.s64 = 544;
	// lvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r31,r9
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r31,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r27,1382(r31)
	PPC_STORE_U8(r31.u32 + 1382, r27.u8);
	// stb r27,1381(r31)
	PPC_STORE_U8(r31.u32 + 1381, r27.u8);
loc_8231FBD8:
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lvx128 v63,r31,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r25,r1,144
	r25.s64 = ctx.r1.s64 + 144;
	// addi r24,r1,160
	r24.s64 = ctx.r1.s64 + 160;
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8230b4e8
	sub_8230B4E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// bl 0x82352820
	sub_82352820(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8231fc1c
	goto loc_8231FC1C;
loc_8231FC18:
	// mr r30,r27
	r30.u64 = r27.u64;
loc_8231FC1C:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x823190c0
	sub_823190C0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231fc54
	if (cr0.eq) goto loc_8231FC54;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8231fc54
	if (cr6.eq) goto loc_8231FC54;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231FC54:
	// lwz r29,84(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x8231fc8c
	if (cr6.eq) goto loc_8231FC8C;
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
loc_8231FC70:
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
	// bne 0x8231fc70
	if (!cr0.eq) goto loc_8231FC70;
loc_8231FC8C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,256(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r30,r11,-4
	r30.s64 = r11.s64 + -4;
	// bne cr6,0x8231fcac
	if (!cr6.eq) goto loc_8231FCAC;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_8231FCAC:
	// lwz r28,256(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r27,r1,80
	r27.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82512d38
	sub_82512D38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x82510d20
	sub_82510D20(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// b 0x8231fe38
	goto loc_8231FE38;
loc_8231FCE4:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-7184
	ctx.r4.s64 = r11.s64 + -7184;
	// li r5,9114
	ctx.r5.s64 = 9114;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8231fd70
	if (cr0.eq) goto loc_8231FD70;
	// lbz r10,1382(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 1382);
	// li r11,528
	r11.s64 = 528;
	// li r28,2
	r28.s64 = 2;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8231fd38
	if (cr0.eq) goto loc_8231FD38;
	// li r10,560
	ctx.r10.s64 = 560;
	// li r9,544
	ctx.r9.s64 = 544;
	// lvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r31,r9
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r31,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r27,1382(r31)
	PPC_STORE_U8(r31.u32 + 1382, r27.u8);
	// stb r27,1381(r31)
	PPC_STORE_U8(r31.u32 + 1381, r27.u8);
loc_8231FD38:
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lvx128 v63,r31,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r25,r1,176
	r25.s64 = ctx.r1.s64 + 176;
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8230b4e8
	sub_8230B4E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// bl 0x82351d68
	sub_82351D68(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8231fd74
	goto loc_8231FD74;
loc_8231FD70:
	// mr r30,r27
	r30.u64 = r27.u64;
loc_8231FD74:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82319188
	sub_82319188(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// rlwinm. r11,r28,0,30,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8231fdac
	if (cr0.eq) goto loc_8231FDAC;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8231fdac
	if (cr6.eq) goto loc_8231FDAC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231FDAC:
	// lwz r29,84(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x8231fde4
	if (cr6.eq) goto loc_8231FDE4;
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
loc_8231FDC8:
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
	// bne 0x8231fdc8
	if (!cr0.eq) goto loc_8231FDC8;
loc_8231FDE4:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,256(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r30,r11,-4
	r30.s64 = r11.s64 + -4;
	// bne cr6,0x8231fe04
	if (!cr6.eq) goto loc_8231FE04;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_8231FE04:
	// lwz r28,256(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r27,r1,80
	r27.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82512d38
	sub_82512D38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x82510d20
	sub_82510D20(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
loc_8231FE38:
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8231fe4c
	if (cr6.eq) goto loc_8231FE4C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231FE4C:
	// lwz r11,1336(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1336);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r26,r11
	r11.s64 = r11.s64 - r26.s64;
	// stw r11,1336(r31)
	PPC_STORE_U32(r31.u32 + 1336, r11.u32);
	// lwz r11,108(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7040
	ctx.r4.s64 = r11.s64 + -7040;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8230a750
	sub_8230A750(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8231fea0
	if (cr6.eq) goto loc_8231FEA0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231FEA0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_8231FEA8:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_8231FEB0"))) PPC_WEAK_FUNC(sub_8231FEB0);
PPC_FUNC_IMPL(__imp__sub_8231FEB0) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8230b3b0
	sub_8230B3B0(ctx, base);
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r28,r11,21992
	r28.s64 = r11.s64 + 21992;
	// addi r27,r10,21648
	r27.s64 = ctx.r10.s64 + 21648;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b29f8
	sub_831B29F8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8231ff18
	if (cr6.eq) goto loc_8231FF18;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231FF18:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8231fff4
	if (cr6.eq) goto loc_8231FFF4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231c680
	sub_8231C680(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823014f8
	sub_823014F8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822fb968
	sub_822FB968(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8231ff58
	if (cr6.eq) goto loc_8231FF58;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231FF58:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823186f0
	sub_823186F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822fb698
	sub_822FB698(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// li r31,0
	r31.s64 = 0;
	// beq 0x8231fff4
	if (cr0.eq) goto loc_8231FFF4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
loc_8231FF84:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822fb968
	sub_822FB968(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b29f8
	sub_831B29F8(ctx, base);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8231ffc4
	if (cr6.eq) goto loc_8231FFC4;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8231FFC4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822fb698
	sub_822FB698(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne cr6,0x8231ffe0
	if (!cr6.eq) goto loc_8231FFE0;
	// lfs f1,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8231ffe4
	goto loc_8231FFE4;
loc_8231FFE0:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_8231FFE4:
	// bl 0x823014f8
	sub_823014F8(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(r31.u32, r26.u32, xer);
	// blt cr6,0x8231ff84
	if (cr6.lt) goto loc_8231FF84;
loc_8231FFF4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82320000"))) PPC_WEAK_FUNC(sub_82320000);
PPC_FUNC_IMPL(__imp__sub_82320000) {
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
	// addi r30,r31,3400
	r30.s64 = r31.s64 + 3400;
	// lwz r11,3400(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 3400);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82320080
	if (cr6.eq) goto loc_82320080;
	// li r4,49
	ctx.r4.s64 = 49;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82320080
	if (cr0.eq) goto loc_82320080;
	// li r4,49
	ctx.r4.s64 = 49;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333da0
	sub_82333DA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,3396(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 3396);
	// bl 0x8231de80
	sub_8231DE80(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r29,3396(r31)
	PPC_STORE_U32(r31.u32 + 3396, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8230b428
	sub_8230B428(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// beq cr6,0x82320078
	if (cr6.eq) goto loc_82320078;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82320078:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82320084
	goto loc_82320084;
loc_82320080:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82320084:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82320090"))) PPC_WEAK_FUNC(sub_82320090);
PPC_FUNC_IMPL(__imp__sub_82320090) {
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
	// li r4,50
	ctx.r4.s64 = 50;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823200cc
	if (cr0.eq) goto loc_823200CC;
	// li r4,50
	ctx.r4.s64 = 50;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333dd0
	sub_82333DD0(ctx, base);
loc_823200CC:
	// li r4,50
	ctx.r4.s64 = 50;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8232015c
	if (!cr0.eq) goto loc_8232015C;
	// li r4,49
	ctx.r4.s64 = 49;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82320130
	if (cr0.eq) goto loc_82320130;
	// li r4,49
	ctx.r4.s64 = 49;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333da0
	sub_82333DA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,3396(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 3396);
	// bl 0x8231de80
	sub_8231DE80(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r10,r31,3400
	ctx.r10.s64 = r31.s64 + 3400;
	// stw r11,3396(r31)
	PPC_STORE_U32(r31.u32 + 3396, r11.u32);
	// stw r11,3400(r31)
	PPC_STORE_U32(r31.u32 + 3400, r11.u32);
	// lwz r3,3404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 3404);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,3404(r31)
	PPC_STORE_U32(r31.u32 + 3404, r11.u32);
	// beq cr6,0x82320130
	if (cr6.eq) goto loc_82320130;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82320130:
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8232015c
	if (cr0.eq) goto loc_8232015C;
	// lis r11,-31961
	r11.s64 = -2094596096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-18028(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -18028);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307e18
	sub_82307E18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_8232015C:
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

__attribute__((alias("__imp__sub_82320178"))) PPC_WEAK_FUNC(sub_82320178);
PPC_FUNC_IMPL(__imp__sub_82320178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r11,r11,-20912
	r11.s64 = r11.s64 + -20912;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,115
	ctx.r4.s64 = 115;
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// lwz r3,508(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 508);
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-9716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -9716);
	f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
	// bl 0x831b1868
	sub_831B1868(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x823201e0
	if (cr6.gt) goto loc_823201E0;
	// li r11,0
	r11.s64 = 0;
loc_823201E0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x82320200
	if (cr0.eq) goto loc_82320200;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8231caf8
	sub_8231CAF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82320208
	goto loc_82320208;
loc_82320200:
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82320208:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82320210"))) PPC_WEAK_FUNC(sub_82320210);
PPC_FUNC_IMPL(__imp__sub_82320210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,25
	ctx.r4.s64 = 25;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82e861d8
	sub_82E861D8(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r8,-7184
	ctx.r5.s64 = ctx.r8.s64 + -7184;
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,10012
	ctx.r6.s64 = 10012;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// vmulfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8231d078
	sub_8231D078(ctx, base);
	// lis r11,-31961
	r11.s64 = -2094596096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-17996(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -17996);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307e18
	sub_82307E18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
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

__attribute__((alias("__imp__sub_823202D8"))) PPC_WEAK_FUNC(sub_823202D8);
PPC_FUNC_IMPL(__imp__sub_823202D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82318fa0
	sub_82318FA0(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x82320334
	if (cr6.eq) goto loc_82320334;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82320324
	if (cr6.lt) goto loc_82320324;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82320324:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82320334
	if (!cr0.eq) goto loc_82320334;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// b 0x8232033c
	goto loc_8232033C;
loc_82320334:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_8232033C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82320350"))) PPC_WEAK_FUNC(sub_82320350);
PPC_FUNC_IMPL(__imp__sub_82320350) {
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
	// bl 0x8231cd18
	sub_8231CD18(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, r11.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_823203A8"))) PPC_WEAK_FUNC(sub_823203A8);
PPC_FUNC_IMPL(__imp__sub_823203A8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-20020
	ctx.r4.s64 = r11.s64 + -20020;
	// li r5,137
	ctx.r5.s64 = 137;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82320410
	if (cr0.eq) goto loc_82320410;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// li r30,1
	r30.s64 = 1;
	// bl 0x82b5ffd8
	sub_82B5FFD8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82320414
	goto loc_82320414;
loc_82320410:
	// li r31,0
	r31.s64 = 0;
loc_82320414:
	// stw r31,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r31.u32);
	// addi r29,r27,4
	r29.s64 = r27.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82319370
	sub_82319370(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82320448
	if (cr0.eq) goto loc_82320448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_82320448:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82320458"))) PPC_WEAK_FUNC(sub_82320458);
PPC_FUNC_IMPL(__imp__sub_82320458) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-20020
	ctx.r4.s64 = r11.s64 + -20020;
	// li r5,137
	ctx.r5.s64 = 137;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823204a4
	if (cr0.eq) goto loc_823204A4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82b5d758
	sub_82B5D758(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x823204a8
	goto loc_823204A8;
loc_823204A4:
	// li r31,0
	r31.s64 = 0;
loc_823204A8:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82319438
	sub_82319438(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_823204D8"))) PPC_WEAK_FUNC(sub_823204D8);
PPC_FUNC_IMPL(__imp__sub_823204D8) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-20020
	ctx.r4.s64 = r11.s64 + -20020;
	// li r5,115
	ctx.r5.s64 = 115;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82320520
	if (cr0.eq) goto loc_82320520;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e626b8
	sub_82E626B8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,-7544
	r11.s64 = r11.s64 + -7544;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82320524
	goto loc_82320524;
loc_82320520:
	// li r31,0
	r31.s64 = 0;
loc_82320524:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82319500
	sub_82319500(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82320558"))) PPC_WEAK_FUNC(sub_82320558);
PPC_FUNC_IMPL(__imp__sub_82320558) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-20020
	ctx.r4.s64 = r11.s64 + -20020;
	// li r5,115
	ctx.r5.s64 = 115;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x823205a0
	if (cr0.eq) goto loc_823205A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e626d8
	sub_82E626D8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,-7236
	r11.s64 = r11.s64 + -7236;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x823205a4
	goto loc_823205A4;
loc_823205A0:
	// li r31,0
	r31.s64 = 0;
loc_823205A4:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823195c8
	sub_823195C8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_823205D8"))) PPC_WEAK_FUNC(sub_823205D8);
PPC_FUNC_IMPL(__imp__sub_823205D8) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-20020
	ctx.r4.s64 = r11.s64 + -20020;
	// li r5,137
	ctx.r5.s64 = 137;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8232061c
	if (cr0.eq) goto loc_8232061C;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82b5b1f0
	sub_82B5B1F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82320620
	goto loc_82320620;
loc_8232061C:
	// li r31,0
	r31.s64 = 0;
loc_82320620:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82319690
	sub_82319690(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82320650"))) PPC_WEAK_FUNC(sub_82320650);
PPC_FUNC_IMPL(__imp__sub_82320650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-20020
	ctx.r4.s64 = r11.s64 + -20020;
	// li r5,137
	ctx.r5.s64 = 137;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82320694
	if (cr0.eq) goto loc_82320694;
	// lfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82b5ad08
	sub_82B5AD08(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82320698
	goto loc_82320698;
loc_82320694:
	// li r31,0
	r31.s64 = 0;
loc_82320698:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82319758
	sub_82319758(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_823206C8"))) PPC_WEAK_FUNC(sub_823206C8);
PPC_FUNC_IMPL(__imp__sub_823206C8) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-20020
	ctx.r4.s64 = r11.s64 + -20020;
	// li r5,137
	ctx.r5.s64 = 137;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8232070c
	if (cr0.eq) goto loc_8232070C;
	// lbz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// bl 0x82b588a0
	sub_82B588A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82320710
	goto loc_82320710;
loc_8232070C:
	// li r31,0
	r31.s64 = 0;
loc_82320710:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82319820
	sub_82319820(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82320740"))) PPC_WEAK_FUNC(sub_82320740);
PPC_FUNC_IMPL(__imp__sub_82320740) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-20020
	ctx.r4.s64 = r11.s64 + -20020;
	// li r5,137
	ctx.r5.s64 = 137;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82320784
	if (cr0.eq) goto loc_82320784;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82b5dca0
	sub_82B5DCA0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82320788
	goto loc_82320788;
loc_82320784:
	// li r31,0
	r31.s64 = 0;
loc_82320788:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823198e8
	sub_823198E8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_823207B8"))) PPC_WEAK_FUNC(sub_823207B8);
PPC_FUNC_IMPL(__imp__sub_823207B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82320810
	goto loc_82320810;
loc_823207C0:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82320808
	if (cr6.eq) goto loc_82320808;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// beq cr6,0x82320800
	if (cr6.eq) goto loc_82320800;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_823207E4:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x823207e4
	if (!cr0.eq) goto loc_823207E4;
loc_82320800:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
loc_82320808:
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// addi r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 12;
loc_82320810:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x823207c0
	if (!cr6.eq) goto loc_823207C0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82320820"))) PPC_WEAK_FUNC(sub_82320820);
PPC_FUNC_IMPL(__imp__sub_82320820) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stfs f1,228(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82320a34
	if (!cr0.eq) goto loc_82320A34;
	// li r4,31
	ctx.r4.s64 = 31;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82320a00
	if (cr0.eq) goto loc_82320A00;
	// lwz r3,1616(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1616);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82320910
	if (cr6.eq) goto loc_82320910;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x822d20b0
	sub_822D20B0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f31,-24780(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24780);
	f31.f64 = double(temp.f32);
	// lbz r11,1624(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1624);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823208a0
	if (!cr0.eq) goto loc_823208A0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82e86250
	sub_82E86250(ctx, base);
loc_823208A0:
	// lbz r11,960(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 960);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823208fc
	if (!cr0.eq) goto loc_823208FC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8231a4e8
	sub_8231A4E8(ctx, base);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v62,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v62.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// lfs f0,2240(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82320928
	if (!cr6.lt) goto loc_82320928;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82e86250
	sub_82E86250(ctx, base);
	// b 0x82320928
	goto loc_82320928;
loc_823208FC:
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82320928
	goto loc_82320928;
loc_82320910:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8231a4e8
	sub_8231A4E8(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82320928:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8231d0d0
	sub_8231D0D0(ctx, base);
	// addi r11,r1,228
	r11.s64 = ctx.r1.s64 + 228;
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lvx128 v62,r0,r3
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lvlx128 v61,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r6,1576
	ctx.r6.s64 = 1576;
	// vspltw128 v61,v61,0
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0xFF));
	// addi r5,r7,-7184
	ctx.r5.s64 = ctx.r7.s64 + -7184;
	// lvx128 v60,r0,r9
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// vmsum3fp128 v62,v62,v60
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v62.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v60.f32), 0xEF));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// vmulfp128 v63,v63,v61
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v61.f32)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8231d078
	sub_8231D078(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8231d0d0
	sub_8231D0D0(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	f0.f64 = double(temp.f32);
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f31,144(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bge cr6,0x82320a34
	if (!cr6.lt) goto loc_82320A34;
	// li r4,182
	ctx.r4.s64 = 182;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x823209d0
	if (!cr6.gt) goto loc_823209D0;
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_823209D0:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8231cf50
	sub_8231CF50(ctx, base);
	// b 0x82320a34
	goto loc_82320A34;
loc_82320A00:
	// addi r11,r1,228
	r11.s64 = ctx.r1.s64 + 228;
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r6,1584
	ctx.r6.s64 = 1584;
	// addi r5,r9,-7184
	ctx.r5.s64 = ctx.r9.s64 + -7184;
	// lvlx128 v62,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// vmulfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8231d078
	sub_8231D078(ctx, base);
loc_82320A34:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_82320A50"))) PPC_WEAK_FUNC(sub_82320A50);
PPC_FUNC_IMPL(__imp__sub_82320A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// lfs f13,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82308308
	sub_82308308(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82e84be0
	sub_82E84BE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82e84a90
	sub_82E84A90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x8231e418
	sub_8231E418(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r5,r31,1088
	ctx.r5.s64 = r31.s64 + 1088;
	// addi r4,r11,-15648
	ctx.r4.s64 = r11.s64 + -15648;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e85ba8
	sub_82E85BA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82308308
	sub_82308308(ctx, base);
	// vspltisw128 v63,-1
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// lvx128 v61,r0,r3
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// vslw128 v62,v63,v63
	v62.u32[0] = v63.u32[0] << (v63.u8[0] & 0x1F);
	v62.u32[1] = v63.u32[1] << (v63.u8[4] & 0x1F);
	v62.u32[2] = v63.u32[2] << (v63.u8[8] & 0x1F);
	v62.u32[3] = v63.u32[3] << (v63.u8[12] & 0x1F);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v60,v63,177
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0x4E));
	// vxor128 v62,v61,v62
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)v62.u8)));
	// vpermwi128 v59,v63,78
	simde_mm_store_si128((simde__m128i*)v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xB1));
	// vpermwi128 v58,v63,228
	simde_mm_store_si128((simde__m128i*)v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0x1B));
	// vor128 v56,v62,v62
	simde_mm_store_si128((simde__m128i*)v56.u8, simde_mm_load_si128((simde__m128i*)v62.u8));
	// vor128 v57,v62,v62
	simde_mm_store_si128((simde__m128i*)v57.u8, simde_mm_load_si128((simde__m128i*)v62.u8));
	// vor128 v55,v62,v62
	simde_mm_store_si128((simde__m128i*)v55.u8, simde_mm_load_si128((simde__m128i*)v62.u8));
	// vrlimi128 v62,v61,11,0
	simde_mm_store_ps(v62.f32, simde_mm_blend_ps(simde_mm_load_ps(v62.f32), simde_mm_permute_ps(simde_mm_load_ps(v61.f32), 228), 11));
	// vrlimi128 v56,v61,13,0
	simde_mm_store_ps(v56.f32, simde_mm_blend_ps(simde_mm_load_ps(v56.f32), simde_mm_permute_ps(simde_mm_load_ps(v61.f32), 228), 13));
	// vrlimi128 v57,v61,1,0
	simde_mm_store_ps(v57.f32, simde_mm_blend_ps(simde_mm_load_ps(v57.f32), simde_mm_permute_ps(simde_mm_load_ps(v61.f32), 228), 1));
	// vrlimi128 v55,v61,7,0
	simde_mm_store_ps(v55.f32, simde_mm_blend_ps(simde_mm_load_ps(v55.f32), simde_mm_permute_ps(simde_mm_load_ps(v61.f32), 228), 7));
	// vmsum4fp128 v62,v62,v58
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v62.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v58.f32), 0xFF));
	// vmsum4fp128 v61,v56,v60
	simde_mm_store_ps(v61.f32, simde_mm_dp_ps(simde_mm_load_ps(v56.f32), simde_mm_load_ps(v60.f32), 0xFF));
	// vmsum4fp128 v63,v57,v63
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v57.f32), simde_mm_load_ps(v63.f32), 0xFF));
	// vmsum4fp128 v60,v55,v59
	simde_mm_store_ps(v60.f32, simde_mm_dp_ps(simde_mm_load_ps(v55.f32), simde_mm_load_ps(v59.f32), 0xFF));
	// vmrghw128 v63,v61,v63
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), simde_mm_load_si128((simde__m128i*)v61.u32)));
	// vmrghw128 v62,v62,v60
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), simde_mm_load_si128((simde__m128i*)v62.u32)));
	// vmrghw128 v63,v62,v63
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), simde_mm_load_si128((simde__m128i*)v62.u32)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8231a3a8
	sub_8231A3A8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
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

__attribute__((alias("__imp__sub_82320B70"))) PPC_WEAK_FUNC(sub_82320B70);
PPC_FUNC_IMPL(__imp__sub_82320B70) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// beq 0x82320cf4
	if (cr0.eq) goto loc_82320CF4;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r4,r11,12204
	ctx.r4.s64 = r11.s64 + 12204;
	// bl 0x8230b630
	sub_8230B630(ctx, base);
	// li r28,1
	r28.s64 = 1;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7012
	ctx.r4.s64 = r11.s64 + -7012;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823203a8
	sub_823203A8(ctx, base);
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
	// beq cr6,0x82320bf4
	if (cr6.eq) goto loc_82320BF4;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82320BD8:
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
	// bne 0x82320bd8
	if (!cr0.eq) goto loc_82320BD8;
loc_82320BF4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,256(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// bl 0x82512b50
	sub_82512B50(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r29,r1,88
	r29.s64 = ctx.r1.s64 + 88;
	// bl 0x824ec4a8
	sub_824EC4A8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r11,-7184
	r30.s64 = r11.s64 + -7184;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,2474
	ctx.r5.s64 = 2474;
	// lfs f31,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f31.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8230a6a8
	sub_8230A6A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82320c50
	if (cr6.eq) goto loc_82320C50;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82320C50:
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7024
	ctx.r4.s64 = r11.s64 + -7024;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x823203a8
	sub_823203A8(ctx, base);
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
	// beq cr6,0x82320ca0
	if (cr6.eq) goto loc_82320CA0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82320C84:
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
	// bne 0x82320c84
	if (!cr0.eq) goto loc_82320C84;
loc_82320CA0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,256(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// bl 0x82512b50
	sub_82512B50(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r29,r1,88
	r29.s64 = ctx.r1.s64 + 88;
	// bl 0x824ec4a8
	sub_824EC4A8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,2476
	ctx.r5.s64 = 2476;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x8230a6a8
	sub_8230A6A8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82320cec
	if (cr6.eq) goto loc_82320CEC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82320CEC:
	// stb r28,1780(r31)
	PPC_STORE_U8(r31.u32 + 1780, r28.u8);
	// b 0x82320e70
	goto loc_82320E70;
loc_82320CF4:
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r4,r11,12196
	ctx.r4.s64 = r11.s64 + 12196;
	// bl 0x8230b630
	sub_8230B630(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// addi r11,r31,1168
	r11.s64 = r31.s64 + 1168;
	// stw r29,1168(r31)
	PPC_STORE_U32(r31.u32 + 1168, r29.u32);
	// lwz r3,1172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1172);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r29,1172(r31)
	PPC_STORE_U32(r31.u32 + 1172, r29.u32);
	// beq cr6,0x82320d20
	if (cr6.eq) goto loc_82320D20;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82320D20:
	// li r28,1
	r28.s64 = 1;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7012
	ctx.r4.s64 = r11.s64 + -7012;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x823203a8
	sub_823203A8(ctx, base);
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
	// beq cr6,0x82320d74
	if (cr6.eq) goto loc_82320D74;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82320D58:
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
	// bne 0x82320d58
	if (!cr0.eq) goto loc_82320D58;
loc_82320D74:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,256(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// bl 0x82512b50
	sub_82512B50(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r26,r1,88
	r26.s64 = ctx.r1.s64 + 88;
	// bl 0x824ec4a8
	sub_824EC4A8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r11,-7184
	r30.s64 = r11.s64 + -7184;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,2484
	ctx.r5.s64 = 2484;
	// lfs f31,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f31.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8230a6a8
	sub_8230A6A8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82320dd0
	if (cr6.eq) goto loc_82320DD0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82320DD0:
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7024
	ctx.r4.s64 = r11.s64 + -7024;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x823203a8
	sub_823203A8(ctx, base);
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
	// beq cr6,0x82320e20
	if (cr6.eq) goto loc_82320E20;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82320E04:
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
	// bne 0x82320e04
	if (!cr0.eq) goto loc_82320E04;
loc_82320E20:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,256(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// bl 0x82512b50
	sub_82512B50(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r28,r1,88
	r28.s64 = ctx.r1.s64 + 88;
	// bl 0x824ec4a8
	sub_824EC4A8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,2486
	ctx.r5.s64 = 2486;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// bl 0x8230a6a8
	sub_8230A6A8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82320e6c
	if (cr6.eq) goto loc_82320E6C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82320E6C:
	// stb r29,1780(r31)
	PPC_STORE_U8(r31.u32 + 1780, r29.u8);
loc_82320E70:
	// stb r27,1204(r31)
	PPC_STORE_U8(r31.u32 + 1204, r27.u8);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333da0
	sub_82333DA0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82320E90"))) PPC_WEAK_FUNC(sub_82320E90);
PPC_FUNC_IMPL(__imp__sub_82320E90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,1180(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 1180);
	// lwz r29,1176(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 1176);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82320ed4
	if (cr6.eq) goto loc_82320ED4;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
loc_82320EB8:
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
	// bne 0x82320eb8
	if (!cr0.eq) goto loc_82320EB8;
loc_82320ED4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f1,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d24c8
	sub_822D24C8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82320f08
	if (cr6.eq) goto loc_82320F08;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82320F08:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8231d8e0
	sub_8231D8E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82320F20"))) PPC_WEAK_FUNC(sub_82320F20);
PPC_FUNC_IMPL(__imp__sub_82320F20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,1740(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1740);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82320fdc
	if (cr6.eq) goto loc_82320FDC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82307e80
	sub_82307E80(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82307e48
	sub_82307E48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82320458
	sub_82320458(ctx, base);
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
	// beq cr6,0x82320fa8
	if (cr6.eq) goto loc_82320FA8;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82320F8C:
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
	// bne 0x82320f8c
	if (!cr0.eq) goto loc_82320F8C;
loc_82320FA8:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r6,1740(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 1740);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-7184
	ctx.r4.s64 = ctx.r10.s64 + -7184;
	// li r5,3557
	ctx.r5.s64 = 3557;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8230a6a8
	sub_8230A6A8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82320fdc
	if (cr6.eq) goto loc_82320FDC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82320FDC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8230a898
	sub_8230A898(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82e1ac38
	sub_82E1AC38(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82321000
	if (cr6.eq) goto loc_82321000;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82321000:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_82321018"))) PPC_WEAK_FUNC(sub_82321018);
PPC_FUNC_IMPL(__imp__sub_82321018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333da0
	sub_82333DA0(ctx, base);
	// li r4,17
	ctx.r4.s64 = 17;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333da0
	sub_82333DA0(ctx, base);
	// li r4,27
	ctx.r4.s64 = 27;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333da0
	sub_82333DA0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333da0
	sub_82333DA0(ctx, base);
	// li r4,19
	ctx.r4.s64 = 19;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d90
	sub_82333D90(ctx, base);
	// li r4,45
	ctx.r4.s64 = 45;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333da0
	sub_82333DA0(ctx, base);
	// li r4,46
	ctx.r4.s64 = 46;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333da0
	sub_82333DA0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f0,-5316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -5316);
	f0.f64 = double(temp.f32);
	// stfs f0,1056(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1056, temp.u32);
	// lbz r11,3408(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3408);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823210ac
	if (cr0.eq) goto loc_823210AC;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,3408(r31)
	PPC_STORE_U8(r31.u32 + 3408, r11.u8);
	// bl 0x82308008
	sub_82308008(ctx, base);
loc_823210AC:
	// lfs f0,1292(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1292);
	f0.f64 = double(temp.f32);
	// lis r11,-31943
	r11.s64 = -2093416448;
	// stfs f0,1412(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1412, temp.u32);
	// lwz r3,1416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1416);
	// addi r4,r11,29088
	ctx.r4.s64 = r11.s64 + 29088;
	// bl 0x82e1bc30
	sub_82E1BC30(ctx, base);
	// lbz r11,1204(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1204);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82321134
	if (cr0.eq) goto loc_82321134;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82321134
	if (!cr0.eq) goto loc_82321134;
	// li r4,37
	ctx.r4.s64 = 37;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333d78
	sub_82333D78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82321134
	if (!cr0.eq) goto loc_82321134;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231a468
	sub_8231A468(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x82321134
	if (!cr6.gt) goto loc_82321134;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8231d0d0
	sub_8231D0D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8231a730
	sub_8231A730(ctx, base);
loc_82321134:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// bl 0x82303038
	sub_82303038(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,1356(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1356, temp.u32);
	// stfs f0,1360(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1360, temp.u32);
	// bl 0x823204d8
	sub_823204D8(ctx, base);
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
	// beq cr6,0x82321190
	if (cr6.eq) goto loc_82321190;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82321174:
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
	// bne 0x82321174
	if (!cr0.eq) goto loc_82321174;
loc_82321190:
	// lwz r11,256(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// lwz r11,256(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,-7184
	ctx.r4.s64 = ctx.r10.s64 + -7184;
	// li r5,4408
	ctx.r5.s64 = 4408;
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823211d0
	if (cr6.eq) goto loc_823211D0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_823211D0:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823211e0
	if (cr6.eq) goto loc_823211E0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_823211E0:
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

__attribute__((alias("__imp__sub_823211F8"))) PPC_WEAK_FUNC(sub_823211F8);
PPC_FUNC_IMPL(__imp__sub_823211F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
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
	// stfs f1,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82320650
	sub_82320650(ctx, base);
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
	// beq cr6,0x82321258
	if (cr6.eq) goto loc_82321258;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8232123C:
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
	// bne 0x8232123c
	if (!cr0.eq) goto loc_8232123C;
loc_82321258:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,256(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x82321278
	if (!cr6.eq) goto loc_82321278;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82321278:
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// bl 0x8250c638
	sub_8250C638(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,-7184
	ctx.r4.s64 = ctx.r10.s64 + -7184;
	// li r5,4745
	ctx.r5.s64 = 4745;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x8230a6a8
	sub_8230A6A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823212bc
	if (cr6.eq) goto loc_823212BC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_823212BC:
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

__attribute__((alias("__imp__sub_823212D8"))) PPC_WEAK_FUNC(sub_823212D8);
PPC_FUNC_IMPL(__imp__sub_823212D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
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
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82308ed8
	sub_82308ED8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82307e28
	sub_82307E28(ctx, base);
	// bl 0x82e62780
	sub_82E62780(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8230bbe8
	sub_8230BBE8(ctx, base);
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
	// beq cr6,0x82321350
	if (cr6.eq) goto loc_82321350;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82321334:
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
	// bne 0x82321334
	if (!cr0.eq) goto loc_82321334;
loc_82321350:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r1,88
	r30.s64 = ctx.r1.s64 + 88;
	// bl 0x823085a8
	sub_823085A8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,-7184
	ctx.r4.s64 = ctx.r10.s64 + -7184;
	// li r5,4874
	ctx.r5.s64 = 4874;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x8230a6a8
	sub_8230A6A8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82321390
	if (cr6.eq) goto loc_82321390;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82321390:
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

__attribute__((alias("__imp__sub_823213A8"))) PPC_WEAK_FUNC(sub_823213A8);
PPC_FUNC_IMPL(__imp__sub_823213A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,976
	r11.s64 = 976;
	// lfs f1,1408(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	ctx.f1.f64 = double(temp.f32);
	// li r10,1696
	ctx.r10.s64 = 1696;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r3,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvx128 v62,r3,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v61,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v61.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// stvx128 v61,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v61,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v61,v61,0
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0xFF));
	// vmulfp128 v63,v63,v61
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v61.f32)));
	// vsubfp128 v63,v62,v63
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8231e6d8
	sub_8231E6D8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82321408"))) PPC_WEAK_FUNC(sub_82321408);
PPC_FUNC_IMPL(__imp__sub_82321408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,1260(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1260);
	// addi r11,r3,1256
	r11.s64 = ctx.r3.s64 + 1256;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi. r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82321438"))) PPC_WEAK_FUNC(sub_82321438);
PPC_FUNC_IMPL(__imp__sub_82321438) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,1276(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1276);
	// addi r11,r3,1272
	r11.s64 = ctx.r3.s64 + 1272;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi. r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82321468"))) PPC_WEAK_FUNC(sub_82321468);
PPC_FUNC_IMPL(__imp__sub_82321468) {
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
	// lbz r5,960(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 960);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8231eb60
	sub_8231EB60(ctx, base);
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

__attribute__((alias("__imp__sub_823214A0"))) PPC_WEAK_FUNC(sub_823214A0);
PPC_FUNC_IMPL(__imp__sub_823214A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x823083a8
	sub_823083A8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ae9f60
	sub_82AE9F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82ae9f40
	sub_82AE9F40(ctx, base);
	// li r11,976
	r11.s64 = 976;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r31,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8279ddf8
	sub_8279DDF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lbz r29,960(r31)
	r29.u64 = PPC_LOAD_U8(r31.u32 + 960);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x8231eb60
	sub_8231EB60(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f1,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82aeb870
	sub_82AEB870(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,-7004(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -7004);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82aea240
	sub_82AEA240(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82316328
	sub_82316328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ae9d30
	sub_82AE9D30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,1252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1252);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82ae9d38
	sub_82AE9D38(ctx, base);
	// lbz r11,1382(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1382);
	// li r10,528
	ctx.r10.s64 = 528;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8232159c
	if (cr0.eq) goto loc_8232159C;
	// li r9,560
	ctx.r9.s64 = 560;
	// li r8,544
	ctx.r8.s64 = 544;
	// li r11,0
	r11.s64 = 0;
	// lvx128 v63,r31,r9
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r31,r8
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r11,1382(r31)
	PPC_STORE_U8(r31.u32 + 1382, r11.u8);
	// stb r11,1381(r31)
	PPC_STORE_U8(r31.u32 + 1381, r11.u8);
loc_8232159C:
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82aea3b8
	sub_82AEA3B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82aeda48
	sub_82AEDA48(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r29,r11,-7184
	r29.s64 = r11.s64 + -7184;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,8455
	ctx.r6.s64 = 8455;
	// bl 0x823082f8
	sub_823082F8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82321600"))) PPC_WEAK_FUNC(sub_82321600);
PPC_FUNC_IMPL(__imp__sub_82321600) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r31,1652
	ctx.r3.s64 = r31.s64 + 1652;
	// bl 0x82376cb0
	sub_82376CB0(ctx, base);
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82333da0
	sub_82333DA0(ctx, base);
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

__attribute__((alias("__imp__sub_82321640"))) PPC_WEAK_FUNC(sub_82321640);
PPC_FUNC_IMPL(__imp__sub_82321640) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,1336(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1336);
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// stw r11,1336(r31)
	PPC_STORE_U32(r31.u32 + 1336, r11.u32);
	// bl 0x8231f9f0
	sub_8231F9F0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1336(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 1336);
	// bl 0x8230c9e8
	sub_8230C9E8(ctx, base);
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

__attribute__((alias("__imp__sub_82321698"))) PPC_WEAK_FUNC(sub_82321698);
PPC_FUNC_IMPL(__imp__sub_82321698) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-6992
	ctx.r4.s64 = r11.s64 + -6992;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7000
	ctx.r4.s64 = r11.s64 + -7000;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,10000
	ctx.r7.s64 = 10000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,1336
	ctx.r5.s64 = r31.s64 + 1336;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a87b8
	sub_825A87B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a80b0
	sub_825A80B0(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_82321740"))) PPC_WEAK_FUNC(sub_82321740);
PPC_FUNC_IMPL(__imp__sub_82321740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stb r4,175(r1)
	PPC_STORE_U8(ctx.r1.u32 + 175, ctx.r4.u8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,175
	ctx.r4.s64 = ctx.r1.s64 + 175;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823206c8
	sub_823206C8(ctx, base);
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
	// beq cr6,0x82321798
	if (cr6.eq) goto loc_82321798;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8232177C:
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
	// bne 0x8232177c
	if (!cr0.eq) goto loc_8232177C;
loc_82321798:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a6fe20
	sub_82A6FE20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x823217c0
	if (!cr6.eq) goto loc_823217C0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823217C0:
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// bl 0x8250c148
	sub_8250C148(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r31,r11,-7184
	r31.s64 = r11.s64 + -7184;
	// bl 0x82a6fe20
	sub_82A6FE20(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,9444
	ctx.r5.s64 = 9444;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82321814
	if (cr6.eq) goto loc_82321814;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82321814:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82321824
	if (cr6.eq) goto loc_82321824;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82321824:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82321830"))) PPC_WEAK_FUNC(sub_82321830);
PPC_FUNC_IMPL(__imp__sub_82321830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824ee0f8
	sub_824EE0F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8251a228
	sub_8251A228(ctx, base);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r3,1488(r31)
	PPC_STORE_U32(r31.u32 + 1488, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82321880
	if (cr6.eq) goto loc_82321880;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82321880:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824ee278
	sub_824EE278(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824b75a0
	sub_824B75A0(ctx, base);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r3,1492(r31)
	PPC_STORE_U32(r31.u32 + 1492, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823218c4
	if (cr6.eq) goto loc_823218C4;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_823218C4:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824ee0f8
	sub_824EE0F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8251a1c8
	sub_8251A1C8(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r3,1496(r31)
	PPC_STORE_U32(r31.u32 + 1496, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82321904
	if (cr6.eq) goto loc_82321904;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82321904:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824ee278
	sub_824EE278(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824b75a0
	sub_824B75A0(ctx, base);
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r3,1500(r31)
	PPC_STORE_U32(r31.u32 + 1500, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82321948
	if (cr6.eq) goto loc_82321948;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82321948:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82320740
	sub_82320740(ctx, base);
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
	// beq cr6,0x8232199c
	if (cr6.eq) goto loc_8232199C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82321980:
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
	// bne 0x82321980
	if (!cr0.eq) goto loc_82321980;
loc_8232199C:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,256(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x823219bc
	if (!cr6.eq) goto loc_823219BC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823219BC:
	// addi r30,r1,88
	r30.s64 = ctx.r1.s64 + 88;
	// bl 0x8250c118
	sub_8250C118(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,256(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r9,-7184
	ctx.r4.s64 = ctx.r9.s64 + -7184;
	// li r5,9733
	ctx.r5.s64 = 9733;
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// lfs f1,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82321a04
	if (cr6.eq) goto loc_82321A04;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82321A04:
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82321a14
	if (cr6.eq) goto loc_82321A14;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82321A14:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

__attribute__((alias("__imp__sub_82321A30"))) PPC_WEAK_FUNC(sub_82321A30);
PPC_FUNC_IMPL(__imp__sub_82321A30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82321A38:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82321a80
	if (cr6.eq) goto loc_82321A80;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// beq cr6,0x82321a78
	if (cr6.eq) goto loc_82321A78;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82321A5C:
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
	// bne 0x82321a5c
	if (!cr0.eq) goto loc_82321A5C;
loc_82321A78:
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
loc_82321A80:
	// addic. r4,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bne 0x82321a38
	if (!cr0.eq) goto loc_82321A38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82321A90"))) PPC_WEAK_FUNC(sub_82321A90);
PPC_FUNC_IMPL(__imp__sub_82321A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1364
	r11.s64 = 1364;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvlx128 v62,r3,r11
	temp.u32 = ctx.r3.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// vmulfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82320820
	sub_82320820(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82321AD0"))) PPC_WEAK_FUNC(sub_82321AD0);
PPC_FUNC_IMPL(__imp__sub_82321AD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,1260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1260);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82321b08
	if (cr6.eq) goto loc_82321B08;
	// lwz r10,1264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 1264);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82321b54
	if (!cr0.eq) goto loc_82321B54;
loc_82321B08:
	// li r4,88
	ctx.r4.s64 = 88;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f31,-9716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -9716);
	f31.f64 = double(temp.f32);
	// fmuls f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 * f31.f64));
	// bl 0x831b4448
	sub_831B4448(ctx, base);
	// li r4,87
	ctx.r4.s64 = 87;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f1.f64));
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// fmuls f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * f31.f64));
	// bl 0x831b4448
	sub_831B4448(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64));
	// bl 0x8231afe0
	sub_8231AFE0(ctx, base);
	// fsubs f0,f31,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f31.f64 - f30.f64));
	// fmadds f1,f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64 + f30.f64));
	// b 0x82321b5c
	goto loc_82321B5C;
loc_82321B54:
	// lwz r11,1264(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1264);
	// lfs f1,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
loc_82321B5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82321B78"))) PPC_WEAK_FUNC(sub_82321B78);
PPC_FUNC_IMPL(__imp__sub_82321B78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,1260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1260);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82321bb0
	if (cr6.eq) goto loc_82321BB0;
	// lwz r10,1264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 1264);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82321bfc
	if (!cr0.eq) goto loc_82321BFC;
loc_82321BB0:
	// li r4,86
	ctx.r4.s64 = 86;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f31,-9716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -9716);
	f31.f64 = double(temp.f32);
	// fmuls f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 * f31.f64));
	// bl 0x831b4448
	sub_831B4448(ctx, base);
	// li r4,85
	ctx.r4.s64 = 85;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f1.f64));
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// fmuls f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * f31.f64));
	// bl 0x831b4448
	sub_831B4448(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64));
	// bl 0x8231afe0
	sub_8231AFE0(ctx, base);
	// fsubs f0,f31,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f31.f64 - f30.f64));
	// fmadds f1,f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64 + f30.f64));
	// b 0x82321c04
	goto loc_82321C04;
loc_82321BFC:
	// lwz r11,1280(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1280);
	// lfs f1,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
loc_82321C04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82321C20"))) PPC_WEAK_FUNC(sub_82321C20);
PPC_FUNC_IMPL(__imp__sub_82321C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f0{};
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
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
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af0
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831b1408
	// li r12,-336
	r12.s64 = -336;
	// stvx128 v125,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v125.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,-320
	r12.s64 = -320;
	// stvx128 v126,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,-304
	r12.s64 = -304;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-1664(r1)
	ea = -1664 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f18,f1
	ctx.fpscr.disableFlushMode();
	f18.f64 = ctx.f1.f64;
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// mr r17,r4
	r17.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// mr r16,r7
	r16.u64 = ctx.r7.u64;
	// clrlwi. r19,r18,24
	r19.u64 = r18.u32 & 0xFF;
	cr0.compare<int32_t>(r19.s32, 0, xer);
	// li r4,120
	ctx.r4.s64 = 120;
	// bne 0x82321c7c
	if (!cr0.eq) goto loc_82321C7C;
	// li r4,121
	ctx.r4.s64 = 121;
loc_82321C7C:
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r4,122
	ctx.r4.s64 = 122;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// addi r11,r11,-9716
	r11.s64 = r11.s64 + -9716;
	// lfs f30,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f30.f64 = double(temp.f32);
	// fmuls f31,f1,f30
	f31.f64 = double(float(ctx.f1.f64 * f30.f64));
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x831b1788
	sub_831B1788(ctx, base);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v63,r0,r20
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r20.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lvx128 v62,r0,r17
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r17.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lvx128 v61,r0,r24
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lbz r5,960(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 960);
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f29,-22120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -22120);
	f29.f64 = double(temp.f32);
	// fmadds f24,f0,f28,f29
	f24.f64 = double(float(f0.f64 * f28.f64 + f29.f64));
	// bl 0x8231eb60
	sub_8231EB60(ctx, base);
	// vspltisw128 v63,1
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_set1_epi32(int(0x1)));
	// vspltisw128 v126,0
	simde_mm_store_si128((simde__m128i*)v126.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r1,272
	r11.s64 = ctx.r1.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// vcsxwfp128 v127,v63,1
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v127.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v63.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// vor128 v13,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)v127.u8));
	// lvx128 v63,r0,r24
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v63
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// vrsqrtefp128 v0,v63
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(v63.f32))));
	// vor128 v12,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)v63.u8));
	// vmulfp128 v62,v63,v127
	simde_mm_store_ps(v62.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v127.f32)));
	// vcmpeqfp128 v11,v63,v126
	simde_mm_store_ps(ctx.v11.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v126.f32)));
	// vmulfp128 v61,v0,v0
	simde_mm_store_ps(v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp128 v13,v62,v61,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v61.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v63,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v0,v0,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,272(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	f0.f64 = double(temp.f32);
	// fdivs f23,f28,f0
	f23.f64 = double(float(f28.f64 / f0.f64));
	// bl 0x823083a8
	sub_823083A8(ctx, base);
	// lwz r11,508(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,115
	ctx.r4.s64 = 115;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8245db60
	sub_8245DB60(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,288(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	f0.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f13,292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f12,296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f11,300(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	ctx.f11.f64 = double(temp.f32);
	// lfs f31,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f31.f64 = double(temp.f32);
	// lis r28,-31942
	r28.s64 = -2093350912;
	// lfs f17,-7056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -7056);
	f17.f64 = double(temp.f32);
	// lis r22,-32238
	r22.s64 = -2112749568;
	// lfs f26,-24780(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24780);
	f26.f64 = double(temp.f32);
	// fmuls f20,f1,f30
	f20.f64 = double(float(ctx.f1.f64 * f30.f64));
	// lfs f28,2244(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2244);
	f28.f64 = double(temp.f32);
	// li r25,0
	r25.s64 = 0;
	// stfs f0,240(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// fmr f27,f18
	f27.f64 = f18.f64;
	// stfs f13,244(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// li r27,0
	r27.s64 = 0;
	// stfs f12,248(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// fcmpu cr6,f18,f31
	cr6.compare(f18.f64, f31.f64);
	// stfs f11,252(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// addi r21,r11,-20912
	r21.s64 = r11.s64 + -20912;
	// ble cr6,0x823225c8
	if (!cr6.gt) goto loc_823225C8;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lvx128 v125,r0,r21
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r21.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r23,-31946
	r23.s64 = -2093613056;
	// lfs f25,-24412(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24412);
	f25.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f19,-9256(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9256);
	f19.f64 = double(temp.f32);
	// lfd f22,-6952(r9)
	f22.u64 = PPC_LOAD_U64(ctx.r9.u32 + -6952);
	// addi r26,r11,-6964
	r26.s64 = r11.s64 + -6964;
	// lfs f21,-21220(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -21220);
	f21.f64 = double(temp.f32);
	// stfs f25,256(r1)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
loc_82321DF0:
	// fcmpu cr6,f23,f27
	ctx.fpscr.disableFlushMode();
	cr6.compare(f23.f64, f27.f64);
	// bge cr6,0x82321e00
	if (!cr6.lt) goto loc_82321E00;
	// fmr f30,f23
	f30.f64 = f23.f64;
	// b 0x82321e04
	goto loc_82321E04;
loc_82321E00:
	// fmr f30,f27
	ctx.fpscr.disableFlushMode();
	f30.f64 = f27.f64;
loc_82321E04:
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// fsubs f27,f27,f30
	ctx.fpscr.disableFlushMode();
	f27.f64 = double(float(f27.f64 - f30.f64));
	// addi r10,r1,784
	ctx.r10.s64 = ctx.r1.s64 + 784;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v125
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v125.f32), 0xEF));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,784(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 784);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	cr6.compare(f0.f64, f28.f64);
	// ble cr6,0x82321e30
	if (!cr6.gt) goto loc_82321E30;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// b 0x82321e40
	goto loc_82321E40;
loc_82321E30:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f0.f64;
	// fcmpu cr6,f0,f26
	cr6.compare(f0.f64, f26.f64);
	// bge cr6,0x82321e40
	if (!cr6.lt) goto loc_82321E40;
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
loc_82321E40:
	// bl 0x82316df8
	sub_82316DF8(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// fmr f16,f1
	ctx.fpscr.disableFlushMode();
	f16.f64 = ctx.f1.f64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,688
	ctx.r8.s64 = ctx.r1.s64 + 688;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8279ddf8
	sub_8279DDF8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ae9f60
	sub_82AE9F60(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82aeb528
	sub_82AEB528(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ae9f40
	sub_82AE9F40(ctx, base);
	// lfs f13,-3780(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r22.u32 + -3780);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f16,f20
	f0.f64 = double(float(f16.f64 + f20.f64));
	// fmuls f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * f29.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82321eb0
	if (!cr6.lt) goto loc_82321EB0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_82321EB0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f0.f64;
	// bl 0x82aea240
	sub_82AEA240(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82aeda48
	sub_82AEDA48(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82ae9f50
	sub_82AE9F50(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82ae9f80
	sub_82AE9F80(ctx, base);
	// addi r11,r1,224
	r11.s64 = ctx.r1.s64 + 224;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v61,r0,r3
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,704
	ctx.r9.s64 = ctx.r1.s64 + 704;
	// addi r8,r1,720
	ctx.r8.s64 = ctx.r1.s64 + 720;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// vmsum3fp128 v62,v62,v62
	simde_mm_store_ps(v62.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// stvx128 v61,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,704(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 704);
	f0.f64 = double(temp.f32);
	// lfs f13,720(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 720);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82321fb4
	if (!cr6.gt) goto loc_82321FB4;
	// vrsqrtefp128 v0,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(v63.f32))));
	// vor128 v13,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)v127.u8));
	// vmulfp128 v62,v63,v127
	simde_mm_store_ps(v62.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v127.f32)));
	// vor128 v12,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)v63.u8));
	// vcmpeqfp128 v11,v63,v126
	simde_mm_store_ps(ctx.v11.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v126.f32)));
	// addi r11,r1,880
	r11.s64 = ctx.r1.s64 + 880;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// vmulfp128 v61,v0,v0
	simde_mm_store_ps(v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp128 v13,v62,v61,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v61.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v63,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v0,v0,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// addi r11,r1,880
	r11.s64 = ctx.r1.s64 + 880;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvlx128 v62,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// vmulfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82321FB4:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r1,1072
	ctx.r3.s64 = ctx.r1.s64 + 1072;
	// bl 0x831b1630
	sub_831B1630(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r3,-31940(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -31940);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,1072
	ctx.r4.s64 = ctx.r1.s64 + 1072;
	// bl 0x82ecf968
	sub_82ECF968(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r3,-31940(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -31940);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// fmr f1,f17
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f17.f64;
	// bl 0x82ecf4c0
	sub_82ECF4C0(ctx, base);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// bl 0x8231c140
	sub_8231C140(ctx, base);
	// addi r11,r1,256
	r11.s64 = ctx.r1.s64 + 256;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f0.f64 = double(temp.f32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r1,640
	ctx.r7.s64 = ctx.r1.s64 + 640;
	// lfs f11,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// vspltw128 v0,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f0,592(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 592, temp.u32);
	// vmaddfp v0,v13,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// stfs f13,596(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 596, temp.u32);
	// stfs f12,600(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 600, temp.u32);
	// fcmpu cr6,f24,f21
	cr6.compare(f24.f64, f21.f64);
	// stfs f11,604(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 604, temp.u32);
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ble cr6,0x82322080
	if (!cr6.gt) goto loc_82322080;
	// fmr f0,f21
	f0.f64 = f21.f64;
	// b 0x82322084
	goto loc_82322084;
loc_82322080:
	// fmr f0,f24
	ctx.fpscr.disableFlushMode();
	f0.f64 = f24.f64;
loc_82322084:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// fadds f0,f0,f25
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 + f25.f64));
	// addi r10,r1,592
	ctx.r10.s64 = ctx.r1.s64 + 592;
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r9,r1,800
	ctx.r9.s64 = ctx.r1.s64 + 800;
	// lwz r8,1384(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 1384);
	// addi r6,r1,800
	ctx.r6.s64 = ctx.r1.s64 + 800;
	// lwz r7,28648(r23)
	ctx.r7.u64 = PPC_LOAD_U32(r23.u32 + 28648);
	// addi r5,r1,640
	ctx.r5.s64 = ctx.r1.s64 + 640;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v13,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v12,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// vmaddfp v0,v12,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x822ecd48
	sub_822ECD48(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x823225c0
	if (cr0.eq) goto loc_823225C0;
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x823166f8
	sub_823166F8(ctx, base);
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	f0.f64 = double(temp.f32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,624
	ctx.r5.s64 = ctx.r1.s64 + 624;
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// stfs f0,624(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 624, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f13,628(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 628, temp.u32);
	// stfs f12,632(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 632, temp.u32);
	// stfs f31,636(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 636, temp.u32);
	// stfs f31,544(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 544, temp.u32);
	// stfs f28,548(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 548, temp.u32);
	// stfs f31,552(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 552, temp.u32);
	// stfs f31,556(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 556, temp.u32);
	// bl 0x82317d58
	sub_82317D58(ctx, base);
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x8232212c
	if (cr6.eq) goto loc_8232212C;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823221a4
	if (!cr0.eq) goto loc_823221A4;
loc_8232212C:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8232213c
	if (!cr0.eq) goto loc_8232213C;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823225fc
	if (cr0.eq) goto loc_823225FC;
loc_8232213C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	f0.f64 = double(temp.f32);
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r1,528
	r29.s64 = ctx.r1.s64 + 528;
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// addi r15,r1,112
	r15.s64 = ctx.r1.s64 + 112;
	// stfs f0,528(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 528, temp.u32);
	// addi r14,r1,224
	r14.s64 = ctx.r1.s64 + 224;
	// stfs f13,532(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 532, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stfs f12,536(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 536, temp.u32);
	// stfs f31,540(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 540, temp.u32);
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// mr r7,r15
	ctx.r7.u64 = r15.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
	// bl 0x82317e08
	sub_82317E08(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823225fc
	if (cr0.eq) goto loc_823225FC;
loc_823221A4:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lfs f13,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,496
	r11.s64 = ctx.r1.s64 + 496;
	// lfs f12,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	f0.f64 = double(temp.f32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stfs f13,500(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 500, temp.u32);
	// addi r8,r1,816
	ctx.r8.s64 = ctx.r1.s64 + 816;
	// stfs f12,504(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 504, temp.u32);
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,496(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 496, temp.u32);
	// stfs f31,508(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 508, temp.u32);
	// lvx128 v61,r0,r11
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v61,v63,v61
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v61.f32, simde_mm_sub_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v61.f32)));
	// lvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v62,v61,v62
	simde_mm_store_ps(v62.f32, simde_mm_dp_ps(simde_mm_load_ps(v61.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// lfs f11,168(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f9.f64 = double(temp.f32);
	// stvx128 v62,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f8,816(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 816);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f8,f25
	cr6.compare(ctx.f8.f64, f25.f64);
	// ble cr6,0x82322278
	if (!cr6.gt) goto loc_82322278;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// stfs f9,352(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// stfs f10,356(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// addi r11,r1,560
	r11.s64 = ctx.r1.s64 + 560;
	// stfs f11,360(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// addi r10,r1,608
	ctx.r10.s64 = ctx.r1.s64 + 608;
	// stfs f31,364(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// addi r8,r1,736
	ctx.r8.s64 = ctx.r1.s64 + 736;
	// stfs f13,612(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 612, temp.u32);
	// addi r7,r1,848
	ctx.r7.s64 = ctx.r1.s64 + 848;
	// stfs f10,564(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 564, temp.u32);
	// stfs f0,608(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 608, temp.u32);
	// stfs f9,560(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 560, temp.u32);
	// stfs f11,568(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 568, temp.u32);
	// stfs f31,572(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 572, temp.u32);
	// stfs f12,616(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 616, temp.u32);
	// stfs f31,620(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 620, temp.u32);
	// lvx128 v61,r0,r9
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v61
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v61.f32), 0xEF));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,736(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 736);
	ctx.f13.f64 = double(temp.f32);
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r10
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v62,v62,v61
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v62.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v61.f32), 0xEF));
	// stvx128 v62,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,848(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 848);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f29
	cr6.compare(f0.f64, f29.f64);
	// bgt cr6,0x823225bc
	if (cr6.gt) goto loc_823225BC;
loc_82322278:
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823222a8
	if (cr6.eq) goto loc_823222A8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,8212
	ctx.r4.s64 = 8212;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823222a8
	if (cr0.eq) goto loc_823222A8;
	// li r29,1
	r29.s64 = 1;
loc_823222A8:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823225ac
	if (!cr0.eq) goto loc_823225AC;
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	f0.f64 = double(temp.f32);
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// addi r29,r1,384
	r29.s64 = ctx.r1.s64 + 384;
	// stfs f31,384(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// stfs f31,388(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// stfs f28,392(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// stfs f31,396(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 396, temp.u32);
	// stfs f0,512(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 512, temp.u32);
	// stfs f13,516(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 516, temp.u32);
	// stfs f12,520(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 520, temp.u32);
	// stfs f31,524(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 524, temp.u32);
	// stfs f31,416(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 416, temp.u32);
	// stfs f28,420(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 420, temp.u32);
	// stfs f31,424(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// stfs f31,428(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 428, temp.u32);
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x82e85da8
	sub_82E85DA8(ctx, base);
	// vspltisw128 v63,-1
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// li r11,1120
	r11.s64 = 1120;
	// lfs f13,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,864
	ctx.r10.s64 = ctx.r1.s64 + 864;
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,448
	ctx.r9.s64 = ctx.r1.s64 + 448;
	// lfs f0,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	f0.f64 = double(temp.f32);
	// vslw128 v62,v63,v63
	v62.u32[0] = v63.u32[0] << (v63.u8[0] & 0x1F);
	v62.u32[1] = v63.u32[1] << (v63.u8[4] & 0x1F);
	v62.u32[2] = v63.u32[2] << (v63.u8[8] & 0x1F);
	v62.u32[3] = v63.u32[3] << (v63.u8[12] & 0x1F);
	// addi r7,r1,576
	ctx.r7.s64 = ctx.r1.s64 + 576;
	// stfs f13,580(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 580, temp.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lvx128 v58,r31,r11
	simde_mm_store_si128((simde__m128i*)v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,768
	ctx.r6.s64 = ctx.r1.s64 + 768;
	// stfs f12,584(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 584, temp.u32);
	// fmr f1,f22
	ctx.f1.f64 = f22.f64;
	// vxor128 v62,v58,v62
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)v58.u8), simde_mm_load_si128((simde__m128i*)v62.u8)));
	// stfs f0,576(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 576, temp.u32);
	// stfs f31,588(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 588, temp.u32);
	// lvx128 v57,r0,r8
	simde_mm_store_si128((simde__m128i*)v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r0,r7
	simde_mm_store_si128((simde__m128i*)v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v57,v57,v53
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v57.f32, simde_mm_dp_ps(simde_mm_load_ps(v57.f32), simde_mm_load_ps(v53.f32), 0xEF));
	// vor128 v56,v62,v62
	simde_mm_store_si128((simde__m128i*)v56.u8, simde_mm_load_si128((simde__m128i*)v62.u8));
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v55,v62,v62
	simde_mm_store_si128((simde__m128i*)v55.u8, simde_mm_load_si128((simde__m128i*)v62.u8));
	// vpermwi128 v61,v63,177
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0x4E));
	// vor128 v54,v62,v62
	simde_mm_store_si128((simde__m128i*)v54.u8, simde_mm_load_si128((simde__m128i*)v62.u8));
	// vpermwi128 v60,v63,78
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xB1));
	// vpermwi128 v59,v63,228
	simde_mm_store_si128((simde__m128i*)v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0x1B));
	// vrlimi128 v62,v58,11,0
	simde_mm_store_ps(v62.f32, simde_mm_blend_ps(simde_mm_load_ps(v62.f32), simde_mm_permute_ps(simde_mm_load_ps(v58.f32), 228), 11));
	// vrlimi128 v56,v58,1,0
	simde_mm_store_ps(v56.f32, simde_mm_blend_ps(simde_mm_load_ps(v56.f32), simde_mm_permute_ps(simde_mm_load_ps(v58.f32), 228), 1));
	// stvx128 v57,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v55,v58,13,0
	simde_mm_store_ps(v55.f32, simde_mm_blend_ps(simde_mm_load_ps(v55.f32), simde_mm_permute_ps(simde_mm_load_ps(v58.f32), 228), 13));
	// vrlimi128 v54,v58,7,0
	simde_mm_store_ps(v54.f32, simde_mm_blend_ps(simde_mm_load_ps(v54.f32), simde_mm_permute_ps(simde_mm_load_ps(v58.f32), 228), 7));
	// vmsum4fp128 v62,v62,v59
	simde_mm_store_ps(v62.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v59.f32), 0xFF));
	// vmsum4fp128 v63,v56,v63
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v56.f32), simde_mm_load_ps(v63.f32), 0xFF));
	// vmsum4fp128 v61,v55,v61
	simde_mm_store_ps(v61.f32, simde_mm_dp_ps(simde_mm_load_ps(v55.f32), simde_mm_load_ps(v61.f32), 0xFF));
	// vmsum4fp128 v60,v54,v60
	simde_mm_store_ps(v60.f32, simde_mm_dp_ps(simde_mm_load_ps(v54.f32), simde_mm_load_ps(v60.f32), 0xFF));
	// vmrghw128 v63,v61,v63
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), simde_mm_load_si128((simde__m128i*)v61.u32)));
	// vmrghw128 v62,v62,v60
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), simde_mm_load_si128((simde__m128i*)v62.u32)));
	// vmrghw128 v63,v62,v63
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), simde_mm_load_si128((simde__m128i*)v62.u32)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,460(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,448(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,452(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,456(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	f0.f64 = double(temp.f32);
	// stfs f0,248(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f11,244(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f12,240(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f13,252(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// bl 0x831b1868
	sub_831B1868(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,768(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 768);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82322458
	if (!cr6.lt) goto loc_82322458;
	// lfs f0,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	f0.f64 = double(temp.f32);
	// addi r6,r1,480
	ctx.r6.s64 = ctx.r1.s64 + 480;
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f0,320(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// stfs f13,324(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// stfs f12,328(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stfs f31,332(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// stfs f31,480(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 480, temp.u32);
	// stfs f31,484(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 484, temp.u32);
	// stfs f28,488(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 488, temp.u32);
	// stfs f31,492(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 492, temp.u32);
	// bl 0x82e85da8
	sub_82E85DA8(ctx, base);
	// addi r4,r1,832
	ctx.r4.s64 = ctx.r1.s64 + 832;
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// addi r29,r1,224
	r29.s64 = ctx.r1.s64 + 224;
	// bl 0x82e84be0
	sub_82E84BE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82e84a90
	sub_82E84A90(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82322460
	goto loc_82322460;
loc_82322458:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82322460:
	// addi r11,r1,336
	r11.s64 = ctx.r1.s64 + 336;
	// lfs f13,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// stfs f13,340(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stfs f12,344(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// stfs f31,348(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// lfs f0,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	f0.f64 = double(temp.f32);
	// stfs f0,336(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v62,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v62.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// stvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f11,304(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f31
	cr6.compare(ctx.f11.f64, f31.f64);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ble cr6,0x823224a8
	if (!cr6.gt) goto loc_823224A8;
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// b 0x823224b4
	goto loc_823224B4;
loc_823224A8:
	// fcmpu cr6,f11,f19
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, f19.f64);
	// bge cr6,0x823224b4
	if (!cr6.lt) goto loc_823224B4;
	// stfs f19,96(r1)
	temp.f32 = float(f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_823224B4:
	// addi r11,r1,368
	r11.s64 = ctx.r1.s64 + 368;
	// stfs f12,376(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// stfs f31,380(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stfs f0,368(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// addi r9,r1,400
	ctx.r9.s64 = ctx.r1.s64 + 400;
	// stfs f13,372(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stfs f0,400(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// addi r7,r1,752
	ctx.r7.s64 = ctx.r1.s64 + 752;
	// stfs f13,404(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// stfs f12,408(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 408, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f31,412(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 412, temp.u32);
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v62,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// vmulfp128 v63,v63,v62
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e86270
	sub_82E86270(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	f0.f64 = double(temp.f32);
	// addi r11,r1,432
	r11.s64 = ctx.r1.s64 + 432;
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,464
	ctx.r7.s64 = ctx.r1.s64 + 464;
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,432(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f13,436(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 436, temp.u32);
	// vspltw128 v0,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// stfs f12,440(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 440, temp.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stfs f0,464(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 464, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f13,468(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 468, temp.u32);
	// stfs f12,472(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 472, temp.u32);
	// stfs f31,284(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// lvx128 v12,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f31,476(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 476, temp.u32);
	// stfs f31,444(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 444, temp.u32);
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,1
	r11.s64 = 1;
	// stvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	f0.f64 = double(temp.f32);
	// stb r11,736(r31)
	PPC_STORE_U8(r31.u32 + 736, r11.u8);
	// lfs f13,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,272(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f13,276(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f12,280(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// lvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v0,v13,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v62,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_823225AC:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// fcmpu cr6,f27,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(f27.f64, f31.f64);
	// bgt cr6,0x82321df0
	if (cr6.gt) goto loc_82321DF0;
	// b 0x823225c8
	goto loc_823225C8;
loc_823225BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823225C0:
	// bl 0x82317070
	sub_82317070(ctx, base);
	// li r25,0
	r25.s64 = 0;
loc_823225C8:
	// lbz r11,736(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 736);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82322908
	if (!cr0.eq) goto loc_82322908;
	// lvx128 v63,r0,r20
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r20.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v62,r0,r21
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r21.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	cr6.compare(f0.f64, f28.f64);
	// ble cr6,0x8232260c
	if (!cr6.gt) goto loc_8232260C;
	// fmr f0,f28
	f0.f64 = f28.f64;
	// b 0x82322618
	goto loc_82322618;
loc_823225FC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317070
	sub_82317070(ctx, base);
	// li r25,1
	r25.s64 = 1;
	// b 0x823225c8
	goto loc_823225C8;
loc_8232260C:
	// fcmpu cr6,f0,f26
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f26.f64);
	// bge cr6,0x82322618
	if (!cr6.lt) goto loc_82322618;
	// fmr f0,f26
	f0.f64 = f26.f64;
loc_82322618:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f0.f64;
	// bl 0x82316df8
	sub_82316DF8(ctx, base);
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// beq 0x823227b4
	if (cr0.eq) goto loc_823227B4;
	// addi r11,r1,224
	r11.s64 = ctx.r1.s64 + 224;
	// lvx128 v63,r0,r24
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8279ddf8
	sub_8279DDF8(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ae9f60
	sub_82AE9F60(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82aeb528
	sub_82AEB528(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ae9f40
	sub_82AE9F40(ctx, base);
	// lfs f13,-3780(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r22.u32 + -3780);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f31,f20
	f0.f64 = double(float(f31.f64 + f20.f64));
	// fmuls f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * f29.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82322680
	if (!cr6.lt) goto loc_82322680;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_82322680:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f0.f64;
	// bl 0x82aea240
	sub_82AEA240(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f18
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f18.f64;
	// bl 0x82aeda48
	sub_82AEDA48(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-31940(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -31940);
	// addi r4,r10,-6972
	ctx.r4.s64 = ctx.r10.s64 + -6972;
	// li r6,-1
	ctx.r6.s64 = -1;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x82ecf968
	sub_82ECF968(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r3,-31940(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -31940);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// fmr f1,f17
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f17.f64;
	// bl 0x82ecf4c0
	sub_82ECF4C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82ae9f50
	sub_82AE9F50(ctx, base);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lvx128 v62,r0,r3
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,304
	r11.s64 = ctx.r1.s64 + 304;
	// vmsum3fp128 v61,v62,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v61.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v63
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// stvx128 v62,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,304(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82322790
	if (!cr6.gt) goto loc_82322790;
	// vrsqrtefp128 v0,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(v63.f32))));
	// vor128 v13,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)v127.u8));
	// vmulfp128 v62,v63,v127
	simde_mm_store_ps(v62.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v127.f32)));
	// vor128 v12,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)v63.u8));
	// vcmpeqfp128 v11,v63,v126
	simde_mm_store_ps(ctx.v11.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v126.f32)));
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// vmulfp128 v61,v0,v0
	simde_mm_store_ps(v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp128 v13,v62,v61,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v61.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v63,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v0,v0,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvlx128 v62,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// vmulfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82322790:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82ae9f80
	sub_82AE9F80(ctx, base);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x823228ec
	goto loc_823228EC;
loc_823227B4:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-24792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24792);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f27,f0
	cr6.compare(f27.f64, f0.f64);
	// ble cr6,0x82322908
	if (!cr6.gt) goto loc_82322908;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82ae9f50
	sub_82AE9F50(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82aeda48
	sub_82AEDA48(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-31940(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -31940);
	// addi r4,r10,-6980
	ctx.r4.s64 = ctx.r10.s64 + -6980;
	// li r6,-1
	ctx.r6.s64 = -1;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x82ecf968
	sub_82ECF968(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r3,-31940(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -31940);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// fmr f1,f17
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f17.f64;
	// bl 0x82ecf4c0
	sub_82ECF4C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82ae9f50
	sub_82AE9F50(ctx, base);
	// lvx128 v62,r0,r3
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v61,v62,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v61.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r11,r1,224
	r11.s64 = ctx.r1.s64 + 224;
	// addi r9,r1,304
	ctx.r9.s64 = ctx.r1.s64 + 304;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v63
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// stvx128 v62,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,304(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x823228e4
	if (!cr6.gt) goto loc_823228E4;
	// vrsqrtefp128 v0,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(v63.f32))));
	// vor128 v13,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)v127.u8));
	// vmulfp128 v62,v63,v127
	simde_mm_store_ps(v62.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v127.f32)));
	// vor128 v12,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)v63.u8));
	// vcmpeqfp128 v11,v63,v126
	simde_mm_store_ps(ctx.v11.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v126.f32)));
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// vmulfp128 v61,v0,v0
	simde_mm_store_ps(v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp128 v13,v62,v61,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v61.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v63,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v0,v0,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvlx128 v62,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// vmulfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_823228E4:
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
loc_823228EC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8231c140
	sub_8231C140(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82322908:
	// addi r11,r1,224
	r11.s64 = ctx.r1.s64 + 224;
	// fmr f1,f18
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f18.f64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,656
	ctx.r5.s64 = ctx.r1.s64 + 656;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,1
	ctx.r7.s64 = 1;
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,656
	ctx.r6.s64 = ctx.r1.s64 + 656;
	// vmsum3fp128 v61,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v61.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stvx128 v61,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v61,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v61,v61,0
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0xFF));
	// vmulfp128 v62,v62,v61
	simde_mm_store_ps(v62.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v61.f32)));
	// vsubfp128 v63,v63,v62
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82aec620
	sub_82AEC620(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82aeb528
	sub_82AEB528(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x82ae9f18
	sub_82AE9F18(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82aeb870
	sub_82AEB870(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823229a8
	if (cr0.eq) goto loc_823229A8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82ae9f80
	sub_82AE9F80(ctx, base);
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x823229b0
	goto loc_823229B0;
loc_823229A8:
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_823229B0:
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r10
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r17
	simde_mm_store_si128((simde__m128i*)(base + ((r17.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r24
	simde_mm_store_si128((simde__m128i*)(base + ((r24.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r20
	simde_mm_store_si128((simde__m128i*)(base + ((r20.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,1664
	ctx.r1.s64 = ctx.r1.s64 + 1664;
	// li r0,-336
	r0.s64 = -336;
	// lvx128 v125,r1,r0
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r0,-320
	r0.s64 = -320;
	// lvx128 v126,r1,r0
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r0,-304
	r0.s64 = -304;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831b1454
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_823229F8"))) PPC_WEAK_FUNC(sub_823229F8);
PPC_FUNC_IMPL(__imp__sub_823229F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// li r12,-80
	r12.s64 = -80;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// lis r30,-31942
	r30.s64 = -2093350912;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-6940
	ctx.r4.s64 = r11.s64 + -6940;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,-31940(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -31940);
	// bl 0x82ecf968
	sub_82ECF968(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-31940(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -31940);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f31,-7056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -7056);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82ecf4c0
	sub_82ECF4C0(ctx, base);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lbz r10,1382(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 1382);
	// lvx128 v63,r0,r28
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r26,560
	r26.s64 = 560;
	// li r27,544
	r27.s64 = 544;
	// li r29,0
	r29.s64 = 0;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v127,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v127.f32, simde_mm_sub_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// beq 0x82322aa8
	if (cr0.eq) goto loc_82322AA8;
	// lvx128 v63,r31,r26
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,528
	r11.s64 = 528;
	// lvx128 v62,r31,r27
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v62,v63
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r31,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r29,1382(r31)
	PPC_STORE_U8(r31.u32 + 1382, r29.u8);
	// stb r29,1381(r31)
	PPC_STORE_U8(r31.u32 + 1381, r29.u8);
loc_82322AA8:
	// addi r28,r31,528
	r28.s64 = r31.s64 + 528;
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lvx128 v63,r0,r28
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v62,v63,v127
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v62.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v127.f32), 0xEF));
	// lfs f13,2240(r7)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
	// stvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// vmulfp128 v63,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82322b14
	if (!cr6.gt) goto loc_82322B14;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82322B14:
	// vmsum3fp128 v63,v63,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// lbz r10,1382(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 1382);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq 0x82322b44
	if (cr0.eq) goto loc_82322B44;
	// lvx128 v63,r31,r26
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r31,r27
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v62,v63
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r0,r28
	simde_mm_store_si128((simde__m128i*)(base + ((r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r29,1382(r31)
	PPC_STORE_U8(r31.u32 + 1382, r29.u8);
	// stb r29,1381(r31)
	PPC_STORE_U8(r31.u32 + 1381, r29.u8);
loc_82322B44:
	// lvx128 v63,r0,r28
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// vmsum3fp128 v63,v63,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f12,160(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-24412(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24412);
	ctx.f13.f64 = double(temp.f32);
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f11,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82322bdc
	if (!cr6.lt) goto loc_82322BDC;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fneg f13,f11
	ctx.f13.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lfs f0,2440(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2440);
	f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// vmulfp128 v63,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// lfs f1,-22340(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -22340);
	ctx.f1.f64 = double(temp.f32);
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x823214a0
	sub_823214A0(ctx, base);
loc_82322BDC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// lwz r11,-31940(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -31940);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r4,r10,-6944
	ctx.r4.s64 = ctx.r10.s64 + -6944;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82ecf968
	sub_82ECF968(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823087c8
	sub_823087C8(ctx, base);
	// lwz r11,-31940(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -31940);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ecf4c0
	sub_82ECF4C0(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// li r0,-80
	r0.s64 = -80;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831b0b70
	return;
}

