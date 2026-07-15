#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_828C3E88"))) PPC_WEAK_FUNC(sub_828C3E88);
PPC_FUNC_IMPL(__imp__sub_828C3E88) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-536
	ctx.r3.s64 = ctx.r3.s64 + -536;
	// b 0x828c49d0
	sub_828C49D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C3E90"))) PPC_WEAK_FUNC(sub_828C3E90);
PPC_FUNC_IMPL(__imp__sub_828C3E90) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x828c49d0
	sub_828C49D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C3E98"))) PPC_WEAK_FUNC(sub_828C3E98);
PPC_FUNC_IMPL(__imp__sub_828C3E98) {
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
	// lis r11,-31944
	r11.s64 = -2093481984;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,4992
	r11.s64 = r11.s64 + 4992;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r10,15136
	ctx.r4.s64 = ctx.r10.s64 + 15136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lfs f0,280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 280);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e84a90
	sub_82E84A90(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lvlx128 v62,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// vmulfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
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

__attribute__((alias("__imp__sub_828C3F18"))) PPC_WEAK_FUNC(sub_828C3F18);
PPC_FUNC_IMPL(__imp__sub_828C3F18) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// bne cr6,0x828c3f3c
	if (!cr6.eq) goto loc_828C3F3C;
	// li r11,0
	r11.s64 = 0;
loc_828C3F3C:
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828c33a8
	sub_828C33A8(ctx, base);
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

__attribute__((alias("__imp__sub_828C3F70"))) PPC_WEAK_FUNC(sub_828C3F70);
PPC_FUNC_IMPL(__imp__sub_828C3F70) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// bne cr6,0x828c3f94
	if (!cr6.eq) goto loc_828C3F94;
	// li r11,0
	r11.s64 = 0;
loc_828C3F94:
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828c3470
	sub_828C3470(ctx, base);
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

__attribute__((alias("__imp__sub_828C3FC8"))) PPC_WEAK_FUNC(sub_828C3FC8);
PPC_FUNC_IMPL(__imp__sub_828C3FC8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// bne cr6,0x828c3fec
	if (!cr6.eq) goto loc_828C3FEC;
	// li r11,0
	r11.s64 = 0;
loc_828C3FEC:
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828c3538
	sub_828C3538(ctx, base);
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

__attribute__((alias("__imp__sub_828C4020"))) PPC_WEAK_FUNC(sub_828C4020);
PPC_FUNC_IMPL(__imp__sub_828C4020) {
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
	// beq cr6,0x828c404c
	if (cr6.eq) goto loc_828C404C;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x828c3088
	sub_828C3088(ctx, base);
	// b 0x828c4058
	goto loc_828C4058;
loc_828C404C:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r11,r11,15712
	r11.s64 = r11.s64 + 15712;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_828C4058:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C4068"))) PPC_WEAK_FUNC(sub_828C4068);
PPC_FUNC_IMPL(__imp__sub_828C4068) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r11,r11,-20508
	r11.s64 = r11.s64 + -20508;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// li r6,28
	ctx.r6.s64 = 28;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// bl 0x829651f8
	sub_829651F8(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// addi r11,r11,-10108
	r11.s64 = r11.s64 + -10108;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r10,r10,-10556
	ctx.r10.s64 = ctx.r10.s64 + -10556;
	// addi r9,r9,-10580
	ctx.r9.s64 = ctx.r9.s64 + -10580;
	// addi r11,r8,-10136
	r11.s64 = ctx.r8.s64 + -10136;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// li r30,0
	r30.s64 = 0;
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// stw r11,536(r31)
	PPC_STORE_U32(r31.u32 + 536, r11.u32);
	// addi r3,r31,968
	ctx.r3.s64 = r31.s64 + 968;
	// stw r30,912(r31)
	PPC_STORE_U32(r31.u32 + 912, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r30,916(r31)
	PPC_STORE_U32(r31.u32 + 916, r30.u32);
	// stw r30,920(r31)
	PPC_STORE_U32(r31.u32 + 920, r30.u32);
	// stw r30,924(r31)
	PPC_STORE_U32(r31.u32 + 924, r30.u32);
	// stw r30,928(r31)
	PPC_STORE_U32(r31.u32 + 928, r30.u32);
	// stw r30,932(r31)
	PPC_STORE_U32(r31.u32 + 932, r30.u32);
	// stw r30,936(r31)
	PPC_STORE_U32(r31.u32 + 936, r30.u32);
	// stw r30,940(r31)
	PPC_STORE_U32(r31.u32 + 940, r30.u32);
	// stw r30,944(r31)
	PPC_STORE_U32(r31.u32 + 944, r30.u32);
	// stw r30,948(r31)
	PPC_STORE_U32(r31.u32 + 948, r30.u32);
	// stw r30,952(r31)
	PPC_STORE_U32(r31.u32 + 952, r30.u32);
	// stw r30,956(r31)
	PPC_STORE_U32(r31.u32 + 956, r30.u32);
	// stw r30,960(r31)
	PPC_STORE_U32(r31.u32 + 960, r30.u32);
	// stw r30,964(r31)
	PPC_STORE_U32(r31.u32 + 964, r30.u32);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r3,r31,972
	ctx.r3.s64 = r31.s64 + 972;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// stw r30,976(r31)
	PPC_STORE_U32(r31.u32 + 976, r30.u32);
	// addi r3,r31,980
	ctx.r3.s64 = r31.s64 + 980;
	// bl 0x828c8580
	sub_828C8580(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_828C4140"))) PPC_WEAK_FUNC(sub_828C4140);
PPC_FUNC_IMPL(__imp__sub_828C4140) {
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
	// bl 0x828c3918
	sub_828C3918(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828c4170
	if (cr0.eq) goto loc_828C4170;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_828C4170:
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

__attribute__((alias("__imp__sub_828C4190"))) PPC_WEAK_FUNC(sub_828C4190);
PPC_FUNC_IMPL(__imp__sub_828C4190) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x829495e8
	sub_829495E8(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r28,r11,-8280
	r28.s64 = r11.s64 + -8280;
	// li r5,649
	ctx.r5.s64 = 649;
	// lfs f0,22412(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22412);
	f0.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828c41ec
	if (cr0.eq) goto loc_828C41EC;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82949618
	sub_82949618(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x828c41f0
	goto loc_828C41F0;
loc_828C41EC:
	// li r31,0
	r31.s64 = 0;
loc_828C41F0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82877bc0
	sub_82877BC0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r26,84(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x828c4248
	if (cr6.eq) goto loc_828C4248;
	// addi r11,r26,4
	r11.s64 = r26.s64 + 4;
loc_828C422C:
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
	// bne 0x828c422c
	if (!cr0.eq) goto loc_828C422C;
loc_828C4248:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82946780
	sub_82946780(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82947710
	sub_82947710(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r29,-32247
	r29.s64 = -2113339392;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f13,8260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8260);
	ctx.f13.f64 = double(temp.f32);
	// li r5,657
	ctx.r5.s64 = 657;
	// lfs f12,-17192(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17192);
	ctx.f12.f64 = double(temp.f32);
	// li r3,96
	ctx.r3.s64 = 96;
	// lfs f0,8256(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8256);
	f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828c42b0
	if (cr0.eq) goto loc_828C42B0;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x829481e8
	sub_829481E8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x828c42b4
	goto loc_828C42B4;
loc_828C42B0:
	// li r31,0
	r31.s64 = 0;
loc_828C42B4:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82878ab0
	sub_82878AB0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r27,84(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x828c430c
	if (cr6.eq) goto loc_828C430C;
	// addi r11,r27,4
	r11.s64 = r27.s64 + 4;
loc_828C42F0:
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
	// bne 0x828c42f0
	if (!cr0.eq) goto loc_828C42F0;
loc_828C430C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82946780
	sub_82946780(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82948b88
	sub_82948B88(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f0,8256(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8256);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,666
	ctx.r5.s64 = 666;
	// lfs f13,-11900(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -11900);
	ctx.f13.f64 = double(temp.f32);
	// li r3,64
	ctx.r3.s64 = 64;
	// lfs f0,-31000(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31000);
	f0.f64 = double(temp.f32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828c4374
	if (cr0.eq) goto loc_828C4374;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82948bb8
	sub_82948BB8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x828c4378
	goto loc_828C4378;
loc_828C4374:
	// li r31,0
	r31.s64 = 0;
loc_828C4378:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82877c88
	sub_82877C88(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x828c43d0
	if (cr6.eq) goto loc_828C43D0;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
loc_828C43B4:
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
	// bne 0x828c43b4
	if (!cr0.eq) goto loc_828C43B4;
loc_828C43D0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82946780
	sub_82946780(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828c43ec
	if (cr6.eq) goto loc_828C43EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C43EC:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x828c43fc
	if (cr6.eq) goto loc_828C43FC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C43FC:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x828c440c
	if (cr6.eq) goto loc_828C440C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C440C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_828C4418"))) PPC_WEAK_FUNC(sub_828C4418);
PPC_FUNC_IMPL(__imp__sub_828C4418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x829485e8
	sub_829485E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82adefd0
	sub_82ADEFD0(ctx, base);
	// bl 0x8248a1f8
	sub_8248A1F8(ctx, base);
	// li r11,16
	r11.s64 = 16;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// li r6,0
	ctx.r6.s64 = 0;
	// lvx128 v63,r3,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r8,-8280
	ctx.r4.s64 = ctx.r8.s64 + -8280;
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,682
	ctx.r5.s64 = 682;
	// lfs f0,2244(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2244);
	f0.f64 = double(temp.f32);
	// li r3,48
	ctx.r3.s64 = 48;
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828c4498
	if (cr0.eq) goto loc_828C4498;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82948660
	sub_82948660(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x828c449c
	goto loc_828C449C;
loc_828C4498:
	// li r31,0
	r31.s64 = 0;
loc_828C449C:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82878c40
	sub_82878C40(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x828c44f4
	if (cr6.eq) goto loc_828C44F4;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
loc_828C44D8:
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
	// bne 0x828c44d8
	if (!cr0.eq) goto loc_828C44D8;
loc_828C44F4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82946780
	sub_82946780(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828c4510
	if (cr6.eq) goto loc_828C4510;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C4510:
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

__attribute__((alias("__imp__sub_828C4528"))) PPC_WEAK_FUNC(sub_828C4528);
PPC_FUNC_IMPL(__imp__sub_828C4528) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,960(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 960);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828c45f4
	if (cr6.eq) goto loc_828C45F4;
	// addi r31,r3,16
	r31.s64 = ctx.r3.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x829650b8
	sub_829650B8(ctx, base);
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,16228(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16228);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x827fbb08
	sub_827FBB08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x829652b8
	sub_829652B8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c4588
	if (cr6.eq) goto loc_828C4588;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C4588:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,16620(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16620);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x829652c0
	sub_829652C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,16232(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16232);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827fbb08
	sub_827FBB08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x829652b8
	sub_829652B8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c45ec
	if (cr6.eq) goto loc_828C45EC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C45EC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_828C45F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C4608"))) PPC_WEAK_FUNC(sub_828C4608);
PPC_FUNC_IMPL(__imp__sub_828C4608) {
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
	// lwz r11,976(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 976);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828c46ac
	if (!cr6.eq) goto loc_828C46AC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8280c7c8
	sub_8280C7C8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq cr6,0x828c4668
	if (cr6.eq) goto loc_828C4668;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828C464C:
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
	// bne 0x828c464c
	if (!cr0.eq) goto loc_828C464C;
loc_828C4668:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x827f3078
	sub_827F3078(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c4688
	if (cr6.eq) goto loc_828C4688;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C4688:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r3,976(r31)
	PPC_STORE_U32(r31.u32 + 976, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828c46ac
	if (cr6.eq) goto loc_828C46AC;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C46AC:
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

__attribute__((alias("__imp__sub_828C46C0"))) PPC_WEAK_FUNC(sub_828C46C0);
PPC_FUNC_IMPL(__imp__sub_828C46C0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,924(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 924);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r30,920(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 920);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828c4700
	if (cr6.eq) goto loc_828C4700;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
loc_828C46E4:
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
	// bne 0x828c46e4
	if (!cr0.eq) goto loc_828C46E4;
loc_828C4700:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x828c473c
	if (cr6.eq) goto loc_828C473C;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x827f2e08
	sub_827F2E08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x829280f8
	sub_829280F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828c4734
	if (cr6.eq) goto loc_828C4734;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C4734:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x828c4750
	goto loc_828C4750;
loc_828C473C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828c474c
	if (cr6.eq) goto loc_828C474C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C474C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828C4750:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828C4758"))) PPC_WEAK_FUNC(sub_828C4758);
PPC_FUNC_IMPL(__imp__sub_828C4758) {
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
	// lis r11,-31955
	r11.s64 = -2094202880;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// addi r10,r11,15072
	ctx.r10.s64 = r11.s64 + 15072;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,15072(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 15072);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x828c4068
	sub_828C4068(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-9532
	r11.s64 = r11.s64 + -9532;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r10,r10,-9956
	ctx.r10.s64 = ctx.r10.s64 + -9956;
	// addi r9,r9,-9980
	ctx.r9.s64 = ctx.r9.s64 + -9980;
	// addi r11,r8,-10008
	r11.s64 = ctx.r8.s64 + -10008;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,536(r31)
	PPC_STORE_U32(r31.u32 + 536, r11.u32);
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

__attribute__((alias("__imp__sub_828C47D0"))) PPC_WEAK_FUNC(sub_828C47D0);
PPC_FUNC_IMPL(__imp__sub_828C47D0) {
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// addi r11,r11,-9532
	r11.s64 = r11.s64 + -9532;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r10,r10,-9956
	ctx.r10.s64 = ctx.r10.s64 + -9956;
	// addi r9,r9,-9980
	ctx.r9.s64 = ctx.r9.s64 + -9980;
	// addi r11,r8,-10008
	r11.s64 = ctx.r8.s64 + -10008;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,536(r31)
	PPC_STORE_U32(r31.u32 + 536, r11.u32);
	// bl 0x828c3918
	sub_828C3918(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828c4830
	if (cr0.eq) goto loc_828C4830;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_828C4830:
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

__attribute__((alias("__imp__sub_828C4850"))) PPC_WEAK_FUNC(sub_828C4850);
PPC_FUNC_IMPL(__imp__sub_828C4850) {
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
	// lis r11,-31955
	r11.s64 = -2094202880;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// addi r11,r11,15072
	r11.s64 = r11.s64 + 15072;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x828c4068
	sub_828C4068(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-8956
	r11.s64 = r11.s64 + -8956;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r10,r10,-9380
	ctx.r10.s64 = ctx.r10.s64 + -9380;
	// addi r9,r9,-9404
	ctx.r9.s64 = ctx.r9.s64 + -9404;
	// addi r11,r8,-9432
	r11.s64 = ctx.r8.s64 + -9432;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,536(r31)
	PPC_STORE_U32(r31.u32 + 536, r11.u32);
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

__attribute__((alias("__imp__sub_828C48C8"))) PPC_WEAK_FUNC(sub_828C48C8);
PPC_FUNC_IMPL(__imp__sub_828C48C8) {
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// addi r11,r11,-8956
	r11.s64 = r11.s64 + -8956;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r10,r10,-9380
	ctx.r10.s64 = ctx.r10.s64 + -9380;
	// addi r9,r9,-9404
	ctx.r9.s64 = ctx.r9.s64 + -9404;
	// addi r11,r8,-9432
	r11.s64 = ctx.r8.s64 + -9432;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,536(r31)
	PPC_STORE_U32(r31.u32 + 536, r11.u32);
	// bl 0x828c3918
	sub_828C3918(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828c4928
	if (cr0.eq) goto loc_828C4928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_828C4928:
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

__attribute__((alias("__imp__sub_828C4948"))) PPC_WEAK_FUNC(sub_828C4948);
PPC_FUNC_IMPL(__imp__sub_828C4948) {
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
	// lis r11,-31955
	r11.s64 = -2094202880;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// addi r11,r11,15072
	r11.s64 = r11.s64 + 15072;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x828c4068
	sub_828C4068(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-8380
	r11.s64 = r11.s64 + -8380;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r10,r10,-8804
	ctx.r10.s64 = ctx.r10.s64 + -8804;
	// addi r9,r9,-8828
	ctx.r9.s64 = ctx.r9.s64 + -8828;
	// addi r8,r8,-8856
	ctx.r8.s64 = ctx.r8.s64 + -8856;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// stw r8,536(r31)
	PPC_STORE_U32(r31.u32 + 536, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,1008(r31)
	PPC_STORE_U32(r31.u32 + 1008, r11.u32);
	// stw r11,1012(r31)
	PPC_STORE_U32(r31.u32 + 1012, r11.u32);
	// stb r11,1016(r31)
	PPC_STORE_U8(r31.u32 + 1016, r11.u8);
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

__attribute__((alias("__imp__sub_828C49D0"))) PPC_WEAK_FUNC(sub_828C49D0);
PPC_FUNC_IMPL(__imp__sub_828C49D0) {
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
	// bl 0x828c3e10
	sub_828C3E10(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828c4a00
	if (cr0.eq) goto loc_828C4A00;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_828C4A00:
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

__attribute__((alias("__imp__sub_828C4A20"))) PPC_WEAK_FUNC(sub_828C4A20);
PPC_FUNC_IMPL(__imp__sub_828C4A20) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 928);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c4a7c
	if (cr6.eq) goto loc_828C4A7C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r31,1008(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 1008);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828c3e98
	sub_828C3E98(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82965700
	sub_82965700(ctx, base);
loc_828C4A7C:
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

__attribute__((alias("__imp__sub_828C4A98"))) PPC_WEAK_FUNC(sub_828C4A98);
PPC_FUNC_IMPL(__imp__sub_828C4A98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lbz r11,1000(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1000);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x828c4acc
	if (cr0.eq) goto loc_828C4ACC;
	// addi r3,r31,-16
	ctx.r3.s64 = r31.s64 + -16;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828c4a20
	sub_828C4A20(ctx, base);
loc_828C4ACC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828c3110
	sub_828C3110(ctx, base);
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

__attribute__((alias("__imp__sub_828C4AF0"))) PPC_WEAK_FUNC(sub_828C4AF0);
PPC_FUNC_IMPL(__imp__sub_828C4AF0) {
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
	// bl 0x828c3600
	sub_828C3600(ctx, base);
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
	// beq cr6,0x828c4b48
	if (cr6.eq) goto loc_828C4B48;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C4B48:
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

__attribute__((alias("__imp__sub_828C4B60"))) PPC_WEAK_FUNC(sub_828C4B60);
PPC_FUNC_IMPL(__imp__sub_828C4B60) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r31,r29,944
	r31.s64 = r29.s64 + 944;
	// lwz r11,944(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 944);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828c4bcc
	if (cr6.eq) goto loc_828C4BCC;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8250e538
	sub_8250E538(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-192
	ctx.r3.s64 = r11.s64 + -192;
	// bne cr6,0x828c4ba4
	if (!cr6.eq) goto loc_828C4BA4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_828C4BA4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x827d92b8
	sub_827D92B8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// beq cr6,0x828c4bcc
	if (cr6.eq) goto loc_828C4BCC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C4BCC:
	// lwz r3,936(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 936);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c4bec
	if (cr6.eq) goto loc_828C4BEC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_828C4BEC:
	// lwz r11,960(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 960);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828c4c7c
	if (cr6.eq) goto loc_828C4C7C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825dd5c0
	sub_825DD5C0(ctx, base);
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
	// beq cr6,0x828c4c38
	if (cr6.eq) goto loc_828C4C38;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828C4C1C:
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
	// bne 0x828c4c1c
	if (!cr0.eq) goto loc_828C4C1C;
loc_828C4C38:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r6,960(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 960);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-8280
	ctx.r4.s64 = ctx.r10.s64 + -8280;
	// li r5,550
	ctx.r5.s64 = 550;
	// addi r3,r29,40
	ctx.r3.s64 = r29.s64 + 40;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c4c6c
	if (cr6.eq) goto loc_828C4C6C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C4C6C:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c4c7c
	if (cr6.eq) goto loc_828C4C7C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C4C7C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82965118
	sub_82965118(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_828C4C90"))) PPC_WEAK_FUNC(sub_828C4C90);
PPC_FUNC_IMPL(__imp__sub_828C4C90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// addi r12,r1,-64
	r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831b1438
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// li r29,0
	r29.s64 = 0;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r10,928(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 928);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x828c4e1c
	if (cr6.eq) goto loc_828C4E1C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r5,39
	ctx.r5.s64 = 39;
	// lfs f31,268(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 268);
	f31.f64 = double(temp.f32);
	// li r4,96
	ctx.r4.s64 = 96;
	// lfs f30,272(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 272);
	f30.f64 = double(temp.f32);
	// lfs f29,276(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 276);
	f29.f64 = double(temp.f32);
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,13920
	r11.s64 = r11.s64 + 13920;
	// addi r10,r10,30976
	ctx.r10.s64 = ctx.r10.s64 + 30976;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// li r7,96
	ctx.r7.s64 = 96;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// sth r7,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r7.u16);
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stvx128 v62,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f1,-22120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,-396(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -396);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82f270c8
	sub_82F270C8(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r11,-8280
	ctx.r4.s64 = r11.s64 + -8280;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,567
	ctx.r5.s64 = 567;
	// li r3,284
	ctx.r3.s64 = 284;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x828c4de8
	if (cr0.eq) goto loc_828C4DE8;
	// lwz r11,932(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 932);
	// lwz r10,928(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 928);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq cr6,0x828c4d94
	if (cr6.eq) goto loc_828C4D94;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828C4D78:
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
	// bne 0x828c4d78
	if (!cr0.eq) goto loc_828C4D78;
loc_828C4D94:
	// li r29,1
	r29.s64 = 1;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x828c4dac
	if (cr6.eq) goto loc_828C4DAC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822e9f20
	sub_822E9F20(ctx, base);
loc_828C4DAC:
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// addi r26,r1,88
	r26.s64 = ctx.r1.s64 + 88;
	// addi r25,r1,80
	r25.s64 = ctx.r1.s64 + 80;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// bl 0x827d00e0
	sub_827D00E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828c4dec
	goto loc_828C4DEC;
loc_828C4DE8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828C4DEC:
	// addi r3,r31,952
	ctx.r3.s64 = r31.s64 + 952;
	// bl 0x8280e368
	sub_8280E368(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828c4e0c
	if (cr0.eq) goto loc_828C4E0C;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c4e0c
	if (cr6.eq) goto loc_828C4E0C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C4E0C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x828c4e1c
	if (cr6.eq) goto loc_828C4E1C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_828C4E1C:
	// lwz r11,952(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 952);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828c4ecc
	if (cr6.eq) goto loc_828C4ECC;
	// lwz r11,956(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 956);
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// lwz r10,952(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 952);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x828c4e64
	if (cr6.eq) goto loc_828C4E64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828C4E48:
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
	// bne 0x828c4e48
	if (!cr0.eq) goto loc_828C4E48;
loc_828C4E64:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r30,r11,-4
	r30.s64 = r11.s64 + -4;
	// bne cr6,0x828c4e84
	if (!cr6.eq) goto loc_828C4E84;
	// li r30,0
	r30.s64 = 0;
loc_828C4E84:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r28,r1,80
	r28.s64 = ctx.r1.s64 + 80;
	// bl 0x82512d38
	sub_82512D38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x82510d20
	sub_82510D20(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 952);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// bl 0x827cf680
	sub_827CF680(ctx, base);
	// lwz r3,952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 952);
	// bl 0x827cfec0
	sub_827CFEC0(ctx, base);
loc_828C4ECC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-64
	r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831b1484
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_828C4EE0"))) PPC_WEAK_FUNC(sub_828C4EE0);
PPC_FUNC_IMPL(__imp__sub_828C4EE0) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-8280
	ctx.r4.s64 = r11.s64 + -8280;
	// li r5,585
	ctx.r5.s64 = 585;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r27,r11,21960
	r27.s64 = r11.s64 + 21960;
	// beq 0x828c4f58
	if (cr0.eq) goto loc_828C4F58;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r26,980
	ctx.r5.s64 = r26.s64 + 980;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r30,1
	r30.s64 = 1;
	// bl 0x825b16a8
	sub_825B16A8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x828c4f5c
	goto loc_828C4F5C;
loc_828C4F58:
	// li r31,0
	r31.s64 = 0;
loc_828C4F5C:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x824f7138
	sub_824F7138(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828c4f8c
	if (cr0.eq) goto loc_828C4F8C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_828C4F8C:
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lwz r28,88(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r30,0
	r30.s64 = 0;
	// addi r29,r11,-10848
	r29.s64 = r11.s64 + -10848;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_828C4FA0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825b1058
	sub_825B1058(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r11,r29,12
	r11.s64 = r29.s64 + 12;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x828c4fa0
	if (cr6.lt) goto loc_828C4FA0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lwz r31,92(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// beq cr6,0x828c5018
	if (cr6.eq) goto loc_828C5018;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
loc_828C4FFC:
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
	// bne 0x828c4ffc
	if (!cr0.eq) goto loc_828C4FFC;
loc_828C5018:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825a74a8
	sub_825A74A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828c5040
	if (cr6.eq) goto loc_828C5040;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C5040:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1184
	ctx.r4.s64 = r11.s64 + -1184;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r26,984
	ctx.r4.s64 = r26.s64 + 984;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f31,-24412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24412);
	f31.f64 = double(temp.f32);
	// lfs f30,2248(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2248);
	f30.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x825a8550
	sub_825A8550(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825a6b08
	sub_825A6B08(ctx, base);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1208
	ctx.r4.s64 = r11.s64 + -1208;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r26,988
	ctx.r4.s64 = r26.s64 + 988;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x825a8550
	sub_825A8550(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825a6b08
	sub_825A6B08(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1244
	ctx.r4.s64 = r11.s64 + -1244;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r26,992
	ctx.r4.s64 = r26.s64 + 992;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x825a8550
	sub_825A8550(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825a6b08
	sub_825A6B08(ctx, base);
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_828C5150"))) PPC_WEAK_FUNC(sub_828C5150);
PPC_FUNC_IMPL(__imp__sub_828C5150) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister f0{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b0c
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828c5314
	if (!cr6.eq) goto loc_828C5314;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	r11.s64 = -2093481984;
	// addi r30,r11,4352
	r30.s64 = r11.s64 + 4352;
	// lwz r11,4368(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4368);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x828c51a8
	if (!cr0.eq) goto loc_828C51A8;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r9,r9,30976
	ctx.r9.s64 = ctx.r9.s64 + 30976;
	// stw r11,4368(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4368, r11.u32);
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_828C51A8:
	// lis r9,-31944
	ctx.r9.s64 = -2093481984;
	// rlwinm. r8,r11,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r31,r9,4336
	r31.s64 = ctx.r9.s64 + 4336;
	// bne 0x828c51d0
	if (!cr0.eq) goto loc_828C51D0;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// addi r9,r9,18608
	ctx.r9.s64 = ctx.r9.s64 + 18608;
	// stw r11,4368(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4368, r11.u32);
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_828C51D0:
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r5,39
	ctx.r5.s64 = 39;
	// li r4,64
	ctx.r4.s64 = 64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r11,64
	r11.s64 = 64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f1,1636(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1636);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82f27c28
	sub_82F27C28(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-31946
	ctx.r8.s64 = -2093613056;
	// lfs f11,16(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lfs f13,-396(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -396);
	ctx.f13.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f12,-31000(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31000);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r7,-8280
	ctx.r4.s64 = ctx.r7.s64 + -8280;
	// lfs f0,2240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fmadds f13,f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r5,877
	ctx.r5.s64 = 877;
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r3,512
	ctx.r3.s64 = 512;
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r29,28912(r8)
	r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28912);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x828c52d0
	if (cr0.eq) goto loc_828C52D0;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822e9f20
	sub_822E9F20(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// addi r31,r26,56
	r31.s64 = r26.s64 + 56;
	// bne cr6,0x828c527c
	if (!cr6.eq) goto loc_828C527C;
	// li r31,0
	r31.s64 = 0;
loc_828C527C:
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r26,16
	ctx.r4.s64 = r26.s64 + 16;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r24,r11,29232
	r24.s64 = r11.s64 + 29232;
	// addi r23,r10,-15648
	r23.s64 = ctx.r10.s64 + -15648;
	// li r27,3
	r27.s64 = 3;
	// addi r22,r1,96
	r22.s64 = ctx.r1.s64 + 96;
	// addi r21,r1,80
	r21.s64 = ctx.r1.s64 + 80;
	// bl 0x82512d38
	sub_82512D38(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// bl 0x82aedcc8
	sub_82AEDCC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828c52d4
	goto loc_828C52D4;
loc_828C52D0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828C52D4:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82376d78
	sub_82376D78(ctx, base);
	// rlwinm. r11,r27,0,30,30
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828c52f0
	if (cr0.eq) goto loc_828C52F0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rlwinm r27,r27,0,31,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_828C52F0:
	// clrlwi. r11,r27,31
	r11.u64 = r27.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828c5308
	if (cr0.eq) goto loc_828C5308;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c5308
	if (cr6.eq) goto loc_828C5308;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_828C5308:
	// stw r29,600(r26)
	PPC_STORE_U32(r26.u32 + 600, r29.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_828C5314:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_828C5320"))) PPC_WEAK_FUNC(sub_828C5320);
PPC_FUNC_IMPL(__imp__sub_828C5320) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8290e848
	sub_8290E848(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x828c5418
	if (!cr6.gt) goto loc_828C5418;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828c4528
	sub_828C4528(ctx, base);
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,16624(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16624);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x829652c0
	sub_829652C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8286e0f0
	sub_8286E0F0(ctx, base);
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
	// beq cr6,0x828c53c8
	if (cr6.eq) goto loc_828C53C8;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828C53AC:
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
	// bne 0x828c53ac
	if (!cr0.eq) goto loc_828C53AC;
loc_828C53C8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r30,r1,88
	r30.s64 = ctx.r1.s64 + 88;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,-8280
	ctx.r4.s64 = ctx.r10.s64 + -8280;
	// li r5,929
	ctx.r5.s64 = 929;
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// lfs f1,-24412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24412);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c5408
	if (cr6.eq) goto loc_828C5408;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C5408:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c5418
	if (cr6.eq) goto loc_828C5418;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C5418:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828C5420"))) PPC_WEAK_FUNC(sub_828C5420);
PPC_FUNC_IMPL(__imp__sub_828C5420) {
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
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r25,0
	r25.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23007
	ctx.r4.s64 = r11.s64 + -23007;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828c46c0
	sub_828C46C0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r29,r30,16
	r29.s64 = r30.s64 + 16;
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// lfs f31,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// lis r26,-31954
	r26.s64 = -2094137344;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// beq 0x828c5558
	if (cr0.eq) goto loc_828C5558;
	// li r31,1
	r31.s64 = 1;
	// bl 0x827f2e08
	sub_827F2E08(ctx, base);
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// lwz r11,4720(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4720);
loc_828C5488:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// beq 0x828c54ac
	if (cr0.eq) goto loc_828C54AC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x828c5488
	if (cr6.eq) goto loc_828C5488;
loc_828C54AC:
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x828c550c
	if (!cr0.eq) goto loc_828C550C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x828c54d4
	if (!cr6.eq) goto loc_828C54D4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_828C54D4:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8250c5d0
	sub_8250C5D0(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// subf r11,r24,r3
	r11.s64 = ctx.r3.s64 - r24.s64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r24,r11,1
	r24.u64 = r11.u64 ^ 1;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828c550c
	if (cr0.eq) goto loc_828C550C;
	// li r31,0
	r31.s64 = 0;
loc_828C550C:
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// mr r11,r28
	r11.u64 = r28.u64;
	// lwz r10,4820(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4820);
loc_828C5518:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x828c553c
	if (cr0.eq) goto loc_828C553C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x828c5518
	if (cr6.eq) goto loc_828C5518;
loc_828C553C:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x828c5548
	if (!cr0.eq) goto loc_828C5548;
	// li r31,0
	r31.s64 = 0;
loc_828C5548:
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828c5574
	if (cr0.eq) goto loc_828C5574;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// b 0x828c556c
	goto loc_828C556C;
loc_828C5558:
	// bl 0x8290e848
	sub_8290E848(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x828c5574
	if (!cr6.gt) goto loc_828C5574;
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lwz r4,4660(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4660);
loc_828C556C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb598
	sub_82DFB598(ctx, base);
loc_828C5574:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb8c8
	sub_82DFB8C8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x828c56e4
	if (!cr0.eq) goto loc_828C56E4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82adefd0
	sub_82ADEFD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8291cc00
	sub_8291CC00(ctx, base);
	// li r11,48
	r11.s64 = 48;
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,224
	ctx.r10.s64 = 224;
	// li r9,80
	ctx.r9.s64 = 80;
	// li r8,208
	ctx.r8.s64 = 208;
	// lvx128 v63,r27,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r27.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r7,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lvx128 v63,r27,r9
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r27.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c55d0
	if (cr6.eq) goto loc_828C55D0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C55D0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ab21a8
	sub_82AB21A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825ecc88
	sub_825ECC88(ctx, base);
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
	// beq cr6,0x828c561c
	if (cr6.eq) goto loc_828C561C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828C5600:
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
	// bne 0x828c5600
	if (!cr0.eq) goto loc_828C5600;
loc_828C561C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r11,-8280
	ctx.r4.s64 = r11.s64 + -8280;
	// li r5,988
	ctx.r5.s64 = 988;
	// addi r3,r30,56
	ctx.r3.s64 = r30.s64 + 56;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c5658
	if (cr6.eq) goto loc_828C5658;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C5658:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c5668
	if (cr6.eq) goto loc_828C5668;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C5668:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x829161c0
	sub_829161C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8290e848
	sub_8290E848(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x828c5690
	if (!cr6.gt) goto loc_828C5690;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x828c56a4
	goto loc_828C56A4;
loc_828C5690:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,4720(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 4720);
	// li r25,1
	r25.s64 = 1;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_828C56A4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// clrlwi. r11,r25,31
	r11.u64 = r25.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828c56bc
	if (cr0.eq) goto loc_828C56BC;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_828C56BC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827f2cf0
	sub_827F2CF0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_828C56E4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_828C56F8"))) PPC_WEAK_FUNC(sub_828C56F8);
PPC_FUNC_IMPL(__imp__sub_828C56F8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,960(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 960);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828c57c4
	if (cr6.eq) goto loc_828C57C4;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// lfs f0,27976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 27976);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82ab21a8
	sub_82AB21A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8280e278
	sub_8280E278(ctx, base);
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
	// beq cr6,0x828c5778
	if (cr6.eq) goto loc_828C5778;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828C575C:
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
	// bne 0x828c575c
	if (!cr0.eq) goto loc_828C575C;
loc_828C5778:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r6,960(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 960);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r4,r10,-8280
	ctx.r4.s64 = ctx.r10.s64 + -8280;
	// li r5,1066
	ctx.r5.s64 = 1066;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c57ac
	if (cr6.eq) goto loc_828C57AC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C57AC:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c57bc
	if (cr6.eq) goto loc_828C57BC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C57BC:
	// li r11,0
	r11.s64 = 0;
	// stw r11,960(r31)
	PPC_STORE_U32(r31.u32 + 960, r11.u32);
loc_828C57C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ab21a8
	sub_82AB21A8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,-22120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x829126d8
	sub_829126D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8290e718
	sub_8290E718(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82513ed8
	sub_82513ED8(ctx, base);
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

__attribute__((alias("__imp__sub_828C5808"))) PPC_WEAK_FUNC(sub_828C5808);
PPC_FUNC_IMPL(__imp__sub_828C5808) {
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-8280
	ctx.r4.s64 = r11.s64 + -8280;
	// li r5,1136
	ctx.r5.s64 = 1136;
	// li r3,1008
	ctx.r3.s64 = 1008;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828c5854
	if (cr0.eq) goto loc_828C5854;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x828c4758
	sub_828C4758(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828c5858
	goto loc_828C5858;
loc_828C5854:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828C5858:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828c3f18
	sub_828C3F18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828C5870"))) PPC_WEAK_FUNC(sub_828C5870);
PPC_FUNC_IMPL(__imp__sub_828C5870) {
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-8280
	ctx.r4.s64 = r11.s64 + -8280;
	// li r5,1221
	ctx.r5.s64 = 1221;
	// li r3,1008
	ctx.r3.s64 = 1008;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828c58bc
	if (cr0.eq) goto loc_828C58BC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x828c4850
	sub_828C4850(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828c58c0
	goto loc_828C58C0;
loc_828C58BC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828C58C0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828c3f70
	sub_828C3F70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828C58D8"))) PPC_WEAK_FUNC(sub_828C58D8);
PPC_FUNC_IMPL(__imp__sub_828C58D8) {
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-8280
	ctx.r4.s64 = r11.s64 + -8280;
	// li r5,1309
	ctx.r5.s64 = 1309;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828c5924
	if (cr0.eq) goto loc_828C5924;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x828c4948
	sub_828C4948(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828c5928
	goto loc_828C5928;
loc_828C5924:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828C5928:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828c3fc8
	sub_828C3FC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828C5940"))) PPC_WEAK_FUNC(sub_828C5940);
PPC_FUNC_IMPL(__imp__sub_828C5940) {
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
	// bl 0x82965478
	sub_82965478(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8291cc00
	sub_8291CC00(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828c59b0
	if (cr6.eq) goto loc_828C59B0;
	// lwz r11,244(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 244);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r8,-31946
	ctx.r8.s64 = -2093613056;
	// stw r11,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, r11.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,248(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 248);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, r11.u32);
	// lwz r11,-28956(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28956);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, r11.u32);
	// lwz r11,28920(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28920);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_828C59B0:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c59c0
	if (cr6.eq) goto loc_828C59C0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C59C0:
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

__attribute__((alias("__imp__sub_828C59E0"))) PPC_WEAK_FUNC(sub_828C59E0);
PPC_FUNC_IMPL(__imp__sub_828C59E0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,1008(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1008);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828c5a70
	if (cr6.eq) goto loc_828C5A70;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23007
	ctx.r4.s64 = r11.s64 + -23007;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r31,r30,16
	r31.s64 = r30.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82adefd0
	sub_82ADEFD0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,152(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r31,1008(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 1008);
	// bl 0x82adefd0
	sub_82ADEFD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x828c5940
	sub_828C5940(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82965388
	sub_82965388(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c5a70
	if (cr6.eq) goto loc_828C5A70;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C5A70:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828c31a8
	sub_828C31A8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,1016(r30)
	PPC_STORE_U8(r30.u32 + 1016, r11.u8);
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

__attribute__((alias("__imp__sub_828C5A98"))) PPC_WEAK_FUNC(sub_828C5A98);
PPC_FUNC_IMPL(__imp__sub_828C5A98) {
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
	// beq 0x828c5aec
	if (cr0.eq) goto loc_828C5AEC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31959
	r11.s64 = -2094465024;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,29452
	ctx.r3.s64 = r11.s64 + 29452;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828c5aec
	if (cr0.eq) goto loc_828C5AEC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-56
	ctx.r3.s64 = r30.s64 + -56;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_828C5AE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828c5cf4
	goto loc_828C5CF4;
loc_828C5AEC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x828c5ce4
	if (cr6.eq) goto loc_828C5CE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31959
	r11.s64 = -2094465024;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,29404
	ctx.r3.s64 = r11.s64 + 29404;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828c5b24
	if (cr0.eq) goto loc_828C5B24;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-56
	ctx.r3.s64 = r30.s64 + -56;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// b 0x828c5ae4
	goto loc_828C5AE4;
loc_828C5B24:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x828c5ce4
	if (cr6.eq) goto loc_828C5CE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,25580
	ctx.r3.s64 = r11.s64 + 25580;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828c5b5c
	if (cr0.eq) goto loc_828C5B5C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-56
	ctx.r3.s64 = r30.s64 + -56;
	// bl 0x828c5320
	sub_828C5320(ctx, base);
	// b 0x828c5ae4
	goto loc_828C5AE4;
loc_828C5B5C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x828c5ce4
	if (cr6.eq) goto loc_828C5CE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31961
	r11.s64 = -2094596096;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,16268
	ctx.r3.s64 = r11.s64 + 16268;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828c5b94
	if (cr0.eq) goto loc_828C5B94;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-56
	ctx.r3.s64 = r30.s64 + -56;
	// bl 0x828c5420
	sub_828C5420(ctx, base);
	// b 0x828c5ae4
	goto loc_828C5AE4;
loc_828C5B94:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x828c5ce4
	if (cr6.eq) goto loc_828C5CE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,25540
	ctx.r3.s64 = r11.s64 + 25540;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828c5bcc
	if (cr0.eq) goto loc_828C5BCC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-56
	ctx.r3.s64 = r30.s64 + -56;
	// bl 0x828c2da8
	sub_828C2DA8(ctx, base);
	// b 0x828c5ae4
	goto loc_828C5AE4;
loc_828C5BCC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x828c5ce4
	if (cr6.eq) goto loc_828C5CE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,16476
	ctx.r3.s64 = r11.s64 + 16476;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828c5c04
	if (cr0.eq) goto loc_828C5C04;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-56
	ctx.r3.s64 = r30.s64 + -56;
	// bl 0x828c3c48
	sub_828C3C48(ctx, base);
	// b 0x828c5ae4
	goto loc_828C5AE4;
loc_828C5C04:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x828c5ce4
	if (cr6.eq) goto loc_828C5CE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31960
	r11.s64 = -2094530560;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,9644
	ctx.r3.s64 = r11.s64 + 9644;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828c5c3c
	if (cr0.eq) goto loc_828C5C3C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-56
	ctx.r3.s64 = r30.s64 + -56;
	// bl 0x828c3d10
	sub_828C3D10(ctx, base);
	// b 0x828c5ae4
	goto loc_828C5AE4;
loc_828C5C3C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x828c5ce4
	if (cr6.eq) goto loc_828C5CE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31960
	r11.s64 = -2094530560;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,10632
	ctx.r3.s64 = r11.s64 + 10632;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828c5c74
	if (cr0.eq) goto loc_828C5C74;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-56
	ctx.r3.s64 = r30.s64 + -56;
	// bl 0x828c3da0
	sub_828C3DA0(ctx, base);
	// b 0x828c5ae4
	goto loc_828C5AE4;
loc_828C5C74:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x828c5ce4
	if (cr6.eq) goto loc_828C5CE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31960
	r11.s64 = -2094530560;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,1228
	ctx.r3.s64 = r11.s64 + 1228;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828c5cac
	if (cr0.eq) goto loc_828C5CAC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-56
	ctx.r3.s64 = r30.s64 + -56;
	// bl 0x828c3278
	sub_828C3278(ctx, base);
	// b 0x828c5ae4
	goto loc_828C5AE4;
loc_828C5CAC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x828c5ce4
	if (cr6.eq) goto loc_828C5CE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31960
	r11.s64 = -2094530560;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,1284
	ctx.r3.s64 = r11.s64 + 1284;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828c5ce4
	if (cr0.eq) goto loc_828C5CE4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-56
	ctx.r3.s64 = r30.s64 + -56;
	// bl 0x828c32f8
	sub_828C32F8(ctx, base);
	// b 0x828c5ae4
	goto loc_828C5AE4;
loc_828C5CE4:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82964e38
	sub_82964E38(ctx, base);
loc_828C5CF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_828C5D00"))) PPC_WEAK_FUNC(sub_828C5D00);
PPC_FUNC_IMPL(__imp__sub_828C5D00) {
	PPC_FUNC_PROLOGUE();
	// b 0x828c5a98
	sub_828C5A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C5D08"))) PPC_WEAK_FUNC(sub_828C5D08);
PPC_FUNC_IMPL(__imp__sub_828C5D08) {
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
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	r11.s64 = -2093481984;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,4372
	r31.s64 = r11.s64 + 4372;
	// lwz r11,4380(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4380);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x828c5d50
	if (!cr0.eq) goto loc_828C5D50;
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// lis r8,-32116
	ctx.r8.s64 = -2104754176;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r9,r9,-18024
	ctx.r9.s64 = ctx.r9.s64 + -18024;
	// addi r8,r8,14024
	ctx.r8.s64 = ctx.r8.s64 + 14024;
	// stw r11,4380(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4380, r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
loc_828C5D50:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r29,0
	r29.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r30,8
	ctx.r5.s64 = r30.s64 + 8;
	// stb r29,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r29.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x828f8138
	sub_828F8138(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828c5d7c
	if (cr0.eq) goto loc_828C5D7C;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// b 0x828c5d80
	goto loc_828C5D80;
loc_828C5D7C:
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
loc_828C5D80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828C5D88"))) PPC_WEAK_FUNC(sub_828C5D88);
PPC_FUNC_IMPL(__imp__sub_828C5D88) {
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
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	r11.s64 = -2093481984;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,4384
	r31.s64 = r11.s64 + 4384;
	// lwz r11,4392(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4392);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x828c5dd0
	if (!cr0.eq) goto loc_828C5DD0;
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// lis r8,-32116
	ctx.r8.s64 = -2104754176;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r9,r9,-18024
	ctx.r9.s64 = ctx.r9.s64 + -18024;
	// addi r8,r8,14096
	ctx.r8.s64 = ctx.r8.s64 + 14096;
	// stw r11,4392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4392, r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
loc_828C5DD0:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r29,0
	r29.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r30,8
	ctx.r5.s64 = r30.s64 + 8;
	// stb r29,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r29.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x828f8138
	sub_828F8138(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828c5dfc
	if (cr0.eq) goto loc_828C5DFC;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// b 0x828c5e00
	goto loc_828C5E00;
loc_828C5DFC:
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
loc_828C5E00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828C5E08"))) PPC_WEAK_FUNC(sub_828C5E08);
PPC_FUNC_IMPL(__imp__sub_828C5E08) {
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
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	r11.s64 = -2093481984;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,4396
	r31.s64 = r11.s64 + 4396;
	// lwz r11,4404(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4404);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x828c5e50
	if (!cr0.eq) goto loc_828C5E50;
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// lis r8,-32116
	ctx.r8.s64 = -2104754176;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r9,r9,-18024
	ctx.r9.s64 = ctx.r9.s64 + -18024;
	// addi r8,r8,14168
	ctx.r8.s64 = ctx.r8.s64 + 14168;
	// stw r11,4404(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4404, r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
loc_828C5E50:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r29,0
	r29.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r30,8
	ctx.r5.s64 = r30.s64 + 8;
	// stb r29,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r29.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x828f8138
	sub_828F8138(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828c5e7c
	if (cr0.eq) goto loc_828C5E7C;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// b 0x828c5e80
	goto loc_828C5E80;
loc_828C5E7C:
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
loc_828C5E80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828C5E88"))) PPC_WEAK_FUNC(sub_828C5E88);
PPC_FUNC_IMPL(__imp__sub_828C5E88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r29,r11,-8280
	r29.s64 = r11.s64 + -8280;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1122
	ctx.r5.s64 = 1122;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,1008
	ctx.r3.s64 = 1008;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828c5edc
	if (cr0.eq) goto loc_828C5EDC;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r5,r11,-15648
	ctx.r5.s64 = r11.s64 + -15648;
	// addi r4,r10,29232
	ctx.r4.s64 = ctx.r10.s64 + 29232;
	// bl 0x828c4758
	sub_828C4758(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x828c5ee0
	goto loc_828C5EE0;
loc_828C5EDC:
	// li r31,0
	r31.s64 = 0;
loc_828C5EE0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x828c33a8
	sub_828C33A8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// lfs f31,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// lfs f0,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// beq cr6,0x828c5f58
	if (cr6.eq) goto loc_828C5F58;
	// addi r11,r28,4
	r11.s64 = r28.s64 + 4;
loc_828C5F3C:
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
	// bne 0x828c5f3c
	if (!cr0.eq) goto loc_828C5F3C;
loc_828C5F58:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
	// bne cr6,0x828c5f68
	if (!cr6.eq) goto loc_828C5F68;
	// li r11,0
	r11.s64 = 0;
loc_828C5F68:
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// beq cr6,0x828c5f98
	if (cr6.eq) goto loc_828C5F98;
	// addi r11,r28,4
	r11.s64 = r28.s64 + 4;
loc_828C5F7C:
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
	// bne 0x828c5f7c
	if (!cr0.eq) goto loc_828C5F7C;
loc_828C5F98:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f1,-31184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31184);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e85988
	sub_82E85988(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8279e710
	sub_8279E710(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r31,r30,16
	r31.s64 = r30.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,336(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,176(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,336(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,180(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1128
	ctx.r5.s64 = 1128;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828c6030
	if (cr0.eq) goto loc_828C6030;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x827a0e48
	sub_827A0E48(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x828c6034
	goto loc_828C6034;
loc_828C6030:
	// li r31,0
	r31.s64 = 0;
loc_828C6034:
	// stw r31,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r31.u32);
	// addi r30,r27,4
	r30.s64 = r27.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8259d3b0
	sub_8259D3B0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c6068
	if (cr6.eq) goto loc_828C6068;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C6068:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c6078
	if (cr6.eq) goto loc_828C6078;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C6078:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x828c6088
	if (cr6.eq) goto loc_828C6088;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C6088:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_828C6098"))) PPC_WEAK_FUNC(sub_828C6098);
PPC_FUNC_IMPL(__imp__sub_828C6098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r29,r11,-8280
	r29.s64 = r11.s64 + -8280;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1207
	ctx.r5.s64 = 1207;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,1008
	ctx.r3.s64 = 1008;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828c60ec
	if (cr0.eq) goto loc_828C60EC;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r5,r11,-15648
	ctx.r5.s64 = r11.s64 + -15648;
	// addi r4,r10,29232
	ctx.r4.s64 = ctx.r10.s64 + 29232;
	// bl 0x828c4850
	sub_828C4850(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x828c60f0
	goto loc_828C60F0;
loc_828C60EC:
	// li r31,0
	r31.s64 = 0;
loc_828C60F0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x828c3470
	sub_828C3470(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// lfs f31,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// lfs f0,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// beq cr6,0x828c6168
	if (cr6.eq) goto loc_828C6168;
	// addi r11,r28,4
	r11.s64 = r28.s64 + 4;
loc_828C614C:
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
	// bne 0x828c614c
	if (!cr0.eq) goto loc_828C614C;
loc_828C6168:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
	// bne cr6,0x828c6178
	if (!cr6.eq) goto loc_828C6178;
	// li r11,0
	r11.s64 = 0;
loc_828C6178:
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// beq cr6,0x828c61a8
	if (cr6.eq) goto loc_828C61A8;
	// addi r11,r28,4
	r11.s64 = r28.s64 + 4;
loc_828C618C:
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
	// bne 0x828c618c
	if (!cr0.eq) goto loc_828C618C;
loc_828C61A8:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f1,-31184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31184);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e85988
	sub_82E85988(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8279e710
	sub_8279E710(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r31,r30,16
	r31.s64 = r30.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,336(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,176(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,336(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,180(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1213
	ctx.r5.s64 = 1213;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828c6240
	if (cr0.eq) goto loc_828C6240;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x827a0e48
	sub_827A0E48(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x828c6244
	goto loc_828C6244;
loc_828C6240:
	// li r31,0
	r31.s64 = 0;
loc_828C6244:
	// stw r31,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r31.u32);
	// addi r30,r27,4
	r30.s64 = r27.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8259d3b0
	sub_8259D3B0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c6278
	if (cr6.eq) goto loc_828C6278;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C6278:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c6288
	if (cr6.eq) goto loc_828C6288;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C6288:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x828c6298
	if (cr6.eq) goto loc_828C6298;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C6298:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_828C62A8"))) PPC_WEAK_FUNC(sub_828C62A8);
PPC_FUNC_IMPL(__imp__sub_828C62A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r29,r11,-8280
	r29.s64 = r11.s64 + -8280;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1295
	ctx.r5.s64 = 1295;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828c62fc
	if (cr0.eq) goto loc_828C62FC;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r5,r11,-15648
	ctx.r5.s64 = r11.s64 + -15648;
	// addi r4,r10,29232
	ctx.r4.s64 = ctx.r10.s64 + 29232;
	// bl 0x828c4948
	sub_828C4948(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x828c6300
	goto loc_828C6300;
loc_828C62FC:
	// li r31,0
	r31.s64 = 0;
loc_828C6300:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x828c3538
	sub_828C3538(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// lfs f31,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// lfs f0,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// beq cr6,0x828c6378
	if (cr6.eq) goto loc_828C6378;
	// addi r11,r28,4
	r11.s64 = r28.s64 + 4;
loc_828C635C:
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
	// bne 0x828c635c
	if (!cr0.eq) goto loc_828C635C;
loc_828C6378:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
	// bne cr6,0x828c6388
	if (!cr6.eq) goto loc_828C6388;
	// li r11,0
	r11.s64 = 0;
loc_828C6388:
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// beq cr6,0x828c63b8
	if (cr6.eq) goto loc_828C63B8;
	// addi r11,r28,4
	r11.s64 = r28.s64 + 4;
loc_828C639C:
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
	// bne 0x828c639c
	if (!cr0.eq) goto loc_828C639C;
loc_828C63B8:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f1,-31184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31184);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e85988
	sub_82E85988(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8279e710
	sub_8279E710(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r31,r30,16
	r31.s64 = r30.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,336(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,176(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,336(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,180(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1301
	ctx.r5.s64 = 1301;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828c6450
	if (cr0.eq) goto loc_828C6450;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x827a0e48
	sub_827A0E48(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x828c6454
	goto loc_828C6454;
loc_828C6450:
	// li r31,0
	r31.s64 = 0;
loc_828C6454:
	// stw r31,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r31.u32);
	// addi r30,r27,4
	r30.s64 = r27.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8259d3b0
	sub_8259D3B0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c6488
	if (cr6.eq) goto loc_828C6488;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C6488:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c6498
	if (cr6.eq) goto loc_828C6498;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C6498:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x828c64a8
	if (cr6.eq) goto loc_828C64A8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C64A8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_828C64B8"))) PPC_WEAK_FUNC(sub_828C64B8);
PPC_FUNC_IMPL(__imp__sub_828C64B8) {
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
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	r11.s64 = -2093481984;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,4408
	r31.s64 = r11.s64 + 4408;
	// lwz r11,4416(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4416);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x828c6500
	if (!cr0.eq) goto loc_828C6500;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// lis r8,-32116
	ctx.r8.s64 = -2104754176;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r9,r9,6712
	ctx.r9.s64 = ctx.r9.s64 + 6712;
	// addi r8,r8,16416
	ctx.r8.s64 = ctx.r8.s64 + 16416;
	// stw r11,4416(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4416, r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
loc_828C6500:
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
	// beq 0x828c652c
	if (cr0.eq) goto loc_828C652C;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// b 0x828c6530
	goto loc_828C6530;
loc_828C652C:
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
loc_828C6530:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828C6538"))) PPC_WEAK_FUNC(sub_828C6538);
PPC_FUNC_IMPL(__imp__sub_828C6538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af0
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-2224(r1)
	ea = -2224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// stw r4,2252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2252, ctx.r4.u32);
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r20,2260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2260, r20.u32);
	// stw r21,2268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2268, r21.u32);
	// bl 0x82964d30
	sub_82964D30(ctx, base);
	// addi r5,r27,952
	ctx.r5.s64 = r27.s64 + 952;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82916048
	sub_82916048(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82916308
	sub_82916308(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828c6594
	if (cr0.eq) goto loc_828C6594;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82513ed8
	sub_82513ED8(ctx, base);
	// b 0x828c8088
	goto loc_828C8088;
loc_828C6594:
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r11,20
	r11.s64 = 20;
	// li r5,39
	ctx.r5.s64 = 39;
	// li r4,96
	ctx.r4.s64 = 96;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r10,r11,30976
	ctx.r10.s64 = r11.s64 + 30976;
	// addi r11,r9,13360
	r11.s64 = ctx.r9.s64 + 13360;
	// addi r9,r1,1824
	ctx.r9.s64 = ctx.r1.s64 + 1824;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r8,r1,1808
	ctx.r8.s64 = ctx.r1.s64 + 1808;
	// li r7,96
	ctx.r7.s64 = 96;
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// sth r7,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r7.u16);
	// stvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-31949
	r11.s64 = -2093809664;
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,1824
	ctx.r5.s64 = ctx.r1.s64 + 1824;
	// addi r4,r1,1808
	ctx.r4.s64 = ctx.r1.s64 + 1808;
	// lfs f1,27764(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27764);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,-396(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -396);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82f270c8
	sub_82F270C8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r31.u32);
	// beq 0x828c6614
	if (cr0.eq) goto loc_828C6614;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e9f20
	sub_822E9F20(ctx, base);
loc_828C6614:
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7788
	ctx.r4.s64 = r11.s64 + -7788;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r6,28928(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 28928);
	// bl 0x825169f8
	sub_825169F8(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828c6658
	if (cr6.eq) goto loc_828C6658;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_828C6658:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8290e8a0
	sub_8290E8A0(ctx, base);
	// li r4,8210
	ctx.r4.s64 = 8210;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82491978
	sub_82491978(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828c6680
	if (cr6.eq) goto loc_828C6680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_828C6680:
	// addi r3,r27,-16
	ctx.r3.s64 = r27.s64 + -16;
	// addi r4,r27,468
	ctx.r4.s64 = r27.s64 + 468;
	// bl 0x828c5150
	sub_828C5150(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-10808
	r11.s64 = r11.s64 + -10808;
	// addi r4,r11,-28
	ctx.r4.s64 = r11.s64 + -28;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r21)
	ctx.r4.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// bl 0x829176e0
	sub_829176E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f1,-24388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24388);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8290f4d8
	sub_8290F4D8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x822efac8
	sub_822EFAC8(ctx, base);
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,260(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r29.u32);
	// beq cr6,0x828c66f4
	if (cr6.eq) goto loc_828C66F4;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C66F4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// li r31,0
	r31.s64 = 0;
	// addi r14,r11,-8280
	r14.s64 = r11.s64 + -8280;
	// li r28,1
	r28.s64 = 1;
	// lfs f30,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f30.f64 = double(temp.f32);
	// lis r30,-32256
	r30.s64 = -2113929216;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r14,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r14.u32);
	// beq cr6,0x828c7210
	if (cr6.eq) goto loc_828C7210;
	// lis r25,-31954
	r25.s64 = -2094137344;
	// lfs f0,2244(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2244);
	f0.f64 = double(temp.f32);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stfs f0,280(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f30,288(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// addi r29,r11,-7800
	r29.s64 = r11.s64 + -7800;
	// stw r31,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, r31.u32);
	// stb r31,300(r1)
	PPC_STORE_U8(ctx.r1.u32 + 300, r31.u8);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r11,-1288(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -1288);
	// stw r29,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, r29.u32);
	// lfs f31,-24780(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24780);
	f31.f64 = double(temp.f32);
	// stfs f31,292(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f31,296(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stw r11,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r26,-31954
	r26.s64 = -2094137344;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lfs f0,2244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,328(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stw r31,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, r31.u32);
	// addi r23,r11,-7812
	r23.s64 = r11.s64 + -7812;
	// stfs f30,336(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stfs f31,340(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stb r31,348(r1)
	PPC_STORE_U8(ctx.r1.u32 + 348, r31.u8);
	// stfs f31,344(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// stw r23,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, r23.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// lwz r11,-1284(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -1284);
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r24,-31954
	r24.s64 = -2094137344;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lfs f0,2244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,376(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// stw r31,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, r31.u32);
	// addi r22,r11,-7828
	r22.s64 = r11.s64 + -7828;
	// stfs f30,384(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// stfs f31,388(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// stb r31,396(r1)
	PPC_STORE_U8(ctx.r1.u32 + 396, r31.u8);
	// stfs f31,392(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// stw r22,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, r22.u32);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// lwz r11,-1268(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + -1268);
	// stw r11,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lfs f0,2244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,424(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// stw r31,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, r31.u32);
	// addi r10,r10,-7840
	ctx.r10.s64 = ctx.r10.s64 + -7840;
	// stfs f30,432(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// stfs f31,436(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 436, temp.u32);
	// stb r31,444(r1)
	PPC_STORE_U8(ctx.r1.u32 + 444, r31.u8);
	// stfs f31,440(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 440, temp.u32);
	// stw r10,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r10.u32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// lwz r11,-1148(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1148);
	// stw r11,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,456
	ctx.r3.s64 = ctx.r1.s64 + 456;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lfs f0,2244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r28,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, r28.u32);
	// stfs f0,472(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 472, temp.u32);
	// stw r23,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, r23.u32);
	// stfs f30,480(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 480, temp.u32);
	// stb r31,492(r1)
	PPC_STORE_U8(ctx.r1.u32 + 492, r31.u8);
	// stfs f31,484(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 484, temp.u32);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// stfs f31,488(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 488, temp.u32);
	// lwz r11,16180(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16180);
	// stw r11,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,504
	ctx.r3.s64 = ctx.r1.s64 + 504;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lfs f0,2244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,520(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 520, temp.u32);
	// stw r28,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, r28.u32);
	// addi r10,r10,-7856
	ctx.r10.s64 = ctx.r10.s64 + -7856;
	// stfs f30,528(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 528, temp.u32);
	// stfs f31,532(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 532, temp.u32);
	// stb r31,540(r1)
	PPC_STORE_U8(ctx.r1.u32 + 540, r31.u8);
	// stfs f31,536(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 536, temp.u32);
	// stw r10,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r10.u32);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// lwz r11,16184(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16184);
	// stw r11,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,552
	ctx.r3.s64 = ctx.r1.s64 + 552;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lfs f0,2244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,568(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 568, temp.u32);
	// stw r28,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, r28.u32);
	// addi r10,r10,-7872
	ctx.r10.s64 = ctx.r10.s64 + -7872;
	// stfs f30,576(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 576, temp.u32);
	// stfs f31,580(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 580, temp.u32);
	// stb r31,588(r1)
	PPC_STORE_U8(ctx.r1.u32 + 588, r31.u8);
	// stfs f31,584(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 584, temp.u32);
	// stw r10,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r10.u32);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// lwz r11,16188(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16188);
	// stw r11,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,600
	ctx.r3.s64 = ctx.r1.s64 + 600;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lfs f0,2244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,616(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 616, temp.u32);
	// stw r28,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, r28.u32);
	// addi r10,r10,-7888
	ctx.r10.s64 = ctx.r10.s64 + -7888;
	// stfs f30,624(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 624, temp.u32);
	// stfs f31,628(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 628, temp.u32);
	// stb r31,636(r1)
	PPC_STORE_U8(ctx.r1.u32 + 636, r31.u8);
	// stfs f31,632(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 632, temp.u32);
	// stw r10,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r10.u32);
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// lwz r11,16192(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16192);
	// stw r11,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,648
	ctx.r3.s64 = ctx.r1.s64 + 648;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lfs f0,2244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,664(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 664, temp.u32);
	// stw r28,668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 668, r28.u32);
	// addi r10,r10,-7904
	ctx.r10.s64 = ctx.r10.s64 + -7904;
	// stfs f30,672(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 672, temp.u32);
	// stfs f31,676(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 676, temp.u32);
	// stb r31,684(r1)
	PPC_STORE_U8(ctx.r1.u32 + 684, r31.u8);
	// stfs f31,680(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 680, temp.u32);
	// stw r10,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r10.u32);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// lwz r11,16196(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16196);
	// stw r11,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,696
	ctx.r3.s64 = ctx.r1.s64 + 696;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lfs f0,2244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,712(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 712, temp.u32);
	// addi r9,r11,-7928
	ctx.r9.s64 = r11.s64 + -7928;
	// stfs f30,720(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 720, temp.u32);
	// stfs f31,724(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 724, temp.u32);
	// stfs f31,728(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 728, temp.u32);
	// lwz r11,16200(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16200);
	// stw r28,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, r28.u32);
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// stw r9,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r9.u32);
	// stb r31,732(r1)
	PPC_STORE_U8(ctx.r1.u32 + 732, r31.u8);
	// stw r11,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,744
	ctx.r3.s64 = ctx.r1.s64 + 744;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lfs f0,2244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,760(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 760, temp.u32);
	// stw r28,764(r1)
	PPC_STORE_U32(ctx.r1.u32 + 764, r28.u32);
	// addi r10,r10,-7952
	ctx.r10.s64 = ctx.r10.s64 + -7952;
	// stfs f30,768(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 768, temp.u32);
	// stfs f31,772(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 772, temp.u32);
	// stb r31,780(r1)
	PPC_STORE_U8(ctx.r1.u32 + 780, r31.u8);
	// stfs f31,776(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 776, temp.u32);
	// stw r10,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r10.u32);
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// lwz r11,16204(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16204);
	// stw r11,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,792
	ctx.r3.s64 = ctx.r1.s64 + 792;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lfs f0,2244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,808(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 808, temp.u32);
	// stw r28,812(r1)
	PPC_STORE_U32(ctx.r1.u32 + 812, r28.u32);
	// addi r10,r10,-7976
	ctx.r10.s64 = ctx.r10.s64 + -7976;
	// stfs f30,816(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 816, temp.u32);
	// stfs f31,820(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 820, temp.u32);
	// stb r31,828(r1)
	PPC_STORE_U8(ctx.r1.u32 + 828, r31.u8);
	// stfs f31,824(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 824, temp.u32);
	// stw r10,804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 804, ctx.r10.u32);
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// lwz r11,16208(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16208);
	// stw r11,800(r1)
	PPC_STORE_U32(ctx.r1.u32 + 800, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,840
	ctx.r3.s64 = ctx.r1.s64 + 840;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r23,-31955
	r23.s64 = -2094202880;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lfs f0,2244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,856(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 856, temp.u32);
	// stw r28,860(r1)
	PPC_STORE_U32(ctx.r1.u32 + 860, r28.u32);
	// addi r10,r11,-7992
	ctx.r10.s64 = r11.s64 + -7992;
	// stfs f30,864(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 864, temp.u32);
	// stfs f31,868(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 868, temp.u32);
	// stb r31,876(r1)
	PPC_STORE_U8(ctx.r1.u32 + 876, r31.u8);
	// stfs f31,872(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 872, temp.u32);
	// stw r10,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r10.u32);
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// lwz r11,16212(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 16212);
	// stw r11,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,888
	ctx.r3.s64 = ctx.r1.s64 + 888;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lfs f0,2244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,904(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 904, temp.u32);
	// stw r28,908(r1)
	PPC_STORE_U32(ctx.r1.u32 + 908, r28.u32);
	// addi r10,r10,-8008
	ctx.r10.s64 = ctx.r10.s64 + -8008;
	// stfs f30,912(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 912, temp.u32);
	// stfs f31,916(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 916, temp.u32);
	// stb r31,924(r1)
	PPC_STORE_U8(ctx.r1.u32 + 924, r31.u8);
	// stfs f31,920(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 920, temp.u32);
	// stw r10,900(r1)
	PPC_STORE_U32(ctx.r1.u32 + 900, ctx.r10.u32);
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// lwz r11,16216(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16216);
	// stw r11,896(r1)
	PPC_STORE_U32(ctx.r1.u32 + 896, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,936
	ctx.r3.s64 = ctx.r1.s64 + 936;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,952(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 952, temp.u32);
	// stfs f30,960(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 960, temp.u32);
	// lwz r11,-1196(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1196);
	// stfs f31,964(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 964, temp.u32);
	// stw r31,956(r1)
	PPC_STORE_U32(ctx.r1.u32 + 956, r31.u32);
	// stfs f31,968(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 968, temp.u32);
	// stw r22,948(r1)
	PPC_STORE_U32(ctx.r1.u32 + 948, r22.u32);
	// stb r31,972(r1)
	PPC_STORE_U8(ctx.r1.u32 + 972, r31.u8);
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// stw r11,944(r1)
	PPC_STORE_U32(ctx.r1.u32 + 944, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,984
	ctx.r3.s64 = ctx.r1.s64 + 984;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r28,1004(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1004, r28.u32);
	// stfs f0,1000(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1000, temp.u32);
	// stw r29,996(r1)
	PPC_STORE_U32(ctx.r1.u32 + 996, r29.u32);
	// stfs f30,1008(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1008, temp.u32);
	// stb r31,1020(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1020, r31.u8);
	// stfs f31,1012(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1012, temp.u32);
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// stfs f31,1016(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1016, temp.u32);
	// lwz r11,-1152(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1152);
	// stw r11,992(r1)
	PPC_STORE_U32(ctx.r1.u32 + 992, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1032
	ctx.r3.s64 = ctx.r1.s64 + 1032;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r22,-31954
	r22.s64 = -2094137344;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lfs f0,2244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1048(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1048, temp.u32);
	// stw r31,1052(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1052, r31.u32);
	// addi r20,r11,-8020
	r20.s64 = r11.s64 + -8020;
	// stfs f30,1056(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1056, temp.u32);
	// stfs f31,1060(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1060, temp.u32);
	// stb r31,1068(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1068, r31.u8);
	// stfs f31,1064(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1064, temp.u32);
	// stw r20,1044(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1044, r20.u32);
	// addi r3,r1,1072
	ctx.r3.s64 = ctx.r1.s64 + 1072;
	// lwz r11,-1216(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + -1216);
	// stw r11,1040(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1040, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1080
	ctx.r3.s64 = ctx.r1.s64 + 1080;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r21,-31954
	r21.s64 = -2094137344;
	// lfs f0,2244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r31,1100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1100, r31.u32);
	// stfs f0,1096(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1096, temp.u32);
	// stw r20,1092(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1092, r20.u32);
	// stfs f30,1104(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1104, temp.u32);
	// stb r31,1116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1116, r31.u8);
	// stfs f31,1108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1108, temp.u32);
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// lwz r11,-1200(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + -1200);
	// stfs f31,1112(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1112, temp.u32);
	// stw r11,1088(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1088, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1128
	ctx.r3.s64 = ctx.r1.s64 + 1128;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lfs f0,2244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1144, temp.u32);
	// stw r28,1148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1148, r28.u32);
	// addi r20,r10,-8040
	r20.s64 = ctx.r10.s64 + -8040;
	// stfs f30,1152(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1152, temp.u32);
	// stfs f31,1156(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1156, temp.u32);
	// stb r31,1164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1164, r31.u8);
	// stfs f31,1160(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1160, temp.u32);
	// stw r20,1140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1140, r20.u32);
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// lwz r11,-1180(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1180);
	// stw r11,1136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1136, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1176
	ctx.r3.s64 = ctx.r1.s64 + 1176;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r28,1196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1196, r28.u32);
	// stfs f0,1192(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1192, temp.u32);
	// stfs f30,1200(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1200, temp.u32);
	// stfs f31,1204(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1204, temp.u32);
	// lwz r11,-1184(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1184);
	// stfs f31,1208(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1208, temp.u32);
	// stw r20,1188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1188, r20.u32);
	// stb r31,1212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1212, r31.u8);
	// addi r3,r1,1216
	ctx.r3.s64 = ctx.r1.s64 + 1216;
	// stw r11,1184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1184, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1224
	ctx.r3.s64 = ctx.r1.s64 + 1224;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r20,-31954
	r20.s64 = -2094137344;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lfs f0,2244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1240(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1240, temp.u32);
	// stw r31,1244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1244, r31.u32);
	// addi r10,r11,-8052
	ctx.r10.s64 = r11.s64 + -8052;
	// stfs f30,1248(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1248, temp.u32);
	// stfs f31,1252(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1252, temp.u32);
	// stb r31,1260(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1260, r31.u8);
	// stfs f31,1256(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1256, temp.u32);
	// stw r10,1236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1236, ctx.r10.u32);
	// addi r3,r1,1264
	ctx.r3.s64 = ctx.r1.s64 + 1264;
	// lwz r11,-1176(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + -1176);
	// stw r11,1232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1232, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1272
	ctx.r3.s64 = ctx.r1.s64 + 1272;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r19,-31954
	r19.s64 = -2094137344;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lfs f0,2244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1288(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1288, temp.u32);
	// stw r28,1292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1292, r28.u32);
	// addi r10,r11,-8064
	ctx.r10.s64 = r11.s64 + -8064;
	// stfs f30,1296(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1296, temp.u32);
	// stfs f31,1300(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1300, temp.u32);
	// stb r31,1308(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1308, r31.u8);
	// stfs f31,1304(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1304, temp.u32);
	// stw r10,1284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1284, ctx.r10.u32);
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// lwz r11,-1156(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + -1156);
	// stw r11,1280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1280, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1320
	ctx.r3.s64 = ctx.r1.s64 + 1320;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r28,1340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1340, r28.u32);
	// stfs f0,1336(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1336, temp.u32);
	// stw r29,1332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1332, r29.u32);
	// stfs f30,1344(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1344, temp.u32);
	// stb r31,1356(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1356, r31.u8);
	// stfs f31,1348(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1348, temp.u32);
	// addi r3,r1,1360
	ctx.r3.s64 = ctx.r1.s64 + 1360;
	// stfs f31,1352(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1352, temp.u32);
	// lwz r11,-1164(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1164);
	// stw r11,1328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1328, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1368
	ctx.r3.s64 = ctx.r1.s64 + 1368;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r18,-31955
	r18.s64 = -2094202880;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lfs f0,2244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1384(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1384, temp.u32);
	// stw r31,1388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1388, r31.u32);
	// addi r10,r11,-8076
	ctx.r10.s64 = r11.s64 + -8076;
	// stfs f30,1392(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1392, temp.u32);
	// stfs f31,1396(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1396, temp.u32);
	// stb r31,1404(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1404, r31.u8);
	// stfs f31,1400(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1400, temp.u32);
	// stw r10,1380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1380, ctx.r10.u32);
	// addi r3,r1,1408
	ctx.r3.s64 = ctx.r1.s64 + 1408;
	// lwz r11,16236(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 16236);
	// stw r11,1376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1376, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1416
	ctx.r3.s64 = ctx.r1.s64 + 1416;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lfs f0,2244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1432(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1432, temp.u32);
	// addi r9,r11,-8092
	ctx.r9.s64 = r11.s64 + -8092;
	// stfs f30,1440(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1440, temp.u32);
	// lwz r11,16240(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16240);
	// stfs f31,1444(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1444, temp.u32);
	// stw r31,1436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1436, r31.u32);
	// stfs f31,1448(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1448, temp.u32);
	// stw r9,1428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1428, ctx.r9.u32);
	// stb r31,1452(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1452, r31.u8);
	// addi r3,r1,1456
	ctx.r3.s64 = ctx.r1.s64 + 1456;
	// stw r11,1424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1424, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1464
	ctx.r3.s64 = ctx.r1.s64 + 1464;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r17,-31954
	r17.s64 = -2094137344;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lfs f0,2244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1480(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1480, temp.u32);
	// stw r31,1484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1484, r31.u32);
	// addi r10,r11,-8116
	ctx.r10.s64 = r11.s64 + -8116;
	// stfs f30,1488(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1488, temp.u32);
	// stfs f31,1492(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1492, temp.u32);
	// stb r31,1500(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1500, r31.u8);
	// stfs f31,1496(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1496, temp.u32);
	// stw r10,1476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1476, ctx.r10.u32);
	// addi r3,r1,1504
	ctx.r3.s64 = ctx.r1.s64 + 1504;
	// lwz r11,-1236(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + -1236);
	// stw r11,1472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1472, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1512
	ctx.r3.s64 = ctx.r1.s64 + 1512;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r16,-31954
	r16.s64 = -2094137344;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lfs f0,2244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1528(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1528, temp.u32);
	// stw r28,1532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1532, r28.u32);
	// addi r10,r11,-8132
	ctx.r10.s64 = r11.s64 + -8132;
	// stfs f30,1536(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1536, temp.u32);
	// stfs f31,1540(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1540, temp.u32);
	// stb r31,1548(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1548, r31.u8);
	// stfs f31,1544(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1544, temp.u32);
	// stw r10,1524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1524, ctx.r10.u32);
	// addi r3,r1,1552
	ctx.r3.s64 = ctx.r1.s64 + 1552;
	// lwz r11,-1264(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + -1264);
	// stw r11,1520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1520, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1560
	ctx.r3.s64 = ctx.r1.s64 + 1560;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r15,-31955
	r15.s64 = -2094202880;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lfs f0,2244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1576(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1576, temp.u32);
	// stw r28,1580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1580, r28.u32);
	// addi r10,r11,-8144
	ctx.r10.s64 = r11.s64 + -8144;
	// stfs f30,1584(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1584, temp.u32);
	// stfs f31,1588(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1588, temp.u32);
	// stb r31,1596(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1596, r31.u8);
	// stfs f31,1592(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1592, temp.u32);
	// stw r10,1572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1572, ctx.r10.u32);
	// addi r3,r1,1600
	ctx.r3.s64 = ctx.r1.s64 + 1600;
	// lwz r11,16228(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 16228);
	// stw r11,1568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1568, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1608
	ctx.r3.s64 = ctx.r1.s64 + 1608;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lfs f0,2244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1624(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1624, temp.u32);
	// stw r28,1628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1628, r28.u32);
	// addi r10,r10,-8156
	ctx.r10.s64 = ctx.r10.s64 + -8156;
	// stfs f30,1632(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1632, temp.u32);
	// stfs f31,1636(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1636, temp.u32);
	// stb r31,1644(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1644, r31.u8);
	// stfs f31,1640(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1640, temp.u32);
	// stw r10,1620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1620, ctx.r10.u32);
	// addi r3,r1,1648
	ctx.r3.s64 = ctx.r1.s64 + 1648;
	// lwz r11,16232(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16232);
	// stw r11,1616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1616, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1656
	ctx.r3.s64 = ctx.r1.s64 + 1656;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lfs f0,2244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2244);
	f0.f64 = double(temp.f32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lwz r11,16220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16220);
	// addi r10,r10,-8168
	ctx.r10.s64 = ctx.r10.s64 + -8168;
	// stfs f0,1672(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1672, temp.u32);
	// stw r28,1676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1676, r28.u32);
	// stfs f30,1680(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1680, temp.u32);
	// stw r10,1668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1668, ctx.r10.u32);
	// stfs f31,1684(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1684, temp.u32);
	// stb r31,1692(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1692, r31.u8);
	// stfs f31,1688(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1688, temp.u32);
	// addi r3,r1,1696
	ctx.r3.s64 = ctx.r1.s64 + 1696;
	// stw r11,1664(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1664, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1704
	ctx.r3.s64 = ctx.r1.s64 + 1704;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,304
	ctx.r5.s64 = 304;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x828c6f20
	if (cr0.eq) goto loc_828C6F20;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827f0d28
	sub_827F0D28(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r11,r11,6716
	r11.s64 = r11.s64 + 6716;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x828c6f24
	goto loc_828C6F24;
loc_828C6F20:
	// mr r29,r31
	r29.u64 = r31.u64;
loc_828C6F24:
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8286c908
	sub_8286C908(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r29,r27,460
	r29.s64 = r27.s64 + 460;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
	// stw r11,460(r27)
	PPC_STORE_U32(r27.u32 + 460, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r11,460(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 460);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r14,r11,1
	r14.u64 = r11.u64 ^ 1;
	// beq cr6,0x828c6f7c
	if (cr6.eq) goto loc_828C6F7C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C6F7C:
	// clrlwi. r11,r14,24
	r11.u64 = r14.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828c6fd8
	if (cr0.eq) goto loc_828C6FD8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r29,0(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// addi r14,r27,956
	r14.s64 = r27.s64 + 956;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x827f08f0
	sub_827F08F0(ctx, base);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lwz r3,460(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 460);
	// addi r29,r27,460
	r29.s64 = r27.s64 + 460;
	// bl 0x827f05d0
	sub_827F05D0(ctx, base);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,460(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 460);
	// bl 0x827f05d8
	sub_827F05D8(ctx, base);
loc_828C6FD8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827f21f8
	sub_827F21F8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x828c7204
	if (cr0.eq) goto loc_828C7204;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,-1288(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + -1288);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f31,-24412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24412);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x827f01c8
	sub_827F01C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,-1284(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + -1284);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x827f01c8
	sub_827F01C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,-1268(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + -1268);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x827f01c8
	sub_827F01C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,-1236(r17)
	ctx.r4.u64 = PPC_LOAD_U32(r17.u32 + -1236);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x827f01c8
	sub_827F01C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,-1264(r16)
	ctx.r4.u64 = PPC_LOAD_U32(r16.u32 + -1264);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x827f01c8
	sub_827F01C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,16228(r15)
	ctx.r4.u64 = PPC_LOAD_U32(r15.u32 + 16228);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x827f01c8
	sub_827F01C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,16232(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16232);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827f01c8
	sub_827F01C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,-1216(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + -1216);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x827f01c8
	sub_827F01C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,-1200(r21)
	ctx.r4.u64 = PPC_LOAD_U32(r21.u32 + -1200);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x827f01c8
	sub_827F01C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,-1156(r19)
	ctx.r4.u64 = PPC_LOAD_U32(r19.u32 + -1156);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x827f01c8
	sub_827F01C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,-1176(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + -1176);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x827f01c8
	sub_827F01C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,16236(r18)
	ctx.r4.u64 = PPC_LOAD_U32(r18.u32 + 16236);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x827f01c8
	sub_827F01C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,16220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16220);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827f01c8
	sub_827F01C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// lwz r4,-1284(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + -1284);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,16212(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 16212);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827f01b0
	sub_827F01B0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_828C7204:
	// lwz r14,128(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r21,2268(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2268);
	// lwz r20,2260(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2260);
loc_828C7210:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-16068
	ctx.r4.s64 = r11.s64 + -16068;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x822efac8
	sub_822EFAC8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82e1e040
	sub_82E1E040(ctx, base);
	// lwz r3,268(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c7250
	if (cr6.eq) goto loc_828C7250;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C7250:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r29,r11,29088
	r29.s64 = r11.s64 + 29088;
	// lwz r11,160(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828c7394
	if (cr6.eq) goto loc_828C7394;
	// li r11,16
	r11.s64 = 16;
	// lvlx128 v63,r0,r29
	temp.u32 = r29.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r8,r1,1856
	ctx.r8.s64 = ctx.r1.s64 + 1856;
	// addi r7,r1,1872
	ctx.r7.s64 = ctx.r1.s64 + 1872;
	// lvlx128 v62,r11,r29
	temp.u32 = r11.u32 + r29.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r1,1888
	ctx.r6.s64 = ctx.r1.s64 + 1888;
	// addi r11,r1,1904
	r11.s64 = ctx.r1.s64 + 1904;
	// lvlx128 v61,r10,r29
	temp.u32 = ctx.r10.u32 + r29.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r9,r29
	temp.u32 = ctx.r9.u32 + r29.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,1856
	ctx.r4.s64 = ctx.r1.s64 + 1856;
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stvx128 v62,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x827f2188
	sub_827F2188(ctx, base);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
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
	// addi r4,r1,1856
	ctx.r4.s64 = ctx.r1.s64 + 1856;
	// addi r3,r1,1920
	ctx.r3.s64 = ctx.r1.s64 + 1920;
	// lfs f0,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	f0.f64 = double(temp.f32);
	// lfs f13,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,48(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,208(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f12,212(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f13,216(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f0,220(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// bl 0x82e847b0
	sub_82E847B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,1776
	ctx.r3.s64 = ctx.r1.s64 + 1776;
	// bl 0x82e84a10
	sub_82E84A10(ctx, base);
	// lfs f0,2244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,192(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stfs f30,196(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stfs f30,200(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f30,204(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// lfs f1,-7004(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -7004);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e85988
	sub_82E85988(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,1920
	ctx.r3.s64 = ctx.r1.s64 + 1920;
	// bl 0x82e84be0
	sub_82E84BE0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r4,r1,1776
	ctx.r4.s64 = ctx.r1.s64 + 1776;
	// addi r3,r1,1984
	ctx.r3.s64 = ctx.r1.s64 + 1984;
	// bl 0x82e84d20
	sub_82E84D20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,1712
	ctx.r3.s64 = ctx.r1.s64 + 1712;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x822c6a10
	sub_822C6A10(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,339
	ctx.r5.s64 = 339;
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828c7384
	if (cr0.eq) goto loc_828C7384;
	// addi r4,r1,1712
	ctx.r4.s64 = ctx.r1.s64 + 1712;
	// bl 0x82e1bac0
	sub_82E1BAC0(ctx, base);
	// b 0x828c7388
	goto loc_828C7388;
loc_828C7384:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_828C7388:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r27,920
	ctx.r3.s64 = r27.s64 + 920;
	// bl 0x822e3958
	sub_822E3958(ctx, base);
loc_828C7394:
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c73a4
	if (cr6.eq) goto loc_828C73A4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C73A4:
	// lwz r11,920(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 920);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828c7420
	if (cr6.eq) goto loc_828C7420;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,345
	ctx.r5.s64 = 345;
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828c73d8
	if (cr0.eq) goto loc_828C73D8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82e1bac0
	sub_82E1BAC0(ctx, base);
	// b 0x828c73dc
	goto loc_828C73DC;
loc_828C73D8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_828C73DC:
	// addi r29,r27,912
	r29.s64 = r27.s64 + 912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e3958
	sub_822E3958(ctx, base);
	// lwz r3,912(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 912);
	// bl 0x82e1ac38
	sub_82E1AC38(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r29,920(r27)
	r29.u64 = PPC_LOAD_U32(r27.u32 + 920);
	// bl 0x82ac9988
	sub_82AC9988(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82e1b810
	sub_82E1B810(ctx, base);
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c7420
	if (cr6.eq) goto loc_828C7420;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C7420:
	// lwz r4,912(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 912);
	// addi r22,r27,912
	r22.s64 = r27.s64 + 912;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x828c7438
	if (cr6.eq) goto loc_828C7438;
	// lwz r3,920(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 920);
	// bl 0x82e1b810
	sub_82E1B810(ctx, base);
loc_828C7438:
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r11,20
	r11.s64 = 20;
	// li r5,39
	ctx.r5.s64 = 39;
	// li r4,96
	ctx.r4.s64 = 96;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r9,r1,1840
	ctx.r9.s64 = ctx.r1.s64 + 1840;
	// addi r11,r11,13920
	r11.s64 = r11.s64 + 13920;
	// addi r8,r1,1792
	ctx.r8.s64 = ctx.r1.s64 + 1792;
	// li r7,96
	ctx.r7.s64 = 96;
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// sth r7,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r7.u16);
	// addi r5,r1,1840
	ctx.r5.s64 = ctx.r1.s64 + 1840;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-31949
	r11.s64 = -2093809664;
	// stvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,1792
	ctx.r4.s64 = ctx.r1.s64 + 1792;
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f1,-22120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22120);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,-396(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -396);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82f270c8
	sub_82F270C8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,358
	ctx.r5.s64 = 358;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828c74d4
	if (cr0.eq) goto loc_828C74D4;
	// addic. r11,r27,-16
	xer.ca = r27.u32 > 15;
	r11.s64 = r27.s64 + -16;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bne 0x828c74c8
	if (!cr0.eq) goto loc_828C74C8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_828C74C8:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x829654c8
	sub_829654C8(ctx, base);
	// b 0x828c74d8
	goto loc_828C74D8;
loc_828C74D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_828C74D8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r27,928
	ctx.r3.s64 = r27.s64 + 928;
	// bl 0x8275d7c8
	sub_8275D7C8(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,363
	ctx.r5.s64 = 363;
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828c7518
	if (cr0.eq) goto loc_828C7518;
	// addic. r11,r27,-16
	xer.ca = r27.u32 > 15;
	r11.s64 = r27.s64 + -16;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bne 0x828c7510
	if (!cr0.eq) goto loc_828C7510;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_828C7510:
	// bl 0x828c8278
	sub_828C8278(ctx, base);
	// b 0x828c751c
	goto loc_828C751C;
loc_828C7518:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_828C751C:
	// addi r23,r27,228
	r23.s64 = r27.s64 + 228;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x828c4af0
	sub_828C4AF0(ctx, base);
	// lwz r29,228(r27)
	r29.u64 = PPC_LOAD_U32(r27.u32 + 228);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x828c75b0
	if (cr6.eq) goto loc_828C75B0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r26,0(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82ab21a8
	sub_82AB21A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r26,0(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x827f2180
	sub_827F2180(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,20(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 20);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f3,2244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2244);
	ctx.f3.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f2,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,22896(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22896);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x829271f0
	sub_829271F0(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_828C75B0:
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x828c7b34
	if (cr6.eq) goto loc_828C7B34;
	// lwz r11,252(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 252);
	// addi r29,r27,252
	r29.s64 = r27.s64 + 252;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32115
	r11.s64 = -2104688640;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-15888
	ctx.r4.s64 = r11.s64 + -15888;
	// bl 0x828c5d08
	sub_828C5D08(ctx, base);
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r26,r1,96
	r26.s64 = ctx.r1.s64 + 96;
	// lwz r4,16624(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16624);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32115
	r11.s64 = -2104688640;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-15664
	ctx.r4.s64 = r11.s64 + -15664;
	// bl 0x828c5d08
	sub_828C5D08(ctx, base);
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r26,r1,96
	r26.s64 = ctx.r1.s64 + 96;
	// lwz r4,16628(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16628);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32115
	r11.s64 = -2104688640;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-16000
	ctx.r4.s64 = r11.s64 + -16000;
	// bl 0x828c5d08
	sub_828C5D08(ctx, base);
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r26,r1,96
	r26.s64 = ctx.r1.s64 + 96;
	// lwz r4,16620(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16620);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32115
	r11.s64 = -2104688640;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-15776
	ctx.r4.s64 = r11.s64 + -15776;
	// bl 0x828c5d08
	sub_828C5D08(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r26,r1,96
	r26.s64 = ctx.r1.s64 + 96;
	// lwz r4,4660(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4660);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32115
	r11.s64 = -2104688640;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-26296
	ctx.r4.s64 = r11.s64 + -26296;
	// bl 0x828c5d08
	sub_828C5D08(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r26,r1,96
	r26.s64 = ctx.r1.s64 + 96;
	// lwz r4,4644(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4644);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32115
	r11.s64 = -2104688640;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-15440
	ctx.r4.s64 = r11.s64 + -15440;
	// bl 0x828c5d88
	sub_828C5D88(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r26,r1,96
	r26.s64 = ctx.r1.s64 + 96;
	// lwz r4,4728(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4728);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32115
	r11.s64 = -2104688640;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-25072
	ctx.r4.s64 = r11.s64 + -25072;
	// bl 0x828c5d08
	sub_828C5D08(ctx, base);
	// lis r26,-31954
	r26.s64 = -2094137344;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r25,r1,96
	r25.s64 = ctx.r1.s64 + 96;
	// lwz r4,4592(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 4592);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32115
	r11.s64 = -2104688640;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-12640
	ctx.r4.s64 = r11.s64 + -12640;
	// bl 0x828c5d08
	sub_828C5D08(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r25,r1,96
	r25.s64 = ctx.r1.s64 + 96;
	// lwz r4,4596(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4596);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32115
	r11.s64 = -2104688640;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-16112
	ctx.r4.s64 = r11.s64 + -16112;
	// bl 0x828c5d08
	sub_828C5D08(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r25,r1,96
	r25.s64 = ctx.r1.s64 + 96;
	// lwz r4,4656(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4656);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32115
	r11.s64 = -2104688640;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-15552
	ctx.r4.s64 = r11.s64 + -15552;
	// bl 0x828c5d08
	sub_828C5D08(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r25,r1,96
	r25.s64 = ctx.r1.s64 + 96;
	// lwz r4,4688(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4688);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32115
	r11.s64 = -2104688640;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-12752
	ctx.r4.s64 = r11.s64 + -12752;
	// bl 0x828c5d08
	sub_828C5D08(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r25,r1,96
	r25.s64 = ctx.r1.s64 + 96;
	// lwz r4,4600(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4600);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32115
	r11.s64 = -2104688640;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-15328
	ctx.r4.s64 = r11.s64 + -15328;
	// bl 0x828c5d08
	sub_828C5D08(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r25,r1,96
	r25.s64 = ctx.r1.s64 + 96;
	// lwz r4,4616(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4616);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32115
	r11.s64 = -2104688640;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-14288
	ctx.r4.s64 = r11.s64 + -14288;
	// bl 0x828c5d08
	sub_828C5D08(ctx, base);
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r25,r1,96
	r25.s64 = ctx.r1.s64 + 96;
	// lwz r4,16616(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16616);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32108
	r11.s64 = -2104229888;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-22888
	ctx.r4.s64 = r11.s64 + -22888;
	// bl 0x8286ece0
	sub_8286ECE0(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r25,r1,96
	r25.s64 = ctx.r1.s64 + 96;
	// lwz r4,4712(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4712);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32109
	r11.s64 = -2104295424;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-96
	ctx.r4.s64 = r11.s64 + -96;
	// bl 0x8286ece0
	sub_8286ECE0(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r25,r1,96
	r25.s64 = ctx.r1.s64 + 96;
	// lwz r4,4708(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4708);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32108
	r11.s64 = -2104229888;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-18720
	ctx.r4.s64 = r11.s64 + -18720;
	// bl 0x8286ece0
	sub_8286ECE0(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r25,r1,96
	r25.s64 = ctx.r1.s64 + 96;
	// lwz r4,4700(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4700);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32109
	r11.s64 = -2104295424;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,11312
	ctx.r4.s64 = r11.s64 + 11312;
	// bl 0x828c5e08
	sub_828C5E08(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r25,r1,96
	r25.s64 = ctx.r1.s64 + 96;
	// lwz r4,4720(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4720);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32108
	r11.s64 = -2104229888;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,8536
	ctx.r4.s64 = r11.s64 + 8536;
	// bl 0x8286ece0
	sub_8286ECE0(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r25,r1,96
	r25.s64 = ctx.r1.s64 + 96;
	// lwz r4,4760(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4760);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32108
	r11.s64 = -2104229888;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-17168
	ctx.r4.s64 = r11.s64 + -17168;
	// bl 0x8286ece0
	sub_8286ECE0(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r25,r1,96
	r25.s64 = ctx.r1.s64 + 96;
	// lwz r4,4624(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4624);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32109
	r11.s64 = -2104295424;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-5304
	ctx.r4.s64 = r11.s64 + -5304;
	// bl 0x8286ece0
	sub_8286ECE0(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r25,r1,96
	r25.s64 = ctx.r1.s64 + 96;
	// lwz r4,4652(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4652);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32109
	r11.s64 = -2104295424;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-5304
	ctx.r4.s64 = r11.s64 + -5304;
	// bl 0x8286ece0
	sub_8286ECE0(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r25,r1,96
	r25.s64 = ctx.r1.s64 + 96;
	// lwz r4,4648(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4648);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32109
	r11.s64 = -2104295424;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-3320
	ctx.r4.s64 = r11.s64 + -3320;
	// bl 0x8286ece0
	sub_8286ECE0(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r25,r1,96
	r25.s64 = ctx.r1.s64 + 96;
	// lwz r4,4684(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4684);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32108
	r11.s64 = -2104229888;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,11168
	ctx.r4.s64 = r11.s64 + 11168;
	// bl 0x8286ece0
	sub_8286ECE0(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r25,r1,96
	r25.s64 = ctx.r1.s64 + 96;
	// lwz r4,4604(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4604);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32108
	r11.s64 = -2104229888;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-4288
	ctx.r4.s64 = r11.s64 + -4288;
	// bl 0x8286ece0
	sub_8286ECE0(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r25,r1,96
	r25.s64 = ctx.r1.s64 + 96;
	// lwz r4,4716(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4716);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,4592(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 4592);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827f2cf0
	sub_827F2CF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_828C7B34:
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x828c7cb4
	if (cr6.eq) goto loc_828C7CB4;
	// lwz r11,356(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 356);
	// addi r29,r27,356
	r29.s64 = r27.s64 + 356;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32108
	r11.s64 = -2104229888;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,16344
	ctx.r4.s64 = r11.s64 + 16344;
	// bl 0x8286ece0
	sub_8286ECE0(ctx, base);
	// lis r26,-31954
	r26.s64 = -2094137344;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r25,r1,96
	r25.s64 = ctx.r1.s64 + 96;
	// lwz r4,4832(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 4832);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32108
	r11.s64 = -2104229888;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,14976
	ctx.r4.s64 = r11.s64 + 14976;
	// bl 0x8286ece0
	sub_8286ECE0(ctx, base);
	// lis r25,-31954
	r25.s64 = -2094137344;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r24,r1,96
	r24.s64 = ctx.r1.s64 + 96;
	// lwz r4,4824(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 4824);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32108
	r11.s64 = -2104229888;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,18888
	ctx.r4.s64 = r11.s64 + 18888;
	// bl 0x8286ece0
	sub_8286ECE0(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r24,r1,96
	r24.s64 = ctx.r1.s64 + 96;
	// lwz r4,4840(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4840);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32108
	r11.s64 = -2104229888;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,18368
	ctx.r4.s64 = r11.s64 + 18368;
	// bl 0x8286ece0
	sub_8286ECE0(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r24,r1,96
	r24.s64 = ctx.r1.s64 + 96;
	// lwz r4,4848(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4848);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32108
	r11.s64 = -2104229888;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,20168
	ctx.r4.s64 = r11.s64 + 20168;
	// bl 0x8286ece0
	sub_8286ECE0(ctx, base);
	// lis r24,-31954
	r24.s64 = -2094137344;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r19,r1,96
	r19.s64 = ctx.r1.s64 + 96;
	// lwz r4,4844(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 4844);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// lwz r11,964(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 964);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828c7c84
	if (!cr6.eq) goto loc_828C7C84;
	// lwz r4,4832(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 4832);
	// b 0x828c7c98
	goto loc_828C7C98;
loc_828C7C84:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x828c7c94
	if (!cr6.eq) goto loc_828C7C94;
	// lwz r4,4844(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 4844);
	// b 0x828c7c98
	goto loc_828C7C98;
loc_828C7C94:
	// lwz r4,4824(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 4824);
loc_828C7C98:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827f2520
	sub_827F2520(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_828C7CB4:
	// lwz r11,-16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -16);
	// addi r29,r27,-16
	r29.s64 = r27.s64 + -16;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82913f08
	sub_82913F08(ctx, base);
	// lwz r11,-16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -16);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lfs f5,2244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 2244);
	ctx.f5.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f1,f5
	ctx.f1.f64 = ctx.f5.f64;
	// lfs f4,152(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 152);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,148(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 148);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,144(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 144);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82915d60
	sub_82915D60(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82913ab8
	sub_82913AB8(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,479
	ctx.r5.s64 = 479;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828c7d54
	if (cr0.eq) goto loc_828C7D54;
	// addic. r11,r27,-16
	xer.ca = r27.u32 > 15;
	r11.s64 = r27.s64 + -16;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bne 0x828c7d48
	if (!cr0.eq) goto loc_828C7D48;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_828C7D48:
	// bl 0x82949e28
	sub_82949E28(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x828c7d58
	goto loc_828C7D58;
loc_828C7D54:
	// mr r30,r31
	r30.u64 = r31.u64;
loc_828C7D58:
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x8286c6b0
	sub_8286C6B0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x8286e008
	sub_8286E008(ctx, base);
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
	// beq cr6,0x828c7dbc
	if (cr6.eq) goto loc_828C7DBC;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828C7DA0:
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
	// bne 0x828c7da0
	if (!cr0.eq) goto loc_828C7DA0;
loc_828C7DBC:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82910ed8
	sub_82910ED8(ctx, base);
	// lwz r3,252(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c7ddc
	if (cr6.eq) goto loc_828C7DDC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C7DDC:
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c7dec
	if (cr6.eq) goto loc_828C7DEC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C7DEC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,486
	ctx.r5.s64 = 486;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828c7e3c
	if (cr0.eq) goto loc_828C7E3C;
	// addic. r11,r27,-16
	xer.ca = r27.u32 > 15;
	r11.s64 = r27.s64 + -16;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bne 0x828c7e30
	if (!cr0.eq) goto loc_828C7E30;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_828C7E30:
	// addi r5,r30,188
	ctx.r5.s64 = r30.s64 + 188;
	// bl 0x829463b0
	sub_829463B0(ctx, base);
	// b 0x828c7e40
	goto loc_828C7E40;
loc_828C7E3C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_828C7E40:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r27,896
	ctx.r3.s64 = r27.s64 + 896;
	// bl 0x8286e080
	sub_8286E080(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,491
	ctx.r5.s64 = 491;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x828c7ea0
	if (cr0.eq) goto loc_828C7EA0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82adefd0
	sub_82ADEFD0(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// bl 0x829285e8
	sub_829285E8(ctx, base);
	// b 0x828c7ea4
	goto loc_828C7EA4;
loc_828C7EA0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_828C7EA4:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r27,904
	ctx.r3.s64 = r27.s64 + 904;
	// bl 0x8286ebf0
	sub_8286EBF0(ctx, base);
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x828c7f90
	if (cr6.eq) goto loc_828C7F90;
	// addi r3,r1,1712
	ctx.r3.s64 = ctx.r1.s64 + 1712;
	// bl 0x82b59f70
	sub_82B59F70(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// li r10,262
	ctx.r10.s64 = 262;
	// stfs f30,1756(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1756, temp.u32);
	// stw r31,1712(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1712, r31.u32);
	// stw r10,1716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1716, ctx.r10.u32);
	// stw r28,1752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1752, r28.u32);
	// lfs f0,-8172(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8172);
	f0.f64 = double(temp.f32);
	// stfs f0,1748(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1748, temp.u32);
	// lwz r30,608(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 608);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x828c7f90
	if (cr6.eq) goto loc_828C7F90;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,356(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 356);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r4,2252(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2252);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,1712
	ctx.r7.s64 = ctx.r1.s64 + 1712;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82919bc8
	sub_82919BC8(ctx, base);
	// lis r11,-32115
	r11.s64 = -2104688640;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// addi r11,r11,-12288
	r11.s64 = r11.s64 + -12288;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// bl 0x828c64b8
	sub_828C64B8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82918790
	sub_82918790(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r3,156
	ctx.r4.s64 = ctx.r3.s64 + 156;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82918030
	sub_82918030(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_828C7F90:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828c8074
	if (cr6.eq) goto loc_828C8074;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8250e538
	sub_8250E538(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lwz r11,4(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// beq cr6,0x828c8000
	if (cr6.eq) goto loc_828C8000;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828C7FE4:
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
	// bne 0x828c7fe4
	if (!cr0.eq) goto loc_828C7FE4;
loc_828C8000:
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,-192
	ctx.r4.s64 = r11.s64 + -192;
	// bne cr6,0x828c8014
	if (!cr6.eq) goto loc_828C8014;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_828C8014:
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x827da560
	sub_827DA560(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r27,944
	ctx.r10.s64 = r27.s64 + 944;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,944(r27)
	PPC_STORE_U32(r27.u32 + 944, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c8054
	if (cr6.eq) goto loc_828C8054;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C8054:
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c8064
	if (cr6.eq) goto loc_828C8064;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C8064:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_828C8074:
	// lwz r3,944(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 944);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c8088
	if (cr6.eq) goto loc_828C8088;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82e8a358
	sub_82E8A358(ctx, base);
loc_828C8088:
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_828C8098"))) PPC_WEAK_FUNC(sub_828C8098);
PPC_FUNC_IMPL(__imp__sub_828C8098) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x828c6538
	sub_828C6538(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r31,r31,-16
	r31.s64 = r31.s64 + -16;
	// addi r4,r10,4432
	ctx.r4.s64 = ctx.r10.s64 + 4432;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828c4c90
	sub_828C4C90(ctx, base);
	// lis r11,-31955
	r11.s64 = -2094202880;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,15120(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 15120);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x828c4608
	sub_828C4608(ctx, base);
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

__attribute__((alias("__imp__sub_828C80F8"))) PPC_WEAK_FUNC(sub_828C80F8);
PPC_FUNC_IMPL(__imp__sub_828C80F8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x828c6538
	sub_828C6538(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r31,r31,-16
	r31.s64 = r31.s64 + -16;
	// addi r4,r10,4712
	ctx.r4.s64 = ctx.r10.s64 + 4712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// lfs f1,-24676(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24676);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828c4c90
	sub_828C4C90(ctx, base);
	// lis r11,-31955
	r11.s64 = -2094202880;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,15120
	r11.s64 = r11.s64 + 15120;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x828c4608
	sub_828C4608(ctx, base);
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

__attribute__((alias("__imp__sub_828C8160"))) PPC_WEAK_FUNC(sub_828C8160);
PPC_FUNC_IMPL(__imp__sub_828C8160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x828c6538
	sub_828C6538(ctx, base);
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r3,r31,-16
	ctx.r3.s64 = r31.s64 + -16;
	// addi r11,r11,15120
	r11.s64 = r11.s64 + 15120;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x828c4608
	sub_828C4608(ctx, base);
	// lwz r11,992(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 992);
	// addi r29,r31,992
	r29.s64 = r31.s64 + 992;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828c8250
	if (!cr6.eq) goto loc_828C8250;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r5,39
	ctx.r5.s64 = 39;
	// li r4,96
	ctx.r4.s64 = 96;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,13920
	r11.s64 = r11.s64 + 13920;
	// addi r10,r10,30976
	ctx.r10.s64 = ctx.r10.s64 + 30976;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r7,96
	ctx.r7.s64 = 96;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// sth r7,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r7.u16);
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stvx128 v62,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f1,-22120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,-396(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -396);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82f270c8
	sub_82F270C8(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-8280
	ctx.r4.s64 = r11.s64 + -8280;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1340
	ctx.r5.s64 = 1340;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828c8244
	if (cr0.eq) goto loc_828C8244;
	// addic. r11,r31,-16
	xer.ca = r31.u32 > 15;
	r11.s64 = r31.s64 + -16;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bne 0x828c8234
	if (!cr0.eq) goto loc_828C8234;
	// li r4,0
	ctx.r4.s64 = 0;
loc_828C8234:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x829654c8
	sub_829654C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828c8248
	goto loc_828C8248;
loc_828C8244:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828C8248:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8275d7c8
	sub_8275D7C8(ctx, base);
loc_828C8250:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c826c
	if (cr6.eq) goto loc_828C826C;
	// lis r11,-31944
	r11.s64 = -2093481984;
	// addi r11,r11,4992
	r11.s64 = r11.s64 + 4992;
	// lfs f1,284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 284);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82965318
	sub_82965318(ctx, base);
loc_828C826C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828C8278"))) PPC_WEAK_FUNC(sub_828C8278);
PPC_FUNC_IMPL(__imp__sub_828C8278) {
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
	// bl 0x8291cd40
	sub_8291CD40(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-7764
	r11.s64 = r11.s64 + -7764;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_828C82B8"))) PPC_WEAK_FUNC(sub_828C82B8);
PPC_FUNC_IMPL(__imp__sub_828C82B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x827f3820
	sub_827F3820(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// bne 0x828c82d8
	if (!cr0.eq) goto loc_828C82D8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_828C82D8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c82e8
	if (cr6.eq) goto loc_828C82E8;
	// bl 0x828c2d78
	sub_828C2D78(ctx, base);
	// b 0x828c82f0
	goto loc_828C82F0;
loc_828C82E8:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r3,r11,16252
	ctx.r3.s64 = r11.s64 + 16252;
loc_828C82F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C8300"))) PPC_WEAK_FUNC(sub_828C8300);
PPC_FUNC_IMPL(__imp__sub_828C8300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x827f3820
	sub_827F3820(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// bne 0x828c8320
	if (!cr0.eq) goto loc_828C8320;
	// li r3,0
	ctx.r3.s64 = 0;
loc_828C8320:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c833c
	if (cr6.eq) goto loc_828C833C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x828c8344
	goto loc_828C8344;
loc_828C833C:
	// lis r11,-31944
	r11.s64 = -2093481984;
	// addi r3,r11,5296
	ctx.r3.s64 = r11.s64 + 5296;
loc_828C8344:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C8358"))) PPC_WEAK_FUNC(sub_828C8358);
PPC_FUNC_IMPL(__imp__sub_828C8358) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x827f3820
	sub_827F3820(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// bne 0x828c8378
	if (!cr0.eq) goto loc_828C8378;
	// li r3,0
	ctx.r3.s64 = 0;
loc_828C8378:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c8384
	if (cr6.eq) goto loc_828C8384;
	// bl 0x828c4528
	sub_828C4528(ctx, base);
loc_828C8384:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C8398"))) PPC_WEAK_FUNC(sub_828C8398);
PPC_FUNC_IMPL(__imp__sub_828C8398) {
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,-7764
	r11.s64 = r11.s64 + -7764;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x8291c9d0
	sub_8291C9D0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828c83d4
	if (cr0.eq) goto loc_828C83D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_828C83D4:
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

__attribute__((alias("__imp__sub_828C83F0"))) PPC_WEAK_FUNC(sub_828C83F0);
PPC_FUNC_IMPL(__imp__sub_828C83F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x827f3820
	sub_827F3820(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r11,r3,-16
	r11.s64 = ctx.r3.s64 + -16;
	// bne 0x828c841c
	if (!cr0.eq) goto loc_828C841C;
	// li r11,0
	r11.s64 = 0;
loc_828C841C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x828c8438
	if (cr6.eq) goto loc_828C8438;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// bl 0x8290f048
	sub_8290F048(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x828c8448
	goto loc_828C8448;
loc_828C8438:
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r11,r11,29232
	r11.s64 = r11.s64 + 29232;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_828C8448:
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

__attribute__((alias("__imp__sub_828C8460"))) PPC_WEAK_FUNC(sub_828C8460);
PPC_FUNC_IMPL(__imp__sub_828C8460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x828c83f0
	sub_828C83F0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lvx128 v62,r0,r3
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltisw128 v61,1
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_set1_epi32(int(0x1)));
	// vsubfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// vspltisw128 v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vcsxwfp128 v13,v61,1
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v61.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
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
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
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

__attribute__((alias("__imp__sub_828C8500"))) PPC_WEAK_FUNC(sub_828C8500);
PPC_FUNC_IMPL(__imp__sub_828C8500) {
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
	// bl 0x827f3820
	sub_827F3820(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r11,r3,-16
	r11.s64 = ctx.r3.s64 + -16;
	// bne 0x828c852c
	if (!cr0.eq) goto loc_828C852C;
	// li r11,0
	r11.s64 = 0;
loc_828C852C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828c8564
	if (cr6.eq) goto loc_828C8564;
	// addi r31,r11,16
	r31.s64 = r11.s64 + 16;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827f36a8
	sub_827F36A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x829652b8
	sub_829652B8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c8564
	if (cr6.eq) goto loc_828C8564;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828C8564:
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

__attribute__((alias("__imp__sub_828C8580"))) PPC_WEAK_FUNC(sub_828C8580);
PPC_FUNC_IMPL(__imp__sub_828C8580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lfs f0,-31000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31000);
	f0.f64 = double(temp.f32);
	// lfs f13,-6772(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6772);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C85A8"))) PPC_WEAK_FUNC(sub_828C85A8);
PPC_FUNC_IMPL(__imp__sub_828C85A8) {
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
	// bl 0x8295fe68
	sub_8295FE68(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f12,-31000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31000);
	ctx.f12.f64 = double(temp.f32);
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lfs f11,-6772(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6772);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-22656(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -22656);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r31,188
	ctx.r3.s64 = r31.s64 + 188;
	// lfs f9,-17192(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -17192);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,-21220(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -21220);
	f0.f64 = double(temp.f32);
	// lfs f8,26548(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 26548);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,8260(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8260);
	ctx.f13.f64 = double(temp.f32);
	// stfs f12,120(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// stfs f11,124(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 124, temp.u32);
	// stfs f10,128(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// stfs f9,132(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f0,136(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// stfs f0,140(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 140, temp.u32);
	// stfs f8,144(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f13,148(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// stfs f13,152(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// bl 0x82945118
	sub_82945118(ctx, base);
	// addi r3,r31,212
	ctx.r3.s64 = r31.s64 + 212;
	// bl 0x829472b8
	sub_829472B8(ctx, base);
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x829491e8
	sub_829491E8(ctx, base);
	// addi r3,r31,232
	ctx.r3.s64 = r31.s64 + 232;
	// bl 0x829495e8
	sub_829495E8(ctx, base);
	// addi r3,r31,248
	ctx.r3.s64 = r31.s64 + 248;
	// bl 0x82948b88
	sub_82948B88(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,-5140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -5140);
	f0.f64 = double(temp.f32);
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

__attribute__((alias("__imp__sub_828C8668"))) PPC_WEAK_FUNC(sub_828C8668);
PPC_FUNC_IMPL(__imp__sub_828C8668) {
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
	// bl 0x828c85a8
	sub_828C85A8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,-5316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -5316);
	f0.f64 = double(temp.f32);
	// stw r8,264(r31)
	PPC_STORE_U32(r31.u32 + 264, ctx.r8.u32);
	// lfs f13,26548(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26548);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-31000(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -31000);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,268(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 268, temp.u32);
	// stfs f13,272(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 272, temp.u32);
	// stfs f12,276(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 276, temp.u32);
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

__attribute__((alias("__imp__sub_828C86C8"))) PPC_WEAK_FUNC(sub_828C86C8);
PPC_FUNC_IMPL(__imp__sub_828C86C8) {
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
	// bl 0x828c8668
	sub_828C8668(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,104(r31)
	PPC_STORE_U8(r31.u32 + 104, r11.u8);
	// stb r11,88(r31)
	PPC_STORE_U8(r31.u32 + 88, r11.u8);
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

__attribute__((alias("__imp__sub_828C8708"))) PPC_WEAK_FUNC(sub_828C8708);
PPC_FUNC_IMPL(__imp__sub_828C8708) {
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
	// bl 0x828c8668
	sub_828C8668(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,104(r31)
	PPC_STORE_U8(r31.u32 + 104, r11.u8);
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

__attribute__((alias("__imp__sub_828C8740"))) PPC_WEAK_FUNC(sub_828C8740);
PPC_FUNC_IMPL(__imp__sub_828C8740) {
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
	// bl 0x828c85a8
	sub_828C85A8(ctx, base);
	// addi r3,r31,264
	ctx.r3.s64 = r31.s64 + 264;
	// bl 0x8295db50
	sub_8295DB50(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r11,1
	r11.s64 = 1;
	// li r8,5
	ctx.r8.s64 = 5;
	// li r7,10
	ctx.r7.s64 = 10;
	// stb r11,104(r31)
	PPC_STORE_U8(r31.u32 + 104, r11.u8);
	// li r6,20
	ctx.r6.s64 = 20;
	// lfs f0,2440(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2440);
	f0.f64 = double(temp.f32);
	// lfs f13,-17788(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17788);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,88(r31)
	PPC_STORE_U8(r31.u32 + 88, r11.u8);
	// stfs f0,280(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 280, temp.u32);
	// stw r8,264(r31)
	PPC_STORE_U32(r31.u32 + 264, ctx.r8.u32);
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 284, temp.u32);
	// stw r7,268(r31)
	PPC_STORE_U32(r31.u32 + 268, ctx.r7.u32);
	// stw r6,272(r31)
	PPC_STORE_U32(r31.u32 + 272, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_828C87B8"))) PPC_WEAK_FUNC(sub_828C87B8);
PPC_FUNC_IMPL(__imp__sub_828C87B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
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
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x828c8810
	if (cr6.eq) goto loc_828C8810;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828C87F4:
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
	// bne 0x828c87f4
	if (!cr0.eq) goto loc_828C87F4;
loc_828C8810:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82960a70
	sub_82960A70(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,19952
	ctx.r4.s64 = r11.s64 + 19952;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,19944
	ctx.r4.s64 = r11.s64 + 19944;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825cfc40
	sub_825CFC40(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7256
	ctx.r4.s64 = r11.s64 + -7256;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-7276
	ctx.r4.s64 = r11.s64 + -7276;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r5,r30,120
	ctx.r5.s64 = r30.s64 + 120;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f31,-24412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24412);
	f31.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f30,27976(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27976);
	f30.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// lfs f29,2240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f29.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x825a8648
	sub_825A8648(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825a6b08
	sub_825A6B08(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-7300
	ctx.r4.s64 = r11.s64 + -7300;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7320
	ctx.r4.s64 = r11.s64 + -7320;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r5,r30,124
	ctx.r5.s64 = r30.s64 + 124;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lfs f1,-24792(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24792);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825a8648
	sub_825A8648(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825a6b08
	sub_825A6B08(ctx, base);
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825cf410
	sub_825CF410(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,20004
	ctx.r4.s64 = r11.s64 + 20004;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7328
	ctx.r4.s64 = r11.s64 + -7328;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825cfc40
	sub_825CFC40(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,-7352
	ctx.r4.s64 = r11.s64 + -7352;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-7368
	ctx.r4.s64 = r11.s64 + -7368;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// addi r5,r30,132
	ctx.r5.s64 = r30.s64 + 132;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f3,-21804(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -21804);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x825a8648
	sub_825A8648(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6b08
	sub_825A6B08(ctx, base);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,-7404
	ctx.r4.s64 = r11.s64 + -7404;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-7420
	ctx.r4.s64 = r11.s64 + -7420;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r30,136
	ctx.r5.s64 = r30.s64 + 136;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x825a8648
	sub_825A8648(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825a6b08
	sub_825A6B08(ctx, base);
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,-7432
	ctx.r4.s64 = r11.s64 + -7432;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-7444
	ctx.r4.s64 = r11.s64 + -7444;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r30,140
	ctx.r5.s64 = r30.s64 + 140;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x825a8648
	sub_825A8648(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825a6b08
	sub_825A6B08(ctx, base);
	// addi r3,r1,424
	ctx.r3.s64 = ctx.r1.s64 + 424;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,392
	ctx.r3.s64 = ctx.r1.s64 + 392;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825cf410
	sub_825CF410(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x828c8b2c
	if (cr6.eq) goto loc_828C8B2C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828C8B10:
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
	// bne 0x828c8b10
	if (!cr0.eq) goto loc_828C8B10;
loc_828C8B2C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,156
	ctx.r3.s64 = r30.s64 + 156;
	// bl 0x8291b038
	sub_8291B038(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x828c8b70
	if (cr6.eq) goto loc_828C8B70;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828C8B54:
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
	// bne 0x828c8b54
	if (!cr0.eq) goto loc_828C8B54;
loc_828C8B70:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,188
	ctx.r3.s64 = r30.s64 + 188;
	// bl 0x82945cd0
	sub_82945CD0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x828c8bb4
	if (cr6.eq) goto loc_828C8BB4;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828C8B98:
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
	// bne 0x828c8b98
	if (!cr0.eq) goto loc_828C8B98;
loc_828C8BB4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,212
	ctx.r3.s64 = r30.s64 + 212;
	// bl 0x82947688
	sub_82947688(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x828c8bf8
	if (cr6.eq) goto loc_828C8BF8;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828C8BDC:
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
	// bne 0x828c8bdc
	if (!cr0.eq) goto loc_828C8BDC;
loc_828C8BF8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x82949560
	sub_82949560(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x828c8c3c
	if (cr6.eq) goto loc_828C8C3C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828C8C20:
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
	// bne 0x828c8c20
	if (!cr0.eq) goto loc_828C8C20;
loc_828C8C3C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,232
	ctx.r3.s64 = r30.s64 + 232;
	// bl 0x82949d20
	sub_82949D20(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x828c8c80
	if (cr6.eq) goto loc_828C8C80;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828C8C64:
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
	// bne 0x828c8c64
	if (!cr0.eq) goto loc_828C8C64;
loc_828C8C80:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,248
	ctx.r3.s64 = r30.s64 + 248;
	// bl 0x82948eb8
	sub_82948EB8(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
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

__attribute__((alias("__imp__sub_828C8CA0"))) PPC_WEAK_FUNC(sub_828C8CA0);
PPC_FUNC_IMPL(__imp__sub_828C8CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x828c87b8
	sub_828C87B8(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,-30084
	ctx.r4.s64 = r11.s64 + -30084;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-10668
	ctx.r4.s64 = r11.s64 + -10668;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x825cfc40
	sub_825CFC40(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7116
	ctx.r4.s64 = r11.s64 + -7116;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-7136
	ctx.r4.s64 = r11.s64 + -7136;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r5,r31,268
	ctx.r5.s64 = r31.s64 + 268;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f31,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f31.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f30,-5316(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -5316);
	f30.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// lfs f29,2240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f29.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x825a8648
	sub_825A8648(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x825a6b08
	sub_825A6B08(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-7156
	ctx.r4.s64 = r11.s64 + -7156;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7180
	ctx.r4.s64 = r11.s64 + -7180;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r31,272
	ctx.r5.s64 = r31.s64 + 272;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x825a8648
	sub_825A8648(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825a6b08
	sub_825A6B08(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,-7212
	ctx.r4.s64 = r11.s64 + -7212;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7236
	ctx.r4.s64 = r11.s64 + -7236;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r31,276
	ctx.r5.s64 = r31.s64 + 276;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x825a8648
	sub_825A8648(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825a6b08
	sub_825A6B08(ctx, base);
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
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
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x825cf410
	sub_825CF410(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
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

__attribute__((alias("__imp__sub_828C8E80"))) PPC_WEAK_FUNC(sub_828C8E80);
PPC_FUNC_IMPL(__imp__sub_828C8E80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828c8ca0
	sub_828C8CA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C8E88"))) PPC_WEAK_FUNC(sub_828C8E88);
PPC_FUNC_IMPL(__imp__sub_828C8E88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x828c87b8
	sub_828C87B8(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-30084
	ctx.r4.s64 = r11.s64 + -30084;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,10852
	ctx.r4.s64 = r11.s64 + 10852;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq cr6,0x828c8f04
	if (cr6.eq) goto loc_828C8F04;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828C8EE8:
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
	// bne 0x828c8ee8
	if (!cr0.eq) goto loc_828C8EE8;
loc_828C8F04:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,264
	ctx.r3.s64 = r30.s64 + 264;
	// bl 0x8295db68
	sub_8295DB68(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,19952
	ctx.r4.s64 = r11.s64 + 19952;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,19944
	ctx.r4.s64 = r11.s64 + 19944;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825cfc40
	sub_825CFC40(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-7044
	ctx.r4.s64 = r11.s64 + -7044;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7060
	ctx.r4.s64 = r11.s64 + -7060;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r5,r30,280
	ctx.r5.s64 = r30.s64 + 280;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f31,-24412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24412);
	f31.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f30,27976(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27976);
	f30.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// lfs f29,2240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f29.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x825a8648
	sub_825A8648(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825a6b08
	sub_825A6B08(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7080
	ctx.r4.s64 = r11.s64 + -7080;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-7096
	ctx.r4.s64 = r11.s64 + -7096;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r30,284
	ctx.r5.s64 = r30.s64 + 284;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x825a8648
	sub_825A8648(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825a6b08
	sub_825A6B08(ctx, base);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825cf410
	sub_825CF410(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
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

__attribute__((alias("__imp__sub_828C9078"))) PPC_WEAK_FUNC(sub_828C9078);
PPC_FUNC_IMPL(__imp__sub_828C9078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8291c5d0
	sub_8291C5D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828c90a4
	if (cr0.eq) goto loc_828C90A4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r4,3
	ctx.r4.s64 = 3;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82914830
	sub_82914830(ctx, base);
loc_828C90A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C90B8"))) PPC_WEAK_FUNC(sub_828C90B8);
PPC_FUNC_IMPL(__imp__sub_828C90B8) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828c910c
	if (cr0.eq) goto loc_828C910C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31959
	r11.s64 = -2094465024;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,29404
	ctx.r3.s64 = r11.s64 + 29404;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828c910c
	if (cr0.eq) goto loc_828C910C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828d1880
	sub_828D1880(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828c911c
	goto loc_828C911C;
loc_828C910C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e71e58
	sub_82E71E58(ctx, base);
loc_828C911C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828C9128"))) PPC_WEAK_FUNC(sub_828C9128);
PPC_FUNC_IMPL(__imp__sub_828C9128) {
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
	// beq 0x828c9180
	if (cr0.eq) goto loc_828C9180;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-7016
	ctx.r9.s64 = r11.s64 + -7016;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x828c9184
	goto loc_828C9184;
loc_828C9180:
	// li r11,0
	r11.s64 = 0;
loc_828C9184:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828c91d0
	if (!cr6.eq) goto loc_828C91D0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828c91b0
	if (cr6.eq) goto loc_828C91B0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_828C91B0:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,16268(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16268);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_828C91D0:
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

__attribute__((alias("__imp__sub_828C91F0"))) PPC_WEAK_FUNC(sub_828C91F0);
PPC_FUNC_IMPL(__imp__sub_828C91F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8291c5d0
	sub_8291C5D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828c9224
	if (cr0.eq) goto loc_828C9224;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r4,2
	ctx.r4.s64 = 2;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82914830
	sub_82914830(ctx, base);
loc_828C9224:
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-1288(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -1288);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,140(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// li r27,0
	r27.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r27,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r27.u32);
	// stw r27,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r27.u32);
	// bl 0x8291c5d0
	sub_8291C5D0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x828c941c
	if (cr0.eq) goto loc_828C941C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828c8300
	sub_828C8300(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82946070
	sub_82946070(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r29,r11,-7000
	r29.s64 = r11.s64 + -7000;
	// li r5,117
	ctx.r5.s64 = 117;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828c92cc
	if (cr0.eq) goto loc_828C92CC;
	// addi r5,r28,212
	ctx.r5.s64 = r28.s64 + 212;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x829472e0
	sub_829472E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x828c92d0
	goto loc_828C92D0;
loc_828C92CC:
	// mr r30,r27
	r30.u64 = r27.u64;
loc_828C92D0:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82877a30
	sub_82877A30(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82946180
	sub_82946180(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,119
	ctx.r5.s64 = 119;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828c932c
	if (cr0.eq) goto loc_828C932C;
	// addi r5,r28,224
	ctx.r5.s64 = r28.s64 + 224;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82949208
	sub_82949208(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x828c9330
	goto loc_828C9330;
loc_828C932C:
	// mr r30,r27
	r30.u64 = r27.u64;
loc_828C9330:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82877af8
	sub_82877AF8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82946180
	sub_82946180(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,121
	ctx.r5.s64 = 121;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828c938c
	if (cr0.eq) goto loc_828C938C;
	// addi r5,r28,232
	ctx.r5.s64 = r28.s64 + 232;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82949618
	sub_82949618(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x828c9390
	goto loc_828C9390;
loc_828C938C:
	// mr r30,r27
	r30.u64 = r27.u64;
loc_828C9390:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82877bc0
	sub_82877BC0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82946180
	sub_82946180(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,123
	ctx.r5.s64 = 123;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828c93ec
	if (cr0.eq) goto loc_828C93EC;
	// addi r5,r28,248
	ctx.r5.s64 = r28.s64 + 248;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82948bb8
	sub_82948BB8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x828c93f0
	goto loc_828C93F0;
loc_828C93EC:
	// mr r30,r27
	r30.u64 = r27.u64;
loc_828C93F0:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82877c88
	sub_82877C88(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82946180
	sub_82946180(ctx, base);
loc_828C941C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_828C9428"))) PPC_WEAK_FUNC(sub_828C9428);
PPC_FUNC_IMPL(__imp__sub_828C9428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v60{};
	PPCVRegister v61{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8291c5d0
	sub_8291C5D0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x828c9470
	if (cr0.eq) goto loc_828C9470;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e627d0
	sub_82E627D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82945d58
	sub_82945D58(ctx, base);
loc_828C9470:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828c83f0
	sub_828C83F0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lvx128 v60,r0,r3
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vsubfp128 v63,v60,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v60.f32), simde_mm_load_ps(v63.f32)));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// vspltisw128 v62,1
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_set1_epi32(int(0x1)));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// vspltisw128 v61,0
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_set1_epi32(int(0x0)));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,2240(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f0.f64 = double(temp.f32);
	// vcsxwfp128 v13,v62,1
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v62.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
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
	// stvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x828c8300
	sub_828C8300(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,124(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// ble cr6,0x828c952c
	if (!cr6.gt) goto loc_828C952C;
	// lwz r11,112(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 112);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,112(r29)
	PPC_STORE_U32(r29.u32 + 112, r11.u32);
	// b 0x828c9560
	goto loc_828C9560;
loc_828C952C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8291c5d0
	sub_8291C5D0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828c9560
	if (cr0.eq) goto loc_828C9560;
	// bl 0x82945638
	sub_82945638(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r29,108
	ctx.r3.s64 = r29.s64 + 108;
	// bl 0x823d7100
	sub_823D7100(ctx, base);
loc_828C9560:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828C9568"))) PPC_WEAK_FUNC(sub_828C9568);
PPC_FUNC_IMPL(__imp__sub_828C9568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r31,r11,112
	r31.s64 = r11.s64 + 112;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 112);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x828c95a0
	if (cr0.eq) goto loc_828C95A0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,108(r11)
	PPC_STORE_U32(r11.u32 + 108, ctx.r10.u32);
	// b 0x828c96d4
	goto loc_828C96D4;
loc_828C95A0:
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// rlwinm. r9,r10,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x828c95c4
	if (cr0.eq) goto loc_828C95C4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r9,-31955
	ctx.r9.s64 = -2094202880;
	// rlwinm r10,r10,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r10,108(r11)
	PPC_STORE_U32(r11.u32 + 108, ctx.r10.u32);
	// lwz r4,16200(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16200);
	// b 0x828c96a0
	goto loc_828C96A0;
loc_828C95C4:
	// rlwinm. r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x828c95e4
	if (cr0.eq) goto loc_828C95E4;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// lis r9,-31955
	ctx.r9.s64 = -2094202880;
	// rlwinm r10,r10,0,27,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r10,108(r11)
	PPC_STORE_U32(r11.u32 + 108, ctx.r10.u32);
	// lwz r4,16196(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16196);
	// b 0x828c96a0
	goto loc_828C96A0;
loc_828C95E4:
	// rlwinm. r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x828c9604
	if (cr0.eq) goto loc_828C9604;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// lis r9,-31955
	ctx.r9.s64 = -2094202880;
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r10,108(r11)
	PPC_STORE_U32(r11.u32 + 108, ctx.r10.u32);
	// lwz r4,16184(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16184);
	// b 0x828c96a0
	goto loc_828C96A0;
loc_828C9604:
	// rlwinm. r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x828c9624
	if (cr0.eq) goto loc_828C9624;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// lis r9,-31955
	ctx.r9.s64 = -2094202880;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,108(r11)
	PPC_STORE_U32(r11.u32 + 108, ctx.r10.u32);
	// lwz r4,16180(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16180);
	// b 0x828c96a0
	goto loc_828C96A0;
loc_828C9624:
	// rlwinm. r9,r10,24,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x828c9644
	if (cr0.eq) goto loc_828C9644;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// lis r9,-31955
	ctx.r9.s64 = -2094202880;
	// rlwinm r10,r10,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r10,108(r11)
	PPC_STORE_U32(r11.u32 + 108, ctx.r10.u32);
	// lwz r4,16204(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16204);
	// b 0x828c96a0
	goto loc_828C96A0;
loc_828C9644:
	// rlwinm. r9,r10,28,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x828c9664
	if (cr0.eq) goto loc_828C9664;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// lis r9,-31955
	ctx.r9.s64 = -2094202880;
	// rlwinm r10,r10,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r10,108(r11)
	PPC_STORE_U32(r11.u32 + 108, ctx.r10.u32);
	// lwz r4,16188(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16188);
	// b 0x828c96a0
	goto loc_828C96A0;
loc_828C9664:
	// rlwinm. r9,r10,25,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x828c9684
	if (cr0.eq) goto loc_828C9684;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// lis r9,-31955
	ctx.r9.s64 = -2094202880;
	// rlwinm r10,r10,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r10,108(r11)
	PPC_STORE_U32(r11.u32 + 108, ctx.r10.u32);
	// lwz r4,16208(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16208);
	// b 0x828c96a0
	goto loc_828C96A0;
loc_828C9684:
	// rlwinm. r10,r10,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x828c96d4
	if (cr0.eq) goto loc_828C96D4;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// lis r9,-31955
	ctx.r9.s64 = -2094202880;
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r10,108(r11)
	PPC_STORE_U32(r11.u32 + 108, ctx.r10.u32);
	// lwz r4,16192(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16192);
loc_828C96A0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,140(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_828C96D4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828c973c
	if (cr0.eq) goto loc_828C973C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,128(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 128);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x827f01a0
	sub_827F01A0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828c973c
	if (cr0.eq) goto loc_828C973C;
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-1288(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -1288);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,140(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_828C973C:
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

__attribute__((alias("__imp__sub_828C9758"))) PPC_WEAK_FUNC(sub_828C9758);
PPC_FUNC_IMPL(__imp__sub_828C9758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x828c83f0
	sub_828C83F0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lvx128 v63,r0,r29
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f1,-31284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31284);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828c9428
	sub_828C9428(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828c9568
	sub_828C9568(ctx, base);
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x828c9834
	if (!cr0.eq) goto loc_828C9834;
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828c9834
	if (cr0.eq) goto loc_828C9834;
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,4656(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4656);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827f5568
	sub_827F5568(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_828C9834:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828C9840"))) PPC_WEAK_FUNC(sub_828C9840);
PPC_FUNC_IMPL(__imp__sub_828C9840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x8315cf68
	sub_8315CF68(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x828c9874
	if (cr0.eq) goto loc_828C9874;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_828C9874:
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

__attribute__((alias("__imp__sub_828C9888"))) PPC_WEAK_FUNC(sub_828C9888);
PPC_FUNC_IMPL(__imp__sub_828C9888) {
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
	// bl 0x82e65b68
	sub_82E65B68(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r11,r11,-6872
	r11.s64 = r11.s64 + -6872;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82908f30
	sub_82908F30(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-6816
	r11.s64 = r11.s64 + -6816;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_828C98D8"))) PPC_WEAK_FUNC(sub_828C98D8);
PPC_FUNC_IMPL(__imp__sub_828C98D8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x828c9888
	sub_828C9888(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,-6760
	ctx.r10.s64 = ctx.r10.s64 + -6760;
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// lwz r4,4644(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4644);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e62730
	sub_82E62730(ctx, base);
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

__attribute__((alias("__imp__sub_828C9948"))) PPC_WEAK_FUNC(sub_828C9948);
PPC_FUNC_IMPL(__imp__sub_828C9948) {
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-7000
	ctx.r4.s64 = r11.s64 + -7000;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828c9984
	if (cr0.eq) goto loc_828C9984;
	// bl 0x828c98d8
	sub_828C98D8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x828c9988
	goto loc_828C9988;
loc_828C9984:
	// li r31,0
	r31.s64 = 0;
loc_828C9988:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828c9128
	sub_828C9128(ctx, base);
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

__attribute__((alias("__imp__sub_828C99B8"))) PPC_WEAK_FUNC(sub_828C99B8);
PPC_FUNC_IMPL(__imp__sub_828C99B8) {
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
	// lwz r11,24(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bne cr6,0x828c9a04
	if (!cr6.eq) goto loc_828C9A04;
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,4656(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4656);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// bl 0x8315cf68
	sub_8315CF68(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x827f5568
	sub_827F5568(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_828C9A04:
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

__attribute__((alias("__imp__sub_828C9A18"))) PPC_WEAK_FUNC(sub_828C9A18);
PPC_FUNC_IMPL(__imp__sub_828C9A18) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x828c9888
	sub_828C9888(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-6660
	r11.s64 = r11.s64 + -6660;
	// addi r4,r10,20740
	ctx.r4.s64 = ctx.r10.s64 + 20740;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e62730
	sub_82E62730(ctx, base);
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

__attribute__((alias("__imp__sub_828C9A78"))) PPC_WEAK_FUNC(sub_828C9A78);
PPC_FUNC_IMPL(__imp__sub_828C9A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCVRegister v127{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// li r12,-48
	r12.s64 = -48;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8315cf68
	sub_8315CF68(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,-20912
	r11.s64 = r11.s64 + -20912;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v63,v127
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v127.f32)));
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r9,108(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// addi r11,r11,17072
	r11.s64 = r11.s64 + 17072;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lis r7,-31946
	ctx.r7.s64 = -2093613056;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r6,28668(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28668);
	// vaddfp128 v62,v63,v62
	simde_mm_store_ps(v62.f32, simde_mm_add_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x822ec588
	sub_822EC588(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq 0x828c9b18
	if (cr0.eq) goto loc_828C9B18;
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lwz r4,4596(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4596);
	// b 0x828c9b20
	goto loc_828C9B20;
loc_828C9B18:
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lwz r4,4684(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4684);
loc_828C9B20:
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827f5568
	sub_827F5568(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// li r0,-48
	r0.s64 = -48;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C9B58"))) PPC_WEAK_FUNC(sub_828C9B58);
PPC_FUNC_IMPL(__imp__sub_828C9B58) {
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
	// beq 0x828c9bb0
	if (cr0.eq) goto loc_828C9BB0;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-6600
	ctx.r9.s64 = r11.s64 + -6600;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x828c9bb4
	goto loc_828C9BB4;
loc_828C9BB0:
	// li r11,0
	r11.s64 = 0;
loc_828C9BB4:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828c9c00
	if (!cr6.eq) goto loc_828C9C00;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828c9be0
	if (cr6.eq) goto loc_828C9BE0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_828C9BE0:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,16692(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16692);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_828C9C00:
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

__attribute__((alias("__imp__sub_828C9C20"))) PPC_WEAK_FUNC(sub_828C9C20);
PPC_FUNC_IMPL(__imp__sub_828C9C20) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// bl 0x8315cf68
	sub_8315CF68(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x828c9cf0
	if (cr0.eq) goto loc_828C9CF0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827f5678
	sub_827F5678(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,3532(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3532);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-6584
	ctx.r4.s64 = r11.s64 + -6584;
	// li r5,65
	ctx.r5.s64 = 65;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x828c9cbc
	if (cr0.eq) goto loc_828C9CBC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x8291c5d0
	sub_8291C5D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82512d38
	sub_82512D38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82493478
	sub_82493478(ctx, base);
	// b 0x828c9cc0
	goto loc_828C9CC0;
loc_828C9CBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828C9CC0:
	// lwz r31,108(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 108);
	// stw r3,108(r29)
	PPC_STORE_U32(r29.u32 + 108, ctx.r3.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828c9ce0
	if (cr6.eq) goto loc_828C9CE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82493550
	sub_82493550(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_828C9CE0:
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828c9cf0
	if (cr0.eq) goto loc_828C9CF0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_828C9CF0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_828C9CF8"))) PPC_WEAK_FUNC(sub_828C9CF8);
PPC_FUNC_IMPL(__imp__sub_828C9CF8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x828c9888
	sub_828C9888(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-6456
	r11.s64 = r11.s64 + -6456;
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// lwz r4,4592(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4592);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e62730
	sub_82E62730(ctx, base);
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

__attribute__((alias("__imp__sub_828C9D60"))) PPC_WEAK_FUNC(sub_828C9D60);
PPC_FUNC_IMPL(__imp__sub_828C9D60) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,108(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828c9d94
	if (cr6.eq) goto loc_828C9D94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82493550
	sub_82493550(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_828C9D94:
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// bl 0x8290dd30
	sub_8290DD30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e657c8
	sub_82E657C8(ctx, base);
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

__attribute__((alias("__imp__sub_828C9DC0"))) PPC_WEAK_FUNC(sub_828C9DC0);
PPC_FUNC_IMPL(__imp__sub_828C9DC0) {
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
	// bl 0x828c9d60
	sub_828C9D60(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828c9df0
	if (cr0.eq) goto loc_828C9DF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_828C9DF0:
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

__attribute__((alias("__imp__sub_828C9E10"))) PPC_WEAK_FUNC(sub_828C9E10);
PPC_FUNC_IMPL(__imp__sub_828C9E10) {
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-6584
	ctx.r4.s64 = r11.s64 + -6584;
	// li r5,46
	ctx.r5.s64 = 46;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828c9e4c
	if (cr0.eq) goto loc_828C9E4C;
	// bl 0x828c9cf8
	sub_828C9CF8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x828c9e50
	goto loc_828C9E50;
loc_828C9E4C:
	// li r31,0
	r31.s64 = 0;
loc_828C9E50:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828c9b58
	sub_828C9B58(ctx, base);
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

__attribute__((alias("__imp__sub_828C9E80"))) PPC_WEAK_FUNC(sub_828C9E80);
PPC_FUNC_IMPL(__imp__sub_828C9E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8291c5d0
	sub_8291C5D0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r4,2
	ctx.r4.s64 = 2;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82914830
	sub_82914830(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C9EB8"))) PPC_WEAK_FUNC(sub_828C9EB8);
PPC_FUNC_IMPL(__imp__sub_828C9EB8) {
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
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,4656(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4656);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827f5568
	sub_827F5568(ctx, base);
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

__attribute__((alias("__imp__sub_828C9F08"))) PPC_WEAK_FUNC(sub_828C9F08);
PPC_FUNC_IMPL(__imp__sub_828C9F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8291c5d0
	sub_8291C5D0(ctx, base);
	// bl 0x8290ef78
	sub_8290EF78(ctx, base);
	// bl 0x82946778
	sub_82946778(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x827f5678
	sub_827F5678(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,3532(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3532);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_828C9F78"))) PPC_WEAK_FUNC(sub_828C9F78);
PPC_FUNC_IMPL(__imp__sub_828C9F78) {
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
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828c82b8
	sub_828C82B8(ctx, base);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,108(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,16236(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16236);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// bl 0x827f55a8
	sub_827F55A8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x827f03c8
	sub_827F03C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82904f08
	sub_82904F08(ctx, base);
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

__attribute__((alias("__imp__sub_828C9FF0"))) PPC_WEAK_FUNC(sub_828C9FF0);
PPC_FUNC_IMPL(__imp__sub_828C9FF0) {
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
	// bl 0x82e627d0
	sub_82E627D0(ctx, base);
	// lfs f0,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 108);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fsubs f0,f0,f1
	f0.f64 = double(float(f0.f64 - ctx.f1.f64));
	// stfs f0,108(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// lfs f1,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// bge cr6,0x828ca030
	if (!cr6.lt) goto loc_828CA030;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e65c78
	sub_82E65C78(ctx, base);
loc_828CA030:
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

__attribute__((alias("__imp__sub_828CA048"))) PPC_WEAK_FUNC(sub_828CA048);
PPC_FUNC_IMPL(__imp__sub_828CA048) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828c82b8
	sub_828C82B8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x828ca080
	if (!cr6.eq) goto loc_828CA080;
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lwz r4,4644(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4644);
	// b 0x828ca088
	goto loc_828CA088;
loc_828CA080:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lwz r4,16616(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16616);
loc_828CA088:
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827f5568
	sub_827F5568(ctx, base);
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

__attribute__((alias("__imp__sub_828CA0B8"))) PPC_WEAK_FUNC(sub_828CA0B8);
PPC_FUNC_IMPL(__imp__sub_828CA0B8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,16220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16220);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,140(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_828CA110"))) PPC_WEAK_FUNC(sub_828CA110);
PPC_FUNC_IMPL(__imp__sub_828CA110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,128(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 128);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x827f01a0
	sub_827F01A0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828ca198
	if (cr0.eq) goto loc_828CA198;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x828ca178
	if (cr6.gt) goto loc_828CA178;
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lwz r4,4648(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4648);
	// b 0x828ca180
	goto loc_828CA180;
loc_828CA178:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lwz r4,16628(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16628);
loc_828CA180:
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827f5568
	sub_827F5568(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_828CA198:
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

__attribute__((alias("__imp__sub_828CA1B0"))) PPC_WEAK_FUNC(sub_828CA1B0);
PPC_FUNC_IMPL(__imp__sub_828CA1B0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,128(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 128);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x827f0198
	sub_827F0198(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,8616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8616);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x828ca1f4
	if (!cr6.gt) goto loc_828CA1F4;
	// addi r3,r30,108
	ctx.r3.s64 = r30.s64 + 108;
	// bl 0x82e0eb08
	sub_82E0EB08(ctx, base);
loc_828CA1F4:
	// lwz r11,160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828ca244
	if (cr6.eq) goto loc_828CA244;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r29,r30,144
	r29.s64 = r30.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lfs f1,-17192(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -17192);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e86010
	sub_82E86010(ctx, base);
	// lwz r11,160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_828CA244:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828CA250"))) PPC_WEAK_FUNC(sub_828CA250);
PPC_FUNC_IMPL(__imp__sub_828CA250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,144
	ctx.r4.s64 = r11.s64 + 144;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8291c5d0
	sub_8291C5D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828ca2a4
	if (cr0.eq) goto loc_828CA2A4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,188(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 188);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_828CA2A4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8291ce88
	sub_8291CE88(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,4824(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4824);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827f5598
	sub_827F5598(ctx, base);
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

__attribute__((alias("__imp__sub_828CA2F0"))) PPC_WEAK_FUNC(sub_828CA2F0);
PPC_FUNC_IMPL(__imp__sub_828CA2F0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8291ce88
	sub_8291CE88(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8291ce88
	sub_8291CE88(ctx, base);
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

__attribute__((alias("__imp__sub_828CA338"))) PPC_WEAK_FUNC(sub_828CA338);
PPC_FUNC_IMPL(__imp__sub_828CA338) {
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
	// bne cr6,0x828ca378
	if (!cr6.eq) goto loc_828CA378;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828ca3a8
	if (cr6.eq) goto loc_828CA3A8;
	// ld r11,0(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// ld r11,8(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// b 0x828ca3a8
	goto loc_828CA3A8;
loc_828CA378:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x828ca3a8
	if (cr6.eq) goto loc_828CA3A8;
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,18080
	ctx.r4.s64 = r11.s64 + 18080;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828ca3a0
	if (cr0.eq) goto loc_828CA3A0;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x828ca3a8
	goto loc_828CA3A8;
loc_828CA3A0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_828CA3A8:
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

__attribute__((alias("__imp__sub_828CA3C0"))) PPC_WEAK_FUNC(sub_828CA3C0);
PPC_FUNC_IMPL(__imp__sub_828CA3C0) {
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
	// beq 0x828ca418
	if (cr0.eq) goto loc_828CA418;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-6396
	ctx.r9.s64 = r11.s64 + -6396;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x828ca41c
	goto loc_828CA41C;
loc_828CA418:
	// li r11,0
	r11.s64 = 0;
loc_828CA41C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828ca468
	if (!cr6.eq) goto loc_828CA468;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828ca448
	if (cr6.eq) goto loc_828CA448;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_828CA448:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,16832(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16832);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_828CA468:
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

__attribute__((alias("__imp__sub_828CA488"))) PPC_WEAK_FUNC(sub_828CA488);
PPC_FUNC_IMPL(__imp__sub_828CA488) {
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
	// beq 0x828ca4e0
	if (cr0.eq) goto loc_828CA4E0;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-6376
	ctx.r9.s64 = r11.s64 + -6376;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x828ca4e4
	goto loc_828CA4E4;
loc_828CA4E0:
	// li r11,0
	r11.s64 = 0;
loc_828CA4E4:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828ca530
	if (!cr6.eq) goto loc_828CA530;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828ca510
	if (cr6.eq) goto loc_828CA510;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_828CA510:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,16832(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16832);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_828CA530:
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

__attribute__((alias("__imp__sub_828CA550"))) PPC_WEAK_FUNC(sub_828CA550);
PPC_FUNC_IMPL(__imp__sub_828CA550) {
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
	// beq 0x828ca5a8
	if (cr0.eq) goto loc_828CA5A8;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-6356
	ctx.r9.s64 = r11.s64 + -6356;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x828ca5ac
	goto loc_828CA5AC;
loc_828CA5A8:
	// li r11,0
	r11.s64 = 0;
loc_828CA5AC:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828ca5f8
	if (!cr6.eq) goto loc_828CA5F8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828ca5d8
	if (cr6.eq) goto loc_828CA5D8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_828CA5D8:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,16832(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16832);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_828CA5F8:
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

__attribute__((alias("__imp__sub_828CA618"))) PPC_WEAK_FUNC(sub_828CA618);
PPC_FUNC_IMPL(__imp__sub_828CA618) {
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
	// beq 0x828ca670
	if (cr0.eq) goto loc_828CA670;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-6336
	ctx.r9.s64 = r11.s64 + -6336;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x828ca674
	goto loc_828CA674;
loc_828CA670:
	// li r11,0
	r11.s64 = 0;
loc_828CA674:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828ca6c0
	if (!cr6.eq) goto loc_828CA6C0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828ca6a0
	if (cr6.eq) goto loc_828CA6A0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_828CA6A0:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,16832(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16832);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_828CA6C0:
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

__attribute__((alias("__imp__sub_828CA6E0"))) PPC_WEAK_FUNC(sub_828CA6E0);
PPC_FUNC_IMPL(__imp__sub_828CA6E0) {
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
	// beq 0x828ca738
	if (cr0.eq) goto loc_828CA738;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-6316
	ctx.r9.s64 = r11.s64 + -6316;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x828ca73c
	goto loc_828CA73C;
loc_828CA738:
	// li r11,0
	r11.s64 = 0;
loc_828CA73C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828ca788
	if (!cr6.eq) goto loc_828CA788;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828ca768
	if (cr6.eq) goto loc_828CA768;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_828CA768:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,16832(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16832);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_828CA788:
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

__attribute__((alias("__imp__sub_828CA7A8"))) PPC_WEAK_FUNC(sub_828CA7A8);
PPC_FUNC_IMPL(__imp__sub_828CA7A8) {
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
	// beq 0x828ca800
	if (cr0.eq) goto loc_828CA800;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-6296
	ctx.r9.s64 = r11.s64 + -6296;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x828ca804
	goto loc_828CA804;
loc_828CA800:
	// li r11,0
	r11.s64 = 0;
loc_828CA804:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828ca850
	if (!cr6.eq) goto loc_828CA850;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828ca830
	if (cr6.eq) goto loc_828CA830;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_828CA830:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,16832(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16832);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_828CA850:
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

__attribute__((alias("__imp__sub_828CA870"))) PPC_WEAK_FUNC(sub_828CA870);
PPC_FUNC_IMPL(__imp__sub_828CA870) {
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
	// beq 0x828ca8c8
	if (cr0.eq) goto loc_828CA8C8;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-6276
	ctx.r9.s64 = r11.s64 + -6276;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x828ca8cc
	goto loc_828CA8CC;
loc_828CA8C8:
	// li r11,0
	r11.s64 = 0;
loc_828CA8CC:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828ca918
	if (!cr6.eq) goto loc_828CA918;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828ca8f8
	if (cr6.eq) goto loc_828CA8F8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_828CA8F8:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,16832(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16832);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_828CA918:
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

__attribute__((alias("__imp__sub_828CA938"))) PPC_WEAK_FUNC(sub_828CA938);
PPC_FUNC_IMPL(__imp__sub_828CA938) {
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
	// beq 0x828ca990
	if (cr0.eq) goto loc_828CA990;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-6256
	ctx.r9.s64 = r11.s64 + -6256;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x828ca994
	goto loc_828CA994;
loc_828CA990:
	// li r11,0
	r11.s64 = 0;
loc_828CA994:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828ca9e0
	if (!cr6.eq) goto loc_828CA9E0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828ca9c0
	if (cr6.eq) goto loc_828CA9C0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_828CA9C0:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,16832(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16832);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_828CA9E0:
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

__attribute__((alias("__imp__sub_828CAA00"))) PPC_WEAK_FUNC(sub_828CAA00);
PPC_FUNC_IMPL(__imp__sub_828CAA00) {
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
	// beq 0x828caa58
	if (cr0.eq) goto loc_828CAA58;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-6236
	ctx.r9.s64 = r11.s64 + -6236;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x828caa5c
	goto loc_828CAA5C;
loc_828CAA58:
	// li r11,0
	r11.s64 = 0;
loc_828CAA5C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828caaa8
	if (!cr6.eq) goto loc_828CAAA8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828caa88
	if (cr6.eq) goto loc_828CAA88;
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
loc_828CAA88:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,16832(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16832);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_828CAAA8:
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

__attribute__((alias("__imp__sub_828CAAC8"))) PPC_WEAK_FUNC(sub_828CAAC8);
PPC_FUNC_IMPL(__imp__sub_828CAAC8) {
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
	// beq 0x828cab20
	if (cr0.eq) goto loc_828CAB20;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-6216
	ctx.r9.s64 = r11.s64 + -6216;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x828cab24
	goto loc_828CAB24;
loc_828CAB20:
	// li r11,0
	r11.s64 = 0;
loc_828CAB24:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828cab70
	if (!cr6.eq) goto loc_828CAB70;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828cab50
	if (cr6.eq) goto loc_828CAB50;
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
loc_828CAB50:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,16832(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16832);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_828CAB70:
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

__attribute__((alias("__imp__sub_828CAB90"))) PPC_WEAK_FUNC(sub_828CAB90);
PPC_FUNC_IMPL(__imp__sub_828CAB90) {
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
	// beq 0x828cabe8
	if (cr0.eq) goto loc_828CABE8;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-6196
	ctx.r9.s64 = r11.s64 + -6196;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x828cabec
	goto loc_828CABEC;
loc_828CABE8:
	// li r11,0
	r11.s64 = 0;
loc_828CABEC:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828cac38
	if (!cr6.eq) goto loc_828CAC38;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828cac18
	if (cr6.eq) goto loc_828CAC18;
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
loc_828CAC18:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,16832(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16832);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_828CAC38:
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

__attribute__((alias("__imp__sub_828CAC58"))) PPC_WEAK_FUNC(sub_828CAC58);
PPC_FUNC_IMPL(__imp__sub_828CAC58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x827f55d8
	sub_827F55D8(ctx, base);
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lvx128 v62,r0,r3
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,16848
	r11.s64 = r11.s64 + 16848;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// lfs f0,-21820(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -21820);
	f0.f64 = double(temp.f32);
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x828cace8
	if (!cr6.gt) goto loc_828CACE8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,128(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 128);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x827f01a0
	sub_827F01A0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828cace8
	if (cr0.eq) goto loc_828CACE8;
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,4644(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4644);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827f5568
	sub_827F5568(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_828CACE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CAD00"))) PPC_WEAK_FUNC(sub_828CAD00);
PPC_FUNC_IMPL(__imp__sub_828CAD00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x8291c5d0
	sub_8291C5D0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x828cae00
	if (cr0.eq) goto loc_828CAE00;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,160(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 160);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8291c5d0
	sub_8291C5D0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x828cad94
	if (cr0.eq) goto loc_828CAD94;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,144(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-11896(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -11896);
	f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_828CAD94:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,148(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,152(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827f57b8
	sub_827F57B8(ctx, base);
loc_828CAE00:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828CAE08"))) PPC_WEAK_FUNC(sub_828CAE08);
PPC_FUNC_IMPL(__imp__sub_828CAE08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82e85b50
	sub_82E85B50(ctx, base);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// vspltisw128 v62,1
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_set1_epi32(int(0x1)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// vspltisw128 v61,0
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_set1_epi32(int(0x0)));
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 48);
	f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f13,52(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v13,v62,1
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v62.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// vmsum4fp128 v62,v63,v63
	simde_mm_store_ps(v62.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xFF));
	// lfs f12,56(r30)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,60(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 60);
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
	// vrsqrtefp128 v0,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(v62.f32))));
	// vor128 v12,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)v62.u8));
	// vmulfp128 v11,v62,v13
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp128 v10,v62,v61
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v61.f32)));
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8291c5d0
	sub_8291C5D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822efac8
	sub_822EFAC8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,16
	ctx.r8.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r10,48
	ctx.r10.s64 = 48;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 132);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// lvlx128 v63,r8,r7
	temp.u32 = ctx.r8.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r9,r6
	temp.u32 = ctx.r9.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
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
	// bl 0x82e1c2e8
	sub_82E1C2E8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828caf48
	if (cr6.eq) goto loc_828CAF48;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CAF48:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

__attribute__((alias("__imp__sub_828CAF68"))) PPC_WEAK_FUNC(sub_828CAF68);
PPC_FUNC_IMPL(__imp__sub_828CAF68) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8315cf68
	sub_8315CF68(ctx, base);
	// bl 0x8291c5d0
	sub_8291C5D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828cafcc
	if (cr0.eq) goto loc_828CAFCC;
	// li r11,48
	r11.s64 = 48;
	// li r10,544
	ctx.r10.s64 = 544;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r8,560
	ctx.r8.s64 = 560;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,528
	ctx.r6.s64 = 528;
	// lvx128 v63,r31,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r31,r9
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r31,r7
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfs f0,576(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 576, temp.u32);
loc_828CAFCC:
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,4760(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4760);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e67a88
	sub_82E67A88(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828cb00c
	if (cr6.eq) goto loc_828CB00C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CB00C:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_828CB028"))) PPC_WEAK_FUNC(sub_828CB028);
PPC_FUNC_IMPL(__imp__sub_828CB028) {
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
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828cb054
	if (cr6.eq) goto loc_828CB054;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CB054:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e62610
	sub_82E62610(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828cb06c
	if (cr0.eq) goto loc_828CB06C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_828CB06C:
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

__attribute__((alias("__imp__sub_828CB088"))) PPC_WEAK_FUNC(sub_828CB088);
PPC_FUNC_IMPL(__imp__sub_828CB088) {
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
	// beq cr6,0x828cb0b4
	if (cr6.eq) goto loc_828CB0B4;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x828ca338
	sub_828CA338(ctx, base);
	// b 0x828cb0c0
	goto loc_828CB0C0;
loc_828CB0B4:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r11,r11,18080
	r11.s64 = r11.s64 + 18080;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_828CB0C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CB0D0"))) PPC_WEAK_FUNC(sub_828CB0D0);
PPC_FUNC_IMPL(__imp__sub_828CB0D0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,16212(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16212);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,140(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8291c5d0
	sub_8291C5D0(ctx, base);
	// bl 0x8290ef78
	sub_8290EF78(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82946778
	sub_82946778(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829482c8
	sub_829482C8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,-6144
	ctx.r4.s64 = ctx.r10.s64 + -6144;
	// li r5,161
	ctx.r5.s64 = 161;
	// lfs f0,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// li r3,32
	ctx.r3.s64 = 32;
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828cb178
	if (cr0.eq) goto loc_828CB178;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x829482e8
	sub_829482E8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x828cb17c
	goto loc_828CB17C;
loc_828CB178:
	// li r31,0
	r31.s64 = 0;
loc_828CB17C:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x828739b0
	sub_828739B0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x828cb1d4
	if (cr6.eq) goto loc_828CB1D4;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
loc_828CB1B8:
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
	// bne 0x828cb1b8
	if (!cr0.eq) goto loc_828CB1B8;
loc_828CB1D4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82946780
	sub_82946780(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828cb1f0
	if (cr6.eq) goto loc_828CB1F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CB1F0:
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

__attribute__((alias("__imp__sub_828CB208"))) PPC_WEAK_FUNC(sub_828CB208);
PPC_FUNC_IMPL(__imp__sub_828CB208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8291c5d0
	sub_8291C5D0(ctx, base);
	// bl 0x8290ef78
	sub_8290EF78(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82946720
	sub_82946720(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825b40b8
	sub_825B40B8(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828cb298
	if (cr0.eq) goto loc_828CB298;
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,4644(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4644);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827f5568
	sub_827F5568(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828cb3c4
	if (cr6.eq) goto loc_828CB3C4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
	// b 0x828cb3c4
	goto loc_828CB3C4;
loc_828CB298:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r29,-31954
	r29.s64 = -2094137344;
	// bne 0x828cb2f0
	if (!cr0.eq) goto loc_828CB2F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8291c5d0
	sub_8291C5D0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r4,6
	ctx.r4.s64 = 6;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82914830
	sub_82914830(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,4624(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4624);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827f5568
	sub_827F5568(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_828CB2F0:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828cb300
	if (cr6.eq) goto loc_828CB300;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CB300:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828c8460
	sub_828C8460(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x828c8300
	sub_828C8300(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lfs f0,124(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 124);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x828cb348
	if (!cr6.lt) goto loc_828CB348;
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,4644(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4644);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827f5568
	sub_827F5568(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_828CB348:
	// lfs f0,128(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 128);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x828cb374
	if (!cr6.gt) goto loc_828CB374;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,4624(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4624);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827f5568
	sub_827F5568(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_828CB374:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8291c5d0
	sub_8291C5D0(ctx, base);
	// bl 0x8290ef78
	sub_8290EF78(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x828cb3c4
	if (cr0.eq) goto loc_828CB3C4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x829465e8
	sub_829465E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827f00f0
	sub_827F00F0(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,21748(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21748);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_828CB3C4:
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

__attribute__((alias("__imp__sub_828CB3D8"))) PPC_WEAK_FUNC(sub_828CB3D8);
PPC_FUNC_IMPL(__imp__sub_828CB3D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8291c5d0
	sub_8291C5D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x828cb45c
	if (cr0.eq) goto loc_828CB45C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,188(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 188);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-31955
	ctx.r9.s64 = -2094202880;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r9,r9,16848
	ctx.r9.s64 = ctx.r9.s64 + 16848;
	// lfs f0,26548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 26548);
	f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v63,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,164(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 164);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_828CB45C:
	// lwz r11,160(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828cb474
	if (!cr6.eq) goto loc_828CB474;
	// lis r11,-32115
	r11.s64 = -2104688640;
	// addi r11,r11,-21248
	r11.s64 = r11.s64 + -21248;
	// stw r11,160(r29)
	PPC_STORE_U32(r29.u32 + 160, r11.u32);
loc_828CB474:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828CB4B0"))) PPC_WEAK_FUNC(sub_828CB4B0);
PPC_FUNC_IMPL(__imp__sub_828CB4B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8291cc00
	sub_8291CC00(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828cb4ec
	if (cr6.eq) goto loc_828CB4EC;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,208
	ctx.r9.s64 = 208;
	// addi r10,r10,-19072
	ctx.r10.s64 = ctx.r10.s64 + -19072;
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r9
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_828CB4EC:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828cb4fc
	if (cr6.eq) goto loc_828CB4FC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CB4FC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8291c5d0
	sub_8291C5D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828cb518
	if (cr0.eq) goto loc_828CB518;
	// bl 0x82bc9a60
	sub_82BC9A60(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x822ef9a8
	sub_822EF9A8(ctx, base);
loc_828CB518:
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

__attribute__((alias("__imp__sub_828CB530"))) PPC_WEAK_FUNC(sub_828CB530);
PPC_FUNC_IMPL(__imp__sub_828CB530) {
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
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x828cb584
	if (cr0.eq) goto loc_828CB584;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e626d8
	sub_82E626D8(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,-6152
	ctx.r10.s64 = ctx.r10.s64 + -6152;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// b 0x828cb588
	goto loc_828CB588;
loc_828CB584:
	// li r31,0
	r31.s64 = 0;
loc_828CB588:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828caac8
	sub_828CAAC8(ctx, base);
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

__attribute__((alias("__imp__sub_828CB5B8"))) PPC_WEAK_FUNC(sub_828CB5B8);
PPC_FUNC_IMPL(__imp__sub_828CB5B8) {
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
	// bl 0x828cab90
	sub_828CAB90(ctx, base);
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
	// beq cr6,0x828cb610
	if (cr6.eq) goto loc_828CB610;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CB610:
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

__attribute__((alias("__imp__sub_828CB628"))) PPC_WEAK_FUNC(sub_828CB628);
PPC_FUNC_IMPL(__imp__sub_828CB628) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31954
	r11.s64 = -2094137344;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r4,-1236(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -1236);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,140(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8291c5d0
	sub_8291C5D0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x828cb7b0
	if (cr0.eq) goto loc_828CB7B0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828cb530
	sub_828CB530(ctx, base);
	// lwz r27,84(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,80(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// beq cr6,0x828cb6bc
	if (cr6.eq) goto loc_828CB6BC;
	// addi r11,r27,4
	r11.s64 = r27.s64 + 4;
loc_828CB6A0:
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
	// bne 0x828cb6a0
	if (!cr0.eq) goto loc_828CB6A0;
loc_828CB6BC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x828cb6dc
	if (!cr6.eq) goto loc_828CB6DC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_828CB6DC:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r25,r1,88
	r25.s64 = ctx.r1.s64 + 88;
	// bl 0x8250c5d0
	sub_8250C5D0(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r31,r11,-6144
	r31.s64 = r11.s64 + -6144;
	// li r5,588
	ctx.r5.s64 = 588;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r29,40
	ctx.r3.s64 = r29.s64 + 40;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828cb720
	if (cr6.eq) goto loc_828CB720;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CB720:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,590
	ctx.r5.s64 = 590;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828cb75c
	if (cr0.eq) goto loc_828CB75C;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r28.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-6176
	r11.s64 = r11.s64 + -6176;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x828cb760
	goto loc_828CB760;
loc_828CB75C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828CB760:
	// addi r3,r30,108
	ctx.r3.s64 = r30.s64 + 108;
	// bl 0x828cb5b8
	sub_828CB5B8(ctx, base);
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// addi r4,r11,29232
	ctx.r4.s64 = r11.s64 + 29232;
	// bl 0x825904a0
	sub_825904A0(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// addi r4,r11,-15648
	ctx.r4.s64 = r11.s64 + -15648;
	// bl 0x825904e8
	sub_825904E8(ctx, base);
	// lwz r4,108(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// bl 0x82e1b4a0
	sub_82E1B4A0(ctx, base);
	// lwz r4,116(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// lwz r3,64(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 64);
	// bl 0x82e1b810
	sub_82E1B810(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x828cb7b0
	if (cr6.eq) goto loc_828CB7B0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CB7B0:
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,4840(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4840);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827f5598
	sub_827F5598(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8291ce88
	sub_8291CE88(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8291ce88
	sub_8291CE88(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r31,28492(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 28492);
	// bl 0x827f55a0
	sub_827F55A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82491af8
	sub_82491AF8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_828CB818"))) PPC_WEAK_FUNC(sub_828CB818);
PPC_FUNC_IMPL(__imp__sub_828CB818) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x8315cf68
	sub_8315CF68(ctx, base);
	// bl 0x8291c5d0
	sub_8291C5D0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x828cb968
	if (cr0.eq) goto loc_828CB968;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x828cb860
	if (!cr6.eq) goto loc_828CB860;
	// li r3,0
	ctx.r3.s64 = 0;
loc_828CB860:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8250c5d0
	sub_8250C5D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, xer);
	// lfs f31,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// beq cr6,0x828cb90c
	if (cr6.eq) goto loc_828CB90C;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823c2040
	sub_823C2040(ctx, base);
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
	// beq cr6,0x828cb8cc
	if (cr6.eq) goto loc_828CB8CC;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828CB8B0:
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
	// bne 0x828cb8b0
	if (!cr0.eq) goto loc_828CB8B0;
loc_828CB8CC:
	// lis r11,-32247
	r11.s64 = -2113339392;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-6144
	ctx.r4.s64 = r11.s64 + -6144;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,642
	ctx.r5.s64 = 642;
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828cb8fc
	if (cr6.eq) goto loc_828CB8FC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CB8FC:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828cb90c
	if (cr6.eq) goto loc_828CB90C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CB90C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8315cf68
	sub_8315CF68(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x828cb924
	if (cr0.eq) goto loc_828CB924;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x828cb4b0
	sub_828CB4B0(ctx, base);
loc_828CB924:
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,4720(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4720);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x82e67a88
	sub_82E67A88(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828cb960
	if (cr6.eq) goto loc_828CB960;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CB960:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828cb96c
	goto loc_828CB96C;
loc_828CB968:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828CB96C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_828CB978"))) PPC_WEAK_FUNC(sub_828CB978);
PPC_FUNC_IMPL(__imp__sub_828CB978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828CB998"))) PPC_WEAK_FUNC(sub_828CB998);
PPC_FUNC_IMPL(__imp__sub_828CB998) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// clrlwi. r28,r29,24
	r28.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x828cb9e8
	if (cr0.eq) goto loc_828CB9E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31960
	r11.s64 = -2094530560;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,776
	ctx.r3.s64 = r11.s64 + 776;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828cb9e8
	if (cr0.eq) goto loc_828CB9E8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828caf68
	sub_828CAF68(ctx, base);
	// b 0x828cba30
	goto loc_828CBA30;
loc_828CB9E8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x828cba20
	if (cr6.eq) goto loc_828CBA20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,16388
	ctx.r3.s64 = r11.s64 + 16388;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828cba20
	if (cr0.eq) goto loc_828CBA20;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828cb818
	sub_828CB818(ctx, base);
	// b 0x828cba30
	goto loc_828CBA30;
loc_828CBA20:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e71e58
	sub_82E71E58(ctx, base);
loc_828CBA30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_828CBA38"))) PPC_WEAK_FUNC(sub_828CBA38);
PPC_FUNC_IMPL(__imp__sub_828CBA38) {
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
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	r11.s64 = -2093481984;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,5560
	r31.s64 = r11.s64 + 5560;
	// lwz r11,5568(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5568);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x828cba80
	if (!cr0.eq) goto loc_828CBA80;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// lis r8,-32115
	ctx.r8.s64 = -2104688640;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r9,r9,6712
	ctx.r9.s64 = ctx.r9.s64 + 6712;
	// addi r8,r8,-20344
	ctx.r8.s64 = ctx.r8.s64 + -20344;
	// stw r11,5568(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5568, r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
loc_828CBA80:
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
	// beq 0x828cbaac
	if (cr0.eq) goto loc_828CBAAC;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// b 0x828cbab0
	goto loc_828CBAB0;
loc_828CBAAC:
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
loc_828CBAB0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828CBAB8"))) PPC_WEAK_FUNC(sub_828CBAB8);
PPC_FUNC_IMPL(__imp__sub_828CBAB8) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,26828
	ctx.r4.s64 = r11.s64 + 26828;
	// li r5,43
	ctx.r5.s64 = 43;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828cbb34
	if (cr0.eq) goto loc_828CBB34;
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r10,-6164
	ctx.r10.s64 = ctx.r10.s64 + -6164;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// b 0x828cbb38
	goto loc_828CBB38;
loc_828CBB34:
	// li r31,0
	r31.s64 = 0;
loc_828CBB38:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x828caa00
	sub_828CAA00(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82afaf88
	sub_82AFAF88(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828cbb74
	if (cr6.eq) goto loc_828CBB74;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CBB74:
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

__attribute__((alias("__imp__sub_828CBB90"))) PPC_WEAK_FUNC(sub_828CBB90);
PPC_FUNC_IMPL(__imp__sub_828CBB90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
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
	// bl 0x831b0b28
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r9,-31955
	ctx.r9.s64 = -2094202880;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f13,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f0,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f0.f64 = double(temp.f32);
	// addi r29,r9,16848
	r29.s64 = ctx.r9.s64 + 16848;
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r28,r1,112
	r28.s64 = ctx.r1.s64 + 112;
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x827f55d8
	sub_827F55D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x82e85da8
	sub_82E85DA8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// vspltisw128 v63,-1
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// vslw128 v62,v63,v63
	v62.u32[0] = v63.u32[0] << (v63.u8[0] & 0x1F);
	v62.u32[1] = v63.u32[1] << (v63.u8[4] & 0x1F);
	v62.u32[2] = v63.u32[2] << (v63.u8[8] & 0x1F);
	v62.u32[3] = v63.u32[3] << (v63.u8[12] & 0x1F);
	// lis r8,-31954
	ctx.r8.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v61,r0,r11
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v62,v61,v62
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)v62.u8)));
	// vpermwi128 v60,v63,177
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0x4E));
	// vpermwi128 v59,v63,78
	simde_mm_store_si128((simde__m128i*)v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xB1));
	// lwz r4,-1180(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -1180);
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
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,108(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f0.f64 = double(temp.f32);
	// stfs f0,152(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// stfs f11,148(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// stfs f12,144(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f13,156(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,140(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,4840(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4840);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827f5598
	sub_827F5598(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8291ce88
	sub_8291CE88(ctx, base);
	// lis r11,-32115
	r11.s64 = -2104688640;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r11,r11,-19496
	r11.s64 = r11.s64 + -19496;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x828cbab8
	sub_828CBAB8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_828CBD20"))) PPC_WEAK_FUNC(sub_828CBD20);
PPC_FUNC_IMPL(__imp__sub_828CBD20) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x828c9888
	sub_828C9888(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,-6016
	r11.s64 = r11.s64 + -6016;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r4,4656(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4656);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e62730
	sub_82E62730(ctx, base);
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

__attribute__((alias("__imp__sub_828CBD80"))) PPC_WEAK_FUNC(sub_828CBD80);
PPC_FUNC_IMPL(__imp__sub_828CBD80) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x828c9888
	sub_828C9888(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-31955
	ctx.r9.s64 = -2094202880;
	// addi r10,r10,-5956
	ctx.r10.s64 = ctx.r10.s64 + -5956;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stfs f0,108(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// lwz r4,16620(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16620);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e62730
	sub_82E62730(ctx, base);
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

__attribute__((alias("__imp__sub_828CBDF0"))) PPC_WEAK_FUNC(sub_828CBDF0);
PPC_FUNC_IMPL(__imp__sub_828CBDF0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x828c9888
	sub_828C9888(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,-5900
	r11.s64 = r11.s64 + -5900;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r4,16624(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16624);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e62730
	sub_82E62730(ctx, base);
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

__attribute__((alias("__imp__sub_828CBE50"))) PPC_WEAK_FUNC(sub_828CBE50);
PPC_FUNC_IMPL(__imp__sub_828CBE50) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x828c9888
	sub_828C9888(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,-5844
	r11.s64 = r11.s64 + -5844;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r4,4660(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4660);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e62730
	sub_82E62730(ctx, base);
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

__attribute__((alias("__imp__sub_828CBEB0"))) PPC_WEAK_FUNC(sub_828CBEB0);
PPC_FUNC_IMPL(__imp__sub_828CBEB0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x828c9888
	sub_828C9888(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,-5788
	r11.s64 = r11.s64 + -5788;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r4,16628(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16628);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e62730
	sub_82E62730(ctx, base);
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

__attribute__((alias("__imp__sub_828CBF10"))) PPC_WEAK_FUNC(sub_828CBF10);
PPC_FUNC_IMPL(__imp__sub_828CBF10) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x828c9888
	sub_828C9888(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r10,r11,-5724
	ctx.r10.s64 = r11.s64 + -5724;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r9,-15648
	ctx.r8.s64 = ctx.r9.s64 + -15648;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// addi r7,r10,-21416
	ctx.r7.s64 = ctx.r10.s64 + -21416;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// addi r10,r31,108
	ctx.r10.s64 = r31.s64 + 108;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
	// lfs f0,-15648(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15648);
	f0.f64 = double(temp.f32);
	// stfs f0,144(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	f0.f64 = double(temp.f32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stfs f0,148(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f0,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	f0.f64 = double(temp.f32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stfs f0,152(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// lfs f0,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,156(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r11.u32);
	// bl 0x828cba38
	sub_828CBA38(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f2,-17788(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -17788);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x827fbbb8
	sub_827FBBB8(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-5736
	ctx.r4.s64 = r11.s64 + -5736;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x828d3ad8
	sub_828D3AD8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,4688(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4688);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e62730
	sub_82E62730(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_828CC020"))) PPC_WEAK_FUNC(sub_828CC020);
PPC_FUNC_IMPL(__imp__sub_828CC020) {
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
	// bl 0x828c9888
	sub_828C9888(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,-5668
	r11.s64 = r11.s64 + -5668;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r30.u32);
	// addi r4,r10,-6144
	ctx.r4.s64 = ctx.r10.s64 + -6144;
	// stw r30,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r30.u32);
	// li r5,575
	ctx.r5.s64 = 575;
	// stw r30,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r30.u32);
	// li r3,256
	ctx.r3.s64 = 256;
	// stw r30,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r30.u32);
	// addi r29,r31,116
	r29.s64 = r31.s64 + 116;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828cc094
	if (cr0.eq) goto loc_828CC094;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r5,r11,-15648
	ctx.r5.s64 = r11.s64 + -15648;
	// addi r4,r10,29232
	ctx.r4.s64 = ctx.r10.s64 + 29232;
	// bl 0x82590358
	sub_82590358(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828cc098
	goto loc_828CC098;
loc_828CC094:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_828CC098:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823d69a8
	sub_823D69A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828CC0B0"))) PPC_WEAK_FUNC(sub_828CC0B0);
PPC_FUNC_IMPL(__imp__sub_828CC0B0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x828c9888
	sub_828C9888(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,-5612
	r11.s64 = r11.s64 + -5612;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r4,4616(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4616);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e62730
	sub_82E62730(ctx, base);
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

__attribute__((alias("__imp__sub_828CC110"))) PPC_WEAK_FUNC(sub_828CC110);
PPC_FUNC_IMPL(__imp__sub_828CC110) {
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-6144
	ctx.r4.s64 = r11.s64 + -6144;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828cc14c
	if (cr0.eq) goto loc_828CC14C;
	// bl 0x828cbd20
	sub_828CBD20(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x828cc150
	goto loc_828CC150;
loc_828CC14C:
	// li r31,0
	r31.s64 = 0;
loc_828CC150:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828ca488
	sub_828CA488(ctx, base);
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

__attribute__((alias("__imp__sub_828CC180"))) PPC_WEAK_FUNC(sub_828CC180);
PPC_FUNC_IMPL(__imp__sub_828CC180) {
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-6144
	ctx.r4.s64 = r11.s64 + -6144;
	// li r5,247
	ctx.r5.s64 = 247;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828cc1bc
	if (cr0.eq) goto loc_828CC1BC;
	// bl 0x828cbd80
	sub_828CBD80(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x828cc1c0
	goto loc_828CC1C0;
loc_828CC1BC:
	// li r31,0
	r31.s64 = 0;
loc_828CC1C0:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828ca550
	sub_828CA550(ctx, base);
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

__attribute__((alias("__imp__sub_828CC1F0"))) PPC_WEAK_FUNC(sub_828CC1F0);
PPC_FUNC_IMPL(__imp__sub_828CC1F0) {
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-6144
	ctx.r4.s64 = r11.s64 + -6144;
	// li r5,286
	ctx.r5.s64 = 286;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828cc22c
	if (cr0.eq) goto loc_828CC22C;
	// bl 0x828cbdf0
	sub_828CBDF0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x828cc230
	goto loc_828CC230;
loc_828CC22C:
	// li r31,0
	r31.s64 = 0;
loc_828CC230:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828ca618
	sub_828CA618(ctx, base);
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

__attribute__((alias("__imp__sub_828CC260"))) PPC_WEAK_FUNC(sub_828CC260);
PPC_FUNC_IMPL(__imp__sub_828CC260) {
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-6144
	ctx.r4.s64 = r11.s64 + -6144;
	// li r5,316
	ctx.r5.s64 = 316;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828cc29c
	if (cr0.eq) goto loc_828CC29C;
	// bl 0x828cbe50
	sub_828CBE50(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x828cc2a0
	goto loc_828CC2A0;
loc_828CC29C:
	// li r31,0
	r31.s64 = 0;
loc_828CC2A0:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828ca6e0
	sub_828CA6E0(ctx, base);
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

__attribute__((alias("__imp__sub_828CC2D0"))) PPC_WEAK_FUNC(sub_828CC2D0);
PPC_FUNC_IMPL(__imp__sub_828CC2D0) {
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-6144
	ctx.r4.s64 = r11.s64 + -6144;
	// li r5,368
	ctx.r5.s64 = 368;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828cc30c
	if (cr0.eq) goto loc_828CC30C;
	// bl 0x828cbeb0
	sub_828CBEB0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x828cc310
	goto loc_828CC310;
loc_828CC30C:
	// li r31,0
	r31.s64 = 0;
loc_828CC310:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828ca7a8
	sub_828CA7A8(ctx, base);
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

__attribute__((alias("__imp__sub_828CC340"))) PPC_WEAK_FUNC(sub_828CC340);
PPC_FUNC_IMPL(__imp__sub_828CC340) {
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-6144
	ctx.r4.s64 = r11.s64 + -6144;
	// li r5,409
	ctx.r5.s64 = 409;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828cc37c
	if (cr0.eq) goto loc_828CC37C;
	// bl 0x828cbf10
	sub_828CBF10(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x828cc380
	goto loc_828CC380;
loc_828CC37C:
	// li r31,0
	r31.s64 = 0;
loc_828CC380:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828ca870
	sub_828CA870(ctx, base);
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

__attribute__((alias("__imp__sub_828CC3B0"))) PPC_WEAK_FUNC(sub_828CC3B0);
PPC_FUNC_IMPL(__imp__sub_828CC3B0) {
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-6144
	ctx.r4.s64 = r11.s64 + -6144;
	// li r5,567
	ctx.r5.s64 = 567;
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828cc3ec
	if (cr0.eq) goto loc_828CC3EC;
	// bl 0x828cc020
	sub_828CC020(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x828cc3f0
	goto loc_828CC3F0;
loc_828CC3EC:
	// li r31,0
	r31.s64 = 0;
loc_828CC3F0:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828ca938
	sub_828CA938(ctx, base);
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

__attribute__((alias("__imp__sub_828CC420"))) PPC_WEAK_FUNC(sub_828CC420);
PPC_FUNC_IMPL(__imp__sub_828CC420) {
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-6144
	ctx.r4.s64 = r11.s64 + -6144;
	// li r5,81
	ctx.r5.s64 = 81;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828cc45c
	if (cr0.eq) goto loc_828CC45C;
	// bl 0x828cc0b0
	sub_828CC0B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x828cc460
	goto loc_828CC460;
loc_828CC45C:
	// li r31,0
	r31.s64 = 0;
loc_828CC460:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828ca3c0
	sub_828CA3C0(ctx, base);
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

__attribute__((alias("__imp__sub_828CC490"))) PPC_WEAK_FUNC(sub_828CC490);
PPC_FUNC_IMPL(__imp__sub_828CC490) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828c8358
	sub_828C8358(ctx, base);
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,16616(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16616);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828c8500
	sub_828C8500(ctx, base);
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

__attribute__((alias("__imp__sub_828CC4E8"))) PPC_WEAK_FUNC(sub_828CC4E8);
PPC_FUNC_IMPL(__imp__sub_828CC4E8) {
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
	// bne cr6,0x828cc528
	if (!cr6.eq) goto loc_828CC528;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828cc558
	if (cr6.eq) goto loc_828CC558;
	// ld r11,0(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// ld r11,8(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// b 0x828cc558
	goto loc_828CC558;
loc_828CC528:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x828cc558
	if (cr6.eq) goto loc_828CC558;
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,19128
	ctx.r4.s64 = r11.s64 + 19128;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828cc550
	if (cr0.eq) goto loc_828CC550;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x828cc558
	goto loc_828CC558;
loc_828CC550:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_828CC558:
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

__attribute__((alias("__imp__sub_828CC570"))) PPC_WEAK_FUNC(sub_828CC570);
PPC_FUNC_IMPL(__imp__sub_828CC570) {
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
	// beq 0x828cc5c8
	if (cr0.eq) goto loc_828CC5C8;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-5556
	ctx.r9.s64 = r11.s64 + -5556;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x828cc5cc
	goto loc_828CC5CC;
loc_828CC5C8:
	// li r11,0
	r11.s64 = 0;
loc_828CC5CC:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828cc618
	if (!cr6.eq) goto loc_828CC618;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828cc5f8
	if (cr6.eq) goto loc_828CC5F8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_828CC5F8:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,19036(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19036);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_828CC618:
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

__attribute__((alias("__imp__sub_828CC638"))) PPC_WEAK_FUNC(sub_828CC638);
PPC_FUNC_IMPL(__imp__sub_828CC638) {
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
	// beq cr6,0x828cc664
	if (cr6.eq) goto loc_828CC664;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x828cc4e8
	sub_828CC4E8(ctx, base);
	// b 0x828cc670
	goto loc_828CC670;
loc_828CC664:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r11,r11,19128
	r11.s64 = r11.s64 + 19128;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_828CC670:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CC680"))) PPC_WEAK_FUNC(sub_828CC680);
PPC_FUNC_IMPL(__imp__sub_828CC680) {
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
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	r11.s64 = -2093481984;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,5572
	r31.s64 = r11.s64 + 5572;
	// lwz r11,5580(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5580);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x828cc6c8
	if (!cr0.eq) goto loc_828CC6C8;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// lis r8,-32115
	ctx.r8.s64 = -2104688640;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r9,r9,6712
	ctx.r9.s64 = ctx.r9.s64 + 6712;
	// addi r8,r8,-14792
	ctx.r8.s64 = ctx.r8.s64 + -14792;
	// stw r11,5580(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5580, r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
loc_828CC6C8:
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
	// beq 0x828cc6f4
	if (cr0.eq) goto loc_828CC6F4;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// b 0x828cc6f8
	goto loc_828CC6F8;
loc_828CC6F4:
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
loc_828CC6F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828CC700"))) PPC_WEAK_FUNC(sub_828CC700);
PPC_FUNC_IMPL(__imp__sub_828CC700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,-15216
	ctx.r10.s64 = ctx.r10.s64 + -15216;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x828cc680
	sub_828CC680(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828c82b8
	sub_828C82B8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f2,-17788(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -17788);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x827fbbb8
	sub_827FBBB8(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-5416
	ctx.r4.s64 = r11.s64 + -5416;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828d3ad8
	sub_828D3AD8(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-1288(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -1288);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,140(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
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

__attribute__((alias("__imp__sub_828CC7D0"))) PPC_WEAK_FUNC(sub_828CC7D0);
PPC_FUNC_IMPL(__imp__sub_828CC7D0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x828c9888
	sub_828C9888(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,-5400
	r11.s64 = r11.s64 + -5400;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r4,16616(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16616);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e62730
	sub_82E62730(ctx, base);
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

__attribute__((alias("__imp__sub_828CC830"))) PPC_WEAK_FUNC(sub_828CC830);
PPC_FUNC_IMPL(__imp__sub_828CC830) {
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-5536
	ctx.r4.s64 = r11.s64 + -5536;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828cc86c
	if (cr0.eq) goto loc_828CC86C;
	// bl 0x828cc7d0
	sub_828CC7D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x828cc870
	goto loc_828CC870;
loc_828CC86C:
	// li r31,0
	r31.s64 = 0;
loc_828CC870:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828cc570
	sub_828CC570(ctx, base);
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

__attribute__((alias("__imp__sub_828CC8A0"))) PPC_WEAK_FUNC(sub_828CC8A0);
PPC_FUNC_IMPL(__imp__sub_828CC8A0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828c82b8
	sub_828C82B8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x828cc8d8
	if (!cr6.eq) goto loc_828CC8D8;
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lwz r4,4600(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4600);
	// b 0x828cc8e0
	goto loc_828CC8E0;
loc_828CC8D8:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lwz r4,16616(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16616);
loc_828CC8E0:
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827f5568
	sub_827F5568(ctx, base);
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

__attribute__((alias("__imp__sub_828CC910"))) PPC_WEAK_FUNC(sub_828CC910);
PPC_FUNC_IMPL(__imp__sub_828CC910) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828d08a8
	sub_828D08A8(ctx, base);
	// bl 0x82921cf8
	sub_82921CF8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828cc95c
	if (cr0.eq) goto loc_828CC95C;
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,4616(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4616);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827f5568
	sub_827F5568(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_828CC95C:
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

__attribute__((alias("__imp__sub_828CC970"))) PPC_WEAK_FUNC(sub_828CC970);
PPC_FUNC_IMPL(__imp__sub_828CC970) {
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
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,4604(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4604);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827f5568
	sub_827F5568(ctx, base);
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

__attribute__((alias("__imp__sub_828CC9C0"))) PPC_WEAK_FUNC(sub_828CC9C0);
PPC_FUNC_IMPL(__imp__sub_828CC9C0) {
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
	// bne cr6,0x828cca00
	if (!cr6.eq) goto loc_828CCA00;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828cca30
	if (cr6.eq) goto loc_828CCA30;
	// ld r11,0(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// ld r11,8(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// b 0x828cca30
	goto loc_828CCA30;
loc_828CCA00:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x828cca30
	if (cr6.eq) goto loc_828CCA30;
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,19568
	ctx.r4.s64 = r11.s64 + 19568;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828cca28
	if (cr0.eq) goto loc_828CCA28;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x828cca30
	goto loc_828CCA30;
loc_828CCA28:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_828CCA30:
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

__attribute__((alias("__imp__sub_828CCA48"))) PPC_WEAK_FUNC(sub_828CCA48);
PPC_FUNC_IMPL(__imp__sub_828CCA48) {
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
	// beq 0x828ccaa0
	if (cr0.eq) goto loc_828CCAA0;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-5344
	ctx.r9.s64 = r11.s64 + -5344;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x828ccaa4
	goto loc_828CCAA4;
loc_828CCAA0:
	// li r11,0
	r11.s64 = 0;
loc_828CCAA4:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828ccaf0
	if (!cr6.eq) goto loc_828CCAF0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828ccad0
	if (cr6.eq) goto loc_828CCAD0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_828CCAD0:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,19388(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19388);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_828CCAF0:
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

__attribute__((alias("__imp__sub_828CCB10"))) PPC_WEAK_FUNC(sub_828CCB10);
PPC_FUNC_IMPL(__imp__sub_828CCB10) {
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
	// beq 0x828ccb68
	if (cr0.eq) goto loc_828CCB68;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-5324
	ctx.r9.s64 = r11.s64 + -5324;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x828ccb6c
	goto loc_828CCB6C;
loc_828CCB68:
	// li r11,0
	r11.s64 = 0;
loc_828CCB6C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828ccbb8
	if (!cr6.eq) goto loc_828CCBB8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828ccb98
	if (cr6.eq) goto loc_828CCB98;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_828CCB98:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,19388(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19388);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_828CCBB8:
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

__attribute__((alias("__imp__sub_828CCBD8"))) PPC_WEAK_FUNC(sub_828CCBD8);
PPC_FUNC_IMPL(__imp__sub_828CCBD8) {
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
	// beq cr6,0x828ccc04
	if (cr6.eq) goto loc_828CCC04;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x828cc9c0
	sub_828CC9C0(ctx, base);
	// b 0x828ccc10
	goto loc_828CCC10;
loc_828CCC04:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r11,r11,19568
	r11.s64 = r11.s64 + 19568;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_828CCC10:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CCC20"))) PPC_WEAK_FUNC(sub_828CCC20);
PPC_FUNC_IMPL(__imp__sub_828CCC20) {
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
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	r11.s64 = -2093481984;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,5584
	r31.s64 = r11.s64 + 5584;
	// lwz r11,5592(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5592);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x828ccc68
	if (!cr0.eq) goto loc_828CCC68;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// lis r8,-32115
	ctx.r8.s64 = -2104688640;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r9,r9,6712
	ctx.r9.s64 = ctx.r9.s64 + 6712;
	// addi r8,r8,-13352
	ctx.r8.s64 = ctx.r8.s64 + -13352;
	// stw r11,5592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5592, r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
loc_828CCC68:
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
	// beq 0x828ccc94
	if (cr0.eq) goto loc_828CCC94;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// b 0x828ccc98
	goto loc_828CCC98;
loc_828CCC94:
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
loc_828CCC98:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828CCCA0"))) PPC_WEAK_FUNC(sub_828CCCA0);
PPC_FUNC_IMPL(__imp__sub_828CCCA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,-13968
	ctx.r10.s64 = ctx.r10.s64 + -13968;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x828ccc20
	sub_828CCC20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828c8300
	sub_828C8300(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f1,136(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f2,-17788(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -17788);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x827fbbb8
	sub_827FBBB8(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-5416
	ctx.r4.s64 = r11.s64 + -5416;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828d3ad8
	sub_828D3AD8(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-1288(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -1288);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,140(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
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

__attribute__((alias("__imp__sub_828CCD70"))) PPC_WEAK_FUNC(sub_828CCD70);
PPC_FUNC_IMPL(__imp__sub_828CCD70) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x828c9a18
	sub_828C9A18(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,-5304
	r11.s64 = r11.s64 + -5304;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r4,4600(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4600);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e62730
	sub_82E62730(ctx, base);
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

__attribute__((alias("__imp__sub_828CCDD0"))) PPC_WEAK_FUNC(sub_828CCDD0);
PPC_FUNC_IMPL(__imp__sub_828CCDD0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x828c9a18
	sub_828C9A18(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,-5244
	r11.s64 = r11.s64 + -5244;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r4,4596(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4596);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e62730
	sub_82E62730(ctx, base);
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

__attribute__((alias("__imp__sub_828CCE30"))) PPC_WEAK_FUNC(sub_828CCE30);
PPC_FUNC_IMPL(__imp__sub_828CCE30) {
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-5184
	ctx.r4.s64 = r11.s64 + -5184;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828cce6c
	if (cr0.eq) goto loc_828CCE6C;
	// bl 0x828ccd70
	sub_828CCD70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x828cce70
	goto loc_828CCE70;
loc_828CCE6C:
	// li r31,0
	r31.s64 = 0;
loc_828CCE70:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828ccb10
	sub_828CCB10(ctx, base);
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

__attribute__((alias("__imp__sub_828CCEA0"))) PPC_WEAK_FUNC(sub_828CCEA0);
PPC_FUNC_IMPL(__imp__sub_828CCEA0) {
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-5184
	ctx.r4.s64 = r11.s64 + -5184;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828ccedc
	if (cr0.eq) goto loc_828CCEDC;
	// bl 0x828ccdd0
	sub_828CCDD0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x828ccee0
	goto loc_828CCEE0;
loc_828CCEDC:
	// li r31,0
	r31.s64 = 0;
loc_828CCEE0:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828cca48
	sub_828CCA48(ctx, base);
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

__attribute__((alias("__imp__sub_828CCF10"))) PPC_WEAK_FUNC(sub_828CCF10);
PPC_FUNC_IMPL(__imp__sub_828CCF10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31944
	r11.s64 = -2093481984;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5752
	ctx.r3.s64 = r11.s64 + 5752;
	// b 0x828d0b70
	sub_828D0B70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828CCF20"))) PPC_WEAK_FUNC(sub_828CCF20);
PPC_FUNC_IMPL(__imp__sub_828CCF20) {
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-4956
	ctx.r4.s64 = r11.s64 + -4956;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82913908
	sub_82913908(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
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

__attribute__((alias("__imp__sub_828CCF80"))) PPC_WEAK_FUNC(sub_828CCF80);
PPC_FUNC_IMPL(__imp__sub_828CCF80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31944
	r11.s64 = -2093481984;
	// addi r3,r11,5752
	ctx.r3.s64 = r11.s64 + 5752;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CCF90"))) PPC_WEAK_FUNC(sub_828CCF90);
PPC_FUNC_IMPL(__imp__sub_828CCF90) {
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
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	r11.s64 = -2093481984;
	// addi r31,r11,5596
	r31.s64 = r11.s64 + 5596;
	// lwz r11,5608(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5608);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x828ccfd8
	if (!cr0.eq) goto loc_828CCFD8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// stw r11,5608(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5608, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,-12340
	ctx.r4.s64 = ctx.r9.s64 + -12340;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x82961378
	sub_82961378(ctx, base);
loc_828CCFD8:
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

__attribute__((alias("__imp__sub_828CCFF0"))) PPC_WEAK_FUNC(sub_828CCFF0);
PPC_FUNC_IMPL(__imp__sub_828CCFF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,960
	ctx.r3.s64 = ctx.r3.s64 + 960;
	// b 0x82e658d8
	sub_82E658D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828CCFF8"))) PPC_WEAK_FUNC(sub_828CCFF8);
PPC_FUNC_IMPL(__imp__sub_828CCFF8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,936
	ctx.r3.s64 = ctx.r3.s64 + 936;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CD000"))) PPC_WEAK_FUNC(sub_828CD000);
PPC_FUNC_IMPL(__imp__sub_828CD000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,16
	r31.s64 = r30.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lfs f1,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,252(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 252);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,16(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x82ab21a8
	sub_82AB21A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,240(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 240);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828CD070"))) PPC_WEAK_FUNC(sub_828CD070);
PPC_FUNC_IMPL(__imp__sub_828CD070) {
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
	// bne cr6,0x828cd09c
	if (!cr6.eq) goto loc_828CD09C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x828cd0c8
	goto loc_828CD0C8;
loc_828CD09C:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x828cd0c4
	if (cr6.eq) goto loc_828CD0C4;
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,20136
	ctx.r4.s64 = r11.s64 + 20136;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828cd0c4
	if (cr0.eq) goto loc_828CD0C4;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x828cd0cc
	goto loc_828CD0CC;
loc_828CD0C4:
	// li r11,0
	r11.s64 = 0;
loc_828CD0C8:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_828CD0CC:
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

__attribute__((alias("__imp__sub_828CD0E8"))) PPC_WEAK_FUNC(sub_828CD0E8);
PPC_FUNC_IMPL(__imp__sub_828CD0E8) {
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
	// bne cr6,0x828cd114
	if (!cr6.eq) goto loc_828CD114;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x828cd140
	goto loc_828CD140;
loc_828CD114:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x828cd13c
	if (cr6.eq) goto loc_828CD13C;
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,20216
	ctx.r4.s64 = r11.s64 + 20216;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828cd13c
	if (cr0.eq) goto loc_828CD13C;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x828cd144
	goto loc_828CD144;
loc_828CD13C:
	// li r11,0
	r11.s64 = 0;
loc_828CD140:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_828CD144:
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

__attribute__((alias("__imp__sub_828CD160"))) PPC_WEAK_FUNC(sub_828CD160);
PPC_FUNC_IMPL(__imp__sub_828CD160) {
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
	// bne cr6,0x828cd18c
	if (!cr6.eq) goto loc_828CD18C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x828cd1b8
	goto loc_828CD1B8;
loc_828CD18C:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x828cd1b4
	if (cr6.eq) goto loc_828CD1B4;
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,20296
	ctx.r4.s64 = r11.s64 + 20296;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828cd1b4
	if (cr0.eq) goto loc_828CD1B4;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x828cd1bc
	goto loc_828CD1BC;
loc_828CD1B4:
	// li r11,0
	r11.s64 = 0;
loc_828CD1B8:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_828CD1BC:
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

__attribute__((alias("__imp__sub_828CD1D8"))) PPC_WEAK_FUNC(sub_828CD1D8);
PPC_FUNC_IMPL(__imp__sub_828CD1D8) {
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
	// bne cr6,0x828cd218
	if (!cr6.eq) goto loc_828CD218;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828cd248
	if (cr6.eq) goto loc_828CD248;
	// ld r11,0(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// ld r11,8(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// b 0x828cd248
	goto loc_828CD248;
loc_828CD218:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x828cd248
	if (cr6.eq) goto loc_828CD248;
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,20376
	ctx.r4.s64 = r11.s64 + 20376;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828cd240
	if (cr0.eq) goto loc_828CD240;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x828cd248
	goto loc_828CD248;
loc_828CD240:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_828CD248:
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

__attribute__((alias("__imp__sub_828CD260"))) PPC_WEAK_FUNC(sub_828CD260);
PPC_FUNC_IMPL(__imp__sub_828CD260) {
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
	// bne cr6,0x828cd2a0
	if (!cr6.eq) goto loc_828CD2A0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828cd2d0
	if (cr6.eq) goto loc_828CD2D0;
	// ld r11,0(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// ld r11,8(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// b 0x828cd2d0
	goto loc_828CD2D0;
loc_828CD2A0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x828cd2d0
	if (cr6.eq) goto loc_828CD2D0;
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,20576
	ctx.r4.s64 = r11.s64 + 20576;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828cd2c8
	if (cr0.eq) goto loc_828CD2C8;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x828cd2d0
	goto loc_828CD2D0;
loc_828CD2C8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_828CD2D0:
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

__attribute__((alias("__imp__sub_828CD2E8"))) PPC_WEAK_FUNC(sub_828CD2E8);
PPC_FUNC_IMPL(__imp__sub_828CD2E8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,936(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 936);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828cd320
	if (cr6.eq) goto loc_828CD320;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_828CD320:
	// addi r3,r31,944
	ctx.r3.s64 = r31.s64 + 944;
	// bl 0x82e658d8
	sub_82E658D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82965118
	sub_82965118(ctx, base);
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

__attribute__((alias("__imp__sub_828CD350"))) PPC_WEAK_FUNC(sub_828CD350);
PPC_FUNC_IMPL(__imp__sub_828CD350) {
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
	// lwz r3,952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 952);
	// bl 0x827cfe20
	sub_827CFE20(ctx, base);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827f2298
	sub_827F2298(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,13828
	ctx.r4.s64 = r11.s64 + 13828;
	// bl 0x82964f98
	sub_82964F98(ctx, base);
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

__attribute__((alias("__imp__sub_828CD3A0"))) PPC_WEAK_FUNC(sub_828CD3A0);
PPC_FUNC_IMPL(__imp__sub_828CD3A0) {
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
	// lwz r3,952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 952);
	// bl 0x827cfec0
	sub_827CFEC0(ctx, base);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827f2288
	sub_827F2288(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82964ee0
	sub_82964EE0(ctx, base);
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

__attribute__((alias("__imp__sub_828CD3E8"))) PPC_WEAK_FUNC(sub_828CD3E8);
PPC_FUNC_IMPL(__imp__sub_828CD3E8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82ab21a8
	sub_82AB21A8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,-22120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x829126d8
	sub_829126D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8290e718
	sub_8290E718(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82513ed8
	sub_82513ED8(ctx, base);
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

__attribute__((alias("__imp__sub_828CD438"))) PPC_WEAK_FUNC(sub_828CD438);
PPC_FUNC_IMPL(__imp__sub_828CD438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lwz r3,244(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r6,r11,25804
	ctx.r6.s64 = r11.s64 + 25804;
	// addi r5,r10,-12324
	ctx.r5.s64 = ctx.r10.s64 + -12324;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b29f8
	sub_831B29F8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x828cd508
	if (cr0.eq) goto loc_828CD508;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8291ce98
	sub_8291CE98(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x828cd4a0
	if (!cr0.eq) goto loc_828CD4A0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8291c968
	sub_8291C968(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq 0x828cd4a4
	if (cr0.eq) goto loc_828CD4A4;
loc_828CD4A0:
	// li r11,0
	r11.s64 = 0;
loc_828CD4A4:
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,64
	ctx.r10.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
loc_828CD508:
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

__attribute__((alias("__imp__sub_828CD520"))) PPC_WEAK_FUNC(sub_828CD520);
PPC_FUNC_IMPL(__imp__sub_828CD520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,920(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 920);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828cd580
	if (cr6.eq) goto loc_828CD580;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,32
	ctx.r10.s64 = 32;
	// lfs f0,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	f0.f64 = double(temp.f32);
	// lfs f13,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_828CD580:
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

__attribute__((alias("__imp__sub_828CD598"))) PPC_WEAK_FUNC(sub_828CD598);
PPC_FUNC_IMPL(__imp__sub_828CD598) {
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
	// beq 0x828cd5f0
	if (cr0.eq) goto loc_828CD5F0;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-4832
	ctx.r9.s64 = r11.s64 + -4832;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x828cd5f4
	goto loc_828CD5F4;
loc_828CD5F0:
	// li r11,0
	r11.s64 = 0;
loc_828CD5F4:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828cd640
	if (!cr6.eq) goto loc_828CD640;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828cd620
	if (cr6.eq) goto loc_828CD620;
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
loc_828CD620:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,19876(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19876);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_828CD640:
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

__attribute__((alias("__imp__sub_828CD660"))) PPC_WEAK_FUNC(sub_828CD660);
PPC_FUNC_IMPL(__imp__sub_828CD660) {
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
	// beq 0x828cd6b8
	if (cr0.eq) goto loc_828CD6B8;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-4812
	ctx.r9.s64 = r11.s64 + -4812;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x828cd6bc
	goto loc_828CD6BC;
loc_828CD6B8:
	// li r11,0
	r11.s64 = 0;
loc_828CD6BC:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828cd6f0
	if (!cr6.eq) goto loc_828CD6F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,19876(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19876);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_828CD6F0:
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

__attribute__((alias("__imp__sub_828CD710"))) PPC_WEAK_FUNC(sub_828CD710);
PPC_FUNC_IMPL(__imp__sub_828CD710) {
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
	// beq 0x828cd768
	if (cr0.eq) goto loc_828CD768;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-4792
	ctx.r9.s64 = r11.s64 + -4792;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x828cd76c
	goto loc_828CD76C;
loc_828CD768:
	// li r11,0
	r11.s64 = 0;
loc_828CD76C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828cd7b8
	if (!cr6.eq) goto loc_828CD7B8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828cd798
	if (cr6.eq) goto loc_828CD798;
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
loc_828CD798:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,19876(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19876);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_828CD7B8:
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

__attribute__((alias("__imp__sub_828CD7D8"))) PPC_WEAK_FUNC(sub_828CD7D8);
PPC_FUNC_IMPL(__imp__sub_828CD7D8) {
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
	// beq cr6,0x828cd804
	if (cr6.eq) goto loc_828CD804;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x828cd070
	sub_828CD070(ctx, base);
	// b 0x828cd810
	goto loc_828CD810;
loc_828CD804:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r11,r11,20136
	r11.s64 = r11.s64 + 20136;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_828CD810:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CD820"))) PPC_WEAK_FUNC(sub_828CD820);
PPC_FUNC_IMPL(__imp__sub_828CD820) {
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
	// beq cr6,0x828cd84c
	if (cr6.eq) goto loc_828CD84C;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x828cd0e8
	sub_828CD0E8(ctx, base);
	// b 0x828cd858
	goto loc_828CD858;
loc_828CD84C:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r11,r11,20216
	r11.s64 = r11.s64 + 20216;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_828CD858:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CD868"))) PPC_WEAK_FUNC(sub_828CD868);
PPC_FUNC_IMPL(__imp__sub_828CD868) {
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
	// beq cr6,0x828cd894
	if (cr6.eq) goto loc_828CD894;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x828cd160
	sub_828CD160(ctx, base);
	// b 0x828cd8a0
	goto loc_828CD8A0;
loc_828CD894:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r11,r11,20296
	r11.s64 = r11.s64 + 20296;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_828CD8A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CD8B0"))) PPC_WEAK_FUNC(sub_828CD8B0);
PPC_FUNC_IMPL(__imp__sub_828CD8B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82adefd0
	sub_82ADEFD0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a6fe58
	sub_82A6FE58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82adefd0
	sub_82ADEFD0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
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
	// bl 0x82ab21b0
	sub_82AB21B0(ctx, base);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	r11.s64 = -2093481984;
	// addi r30,r11,5616
	r30.s64 = r11.s64 + 5616;
	// lwz r11,5680(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5680);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x828cd954
	if (!cr0.eq) goto loc_828CD954;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,5680(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5680, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,2240(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f0.f64 = double(temp.f32);
	// lfs f13,4288(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4288);
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
	// bl 0x82e84d20
	sub_82E84D20(ctx, base);
loc_828CD954:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// bl 0x82e1bc30
	sub_82E1BC30(ctx, base);
	// lwz r3,928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 928);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828cd974
	if (cr6.eq) goto loc_828CD974;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x829287a0
	sub_829287A0(ctx, base);
loc_828CD974:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,944
	ctx.r3.s64 = r31.s64 + 944;
	// bl 0x827f22b0
	sub_827F22B0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82965000
	sub_82965000(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828CD998"))) PPC_WEAK_FUNC(sub_828CD998);
PPC_FUNC_IMPL(__imp__sub_828CD998) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r30,r1,128
	r30.s64 = ctx.r1.s64 + 128;
	// lvlx128 v62,r10,r11
	temp.u32 = ctx.r10.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r9,r11
	temp.u32 = ctx.r9.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lvlx128 v60,r8,r11
	temp.u32 = ctx.r8.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82bc9a60
	sub_82BC9A60(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828cda0c
	if (cr0.eq) goto loc_828CDA0C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822ef5a8
	sub_822EF5A8(ctx, base);
loc_828CDA0C:
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,29232
	ctx.r5.s64 = r11.s64 + 29232;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e84a10
	sub_82E84A10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_828CDA40"))) PPC_WEAK_FUNC(sub_828CDA40);
PPC_FUNC_IMPL(__imp__sub_828CDA40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82bc9a60
	sub_82BC9A60(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x828cdaf0
	if (cr0.eq) goto loc_828CDAF0;
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
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r29,r1,160
	r29.s64 = ctx.r1.s64 + 160;
	// lvlx128 v62,r10,r11
	temp.u32 = ctx.r10.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r9,r11
	temp.u32 = ctx.r9.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lvlx128 v60,r8,r11
	temp.u32 = ctx.r8.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x822ef970
	sub_822EF970(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	f0.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f11,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f11.f64 = double(temp.f32);
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x822ef690
	sub_822EF690(ctx, base);
loc_828CDAF0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828CDAF8"))) PPC_WEAK_FUNC(sub_828CDAF8);
PPC_FUNC_IMPL(__imp__sub_828CDAF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82adefd0
	sub_82ADEFD0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x828cdb5c
	if (cr0.eq) goto loc_828CDB5C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8291cc00
	sub_8291CC00(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,224
	r11.s64 = 224;
	// lvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,208
	ctx.r10.s64 = 208;
	// stvx128 v63,r9,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828cdb5c
	if (cr6.eq) goto loc_828CDB5C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CDB5C:
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

__attribute__((alias("__imp__sub_828CDB78"))) PPC_WEAK_FUNC(sub_828CDB78);
PPC_FUNC_IMPL(__imp__sub_828CDB78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,920(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 920);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828cdc24
	if (cr6.eq) goto loc_828CDC24;
	// lwz r11,624(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r8,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r8,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r8.u32);
	// lvx128 v63,r11,r9
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r10,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 36);
	f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// stw r10,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r10.u32);
	// lfs f0,44(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 44);
	f0.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// lwz r3,920(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 920);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,48
	ctx.r10.s64 = 48;
	// lfs f0,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	f0.f64 = double(temp.f32);
	// lfs f13,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_828CDC24:
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

__attribute__((alias("__imp__sub_828CDC38"))) PPC_WEAK_FUNC(sub_828CDC38);
PPC_FUNC_IMPL(__imp__sub_828CDC38) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// bne cr6,0x828cdc5c
	if (!cr6.eq) goto loc_828CDC5C;
	// li r11,0
	r11.s64 = 0;
loc_828CDC5C:
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828cd598
	sub_828CD598(ctx, base);
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

__attribute__((alias("__imp__sub_828CDC90"))) PPC_WEAK_FUNC(sub_828CDC90);
PPC_FUNC_IMPL(__imp__sub_828CDC90) {
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
	// beq cr6,0x828cdcbc
	if (cr6.eq) goto loc_828CDCBC;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x828cd1d8
	sub_828CD1D8(ctx, base);
	// b 0x828cdcc8
	goto loc_828CDCC8;
loc_828CDCBC:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r11,r11,20376
	r11.s64 = r11.s64 + 20376;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_828CDCC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CDCD8"))) PPC_WEAK_FUNC(sub_828CDCD8);
PPC_FUNC_IMPL(__imp__sub_828CDCD8) {
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
	// beq cr6,0x828cdd04
	if (cr6.eq) goto loc_828CDD04;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x828cd260
	sub_828CD260(ctx, base);
	// b 0x828cdd10
	goto loc_828CDD10;
loc_828CDD04:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r11,r11,20576
	r11.s64 = r11.s64 + 20576;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_828CDD10:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CDD20"))) PPC_WEAK_FUNC(sub_828CDD20);
PPC_FUNC_IMPL(__imp__sub_828CDD20) {
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-4300
	r11.s64 = r11.s64 + -4300;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r10,r10,-4724
	ctx.r10.s64 = ctx.r10.s64 + -4724;
	// addi r9,r9,-4744
	ctx.r9.s64 = ctx.r9.s64 + -4744;
	// addi r11,r8,-4772
	r11.s64 = ctx.r8.s64 + -4772;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// addi r30,r31,960
	r30.s64 = r31.s64 + 960;
	// stw r11,536(r31)
	PPC_STORE_U32(r31.u32 + 536, r11.u32);
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// lwz r3,1060(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1060);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828cdd78
	if (cr6.eq) goto loc_828CDD78;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CDD78:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e66778
	sub_82E66778(ctx, base);
	// lwz r3,956(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 956);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828cdd90
	if (cr6.eq) goto loc_828CDD90;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CDD90:
	// lwz r3,948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 948);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828cdda0
	if (cr6.eq) goto loc_828CDDA0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CDDA0:
	// lwz r3,940(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 940);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828cddb0
	if (cr6.eq) goto loc_828CDDB0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CDDB0:
	// lwz r3,932(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 932);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828cddc0
	if (cr6.eq) goto loc_828CDDC0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CDDC0:
	// lwz r3,924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 924);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828cddd0
	if (cr6.eq) goto loc_828CDDD0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CDDD0:
	// lwz r3,916(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 916);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828cdde0
	if (cr6.eq) goto loc_828CDDE0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CDDE0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82965178
	sub_82965178(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827acc68
	sub_827ACC68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828CDDF8"))) PPC_WEAK_FUNC(sub_828CDDF8);
PPC_FUNC_IMPL(__imp__sub_828CDDF8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-536
	ctx.r3.s64 = ctx.r3.s64 + -536;
	// b 0x828ce5f8
	sub_828CE5F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828CDE00"))) PPC_WEAK_FUNC(sub_828CDE00);
PPC_FUNC_IMPL(__imp__sub_828CDE00) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x828ce5f8
	sub_828CE5F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828CDE08"))) PPC_WEAK_FUNC(sub_828CDE08);
PPC_FUNC_IMPL(__imp__sub_828CDE08) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-56
	ctx.r3.s64 = ctx.r3.s64 + -56;
	// b 0x828ce5f8
	sub_828CE5F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828CDE10"))) PPC_WEAK_FUNC(sub_828CDE10);
PPC_FUNC_IMPL(__imp__sub_828CDE10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x828d3208
	sub_828D3208(ctx, base);
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
	// beq cr6,0x828cde64
	if (cr6.eq) goto loc_828CDE64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828CDE48:
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
	// bne 0x828cde48
	if (!cr0.eq) goto loc_828CDE48;
loc_828CDE64:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,960
	ctx.r4.s64 = r31.s64 + 960;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e676a0
	sub_82E676A0(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828cde94
	if (cr6.eq) goto loc_828CDE94;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CDE94:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828cdea4
	if (cr6.eq) goto loc_828CDEA4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CDEA4:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828cdeb4
	if (cr6.eq) goto loc_828CDEB4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CDEB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CDEC8"))) PPC_WEAK_FUNC(sub_828CDEC8);
PPC_FUNC_IMPL(__imp__sub_828CDEC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,940(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 940);
	// lwz r31,936(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 936);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x828cdf10
	if (cr6.eq) goto loc_828CDF10;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
loc_828CDEF4:
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
	// bne 0x828cdef4
	if (!cr0.eq) goto loc_828CDEF4;
loc_828CDF10:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828cdf28
	if (cr6.eq) goto loc_828CDF28;
	// lfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f31.f64 = double(temp.f32);
	// stfs f1,4(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// bl 0x828cde10
	sub_828CDE10(ctx, base);
	// stfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
loc_828CDF28:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x828cdf38
	if (cr6.eq) goto loc_828CDF38;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CDF38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_828CDF58"))) PPC_WEAK_FUNC(sub_828CDF58);
PPC_FUNC_IMPL(__imp__sub_828CDF58) {
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r29,r11,-4224
	r29.s64 = r11.s64 + -4224;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,705
	ctx.r5.s64 = 705;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828cdfa4
	if (cr0.eq) goto loc_828CDFA4;
	// lis r11,-31944
	r11.s64 = -2093481984;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,6072
	ctx.r5.s64 = r11.s64 + 6072;
	// bl 0x82949618
	sub_82949618(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x828cdfa8
	goto loc_828CDFA8;
loc_828CDFA4:
	// li r31,0
	r31.s64 = 0;
loc_828CDFA8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82877bc0
	sub_82877BC0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r27,84(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x828ce000
	if (cr6.eq) goto loc_828CE000;
	// addi r11,r27,4
	r11.s64 = r27.s64 + 4;
loc_828CDFE4:
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
	// bne 0x828cdfe4
	if (!cr0.eq) goto loc_828CDFE4;
loc_828CE000:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82946780
	sub_82946780(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,709
	ctx.r5.s64 = 709;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828ce040
	if (cr0.eq) goto loc_828CE040;
	// lis r11,-31944
	r11.s64 = -2093481984;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,6044
	ctx.r5.s64 = r11.s64 + 6044;
	// bl 0x829481e8
	sub_829481E8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x828ce044
	goto loc_828CE044;
loc_828CE040:
	// li r31,0
	r31.s64 = 0;
loc_828CE044:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82878ab0
	sub_82878AB0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x828ce09c
	if (cr6.eq) goto loc_828CE09C;
	// addi r11,r28,4
	r11.s64 = r28.s64 + 4;
loc_828CE080:
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
	// bne 0x828ce080
	if (!cr0.eq) goto loc_828CE080;
loc_828CE09C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82946780
	sub_82946780(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,713
	ctx.r5.s64 = 713;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828ce0dc
	if (cr0.eq) goto loc_828CE0DC;
	// lis r11,-31944
	r11.s64 = -2093481984;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,6088
	ctx.r5.s64 = r11.s64 + 6088;
	// bl 0x82948bb8
	sub_82948BB8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x828ce0e0
	goto loc_828CE0E0;
loc_828CE0DC:
	// li r31,0
	r31.s64 = 0;
loc_828CE0E0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82877c88
	sub_82877C88(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x828ce138
	if (cr6.eq) goto loc_828CE138;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
loc_828CE11C:
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
	// bne 0x828ce11c
	if (!cr0.eq) goto loc_828CE11C;
loc_828CE138:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82946780
	sub_82946780(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828ce154
	if (cr6.eq) goto loc_828CE154;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CE154:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x828ce164
	if (cr6.eq) goto loc_828CE164;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CE164:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x828ce174
	if (cr6.eq) goto loc_828CE174;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CE174:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_828CE180"))) PPC_WEAK_FUNC(sub_828CE180);
PPC_FUNC_IMPL(__imp__sub_828CE180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x829485e8
	sub_829485E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82adefd0
	sub_82ADEFD0(ctx, base);
	// bl 0x8248a1f8
	sub_8248A1F8(ctx, base);
	// li r11,16
	r11.s64 = 16;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// li r6,0
	ctx.r6.s64 = 0;
	// lvx128 v63,r3,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r8,-4224
	ctx.r4.s64 = ctx.r8.s64 + -4224;
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,729
	ctx.r5.s64 = 729;
	// lfs f0,2244(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2244);
	f0.f64 = double(temp.f32);
	// li r3,48
	ctx.r3.s64 = 48;
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828ce200
	if (cr0.eq) goto loc_828CE200;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82948660
	sub_82948660(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x828ce204
	goto loc_828CE204;
loc_828CE200:
	// li r31,0
	r31.s64 = 0;
loc_828CE204:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82878c40
	sub_82878C40(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x828ce25c
	if (cr6.eq) goto loc_828CE25C;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
loc_828CE240:
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
	// bne 0x828ce240
	if (!cr0.eq) goto loc_828CE240;
loc_828CE25C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82946780
	sub_82946780(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828ce278
	if (cr6.eq) goto loc_828CE278;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CE278:
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

__attribute__((alias("__imp__sub_828CE290"))) PPC_WEAK_FUNC(sub_828CE290);
PPC_FUNC_IMPL(__imp__sub_828CE290) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,948(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 948);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r30,944(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 944);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828ce2d0
	if (cr6.eq) goto loc_828CE2D0;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
loc_828CE2B4:
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
	// bne 0x828ce2b4
	if (!cr0.eq) goto loc_828CE2B4;
loc_828CE2D0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x828ce30c
	if (cr6.eq) goto loc_828CE30C;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x827f2e08
	sub_827F2E08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x829280f8
	sub_829280F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828ce304
	if (cr6.eq) goto loc_828CE304;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CE304:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x828ce320
	goto loc_828CE320;
loc_828CE30C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828ce31c
	if (cr6.eq) goto loc_828CE31C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CE31C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828CE320:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828CE328"))) PPC_WEAK_FUNC(sub_828CE328);
PPC_FUNC_IMPL(__imp__sub_828CE328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r29,r27,16
	r29.s64 = r27.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827f2470
	sub_827F2470(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x828ce478
	if (cr0.eq) goto loc_828CE478;
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,4760(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 4760);
	// lwz r11,32(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
loc_828CE370:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// beq 0x828ce394
	if (cr0.eq) goto loc_828CE394;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x828ce370
	if (cr6.eq) goto loc_828CE370;
loc_828CE394:
	// lis r30,-31954
	r30.s64 = -2094137344;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828ce3e8
	if (cr0.eq) goto loc_828CE3E8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r31,4720(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4720);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
loc_828CE3BC:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// beq 0x828ce3e0
	if (cr0.eq) goto loc_828CE3E0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x828ce3bc
	if (cr6.eq) goto loc_828CE3BC;
loc_828CE3E0:
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x828ce3ec
	if (!cr0.eq) goto loc_828CE3EC;
loc_828CE3E8:
	// li r28,1
	r28.s64 = 1;
loc_828CE3EC:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828ce478
	if (cr0.eq) goto loc_828CE478;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82adefd0
	sub_82ADEFD0(ctx, base);
	// bl 0x8255c200
	sub_8255C200(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f0,-17192(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -17192);
	f0.f64 = double(temp.f32);
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v63,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82ab21a8
	sub_82AB21A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x828cdaf8
	sub_828CDAF8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,4720(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4720);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827f2cf0
	sub_827F2CF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828cdec8
	sub_828CDEC8(ctx, base);
loc_828CE478:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_828CE480"))) PPC_WEAK_FUNC(sub_828CE480);
PPC_FUNC_IMPL(__imp__sub_828CE480) {
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
	// bl 0x828cd710
	sub_828CD710(ctx, base);
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
	// beq cr6,0x828ce4d8
	if (cr6.eq) goto loc_828CE4D8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CE4D8:
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

__attribute__((alias("__imp__sub_828CE4F0"))) PPC_WEAK_FUNC(sub_828CE4F0);
PPC_FUNC_IMPL(__imp__sub_828CE4F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// addi r11,r11,-20508
	r11.s64 = r11.s64 + -20508;
	// li r6,29
	ctx.r6.s64 = 29;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x829651f8
	sub_829651F8(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// addi r11,r11,-4300
	r11.s64 = r11.s64 + -4300;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r11,r8,-4772
	r11.s64 = ctx.r8.s64 + -4772;
	// addi r10,r10,-4724
	ctx.r10.s64 = ctx.r10.s64 + -4724;
	// addi r9,r9,-4744
	ctx.r9.s64 = ctx.r9.s64 + -4744;
	// stw r11,536(r31)
	PPC_STORE_U32(r31.u32 + 536, r11.u32);
	// li r30,0
	r30.s64 = 0;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r30,912(r31)
	PPC_STORE_U32(r31.u32 + 912, r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,916(r31)
	PPC_STORE_U32(r31.u32 + 916, r30.u32);
	// addi r4,r11,-4224
	ctx.r4.s64 = r11.s64 + -4224;
	// stw r30,920(r31)
	PPC_STORE_U32(r31.u32 + 920, r30.u32);
	// li r5,197
	ctx.r5.s64 = 197;
	// stw r30,924(r31)
	PPC_STORE_U32(r31.u32 + 924, r30.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r30,928(r31)
	PPC_STORE_U32(r31.u32 + 928, r30.u32);
	// stw r30,932(r31)
	PPC_STORE_U32(r31.u32 + 932, r30.u32);
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828ce590
	if (cr0.eq) goto loc_828CE590;
	// bl 0x828d0a50
	sub_828D0A50(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x828ce594
	goto loc_828CE594;
loc_828CE590:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_828CE594:
	// stw r29,936(r31)
	PPC_STORE_U32(r31.u32 + 936, r29.u32);
	// addi r11,r31,936
	r11.s64 = r31.s64 + 936;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r28,r11,4
	r28.s64 = r11.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x828cd660
	sub_828CD660(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// stw r30,944(r31)
	PPC_STORE_U32(r31.u32 + 944, r30.u32);
	// stw r30,948(r31)
	PPC_STORE_U32(r31.u32 + 948, r30.u32);
	// addi r3,r31,960
	ctx.r3.s64 = r31.s64 + 960;
	// stw r30,952(r31)
	PPC_STORE_U32(r31.u32 + 952, r30.u32);
	// stw r30,956(r31)
	PPC_STORE_U32(r31.u32 + 956, r30.u32);
	// bl 0x82e668c8
	sub_82E668C8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,28168
	r11.s64 = r11.s64 + 28168;
	// stw r11,960(r31)
	PPC_STORE_U32(r31.u32 + 960, r11.u32);
	// stw r30,1056(r31)
	PPC_STORE_U32(r31.u32 + 1056, r30.u32);
	// stw r30,1060(r31)
	PPC_STORE_U32(r31.u32 + 1060, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_828CE5F8"))) PPC_WEAK_FUNC(sub_828CE5F8);
PPC_FUNC_IMPL(__imp__sub_828CE5F8) {
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
	// bl 0x828cdd20
	sub_828CDD20(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828ce628
	if (cr0.eq) goto loc_828CE628;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_828CE628:
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

__attribute__((alias("__imp__sub_828CE648"))) PPC_WEAK_FUNC(sub_828CE648);
PPC_FUNC_IMPL(__imp__sub_828CE648) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-4224
	ctx.r4.s64 = r11.s64 + -4224;
	// li r5,472
	ctx.r5.s64 = 472;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r26,r11,21960
	r26.s64 = r11.s64 + 21960;
	// beq 0x828ce6c0
	if (cr0.eq) goto loc_828CE6C0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,936(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 936);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r30,1
	r30.s64 = 1;
	// bl 0x825b16a8
	sub_825B16A8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x828ce6c4
	goto loc_828CE6C4;
loc_828CE6C0:
	// li r31,0
	r31.s64 = 0;
loc_828CE6C4:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x824f7138
	sub_824F7138(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828ce6f4
	if (cr0.eq) goto loc_828CE6F4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_828CE6F4:
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lwz r27,88(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r30,0
	r30.s64 = 0;
	// addi r29,r11,-4888
	r29.s64 = r11.s64 + -4888;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_828CE708:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825b1058
	sub_825B1058(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r11,r29,8
	r11.s64 = r29.s64 + 8;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x828ce708
	if (cr6.lt) goto loc_828CE708;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lwz r31,92(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// beq cr6,0x828ce780
	if (cr6.eq) goto loc_828CE780;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
loc_828CE764:
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
	// bne 0x828ce764
	if (!cr0.eq) goto loc_828CE764;
loc_828CE780:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825a74a8
	sub_825A74A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828ce7a8
	if (cr6.eq) goto loc_828CE7A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CE7A8:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1184
	ctx.r4.s64 = r11.s64 + -1184;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,936(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 936);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lfs f31,-24412(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24412);
	f31.f64 = double(temp.f32);
	// lfs f30,2248(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2248);
	f30.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x825a8550
	sub_825A8550(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825a6b08
	sub_825A6B08(ctx, base);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1208
	ctx.r4.s64 = r11.s64 + -1208;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lwz r11,936(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 936);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x825a8550
	sub_825A8550(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825a6b08
	sub_825A6B08(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1244
	ctx.r4.s64 = r11.s64 + -1244;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lwz r11,936(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 936);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// addi r4,r11,12
	ctx.r4.s64 = r11.s64 + 12;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x825a8550
	sub_825A8550(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825a6b08
	sub_825A6B08(ctx, base);
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_828CE8C8"))) PPC_WEAK_FUNC(sub_828CE8C8);
PPC_FUNC_IMPL(__imp__sub_828CE8C8) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r30,r31,920
	r30.s64 = r31.s64 + 920;
	// lwz r11,920(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 920);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828ce9c4
	if (cr6.eq) goto loc_828CE9C4;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r5,39
	ctx.r5.s64 = 39;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r11,32
	r11.s64 = 32;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// lfs f1,-4856(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4856);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82f226c8
	sub_82F226C8(ctx, base);
	// lis r11,-31944
	r11.s64 = -2093481984;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,5752
	r11.s64 = r11.s64 + 5752;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r10,-4224
	ctx.r4.s64 = ctx.r10.s64 + -4224;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,527
	ctx.r5.s64 = 527;
	// li r3,284
	ctx.r3.s64 = 284;
	// lfs f31,156(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 156);
	f31.f64 = double(temp.f32);
	// lfs f30,160(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 160);
	f30.f64 = double(temp.f32);
	// lfs f29,164(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 164);
	f29.f64 = double(temp.f32);
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x828ce9a8
	if (cr0.eq) goto loc_828CE9A8;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x828ce970
	if (cr6.eq) goto loc_828CE970;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822e9f20
	sub_822E9F20(ctx, base);
loc_828CE970:
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// addi r26,r1,80
	r26.s64 = ctx.r1.s64 + 80;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// bl 0x827d00e0
	sub_827D00E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828ce9ac
	goto loc_828CE9AC;
loc_828CE9A8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828CE9AC:
	// addi r3,r31,952
	ctx.r3.s64 = r31.s64 + 952;
	// bl 0x8280e368
	sub_8280E368(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x828ce9c4
	if (cr6.eq) goto loc_828CE9C4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_828CE9C4:
	// lwz r11,952(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 952);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828cea78
	if (cr6.eq) goto loc_828CEA78;
	// lwz r11,956(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 956);
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// lwz r10,952(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 952);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x828cea0c
	if (cr6.eq) goto loc_828CEA0C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828CE9F0:
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
	// bne 0x828ce9f0
	if (!cr0.eq) goto loc_828CE9F0;
loc_828CEA0C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r30,r11,-4
	r30.s64 = r11.s64 + -4;
	// bne cr6,0x828cea2c
	if (!cr6.eq) goto loc_828CEA2C;
	// li r30,0
	r30.s64 = 0;
loc_828CEA2C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r28,r1,80
	r28.s64 = ctx.r1.s64 + 80;
	// bl 0x82512d38
	sub_82512D38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x82510d20
	sub_82510D20(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lwz r3,952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 952);
	// lfs f1,26548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 26548);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x827cf680
	sub_827CF680(ctx, base);
	// lwz r3,952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 952);
	// bl 0x827cfec0
	sub_827CFEC0(ctx, base);
loc_828CEA78:
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

__attribute__((alias("__imp__sub_828CEA90"))) PPC_WEAK_FUNC(sub_828CEA90);
PPC_FUNC_IMPL(__imp__sub_828CEA90) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b0c
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828cec00
	if (!cr6.eq) goto loc_828CEC00;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r5,39
	ctx.r5.s64 = 39;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r11,32
	r11.s64 = 32;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// lfs f1,-11900(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11900);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82f226c8
	sub_82F226C8(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-31946
	ctx.r8.s64 = -2093613056;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lfs f13,-396(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -396);
	ctx.f13.f64 = double(temp.f32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lfs f12,-31000(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31000);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r7,-4224
	ctx.r4.s64 = ctx.r7.s64 + -4224;
	// lfs f0,2240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r5,745
	ctx.r5.s64 = 745;
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r3,512
	ctx.r3.s64 = 512;
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r27,28912(r8)
	r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28912);
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x828cebb4
	if (cr0.eq) goto loc_828CEBB4;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x828ceb50
	if (cr6.eq) goto loc_828CEB50;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822e9f20
	sub_822E9F20(ctx, base);
loc_828CEB50:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// addi r30,r28,56
	r30.s64 = r28.s64 + 56;
	// bne cr6,0x828ceb60
	if (!cr6.eq) goto loc_828CEB60;
	// li r30,0
	r30.s64 = 0;
loc_828CEB60:
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r28,16
	ctx.r4.s64 = r28.s64 + 16;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r24,r11,29232
	r24.s64 = r11.s64 + 29232;
	// addi r23,r10,-15648
	r23.s64 = ctx.r10.s64 + -15648;
	// li r31,3
	r31.s64 = 3;
	// addi r22,r1,96
	r22.s64 = ctx.r1.s64 + 96;
	// addi r21,r1,80
	r21.s64 = ctx.r1.s64 + 80;
	// bl 0x82512d38
	sub_82512D38(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// bl 0x82aedcc8
	sub_82AEDCC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828cebb8
	goto loc_828CEBB8;
loc_828CEBB4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828CEBB8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82376d78
	sub_82376D78(ctx, base);
	// rlwinm. r11,r31,0,30,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828cebd4
	if (cr0.eq) goto loc_828CEBD4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rlwinm r31,r31,0,31,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_828CEBD4:
	// clrlwi. r11,r31,31
	r11.u64 = r31.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828cebec
	if (cr0.eq) goto loc_828CEBEC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828cebec
	if (cr6.eq) goto loc_828CEBEC;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_828CEBEC:
	// stw r27,600(r28)
	PPC_STORE_U32(r28.u32 + 600, r27.u32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x828cec00
	if (cr6.eq) goto loc_828CEC00;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_828CEC00:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_828CEC08"))) PPC_WEAK_FUNC(sub_828CEC08);
PPC_FUNC_IMPL(__imp__sub_828CEC08) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31944
	r11.s64 = -2093481984;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,5752
	r11.s64 = r11.s64 + 5752;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 160);
	f0.f64 = double(temp.f32);
	// lfs f13,164(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x827cfbf8
	sub_827CFBF8(ctx, base);
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
	// beq cr6,0x828cec84
	if (cr6.eq) goto loc_828CEC84;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828CEC68:
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
	// bne 0x828cec68
	if (!cr0.eq) goto loc_828CEC68;
loc_828CEC84:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r4,r10,-4224
	ctx.r4.s64 = ctx.r10.s64 + -4224;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,921
	ctx.r5.s64 = 921;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828cecb8
	if (cr6.eq) goto loc_828CECB8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CECB8:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828cecc8
	if (cr6.eq) goto loc_828CECC8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CECC8:
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

__attribute__((alias("__imp__sub_828CECE0"))) PPC_WEAK_FUNC(sub_828CECE0);
PPC_FUNC_IMPL(__imp__sub_828CECE0) {
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
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r30,r4,24
	r30.s64 = ctx.r4.s64 + 24;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r28,1
	r28.s64 = 1;
	// lwz r31,4768(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4768);
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
loc_828CED08:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// beq 0x828ced2c
	if (cr0.eq) goto loc_828CED2C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x828ced08
	if (cr6.eq) goto loc_828CED08;
loc_828CED2C:
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828ced70
	if (cr0.eq) goto loc_828CED70;
	// lis r11,-31954
	r11.s64 = -2094137344;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r31,4736(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4736);
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
loc_828CED44:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// beq 0x828ced68
	if (cr0.eq) goto loc_828CED68;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x828ced44
	if (cr6.eq) goto loc_828CED44;
loc_828CED68:
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x828ced78
	if (!cr0.eq) goto loc_828CED78;
loc_828CED70:
	// li r28,0
	r28.s64 = 0;
	// b 0x828cee00
	goto loc_828CEE00;
loc_828CED78:
	// lis r11,-31954
	r11.s64 = -2094137344;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r31,4728(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4728);
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
loc_828CED88:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// beq 0x828cedac
	if (cr0.eq) goto loc_828CEDAC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x828ced88
	if (cr6.eq) goto loc_828CED88;
loc_828CEDAC:
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x828cee00
	if (!cr0.eq) goto loc_828CEE00;
	// lwz r3,952(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 952);
	// bl 0x827cf678
	sub_827CF678(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828cee00
	if (cr0.eq) goto loc_828CEE00;
	// addi r4,r29,16
	ctx.r4.s64 = r29.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x828cede4
	if (!cr6.eq) goto loc_828CEDE4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_828CEDE4:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8250c5d0
	sub_8250C5D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828cec08
	sub_828CEC08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_828CEE00:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828cee14
	if (cr0.eq) goto loc_828CEE14;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r29,16
	ctx.r3.s64 = r29.s64 + 16;
	// bl 0x827f2cf0
	sub_827F2CF0(ctx, base);
loc_828CEE14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_828CEE20"))) PPC_WEAK_FUNC(sub_828CEE20);
PPC_FUNC_IMPL(__imp__sub_828CEE20) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r25,0
	r25.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23007
	ctx.r4.s64 = r11.s64 + -23007;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828ce290
	sub_828CE290(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// lfs f31,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// lis r26,-31954
	r26.s64 = -2094137344;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// beq 0x828cef58
	if (cr0.eq) goto loc_828CEF58;
	// li r30,1
	r30.s64 = 1;
	// bl 0x827f2e08
	sub_827F2E08(ctx, base);
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// lwz r11,4720(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4720);
loc_828CEE88:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// beq 0x828ceeac
	if (cr0.eq) goto loc_828CEEAC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x828cee88
	if (cr6.eq) goto loc_828CEE88;
loc_828CEEAC:
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x828cef0c
	if (!cr0.eq) goto loc_828CEF0C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x828ceed4
	if (!cr6.eq) goto loc_828CEED4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_828CEED4:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8250c5d0
	sub_8250C5D0(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// subf r11,r24,r3
	r11.s64 = ctx.r3.s64 - r24.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r24,r11,1
	r24.u64 = r11.u64 ^ 1;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828cef0c
	if (cr0.eq) goto loc_828CEF0C;
	// li r30,0
	r30.s64 = 0;
loc_828CEF0C:
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// mr r11,r27
	r11.u64 = r27.u64;
	// lwz r10,4820(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4820);
loc_828CEF18:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x828cef3c
	if (cr0.eq) goto loc_828CEF3C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x828cef18
	if (cr6.eq) goto loc_828CEF18;
loc_828CEF3C:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x828cef48
	if (!cr0.eq) goto loc_828CEF48;
	// li r30,0
	r30.s64 = 0;
loc_828CEF48:
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828cef74
	if (cr0.eq) goto loc_828CEF74;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// b 0x828cef6c
	goto loc_828CEF6C;
loc_828CEF58:
	// bl 0x8290e848
	sub_8290E848(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x828cef74
	if (!cr6.gt) goto loc_828CEF74;
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lwz r4,4660(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4660);
loc_828CEF6C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb598
	sub_82DFB598(ctx, base);
loc_828CEF74:
	// lwz r3,952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 952);
	// bl 0x827cf678
	sub_827CF678(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x828cf0b8
	if (!cr0.eq) goto loc_828CF0B8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb8c8
	sub_82DFB8C8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x828cf0b8
	if (!cr0.eq) goto loc_828CF0B8;
	// addi r5,r28,80
	ctx.r5.s64 = r28.s64 + 80;
	// addi r4,r28,48
	ctx.r4.s64 = r28.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828cdaf8
	sub_828CDAF8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ab21a8
	sub_82AB21A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825ecc88
	sub_825ECC88(ctx, base);
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
	// beq cr6,0x828ceff0
	if (cr6.eq) goto loc_828CEFF0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828CEFD4:
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
	// bne 0x828cefd4
	if (!cr0.eq) goto loc_828CEFD4;
loc_828CEFF0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r30,r1,88
	r30.s64 = ctx.r1.s64 + 88;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r11,-4224
	ctx.r4.s64 = r11.s64 + -4224;
	// li r5,1043
	ctx.r5.s64 = 1043;
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828cf02c
	if (cr6.eq) goto loc_828CF02C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CF02C:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828cf03c
	if (cr6.eq) goto loc_828CF03C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CF03C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x829161c0
	sub_829161C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8290e848
	sub_8290E848(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x828cf064
	if (!cr6.gt) goto loc_828CF064;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x828cf078
	goto loc_828CF078;
loc_828CF064:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,4720(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 4720);
	// li r25,1
	r25.s64 = 1;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_828CF078:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// clrlwi. r11,r25,31
	r11.u64 = r25.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828cf090
	if (cr0.eq) goto loc_828CF090;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_828CF090:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827f2cf0
	sub_827F2CF0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_828CF0B8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_828CF0D0"))) PPC_WEAK_FUNC(sub_828CF0D0);
PPC_FUNC_IMPL(__imp__sub_828CF0D0) {
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
	// beq 0x828cf124
	if (cr0.eq) goto loc_828CF124;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31961
	r11.s64 = -2094596096;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,16268
	ctx.r3.s64 = r11.s64 + 16268;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828cf124
	if (cr0.eq) goto loc_828CF124;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-56
	ctx.r3.s64 = r30.s64 + -56;
	// bl 0x828cee20
	sub_828CEE20(ctx, base);
loc_828CF11C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828cf24c
	goto loc_828CF24C;
loc_828CF124:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x828cf23c
	if (cr6.eq) goto loc_828CF23C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,25540
	ctx.r3.s64 = r11.s64 + 25540;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828cf15c
	if (cr0.eq) goto loc_828CF15C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-56
	ctx.r3.s64 = r30.s64 + -56;
	// bl 0x828cece0
	sub_828CECE0(ctx, base);
	// b 0x828cf11c
	goto loc_828CF11C;
loc_828CF15C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x828cf23c
	if (cr6.eq) goto loc_828CF23C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,16476
	ctx.r3.s64 = r11.s64 + 16476;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828cf194
	if (cr0.eq) goto loc_828CF194;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-56
	ctx.r3.s64 = r30.s64 + -56;
	// bl 0x828cd438
	sub_828CD438(ctx, base);
	// b 0x828cf11c
	goto loc_828CF11C;
loc_828CF194:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x828cf23c
	if (cr6.eq) goto loc_828CF23C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31960
	r11.s64 = -2094530560;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,9644
	ctx.r3.s64 = r11.s64 + 9644;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828cf1cc
	if (cr0.eq) goto loc_828CF1CC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-56
	ctx.r3.s64 = r30.s64 + -56;
	// bl 0x828cdb78
	sub_828CDB78(ctx, base);
	// b 0x828cf11c
	goto loc_828CF11C;
loc_828CF1CC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x828cf23c
	if (cr6.eq) goto loc_828CF23C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31960
	r11.s64 = -2094530560;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,10632
	ctx.r3.s64 = r11.s64 + 10632;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828cf204
	if (cr0.eq) goto loc_828CF204;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-56
	ctx.r3.s64 = r30.s64 + -56;
	// bl 0x828cd520
	sub_828CD520(ctx, base);
	// b 0x828cf11c
	goto loc_828CF11C;
loc_828CF204:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x828cf23c
	if (cr6.eq) goto loc_828CF23C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31957
	r11.s64 = -2094333952;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-7896
	ctx.r3.s64 = r11.s64 + -7896;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828cf23c
	if (cr0.eq) goto loc_828CF23C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-56
	ctx.r3.s64 = r30.s64 + -56;
	// bl 0x828ce328
	sub_828CE328(ctx, base);
	// b 0x828cf11c
	goto loc_828CF11C;
loc_828CF23C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82964e38
	sub_82964E38(ctx, base);
loc_828CF24C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_828CF258"))) PPC_WEAK_FUNC(sub_828CF258);
PPC_FUNC_IMPL(__imp__sub_828CF258) {
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-4224
	ctx.r4.s64 = r11.s64 + -4224;
	// li r5,189
	ctx.r5.s64 = 189;
	// li r3,1072
	ctx.r3.s64 = 1072;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828cf2a4
	if (cr0.eq) goto loc_828CF2A4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x828ce4f0
	sub_828CE4F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828cf2a8
	goto loc_828CF2A8;
loc_828CF2A4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828CF2A8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828cdc38
	sub_828CDC38(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828CF2C0"))) PPC_WEAK_FUNC(sub_828CF2C0);
PPC_FUNC_IMPL(__imp__sub_828CF2C0) {
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
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	r11.s64 = -2093481984;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,5684
	r31.s64 = r11.s64 + 5684;
	// lwz r11,5692(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5692);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x828cf308
	if (!cr0.eq) goto loc_828CF308;
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// lis r8,-32115
	ctx.r8.s64 = -2104688640;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r9,r9,-18024
	ctx.r9.s64 = ctx.r9.s64 + -18024;
	// addi r8,r8,-10280
	ctx.r8.s64 = ctx.r8.s64 + -10280;
	// stw r11,5692(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5692, r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
loc_828CF308:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r29,0
	r29.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r30,8
	ctx.r5.s64 = r30.s64 + 8;
	// stb r29,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r29.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x828f8138
	sub_828F8138(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828cf334
	if (cr0.eq) goto loc_828CF334;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// b 0x828cf338
	goto loc_828CF338;
loc_828CF334:
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
loc_828CF338:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828CF340"))) PPC_WEAK_FUNC(sub_828CF340);
PPC_FUNC_IMPL(__imp__sub_828CF340) {
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
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	r11.s64 = -2093481984;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,5696
	r31.s64 = r11.s64 + 5696;
	// lwz r11,5704(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5704);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x828cf388
	if (!cr0.eq) goto loc_828CF388;
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// lis r8,-32115
	ctx.r8.s64 = -2104688640;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r9,r9,-18024
	ctx.r9.s64 = ctx.r9.s64 + -18024;
	// addi r8,r8,-10208
	ctx.r8.s64 = ctx.r8.s64 + -10208;
	// stw r11,5704(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5704, r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
loc_828CF388:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r29,0
	r29.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r30,8
	ctx.r5.s64 = r30.s64 + 8;
	// stb r29,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r29.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x828f8138
	sub_828F8138(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828cf3b4
	if (cr0.eq) goto loc_828CF3B4;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// b 0x828cf3b8
	goto loc_828CF3B8;
loc_828CF3B4:
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
loc_828CF3B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828CF3C0"))) PPC_WEAK_FUNC(sub_828CF3C0);
PPC_FUNC_IMPL(__imp__sub_828CF3C0) {
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
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	r11.s64 = -2093481984;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,5708
	r31.s64 = r11.s64 + 5708;
	// lwz r11,5716(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5716);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x828cf408
	if (!cr0.eq) goto loc_828CF408;
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// lis r8,-32115
	ctx.r8.s64 = -2104688640;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r9,r9,-18024
	ctx.r9.s64 = ctx.r9.s64 + -18024;
	// addi r8,r8,-10136
	ctx.r8.s64 = ctx.r8.s64 + -10136;
	// stw r11,5716(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5716, r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
loc_828CF408:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r29,0
	r29.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r30,8
	ctx.r5.s64 = r30.s64 + 8;
	// stb r29,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r29.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x828f8138
	sub_828F8138(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828cf434
	if (cr0.eq) goto loc_828CF434;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// b 0x828cf438
	goto loc_828CF438;
loc_828CF434:
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
loc_828CF438:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828CF440"))) PPC_WEAK_FUNC(sub_828CF440);
PPC_FUNC_IMPL(__imp__sub_828CF440) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r30,r11,-4224
	r30.s64 = r11.s64 + -4224;
	// li r28,0
	r28.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,180
	ctx.r5.s64 = 180;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,1072
	ctx.r3.s64 = 1072;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828cf49c
	if (cr0.eq) goto loc_828CF49C;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r5,r11,-15648
	ctx.r5.s64 = r11.s64 + -15648;
	// addi r4,r10,29232
	ctx.r4.s64 = ctx.r10.s64 + 29232;
	// bl 0x828ce4f0
	sub_828CE4F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x828cf4a0
	goto loc_828CF4A0;
loc_828CF49C:
	// li r31,0
	r31.s64 = 0;
loc_828CF4A0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x828cd598
	sub_828CD598(ctx, base);
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,181
	ctx.r5.s64 = 181;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// lwz r29,84(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x828cf5bc
	if (cr0.eq) goto loc_828CF5BC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// li r28,1
	r28.s64 = 1;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// lfs f31,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f31.f64 = double(temp.f32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lfs f0,2244(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// beq cr6,0x828cf538
	if (cr6.eq) goto loc_828CF538;
	// addi r10,r29,4
	ctx.r10.s64 = r29.s64 + 4;
loc_828CF51C:
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
	// bne 0x828cf51c
	if (!cr0.eq) goto loc_828CF51C;
loc_828CF538:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bne cr6,0x828cf548
	if (!cr6.eq) goto loc_828CF548;
	// li r11,0
	r11.s64 = 0;
loc_828CF548:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// beq cr6,0x828cf578
	if (cr6.eq) goto loc_828CF578;
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
loc_828CF55C:
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
	// bne 0x828cf55c
	if (!cr0.eq) goto loc_828CF55C;
loc_828CF578:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f1,-31184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31184);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e85988
	sub_82E85988(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8279e710
	sub_8279E710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a0e48
	sub_827A0E48(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x828cf5c0
	goto loc_828CF5C0;
loc_828CF5BC:
	// li r31,0
	r31.s64 = 0;
loc_828CF5C0:
	// stw r31,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r31.u32);
	// addi r30,r27,4
	r30.s64 = r27.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8259d3b0
	sub_8259D3B0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828cf60c
	if (cr0.eq) goto loc_828CF60C;
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828cf5fc
	if (cr6.eq) goto loc_828CF5FC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CF5FC:
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828cf60c
	if (cr6.eq) goto loc_828CF60C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CF60C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x828cf61c
	if (cr6.eq) goto loc_828CF61C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CF61C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_828CF630"))) PPC_WEAK_FUNC(sub_828CF630);
PPC_FUNC_IMPL(__imp__sub_828CF630) {
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
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	r11.s64 = -2093481984;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,5720
	r31.s64 = r11.s64 + 5720;
	// lwz r11,5728(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5728);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x828cf678
	if (!cr0.eq) goto loc_828CF678;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// lis r8,-32115
	ctx.r8.s64 = -2104688640;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r9,r9,6712
	ctx.r9.s64 = ctx.r9.s64 + 6712;
	// addi r8,r8,-9072
	ctx.r8.s64 = ctx.r8.s64 + -9072;
	// stw r11,5728(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5728, r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
loc_828CF678:
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
	// beq 0x828cf6a4
	if (cr0.eq) goto loc_828CF6A4;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// b 0x828cf6a8
	goto loc_828CF6A8;
loc_828CF6A4:
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
loc_828CF6A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828CF6B0"))) PPC_WEAK_FUNC(sub_828CF6B0);
PPC_FUNC_IMPL(__imp__sub_828CF6B0) {
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
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	r11.s64 = -2093481984;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,5732
	r31.s64 = r11.s64 + 5732;
	// lwz r11,5740(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5740);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x828cf6f8
	if (!cr0.eq) goto loc_828CF6F8;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// lis r8,-32115
	ctx.r8.s64 = -2104688640;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r9,r9,6712
	ctx.r9.s64 = ctx.r9.s64 + 6712;
	// addi r8,r8,-9000
	ctx.r8.s64 = ctx.r8.s64 + -9000;
	// stw r11,5740(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5740, r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
loc_828CF6F8:
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
	// beq 0x828cf724
	if (cr0.eq) goto loc_828CF724;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// b 0x828cf728
	goto loc_828CF728;
loc_828CF724:
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
loc_828CF728:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828CF730"))) PPC_WEAK_FUNC(sub_828CF730);
PPC_FUNC_IMPL(__imp__sub_828CF730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af0
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-960(r1)
	ea = -960 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r15,r4
	r15.u64 = ctx.r4.u64;
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// bl 0x82964d30
	sub_82964D30(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r27,r11,-31292
	r27.s64 = r11.s64 + -31292;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r24,r11,-4856
	r24.s64 = r11.s64 + -4856;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r7,r24,4
	ctx.r7.s64 = r24.s64 + 4;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x82917c90
	sub_82917C90(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82916308
	sub_82916308(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828cf7bc
	if (cr0.eq) goto loc_828CF7BC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82513ed8
	sub_82513ED8(ctx, base);
	// b 0x828d0754
	goto loc_828D0754;
loc_828CF7BC:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r16,r11,-12340
	r16.s64 = r11.s64 + -12340;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822efac8
	sub_822EFAC8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82e1e040
	sub_82E1E040(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r31,r29,904
	r31.s64 = r29.s64 + 904;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,904(r29)
	PPC_STORE_U32(r29.u32 + 904, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r11,904(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 904);
	// lwz r3,188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r30,r11,1
	r30.u64 = r11.u64 ^ 1;
	// beq cr6,0x828cf82c
	if (cr6.eq) goto loc_828CF82C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CF82C:
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828cf83c
	if (cr6.eq) goto loc_828CF83C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CF83C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// clrlwi. r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfs f29,-11900(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -11900);
	f29.f64 = double(temp.f32);
	// li r28,32
	r28.s64 = 32;
	// beq 0x828cf934
	if (cr0.eq) goto loc_828CF934;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r5,39
	ctx.r5.s64 = 39;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// sth r28,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r28.u16);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x82f226c8
	sub_82F226C8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r30.u32);
	// beq 0x828cf890
	if (cr0.eq) goto loc_828CF890;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e9f20
	sub_822E9F20(ctx, base);
loc_828CF890:
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-4024
	ctx.r4.s64 = r11.s64 + -4024;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// beq cr6,0x828cf8d8
	if (cr6.eq) goto loc_828CF8D8;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828CF8BC:
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
	// bne 0x828cf8bc
	if (!cr0.eq) goto loc_828CF8BC;
loc_828CF8D8:
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,28928(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 28928);
	// bl 0x82516a08
	sub_82516A08(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828cf90c
	if (cr6.eq) goto loc_828CF90C;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_828CF90C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8290e8a0
	sub_8290E8A0(ctx, base);
	// li r4,8210
	ctx.r4.s64 = 8210;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82491978
	sub_82491978(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x828cf934
	if (cr6.eq) goto loc_828CF934;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_828CF934:
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r5,39
	ctx.r5.s64 = 39;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// sth r28,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r28.u16);
	// lfs f1,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r24.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82f226c8
	sub_82F226C8(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r20,r11,-4224
	r20.s64 = r11.s64 + -4224;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// li r5,237
	ctx.r5.s64 = 237;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r31,0
	r31.s64 = 0;
	// beq 0x828cf9a4
	if (cr0.eq) goto loc_828CF9A4;
	// addic. r11,r29,-16
	xer.ca = r29.u32 > 15;
	r11.s64 = r29.s64 + -16;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bne 0x828cf994
	if (!cr0.eq) goto loc_828CF994;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_828CF994:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x829654c8
	sub_829654C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828cf9a8
	goto loc_828CF9A8;
loc_828CF9A4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_828CF9A8:
	// addi r3,r29,912
	ctx.r3.s64 = r29.s64 + 912;
	// bl 0x8275d7c8
	sub_8275D7C8(ctx, base);
	// addi r19,r29,-16
	r19.s64 = r29.s64 + -16;
	// addi r4,r29,468
	ctx.r4.s64 = r29.s64 + 468;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x828cea90
	sub_828CEA90(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r18)
	ctx.r4.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// bl 0x829176e0
	sub_829176E0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r28,-32256
	r28.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f1,2244(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 2244);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8290f4d8
	sub_8290F4D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x822efac8
	sub_822EFAC8(ctx, base);
	// lwz r11,172(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r21,0(r3)
	r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828cfa18
	if (cr6.eq) goto loc_828CFA18;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CFA18:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r22,1
	r22.s64 = 1;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// lfs f30,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f30.f64 = double(temp.f32);
	// beq cr6,0x828cfef8
	if (cr6.eq) goto loc_828CFEF8;
	// lis r27,-31954
	r27.s64 = -2094137344;
	// lfs f0,2244(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 2244);
	f0.f64 = double(temp.f32);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stfs f0,216(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f30,224(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// addi r30,r11,-4036
	r30.s64 = r11.s64 + -4036;
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, r31.u32);
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, r31.u8);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r11,-1288(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -1288);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r30.u32);
	// lfs f31,-24780(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24780);
	f31.f64 = double(temp.f32);
	// stfs f31,228(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f31,232(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r26,-31954
	r26.s64 = -2094137344;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lfs f0,2244(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,264(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stw r31,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, r31.u32);
	// addi r23,r11,-4048
	r23.s64 = r11.s64 + -4048;
	// stfs f30,272(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f31,276(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stb r31,284(r1)
	PPC_STORE_U8(ctx.r1.u32 + 284, r31.u8);
	// stfs f31,280(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stw r23,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, r23.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r11,-1284(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -1284);
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r25,-31954
	r25.s64 = -2094137344;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lfs f0,2244(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,312(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// stw r31,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, r31.u32);
	// addi r14,r11,-4060
	r14.s64 = r11.s64 + -4060;
	// stfs f30,320(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// stfs f31,324(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// stb r31,332(r1)
	PPC_STORE_U8(ctx.r1.u32 + 332, r31.u8);
	// stfs f31,328(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stw r14,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, r14.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lwz r11,-1216(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -1216);
	// stw r11,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lfs f0,2244(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,360(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// stw r31,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, r31.u32);
	// addi r10,r10,-4072
	ctx.r10.s64 = ctx.r10.s64 + -4072;
	// stfs f30,368(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// stfs f31,372(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// stb r31,380(r1)
	PPC_STORE_U8(ctx.r1.u32 + 380, r31.u8);
	// stfs f31,376(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// stw r10,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r10.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// lwz r11,-1236(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1236);
	// stw r11,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,392
	ctx.r3.s64 = ctx.r1.s64 + 392;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r24,-31954
	r24.s64 = -2094137344;
	// lfs f0,2244(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r31,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, r31.u32);
	// stfs f0,408(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 408, temp.u32);
	// stw r14,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, r14.u32);
	// stfs f30,416(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 416, temp.u32);
	// stb r31,428(r1)
	PPC_STORE_U8(ctx.r1.u32 + 428, r31.u8);
	// stfs f31,420(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 420, temp.u32);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// lwz r11,-1200(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + -1200);
	// stfs f31,424(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// stw r11,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,440
	ctx.r3.s64 = ctx.r1.s64 + 440;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lfs f0,2244(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,456(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 456, temp.u32);
	// stw r22,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, r22.u32);
	// addi r14,r10,-4084
	r14.s64 = ctx.r10.s64 + -4084;
	// stfs f30,464(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 464, temp.u32);
	// stfs f31,468(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 468, temp.u32);
	// stb r31,476(r1)
	PPC_STORE_U8(ctx.r1.u32 + 476, r31.u8);
	// stfs f31,472(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 472, temp.u32);
	// stw r14,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, r14.u32);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// lwz r11,-1184(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1184);
	// stw r11,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,488
	ctx.r3.s64 = ctx.r1.s64 + 488;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r14,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, r14.u32);
	// stfs f0,504(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 504, temp.u32);
	// stw r22,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, r22.u32);
	// stfs f30,512(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 512, temp.u32);
	// stb r31,524(r1)
	PPC_STORE_U8(ctx.r1.u32 + 524, r31.u8);
	// stfs f31,516(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 516, temp.u32);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// stfs f31,520(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 520, temp.u32);
	// lwz r11,-1180(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1180);
	// stw r11,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,536
	ctx.r3.s64 = ctx.r1.s64 + 536;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lfs f0,2244(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,552(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 552, temp.u32);
	// stw r31,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, r31.u32);
	// addi r10,r10,-4096
	ctx.r10.s64 = ctx.r10.s64 + -4096;
	// stfs f30,560(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 560, temp.u32);
	// stfs f31,564(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 564, temp.u32);
	// stb r31,572(r1)
	PPC_STORE_U8(ctx.r1.u32 + 572, r31.u8);
	// stfs f31,568(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 568, temp.u32);
	// stw r10,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r10.u32);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// lwz r11,-1148(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1148);
	// stw r11,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,584
	ctx.r3.s64 = ctx.r1.s64 + 584;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lfs f0,2244(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,600(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 600, temp.u32);
	// stw r22,604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 604, r22.u32);
	// addi r10,r10,-4108
	ctx.r10.s64 = ctx.r10.s64 + -4108;
	// stfs f30,608(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 608, temp.u32);
	// stfs f31,612(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 612, temp.u32);
	// stb r31,620(r1)
	PPC_STORE_U8(ctx.r1.u32 + 620, r31.u8);
	// stfs f31,616(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 616, temp.u32);
	// stw r10,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r10.u32);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// lwz r11,20868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20868);
	// stw r11,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,632
	ctx.r3.s64 = ctx.r1.s64 + 632;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r22,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, r22.u32);
	// stfs f0,648(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 648, temp.u32);
	// stw r30,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, r30.u32);
	// stfs f30,656(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 656, temp.u32);
	// stb r31,668(r1)
	PPC_STORE_U8(ctx.r1.u32 + 668, r31.u8);
	// stfs f31,660(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 660, temp.u32);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// stfs f31,664(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 664, temp.u32);
	// lwz r11,-1152(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1152);
	// stw r11,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,680
	ctx.r3.s64 = ctx.r1.s64 + 680;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r22,700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 700, r22.u32);
	// stfs f0,696(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 696, temp.u32);
	// stw r23,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, r23.u32);
	// stfs f30,704(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 704, temp.u32);
	// stb r31,716(r1)
	PPC_STORE_U8(ctx.r1.u32 + 716, r31.u8);
	// stfs f31,708(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 708, temp.u32);
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// stfs f31,712(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 712, temp.u32);
	// lwz r11,-1156(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1156);
	// stw r11,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,728
	ctx.r3.s64 = ctx.r1.s64 + 728;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,273
	ctx.r5.s64 = 273;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x828cfd34
	if (cr0.eq) goto loc_828CFD34;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827f0d28
	sub_827F0D28(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r11,r11,6716
	r11.s64 = r11.s64 + 6716;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x828cfd38
	goto loc_828CFD38;
loc_828CFD34:
	// mr r30,r31
	r30.u64 = r31.u64;
loc_828CFD38:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8286c908
	sub_8286C908(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r30,r29,460
	r30.s64 = r29.s64 + 460;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,460(r29)
	PPC_STORE_U32(r29.u32 + 460, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r11,460(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 460);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r23,r11,1
	r23.u64 = r11.u64 ^ 1;
	// beq cr6,0x828cfd90
	if (cr6.eq) goto loc_828CFD90;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CFD90:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828cfdfc
	if (cr0.eq) goto loc_828CFDFC;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-4924
	ctx.r4.s64 = r11.s64 + -4924;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// addi r23,r1,88
	r23.s64 = ctx.r1.s64 + 88;
	// lwz r14,0(r30)
	r14.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f1,2244(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 2244);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// bl 0x827f08f0
	sub_827F08F0(ctx, base);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x827f05d0
	sub_827F05D0(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x827f05d8
	sub_827F05D8(ctx, base);
loc_828CFDFC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827f21f8
	sub_827F21F8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x828cfef4
	if (cr0.eq) goto loc_828CFEF4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,-1288(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + -1288);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f31,-24412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24412);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x827f01c8
	sub_827F01C8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,-1284(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + -1284);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x827f01c8
	sub_827F01C8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,-1216(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + -1216);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x827f01c8
	sub_827F01C8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,-1200(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + -1200);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x827f01c8
	sub_827F01C8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32212
	r11.s64 = -2111045632;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// addi r11,r11,0
	r11.s64 = r11.s64 + 0;
	// addi r4,r10,-11844
	ctx.r4.s64 = ctx.r10.s64 + -11844;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r19,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r19.u32);
	// ld r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// bl 0x828cf630
	sub_828CF630(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827f0718
	sub_827F0718(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_828CFEF4:
	// lwz r24,80(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_828CFEF8:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,294
	ctx.r5.s64 = 294;
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828cff30
	if (cr0.eq) goto loc_828CFF30;
	// addic. r11,r29,-16
	xer.ca = r29.u32 > 15;
	r11.s64 = r29.s64 + -16;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bne 0x828cff24
	if (!cr0.eq) goto loc_828CFF24;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_828CFF24:
	// bl 0x828d0768
	sub_828D0768(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828cff34
	goto loc_828CFF34;
loc_828CFF30:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_828CFF34:
	// addi r25,r29,228
	r25.s64 = r29.s64 + 228;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x828ce480
	sub_828CE480(ctx, base);
	// lis r11,-31944
	r11.s64 = -2093481984;
	// addi r26,r11,5752
	r26.s64 = r11.s64 + 5752;
	// lwz r30,228(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 228);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x828d003c
	if (cr6.eq) goto loc_828D003C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r27,0(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82ab21a8
	sub_82AB21A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r27,0(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x827f2180
	sub_827F2180(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,20(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8291cc00
	sub_8291CC00(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,140(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 140);
	f0.f64 = double(temp.f32);
	// stfs f0,120(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 120, temp.u32);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828cffbc
	if (cr6.eq) goto loc_828CFFBC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828CFFBC:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lfs f3,2244(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 2244);
	ctx.f3.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f1,-22120(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x829271f0
	sub_829271F0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, r31.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lbz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827f6350
	sub_827F6350(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,-6772(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -6772);
	f0.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_828D003C:
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x828d04f8
	if (cr6.eq) goto loc_828D04F8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827f20d0
	sub_827F20D0(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32109
	r11.s64 = -2104295424;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,11312
	ctx.r4.s64 = r11.s64 + 11312;
	// bl 0x828c5e08
	sub_828C5E08(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r29,252
	r30.s64 = r29.s64 + 252;
	// addi r27,r1,96
	r27.s64 = ctx.r1.s64 + 96;
	// lwz r4,4720(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4720);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32108
	r11.s64 = -2104229888;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,8536
	ctx.r4.s64 = r11.s64 + 8536;
	// bl 0x8286ece0
	sub_8286ECE0(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r27,r1,96
	r27.s64 = ctx.r1.s64 + 96;
	// lwz r4,4760(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4760);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32109
	r11.s64 = -2104295424;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-5304
	ctx.r4.s64 = r11.s64 + -5304;
	// bl 0x8286ece0
	sub_8286ECE0(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r27,r1,96
	r27.s64 = ctx.r1.s64 + 96;
	// lwz r4,4652(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4652);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32108
	r11.s64 = -2104229888;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-4288
	ctx.r4.s64 = r11.s64 + -4288;
	// bl 0x8286ece0
	sub_8286ECE0(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r27,r1,96
	r27.s64 = ctx.r1.s64 + 96;
	// lwz r4,4716(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4716);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32109
	r11.s64 = -2104295424;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-96
	ctx.r4.s64 = r11.s64 + -96;
	// bl 0x8286ece0
	sub_8286ECE0(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r27,r1,96
	r27.s64 = ctx.r1.s64 + 96;
	// lwz r4,4708(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4708);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32115
	r11.s64 = -2104688640;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,13144
	ctx.r4.s64 = r11.s64 + 13144;
	// bl 0x828cf2c0
	sub_828CF2C0(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r27,r1,96
	r27.s64 = ctx.r1.s64 + 96;
	// lwz r4,4624(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4624);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32115
	r11.s64 = -2104688640;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,13032
	ctx.r4.s64 = r11.s64 + 13032;
	// bl 0x828cf2c0
	sub_828CF2C0(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r27,r1,96
	r27.s64 = ctx.r1.s64 + 96;
	// lwz r4,4660(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4660);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32115
	r11.s64 = -2104688640;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,13256
	ctx.r4.s64 = r11.s64 + 13256;
	// bl 0x828cf340
	sub_828CF340(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r27,r1,96
	r27.s64 = ctx.r1.s64 + 96;
	// lwz r4,4728(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4728);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32115
	r11.s64 = -2104688640;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15680
	ctx.r4.s64 = r11.s64 + 15680;
	// bl 0x828cf2c0
	sub_828CF2C0(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r27,r1,96
	r27.s64 = ctx.r1.s64 + 96;
	// lwz r4,4644(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4644);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32115
	r11.s64 = -2104688640;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15792
	ctx.r4.s64 = r11.s64 + 15792;
	// bl 0x828cf2c0
	sub_828CF2C0(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r27,r1,96
	r27.s64 = ctx.r1.s64 + 96;
	// lwz r4,4596(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4596);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32115
	r11.s64 = -2104688640;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,12696
	ctx.r4.s64 = r11.s64 + 12696;
	// bl 0x828cf2c0
	sub_828CF2C0(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r27,r1,96
	r27.s64 = ctx.r1.s64 + 96;
	// lwz r4,4656(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4656);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32115
	r11.s64 = -2104688640;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,5392
	ctx.r4.s64 = r11.s64 + 5392;
	// bl 0x828cf2c0
	sub_828CF2C0(ctx, base);
	// lis r27,-31954
	r27.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r23,r1,96
	r23.s64 = ctx.r1.s64 + 96;
	// lwz r4,4592(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 4592);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32115
	r11.s64 = -2104688640;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,12920
	ctx.r4.s64 = r11.s64 + 12920;
	// bl 0x828cf2c0
	sub_828CF2C0(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r23,r1,96
	r23.s64 = ctx.r1.s64 + 96;
	// lwz r4,4688(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4688);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32115
	r11.s64 = -2104688640;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15680
	ctx.r4.s64 = r11.s64 + 15680;
	// bl 0x828cf2c0
	sub_828CF2C0(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r23,r1,96
	r23.s64 = ctx.r1.s64 + 96;
	// lwz r4,4600(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4600);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32115
	r11.s64 = -2104688640;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,14808
	ctx.r4.s64 = r11.s64 + 14808;
	// bl 0x828cf3c0
	sub_828CF3C0(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r23,r1,96
	r23.s64 = ctx.r1.s64 + 96;
	// lwz r4,4604(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4604);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32115
	r11.s64 = -2104688640;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,13448
	ctx.r4.s64 = r11.s64 + 13448;
	// bl 0x828cf2c0
	sub_828CF2C0(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r23,r1,96
	r23.s64 = ctx.r1.s64 + 96;
	// lwz r4,4616(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4616);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,4592(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 4592);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827f2cf0
	sub_827F2CF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32108
	r11.s64 = -2104229888;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,18888
	ctx.r4.s64 = r11.s64 + 18888;
	// bl 0x8286ece0
	sub_8286ECE0(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r29,356
	r30.s64 = r29.s64 + 356;
	// lwz r4,4840(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4840);
	// addi r27,r1,96
	r27.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32108
	r11.s64 = -2104229888;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,16344
	ctx.r4.s64 = r11.s64 + 16344;
	// bl 0x8286ece0
	sub_8286ECE0(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r27,r1,96
	r27.s64 = ctx.r1.s64 + 96;
	// lwz r4,4832(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4832);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32108
	r11.s64 = -2104229888;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,14976
	ctx.r4.s64 = r11.s64 + 14976;
	// bl 0x8286ece0
	sub_8286ECE0(ctx, base);
	// lis r27,-31954
	r27.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r23,r1,96
	r23.s64 = ctx.r1.s64 + 96;
	// lwz r4,4824(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 4824);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32108
	r11.s64 = -2104229888;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,18368
	ctx.r4.s64 = r11.s64 + 18368;
	// bl 0x8286ece0
	sub_8286ECE0(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r23,r1,96
	r23.s64 = ctx.r1.s64 + 96;
	// lwz r4,4848(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4848);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// bl 0x82e65398
	sub_82E65398(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,4824(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 4824);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827f2520
	sub_827F2520(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_828D04F8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f1,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82913f08
	sub_82913F08(ctx, base);
	// lfs f5,2244(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 2244);
	ctx.f5.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f4,152(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 152);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,148(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 148);
	ctx.f3.f64 = double(temp.f32);
	// fmr f1,f5
	ctx.f1.f64 = ctx.f5.f64;
	// lfs f2,144(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 144);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82915d60
	sub_82915D60(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82913ab8
	sub_82913AB8(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,387
	ctx.r5.s64 = 387;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828d0568
	if (cr0.eq) goto loc_828D0568;
	// addic. r11,r29,-16
	xer.ca = r29.u32 > 15;
	r11.s64 = r29.s64 + -16;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bne 0x828d0558
	if (!cr0.eq) goto loc_828D0558;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_828D0558:
	// addi r5,r26,200
	ctx.r5.s64 = r26.s64 + 200;
	// bl 0x829463b0
	sub_829463B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828d056c
	goto loc_828D056C;
loc_828D0568:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_828D056C:
	// addi r3,r29,896
	ctx.r3.s64 = r29.s64 + 896;
	// bl 0x8286e080
	sub_8286E080(ctx, base);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r11,-31944
	r11.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfs f0,8256(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8256);
	f0.f64 = double(temp.f32);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lfs f13,-31000(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -31000);
	ctx.f13.f64 = double(temp.f32);
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// addi r30,r11,6088
	r30.s64 = r11.s64 + 6088;
	// stfs f0,6088(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 6088, temp.u32);
	// addi r9,r10,6044
	ctx.r9.s64 = ctx.r10.s64 + 6044;
	// stfs f0,6044(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6044, temp.u32);
	// lis r8,-31944
	ctx.r8.s64 = -2093481984;
	// lfs f12,22412(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 22412);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-17192(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -17192);
	ctx.f11.f64 = double(temp.f32);
	// li r4,4
	ctx.r4.s64 = 4;
	// lfs f10,8260(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8260);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// stfs f29,4(r30)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// stfs f12,6072(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 6072, temp.u32);
	// stfs f11,8(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f10,4(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// bl 0x828ce8c8
	sub_828CE8C8(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,404
	ctx.r5.s64 = 404;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x828d0620
	if (cr0.eq) goto loc_828D0620;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82adefd0
	sub_82ADEFD0(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,-4956
	ctx.r5.s64 = r11.s64 + -4956;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x829285e8
	sub_829285E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828d0624
	goto loc_828D0624;
loc_828D0620:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_828D0624:
	// addi r3,r29,928
	ctx.r3.s64 = r29.s64 + 928;
	// bl 0x8286ebf0
	sub_8286EBF0(ctx, base);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x828d06e0
	if (cr6.eq) goto loc_828D06E0;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x82b59f70
	sub_82B59F70(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// li r10,6
	ctx.r10.s64 = 6;
	// stfs f30,780(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 780, temp.u32);
	// stw r31,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, r31.u32);
	// stw r10,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r10.u32);
	// stw r22,776(r1)
	PPC_STORE_U32(ctx.r1.u32 + 776, r22.u32);
	// lfs f0,-8172(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8172);
	f0.f64 = double(temp.f32);
	// stfs f0,772(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 772, temp.u32);
	// lwz r30,608(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 608);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x828d06e0
	if (cr6.eq) goto loc_828D06E0;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r1,736
	ctx.r7.s64 = ctx.r1.s64 + 736;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// bl 0x82919bc8
	sub_82919BC8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32115
	r11.s64 = -2104688640;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r19,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r19.u32);
	// addi r11,r11,-12288
	r11.s64 = r11.s64 + -12288;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// ld r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// ld r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// bl 0x828cf6b0
	sub_828CF6B0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82918790
	sub_82918790(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r26,168
	ctx.r4.s64 = r26.s64 + 168;
	// bl 0x82918030
	sub_82918030(ctx, base);
loc_828D06E0:
	// lis r11,-31944
	r11.s64 = -2093481984;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r31,r11,6104
	r31.s64 = r11.s64 + 6104;
	// bl 0x822efac8
	sub_822EFAC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x827f2848
	sub_827F2848(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x828d072c
	if (cr0.eq) goto loc_828D072C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f1,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r24.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x827f22a0
	sub_827F22A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827f2288
	sub_827F2288(ctx, base);
loc_828D072C:
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x828d074c
	if (cr6.eq) goto loc_828D074C;
	// lwz r11,944(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 944);
	// addi r3,r29,944
	ctx.r3.s64 = r29.s64 + 944;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_828D074C:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x828cde10
	sub_828CDE10(ctx, base);
loc_828D0754:
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_828D0768"))) PPC_WEAK_FUNC(sub_828D0768);
PPC_FUNC_IMPL(__imp__sub_828D0768) {
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
	// bl 0x8291cd40
	sub_8291CD40(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-3996
	r11.s64 = r11.s64 + -3996;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_828D07A8"))) PPC_WEAK_FUNC(sub_828D07A8);
PPC_FUNC_IMPL(__imp__sub_828D07A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x827f3820
	sub_827F3820(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// bne 0x828d07c8
	if (!cr0.eq) goto loc_828D07C8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_828D07C8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828d07d4
	if (cr6.eq) goto loc_828D07D4;
	// bl 0x828cd350
	sub_828CD350(ctx, base);
loc_828D07D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828D07E8"))) PPC_WEAK_FUNC(sub_828D07E8);
PPC_FUNC_IMPL(__imp__sub_828D07E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x827f3820
	sub_827F3820(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// bne 0x828d0808
	if (!cr0.eq) goto loc_828D0808;
	// li r3,0
	ctx.r3.s64 = 0;
loc_828D0808:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828d0814
	if (cr6.eq) goto loc_828D0814;
	// bl 0x828cd3a0
	sub_828CD3A0(ctx, base);
loc_828D0814:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828D0828"))) PPC_WEAK_FUNC(sub_828D0828);
PPC_FUNC_IMPL(__imp__sub_828D0828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x827f3820
	sub_827F3820(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// bne 0x828d0848
	if (!cr0.eq) goto loc_828D0848;
	// li r3,0
	ctx.r3.s64 = 0;
loc_828D0848:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828d0854
	if (cr6.eq) goto loc_828D0854;
	// bl 0x828cde10
	sub_828CDE10(ctx, base);
loc_828D0854:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828D0868"))) PPC_WEAK_FUNC(sub_828D0868);
PPC_FUNC_IMPL(__imp__sub_828D0868) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x827f3820
	sub_827F3820(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// bne 0x828d0888
	if (!cr0.eq) goto loc_828D0888;
	// li r3,0
	ctx.r3.s64 = 0;
loc_828D0888:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828d0894
	if (cr6.eq) goto loc_828D0894;
	// bl 0x828ccff0
	sub_828CCFF0(ctx, base);
loc_828D0894:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828D08A8"))) PPC_WEAK_FUNC(sub_828D08A8);
PPC_FUNC_IMPL(__imp__sub_828D08A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x827f3820
	sub_827F3820(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r11,r3,-16
	r11.s64 = ctx.r3.s64 + -16;
	// bne 0x828d08c8
	if (!cr0.eq) goto loc_828D08C8;
	// li r11,0
	r11.s64 = 0;
loc_828D08C8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828d08dc
	if (cr6.eq) goto loc_828D08DC;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x8290ef70
	sub_8290EF70(ctx, base);
	// b 0x828d08e0
	goto loc_828D08E0;
loc_828D08DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828D08E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828D08F0"))) PPC_WEAK_FUNC(sub_828D08F0);
PPC_FUNC_IMPL(__imp__sub_828D08F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x827f3820
	sub_827F3820(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// bne 0x828d0910
	if (!cr0.eq) goto loc_828D0910;
	// li r3,0
	ctx.r3.s64 = 0;
loc_828D0910:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828d0920
	if (cr6.eq) goto loc_828D0920;
	// bl 0x828ccf80
	sub_828CCF80(ctx, base);
	// b 0x828d0928
	goto loc_828D0928;
loc_828D0920:
	// lis r11,-31944
	r11.s64 = -2093481984;
	// addi r3,r11,6152
	ctx.r3.s64 = r11.s64 + 6152;
loc_828D0928:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828D0938"))) PPC_WEAK_FUNC(sub_828D0938);
PPC_FUNC_IMPL(__imp__sub_828D0938) {
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,-3996
	r11.s64 = r11.s64 + -3996;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x8291c9d0
	sub_8291C9D0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828d0974
	if (cr0.eq) goto loc_828D0974;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_828D0974:
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

__attribute__((alias("__imp__sub_828D0990"))) PPC_WEAK_FUNC(sub_828D0990);
PPC_FUNC_IMPL(__imp__sub_828D0990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// lfs f13,26548(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26548);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828D09B8"))) PPC_WEAK_FUNC(sub_828D09B8);
PPC_FUNC_IMPL(__imp__sub_828D09B8) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x827f3820
	sub_827F3820(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// bne 0x828d09e8
	if (!cr0.eq) goto loc_828D09E8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
loc_828D09E8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828d0a30
	if (cr6.eq) goto loc_828D0A30;
	// bl 0x828ccff8
	sub_828CCFF8(ctx, base);
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
	// beq cr6,0x828d0a38
	if (cr6.eq) goto loc_828D0A38;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828D0A10:
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
	// bne 0x828d0a10
	if (!cr0.eq) goto loc_828D0A10;
	// b 0x828d0a38
	goto loc_828D0A38;
loc_828D0A30:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_828D0A38:
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

__attribute__((alias("__imp__sub_828D0A50"))) PPC_WEAK_FUNC(sub_828D0A50);
PPC_FUNC_IMPL(__imp__sub_828D0A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,-31000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31000);
	f0.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lfs f13,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-6772(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -6772);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828D0A80"))) PPC_WEAK_FUNC(sub_828D0A80);
PPC_FUNC_IMPL(__imp__sub_828D0A80) {
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
	// bl 0x8295fe68
	sub_8295FE68(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f11,-6772(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -6772);
	ctx.f11.f64 = double(temp.f32);
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// lfs f10,-22656(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22656);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lfs f9,2244(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2244);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lfs f8,-17192(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -17192);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,-21220(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -21220);
	f0.f64 = double(temp.f32);
	// addi r3,r31,200
	ctx.r3.s64 = r31.s64 + 200;
	// lfs f13,26548(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 26548);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8260(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8260);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,-5316(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -5316);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-31000(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -31000);
	ctx.f6.f64 = double(temp.f32);
	// stfs f11,120(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// stfs f10,124(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 124, temp.u32);
	// stfs f9,128(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// stfs f8,132(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f0,136(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// stfs f0,140(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 140, temp.u32);
	// stfs f13,144(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f12,148(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// stfs f12,152(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// stfs f7,156(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// stfs f13,160(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// stfs f6,164(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// bl 0x82945118
	sub_82945118(ctx, base);
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x829472b8
	sub_829472B8(ctx, base);
	// addi r3,r31,236
	ctx.r3.s64 = r31.s64 + 236;
	// bl 0x829491e8
	sub_829491E8(ctx, base);
	// addi r3,r31,244
	ctx.r3.s64 = r31.s64 + 244;
	// bl 0x829495e8
	sub_829495E8(ctx, base);
	// addi r3,r31,260
	ctx.r3.s64 = r31.s64 + 260;
	// bl 0x82948b88
	sub_82948B88(ctx, base);
	// addi r3,r31,276
	ctx.r3.s64 = r31.s64 + 276;
	// bl 0x82946ae0
	sub_82946AE0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,88(r31)
	PPC_STORE_U8(r31.u32 + 88, ctx.r10.u8);
	// lfs f0,-5140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -5140);
	f0.f64 = double(temp.f32);
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

__attribute__((alias("__imp__sub_828D0B70"))) PPC_WEAK_FUNC(sub_828D0B70);
PPC_FUNC_IMPL(__imp__sub_828D0B70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831b1438
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq cr6,0x828d0bc4
	if (cr6.eq) goto loc_828D0BC4;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828D0BA8:
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
	// bne 0x828d0ba8
	if (!cr0.eq) goto loc_828D0BA8;
loc_828D0BC4:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82960a70
	sub_82960A70(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,19952
	ctx.r4.s64 = r11.s64 + 19952;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,19944
	ctx.r4.s64 = r11.s64 + 19944;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825cfc40
	sub_825CFC40(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-7300
	ctx.r4.s64 = r11.s64 + -7300;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-7320
	ctx.r4.s64 = r11.s64 + -7320;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r30,120
	ctx.r5.s64 = r30.s64 + 120;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfs f30,-24412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24412);
	f30.f64 = double(temp.f32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lfs f29,27976(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27976);
	f29.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// lfs f1,-24792(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24792);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// bl 0x825a8648
	sub_825A8648(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825a6b08
	sub_825A6B08(ctx, base);
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-3780
	ctx.r4.s64 = r11.s64 + -3780;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-3792
	ctx.r4.s64 = r11.s64 + -3792;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r5,r30,128
	ctx.r5.s64 = r30.s64 + 128;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f30.f64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f31,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x825a8648
	sub_825A8648(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825a6b08
	sub_825A6B08(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825cf410
	sub_825CF410(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,20004
	ctx.r4.s64 = r11.s64 + 20004;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-7328
	ctx.r4.s64 = r11.s64 + -7328;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825cfc40
	sub_825CFC40(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-7352
	ctx.r4.s64 = r11.s64 + -7352;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7368
	ctx.r4.s64 = r11.s64 + -7368;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r5,r30,132
	ctx.r5.s64 = r30.s64 + 132;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// lfs f28,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f28.f64 = double(temp.f32);
	// lfs f3,-21804(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -21804);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// bl 0x825a8648
	sub_825A8648(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825a6b08
	sub_825A6B08(ctx, base);
	// addi r3,r1,552
	ctx.r3.s64 = ctx.r1.s64 + 552;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,520
	ctx.r3.s64 = ctx.r1.s64 + 520;
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-7404
	ctx.r4.s64 = r11.s64 + -7404;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7420
	ctx.r4.s64 = r11.s64 + -7420;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r30,136
	ctx.r5.s64 = r30.s64 + 136;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f30.f64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x825a8648
	sub_825A8648(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825a6b08
	sub_825A6B08(ctx, base);
	// addi r3,r1,424
	ctx.r3.s64 = ctx.r1.s64 + 424;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,392
	ctx.r3.s64 = ctx.r1.s64 + 392;
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-7432
	ctx.r4.s64 = r11.s64 + -7432;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7444
	ctx.r4.s64 = r11.s64 + -7444;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r30,140
	ctx.r5.s64 = r30.s64 + 140;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// bl 0x825a8648
	sub_825A8648(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825a6b08
	sub_825A6B08(ctx, base);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825cf410
	sub_825CF410(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-30084
	ctx.r4.s64 = r11.s64 + -30084;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-10668
	ctx.r4.s64 = r11.s64 + -10668;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825cfc40
	sub_825CFC40(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-7116
	ctx.r4.s64 = r11.s64 + -7116;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7136
	ctx.r4.s64 = r11.s64 + -7136;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r5,r30,156
	ctx.r5.s64 = r30.s64 + 156;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f28.f64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lfs f30,-5316(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -5316);
	f30.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x825a8648
	sub_825A8648(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825a6b08
	sub_825A6B08(ctx, base);
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-7156
	ctx.r4.s64 = r11.s64 + -7156;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7180
	ctx.r4.s64 = r11.s64 + -7180;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r30,160
	ctx.r5.s64 = r30.s64 + 160;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f28.f64;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x825a8648
	sub_825A8648(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825a6b08
	sub_825A6B08(ctx, base);
	// addi r3,r1,488
	ctx.r3.s64 = ctx.r1.s64 + 488;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,456
	ctx.r3.s64 = ctx.r1.s64 + 456;
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-3816
	ctx.r4.s64 = r11.s64 + -3816;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-3840
	ctx.r4.s64 = r11.s64 + -3840;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r30,164
	ctx.r5.s64 = r30.s64 + 164;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f28.f64;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x825a8648
	sub_825A8648(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825a6b08
	sub_825A6B08(ctx, base);
	// addi r3,r1,616
	ctx.r3.s64 = ctx.r1.s64 + 616;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,584
	ctx.r3.s64 = ctx.r1.s64 + 584;
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825cf410
	sub_825CF410(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq cr6,0x828d107c
	if (cr6.eq) goto loc_828D107C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828D1060:
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
	// bne 0x828d1060
	if (!cr0.eq) goto loc_828D1060;
loc_828D107C:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r30,168
	ctx.r3.s64 = r30.s64 + 168;
	// bl 0x8291b038
	sub_8291B038(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq cr6,0x828d10c0
	if (cr6.eq) goto loc_828D10C0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828D10A4:
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
	// bne 0x828d10a4
	if (!cr0.eq) goto loc_828D10A4;
loc_828D10C0:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r30,200
	ctx.r3.s64 = r30.s64 + 200;
	// bl 0x82945cd0
	sub_82945CD0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq cr6,0x828d1104
	if (cr6.eq) goto loc_828D1104;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828D10E8:
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
	// bne 0x828d10e8
	if (!cr0.eq) goto loc_828D10E8;
loc_828D1104:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x82947688
	sub_82947688(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq cr6,0x828d1148
	if (cr6.eq) goto loc_828D1148;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828D112C:
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
	// bne 0x828d112c
	if (!cr0.eq) goto loc_828D112C;
loc_828D1148:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r30,236
	ctx.r3.s64 = r30.s64 + 236;
	// bl 0x82949560
	sub_82949560(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq cr6,0x828d118c
	if (cr6.eq) goto loc_828D118C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828D1170:
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
	// bne 0x828d1170
	if (!cr0.eq) goto loc_828D1170;
loc_828D118C:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r30,244
	ctx.r3.s64 = r30.s64 + 244;
	// bl 0x82949d20
	sub_82949D20(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq cr6,0x828d11d0
	if (cr6.eq) goto loc_828D11D0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828D11B4:
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
	// bne 0x828d11b4
	if (!cr0.eq) goto loc_828D11B4;
loc_828D11D0:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r30,260
	ctx.r3.s64 = r30.s64 + 260;
	// bl 0x82948eb8
	sub_82948EB8(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq cr6,0x828d1214
	if (cr6.eq) goto loc_828D1214;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828D11F8:
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
	// bne 0x828d11f8
	if (!cr0.eq) goto loc_828D11F8;
loc_828D1214:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r30,276
	ctx.r3.s64 = r30.s64 + 276;
	// bl 0x82946f28
	sub_82946F28(ctx, base);
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831b1484
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828D1230"))) PPC_WEAK_FUNC(sub_828D1230);
PPC_FUNC_IMPL(__imp__sub_828D1230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x8315cf68
	sub_8315CF68(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x828d1280
	if (cr0.eq) goto loc_828D1280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e627d0
	sub_82E627D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82908f88
	sub_82908F88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82e627d0
	sub_82E627D0(ctx, base);
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_828D1280:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828D1288"))) PPC_WEAK_FUNC(sub_828D1288);
PPC_FUNC_IMPL(__imp__sub_828D1288) {
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
	// bl 0x82e65b68
	sub_82E65B68(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r11,r11,-3744
	r11.s64 = r11.s64 + -3744;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82908f30
	sub_82908F30(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-3688
	r11.s64 = r11.s64 + -3688;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_828D12D8"))) PPC_WEAK_FUNC(sub_828D12D8);
PPC_FUNC_IMPL(__imp__sub_828D12D8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x828d1288
	sub_828D1288(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-3632
	r11.s64 = r11.s64 + -3632;
	// addi r4,r10,20740
	ctx.r4.s64 = ctx.r10.s64 + 20740;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e62730
	sub_82E62730(ctx, base);
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

__attribute__((alias("__imp__sub_828D1338"))) PPC_WEAK_FUNC(sub_828D1338);
PPC_FUNC_IMPL(__imp__sub_828D1338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x827f5678
	sub_827F5678(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,3532(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3532);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_828D1398"))) PPC_WEAK_FUNC(sub_828D1398);
PPC_FUNC_IMPL(__imp__sub_828D1398) {
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
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,4596(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4596);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827f5568
	sub_827F5568(ctx, base);
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

__attribute__((alias("__imp__sub_828D13E8"))) PPC_WEAK_FUNC(sub_828D13E8);
PPC_FUNC_IMPL(__imp__sub_828D13E8) {
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
	// beq 0x828d1440
	if (cr0.eq) goto loc_828D1440;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-3572
	ctx.r9.s64 = r11.s64 + -3572;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x828d1444
	goto loc_828D1444;
loc_828D1440:
	// li r11,0
	r11.s64 = 0;
loc_828D1444:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828d1490
	if (!cr6.eq) goto loc_828D1490;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828d1470
	if (cr6.eq) goto loc_828D1470;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_828D1470:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,21184(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21184);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_828D1490:
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

__attribute__((alias("__imp__sub_828D14B0"))) PPC_WEAK_FUNC(sub_828D14B0);
PPC_FUNC_IMPL(__imp__sub_828D14B0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x828d1288
	sub_828D1288(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,-3552
	r11.s64 = r11.s64 + -3552;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r4,4592(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4592);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e62730
	sub_82E62730(ctx, base);
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

__attribute__((alias("__imp__sub_828D1510"))) PPC_WEAK_FUNC(sub_828D1510);
PPC_FUNC_IMPL(__imp__sub_828D1510) {
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-3496
	ctx.r4.s64 = r11.s64 + -3496;
	// li r5,46
	ctx.r5.s64 = 46;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828d154c
	if (cr0.eq) goto loc_828D154C;
	// bl 0x828d14b0
	sub_828D14B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x828d1550
	goto loc_828D1550;
loc_828D154C:
	// li r31,0
	r31.s64 = 0;
loc_828D1550:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828d13e8
	sub_828D13E8(ctx, base);
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

__attribute__((alias("__imp__sub_828D1580"))) PPC_WEAK_FUNC(sub_828D1580);
PPC_FUNC_IMPL(__imp__sub_828D1580) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,4656(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4656);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827f5568
	sub_827F5568(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8291c5d0
	sub_8291C5D0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r4,2
	ctx.r4.s64 = 2;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82914830
	sub_82914830(ctx, base);
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

__attribute__((alias("__imp__sub_828D15E8"))) PPC_WEAK_FUNC(sub_828D15E8);
PPC_FUNC_IMPL(__imp__sub_828D15E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8291c5d0
	sub_8291C5D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828d1648
	if (cr0.eq) goto loc_828D1648;
	// bl 0x8290ef78
	sub_8290EF78(ctx, base);
	// bl 0x82946778
	sub_82946778(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x827f5678
	sub_827F5678(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,3532(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3532);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_828D1648:
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

__attribute__((alias("__imp__sub_828D1660"))) PPC_WEAK_FUNC(sub_828D1660);
PPC_FUNC_IMPL(__imp__sub_828D1660) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,120(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x828d07e8
	sub_828D07E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828D1674"))) PPC_WEAK_FUNC(sub_828D1674);
PPC_FUNC_IMPL(__imp__sub_828D1674) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828D1678"))) PPC_WEAK_FUNC(sub_828D1678);
PPC_FUNC_IMPL(__imp__sub_828D1678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,128(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 128);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x827f01a0
	sub_827F01A0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828d16d0
	if (cr0.eq) goto loc_828D16D0;
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,4600(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4600);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827f5568
	sub_827F5568(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_828D16D0:
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

__attribute__((alias("__imp__sub_828D16E8"))) PPC_WEAK_FUNC(sub_828D16E8);
PPC_FUNC_IMPL(__imp__sub_828D16E8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,20868(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 20868);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,140(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828d0868
	sub_828D0868(ctx, base);
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

__attribute__((alias("__imp__sub_828D1748"))) PPC_WEAK_FUNC(sub_828D1748);
PPC_FUNC_IMPL(__imp__sub_828D1748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,128(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 128);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x827f01a0
	sub_827F01A0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828d17a0
	if (cr0.eq) goto loc_828D17A0;
	// lis r11,-31954
	r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,4656(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4656);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827f5568
	sub_827F5568(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_828D17A0:
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

__attribute__((alias("__imp__sub_828D17B8"))) PPC_WEAK_FUNC(sub_828D17B8);
PPC_FUNC_IMPL(__imp__sub_828D17B8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x828d0828
	sub_828D0828(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828D17C0"))) PPC_WEAK_FUNC(sub_828D17C0);
PPC_FUNC_IMPL(__imp__sub_828D17C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8291c5d0
	sub_8291C5D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828d1820
	if (cr0.eq) goto loc_828D1820;
	// bl 0x8290ef78
	sub_8290EF78(ctx, base);
	// bl 0x82946778
	sub_82946778(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x827f5678
	sub_827F5678(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,3532(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3532);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_828D1820:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828d0868
	sub_828D0868(ctx, base);
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

__attribute__((alias("__imp__sub_828D1840"))) PPC_WEAK_FUNC(sub_828D1840);
PPC_FUNC_IMPL(__imp__sub_828D1840) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828d0828
	sub_828D0828(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8291ce88
	sub_8291CE88(ctx, base);
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

