#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82810328"))) PPC_WEAK_FUNC(sub_82810328);
PPC_FUNC_IMPL(__imp__sub_82810328) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-20020
	ctx.r4.s64 = r11.s64 + -20020;
	// li r5,137
	ctx.r5.s64 = 137;
	// li r3,112
	ctx.r3.s64 = 112;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82810390
	if (cr0.eq) goto loc_82810390;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82b590a0
	sub_82B590A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82810394
	goto loc_82810394;
loc_82810390:
	// li r31,0
	r31.s64 = 0;
loc_82810394:
	// stw r31,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r31.u32);
	// addi r30,r26,4
	r30.s64 = r26.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235bf30
	sub_8235BF30(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_828103C8"))) PPC_WEAK_FUNC(sub_828103C8);
PPC_FUNC_IMPL(__imp__sub_828103C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8281062c
	if (cr6.eq) goto loc_8281062C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-27944
	ctx.r4.s64 = r11.s64 + -27944;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-27700
	ctx.r4.s64 = r11.s64 + -27700;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r5,r30,16
	ctx.r5.s64 = r30.s64 + 16;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lfs f31,-24412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24412);
	f31.f64 = double(temp.f32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a6b08
	sub_825A6B08(ctx, base);
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28020
	ctx.r4.s64 = r11.s64 + -28020;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-27736
	ctx.r4.s64 = r11.s64 + -27736;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1000
	ctx.r7.s64 = 1000;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a87b8
	sub_825A87B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a7270
	sub_825A7270(ctx, base);
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28072
	ctx.r4.s64 = r11.s64 + -28072;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-27772
	ctx.r4.s64 = r11.s64 + -27772;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1000
	ctx.r7.s64 = 1000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r30,4
	ctx.r5.s64 = r30.s64 + 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825a87b8
	sub_825A87B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a7270
	sub_825A7270(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28124
	ctx.r4.s64 = r11.s64 + -28124;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-27804
	ctx.r4.s64 = r11.s64 + -27804;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r30,8
	ctx.r5.s64 = r30.s64 + 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
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
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28172
	ctx.r4.s64 = r11.s64 + -28172;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-27836
	ctx.r4.s64 = r11.s64 + -27836;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r30,12
	ctx.r5.s64 = r30.s64 + 12;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x825a8648
	sub_825A8648(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a6b08
	sub_825A6B08(ctx, base);
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
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
loc_8281062C:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
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

__attribute__((alias("__imp__sub_82810650"))) PPC_WEAK_FUNC(sub_82810650);
PPC_FUNC_IMPL(__imp__sub_82810650) {
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
	// bl 0x8280fcd0
	sub_8280FCD0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82810680
	if (cr0.eq) goto loc_82810680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82810680:
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

__attribute__((alias("__imp__sub_828106A0"))) PPC_WEAK_FUNC(sub_828106A0);
PPC_FUNC_IMPL(__imp__sub_828106A0) {
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
	PPCRegister f31{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
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
	// lfs f31,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// lfs f0,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x825154b8
	sub_825154B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82e84be0
	sub_82E84BE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82e84a10
	sub_82E84A10(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x82810718
	if (!cr6.eq) goto loc_82810718;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82810718:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8250c5d0
	sub_8250C5D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// subf r11,r3,r29
	r11.s64 = r29.s64 - ctx.r3.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r29,r11,27,31,31
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// li r11,236
	r11.s64 = 236;
	// lfs f0,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 240);
	f0.f64 = double(temp.f32);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r7,-31945
	ctx.r7.s64 = -2093547520;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// lvlx128 v63,r31,r11
	temp.u32 = r31.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r31,232
	ctx.r6.s64 = r31.s64 + 232;
	// vspltw128 v0,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r5,r31,228
	ctx.r5.s64 = r31.s64 + 228;
	// lvx128 v12,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r7,-28956
	ctx.r4.s64 = ctx.r7.s64 + -28956;
	// vmaddfp v0,v13,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// beq 0x82810820
	if (cr0.eq) goto loc_82810820;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r31,256
	ctx.r7.s64 = r31.s64 + 256;
	// stvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82810328
	sub_82810328(ctx, base);
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
	// beq cr6,0x828107dc
	if (cr6.eq) goto loc_828107DC;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828107C0:
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
	// bne 0x828107c0
	if (!cr0.eq) goto loc_828107C0;
loc_828107DC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r30,r1,104
	r30.s64 = ctx.r1.s64 + 104;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r11,-27672
	ctx.r4.s64 = r11.s64 + -27672;
	// li r5,196
	ctx.r5.s64 = 196;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82810818
	if (cr6.eq) goto loc_82810818;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82810818:
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// b 0x828108b0
	goto loc_828108B0;
loc_82810820:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r7,r30,32
	ctx.r7.s64 = r30.s64 + 32;
	// stvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82810328
	sub_82810328(ctx, base);
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
	// beq cr6,0x82810870
	if (cr6.eq) goto loc_82810870;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82810854:
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
	// bne 0x82810854
	if (!cr0.eq) goto loc_82810854;
loc_82810870:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r30,r1,96
	r30.s64 = ctx.r1.s64 + 96;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r11,-27672
	ctx.r4.s64 = r11.s64 + -27672;
	// li r5,200
	ctx.r5.s64 = 200;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828108ac
	if (cr6.eq) goto loc_828108AC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828108AC:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
loc_828108B0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828108bc
	if (cr6.eq) goto loc_828108BC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828108BC:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828108C8"))) PPC_WEAK_FUNC(sub_828108C8);
PPC_FUNC_IMPL(__imp__sub_828108C8) {
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
	// addi r3,r31,308
	ctx.r3.s64 = r31.s64 + 308;
	// bl 0x82b7b7d0
	sub_82B7B7D0(ctx, base);
	// lwz r3,296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82810904
	if (cr6.eq) goto loc_82810904;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82810904:
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82810914
	if (cr6.eq) goto loc_82810914;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82810914:
	// addi r3,r31,268
	ctx.r3.s64 = r31.s64 + 268;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r31,264
	ctx.r3.s64 = r31.s64 + 264;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82351c98
	sub_82351C98(ctx, base);
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

__attribute__((alias("__imp__sub_82810940"))) PPC_WEAK_FUNC(sub_82810940);
PPC_FUNC_IMPL(__imp__sub_82810940) {
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
	// beq 0x82810994
	if (cr0.eq) goto loc_82810994;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,15452
	ctx.r3.s64 = r11.s64 + 15452;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82810994
	if (cr0.eq) goto loc_82810994;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r29,-40
	ctx.r3.s64 = r29.s64 + -40;
	// bl 0x828106a0
	sub_828106A0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828109a4
	goto loc_828109A4;
loc_82810994:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82515f28
	sub_82515F28(ctx, base);
loc_828109A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828109B0"))) PPC_WEAK_FUNC(sub_828109B0);
PPC_FUNC_IMPL(__imp__sub_828109B0) {
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
	PPCRegister f31{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82515338
	sub_82515338(ctx, base);
	// lis r11,-31959
	r11.s64 = -2094465024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// bne cr6,0x82810a08
	if (!cr6.eq) goto loc_82810A08;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82810A08:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250c358
	sub_8250C358(ctx, base);
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r5,39
	ctx.r5.s64 = 39;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-27520
	r11.s64 = r11.s64 + -27520;
	// li r9,48
	ctx.r9.s64 = 48;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f31,2240(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2240);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82f28538
	sub_82F28538(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x82810ab4
	if (cr0.eq) goto loc_82810AB4;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822e9f20
	sub_822E9F20(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-27532
	ctx.r4.s64 = r11.s64 + -27532;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82515a28
	sub_82515A28(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,28920(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 28920);
	// bl 0x82516a08
	sub_82516A08(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82810ab4
	if (cr6.eq) goto loc_82810AB4;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_82810AB4:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f2,-22120(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82e84d60
	sub_82E84D60(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r28,r11,-27672
	r28.s64 = r11.s64 + -27672;
	// li r5,122
	ctx.r5.s64 = 122;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82810b00
	if (cr0.eq) goto loc_82810B00;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82e1bac0
	sub_82E1BAC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82810b04
	goto loc_82810B04;
loc_82810B00:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82810B04:
	// addi r30,r31,280
	r30.s64 = r31.s64 + 280;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e3958
	sub_822E3958(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r29,280(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 280);
	// bl 0x82515a28
	sub_82515A28(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82e1b810
	sub_82E1B810(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82810b3c
	if (cr6.eq) goto loc_82810B3C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82810B3C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,-23007
	r29.s64 = r11.s64 + -23007;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,248
	ctx.r3.s64 = r31.s64 + 248;
	// bl 0x82dfafc0
	sub_82DFAFC0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82810c5c
	if (cr0.eq) goto loc_82810C5C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-27560
	ctx.r4.s64 = r11.s64 + -27560;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq cr6,0x82810bb8
	if (cr6.eq) goto loc_82810BB8;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82810B9C:
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
	// bne 0x82810b9c
	if (!cr0.eq) goto loc_82810B9C;
loc_82810BB8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// bne cr6,0x82810bd8
	if (!cr6.eq) goto loc_82810BD8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82810BD8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8250e538
	sub_8250E538(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,-192
	ctx.r4.s64 = r11.s64 + -192;
	// bne cr6,0x82810bf4
	if (!cr6.eq) goto loc_82810BF4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82810BF4:
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827da560
	sub_827DA560(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r31,272
	ctx.r10.s64 = r31.s64 + 272;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82810c34
	if (cr6.eq) goto loc_82810C34;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82810C34:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82810c54
	if (cr6.eq) goto loc_82810C54;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82810C54:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_82810C5C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,252
	ctx.r3.s64 = r31.s64 + 252;
	// bl 0x82dfafc0
	sub_82DFAFC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82810cd4
	if (cr0.eq) goto loc_82810CD4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r10,-27596
	ctx.r5.s64 = ctx.r10.s64 + -27596;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r31,296
	ctx.r10.s64 = r31.s64 + 296;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82810cd4
	if (cr6.eq) goto loc_82810CD4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82810CD4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,141
	ctx.r5.s64 = 141;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82810d00
	if (cr0.eq) goto loc_82810D00;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82493478
	sub_82493478(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82810d04
	goto loc_82810D04;
loc_82810D00:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82810D04:
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// bl 0x8230ce28
	sub_8230CE28(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82810d1c
	if (cr6.eq) goto loc_82810D1C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_82810D1C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82810D28"))) PPC_WEAK_FUNC(sub_82810D28);
PPC_FUNC_IMPL(__imp__sub_82810D28) {
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// bl 0x82514010
	sub_82514010(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,-23007
	r28.s64 = r11.s64 + -23007;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r30,r31,268
	r30.s64 = r31.s64 + 268;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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
	// beq 0x82810dd4
	if (cr0.eq) goto loc_82810DD4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82810dc8
	if (cr6.eq) goto loc_82810DC8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82810DC8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfb598
	sub_82DFB598(ctx, base);
loc_82810DD4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,272(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 272);
	f0.f64 = double(temp.f32);
	// lfs f31,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// blt cr6,0x82810df4
	if (cr6.lt) goto loc_82810DF4;
	// lfs f13,0(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfs f0,272(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 272, temp.u32);
loc_82810DF4:
	// lfs f0,272(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 272);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bge cr6,0x82810e24
	if (!cr6.lt) goto loc_82810E24;
	// lfs f0,0(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f12,232(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,236(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f0,f12
	f0.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f12.f64));
	// lfs f12,304(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 304);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,232(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 232, temp.u32);
	// lfs f0,0(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmadds f0,f13,f0,f12
	f0.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f12.f64));
	// stfs f0,304(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 304, temp.u32);
loc_82810E24:
	// lfs f0,300(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 300);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bge cr6,0x82811040
	if (!cr6.lt) goto loc_82811040;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,288(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// bl 0x82515448
	sub_82515448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82494300
	sub_82494300(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8255e2b8
	sub_8255E2B8(ctx, base);
	// li r26,0
	r26.s64 = 0;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// lwz r30,288(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// bl 0x83159478
	sub_83159478(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824942d8
	sub_824942D8(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82811014
	if (cr6.eq) goto loc_82811014;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r28,r11
	r28.u64 = r11.u64;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x82811014
	if (cr6.eq) goto loc_82811014;
	// lis r29,-32256
	r29.s64 = -2113929216;
loc_82810E9C:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x824917d0
	sub_824917D0(ctx, base);
	// bl 0x83159478
	sub_83159478(ctx, base);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x82811008
	if (cr6.eq) goto loc_82811008;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stfs f31,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82515448
	sub_82515448(ctx, base);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// vspltisw128 v62,1
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_set1_epi32(int(0x1)));
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltisw128 v61,0
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_set1_epi32(int(0x0)));
	// lfs f13,2244(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,232(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 232);
	f0.f64 = double(temp.f32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v13,v62,1
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v62.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fsubs f13,f0,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r11,r1,208
	r11.s64 = ctx.r1.s64 + 208;
	// lvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v63,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// vmsum3fp128 v62,v63,v63
	simde_mm_store_ps(v62.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// lfs f12,304(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 304);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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
	// vmulfp128 v0,v62,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v0,v0,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// stvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,192(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82811008
	if (!cr6.lt) goto loc_82811008;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82811008
	if (!cr6.lt) goto loc_82811008;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lfs f0,260(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 260);
	f0.f64 = double(temp.f32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lfs f30,256(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 256);
	f30.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// lfs f0,276(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 276);
	f0.f64 = double(temp.f32);
	// lwz r25,0(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r24,r1,176
	r24.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v13,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v12,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v0,v0,v13,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,188(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x824917d0
	sub_824917D0(ctx, base);
	// bl 0x83159478
	sub_83159478(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,64(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82811008:
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// bne cr6,0x82810e9c
	if (!cr6.eq) goto loc_82810E9C;
loc_82811014:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stfs f31,304(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 304, temp.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f0,-21808(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -21808);
	f0.f64 = double(temp.f32);
	// stfs f0,300(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 300, temp.u32);
	// bl 0x82b67888
	sub_82B67888(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r26.u32);
loc_82811040:
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,300(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 300);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f13,240(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,300(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 300, temp.u32);
	// lfs f0,0(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
	// stfs f0,240(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 240, temp.u32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bge cr6,0x82811070
	if (!cr6.lt) goto loc_82811070;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82513ed8
	sub_82513ED8(ctx, base);
loc_82811070:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82811080"))) PPC_WEAK_FUNC(sub_82811080);
PPC_FUNC_IMPL(__imp__sub_82811080) {
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
	// addi r31,r11,-18724
	r31.s64 = r11.s64 + -18724;
	// lwz r11,-18716(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18716);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x828110c8
	if (!cr0.eq) goto loc_828110C8;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// lis r8,-32127
	ctx.r8.s64 = -2105475072;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r9,r9,6712
	ctx.r9.s64 = ctx.r9.s64 + 6712;
	// addi r8,r8,-1096
	ctx.r8.s64 = ctx.r8.s64 + -1096;
	// stw r11,-18716(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18716, r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
loc_828110C8:
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
	// beq 0x828110f4
	if (cr0.eq) goto loc_828110F4;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// b 0x828110f8
	goto loc_828110F8;
loc_828110F4:
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
loc_828110F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82811100"))) PPC_WEAK_FUNC(sub_82811100);
PPC_FUNC_IMPL(__imp__sub_82811100) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82515338
	sub_82515338(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r29,r11,-27672
	r29.s64 = r11.s64 + -27672;
	// li r5,323
	ctx.r5.s64 = 323;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,168
	ctx.r3.s64 = 168;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8281114c
	if (cr0.eq) goto loc_8281114C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x827d5db8
	sub_827D5DB8(ctx, base);
	// b 0x82811150
	goto loc_82811150;
loc_8281114C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82811150:
	// lwz r11,296(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// stw r3,296(r31)
	PPC_STORE_U32(r31.u32 + 296, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82811178
	if (cr6.eq) goto loc_82811178;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82811178:
	// lis r11,-31959
	r11.s64 = -2094465024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// bne cr6,0x828111b0
	if (!cr6.eq) goto loc_828111B0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_828111B0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250c358
	sub_8250C358(ctx, base);
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// li r10,96
	ctx.r10.s64 = 96;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// lfs f13,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,236(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f2,-396(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -396);
	ctx.f2.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r9,30976
	r11.s64 = ctx.r9.s64 + 30976;
	// lfs f11,244(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lfs f0,2240(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmuls f1,f13,f12
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82f270c8
	sub_82F270C8(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,330
	ctx.r5.s64 = 330;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82811294
	if (cr0.eq) goto loc_82811294;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,280(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 280);
	// bl 0x825154b8
	sub_825154B8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82515448
	sub_82515448(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// bl 0x82494528
	sub_82494528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82811298
	goto loc_82811298;
loc_82811294:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82811298:
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// bl 0x822e6a00
	sub_822E6A00(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r31,308
	ctx.r3.s64 = r31.s64 + 308;
	// bl 0x82800180
	sub_82800180(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828112bc
	if (cr6.eq) goto loc_828112BC;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_828112BC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_828112C8"))) PPC_WEAK_FUNC(sub_828112C8);
PPC_FUNC_IMPL(__imp__sub_828112C8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// bl 0x82515b70
	sub_82515B70(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r29,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r29.u32);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-27476
	r11.s64 = r11.s64 + -27476;
	// addi r10,r10,-27500
	ctx.r10.s64 = ctx.r10.s64 + -27500;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r3,r31,264
	ctx.r3.s64 = r31.s64 + 264;
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,232(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 232, temp.u32);
	// addi r4,r30,32
	ctx.r4.s64 = r30.s64 + 32;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,236(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 236, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,240(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 240, temp.u32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,244(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 244, temp.u32);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r11,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r11.u32);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r11,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r11.u32);
	// lfs f0,24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	f0.f64 = double(temp.f32);
	// stfs f0,256(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 256, temp.u32);
	// lfs f0,28(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,260(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 260, temp.u32);
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// addi r3,r31,268
	ctx.r3.s64 = r31.s64 + 268;
	// addi r4,r30,36
	ctx.r4.s64 = r30.s64 + 36;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// lfs f12,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f12,272(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 272, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,-21808(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -21808);
	f0.f64 = double(temp.f32);
	// lfs f13,2240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,44(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// stw r28,280(r31)
	PPC_STORE_U32(r31.u32 + 280, r28.u32);
	// stfs f12,276(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 276, temp.u32);
	// stw r27,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r27.u32);
	// stw r11,288(r31)
	PPC_STORE_U32(r31.u32 + 288, r11.u32);
	// stw r11,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r11.u32);
	// stw r11,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r11.u32);
	// stfs f0,300(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 300, temp.u32);
	// stfs f13,304(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 304, temp.u32);
	// stw r11,312(r31)
	PPC_STORE_U32(r31.u32 + 312, r11.u32);
	// stw r11,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r11.u32);
	// stw r11,320(r31)
	PPC_STORE_U32(r31.u32 + 320, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_828113B8"))) PPC_WEAK_FUNC(sub_828113B8);
PPC_FUNC_IMPL(__imp__sub_828113B8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r29,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r29.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x828113f8
	if (!cr6.eq) goto loc_828113F8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_828113F8:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8250c5d0
	sub_8250C5D0(ctx, base);
	// subf r11,r29,r3
	r11.s64 = ctx.r3.s64 - r29.s64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r27,r11,27,31,31
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// beq 0x828114c8
	if (cr0.eq) goto loc_828114C8;
	// li r11,16
	r11.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r28,r1,80
	r28.s64 = ctx.r1.s64 + 80;
	// bl 0x82515448
	sub_82515448(ctx, base);
	// lis r11,-31945
	r11.s64 = -2093547520;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r11,-28956
	ctx.r4.s64 = r11.s64 + -28956;
	// addi r6,r31,252
	ctx.r6.s64 = r31.s64 + 252;
	// addi r5,r31,248
	ctx.r5.s64 = r31.s64 + 248;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// bl 0x827ffc98
	sub_827FFC98(ctx, base);
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
	// beq cr6,0x8281148c
	if (cr6.eq) goto loc_8281148C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82811470:
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
	// bne 0x82811470
	if (!cr0.eq) goto loc_82811470;
loc_8281148C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r4,r10,-27672
	ctx.r4.s64 = ctx.r10.s64 + -27672;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,454
	ctx.r5.s64 = 454;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828114c0
	if (cr6.eq) goto loc_828114C0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828114C0:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x8281159c
	goto loc_8281159C;
loc_828114C8:
	// lwz r11,312(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// lwz r10,316(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// b 0x828114e4
	goto loc_828114E4;
loc_828114D4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, xer);
	// beq cr6,0x828114ec
	if (cr6.eq) goto loc_828114EC;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828114E4:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x828114d4
	if (!cr6.eq) goto loc_828114D4;
loc_828114EC:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x828115a8
	if (!cr6.eq) goto loc_828115A8;
	// addi r4,r1,204
	ctx.r4.s64 = ctx.r1.s64 + 204;
	// addi r3,r31,308
	ctx.r3.s64 = r31.s64 + 308;
	// bl 0x82498048
	sub_82498048(ctx, base);
	// li r11,16
	r11.s64 = 16;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-28956
	ctx.r4.s64 = ctx.r10.s64 + -28956;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r6,r31,252
	ctx.r6.s64 = r31.s64 + 252;
	// addi r5,r31,248
	ctx.r5.s64 = r31.s64 + 248;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x827ffc98
	sub_827FFC98(ctx, base);
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
	// beq cr6,0x82811564
	if (cr6.eq) goto loc_82811564;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82811548:
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
	// bne 0x82811548
	if (!cr0.eq) goto loc_82811548;
loc_82811564:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-27672
	ctx.r4.s64 = ctx.r10.s64 + -27672;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,461
	ctx.r5.s64 = 461;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82811598
	if (cr6.eq) goto loc_82811598;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82811598:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_8281159C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828115a8
	if (cr6.eq) goto loc_828115A8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828115A8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_828115B0"))) PPC_WEAK_FUNC(sub_828115B0);
PPC_FUNC_IMPL(__imp__sub_828115B0) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x828112c8
	sub_828112C8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stfs f31,328(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 328, temp.u32);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r10,r10,-27380
	ctx.r10.s64 = ctx.r10.s64 + -27380;
	// addi r9,r9,-27404
	ctx.r9.s64 = ctx.r9.s64 + -27404;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,332(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 332, temp.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r9,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,324(r31)
	PPC_STORE_U32(r31.u32 + 324, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82811620"))) PPC_WEAK_FUNC(sub_82811620);
PPC_FUNC_IMPL(__imp__sub_82811620) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x82811628
	sub_82811628(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82811628"))) PPC_WEAK_FUNC(sub_82811628);
PPC_FUNC_IMPL(__imp__sub_82811628) {
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
	// bl 0x828108c8
	sub_828108C8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82811658
	if (cr0.eq) goto loc_82811658;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82811658:
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

__attribute__((alias("__imp__sub_82811678"))) PPC_WEAK_FUNC(sub_82811678);
PPC_FUNC_IMPL(__imp__sub_82811678) {
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
	PPCRegister f31{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// lwz r3,296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828118c8
	if (cr6.eq) goto loc_828118C8;
	// lwz r4,324(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82811714
	if (cr6.eq) goto loc_82811714;
	// lfs f0,328(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 328);
	f0.f64 = double(temp.f32);
	// lfs f13,232(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 * ctx.f13.f64));
	// bl 0x827d4d58
	sub_827D4D58(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lfs f13,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-22120(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82811714
	if (!cr6.lt) goto loc_82811714;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,-31000(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31000);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f13,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,332(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 332, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x828116f0
	if (cr6.gt) goto loc_828116F0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_828116F0:
	// stfs f0,332(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 332, temp.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r4,324(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
	// lwz r3,296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// lfs f4,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// bl 0x827d4dc0
	sub_827D4DC0(ctx, base);
loc_82811714:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,-23007
	r29.s64 = r11.s64 + -23007;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r30,r31,264
	r30.s64 = r31.s64 + 264;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfafc0
	sub_82DFAFC0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82811750
	if (cr0.eq) goto loc_82811750;
	// lwz r11,324(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82811754
	if (cr6.eq) goto loc_82811754;
loc_82811750:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_82811754:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// clrlwi r28,r11,24
	r28.u64 = r11.u32 & 0xFF;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x828118c8
	if (cr0.eq) goto loc_828118C8;
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
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lvlx128 v62,r10,r11
	temp.u32 = ctx.r10.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r9,r11
	temp.u32 = ctx.r9.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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
	// bl 0x82515448
	sub_82515448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e853e8
	sub_82E853E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825154b8
	sub_825154B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e84ff0
	sub_82E84FF0(ctx, base);
	// lfs f0,328(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 328);
	f0.f64 = double(temp.f32);
	// lfs f13,232(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmuls f31,f0,f13
	f31.f64 = double(float(f0.f64 * ctx.f13.f64));
	// addi r28,r1,144
	r28.s64 = ctx.r1.s64 + 144;
	// lwz r27,296(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// lwz r25,284(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 284);
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// bl 0x827d5c90
	sub_827D5C90(ctx, base);
	// stw r3,324(r31)
	PPC_STORE_U32(r31.u32 + 324, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfb598
	sub_82DFB598(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,324(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// lwz r4,296(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// bl 0x827d4eb0
	sub_827D4EB0(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828118b8
	if (cr6.eq) goto loc_828118B8;
	// bl 0x82e88150
	sub_82E88150(ctx, base);
	// lwz r27,4(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r28,0(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// b 0x828118b0
	goto loc_828118B0;
loc_82811850:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addi r29,r11,264
	r29.s64 = r11.s64 + 264;
	// lwz r11,268(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 268);
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x828118ac
	if (cr6.eq) goto loc_828118AC;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// addi r11,r11,704
	r11.s64 = r11.s64 + 704;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_82811878:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r26.u32);
	// bl 0x82811080
	sub_82811080(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x8268e860
	sub_8268E860(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82811878
	if (!cr6.eq) goto loc_82811878;
loc_828118AC:
	// lwz r28,0(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 0);
loc_828118B0:
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(r28.u32, r27.u32, xer);
	// bne cr6,0x82811850
	if (!cr6.eq) goto loc_82811850;
loc_828118B8:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828118c8
	if (cr6.eq) goto loc_828118C8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828118C8:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_828118D8"))) PPC_WEAK_FUNC(sub_828118D8);
PPC_FUNC_IMPL(__imp__sub_828118D8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x827fef70
	sub_827FEF70(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,29188(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 29188);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822ef310
	sub_822EF310(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82491aa0
	sub_82491AA0(ctx, base);
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

__attribute__((alias("__imp__sub_82811920"))) PPC_WEAK_FUNC(sub_82811920);
PPC_FUNC_IMPL(__imp__sub_82811920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r11,-27056
	ctx.r3.s64 = r11.s64 + -27056;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82811930"))) PPC_WEAK_FUNC(sub_82811930);
PPC_FUNC_IMPL(__imp__sub_82811930) {
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
	// bne cr6,0x82811970
	if (!cr6.eq) goto loc_82811970;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828119a0
	if (cr6.eq) goto loc_828119A0;
	// ld r11,0(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// ld r11,8(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// b 0x828119a0
	goto loc_828119A0;
loc_82811970:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x828119a0
	if (cr6.eq) goto loc_828119A0;
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-4136
	ctx.r4.s64 = r11.s64 + -4136;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82811998
	if (cr0.eq) goto loc_82811998;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x828119a0
	goto loc_828119A0;
loc_82811998:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_828119A0:
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

__attribute__((alias("__imp__sub_828119B8"))) PPC_WEAK_FUNC(sub_828119B8);
PPC_FUNC_IMPL(__imp__sub_828119B8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r31,r29,312
	r31.s64 = r29.s64 + 312;
	// lwz r11,312(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 312);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82811a08
	if (cr6.eq) goto loc_82811A08;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8250e538
	sub_8250E538(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-192
	ctx.r3.s64 = r11.s64 + -192;
	// bne cr6,0x828119f8
	if (!cr6.eq) goto loc_828119F8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_828119F8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x827d92b8
	sub_827D92B8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_82811A08:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8280a1e0
	sub_8280A1E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82811A20"))) PPC_WEAK_FUNC(sub_82811A20);
PPC_FUNC_IMPL(__imp__sub_82811A20) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x827ff010
	sub_827FF010(ctx, base);
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// bl 0x82bbc050
	sub_82BBC050(ctx, base);
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

__attribute__((alias("__imp__sub_82811A68"))) PPC_WEAK_FUNC(sub_82811A68);
PPC_FUNC_IMPL(__imp__sub_82811A68) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// beq 0x82811aa4
	if (cr0.eq) goto loc_82811AA4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82811aac
	goto loc_82811AAC;
loc_82811AA4:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82e8a358
	sub_82E8A358(ctx, base);
loc_82811AAC:
	// stb r30,348(r31)
	PPC_STORE_U8(r31.u32 + 348, r30.u8);
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

__attribute__((alias("__imp__sub_82811AC8"))) PPC_WEAK_FUNC(sub_82811AC8);
PPC_FUNC_IMPL(__imp__sub_82811AC8) {
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
	// beq 0x82811b20
	if (cr0.eq) goto loc_82811B20;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-27304
	ctx.r9.s64 = r11.s64 + -27304;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82811b24
	goto loc_82811B24;
loc_82811B20:
	// li r11,0
	r11.s64 = 0;
loc_82811B24:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82811b70
	if (!cr6.eq) goto loc_82811B70;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82811b50
	if (cr6.eq) goto loc_82811B50;
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
loc_82811B50:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-4216(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4216);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82811B70:
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

__attribute__((alias("__imp__sub_82811B90"))) PPC_WEAK_FUNC(sub_82811B90);
PPC_FUNC_IMPL(__imp__sub_82811B90) {
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
	// beq cr6,0x82811bbc
	if (cr6.eq) goto loc_82811BBC;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82811930
	sub_82811930(ctx, base);
	// b 0x82811bc8
	goto loc_82811BC8;
loc_82811BBC:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// addi r11,r11,-4136
	r11.s64 = r11.s64 + -4136;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_82811BC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82811BD8"))) PPC_WEAK_FUNC(sub_82811BD8);
PPC_FUNC_IMPL(__imp__sub_82811BD8) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// addi r4,r9,4
	ctx.r4.s64 = ctx.r9.s64 + 4;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
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

__attribute__((alias("__imp__sub_82811C30"))) PPC_WEAK_FUNC(sub_82811C30);
PPC_FUNC_IMPL(__imp__sub_82811C30) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e5e6c8
	sub_82E5E6C8(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-27216
	ctx.r4.s64 = r11.s64 + -27216;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e37318
	sub_82E37318(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82811ce0
	if (cr6.eq) goto loc_82811CE0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-27288
	ctx.r4.s64 = r11.s64 + -27288;
	// li r5,185
	ctx.r5.s64 = 185;
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82811cb4
	if (cr0.eq) goto loc_82811CB4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82e1f820
	sub_82E1F820(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82811cb8
	goto loc_82811CB8;
loc_82811CB4:
	// li r31,0
	r31.s64 = 0;
loc_82811CB8:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235bb48
	sub_8235BB48(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// b 0x82811cec
	goto loc_82811CEC;
loc_82811CE0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_82811CEC:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82811cfc
	if (cr6.eq) goto loc_82811CFC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82811CFC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e5e6e0
	sub_82E5E6E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82811D10"))) PPC_WEAK_FUNC(sub_82811D10);
PPC_FUNC_IMPL(__imp__sub_82811D10) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e8f48
	sub_822E8F48(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-27216
	ctx.r4.s64 = r11.s64 + -27216;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822e90d0
	sub_822E90D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82811db8
	if (cr6.eq) goto loc_82811DB8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r29,r31,40
	r29.s64 = r31.s64 + 40;
	// bne cr6,0x82811d78
	if (!cr6.eq) goto loc_82811D78;
	// li r29,0
	r29.s64 = 0;
loc_82811D78:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
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
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822f0550
	sub_822F0550(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// b 0x82811dc4
	goto loc_82811DC4;
loc_82811DB8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_82811DC4:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82811dd4
	if (cr6.eq) goto loc_82811DD4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82811DD4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e8f60
	sub_822E8F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82811DE8"))) PPC_WEAK_FUNC(sub_82811DE8);
PPC_FUNC_IMPL(__imp__sub_82811DE8) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,-27196
	ctx.r5.s64 = r11.s64 + -27196;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82515a88
	sub_82515A88(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82811e18
	if (cr6.eq) goto loc_82811E18;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82811E18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82811E28"))) PPC_WEAK_FUNC(sub_82811E28);
PPC_FUNC_IMPL(__imp__sub_82811E28) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,288(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 288);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82811e58
	if (cr6.eq) goto loc_82811E58;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82494310
	sub_82494310(ctx, base);
loc_82811E58:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,336
	ctx.r3.s64 = r30.s64 + 336;
	// bl 0x82811bd8
	sub_82811BD8(ctx, base);
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

__attribute__((alias("__imp__sub_82811E80"))) PPC_WEAK_FUNC(sub_82811E80);
PPC_FUNC_IMPL(__imp__sub_82811E80) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// addi r5,r10,29232
	ctx.r5.s64 = ctx.r10.s64 + 29232;
	// lwz r11,28692(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28692);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r9,-28900
	ctx.r4.s64 = ctx.r9.s64 + -28900;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x8241a708
	sub_8241A708(ctx, base);
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

__attribute__((alias("__imp__sub_82811ED8"))) PPC_WEAK_FUNC(sub_82811ED8);
PPC_FUNC_IMPL(__imp__sub_82811ED8) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-27148
	r11.s64 = r11.s64 + -27148;
	// addi r10,r10,-27168
	ctx.r10.s64 = ctx.r10.s64 + -27168;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 344);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82811f14
	if (cr6.eq) goto loc_82811F14;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82811F14:
	// addi r3,r31,320
	ctx.r3.s64 = r31.s64 + 320;
	// bl 0x82b7b7d0
	sub_82B7B7D0(ctx, base);
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82811f2c
	if (cr6.eq) goto loc_82811F2C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82811F2C:
	// lwz r3,308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82811f3c
	if (cr6.eq) goto loc_82811F3C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82811F3C:
	// lwz r3,300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82811f4c
	if (cr6.eq) goto loc_82811F4C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82811F4C:
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82811f5c
	if (cr6.eq) goto loc_82811F5C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82811F5C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827ff890
	sub_827FF890(ctx, base);
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

__attribute__((alias("__imp__sub_82811F78"))) PPC_WEAK_FUNC(sub_82811F78);
PPC_FUNC_IMPL(__imp__sub_82811F78) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x82812110
	sub_82812110(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82811F80"))) PPC_WEAK_FUNC(sub_82811F80);
PPC_FUNC_IMPL(__imp__sub_82811F80) {
	PPC_FUNC_PROLOGUE();
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
	// lbz r4,24(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82811a68
	sub_82811A68(ctx, base);
	// addi r4,r31,320
	ctx.r4.s64 = r31.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,328(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 328);
	// lwz r5,324(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// bl 0x825acda0
	sub_825ACDA0(ctx, base);
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

__attribute__((alias("__imp__sub_82811FC8"))) PPC_WEAK_FUNC(sub_82811FC8);
PPC_FUNC_IMPL(__imp__sub_82811FC8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r31,320
	ctx.r4.s64 = r31.s64 + 320;
	// lwz r11,324(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8281200c
	if (cr6.eq) goto loc_8281200C;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8281200c
	if (cr0.eq) goto loc_8281200C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rotlwi r6,r10,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x825acda0
	sub_825ACDA0(ctx, base);
loc_8281200C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82811a68
	sub_82811A68(ctx, base);
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

__attribute__((alias("__imp__sub_82812030"))) PPC_WEAK_FUNC(sub_82812030);
PPC_FUNC_IMPL(__imp__sub_82812030) {
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
	// beq 0x82812084
	if (cr0.eq) goto loc_82812084;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-4672
	ctx.r3.s64 = r11.s64 + -4672;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82812084
	if (cr0.eq) goto loc_82812084;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x82811f80
	sub_82811F80(ctx, base);
loc_8281207C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82812104
	goto loc_82812104;
loc_82812084:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x828120f4
	if (cr6.eq) goto loc_828120F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-9040
	ctx.r3.s64 = r11.s64 + -9040;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828120bc
	if (cr0.eq) goto loc_828120BC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x82811fc8
	sub_82811FC8(ctx, base);
	// b 0x8281207c
	goto loc_8281207C;
loc_828120BC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x828120f4
	if (cr6.eq) goto loc_828120F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-10064
	ctx.r3.s64 = r11.s64 + -10064;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828120f4
	if (cr0.eq) goto loc_828120F4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x82814318
	sub_82814318(ctx, base);
	// b 0x8281207c
	goto loc_8281207C;
loc_828120F4:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827ff778
	sub_827FF778(ctx, base);
loc_82812104:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82812110"))) PPC_WEAK_FUNC(sub_82812110);
PPC_FUNC_IMPL(__imp__sub_82812110) {
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
	// bl 0x82811ed8
	sub_82811ED8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82812140
	if (cr0.eq) goto loc_82812140;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82812140:
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

__attribute__((alias("__imp__sub_82812160"))) PPC_WEAK_FUNC(sub_82812160);
PPC_FUNC_IMPL(__imp__sub_82812160) {
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
	// addi r31,r11,-18712
	r31.s64 = r11.s64 + -18712;
	// lwz r11,-18704(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18704);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x828121a8
	if (!cr0.eq) goto loc_828121A8;
	// lis r9,-32146
	ctx.r9.s64 = -2106720256;
	// lis r8,-32127
	ctx.r8.s64 = -2105475072;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r9,r9,19720
	ctx.r9.s64 = ctx.r9.s64 + 19720;
	// addi r8,r8,7056
	ctx.r8.s64 = ctx.r8.s64 + 7056;
	// stw r11,-18704(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18704, r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
loc_828121A8:
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
	// beq 0x828121d4
	if (cr0.eq) goto loc_828121D4;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// b 0x828121d8
	goto loc_828121D8;
loc_828121D4:
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
loc_828121D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828121E0"))) PPC_WEAK_FUNC(sub_828121E0);
PPC_FUNC_IMPL(__imp__sub_828121E0) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r26
	r28.u64 = r26.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// bl 0x827ff158
	sub_827FF158(ctx, base);
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-27024
	r11.s64 = r11.s64 + -27024;
	// addi r10,r10,13344
	ctx.r10.s64 = ctx.r10.s64 + 13344;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// li r7,96
	ctx.r7.s64 = 96;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32255
	r11.s64 = -2113863680;
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
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lfs f1,-8992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8992);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,-396(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -396);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82f270c8
	sub_82F270C8(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r29,r11,-27288
	r29.s64 = r11.s64 + -27288;
	// li r5,119
	ctx.r5.s64 = 119;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828122ac
	if (cr0.eq) goto loc_828122AC;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r6,336(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 336);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82494578
	sub_82494578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828122b0
	goto loc_828122B0;
loc_828122AC:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_828122B0:
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// bl 0x822e6a00
	sub_822E6A00(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828122c8
	if (cr6.eq) goto loc_828122C8;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_828122C8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,124
	ctx.r5.s64 = 124;
	// li r3,320
	ctx.r3.s64 = 320;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82812320
	if (cr0.eq) goto loc_82812320;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-27216
	ctx.r4.s64 = r11.s64 + -27216;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// li r28,3
	r28.s64 = 3;
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82bba760
	sub_82BBA760(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82812324
	goto loc_82812324;
loc_82812320:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_82812324:
	// addi r30,r31,296
	r30.s64 = r31.s64 + 296;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235fdc8
	sub_8235FDC8(ctx, base);
	// rlwinm. r11,r28,0,30,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82812344
	if (cr0.eq) goto loc_82812344;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// rlwinm r28,r28,0,31,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_82812344:
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82812354
	if (cr0.eq) goto loc_82812354;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_82812354:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r26,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r26.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stb r26,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, r26.u8);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// addi r29,r11,4416
	r29.s64 = r11.s64 + 4416;
	// lfs f13,2244(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r7,-27048
	r11.s64 = ctx.r7.s64 + -27048;
	// lfs f12,2240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-24780(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24780);
	f0.f64 = double(temp.f32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r29.u32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f0,164(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82812454
	if (cr6.eq) goto loc_82812454;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82bbbac0
	sub_82BBBAC0(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq cr6,0x828123fc
	if (cr6.eq) goto loc_828123FC;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828123E0:
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
	// bne 0x828123e0
	if (!cr0.eq) goto loc_828123E0;
loc_828123FC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827fef80
	sub_827FEF80(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82e1df80
	sub_82E1DF80(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82812420
	if (cr6.eq) goto loc_82812420;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82812420:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82bb9e70
	sub_82BB9E70(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281244c
	if (cr6.eq) goto loc_8281244C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281244C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_82812454:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827fef80
	sub_827FEF80(ctx, base);
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x828124bc
	if (cr6.eq) goto loc_828124BC;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-27056
	ctx.r4.s64 = r11.s64 + -27056;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e1e040
	sub_82E1E040(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r31,304
	ctx.r10.s64 = r31.s64 + 304;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,304(r31)
	PPC_STORE_U32(r31.u32 + 304, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828124b4
	if (cr6.eq) goto loc_828124B4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828124B4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_828124BC:
	// lwz r11,304(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 304);
	// addi r30,r31,304
	r30.s64 = r31.s64 + 304;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8281254c
	if (cr6.eq) goto loc_8281254C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8250e538
	sub_8250E538(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-27072
	ctx.r4.s64 = r11.s64 + -27072;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,-192
	ctx.r4.s64 = r11.s64 + -192;
	// bne cr6,0x828124fc
	if (!cr6.eq) goto loc_828124FC;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_828124FC:
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827da560
	sub_827DA560(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r31,312
	ctx.r10.s64 = r31.s64 + 312;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,312(r31)
	PPC_STORE_U32(r31.u32 + 312, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281253c
	if (cr6.eq) goto loc_8281253C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281253C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_8281254C:
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82812560
	if (cr6.eq) goto loc_82812560;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82e8a358
	sub_82E8A358(ctx, base);
loc_82812560:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stw r31,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, r31.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// addi r11,r11,7656
	r11.s64 = r11.s64 + 7656;
	// ld r5,248(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// stw r26,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r26.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82812160
	sub_82812160(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827ffa68
	sub_827FFA68(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_828125A8"))) PPC_WEAK_FUNC(sub_828125A8);
PPC_FUNC_IMPL(__imp__sub_828125A8) {
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
	// bl 0x827ff950
	sub_827FF950(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-27148
	r11.s64 = r11.s64 + -27148;
	// addi r10,r10,-27168
	ctx.r10.s64 = ctx.r10.s64 + -27168;
	// li r30,0
	r30.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// addi r3,r31,336
	ctx.r3.s64 = r31.s64 + 336;
	// stw r30,288(r31)
	PPC_STORE_U32(r31.u32 + 288, r30.u32);
	// stw r30,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r30.u32);
	// stw r30,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r30.u32);
	// stw r30,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r30.u32);
	// stw r30,304(r31)
	PPC_STORE_U32(r31.u32 + 304, r30.u32);
	// stw r30,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r30.u32);
	// stw r30,312(r31)
	PPC_STORE_U32(r31.u32 + 312, r30.u32);
	// stw r30,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r30.u32);
	// stw r30,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r30.u32);
	// stw r30,328(r31)
	PPC_STORE_U32(r31.u32 + 328, r30.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(r31.u32 + 332, r30.u32);
	// bl 0x82811e80
	sub_82811E80(ctx, base);
	// stb r30,348(r31)
	PPC_STORE_U8(r31.u32 + 348, r30.u8);
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

__attribute__((alias("__imp__sub_82812638"))) PPC_WEAK_FUNC(sub_82812638);
PPC_FUNC_IMPL(__imp__sub_82812638) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r30,r31,320
	r30.s64 = r31.s64 + 320;
	// stw r28,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r28.u32);
	// lwz r11,324(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// lwz r10,328(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 328);
	// b 0x82812670
	goto loc_82812670;
loc_82812660:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, r28.u32, xer);
	// beq cr6,0x82812760
	if (cr6.eq) goto loc_82812760;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82812670:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82812660
	if (!cr6.eq) goto loc_82812660;
	// li r11,0
	r11.s64 = 0;
loc_8281267C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82812758
	if (!cr0.eq) goto loc_82812758;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241a708
	sub_8241A708(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r29,100(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// beq cr6,0x82812748
	if (cr6.eq) goto loc_82812748;
	// lwz r10,340(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 340);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// lwz r10,96(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// stw r10,96(r11)
	PPC_STORE_U32(r11.u32 + 96, ctx.r10.u32);
	// lwz r10,340(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 340);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// lwz r10,340(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 340);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// lwz r10,340(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 340);
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// beq cr6,0x82812708
	if (cr6.eq) goto loc_82812708;
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
loc_828126EC:
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
	// bne 0x828126ec
	if (!cr0.eq) goto loc_828126EC;
loc_82812708:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r4,r10,-27288
	ctx.r4.s64 = ctx.r10.s64 + -27288;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,301
	ctx.r5.s64 = 301;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281273c
	if (cr6.eq) goto loc_8281273C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281273C:
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82498048
	sub_82498048(ctx, base);
loc_82812748:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82812758
	if (cr6.eq) goto loc_82812758;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82812758:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
loc_82812760:
	// li r11,1
	r11.s64 = 1;
	// b 0x8281267c
	goto loc_8281267C;
}

__attribute__((alias("__imp__sub_82812768"))) PPC_WEAK_FUNC(sub_82812768);
PPC_FUNC_IMPL(__imp__sub_82812768) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-27288
	ctx.r4.s64 = r11.s64 + -27288;
	// li r5,77
	ctx.r5.s64 = 77;
	// li r3,352
	ctx.r3.s64 = 352;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828127ac
	if (cr0.eq) goto loc_828127AC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x828125a8
	sub_828125A8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x828127b0
	goto loc_828127B0;
loc_828127AC:
	// li r31,0
	r31.s64 = 0;
loc_828127B0:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82811ac8
	sub_82811AC8(ctx, base);
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

__attribute__((alias("__imp__sub_828127E0"))) PPC_WEAK_FUNC(sub_828127E0);
PPC_FUNC_IMPL(__imp__sub_828127E0) {
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
	PPCRegister f0{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8255e2b8
	sub_8255E2B8(ctx, base);
	// lwz r11,288(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 288);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	f0.f64 = double(temp.f32);
	// lfs f13,52(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lfs f12,56(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lfs f11,60(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// beq cr6,0x82812854
	if (cr6.eq) goto loc_82812854;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82494318
	sub_82494318(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r3,288(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 288);
	// bl 0x824942d8
	sub_824942D8(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82812854:
	// lwz r25,0(r3)
	r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r25,r3
	cr6.compare<uint32_t>(r25.u32, ctx.r3.u32, xer);
	// beq cr6,0x828129a4
	if (cr6.eq) goto loc_828129A4;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r26,-32248
	r26.s64 = -2113404928;
	// addi r29,r11,-27288
	r29.s64 = r11.s64 + -27288;
	// addi r28,r10,29232
	r28.s64 = ctx.r10.s64 + 29232;
loc_82812874:
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// bl 0x824917d0
	sub_824917D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82812994
	if (cr0.eq) goto loc_82812994;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lvx128 v63,r0,r28
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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
	// beq cr6,0x828128e8
	if (cr6.eq) goto loc_828128E8;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828128CC:
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
	// bne 0x828128cc
	if (!cr0.eq) goto loc_828128CC;
loc_828128E8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,58
	ctx.r5.s64 = 58;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82812910
	if (cr6.eq) goto loc_82812910;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82812910:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82812920
	if (cr6.eq) goto loc_82812920;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82812920:
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,-27312(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + -27312);
	f0.f64 = double(temp.f32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r31,r1,176
	r31.s64 = ctx.r1.s64 + 176;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,128
	r30.s64 = ctx.r1.s64 + 128;
	// vmulfp128 v63,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83159478
	sub_83159478(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// bl 0x82812638
	sub_82812638(ctx, base);
loc_82812994:
	// lwz r25,0(r25)
	r25.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// bne cr6,0x82812874
	if (!cr6.eq) goto loc_82812874;
loc_828129A4:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82b67888
	sub_82B67888(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_828129C8"))) PPC_WEAK_FUNC(sub_828129C8);
PPC_FUNC_IMPL(__imp__sub_828129C8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,348(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 348);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x828129fc
	if (cr0.eq) goto loc_828129FC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825156f8
	sub_825156F8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828127e0
	sub_828127E0(ctx, base);
loc_828129FC:
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

__attribute__((alias("__imp__sub_82812A10"))) PPC_WEAK_FUNC(sub_82812A10);
PPC_FUNC_IMPL(__imp__sub_82812A10) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,320
	ctx.r3.s64 = ctx.r3.s64 + 320;
	// b 0x82e0eb08
	sub_82E0EB08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82812A18"))) PPC_WEAK_FUNC(sub_82812A18);
PPC_FUNC_IMPL(__imp__sub_82812A18) {
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
	// bne cr6,0x82812a58
	if (!cr6.eq) goto loc_82812A58;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82812a88
	if (cr6.eq) goto loc_82812A88;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// b 0x82812a88
	goto loc_82812A88;
loc_82812A58:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x82812a88
	if (cr6.eq) goto loc_82812A88;
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-3664
	ctx.r4.s64 = r11.s64 + -3664;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82812a80
	if (cr0.eq) goto loc_82812A80;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x82812a88
	goto loc_82812A88;
loc_82812A80:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82812A88:
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

__attribute__((alias("__imp__sub_82812AA0"))) PPC_WEAK_FUNC(sub_82812AA0);
PPC_FUNC_IMPL(__imp__sub_82812AA0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82812af0
	if (cr6.eq) goto loc_82812AF0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8250e538
	sub_8250E538(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-192
	ctx.r3.s64 = r11.s64 + -192;
	// bne cr6,0x82812ae0
	if (!cr6.eq) goto loc_82812AE0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82812AE0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x827d92b8
	sub_827D92B8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_82812AF0:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r31,r30,16
	r31.s64 = r30.s64 + 16;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82812b30
	if (cr6.eq) goto loc_82812B30;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8250e538
	sub_8250E538(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-192
	ctx.r3.s64 = r11.s64 + -192;
	// bne cr6,0x82812b20
	if (!cr6.eq) goto loc_82812B20;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82812B20:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x827d92b8
	sub_827D92B8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_82812B30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82812B38"))) PPC_WEAK_FUNC(sub_82812B38);
PPC_FUNC_IMPL(__imp__sub_82812B38) {
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
	// beq 0x82812b90
	if (cr0.eq) goto loc_82812B90;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-27000
	ctx.r9.s64 = r11.s64 + -27000;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82812b94
	goto loc_82812B94;
loc_82812B90:
	// li r11,0
	r11.s64 = 0;
loc_82812B94:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82812be0
	if (!cr6.eq) goto loc_82812BE0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82812bc0
	if (cr6.eq) goto loc_82812BC0;
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
loc_82812BC0:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-3952(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -3952);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82812BE0:
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

__attribute__((alias("__imp__sub_82812C00"))) PPC_WEAK_FUNC(sub_82812C00);
PPC_FUNC_IMPL(__imp__sub_82812C00) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82e847b0
	sub_82E847B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x822c6a10
	sub_822C6A10(ctx, base);
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

__attribute__((alias("__imp__sub_82812C50"))) PPC_WEAK_FUNC(sub_82812C50);
PPC_FUNC_IMPL(__imp__sub_82812C50) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82812c7c
	if (cr6.eq) goto loc_82812C7C;
	// bl 0x82812aa0
	sub_82812AA0(ctx, base);
loc_82812C7C:
	// lwz r3,304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 304);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82812c90
	if (cr6.eq) goto loc_82812C90;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82812aa0
	sub_82812AA0(ctx, base);
loc_82812C90:
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82812ca0
	if (cr6.eq) goto loc_82812CA0;
	// bl 0x82b4d778
	sub_82B4D778(ctx, base);
loc_82812CA0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82802ee8
	sub_82802EE8(ctx, base);
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

__attribute__((alias("__imp__sub_82812CC8"))) PPC_WEAK_FUNC(sub_82812CC8);
PPC_FUNC_IMPL(__imp__sub_82812CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stfs f1,364(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,48
	r11.s64 = 48;
	// li r10,16
	ctx.r10.s64 = 16;
	// lvlx128 v61,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r9,32
	ctx.r9.s64 = 32;
	// vspltisw128 v63,1
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_set1_epi32(int(0x1)));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// vspltisw128 v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_set1_epi32(int(0x0)));
	// lvlx128 v60,r11,r3
	temp.u32 = r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lvlx128 v59,r10,r3
	temp.u32 = ctx.r10.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// lvlx128 v58,r9,r3
	temp.u32 = ctx.r9.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stvx128 v61,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stvx128 v60,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stvx128 v59,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stvx128 v58,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// vcsxwfp128 v13,v63,1
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v63.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// lfs f0,-22120(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22120);
	f0.f64 = double(temp.f32);
	// addi r6,r1,364
	ctx.r6.s64 = ctx.r1.s64 + 364;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lfs f13,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lfs f12,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f10.f64 = double(temp.f32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f10,108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lvx128 v60,r0,r11
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,12976(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12976);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v61,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v61,v61,0
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0xFF));
	// vmulfp128 v61,v60,v61
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v61.f32, simde_mm_mul_ps(simde_mm_load_ps(v60.f32), simde_mm_load_ps(v61.f32)));
	// vmulfp128 v12,v61,v63
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(v61.f32), simde_mm_load_ps(v63.f32)));
	// lvlx128 v63,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v11,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// vmaddfp v0,v12,v11,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v63,v0,v0
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx128 v0,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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
	// stvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e847b0
	sub_82E847B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82e84a10
	sub_82E84A10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v62,r0,r3
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// vmulfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e853e8
	sub_82E853E8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e1bc30
	sub_82E1BC30(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,-20128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20128);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e86250
	sub_82E86250(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
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

__attribute__((alias("__imp__sub_82812E70"))) PPC_WEAK_FUNC(sub_82812E70);
PPC_FUNC_IMPL(__imp__sub_82812E70) {
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
	// beq cr6,0x82812e9c
	if (cr6.eq) goto loc_82812E9C;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82812a18
	sub_82812A18(ctx, base);
	// b 0x82812ea8
	goto loc_82812EA8;
loc_82812E9C:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// addi r11,r11,-3664
	r11.s64 = r11.s64 + -3664;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_82812EA8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82812EB8"))) PPC_WEAK_FUNC(sub_82812EB8);
PPC_FUNC_IMPL(__imp__sub_82812EB8) {
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
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// bl 0x82711718
	sub_82711718(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f12,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,388(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 388);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r26,r30,388
	r26.s64 = r30.s64 + 388;
	// lfs f0,-17788(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -17788);
	f0.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f11
	f0.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f11.f64));
	// lfs f13,-27008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82812efc
	if (cr6.lt) goto loc_82812EFC;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_82812EFC:
	// lwz r31,312(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 312);
	// stfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 0, temp.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82812f20
	if (cr6.eq) goto loc_82812F20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82515448
	sub_82515448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b4dc58
	sub_82B4DC58(ctx, base);
loc_82812F20:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// addi r31,r30,248
	r31.s64 = r30.s64 + 248;
	// addi r28,r30,352
	r28.s64 = r30.s64 + 352;
	// li r29,2
	r29.s64 = 2;
	// addi r27,r11,-3936
	r27.s64 = r11.s64 + -3936;
loc_82812F34:
	// lvlx128 v63,r0,r26
	temp.u32 = r26.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v63,r0,r27
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r24,16(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// vmulfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e84c70
	sub_82E84C70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82e1bc30
	sub_82E1BC30(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82812cc8
	sub_82812CC8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// bne 0x82812f34
	if (!cr0.eq) goto loc_82812F34;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82812F98"))) PPC_WEAK_FUNC(sub_82812F98);
PPC_FUNC_IMPL(__imp__sub_82812F98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCVRegister v63{};
	PPCRegister temp{};
	// lwz r11,348(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 348);
	// addi r9,r4,344
	ctx.r9.s64 = ctx.r4.s64 + 344;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,-4(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
loc_82812FB8:
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	f0.f64 = double(temp.f32);
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f12,-16(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82812fb8
	if (!cr6.eq) goto loc_82812FB8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82813000"))) PPC_WEAK_FUNC(sub_82813000);
PPC_FUNC_IMPL(__imp__sub_82813000) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x82e5e6c8
	sub_82E5E6C8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e37318
	sub_82E37318(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828130f4
	if (cr6.eq) goto loc_828130F4;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-26952
	ctx.r4.s64 = r11.s64 + -26952;
	// li r5,211
	ctx.r5.s64 = 211;
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8281308c
	if (cr0.eq) goto loc_8281308C;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82e1f820
	sub_82E1F820(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82813090
	goto loc_82813090;
loc_8281308C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82813090:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825182c0
	sub_825182C0(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,31040(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 31040);
	// bl 0x825144c0
	sub_825144C0(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x828130e8
	if (cr6.eq) goto loc_828130E8;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828130CC:
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
	// bne 0x828130cc
	if (!cr0.eq) goto loc_828130CC;
loc_828130E8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82e1e0c0
	sub_82E1E0C0(ctx, base);
loc_828130F4:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82813104
	if (cr6.eq) goto loc_82813104;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82813104:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e5e6e0
	sub_82E5E6E0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281311c
	if (cr6.eq) goto loc_8281311C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281311C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281312c
	if (cr6.eq) goto loc_8281312C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281312C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82813138"))) PPC_WEAK_FUNC(sub_82813138);
PPC_FUNC_IMPL(__imp__sub_82813138) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lis r11,-31945
	r11.s64 = -2093547520;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,-18700
	r31.s64 = r11.s64 + -18700;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,-18696(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18696);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82813178
	if (!cr0.eq) goto loc_82813178;
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-18696(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18696, r11.u32);
	// lwz r11,-28908(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28908);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82813178:
	// lis r11,-31943
	r11.s64 = -2093416448;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r28,r11,29232
	r28.s64 = r11.s64 + 29232;
	// bl 0x82515448
	sub_82515448(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x8241a708
	sub_8241A708(ctx, base);
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
	// beq cr6,0x828131d4
	if (cr6.eq) goto loc_828131D4;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828131B8:
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
	// bne 0x828131b8
	if (!cr0.eq) goto loc_828131B8;
loc_828131D4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,-26952
	ctx.r4.s64 = ctx.r10.s64 + -26952;
	// li r5,269
	ctx.r5.s64 = 269;
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82813214
	if (cr6.eq) goto loc_82813214;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82813214:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82813224
	if (cr6.eq) goto loc_82813224;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82813224:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82813230"))) PPC_WEAK_FUNC(sub_82813230);
PPC_FUNC_IMPL(__imp__sub_82813230) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// addi r4,r11,-26952
	ctx.r4.s64 = r11.s64 + -26952;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// li r5,281
	ctx.r5.s64 = 281;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// li r3,224
	ctx.r3.s64 = 224;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// stfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82813294
	if (cr0.eq) goto loc_82813294;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82e1bac0
	sub_82E1BAC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82813298
	goto loc_82813298;
loc_82813294:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_82813298:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e3958
	sub_822E3958(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828132B0"))) PPC_WEAK_FUNC(sub_828132B0);
PPC_FUNC_IMPL(__imp__sub_828132B0) {
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
	// beq 0x82813308
	if (cr0.eq) goto loc_82813308;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-26968
	ctx.r9.s64 = r11.s64 + -26968;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8281330c
	goto loc_8281330C;
loc_82813308:
	// li r11,0
	r11.s64 = 0;
loc_8281330C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82813350
	if (!cr6.eq) goto loc_82813350;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82813330
	if (cr6.eq) goto loc_82813330;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8275dfc0
	sub_8275DFC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_82813330:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-3952(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -3952);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82813350:
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

__attribute__((alias("__imp__sub_82813370"))) PPC_WEAK_FUNC(sub_82813370);
PPC_FUNC_IMPL(__imp__sub_82813370) {
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
	// beq cr6,0x8281339c
	if (cr6.eq) goto loc_8281339C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8275dfc0
	sub_8275DFC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_8281339C:
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

__attribute__((alias("__imp__sub_828133B0"))) PPC_WEAK_FUNC(sub_828133B0);
PPC_FUNC_IMPL(__imp__sub_828133B0) {
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
	// beq 0x82813404
	if (cr0.eq) goto loc_82813404;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-5852
	ctx.r3.s64 = r11.s64 + -5852;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82813404
	if (cr0.eq) goto loc_82813404;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x82812a10
	sub_82812A10(ctx, base);
loc_828133FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8281344c
	goto loc_8281344C;
loc_82813404:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8281343c
	if (cr6.eq) goto loc_8281343C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,15452
	ctx.r3.s64 = r11.s64 + 15452;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8281343c
	if (cr0.eq) goto loc_8281343C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x82813138
	sub_82813138(ctx, base);
	// b 0x828133fc
	goto loc_828133FC;
loc_8281343C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82803178
	sub_82803178(ctx, base);
loc_8281344C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82813458"))) PPC_WEAK_FUNC(sub_82813458);
PPC_FUNC_IMPL(__imp__sub_82813458) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x82802e58
	sub_82802E58(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r30,232(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// bl 0x82515a28
	sub_82515A28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82e1b810
	sub_82E1B810(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281349c
	if (cr6.eq) goto loc_8281349C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281349C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r30,240(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82515a28
	sub_82515A28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82e1b810
	sub_82E1B810(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828134c8
	if (cr6.eq) goto loc_828134C8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828134C8:
	// lwz r11,268(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82813500
	if (cr6.eq) goto loc_82813500;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828134E4:
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
	// bne 0x828134e4
	if (!cr0.eq) goto loc_828134E4;
loc_82813500:
	// lwz r11,284(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 284);
	// lwz r10,280(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 280);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq cr6,0x82813538
	if (cr6.eq) goto loc_82813538;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8281351C:
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
	// bne 0x8281351c
	if (!cr0.eq) goto loc_8281351C;
loc_82813538:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,-26876
	r30.s64 = r11.s64 + -26876;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82813000
	sub_82813000(ctx, base);
	// lwz r11,276(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// lwz r10,272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq cr6,0x82813590
	if (cr6.eq) goto loc_82813590;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82813574:
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
	// bne 0x82813574
	if (!cr0.eq) goto loc_82813574;
loc_82813590:
	// lwz r11,292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// lwz r10,288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x828135c8
	if (cr6.eq) goto loc_828135C8;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828135AC:
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
	// bne 0x828135ac
	if (!cr0.eq) goto loc_828135AC;
loc_828135C8:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82813000
	sub_82813000(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828135E8"))) PPC_WEAK_FUNC(sub_828135E8);
PPC_FUNC_IMPL(__imp__sub_828135E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-26952
	ctx.r4.s64 = r11.s64 + -26952;
	// li r5,223
	ctx.r5.s64 = 223;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82813638
	if (cr0.eq) goto loc_82813638;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82813230
	sub_82813230(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8281363c
	goto loc_8281363C;
loc_82813638:
	// li r31,0
	r31.s64 = 0;
loc_8281363C:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828132b0
	sub_828132B0(ctx, base);
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
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82813670"))) PPC_WEAK_FUNC(sub_82813670);
PPC_FUNC_IMPL(__imp__sub_82813670) {
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
	// addi r31,r11,-18692
	r31.s64 = r11.s64 + -18692;
	// lwz r11,-18684(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18684);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x828136b8
	if (!cr0.eq) goto loc_828136B8;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// lis r8,-32127
	ctx.r8.s64 = -2105475072;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r9,r9,-12416
	ctx.r9.s64 = ctx.r9.s64 + -12416;
	// addi r8,r8,11888
	ctx.r8.s64 = ctx.r8.s64 + 11888;
	// stw r11,-18684(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18684, r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
loc_828136B8:
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
	// bl 0x82372b68
	sub_82372B68(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828136e4
	if (cr0.eq) goto loc_828136E4;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// b 0x828136e8
	goto loc_828136E8;
loc_828136E4:
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
loc_828136E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828136F0"))) PPC_WEAK_FUNC(sub_828136F0);
PPC_FUNC_IMPL(__imp__sub_828136F0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82813770
	goto loc_82813770;
loc_82813710:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r29,r11,264
	r29.s64 = r11.s64 + 264;
	// lwz r11,268(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 268);
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x82813768
	if (cr6.eq) goto loc_82813768;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// addi r11,r11,12184
	r11.s64 = r11.s64 + 12184;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_82813738:
	// li r11,0
	r11.s64 = 0;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82813670
	sub_82813670(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8268e860
	sub_8268E860(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82813738
	if (!cr6.eq) goto loc_82813738;
loc_82813768:
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
loc_82813770:
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82813710
	if (!cr6.eq) goto loc_82813710;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82813780"))) PPC_WEAK_FUNC(sub_82813780);
PPC_FUNC_IMPL(__imp__sub_82813780) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-26836
	r11.s64 = r11.s64 + -26836;
	// addi r10,r10,-26856
	ctx.r10.s64 = ctx.r10.s64 + -26856;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r30,r31,320
	r30.s64 = r31.s64 + 320;
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// bl 0x82b971e8
	sub_82B971E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b971e8
	sub_82B971E8(ctx, base);
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828137cc
	if (cr6.eq) goto loc_828137CC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828137CC:
	// addi r11,r31,312
	r11.s64 = r31.s64 + 312;
	// li r29,1
	r29.s64 = 1;
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
loc_828137D8:
	// addi r30,r30,-8
	r30.s64 = r30.s64 + -8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828137ec
	if (cr6.eq) goto loc_828137EC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828137EC:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bge 0x828137d8
	if (!cr0.lt) goto loc_828137D8;
	// addi r11,r31,296
	r11.s64 = r31.s64 + 296;
	// li r29,1
	r29.s64 = 1;
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
loc_82813800:
	// addi r30,r30,-8
	r30.s64 = r30.s64 + -8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82813814
	if (cr6.eq) goto loc_82813814;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82813814:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bge 0x82813800
	if (!cr0.lt) goto loc_82813800;
	// addi r11,r31,280
	r11.s64 = r31.s64 + 280;
	// li r29,1
	r29.s64 = 1;
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
loc_82813828:
	// addi r30,r30,-8
	r30.s64 = r30.s64 + -8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281383c
	if (cr6.eq) goto loc_8281383C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281383C:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bge 0x82813828
	if (!cr0.lt) goto loc_82813828;
	// addi r11,r31,264
	r11.s64 = r31.s64 + 264;
	// li r29,1
	r29.s64 = 1;
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
loc_82813850:
	// addi r30,r30,-8
	r30.s64 = r30.s64 + -8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82813864
	if (cr6.eq) goto loc_82813864;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82813864:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bge 0x82813850
	if (!cr0.lt) goto loc_82813850;
	// addi r11,r31,248
	r11.s64 = r31.s64 + 248;
	// li r29,1
	r29.s64 = 1;
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
loc_82813878:
	// addi r30,r30,-8
	r30.s64 = r30.s64 + -8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281388c
	if (cr6.eq) goto loc_8281388C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281388C:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bge 0x82813878
	if (!cr0.lt) goto loc_82813878;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82802ff8
	sub_82802FF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828138A8"))) PPC_WEAK_FUNC(sub_828138A8);
PPC_FUNC_IMPL(__imp__sub_828138A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x82813aa8
	sub_82813AA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828138B0"))) PPC_WEAK_FUNC(sub_828138B0);
PPC_FUNC_IMPL(__imp__sub_828138B0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82813aa0
	if (cr6.eq) goto loc_82813AA0;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82e1b810
	sub_82E1B810(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-26752
	ctx.r4.s64 = r11.s64 + -26752;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq cr6,0x82813920
	if (cr6.eq) goto loc_82813920;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82813904:
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
	// bne 0x82813904
	if (!cr0.eq) goto loc_82813904;
loc_82813920:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8250e538
	sub_8250E538(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,-192
	ctx.r4.s64 = r11.s64 + -192;
	// bne cr6,0x82813940
	if (!cr6.eq) goto loc_82813940;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82813940:
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x827da560
	sub_827DA560(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r29,r11,1
	r29.u64 = r11.u64 ^ 1;
	// beq cr6,0x82813990
	if (cr6.eq) goto loc_82813990;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82813990:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828139a8
	if (cr6.eq) goto loc_828139A8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828139A8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828139cc
	if (cr0.eq) goto loc_828139CC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82e88150
	sub_82E88150(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828136f0
	sub_828136F0(ctx, base);
loc_828139CC:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r31,r30,16
	r31.s64 = r30.s64 + 16;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82813aa0
	if (!cr6.eq) goto loc_82813AA0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-26776
	ctx.r4.s64 = r11.s64 + -26776;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq cr6,0x82813a24
	if (cr6.eq) goto loc_82813A24;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82813A08:
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
	// bne 0x82813a08
	if (!cr0.eq) goto loc_82813A08;
loc_82813A24:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8250e538
	sub_8250E538(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,-192
	ctx.r4.s64 = r11.s64 + -192;
	// bne cr6,0x82813a44
	if (!cr6.eq) goto loc_82813A44;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82813A44:
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x827da560
	sub_827DA560(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82813a80
	if (cr6.eq) goto loc_82813A80;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82813A80:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82813a98
	if (cr6.eq) goto loc_82813A98;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82813A98:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_82813AA0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82813AA8"))) PPC_WEAK_FUNC(sub_82813AA8);
PPC_FUNC_IMPL(__imp__sub_82813AA8) {
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
	// bl 0x82813780
	sub_82813780(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82813ad8
	if (cr0.eq) goto loc_82813AD8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82813AD8:
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

__attribute__((alias("__imp__sub_82813AF8"))) PPC_WEAK_FUNC(sub_82813AF8);
PPC_FUNC_IMPL(__imp__sub_82813AF8) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,240(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	f0.f64 = double(temp.f32);
	// lfs f13,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,12(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
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
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// vspltisw128 v63,1
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_set1_epi32(int(0x1)));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// vspltisw128 v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// vcsxwfp128 v13,v63,1
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v63.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	f0.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
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
	// lvx128 v61,r0,r9
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v63,v63,v61
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v61.f32)));
	// vmsum3fp128 v63,v63,v63
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// lfs f1,-7004(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -7004);
	ctx.f1.f64 = double(temp.f32);
	// vrsqrtefp128 v0,v63
	ctx.fpscr.enableFlushModeUnconditional();
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
	// stvx128 v0,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e85730
	sub_82E85730(ctx, base);
	// lfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f31.f64 = double(temp.f32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x828135e8
	sub_828135E8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r30,r31,296
	r30.s64 = r31.s64 + 296;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82813c20
	if (cr6.eq) goto loc_82813C20;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82813C20:
	// lwz r29,252(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 252);
	// lwz r11,248(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 248);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// beq cr6,0x82813c58
	if (cr6.eq) goto loc_82813C58;
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
loc_82813C3C:
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
	// bne 0x82813c3c
	if (!cr0.eq) goto loc_82813C3C;
loc_82813C58:
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
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// bne cr6,0x82813c78
	if (!cr6.eq) goto loc_82813C78;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82813C78:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x828138b0
	sub_828138B0(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82813c9c
	if (cr6.eq) goto loc_82813C9C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82813C9C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f1,9576(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9576);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e85730
	sub_82E85730(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x828135e8
	sub_828135E8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r30,r31,304
	r30.s64 = r31.s64 + 304;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,304(r31)
	PPC_STORE_U32(r31.u32 + 304, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82813ce8
	if (cr6.eq) goto loc_82813CE8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82813CE8:
	// lwz r29,260(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// lwz r11,256(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// beq cr6,0x82813d20
	if (cr6.eq) goto loc_82813D20;
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
loc_82813D04:
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
	// bne 0x82813d04
	if (!cr0.eq) goto loc_82813D04;
loc_82813D20:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// bne cr6,0x82813d40
	if (!cr6.eq) goto loc_82813D40;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82813D40:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x828138b0
	sub_828138B0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82813d64
	if (cr6.eq) goto loc_82813D64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82813D64:
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r5,39
	ctx.r5.s64 = 39;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r10,48
	ctx.r10.s64 = 48;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f1,-396(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -396);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lfs f0,-22120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -22120);
	f0.f64 = double(temp.f32);
	// lfs f13,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82f28538
	sub_82F28538(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// beq 0x82813dd8
	if (cr0.eq) goto loc_82813DD8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e9f20
	sub_822E9F20(ctx, base);
loc_82813DD8:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-26708
	ctx.r4.s64 = r11.s64 + -26708;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82515a28
	sub_82515A28(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,28672(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 28672);
	// bl 0x82516970
	sub_82516970(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82813e20
	if (cr6.eq) goto loc_82813E20;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_82813E20:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82813e30
	if (cr6.eq) goto loc_82813E30;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_82813E30:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r10,13828
	ctx.r5.s64 = ctx.r10.s64 + 13828;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r31,312
	ctx.r10.s64 = r31.s64 + 312;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,312(r31)
	PPC_STORE_U32(r31.u32 + 312, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82813e7c
	if (cr6.eq) goto loc_82813E7C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82813E7C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r10,-26728
	ctx.r5.s64 = ctx.r10.s64 + -26728;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82813eac
	if (cr6.eq) goto loc_82813EAC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82813EAC:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82813EB8"))) PPC_WEAK_FUNC(sub_82813EB8);
PPC_FUNC_IMPL(__imp__sub_82813EB8) {
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
	// beq 0x82813f34
	if (cr0.eq) goto loc_82813F34;
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r10,-26980
	ctx.r10.s64 = ctx.r10.s64 + -26980;
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
	// b 0x82813f38
	goto loc_82813F38;
loc_82813F34:
	// li r31,0
	r31.s64 = 0;
loc_82813F38:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82812b38
	sub_82812B38(ctx, base);
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
	// beq cr6,0x82813f74
	if (cr6.eq) goto loc_82813F74;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82813F74:
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

__attribute__((alias("__imp__sub_82813F90"))) PPC_WEAK_FUNC(sub_82813F90);
PPC_FUNC_IMPL(__imp__sub_82813F90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
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
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b04
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r29,16
	ctx.r4.s64 = r29.s64 + 16;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82802f50
	sub_82802F50(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-26836
	r11.s64 = r11.s64 + -26836;
	// addi r10,r10,-26856
	ctx.r10.s64 = ctx.r10.s64 + -26856;
	// addi r19,r31,232
	r19.s64 = r31.s64 + 232;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r11,r19
	r11.u64 = r19.u64;
	// li r30,0
	r30.s64 = 0;
loc_82813FDC:
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bge 0x82813fdc
	if (!cr0.lt) goto loc_82813FDC;
	// addi r21,r31,248
	r21.s64 = r31.s64 + 248;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r11,r21
	r11.u64 = r21.u64;
loc_82813FFC:
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bge 0x82813ffc
	if (!cr0.lt) goto loc_82813FFC;
	// addi r20,r31,264
	r20.s64 = r31.s64 + 264;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r11,r20
	r11.u64 = r20.u64;
loc_8281401C:
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bge 0x8281401c
	if (!cr0.lt) goto loc_8281401C;
	// addi r11,r31,280
	r11.s64 = r31.s64 + 280;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82814038:
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bge 0x82814038
	if (!cr0.lt) goto loc_82814038;
	// addi r11,r31,296
	r11.s64 = r31.s64 + 296;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82814054:
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bge 0x82814054
	if (!cr0.lt) goto loc_82814054;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r30,312(r31)
	PPC_STORE_U32(r31.u32 + 312, r30.u32);
	// stw r30,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r30.u32);
	// addi r26,r23,192
	r26.s64 = r23.s64 + 192;
	// stw r30,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r30.u32);
	// addi r27,r29,32
	r27.s64 = r29.s64 + 32;
	// stw r30,328(r31)
	PPC_STORE_U32(r31.u32 + 328, r30.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// stw r30,332(r31)
	PPC_STORE_U32(r31.u32 + 332, r30.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lfs f0,-17788(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -17788);
	f0.f64 = double(temp.f32);
	// stw r30,340(r31)
	PPC_STORE_U32(r31.u32 + 340, r30.u32);
	// stw r30,344(r31)
	PPC_STORE_U32(r31.u32 + 344, r30.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r30,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r30.u32);
	// stfs f0,388(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 388, temp.u32);
	// addi r28,r31,320
	r28.s64 = r31.s64 + 320;
	// addi r24,r31,388
	r24.s64 = r31.s64 + 388;
	// bl 0x82812c00
	sub_82812C00(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r29,r11,-26952
	r29.s64 = r11.s64 + -26952;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828140e8
	if (cr0.eq) goto loc_828140E8;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82e1bac0
	sub_82E1BAC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828140ec
	goto loc_828140EC;
loc_828140E8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_828140EC:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x822e3958
	sub_822E3958(ctx, base);
	// addi r25,r23,128
	r25.s64 = r23.s64 + 128;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82812c00
	sub_82812C00(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,76
	ctx.r5.s64 = 76;
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82814134
	if (cr0.eq) goto loc_82814134;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82e1bac0
	sub_82E1BAC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82814138
	goto loc_82814138;
loc_82814134:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_82814138:
	// addi r22,r31,240
	r22.s64 = r31.s64 + 240;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x822e3958
	sub_822E3958(ctx, base);
	// addi r5,r23,64
	ctx.r5.s64 = r23.s64 + 64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82812c00
	sub_82812C00(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82814180
	if (cr0.eq) goto loc_82814180;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82e1bac0
	sub_82E1BAC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82814184
	goto loc_82814184;
loc_82814180:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_82814184:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x822e3958
	sub_822E3958(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82812c00
	sub_82812C00(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,84
	ctx.r5.s64 = 84;
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x828141c8
	if (cr0.eq) goto loc_828141C8;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82e1bac0
	sub_82E1BAC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828141cc
	goto loc_828141CC;
loc_828141C8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_828141CC:
	// addi r27,r31,256
	r27.s64 = r31.s64 + 256;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822e3958
	sub_822E3958(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lvlx128 v62,r0,r24
	temp.u32 = r24.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r26,r11,-3936
	r26.s64 = r11.s64 + -3936;
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lvx128 v63,r0,r26
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e84c70
	sub_82E84C70(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82814230
	if (cr0.eq) goto loc_82814230;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82e1bac0
	sub_82E1BAC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82814234
	goto loc_82814234;
loc_82814230:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_82814234:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x822e3958
	sub_822E3958(ctx, base);
	// lvlx128 v62,r0,r24
	temp.u32 = r24.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// lvx128 v63,r0,r26
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// vmulfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e84c70
	sub_82E84C70(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,92
	ctx.r5.s64 = 92;
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8281428c
	if (cr0.eq) goto loc_8281428C;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82e1bac0
	sub_82E1BAC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82814290
	goto loc_82814290;
loc_8281428C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_82814290:
	// addi r3,r31,272
	ctx.r3.s64 = r31.s64 + 272;
	// bl 0x822e3958
	sub_822E3958(ctx, base);
	// lwz r4,0(r21)
	ctx.r4.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// bl 0x82e1b810
	sub_82E1B810(ctx, base);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// bl 0x82e1b810
	sub_82E1B810(ctx, base);
	// lwz r4,0(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// bl 0x82e1b810
	sub_82E1B810(ctx, base);
	// lwz r4,272(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x82e1b810
	sub_82E1B810(ctx, base);
	// lis r11,-31943
	r11.s64 = -2093416448;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r31.u32);
	// li r10,352
	ctx.r10.s64 = 352;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,29232
	r11.s64 = r11.s64 + 29232;
	// ld r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// li r9,368
	ctx.r9.s64 = 368;
	// lis r8,-32127
	ctx.r8.s64 = -2105475072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r8,r8,15096
	ctx.r8.s64 = ctx.r8.s64 + 15096;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r9
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82813eb8
	sub_82813EB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831b0b54
	return;
}

__attribute__((alias("__imp__sub_82814318"))) PPC_WEAK_FUNC(sub_82814318);
PPC_FUNC_IMPL(__imp__sub_82814318) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x827ff0e8
	sub_827FF0E8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82814348
	if (cr0.eq) goto loc_82814348;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82491aa0
	sub_82491AA0(ctx, base);
loc_82814348:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827ff3d0
	sub_827FF3D0(ctx, base);
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

__attribute__((alias("__imp__sub_82814370"))) PPC_WEAK_FUNC(sub_82814370);
PPC_FUNC_IMPL(__imp__sub_82814370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r11,-26188
	ctx.r3.s64 = r11.s64 + -26188;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82814380"))) PPC_WEAK_FUNC(sub_82814380);
PPC_FUNC_IMPL(__imp__sub_82814380) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,24(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// b 0x827feff8
	sub_827FEFF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82814388"))) PPC_WEAK_FUNC(sub_82814388);
PPC_FUNC_IMPL(__imp__sub_82814388) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// lwz r11,-18676(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18676);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x828143c8
	if (!cr0.eq) goto loc_828143C8;
	// lis r8,-31946
	ctx.r8.s64 = -2093613056;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-18676(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18676, r11.u32);
	// lwz r4,28924(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28924);
	// stw r4,-18680(r9)
	PPC_STORE_U32(ctx.r9.u32 + -18680, ctx.r4.u32);
	// b 0x828143cc
	goto loc_828143CC;
loc_828143C8:
	// lwz r4,-18680(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -18680);
loc_828143CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82491af8
	sub_82491AF8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,29188(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 29188);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822ef310
	sub_822EF310(ctx, base);
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

__attribute__((alias("__imp__sub_828143F8"))) PPC_WEAK_FUNC(sub_828143F8);
PPC_FUNC_IMPL(__imp__sub_828143F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,24(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// stb r11,312(r3)
	PPC_STORE_U8(ctx.r3.u32 + 312, r11.u8);
	// lbz r11,24(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r3,304(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82965430
	sub_82965430(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8281441C"))) PPC_WEAK_FUNC(sub_8281441C);
PPC_FUNC_IMPL(__imp__sub_8281441C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82814420"))) PPC_WEAK_FUNC(sub_82814420);
PPC_FUNC_IMPL(__imp__sub_82814420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,28(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,288(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// b 0x827f01f8
	sub_827F01F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82814430"))) PPC_WEAK_FUNC(sub_82814430);
PPC_FUNC_IMPL(__imp__sub_82814430) {
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
	// beq 0x82814488
	if (cr0.eq) goto loc_82814488;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-26320
	ctx.r9.s64 = r11.s64 + -26320;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8281448c
	goto loc_8281448C;
loc_82814488:
	// li r11,0
	r11.s64 = 0;
loc_8281448C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828144d8
	if (!cr6.eq) goto loc_828144D8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828144b8
	if (cr6.eq) goto loc_828144B8;
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
loc_828144B8:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-3072(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -3072);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_828144D8:
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

__attribute__((alias("__imp__sub_828144F8"))) PPC_WEAK_FUNC(sub_828144F8);
PPC_FUNC_IMPL(__imp__sub_828144F8) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-26276
	r11.s64 = r11.s64 + -26276;
	// addi r10,r10,-26300
	ctx.r10.s64 = ctx.r10.s64 + -26300;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// lwz r3,308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82814534
	if (cr6.eq) goto loc_82814534;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82814534:
	// lwz r3,300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82814544
	if (cr6.eq) goto loc_82814544;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82814544:
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82814554
	if (cr6.eq) goto loc_82814554;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82814554:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827ff890
	sub_827FF890(ctx, base);
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

__attribute__((alias("__imp__sub_82814570"))) PPC_WEAK_FUNC(sub_82814570);
PPC_FUNC_IMPL(__imp__sub_82814570) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x82814810
	sub_82814810(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82814578"))) PPC_WEAK_FUNC(sub_82814578);
PPC_FUNC_IMPL(__imp__sub_82814578) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x827ff010
	sub_827FF010(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// bl 0x827f0018
	sub_827F0018(ctx, base);
	// lbz r11,312(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 312);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82814630
	if (cr0.eq) goto loc_82814630;
	// lwz r11,304(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 304);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82814630
	if (cr6.eq) goto loc_82814630;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-26188
	ctx.r4.s64 = r11.s64 + -26188;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827fef80
	sub_827FEF80(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82e1e040
	sub_82E1E040(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r30,r11,29232
	r30.s64 = r11.s64 + 29232;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,304(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 304);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82965700
	sub_82965700(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82814630
	if (cr6.eq) goto loc_82814630;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82814630:
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

__attribute__((alias("__imp__sub_82814648"))) PPC_WEAK_FUNC(sub_82814648);
PPC_FUNC_IMPL(__imp__sub_82814648) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82814790
	if (cr6.eq) goto loc_82814790;
	// lbz r11,24(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,28(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82814740
	if (cr0.eq) goto loc_82814740;
	// bne cr6,0x82814688
	if (!cr6.eq) goto loc_82814688;
	// lwz r4,332(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// bl 0x827d4cf8
	sub_827D4CF8(ctx, base);
	// b 0x82814790
	goto loc_82814790;
loc_82814688:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82814790
	if (!cr6.eq) goto loc_82814790;
	// lwz r11,328(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 328);
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r10,r10,-3112
	ctx.r10.s64 = ctx.r10.s64 + -3112;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-26180
	ctx.r4.s64 = r11.s64 + -26180;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827fef80
	sub_827FEF80(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r30,228(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r29,r1,84
	r29.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82e1e040
	sub_82E1E040(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r8,7
	ctx.r8.s64 = 7;
	// lfs f1,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f1.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x827d5ba0
	sub_827D5BA0(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r3,336(r31)
	PPC_STORE_U32(r31.u32 + 336, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8281472c
	if (cr6.eq) goto loc_8281472C;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281472C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// b 0x82814790
	goto loc_82814790;
loc_82814740:
	// bne cr6,0x82814754
	if (!cr6.eq) goto loc_82814754;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,332(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// bl 0x827d4c90
	sub_827D4C90(ctx, base);
	// b 0x82814790
	goto loc_82814790;
loc_82814754:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82814790
	if (!cr6.eq) goto loc_82814790;
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
	// bne cr6,0x8281477c
	if (!cr6.eq) goto loc_8281477C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8281477C:
	// lwz r5,336(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 336);
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// bl 0x827d56f8
	sub_827D56F8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_82814790:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82814798"))) PPC_WEAK_FUNC(sub_82814798);
PPC_FUNC_IMPL(__imp__sub_82814798) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x827ff950
	sub_827FF950(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r9,r11,-26276
	ctx.r9.s64 = r11.s64 + -26276;
	// addi r10,r10,-26300
	ctx.r10.s64 = ctx.r10.s64 + -26300;
	// li r11,0
	r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,288(r31)
	PPC_STORE_U32(r31.u32 + 288, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r11.u32);
	// stw r11,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r11.u32);
	// stw r11,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r11.u32);
	// stw r11,304(r31)
	PPC_STORE_U32(r31.u32 + 304, r11.u32);
	// stw r11,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r11.u32);
	// stb r11,312(r31)
	PPC_STORE_U8(r31.u32 + 312, r11.u8);
	// stw r30,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r30.u32);
	// stw r10,320(r31)
	PPC_STORE_U32(r31.u32 + 320, ctx.r10.u32);
	// stw r10,324(r31)
	PPC_STORE_U32(r31.u32 + 324, ctx.r10.u32);
	// stw r29,328(r31)
	PPC_STORE_U32(r31.u32 + 328, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82814810"))) PPC_WEAK_FUNC(sub_82814810);
PPC_FUNC_IMPL(__imp__sub_82814810) {
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
	// bl 0x828144f8
	sub_828144F8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82814840
	if (cr0.eq) goto loc_82814840;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82814840:
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

__attribute__((alias("__imp__sub_82814860"))) PPC_WEAK_FUNC(sub_82814860);
PPC_FUNC_IMPL(__imp__sub_82814860) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r31,304
	r11.s64 = r31.s64 + 304;
	// stw r10,304(r31)
	PPC_STORE_U32(r31.u32 + 304, ctx.r10.u32);
	// lwz r3,308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,308(r31)
	PPC_STORE_U32(r31.u32 + 308, ctx.r10.u32);
	// beq cr6,0x8281489c
	if (cr6.eq) goto loc_8281489C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281489C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8280a1e0
	sub_8280A1E0(ctx, base);
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

__attribute__((alias("__imp__sub_828148C0"))) PPC_WEAK_FUNC(sub_828148C0);
PPC_FUNC_IMPL(__imp__sub_828148C0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e5e6c8
	sub_82E5E6C8(ctx, base);
	// lwz r10,328(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 328);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-2964
	r11.s64 = r11.s64 + -2964;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e37318
	sub_82E37318(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82814980
	if (cr6.eq) goto loc_82814980;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-26168
	ctx.r4.s64 = r11.s64 + -26168;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82814954
	if (cr0.eq) goto loc_82814954;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82e1f820
	sub_82E1F820(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82814958
	goto loc_82814958;
loc_82814954:
	// li r31,0
	r31.s64 = 0;
loc_82814958:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235bb48
	sub_8235BB48(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// b 0x8281498c
	goto loc_8281498C;
loc_82814980:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_8281498C:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281499c
	if (cr6.eq) goto loc_8281499C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281499C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e5e6e0
	sub_82E5E6E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828149B0"))) PPC_WEAK_FUNC(sub_828149B0);
PPC_FUNC_IMPL(__imp__sub_828149B0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e8f48
	sub_822E8F48(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-26616
	ctx.r4.s64 = r11.s64 + -26616;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822e90d0
	sub_822E90D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82814a58
	if (cr6.eq) goto loc_82814A58;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r29,r31,40
	r29.s64 = r31.s64 + 40;
	// bne cr6,0x82814a18
	if (!cr6.eq) goto loc_82814A18;
	// li r29,0
	r29.s64 = 0;
loc_82814A18:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
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
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822f0550
	sub_822F0550(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// b 0x82814a64
	goto loc_82814A64;
loc_82814A58:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_82814A64:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82814a74
	if (cr6.eq) goto loc_82814A74;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82814A74:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e8f60
	sub_822E8F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82814A88"))) PPC_WEAK_FUNC(sub_82814A88);
PPC_FUNC_IMPL(__imp__sub_82814A88) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-26168
	ctx.r4.s64 = r11.s64 + -26168;
	// li r5,89
	ctx.r5.s64 = 89;
	// li r3,340
	ctx.r3.s64 = 340;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82814adc
	if (cr0.eq) goto loc_82814ADC;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82814798
	sub_82814798(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82814ae0
	goto loc_82814AE0;
loc_82814ADC:
	// li r31,0
	r31.s64 = 0;
loc_82814AE0:
	// stw r31,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r31.u32);
	// addi r30,r28,4
	r30.s64 = r28.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82814430
	sub_82814430(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82814B10"))) PPC_WEAK_FUNC(sub_82814B10);
PPC_FUNC_IMPL(__imp__sub_82814B10) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lbz r11,312(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 312);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82814c7c
	if (cr0.eq) goto loc_82814C7C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// lwz r11,316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x82814c7c
	if (cr6.eq) goto loc_82814C7C;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lbz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 28);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,29232
	r11.s64 = r11.s64 + 29232;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq 0x82814ba4
	if (cr0.eq) goto loc_82814BA4;
	// addi r4,r30,48
	ctx.r4.s64 = r30.s64 + 48;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lfs f0,26548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 26548);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// vmulfp128 v63,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82814bd4
	goto loc_82814BD4;
loc_82814BA4:
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r9,r9,-20912
	ctx.r9.s64 = ctx.r9.s64 + -20912;
	// lfs f0,26548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 26548);
	f0.f64 = double(temp.f32);
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
loc_82814BD4:
	// lis r11,-31945
	r11.s64 = -2093547520;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-28956
	ctx.r4.s64 = r11.s64 + -28956;
	// addi r7,r30,32
	ctx.r7.s64 = r30.s64 + 32;
	// addi r6,r31,324
	ctx.r6.s64 = r31.s64 + 324;
	// addi r5,r31,320
	ctx.r5.s64 = r31.s64 + 320;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82810328
	sub_82810328(ctx, base);
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
	// beq cr6,0x82814c2c
	if (cr6.eq) goto loc_82814C2C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82814C10:
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
	// bne 0x82814c10
	if (!cr0.eq) goto loc_82814C10;
loc_82814C2C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r30,r1,88
	r30.s64 = ctx.r1.s64 + 88;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,-26168
	ctx.r4.s64 = ctx.r10.s64 + -26168;
	// li r5,190
	ctx.r5.s64 = 190;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82814c6c
	if (cr6.eq) goto loc_82814C6C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82814C6C:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82814c7c
	if (cr6.eq) goto loc_82814C7C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82814C7C:
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

__attribute__((alias("__imp__sub_82814C98"))) PPC_WEAK_FUNC(sub_82814C98);
PPC_FUNC_IMPL(__imp__sub_82814C98) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,24(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// addi r5,r31,320
	ctx.r5.s64 = r31.s64 + 320;
	// addi r6,r31,324
	ctx.r6.s64 = r31.s64 + 324;
	// lwz r10,304(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 304);
	// stw r11,320(r31)
	PPC_STORE_U32(r31.u32 + 320, r11.u32);
	// lwz r11,28(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r11.u32);
	// beq cr6,0x82814d38
	if (cr6.eq) goto loc_82814D38;
	// li r11,16
	r11.s64 = 16;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lis r11,-31945
	r11.s64 = -2093547520;
	// addi r7,r10,29232
	ctx.r7.s64 = ctx.r10.s64 + 29232;
	// addi r4,r11,-28956
	ctx.r4.s64 = r11.s64 + -28956;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x827ffc98
	sub_827FFC98(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,28924(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28924);
	// bl 0x82965348
	sub_82965348(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 304);
	// bl 0x82965388
	sub_82965388(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82814d28
	if (cr6.eq) goto loc_82814D28;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82814D28:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82814d38
	if (cr6.eq) goto loc_82814D38;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82814D38:
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

__attribute__((alias("__imp__sub_82814D50"))) PPC_WEAK_FUNC(sub_82814D50);
PPC_FUNC_IMPL(__imp__sub_82814D50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-3744(r1)
	ea = -3744 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-26168
	ctx.r4.s64 = r11.s64 + -26168;
	// li r5,392
	ctx.r5.s64 = 392;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82814d98
	if (cr0.eq) goto loc_82814D98;
	// bl 0x827f0d28
	sub_827F0D28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82814d9c
	goto loc_82814D9C;
loc_82814D98:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_82814D9C:
	// addi r3,r29,288
	ctx.r3.s64 = r29.s64 + 288;
	// bl 0x82801240
	sub_82801240(ctx, base);
	// lwz r10,328(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 328);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-3092
	r11.s64 = r11.s64 + -3092;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r30,r1,84
	r30.s64 = ctx.r1.s64 + 84;
	// lwz r28,288(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 288);
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lis r27,-32256
	r27.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lfs f1,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x827f08f0
	sub_827F08F0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// stb r31,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, r31.u8);
	// li r30,1
	r30.s64 = 1;
	// addi r8,r8,-25340
	ctx.r8.s64 = ctx.r8.s64 + -25340;
	// lfs f30,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f30.f64 = double(temp.f32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// lfs f31,-24780(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24780);
	f31.f64 = double(temp.f32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stfs f30,112(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r11,-22752(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22752);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,152(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r30.u32);
	// addi r10,r10,-25360
	ctx.r10.s64 = ctx.r10.s64 + -25360;
	// stfs f30,160(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, r31.u8);
	// stfs f31,168(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r11,-22748(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22748);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,200(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stw r30,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r30.u32);
	// addi r28,r10,-25380
	r28.s64 = ctx.r10.s64 + -25380;
	// stfs f30,208(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f31,212(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stb r31,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, r31.u8);
	// stfs f31,216(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stw r28,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r28.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r11,-22724(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22724);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lwz r11,-22720(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22720);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, r30.u32);
	// addi r26,r10,-25404
	r26.s64 = ctx.r10.s64 + -25404;
	// stfs f0,248(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f30,256(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stb r31,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, r31.u8);
	// stfs f31,260(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stw r26,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, r26.u32);
	// stfs f31,264(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r11.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r28,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, r28.u32);
	// stfs f0,296(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stw r30,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, r30.u32);
	// stfs f30,304(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// stb r31,316(r1)
	PPC_STORE_U8(ctx.r1.u32 + 316, r31.u8);
	// stfs f31,308(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stfs f31,312(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// lwz r11,-22716(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22716);
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, r30.u32);
	// stfs f0,344(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// stw r26,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, r26.u32);
	// stfs f30,352(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// stb r31,364(r1)
	PPC_STORE_U8(ctx.r1.u32 + 364, r31.u8);
	// stfs f31,356(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stfs f31,360(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// lwz r11,-22712(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22712);
	// stw r11,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,392(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// stw r30,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, r30.u32);
	// addi r28,r10,-25416
	r28.s64 = ctx.r10.s64 + -25416;
	// stfs f30,400(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// stfs f31,404(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// stb r31,412(r1)
	PPC_STORE_U8(ctx.r1.u32 + 412, r31.u8);
	// stfs f31,408(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 408, temp.u32);
	// stw r28,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, r28.u32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lwz r11,-22708(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22708);
	// stw r11,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,424
	ctx.r3.s64 = ctx.r1.s64 + 424;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, r30.u32);
	// stfs f0,440(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 440, temp.u32);
	// stw r28,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, r28.u32);
	// stfs f30,448(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 448, temp.u32);
	// stb r31,460(r1)
	PPC_STORE_U8(ctx.r1.u32 + 460, r31.u8);
	// stfs f31,452(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 452, temp.u32);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// stfs f31,456(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 456, temp.u32);
	// lwz r11,-22704(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22704);
	// stw r11,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r11,-22700(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22700);
	// addi r10,r10,-25432
	ctx.r10.s64 = ctx.r10.s64 + -25432;
	// stfs f0,488(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 488, temp.u32);
	// stw r31,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, r31.u32);
	// stfs f30,496(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 496, temp.u32);
	// stb r31,508(r1)
	PPC_STORE_U8(ctx.r1.u32 + 508, r31.u8);
	// stfs f31,500(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 500, temp.u32);
	// stw r10,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r10.u32);
	// stfs f31,504(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 504, temp.u32);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// stw r11,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,520
	ctx.r3.s64 = ctx.r1.s64 + 520;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, r30.u32);
	// stfs f0,536(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 536, temp.u32);
	// stw r28,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, r28.u32);
	// stfs f30,544(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 544, temp.u32);
	// stb r31,556(r1)
	PPC_STORE_U8(ctx.r1.u32 + 556, r31.u8);
	// stfs f31,548(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 548, temp.u32);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// stfs f31,552(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 552, temp.u32);
	// lwz r11,-22692(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22692);
	// stw r11,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,568
	ctx.r3.s64 = ctx.r1.s64 + 568;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, r30.u32);
	// stfs f0,584(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 584, temp.u32);
	// stw r28,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, r28.u32);
	// stfs f30,592(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 592, temp.u32);
	// stb r31,604(r1)
	PPC_STORE_U8(ctx.r1.u32 + 604, r31.u8);
	// stfs f31,596(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 596, temp.u32);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// stfs f31,600(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 600, temp.u32);
	// lwz r11,-22688(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22688);
	// stw r11,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,616
	ctx.r3.s64 = ctx.r1.s64 + 616;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,632(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 632, temp.u32);
	// stw r30,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, r30.u32);
	// addi r10,r10,-25452
	ctx.r10.s64 = ctx.r10.s64 + -25452;
	// stfs f30,640(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 640, temp.u32);
	// stfs f31,644(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 644, temp.u32);
	// stb r31,652(r1)
	PPC_STORE_U8(ctx.r1.u32 + 652, r31.u8);
	// stfs f31,648(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 648, temp.u32);
	// stw r10,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r10.u32);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// lwz r11,-22684(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22684);
	// stw r11,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,664
	ctx.r3.s64 = ctx.r1.s64 + 664;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 684, r30.u32);
	// stfs f0,680(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 680, temp.u32);
	// stw r28,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, r28.u32);
	// stfs f30,688(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 688, temp.u32);
	// stb r31,700(r1)
	PPC_STORE_U8(ctx.r1.u32 + 700, r31.u8);
	// stfs f31,692(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 692, temp.u32);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// stfs f31,696(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 696, temp.u32);
	// lwz r11,-22680(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22680);
	// stw r11,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,712
	ctx.r3.s64 = ctx.r1.s64 + 712;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// addi r10,r10,-25472
	ctx.r10.s64 = ctx.r10.s64 + -25472;
	// lwz r11,-22676(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22676);
	// stfs f0,728(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 728, temp.u32);
	// stw r30,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, r30.u32);
	// stfs f30,736(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 736, temp.u32);
	// stw r10,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r10.u32);
	// stfs f31,740(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 740, temp.u32);
	// stb r31,748(r1)
	PPC_STORE_U8(ctx.r1.u32 + 748, r31.u8);
	// stfs f31,744(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 744, temp.u32);
	// stw r11,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, r11.u32);
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,760
	ctx.r3.s64 = ctx.r1.s64 + 760;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 780, r30.u32);
	// stfs f0,776(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 776, temp.u32);
	// stw r28,772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 772, r28.u32);
	// stfs f30,784(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 784, temp.u32);
	// stb r31,796(r1)
	PPC_STORE_U8(ctx.r1.u32 + 796, r31.u8);
	// stfs f31,788(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 788, temp.u32);
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// stfs f31,792(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 792, temp.u32);
	// lwz r11,-22672(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22672);
	// stw r11,768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 768, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,808
	ctx.r3.s64 = ctx.r1.s64 + 808;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,824(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 824, temp.u32);
	// stw r30,828(r1)
	PPC_STORE_U32(ctx.r1.u32 + 828, r30.u32);
	// addi r10,r10,-25492
	ctx.r10.s64 = ctx.r10.s64 + -25492;
	// stfs f30,832(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 832, temp.u32);
	// stfs f31,836(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 836, temp.u32);
	// stb r31,844(r1)
	PPC_STORE_U8(ctx.r1.u32 + 844, r31.u8);
	// stfs f31,840(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 840, temp.u32);
	// stw r10,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r10.u32);
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// lwz r11,-22668(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22668);
	// stw r11,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,856
	ctx.r3.s64 = ctx.r1.s64 + 856;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,876(r1)
	PPC_STORE_U32(ctx.r1.u32 + 876, r30.u32);
	// stfs f0,872(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 872, temp.u32);
	// stw r28,868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 868, r28.u32);
	// stfs f30,880(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 880, temp.u32);
	// stb r31,892(r1)
	PPC_STORE_U8(ctx.r1.u32 + 892, r31.u8);
	// stfs f31,884(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 884, temp.u32);
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// stfs f31,888(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 888, temp.u32);
	// lwz r11,-22664(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22664);
	// stw r11,864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 864, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,904
	ctx.r3.s64 = ctx.r1.s64 + 904;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r31,924(r1)
	PPC_STORE_U32(ctx.r1.u32 + 924, r31.u32);
	// stfs f0,920(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 920, temp.u32);
	// stw r28,916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 916, r28.u32);
	// stfs f30,928(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 928, temp.u32);
	// stb r31,940(r1)
	PPC_STORE_U8(ctx.r1.u32 + 940, r31.u8);
	// stfs f31,932(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 932, temp.u32);
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// stfs f31,936(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 936, temp.u32);
	// lwz r11,-22660(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22660);
	// stw r11,912(r1)
	PPC_STORE_U32(ctx.r1.u32 + 912, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,952
	ctx.r3.s64 = ctx.r1.s64 + 952;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,968(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 968, temp.u32);
	// stfs f30,976(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 976, temp.u32);
	// addi r10,r10,-25512
	ctx.r10.s64 = ctx.r10.s64 + -25512;
	// lwz r11,-22744(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22744);
	// stfs f31,980(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 980, temp.u32);
	// stw r30,972(r1)
	PPC_STORE_U32(ctx.r1.u32 + 972, r30.u32);
	// stfs f31,984(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 984, temp.u32);
	// stw r10,964(r1)
	PPC_STORE_U32(ctx.r1.u32 + 964, ctx.r10.u32);
	// stb r31,988(r1)
	PPC_STORE_U8(ctx.r1.u32 + 988, r31.u8);
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// stw r11,960(r1)
	PPC_STORE_U32(ctx.r1.u32 + 960, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1000
	ctx.r3.s64 = ctx.r1.s64 + 1000;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1016(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1016, temp.u32);
	// stw r30,1020(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1020, r30.u32);
	// addi r10,r10,-25536
	ctx.r10.s64 = ctx.r10.s64 + -25536;
	// stfs f30,1024(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1024, temp.u32);
	// stfs f31,1028(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1028, temp.u32);
	// stb r31,1036(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1036, r31.u8);
	// stfs f31,1032(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1032, temp.u32);
	// stw r10,1012(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1012, ctx.r10.u32);
	// addi r3,r1,1040
	ctx.r3.s64 = ctx.r1.s64 + 1040;
	// lwz r11,-22740(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22740);
	// stw r11,1008(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1008, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1048
	ctx.r3.s64 = ctx.r1.s64 + 1048;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1064(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1064, temp.u32);
	// stw r30,1068(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1068, r30.u32);
	// addi r10,r10,-25556
	ctx.r10.s64 = ctx.r10.s64 + -25556;
	// stfs f30,1072(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1072, temp.u32);
	// stfs f31,1076(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1076, temp.u32);
	// stb r31,1084(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1084, r31.u8);
	// stfs f31,1080(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1080, temp.u32);
	// stw r10,1060(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1060, ctx.r10.u32);
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// lwz r11,-22736(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22736);
	// stw r11,1056(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1056, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1096
	ctx.r3.s64 = ctx.r1.s64 + 1096;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1112, temp.u32);
	// stw r30,1116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1116, r30.u32);
	// addi r10,r10,-25580
	ctx.r10.s64 = ctx.r10.s64 + -25580;
	// stfs f30,1120(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1120, temp.u32);
	// stfs f31,1124(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1124, temp.u32);
	// stb r31,1132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1132, r31.u8);
	// stfs f31,1128(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1128, temp.u32);
	// stw r10,1108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1108, ctx.r10.u32);
	// addi r3,r1,1136
	ctx.r3.s64 = ctx.r1.s64 + 1136;
	// lwz r11,-22732(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22732);
	// stw r11,1104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1104, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1144
	ctx.r3.s64 = ctx.r1.s64 + 1144;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1160(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1160, temp.u32);
	// stw r30,1164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1164, r30.u32);
	// addi r10,r10,-25600
	ctx.r10.s64 = ctx.r10.s64 + -25600;
	// stfs f30,1168(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1168, temp.u32);
	// stfs f31,1172(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1172, temp.u32);
	// stb r31,1180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1180, r31.u8);
	// stfs f31,1176(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1176, temp.u32);
	// stw r10,1156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1156, ctx.r10.u32);
	// addi r3,r1,1184
	ctx.r3.s64 = ctx.r1.s64 + 1184;
	// lwz r11,-22728(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22728);
	// stw r11,1152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1152, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1192
	ctx.r3.s64 = ctx.r1.s64 + 1192;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1208(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1208, temp.u32);
	// lis r26,-31954
	r26.s64 = -2094137344;
	// lwz r11,-1288(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -1288);
	// stfs f30,1216(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1216, temp.u32);
	// stfs f31,1220(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1220, temp.u32);
	// stw r28,1204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1204, r28.u32);
	// stfs f31,1224(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1224, temp.u32);
	// stw r31,1212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1212, r31.u32);
	// stb r31,1228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1228, r31.u8);
	// addi r3,r1,1232
	ctx.r3.s64 = ctx.r1.s64 + 1232;
	// stw r11,1200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1200, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1240
	ctx.r3.s64 = ctx.r1.s64 + 1240;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r25,-31954
	r25.s64 = -2094137344;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1256(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1256, temp.u32);
	// stw r31,1260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1260, r31.u32);
	// addi r10,r11,-25612
	ctx.r10.s64 = r11.s64 + -25612;
	// stfs f30,1264(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1264, temp.u32);
	// stfs f31,1268(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1268, temp.u32);
	// stb r31,1276(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1276, r31.u8);
	// stfs f31,1272(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1272, temp.u32);
	// stw r10,1252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1252, ctx.r10.u32);
	// addi r3,r1,1280
	ctx.r3.s64 = ctx.r1.s64 + 1280;
	// lwz r11,-1284(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -1284);
	// stw r11,1248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1248, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1288
	ctx.r3.s64 = ctx.r1.s64 + 1288;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1304(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1304, temp.u32);
	// stw r31,1308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1308, r31.u32);
	// addi r10,r10,-25628
	ctx.r10.s64 = ctx.r10.s64 + -25628;
	// stfs f30,1312(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1312, temp.u32);
	// stfs f31,1316(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1316, temp.u32);
	// stb r31,1324(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1324, r31.u8);
	// stfs f31,1320(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1320, temp.u32);
	// stw r10,1300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1300, ctx.r10.u32);
	// addi r3,r1,1328
	ctx.r3.s64 = ctx.r1.s64 + 1328;
	// lwz r11,-1268(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1268);
	// stw r11,1296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1296, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1336
	ctx.r3.s64 = ctx.r1.s64 + 1336;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1352(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1352, temp.u32);
	// stw r30,1356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1356, r30.u32);
	// addi r10,r10,-25644
	ctx.r10.s64 = ctx.r10.s64 + -25644;
	// stfs f30,1360(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1360, temp.u32);
	// stfs f31,1364(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1364, temp.u32);
	// stb r31,1372(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1372, r31.u8);
	// stfs f31,1368(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1368, temp.u32);
	// stw r10,1348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1348, ctx.r10.u32);
	// addi r3,r1,1376
	ctx.r3.s64 = ctx.r1.s64 + 1376;
	// lwz r11,-1264(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1264);
	// stw r11,1344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1344, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1384
	ctx.r3.s64 = ctx.r1.s64 + 1384;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1400(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1400, temp.u32);
	// stw r30,1404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1404, r30.u32);
	// addi r10,r10,-25660
	ctx.r10.s64 = ctx.r10.s64 + -25660;
	// stfs f30,1408(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1408, temp.u32);
	// stfs f31,1412(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1412, temp.u32);
	// stb r31,1420(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1420, r31.u8);
	// stfs f31,1416(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1416, temp.u32);
	// stw r10,1396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1396, ctx.r10.u32);
	// addi r3,r1,1424
	ctx.r3.s64 = ctx.r1.s64 + 1424;
	// lwz r11,-1276(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1276);
	// stw r11,1392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1392, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1432
	ctx.r3.s64 = ctx.r1.s64 + 1432;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lwz r11,-1272(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1272);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,1452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1452, r30.u32);
	// addi r10,r10,-25672
	ctx.r10.s64 = ctx.r10.s64 + -25672;
	// stfs f0,1448(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1448, temp.u32);
	// stfs f30,1456(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1456, temp.u32);
	// stb r31,1468(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1468, r31.u8);
	// stfs f31,1460(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1460, temp.u32);
	// stw r10,1444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1444, ctx.r10.u32);
	// stfs f31,1464(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1464, temp.u32);
	// stw r11,1440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1440, r11.u32);
	// addi r3,r1,1472
	ctx.r3.s64 = ctx.r1.s64 + 1472;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1480
	ctx.r3.s64 = ctx.r1.s64 + 1480;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r28,1492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1492, r28.u32);
	// stfs f0,1496(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1496, temp.u32);
	// stw r30,1500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1500, r30.u32);
	// stfs f30,1504(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1504, temp.u32);
	// stb r31,1516(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1516, r31.u8);
	// stfs f31,1508(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1508, temp.u32);
	// addi r3,r1,1520
	ctx.r3.s64 = ctx.r1.s64 + 1520;
	// stfs f31,1512(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1512, temp.u32);
	// lwz r11,-1280(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1280);
	// stw r11,1488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1488, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1528
	ctx.r3.s64 = ctx.r1.s64 + 1528;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1544(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1544, temp.u32);
	// stw r30,1548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1548, r30.u32);
	// addi r24,r10,-25692
	r24.s64 = ctx.r10.s64 + -25692;
	// stfs f30,1552(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1552, temp.u32);
	// stfs f31,1556(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1556, temp.u32);
	// stb r31,1564(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1564, r31.u8);
	// stfs f31,1560(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1560, temp.u32);
	// stw r24,1540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1540, r24.u32);
	// addi r3,r1,1568
	ctx.r3.s64 = ctx.r1.s64 + 1568;
	// lwz r11,-1144(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1144);
	// stw r11,1536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1536, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1576
	ctx.r3.s64 = ctx.r1.s64 + 1576;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1592(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1592, temp.u32);
	// stw r31,1596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1596, r31.u32);
	// addi r10,r10,-25712
	ctx.r10.s64 = ctx.r10.s64 + -25712;
	// stfs f30,1600(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1600, temp.u32);
	// stfs f31,1604(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1604, temp.u32);
	// stb r31,1612(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1612, r31.u8);
	// stfs f31,1608(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1608, temp.u32);
	// stw r10,1588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1588, ctx.r10.u32);
	// addi r3,r1,1616
	ctx.r3.s64 = ctx.r1.s64 + 1616;
	// lwz r11,-1140(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1140);
	// stw r11,1584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1584, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1624
	ctx.r3.s64 = ctx.r1.s64 + 1624;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1640(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1640, temp.u32);
	// stw r30,1644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1644, r30.u32);
	// addi r10,r10,-25732
	ctx.r10.s64 = ctx.r10.s64 + -25732;
	// stfs f30,1648(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1648, temp.u32);
	// stfs f31,1652(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1652, temp.u32);
	// stb r31,1660(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1660, r31.u8);
	// stfs f31,1656(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1656, temp.u32);
	// stw r10,1636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1636, ctx.r10.u32);
	// addi r3,r1,1664
	ctx.r3.s64 = ctx.r1.s64 + 1664;
	// lwz r11,-1136(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1136);
	// stw r11,1632(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1632, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1672
	ctx.r3.s64 = ctx.r1.s64 + 1672;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1688(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1688, temp.u32);
	// stw r30,1692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1692, r30.u32);
	// addi r10,r10,-25752
	ctx.r10.s64 = ctx.r10.s64 + -25752;
	// stfs f30,1696(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1696, temp.u32);
	// stfs f31,1700(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1700, temp.u32);
	// stb r31,1708(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1708, r31.u8);
	// stfs f31,1704(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1704, temp.u32);
	// stw r10,1684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1684, ctx.r10.u32);
	// addi r3,r1,1712
	ctx.r3.s64 = ctx.r1.s64 + 1712;
	// lwz r11,-1132(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1132);
	// stw r11,1680(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1680, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1720
	ctx.r3.s64 = ctx.r1.s64 + 1720;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1736(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1736, temp.u32);
	// stw r30,1740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1740, r30.u32);
	// addi r10,r10,-25772
	ctx.r10.s64 = ctx.r10.s64 + -25772;
	// stfs f30,1744(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1744, temp.u32);
	// stfs f31,1748(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1748, temp.u32);
	// stb r31,1756(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1756, r31.u8);
	// stfs f31,1752(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1752, temp.u32);
	// stw r10,1732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1732, ctx.r10.u32);
	// addi r3,r1,1760
	ctx.r3.s64 = ctx.r1.s64 + 1760;
	// lwz r11,-1128(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1128);
	// stw r11,1728(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1728, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1768
	ctx.r3.s64 = ctx.r1.s64 + 1768;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,1788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1788, r30.u32);
	// stfs f0,1784(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1784, temp.u32);
	// stw r24,1780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1780, r24.u32);
	// stfs f30,1792(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1792, temp.u32);
	// stb r31,1804(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1804, r31.u8);
	// stfs f31,1796(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1796, temp.u32);
	// addi r3,r1,1808
	ctx.r3.s64 = ctx.r1.s64 + 1808;
	// stfs f31,1800(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1800, temp.u32);
	// lwz r11,-1124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1124);
	// stw r11,1776(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1776, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1816
	ctx.r3.s64 = ctx.r1.s64 + 1816;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,1836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1836, r30.u32);
	// stfs f0,1832(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1832, temp.u32);
	// stw r28,1828(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1828, r28.u32);
	// stfs f30,1840(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1840, temp.u32);
	// stb r31,1852(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1852, r31.u8);
	// stfs f31,1844(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1844, temp.u32);
	// addi r3,r1,1856
	ctx.r3.s64 = ctx.r1.s64 + 1856;
	// stfs f31,1848(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1848, temp.u32);
	// lwz r11,-1172(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1172);
	// stw r11,1824(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1824, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1864
	ctx.r3.s64 = ctx.r1.s64 + 1864;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1880(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1880, temp.u32);
	// stw r31,1884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1884, r31.u32);
	// addi r10,r10,-25784
	ctx.r10.s64 = ctx.r10.s64 + -25784;
	// stfs f30,1888(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1888, temp.u32);
	// stfs f31,1892(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1892, temp.u32);
	// stb r31,1900(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1900, r31.u8);
	// stfs f31,1896(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1896, temp.u32);
	// stw r10,1876(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1876, ctx.r10.u32);
	// addi r3,r1,1904
	ctx.r3.s64 = ctx.r1.s64 + 1904;
	// lwz r11,-1168(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1168);
	// stw r11,1872(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1872, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1912
	ctx.r3.s64 = ctx.r1.s64 + 1912;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,1932(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1932, r30.u32);
	// stfs f0,1928(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1928, temp.u32);
	// stw r28,1924(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1924, r28.u32);
	// stfs f30,1936(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1936, temp.u32);
	// stb r31,1948(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1948, r31.u8);
	// stfs f31,1940(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1940, temp.u32);
	// addi r3,r1,1952
	ctx.r3.s64 = ctx.r1.s64 + 1952;
	// stfs f31,1944(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1944, temp.u32);
	// lwz r11,-1164(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1164);
	// stw r11,1920(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1920, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1960
	ctx.r3.s64 = ctx.r1.s64 + 1960;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,1980(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1980, r30.u32);
	// stfs f0,1976(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1976, temp.u32);
	// stw r28,1972(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1972, r28.u32);
	// stfs f30,1984(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1984, temp.u32);
	// stb r31,1996(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1996, r31.u8);
	// stfs f31,1988(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1988, temp.u32);
	// addi r3,r1,2000
	ctx.r3.s64 = ctx.r1.s64 + 2000;
	// stfs f31,1992(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1992, temp.u32);
	// lwz r11,-1160(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1160);
	// stw r11,1968(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1968, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2008
	ctx.r3.s64 = ctx.r1.s64 + 2008;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,2024(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2024, temp.u32);
	// stw r31,2028(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2028, r31.u32);
	// addi r10,r10,-25804
	ctx.r10.s64 = ctx.r10.s64 + -25804;
	// stfs f30,2032(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2032, temp.u32);
	// stfs f31,2036(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2036, temp.u32);
	// stb r31,2044(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2044, r31.u8);
	// stfs f31,2040(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2040, temp.u32);
	// stw r10,2020(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2020, ctx.r10.u32);
	// addi r3,r1,2048
	ctx.r3.s64 = ctx.r1.s64 + 2048;
	// lwz r11,-1176(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1176);
	// stw r11,2016(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2016, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2056
	ctx.r3.s64 = ctx.r1.s64 + 2056;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,2076(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2076, r30.u32);
	// stfs f0,2072(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2072, temp.u32);
	// stw r28,2068(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2068, r28.u32);
	// stfs f30,2080(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2080, temp.u32);
	// stb r31,2092(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2092, r31.u8);
	// stfs f31,2084(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2084, temp.u32);
	// addi r3,r1,2096
	ctx.r3.s64 = ctx.r1.s64 + 2096;
	// stfs f31,2088(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2088, temp.u32);
	// lwz r11,-1156(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1156);
	// stw r11,2064(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2064, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2104
	ctx.r3.s64 = ctx.r1.s64 + 2104;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,2124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2124, r30.u32);
	// stfs f0,2120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2120, temp.u32);
	// stw r28,2116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2116, r28.u32);
	// stfs f30,2128(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2128, temp.u32);
	// stb r31,2140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2140, r31.u8);
	// stfs f31,2132(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2132, temp.u32);
	// addi r3,r1,2144
	ctx.r3.s64 = ctx.r1.s64 + 2144;
	// stfs f31,2136(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2136, temp.u32);
	// lwz r11,-1152(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1152);
	// stw r11,2112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2112, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2152
	ctx.r3.s64 = ctx.r1.s64 + 2152;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r11,-1188(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1188);
	// addi r10,r10,-25824
	ctx.r10.s64 = ctx.r10.s64 + -25824;
	// stfs f0,2168(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2168, temp.u32);
	// stw r30,2172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2172, r30.u32);
	// stfs f30,2176(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2176, temp.u32);
	// stb r31,2188(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2188, r31.u8);
	// stfs f31,2180(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2180, temp.u32);
	// stw r10,2164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2164, ctx.r10.u32);
	// stfs f31,2184(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2184, temp.u32);
	// addi r3,r1,2192
	ctx.r3.s64 = ctx.r1.s64 + 2192;
	// stw r11,2160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2160, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2200
	ctx.r3.s64 = ctx.r1.s64 + 2200;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,2216(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2216, temp.u32);
	// stw r30,2220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2220, r30.u32);
	// addi r10,r10,-25844
	ctx.r10.s64 = ctx.r10.s64 + -25844;
	// stfs f30,2224(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2224, temp.u32);
	// stfs f31,2228(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2228, temp.u32);
	// stb r31,2236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2236, r31.u8);
	// stfs f31,2232(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2232, temp.u32);
	// stw r10,2212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2212, ctx.r10.u32);
	// addi r3,r1,2240
	ctx.r3.s64 = ctx.r1.s64 + 2240;
	// lwz r11,-1184(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1184);
	// stw r11,2208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2208, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2248
	ctx.r3.s64 = ctx.r1.s64 + 2248;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,2264(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2264, temp.u32);
	// stw r30,2268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2268, r30.u32);
	// addi r10,r10,-25860
	ctx.r10.s64 = ctx.r10.s64 + -25860;
	// stfs f30,2272(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2272, temp.u32);
	// stfs f31,2276(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2276, temp.u32);
	// stb r31,2284(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2284, r31.u8);
	// stfs f31,2280(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2280, temp.u32);
	// stw r10,2260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2260, ctx.r10.u32);
	// addi r3,r1,2288
	ctx.r3.s64 = ctx.r1.s64 + 2288;
	// lwz r11,-1244(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1244);
	// stw r11,2256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2256, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2296
	ctx.r3.s64 = ctx.r1.s64 + 2296;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,2312(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2312, temp.u32);
	// stw r30,2316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2316, r30.u32);
	// addi r10,r10,-25880
	ctx.r10.s64 = ctx.r10.s64 + -25880;
	// stfs f30,2320(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2320, temp.u32);
	// stfs f31,2324(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2324, temp.u32);
	// stb r31,2332(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2332, r31.u8);
	// stfs f31,2328(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2328, temp.u32);
	// stw r10,2308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2308, ctx.r10.u32);
	// addi r3,r1,2336
	ctx.r3.s64 = ctx.r1.s64 + 2336;
	// lwz r11,-1240(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1240);
	// stw r11,2304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2304, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2344
	ctx.r3.s64 = ctx.r1.s64 + 2344;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,2360(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2360, temp.u32);
	// stw r31,2364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2364, r31.u32);
	// addi r10,r10,-25904
	ctx.r10.s64 = ctx.r10.s64 + -25904;
	// stfs f30,2368(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2368, temp.u32);
	// stfs f31,2372(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2372, temp.u32);
	// stb r31,2380(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2380, r31.u8);
	// stfs f31,2376(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2376, temp.u32);
	// stw r10,2356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2356, ctx.r10.u32);
	// addi r3,r1,2384
	ctx.r3.s64 = ctx.r1.s64 + 2384;
	// lwz r11,-1236(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1236);
	// stw r11,2352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2352, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2392
	ctx.r3.s64 = ctx.r1.s64 + 2392;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,2408(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2408, temp.u32);
	// stw r30,2412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2412, r30.u32);
	// addi r10,r10,-25924
	ctx.r10.s64 = ctx.r10.s64 + -25924;
	// stfs f30,2416(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2416, temp.u32);
	// stfs f31,2420(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2420, temp.u32);
	// stb r31,2428(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2428, r31.u8);
	// stfs f31,2424(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2424, temp.u32);
	// stw r10,2404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2404, ctx.r10.u32);
	// addi r3,r1,2432
	ctx.r3.s64 = ctx.r1.s64 + 2432;
	// lwz r11,-1212(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1212);
	// stw r11,2400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2400, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2440
	ctx.r3.s64 = ctx.r1.s64 + 2440;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,2456(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2456, temp.u32);
	// stw r30,2460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2460, r30.u32);
	// addi r10,r10,-25952
	ctx.r10.s64 = ctx.r10.s64 + -25952;
	// stfs f30,2464(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2464, temp.u32);
	// stfs f31,2468(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2468, temp.u32);
	// stb r31,2476(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2476, r31.u8);
	// stfs f31,2472(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2472, temp.u32);
	// stw r10,2452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2452, ctx.r10.u32);
	// addi r3,r1,2480
	ctx.r3.s64 = ctx.r1.s64 + 2480;
	// lwz r11,-1208(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1208);
	// stw r11,2448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2448, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2488
	ctx.r3.s64 = ctx.r1.s64 + 2488;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,2504(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2504, temp.u32);
	// stw r30,2508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2508, r30.u32);
	// addi r10,r10,-25976
	ctx.r10.s64 = ctx.r10.s64 + -25976;
	// stfs f30,2512(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2512, temp.u32);
	// stfs f31,2516(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2516, temp.u32);
	// stb r31,2524(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2524, r31.u8);
	// stfs f31,2520(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2520, temp.u32);
	// stw r10,2500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2500, ctx.r10.u32);
	// addi r3,r1,2528
	ctx.r3.s64 = ctx.r1.s64 + 2528;
	// lwz r11,-1232(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1232);
	// stw r11,2496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2496, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2536
	ctx.r3.s64 = ctx.r1.s64 + 2536;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,2552(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2552, temp.u32);
	// stw r31,2556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2556, r31.u32);
	// addi r10,r10,-25996
	ctx.r10.s64 = ctx.r10.s64 + -25996;
	// stfs f30,2560(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2560, temp.u32);
	// stfs f31,2564(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2564, temp.u32);
	// stb r31,2572(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2572, r31.u8);
	// stfs f31,2568(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2568, temp.u32);
	// stw r10,2548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2548, ctx.r10.u32);
	// addi r3,r1,2576
	ctx.r3.s64 = ctx.r1.s64 + 2576;
	// lwz r11,-1228(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1228);
	// stw r11,2544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2544, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2584
	ctx.r3.s64 = ctx.r1.s64 + 2584;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,2604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2604, r30.u32);
	// stfs f0,2600(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2600, temp.u32);
	// stw r28,2596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2596, r28.u32);
	// stfs f30,2608(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2608, temp.u32);
	// stb r31,2620(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2620, r31.u8);
	// stfs f31,2612(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2612, temp.u32);
	// addi r3,r1,2624
	ctx.r3.s64 = ctx.r1.s64 + 2624;
	// stfs f31,2616(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2616, temp.u32);
	// lwz r11,-1224(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1224);
	// stw r11,2592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2592, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2632
	ctx.r3.s64 = ctx.r1.s64 + 2632;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,2652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2652, r30.u32);
	// stfs f0,2648(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2648, temp.u32);
	// stw r28,2644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2644, r28.u32);
	// stfs f30,2656(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2656, temp.u32);
	// stb r31,2668(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2668, r31.u8);
	// stfs f31,2660(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2660, temp.u32);
	// addi r3,r1,2672
	ctx.r3.s64 = ctx.r1.s64 + 2672;
	// stfs f31,2664(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2664, temp.u32);
	// lwz r11,-1220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1220);
	// stw r11,2640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2640, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2680
	ctx.r3.s64 = ctx.r1.s64 + 2680;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r28,2692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2692, r28.u32);
	// stfs f0,2696(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2696, temp.u32);
	// stw r30,2700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2700, r30.u32);
	// stfs f30,2704(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2704, temp.u32);
	// stb r31,2716(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2716, r31.u8);
	// stfs f31,2708(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2708, temp.u32);
	// addi r3,r1,2720
	ctx.r3.s64 = ctx.r1.s64 + 2720;
	// stfs f31,2712(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2712, temp.u32);
	// lwz r11,-1204(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1204);
	// stw r11,2688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2688, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2728
	ctx.r3.s64 = ctx.r1.s64 + 2728;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,2744(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2744, temp.u32);
	// stw r30,2748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2748, r30.u32);
	// addi r10,r10,-26016
	ctx.r10.s64 = ctx.r10.s64 + -26016;
	// stfs f30,2752(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2752, temp.u32);
	// stfs f31,2756(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2756, temp.u32);
	// stb r31,2764(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2764, r31.u8);
	// stfs f31,2760(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2760, temp.u32);
	// stw r10,2740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2740, ctx.r10.u32);
	// addi r3,r1,2768
	ctx.r3.s64 = ctx.r1.s64 + 2768;
	// lwz r11,-1196(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1196);
	// stw r11,2736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2736, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2776
	ctx.r3.s64 = ctx.r1.s64 + 2776;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,2796(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2796, r30.u32);
	// stfs f0,2792(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2792, temp.u32);
	// stw r28,2788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2788, r28.u32);
	// stfs f30,2800(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2800, temp.u32);
	// stb r31,2812(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2812, r31.u8);
	// stfs f31,2804(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2804, temp.u32);
	// addi r3,r1,2816
	ctx.r3.s64 = ctx.r1.s64 + 2816;
	// stfs f31,2808(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2808, temp.u32);
	// lwz r11,-1148(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1148);
	// stw r11,2784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2784, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2824
	ctx.r3.s64 = ctx.r1.s64 + 2824;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r24,-31954
	r24.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,2844(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2844, r30.u32);
	// stfs f0,2840(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2840, temp.u32);
	// stw r28,2836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2836, r28.u32);
	// stfs f30,2848(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2848, temp.u32);
	// stb r31,2860(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2860, r31.u8);
	// stfs f31,2852(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2852, temp.u32);
	// addi r3,r1,2864
	ctx.r3.s64 = ctx.r1.s64 + 2864;
	// lwz r11,-1248(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + -1248);
	// stfs f31,2856(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2856, temp.u32);
	// stw r11,2832(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2832, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2872
	ctx.r3.s64 = ctx.r1.s64 + 2872;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lwz r11,-1180(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1180);
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,2888(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2888, temp.u32);
	// stw r30,2892(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2892, r30.u32);
	// stfs f30,2896(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2896, temp.u32);
	// stw r28,2884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2884, r28.u32);
	// stfs f31,2900(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2900, temp.u32);
	// stb r31,2908(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2908, r31.u8);
	// stfs f31,2904(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2904, temp.u32);
	// addi r3,r1,2912
	ctx.r3.s64 = ctx.r1.s64 + 2912;
	// stw r11,2880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2880, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2920
	ctx.r3.s64 = ctx.r1.s64 + 2920;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,2940(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2940, r30.u32);
	// stfs f0,2936(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2936, temp.u32);
	// stw r28,2932(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2932, r28.u32);
	// stfs f30,2944(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2944, temp.u32);
	// stb r31,2956(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2956, r31.u8);
	// stfs f31,2948(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2948, temp.u32);
	// addi r3,r1,2960
	ctx.r3.s64 = ctx.r1.s64 + 2960;
	// stfs f31,2952(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2952, temp.u32);
	// lwz r11,-1120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1120);
	// stw r11,2928(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2928, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2968
	ctx.r3.s64 = ctx.r1.s64 + 2968;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r28,2980(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2980, r28.u32);
	// stfs f0,2984(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2984, temp.u32);
	// stw r30,2988(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2988, r30.u32);
	// stfs f30,2992(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2992, temp.u32);
	// stb r31,3004(r1)
	PPC_STORE_U8(ctx.r1.u32 + 3004, r31.u8);
	// stfs f31,2996(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2996, temp.u32);
	// addi r3,r1,3008
	ctx.r3.s64 = ctx.r1.s64 + 3008;
	// stfs f31,3000(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3000, temp.u32);
	// lwz r11,-1112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1112);
	// stw r11,2976(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2976, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,3016
	ctx.r3.s64 = ctx.r1.s64 + 3016;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,3036(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3036, r30.u32);
	// stfs f0,3032(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3032, temp.u32);
	// stw r28,3028(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3028, r28.u32);
	// stfs f30,3040(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3040, temp.u32);
	// stb r31,3052(r1)
	PPC_STORE_U8(ctx.r1.u32 + 3052, r31.u8);
	// stfs f31,3044(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3044, temp.u32);
	// addi r3,r1,3056
	ctx.r3.s64 = ctx.r1.s64 + 3056;
	// stfs f31,3048(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3048, temp.u32);
	// lwz r11,-1104(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1104);
	// stw r11,3024(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3024, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,3064
	ctx.r3.s64 = ctx.r1.s64 + 3064;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r31,3084(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3084, r31.u32);
	// stfs f0,3080(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3080, temp.u32);
	// stw r28,3076(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3076, r28.u32);
	// stfs f30,3088(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3088, temp.u32);
	// stb r31,3100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 3100, r31.u8);
	// stfs f31,3092(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3092, temp.u32);
	// addi r3,r1,3104
	ctx.r3.s64 = ctx.r1.s64 + 3104;
	// stfs f31,3096(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3096, temp.u32);
	// lwz r11,-1100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1100);
	// stw r11,3072(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3072, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,3112
	ctx.r3.s64 = ctx.r1.s64 + 3112;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,3128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3128, temp.u32);
	// stfs f30,3136(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3136, temp.u32);
	// stfs f31,3140(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3140, temp.u32);
	// stfs f31,3144(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3144, temp.u32);
	// lwz r11,-1096(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1096);
	// stw r30,3132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3132, r30.u32);
	// addi r3,r1,3152
	ctx.r3.s64 = ctx.r1.s64 + 3152;
	// stw r28,3124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3124, r28.u32);
	// stb r31,3148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 3148, r31.u8);
	// stw r11,3120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3120, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,3160
	ctx.r3.s64 = ctx.r1.s64 + 3160;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r31,3180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3180, r31.u32);
	// stfs f0,3176(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3176, temp.u32);
	// stw r28,3172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3172, r28.u32);
	// stfs f30,3184(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3184, temp.u32);
	// stb r31,3196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 3196, r31.u8);
	// stfs f31,3188(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3188, temp.u32);
	// addi r3,r1,3200
	ctx.r3.s64 = ctx.r1.s64 + 3200;
	// stfs f31,3192(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3192, temp.u32);
	// lwz r11,-1092(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1092);
	// stw r11,3168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3168, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,3208
	ctx.r3.s64 = ctx.r1.s64 + 3208;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r28,3220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3220, r28.u32);
	// stfs f0,3224(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3224, temp.u32);
	// stw r30,3228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3228, r30.u32);
	// stfs f30,3232(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3232, temp.u32);
	// stb r31,3244(r1)
	PPC_STORE_U8(ctx.r1.u32 + 3244, r31.u8);
	// stfs f31,3236(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3236, temp.u32);
	// addi r3,r1,3248
	ctx.r3.s64 = ctx.r1.s64 + 3248;
	// stfs f31,3240(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3240, temp.u32);
	// lwz r11,-1088(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1088);
	// stw r11,3216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3216, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,3256
	ctx.r3.s64 = ctx.r1.s64 + 3256;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,3276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3276, r30.u32);
	// stfs f0,3272(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3272, temp.u32);
	// stw r28,3268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3268, r28.u32);
	// stfs f30,3280(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3280, temp.u32);
	// stb r31,3292(r1)
	PPC_STORE_U8(ctx.r1.u32 + 3292, r31.u8);
	// stfs f31,3284(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3284, temp.u32);
	// addi r3,r1,3296
	ctx.r3.s64 = ctx.r1.s64 + 3296;
	// stfs f31,3288(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3288, temp.u32);
	// lwz r11,-1084(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1084);
	// stw r11,3264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3264, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,3304
	ctx.r3.s64 = ctx.r1.s64 + 3304;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,3324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3324, r30.u32);
	// stfs f0,3320(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3320, temp.u32);
	// stw r28,3316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3316, r28.u32);
	// stfs f30,3328(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3328, temp.u32);
	// stb r31,3340(r1)
	PPC_STORE_U8(ctx.r1.u32 + 3340, r31.u8);
	// stfs f31,3332(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3332, temp.u32);
	// addi r3,r1,3344
	ctx.r3.s64 = ctx.r1.s64 + 3344;
	// stfs f31,3336(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3336, temp.u32);
	// lwz r11,-1080(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1080);
	// stw r11,3312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3312, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,3352
	ctx.r3.s64 = ctx.r1.s64 + 3352;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r31,3372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3372, r31.u32);
	// stfs f0,3368(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3368, temp.u32);
	// stw r28,3364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3364, r28.u32);
	// stfs f30,3376(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3376, temp.u32);
	// stb r31,3388(r1)
	PPC_STORE_U8(ctx.r1.u32 + 3388, r31.u8);
	// stfs f31,3380(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3380, temp.u32);
	// addi r3,r1,3392
	ctx.r3.s64 = ctx.r1.s64 + 3392;
	// stfs f31,3384(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3384, temp.u32);
	// lwz r11,-1076(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1076);
	// stw r11,3360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3360, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,3400
	ctx.r3.s64 = ctx.r1.s64 + 3400;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,3420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3420, r30.u32);
	// stfs f0,3416(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3416, temp.u32);
	// stw r28,3412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3412, r28.u32);
	// stfs f30,3424(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3424, temp.u32);
	// stb r31,3436(r1)
	PPC_STORE_U8(ctx.r1.u32 + 3436, r31.u8);
	// stfs f31,3428(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3428, temp.u32);
	// addi r3,r1,3440
	ctx.r3.s64 = ctx.r1.s64 + 3440;
	// stfs f31,3432(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3432, temp.u32);
	// lwz r11,-1072(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1072);
	// stw r11,3408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3408, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,3448
	ctx.r3.s64 = ctx.r1.s64 + 3448;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r28,3460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3460, r28.u32);
	// addi r11,r11,-26036
	r11.s64 = r11.s64 + -26036;
	// stfs f0,3464(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3464, temp.u32);
	// stfs f30,3472(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3472, temp.u32);
	// stw r30,3468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3468, r30.u32);
	// stfs f31,3476(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3476, temp.u32);
	// stw r11,3456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3456, r11.u32);
	// stfs f31,3480(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3480, temp.u32);
	// stb r31,3484(r1)
	PPC_STORE_U8(ctx.r1.u32 + 3484, r31.u8);
	// addi r3,r1,3488
	ctx.r3.s64 = ctx.r1.s64 + 3488;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,3496
	ctx.r3.s64 = ctx.r1.s64 + 3496;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r28,3508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3508, r28.u32);
	// addi r11,r11,-26056
	r11.s64 = r11.s64 + -26056;
	// stfs f0,3512(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3512, temp.u32);
	// stfs f30,3520(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3520, temp.u32);
	// stw r30,3516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3516, r30.u32);
	// stfs f31,3524(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3524, temp.u32);
	// stw r11,3504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3504, r11.u32);
	// stfs f31,3528(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3528, temp.u32);
	// stb r31,3532(r1)
	PPC_STORE_U8(ctx.r1.u32 + 3532, r31.u8);
	// addi r3,r1,3536
	ctx.r3.s64 = ctx.r1.s64 + 3536;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,3544
	ctx.r3.s64 = ctx.r1.s64 + 3544;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r28,3556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3556, r28.u32);
	// addi r11,r11,-26076
	r11.s64 = r11.s64 + -26076;
	// stfs f0,3560(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3560, temp.u32);
	// stfs f30,3568(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3568, temp.u32);
	// stw r30,3564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3564, r30.u32);
	// stfs f31,3572(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3572, temp.u32);
	// stw r11,3552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3552, r11.u32);
	// stfs f31,3576(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3576, temp.u32);
	// stb r31,3580(r1)
	PPC_STORE_U8(ctx.r1.u32 + 3580, r31.u8);
	// addi r3,r1,3584
	ctx.r3.s64 = ctx.r1.s64 + 3584;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,3592
	ctx.r3.s64 = ctx.r1.s64 + 3592;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r28,3604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3604, r28.u32);
	// addi r11,r11,-26100
	r11.s64 = r11.s64 + -26100;
	// stfs f0,3608(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3608, temp.u32);
	// stfs f30,3616(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3616, temp.u32);
	// stw r30,3612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3612, r30.u32);
	// stfs f31,3620(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3620, temp.u32);
	// stw r11,3600(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3600, r11.u32);
	// stfs f31,3624(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3624, temp.u32);
	// stb r31,3628(r1)
	PPC_STORE_U8(ctx.r1.u32 + 3628, r31.u8);
	// addi r3,r1,3632
	ctx.r3.s64 = ctx.r1.s64 + 3632;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,3640
	ctx.r3.s64 = ctx.r1.s64 + 3640;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// li r5,74
	ctx.r5.s64 = 74;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,288(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 288);
	// bl 0x827f05d0
	sub_827F05D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827fef80
	sub_827FEF80(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,288(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 288);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x827f05d8
	sub_827F05D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-1288(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + -1288);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,-1248(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + -1248);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,288(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 288);
	// bl 0x827f01b0
	sub_827F01B0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-1284(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + -1284);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,288(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 288);
	// bl 0x827f03c8
	sub_827F03C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r1,r1,3744
	ctx.r1.s64 = ctx.r1.s64 + 3744;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82816118"))) PPC_WEAK_FUNC(sub_82816118);
PPC_FUNC_IMPL(__imp__sub_82816118) {
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
	// stwu r1,-3488(r1)
	ea = -3488 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-26168
	ctx.r4.s64 = r11.s64 + -26168;
	// li r5,489
	ctx.r5.s64 = 489;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82816160
	if (cr0.eq) goto loc_82816160;
	// bl 0x827f0d28
	sub_827F0D28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82816164
	goto loc_82816164;
loc_82816160:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_82816164:
	// addi r3,r29,288
	ctx.r3.s64 = r29.s64 + 288;
	// bl 0x82801240
	sub_82801240(ctx, base);
	// lwz r10,328(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 328);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-3092
	r11.s64 = r11.s64 + -3092;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// lwz r28,288(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 288);
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lis r27,-32256
	r27.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lfs f1,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x827f08f0
	sub_827F08F0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// stb r31,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, r31.u8);
	// li r30,1
	r30.s64 = 1;
	// addi r8,r8,-24928
	ctx.r8.s64 = ctx.r8.s64 + -24928;
	// lfs f30,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f30.f64 = double(temp.f32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// lfs f31,-24780(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24780);
	f31.f64 = double(temp.f32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stfs f30,112(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r11,-22752(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22752);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,152(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r30.u32);
	// addi r10,r10,-24948
	ctx.r10.s64 = ctx.r10.s64 + -24948;
	// stfs f30,160(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, r31.u8);
	// stfs f31,168(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r11,-22748(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22748);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,200(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stw r30,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r30.u32);
	// addi r28,r10,-24968
	r28.s64 = ctx.r10.s64 + -24968;
	// stfs f30,208(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f31,212(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stb r31,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, r31.u8);
	// stfs f31,216(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stw r28,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r28.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r11,-22724(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22724);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lwz r11,-22720(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22720);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, r30.u32);
	// addi r26,r10,-24992
	r26.s64 = ctx.r10.s64 + -24992;
	// stfs f0,248(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f30,256(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stb r31,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, r31.u8);
	// stfs f31,260(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stw r26,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, r26.u32);
	// stfs f31,264(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r11.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r28,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, r28.u32);
	// stfs f0,296(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stw r30,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, r30.u32);
	// stfs f30,304(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// stb r31,316(r1)
	PPC_STORE_U8(ctx.r1.u32 + 316, r31.u8);
	// stfs f31,308(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stfs f31,312(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// lwz r11,-22716(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22716);
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, r30.u32);
	// stfs f0,344(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// stw r26,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, r26.u32);
	// stfs f30,352(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// stb r31,364(r1)
	PPC_STORE_U8(ctx.r1.u32 + 364, r31.u8);
	// stfs f31,356(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stfs f31,360(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// lwz r11,-22712(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22712);
	// stw r11,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,392(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// stw r30,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, r30.u32);
	// addi r28,r10,-25004
	r28.s64 = ctx.r10.s64 + -25004;
	// stfs f30,400(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// stfs f31,404(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// stb r31,412(r1)
	PPC_STORE_U8(ctx.r1.u32 + 412, r31.u8);
	// stfs f31,408(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 408, temp.u32);
	// stw r28,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, r28.u32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lwz r11,-22708(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22708);
	// stw r11,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,424
	ctx.r3.s64 = ctx.r1.s64 + 424;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,440(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 440, temp.u32);
	// stw r31,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, r31.u32);
	// addi r10,r10,-25020
	ctx.r10.s64 = ctx.r10.s64 + -25020;
	// stfs f30,448(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 448, temp.u32);
	// stfs f31,452(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 452, temp.u32);
	// stb r31,460(r1)
	PPC_STORE_U8(ctx.r1.u32 + 460, r31.u8);
	// stfs f31,456(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 456, temp.u32);
	// stw r10,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r10.u32);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// lwz r11,-22700(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22700);
	// stw r11,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lwz r11,-22692(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22692);
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,488(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 488, temp.u32);
	// stw r30,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, r30.u32);
	// stfs f30,496(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 496, temp.u32);
	// stw r28,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, r28.u32);
	// stfs f31,500(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 500, temp.u32);
	// stb r31,508(r1)
	PPC_STORE_U8(ctx.r1.u32 + 508, r31.u8);
	// stfs f31,504(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 504, temp.u32);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// stw r11,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,520
	ctx.r3.s64 = ctx.r1.s64 + 520;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, r30.u32);
	// stfs f0,536(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 536, temp.u32);
	// stw r28,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, r28.u32);
	// stfs f30,544(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 544, temp.u32);
	// stb r31,556(r1)
	PPC_STORE_U8(ctx.r1.u32 + 556, r31.u8);
	// stfs f31,548(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 548, temp.u32);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// stfs f31,552(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 552, temp.u32);
	// lwz r11,-22688(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22688);
	// stw r11,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,568
	ctx.r3.s64 = ctx.r1.s64 + 568;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,584(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 584, temp.u32);
	// stw r30,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, r30.u32);
	// addi r10,r10,-25040
	ctx.r10.s64 = ctx.r10.s64 + -25040;
	// stfs f30,592(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 592, temp.u32);
	// stfs f31,596(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 596, temp.u32);
	// stb r31,604(r1)
	PPC_STORE_U8(ctx.r1.u32 + 604, r31.u8);
	// stfs f31,600(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 600, temp.u32);
	// stw r10,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r10.u32);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// lwz r11,-22684(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22684);
	// stw r11,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,616
	ctx.r3.s64 = ctx.r1.s64 + 616;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, r30.u32);
	// stfs f0,632(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 632, temp.u32);
	// stw r28,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, r28.u32);
	// stfs f30,640(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 640, temp.u32);
	// stb r31,652(r1)
	PPC_STORE_U8(ctx.r1.u32 + 652, r31.u8);
	// stfs f31,644(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 644, temp.u32);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// stfs f31,648(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 648, temp.u32);
	// lwz r11,-22680(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22680);
	// stw r11,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,664
	ctx.r3.s64 = ctx.r1.s64 + 664;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,680(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 680, temp.u32);
	// stw r30,684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 684, r30.u32);
	// addi r10,r10,-25060
	ctx.r10.s64 = ctx.r10.s64 + -25060;
	// stfs f30,688(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 688, temp.u32);
	// stfs f31,692(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 692, temp.u32);
	// stb r31,700(r1)
	PPC_STORE_U8(ctx.r1.u32 + 700, r31.u8);
	// stfs f31,696(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 696, temp.u32);
	// stw r10,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r10.u32);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// lwz r11,-22676(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22676);
	// stw r11,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,712
	ctx.r3.s64 = ctx.r1.s64 + 712;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,728(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 728, temp.u32);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lwz r11,-22672(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22672);
	// stfs f30,736(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 736, temp.u32);
	// stfs f31,740(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 740, temp.u32);
	// stw r30,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, r30.u32);
	// stfs f31,744(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 744, temp.u32);
	// stw r28,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, r28.u32);
	// stb r31,748(r1)
	PPC_STORE_U8(ctx.r1.u32 + 748, r31.u8);
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// stw r11,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,760
	ctx.r3.s64 = ctx.r1.s64 + 760;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,776(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 776, temp.u32);
	// stw r30,780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 780, r30.u32);
	// addi r10,r10,-25080
	ctx.r10.s64 = ctx.r10.s64 + -25080;
	// stfs f30,784(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 784, temp.u32);
	// stfs f31,788(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 788, temp.u32);
	// stb r31,796(r1)
	PPC_STORE_U8(ctx.r1.u32 + 796, r31.u8);
	// stfs f31,792(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 792, temp.u32);
	// stw r10,772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 772, ctx.r10.u32);
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// lwz r11,-22668(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22668);
	// stw r11,768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 768, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,808
	ctx.r3.s64 = ctx.r1.s64 + 808;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,828(r1)
	PPC_STORE_U32(ctx.r1.u32 + 828, r30.u32);
	// stfs f0,824(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 824, temp.u32);
	// stw r28,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, r28.u32);
	// stfs f30,832(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 832, temp.u32);
	// stb r31,844(r1)
	PPC_STORE_U8(ctx.r1.u32 + 844, r31.u8);
	// stfs f31,836(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 836, temp.u32);
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// stfs f31,840(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 840, temp.u32);
	// lwz r11,-22664(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22664);
	// stw r11,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,856
	ctx.r3.s64 = ctx.r1.s64 + 856;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r31,876(r1)
	PPC_STORE_U32(ctx.r1.u32 + 876, r31.u32);
	// stfs f0,872(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 872, temp.u32);
	// stw r28,868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 868, r28.u32);
	// stfs f30,880(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 880, temp.u32);
	// stb r31,892(r1)
	PPC_STORE_U8(ctx.r1.u32 + 892, r31.u8);
	// stfs f31,884(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 884, temp.u32);
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// stfs f31,888(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 888, temp.u32);
	// lwz r11,-22660(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22660);
	// stw r11,864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 864, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,904
	ctx.r3.s64 = ctx.r1.s64 + 904;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,920(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 920, temp.u32);
	// stw r30,924(r1)
	PPC_STORE_U32(ctx.r1.u32 + 924, r30.u32);
	// addi r10,r10,-25512
	ctx.r10.s64 = ctx.r10.s64 + -25512;
	// stfs f30,928(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 928, temp.u32);
	// stfs f31,932(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 932, temp.u32);
	// stb r31,940(r1)
	PPC_STORE_U8(ctx.r1.u32 + 940, r31.u8);
	// stfs f31,936(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 936, temp.u32);
	// stw r10,916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 916, ctx.r10.u32);
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// lwz r11,-22744(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22744);
	// stw r11,912(r1)
	PPC_STORE_U32(ctx.r1.u32 + 912, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,952
	ctx.r3.s64 = ctx.r1.s64 + 952;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// addi r10,r10,-25536
	ctx.r10.s64 = ctx.r10.s64 + -25536;
	// lwz r11,-22740(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22740);
	// stfs f0,968(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 968, temp.u32);
	// stw r30,972(r1)
	PPC_STORE_U32(ctx.r1.u32 + 972, r30.u32);
	// stfs f30,976(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 976, temp.u32);
	// stw r10,964(r1)
	PPC_STORE_U32(ctx.r1.u32 + 964, ctx.r10.u32);
	// stfs f31,980(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 980, temp.u32);
	// stb r31,988(r1)
	PPC_STORE_U8(ctx.r1.u32 + 988, r31.u8);
	// stfs f31,984(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 984, temp.u32);
	// stw r11,960(r1)
	PPC_STORE_U32(ctx.r1.u32 + 960, r11.u32);
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1000
	ctx.r3.s64 = ctx.r1.s64 + 1000;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1016(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1016, temp.u32);
	// stw r30,1020(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1020, r30.u32);
	// addi r10,r10,-25556
	ctx.r10.s64 = ctx.r10.s64 + -25556;
	// stfs f30,1024(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1024, temp.u32);
	// stfs f31,1028(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1028, temp.u32);
	// stb r31,1036(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1036, r31.u8);
	// stfs f31,1032(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1032, temp.u32);
	// stw r10,1012(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1012, ctx.r10.u32);
	// addi r3,r1,1040
	ctx.r3.s64 = ctx.r1.s64 + 1040;
	// lwz r11,-22736(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22736);
	// stw r11,1008(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1008, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1048
	ctx.r3.s64 = ctx.r1.s64 + 1048;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1064(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1064, temp.u32);
	// stw r30,1068(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1068, r30.u32);
	// addi r10,r10,-25580
	ctx.r10.s64 = ctx.r10.s64 + -25580;
	// stfs f30,1072(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1072, temp.u32);
	// stfs f31,1076(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1076, temp.u32);
	// stb r31,1084(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1084, r31.u8);
	// stfs f31,1080(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1080, temp.u32);
	// stw r10,1060(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1060, ctx.r10.u32);
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// lwz r11,-22732(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22732);
	// stw r11,1056(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1056, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1096
	ctx.r3.s64 = ctx.r1.s64 + 1096;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1112, temp.u32);
	// stw r30,1116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1116, r30.u32);
	// addi r10,r10,-25600
	ctx.r10.s64 = ctx.r10.s64 + -25600;
	// stfs f30,1120(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1120, temp.u32);
	// stfs f31,1124(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1124, temp.u32);
	// stb r31,1132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1132, r31.u8);
	// stfs f31,1128(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1128, temp.u32);
	// stw r10,1108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1108, ctx.r10.u32);
	// addi r3,r1,1136
	ctx.r3.s64 = ctx.r1.s64 + 1136;
	// lwz r11,-22728(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22728);
	// stw r11,1104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1104, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1144
	ctx.r3.s64 = ctx.r1.s64 + 1144;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r31,1164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1164, r31.u32);
	// stfs f0,1160(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1160, temp.u32);
	// stw r28,1156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1156, r28.u32);
	// stfs f30,1168(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1168, temp.u32);
	// stb r31,1180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1180, r31.u8);
	// stfs f31,1172(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1172, temp.u32);
	// addi r3,r1,1184
	ctx.r3.s64 = ctx.r1.s64 + 1184;
	// stfs f31,1176(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1176, temp.u32);
	// lwz r11,-1288(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1288);
	// stw r11,1152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1152, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1192
	ctx.r3.s64 = ctx.r1.s64 + 1192;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// lis r26,-31954
	r26.s64 = -2094137344;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r10,r11,-25092
	ctx.r10.s64 = r11.s64 + -25092;
	// lwz r11,-1284(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -1284);
	// stfs f0,1208(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1208, temp.u32);
	// stw r31,1212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1212, r31.u32);
	// stfs f30,1216(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1216, temp.u32);
	// stb r31,1228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1228, r31.u8);
	// stfs f31,1220(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1220, temp.u32);
	// stw r10,1204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1204, ctx.r10.u32);
	// stfs f31,1224(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1224, temp.u32);
	// addi r3,r1,1232
	ctx.r3.s64 = ctx.r1.s64 + 1232;
	// stw r11,1200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1200, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1240
	ctx.r3.s64 = ctx.r1.s64 + 1240;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1256(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1256, temp.u32);
	// stw r31,1260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1260, r31.u32);
	// addi r10,r10,-25108
	ctx.r10.s64 = ctx.r10.s64 + -25108;
	// stfs f30,1264(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1264, temp.u32);
	// stfs f31,1268(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1268, temp.u32);
	// stb r31,1276(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1276, r31.u8);
	// stfs f31,1272(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1272, temp.u32);
	// stw r10,1252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1252, ctx.r10.u32);
	// addi r3,r1,1280
	ctx.r3.s64 = ctx.r1.s64 + 1280;
	// lwz r11,-1268(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1268);
	// stw r11,1248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1248, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1288
	ctx.r3.s64 = ctx.r1.s64 + 1288;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1304(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1304, temp.u32);
	// stw r30,1308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1308, r30.u32);
	// addi r10,r10,-25124
	ctx.r10.s64 = ctx.r10.s64 + -25124;
	// stfs f30,1312(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1312, temp.u32);
	// stfs f31,1316(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1316, temp.u32);
	// stb r31,1324(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1324, r31.u8);
	// stfs f31,1320(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1320, temp.u32);
	// stw r10,1300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1300, ctx.r10.u32);
	// addi r3,r1,1328
	ctx.r3.s64 = ctx.r1.s64 + 1328;
	// lwz r11,-1264(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1264);
	// stw r11,1296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1296, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1336
	ctx.r3.s64 = ctx.r1.s64 + 1336;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1352(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1352, temp.u32);
	// stw r30,1356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1356, r30.u32);
	// addi r10,r10,-25140
	ctx.r10.s64 = ctx.r10.s64 + -25140;
	// stfs f30,1360(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1360, temp.u32);
	// stfs f31,1364(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1364, temp.u32);
	// stb r31,1372(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1372, r31.u8);
	// stfs f31,1368(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1368, temp.u32);
	// stw r10,1348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1348, ctx.r10.u32);
	// addi r3,r1,1376
	ctx.r3.s64 = ctx.r1.s64 + 1376;
	// lwz r11,-1276(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1276);
	// stw r11,1344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1344, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1384
	ctx.r3.s64 = ctx.r1.s64 + 1384;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1400(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1400, temp.u32);
	// stw r30,1404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1404, r30.u32);
	// addi r10,r10,-25152
	ctx.r10.s64 = ctx.r10.s64 + -25152;
	// stfs f30,1408(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1408, temp.u32);
	// stfs f31,1412(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1412, temp.u32);
	// stb r31,1420(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1420, r31.u8);
	// stfs f31,1416(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1416, temp.u32);
	// stw r10,1396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1396, ctx.r10.u32);
	// addi r3,r1,1424
	ctx.r3.s64 = ctx.r1.s64 + 1424;
	// lwz r11,-1272(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1272);
	// stw r11,1392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1392, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1432
	ctx.r3.s64 = ctx.r1.s64 + 1432;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,1452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1452, r30.u32);
	// stfs f0,1448(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1448, temp.u32);
	// stw r28,1444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1444, r28.u32);
	// stfs f30,1456(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1456, temp.u32);
	// stb r31,1468(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1468, r31.u8);
	// stfs f31,1460(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1460, temp.u32);
	// addi r3,r1,1472
	ctx.r3.s64 = ctx.r1.s64 + 1472;
	// stfs f31,1464(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1464, temp.u32);
	// lwz r11,-1280(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1280);
	// stw r11,1440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1440, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1480
	ctx.r3.s64 = ctx.r1.s64 + 1480;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1496(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1496, temp.u32);
	// stw r30,1500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1500, r30.u32);
	// addi r25,r10,-25172
	r25.s64 = ctx.r10.s64 + -25172;
	// stfs f30,1504(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1504, temp.u32);
	// stfs f31,1508(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1508, temp.u32);
	// stb r31,1516(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1516, r31.u8);
	// stfs f31,1512(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1512, temp.u32);
	// stw r25,1492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1492, r25.u32);
	// addi r3,r1,1520
	ctx.r3.s64 = ctx.r1.s64 + 1520;
	// lwz r11,-1144(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1144);
	// stw r11,1488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1488, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1528
	ctx.r3.s64 = ctx.r1.s64 + 1528;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1544(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1544, temp.u32);
	// stw r31,1548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1548, r31.u32);
	// addi r10,r10,-25192
	ctx.r10.s64 = ctx.r10.s64 + -25192;
	// stfs f30,1552(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1552, temp.u32);
	// stfs f31,1556(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1556, temp.u32);
	// stb r31,1564(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1564, r31.u8);
	// stfs f31,1560(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1560, temp.u32);
	// stw r10,1540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1540, ctx.r10.u32);
	// addi r3,r1,1568
	ctx.r3.s64 = ctx.r1.s64 + 1568;
	// lwz r11,-1140(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1140);
	// stw r11,1536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1536, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1576
	ctx.r3.s64 = ctx.r1.s64 + 1576;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1592(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1592, temp.u32);
	// stw r30,1596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1596, r30.u32);
	// addi r10,r10,-25212
	ctx.r10.s64 = ctx.r10.s64 + -25212;
	// stfs f30,1600(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1600, temp.u32);
	// stfs f31,1604(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1604, temp.u32);
	// stb r31,1612(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1612, r31.u8);
	// stfs f31,1608(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1608, temp.u32);
	// stw r10,1588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1588, ctx.r10.u32);
	// addi r3,r1,1616
	ctx.r3.s64 = ctx.r1.s64 + 1616;
	// lwz r11,-1136(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1136);
	// stw r11,1584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1584, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1624
	ctx.r3.s64 = ctx.r1.s64 + 1624;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// addi r11,r11,-25232
	r11.s64 = r11.s64 + -25232;
	// stfs f0,1640(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1640, temp.u32);
	// stfs f30,1648(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1648, temp.u32);
	// stw r30,1644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1644, r30.u32);
	// stw r11,1636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1636, r11.u32);
	// stfs f31,1652(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1652, temp.u32);
	// stfs f31,1656(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1656, temp.u32);
	// addi r3,r1,1664
	ctx.r3.s64 = ctx.r1.s64 + 1664;
	// stb r31,1660(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1660, r31.u8);
	// lwz r11,-1132(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1132);
	// stw r11,1632(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1632, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1672
	ctx.r3.s64 = ctx.r1.s64 + 1672;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1688(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1688, temp.u32);
	// stw r30,1692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1692, r30.u32);
	// addi r10,r10,-25252
	ctx.r10.s64 = ctx.r10.s64 + -25252;
	// stfs f30,1696(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1696, temp.u32);
	// stfs f31,1700(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1700, temp.u32);
	// stb r31,1708(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1708, r31.u8);
	// stfs f31,1704(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1704, temp.u32);
	// stw r10,1684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1684, ctx.r10.u32);
	// addi r3,r1,1712
	ctx.r3.s64 = ctx.r1.s64 + 1712;
	// lwz r11,-1128(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1128);
	// stw r11,1680(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1680, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1720
	ctx.r3.s64 = ctx.r1.s64 + 1720;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,1740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1740, r30.u32);
	// stfs f0,1736(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1736, temp.u32);
	// stw r25,1732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1732, r25.u32);
	// stfs f30,1744(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1744, temp.u32);
	// stb r31,1756(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1756, r31.u8);
	// stfs f31,1748(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1748, temp.u32);
	// addi r3,r1,1760
	ctx.r3.s64 = ctx.r1.s64 + 1760;
	// stfs f31,1752(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1752, temp.u32);
	// lwz r11,-1124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1124);
	// stw r11,1728(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1728, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1768
	ctx.r3.s64 = ctx.r1.s64 + 1768;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,1788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1788, r30.u32);
	// stfs f0,1784(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1784, temp.u32);
	// stw r28,1780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1780, r28.u32);
	// stfs f30,1792(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1792, temp.u32);
	// stb r31,1804(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1804, r31.u8);
	// stfs f31,1796(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1796, temp.u32);
	// addi r3,r1,1808
	ctx.r3.s64 = ctx.r1.s64 + 1808;
	// stfs f31,1800(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1800, temp.u32);
	// lwz r11,-1172(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1172);
	// stw r11,1776(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1776, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1816
	ctx.r3.s64 = ctx.r1.s64 + 1816;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,1832(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1832, temp.u32);
	// stw r31,1836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1836, r31.u32);
	// addi r25,r10,-25264
	r25.s64 = ctx.r10.s64 + -25264;
	// stfs f30,1840(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1840, temp.u32);
	// stfs f31,1844(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1844, temp.u32);
	// stb r31,1852(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1852, r31.u8);
	// stfs f31,1848(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1848, temp.u32);
	// stw r25,1828(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1828, r25.u32);
	// addi r3,r1,1856
	ctx.r3.s64 = ctx.r1.s64 + 1856;
	// lwz r11,-1168(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1168);
	// stw r11,1824(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1824, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1864
	ctx.r3.s64 = ctx.r1.s64 + 1864;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,1884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1884, r30.u32);
	// stfs f0,1880(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1880, temp.u32);
	// stw r28,1876(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1876, r28.u32);
	// stfs f30,1888(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1888, temp.u32);
	// stb r31,1900(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1900, r31.u8);
	// stfs f31,1892(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1892, temp.u32);
	// addi r3,r1,1904
	ctx.r3.s64 = ctx.r1.s64 + 1904;
	// stfs f31,1896(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1896, temp.u32);
	// lwz r11,-1164(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1164);
	// stw r11,1872(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1872, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1912
	ctx.r3.s64 = ctx.r1.s64 + 1912;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,1932(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1932, r30.u32);
	// stfs f0,1928(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1928, temp.u32);
	// stw r28,1924(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1924, r28.u32);
	// stfs f30,1936(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1936, temp.u32);
	// stb r31,1948(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1948, r31.u8);
	// stfs f31,1940(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1940, temp.u32);
	// addi r3,r1,1952
	ctx.r3.s64 = ctx.r1.s64 + 1952;
	// stfs f31,1944(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1944, temp.u32);
	// lwz r11,-1160(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1160);
	// stw r11,1920(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1920, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,1960
	ctx.r3.s64 = ctx.r1.s64 + 1960;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r31,1980(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1980, r31.u32);
	// stfs f0,1976(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1976, temp.u32);
	// stw r28,1972(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1972, r28.u32);
	// stfs f30,1984(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1984, temp.u32);
	// stb r31,1996(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1996, r31.u8);
	// stfs f31,1988(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1988, temp.u32);
	// addi r3,r1,2000
	ctx.r3.s64 = ctx.r1.s64 + 2000;
	// stfs f31,1992(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1992, temp.u32);
	// lwz r11,-1176(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1176);
	// stw r11,1968(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1968, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2008
	ctx.r3.s64 = ctx.r1.s64 + 2008;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,2028(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2028, r30.u32);
	// stfs f0,2024(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2024, temp.u32);
	// stw r25,2020(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2020, r25.u32);
	// stfs f30,2032(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2032, temp.u32);
	// stb r31,2044(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2044, r31.u8);
	// stfs f31,2036(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2036, temp.u32);
	// addi r3,r1,2048
	ctx.r3.s64 = ctx.r1.s64 + 2048;
	// stfs f31,2040(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2040, temp.u32);
	// lwz r11,-1156(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1156);
	// stw r11,2016(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2016, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2056
	ctx.r3.s64 = ctx.r1.s64 + 2056;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,2076(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2076, r30.u32);
	// stfs f0,2072(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2072, temp.u32);
	// stw r28,2068(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2068, r28.u32);
	// stfs f30,2080(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2080, temp.u32);
	// stb r31,2092(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2092, r31.u8);
	// stfs f31,2084(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2084, temp.u32);
	// addi r3,r1,2096
	ctx.r3.s64 = ctx.r1.s64 + 2096;
	// stfs f31,2088(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2088, temp.u32);
	// lwz r11,-1152(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1152);
	// stw r11,2064(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2064, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2104
	ctx.r3.s64 = ctx.r1.s64 + 2104;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,2120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2120, temp.u32);
	// stw r30,2124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2124, r30.u32);
	// addi r10,r10,-25284
	ctx.r10.s64 = ctx.r10.s64 + -25284;
	// stfs f30,2128(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2128, temp.u32);
	// stfs f31,2132(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2132, temp.u32);
	// stb r31,2140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2140, r31.u8);
	// stfs f31,2136(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2136, temp.u32);
	// stw r10,2116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2116, ctx.r10.u32);
	// addi r3,r1,2144
	ctx.r3.s64 = ctx.r1.s64 + 2144;
	// lwz r11,-1188(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1188);
	// stw r11,2112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2112, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2152
	ctx.r3.s64 = ctx.r1.s64 + 2152;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r11,-1184(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1184);
	// addi r10,r10,-25304
	ctx.r10.s64 = ctx.r10.s64 + -25304;
	// stfs f0,2168(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2168, temp.u32);
	// stw r30,2172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2172, r30.u32);
	// stfs f30,2176(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2176, temp.u32);
	// stb r31,2188(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2188, r31.u8);
	// stfs f31,2180(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2180, temp.u32);
	// stw r10,2164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2164, ctx.r10.u32);
	// stfs f31,2184(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2184, temp.u32);
	// addi r3,r1,2192
	ctx.r3.s64 = ctx.r1.s64 + 2192;
	// stw r11,2160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2160, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2200
	ctx.r3.s64 = ctx.r1.s64 + 2200;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,2216(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2216, temp.u32);
	// stw r30,2220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2220, r30.u32);
	// addi r10,r10,-25860
	ctx.r10.s64 = ctx.r10.s64 + -25860;
	// stfs f30,2224(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2224, temp.u32);
	// stfs f31,2228(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2228, temp.u32);
	// stb r31,2236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2236, r31.u8);
	// stfs f31,2232(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2232, temp.u32);
	// stw r10,2212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2212, ctx.r10.u32);
	// addi r3,r1,2240
	ctx.r3.s64 = ctx.r1.s64 + 2240;
	// lwz r11,-1244(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1244);
	// stw r11,2208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2208, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2248
	ctx.r3.s64 = ctx.r1.s64 + 2248;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,2264(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2264, temp.u32);
	// stw r30,2268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2268, r30.u32);
	// addi r10,r10,-25880
	ctx.r10.s64 = ctx.r10.s64 + -25880;
	// stfs f30,2272(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2272, temp.u32);
	// stfs f31,2276(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2276, temp.u32);
	// stb r31,2284(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2284, r31.u8);
	// stfs f31,2280(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2280, temp.u32);
	// stw r10,2260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2260, ctx.r10.u32);
	// addi r3,r1,2288
	ctx.r3.s64 = ctx.r1.s64 + 2288;
	// lwz r11,-1240(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1240);
	// stw r11,2256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2256, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2296
	ctx.r3.s64 = ctx.r1.s64 + 2296;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,2312(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2312, temp.u32);
	// stw r31,2316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2316, r31.u32);
	// addi r10,r10,-25904
	ctx.r10.s64 = ctx.r10.s64 + -25904;
	// stfs f30,2320(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2320, temp.u32);
	// stfs f31,2324(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2324, temp.u32);
	// stb r31,2332(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2332, r31.u8);
	// stfs f31,2328(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2328, temp.u32);
	// stw r10,2308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2308, ctx.r10.u32);
	// addi r3,r1,2336
	ctx.r3.s64 = ctx.r1.s64 + 2336;
	// lwz r11,-1236(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1236);
	// stw r11,2304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2304, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2344
	ctx.r3.s64 = ctx.r1.s64 + 2344;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,2360(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2360, temp.u32);
	// stw r30,2364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2364, r30.u32);
	// addi r10,r10,-25924
	ctx.r10.s64 = ctx.r10.s64 + -25924;
	// stfs f30,2368(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2368, temp.u32);
	// stfs f31,2372(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2372, temp.u32);
	// stb r31,2380(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2380, r31.u8);
	// stfs f31,2376(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2376, temp.u32);
	// stw r10,2356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2356, ctx.r10.u32);
	// addi r3,r1,2384
	ctx.r3.s64 = ctx.r1.s64 + 2384;
	// lwz r11,-1212(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1212);
	// stw r11,2352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2352, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2392
	ctx.r3.s64 = ctx.r1.s64 + 2392;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,2408(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2408, temp.u32);
	// stw r30,2412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2412, r30.u32);
	// addi r10,r10,-25952
	ctx.r10.s64 = ctx.r10.s64 + -25952;
	// stfs f30,2416(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2416, temp.u32);
	// stfs f31,2420(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2420, temp.u32);
	// stb r31,2428(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2428, r31.u8);
	// stfs f31,2424(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2424, temp.u32);
	// stw r10,2404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2404, ctx.r10.u32);
	// addi r3,r1,2432
	ctx.r3.s64 = ctx.r1.s64 + 2432;
	// lwz r11,-1208(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1208);
	// stw r11,2400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2400, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2440
	ctx.r3.s64 = ctx.r1.s64 + 2440;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,2456(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2456, temp.u32);
	// stw r30,2460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2460, r30.u32);
	// addi r10,r10,-25976
	ctx.r10.s64 = ctx.r10.s64 + -25976;
	// stfs f30,2464(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2464, temp.u32);
	// stfs f31,2468(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2468, temp.u32);
	// stb r31,2476(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2476, r31.u8);
	// stfs f31,2472(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2472, temp.u32);
	// stw r10,2452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2452, ctx.r10.u32);
	// addi r3,r1,2480
	ctx.r3.s64 = ctx.r1.s64 + 2480;
	// lwz r11,-1232(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1232);
	// stw r11,2448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2448, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2488
	ctx.r3.s64 = ctx.r1.s64 + 2488;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,2504(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2504, temp.u32);
	// stw r31,2508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2508, r31.u32);
	// addi r10,r10,-25996
	ctx.r10.s64 = ctx.r10.s64 + -25996;
	// stfs f30,2512(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2512, temp.u32);
	// stfs f31,2516(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2516, temp.u32);
	// stb r31,2524(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2524, r31.u8);
	// stfs f31,2520(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2520, temp.u32);
	// stw r10,2500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2500, ctx.r10.u32);
	// addi r3,r1,2528
	ctx.r3.s64 = ctx.r1.s64 + 2528;
	// lwz r11,-1228(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1228);
	// stw r11,2496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2496, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2536
	ctx.r3.s64 = ctx.r1.s64 + 2536;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r28,2548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2548, r28.u32);
	// stfs f0,2552(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2552, temp.u32);
	// stw r30,2556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2556, r30.u32);
	// stfs f30,2560(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2560, temp.u32);
	// stb r31,2572(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2572, r31.u8);
	// stfs f31,2564(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2564, temp.u32);
	// addi r3,r1,2576
	ctx.r3.s64 = ctx.r1.s64 + 2576;
	// stfs f31,2568(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2568, temp.u32);
	// lwz r11,-1224(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1224);
	// stw r11,2544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2544, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2584
	ctx.r3.s64 = ctx.r1.s64 + 2584;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,2604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2604, r30.u32);
	// stfs f0,2600(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2600, temp.u32);
	// stw r28,2596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2596, r28.u32);
	// stfs f30,2608(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2608, temp.u32);
	// stb r31,2620(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2620, r31.u8);
	// stfs f31,2612(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2612, temp.u32);
	// addi r3,r1,2624
	ctx.r3.s64 = ctx.r1.s64 + 2624;
	// stfs f31,2616(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2616, temp.u32);
	// lwz r11,-1220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1220);
	// stw r11,2592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2592, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2632
	ctx.r3.s64 = ctx.r1.s64 + 2632;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,2652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2652, r30.u32);
	// stfs f0,2648(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2648, temp.u32);
	// stw r28,2644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2644, r28.u32);
	// stfs f30,2656(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2656, temp.u32);
	// stb r31,2668(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2668, r31.u8);
	// stfs f31,2660(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2660, temp.u32);
	// addi r3,r1,2672
	ctx.r3.s64 = ctx.r1.s64 + 2672;
	// stfs f31,2664(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2664, temp.u32);
	// lwz r11,-1204(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1204);
	// stw r11,2640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2640, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2680
	ctx.r3.s64 = ctx.r1.s64 + 2680;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,2696(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2696, temp.u32);
	// stw r30,2700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2700, r30.u32);
	// addi r10,r10,-25324
	ctx.r10.s64 = ctx.r10.s64 + -25324;
	// stfs f30,2704(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2704, temp.u32);
	// stfs f31,2708(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2708, temp.u32);
	// stb r31,2716(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2716, r31.u8);
	// stfs f31,2712(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2712, temp.u32);
	// stw r10,2692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2692, ctx.r10.u32);
	// addi r3,r1,2720
	ctx.r3.s64 = ctx.r1.s64 + 2720;
	// lwz r11,-1196(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1196);
	// stw r11,2688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2688, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2728
	ctx.r3.s64 = ctx.r1.s64 + 2728;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,2748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2748, r30.u32);
	// stfs f0,2744(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2744, temp.u32);
	// stw r28,2740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2740, r28.u32);
	// stfs f30,2752(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2752, temp.u32);
	// stb r31,2764(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2764, r31.u8);
	// stfs f31,2756(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2756, temp.u32);
	// addi r3,r1,2768
	ctx.r3.s64 = ctx.r1.s64 + 2768;
	// stfs f31,2760(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2760, temp.u32);
	// lwz r11,-1148(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1148);
	// stw r11,2736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2736, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2776
	ctx.r3.s64 = ctx.r1.s64 + 2776;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,2796(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2796, r30.u32);
	// stfs f0,2792(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2792, temp.u32);
	// stw r28,2788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2788, r28.u32);
	// stfs f30,2800(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2800, temp.u32);
	// stb r31,2812(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2812, r31.u8);
	// stfs f31,2804(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2804, temp.u32);
	// addi r3,r1,2816
	ctx.r3.s64 = ctx.r1.s64 + 2816;
	// stfs f31,2808(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2808, temp.u32);
	// lwz r11,-1248(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1248);
	// stw r11,2784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2784, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2824
	ctx.r3.s64 = ctx.r1.s64 + 2824;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,2844(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2844, r30.u32);
	// stfs f0,2840(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2840, temp.u32);
	// stw r28,2836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2836, r28.u32);
	// stfs f30,2848(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2848, temp.u32);
	// stb r31,2860(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2860, r31.u8);
	// stfs f31,2852(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2852, temp.u32);
	// addi r3,r1,2864
	ctx.r3.s64 = ctx.r1.s64 + 2864;
	// stfs f31,2856(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2856, temp.u32);
	// lwz r11,-1180(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1180);
	// stw r11,2832(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2832, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2872
	ctx.r3.s64 = ctx.r1.s64 + 2872;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,2888(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2888, temp.u32);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lwz r11,-1120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1120);
	// stfs f30,2896(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2896, temp.u32);
	// stfs f31,2900(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2900, temp.u32);
	// stw r30,2892(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2892, r30.u32);
	// stfs f31,2904(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2904, temp.u32);
	// stw r28,2884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2884, r28.u32);
	// stb r31,2908(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2908, r31.u8);
	// addi r3,r1,2912
	ctx.r3.s64 = ctx.r1.s64 + 2912;
	// stw r11,2880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2880, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2920
	ctx.r3.s64 = ctx.r1.s64 + 2920;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,2940(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2940, r30.u32);
	// stfs f0,2936(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2936, temp.u32);
	// stw r28,2932(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2932, r28.u32);
	// stfs f30,2944(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2944, temp.u32);
	// stb r31,2956(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2956, r31.u8);
	// stfs f31,2948(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2948, temp.u32);
	// addi r3,r1,2960
	ctx.r3.s64 = ctx.r1.s64 + 2960;
	// stfs f31,2952(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2952, temp.u32);
	// lwz r11,-1112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1112);
	// stw r11,2928(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2928, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,2968
	ctx.r3.s64 = ctx.r1.s64 + 2968;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,2988(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2988, r30.u32);
	// stfs f0,2984(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2984, temp.u32);
	// stw r28,2980(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2980, r28.u32);
	// stfs f30,2992(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2992, temp.u32);
	// stb r31,3004(r1)
	PPC_STORE_U8(ctx.r1.u32 + 3004, r31.u8);
	// stfs f31,2996(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2996, temp.u32);
	// addi r3,r1,3008
	ctx.r3.s64 = ctx.r1.s64 + 3008;
	// stfs f31,3000(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3000, temp.u32);
	// lwz r11,-1104(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1104);
	// stw r11,2976(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2976, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,3016
	ctx.r3.s64 = ctx.r1.s64 + 3016;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r31,3036(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3036, r31.u32);
	// stfs f0,3032(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3032, temp.u32);
	// stw r28,3028(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3028, r28.u32);
	// stfs f30,3040(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3040, temp.u32);
	// stb r31,3052(r1)
	PPC_STORE_U8(ctx.r1.u32 + 3052, r31.u8);
	// stfs f31,3044(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3044, temp.u32);
	// addi r3,r1,3056
	ctx.r3.s64 = ctx.r1.s64 + 3056;
	// stfs f31,3048(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3048, temp.u32);
	// lwz r11,-1100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1100);
	// stw r11,3024(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3024, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,3064
	ctx.r3.s64 = ctx.r1.s64 + 3064;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,3084(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3084, r30.u32);
	// stfs f0,3080(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3080, temp.u32);
	// stw r28,3076(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3076, r28.u32);
	// stfs f30,3088(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3088, temp.u32);
	// stb r31,3100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 3100, r31.u8);
	// stfs f31,3092(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3092, temp.u32);
	// addi r3,r1,3104
	ctx.r3.s64 = ctx.r1.s64 + 3104;
	// stfs f31,3096(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3096, temp.u32);
	// lwz r11,-1096(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1096);
	// stw r11,3072(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3072, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,3112
	ctx.r3.s64 = ctx.r1.s64 + 3112;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r31,3132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3132, r31.u32);
	// stfs f0,3128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3128, temp.u32);
	// stw r28,3124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3124, r28.u32);
	// stfs f30,3136(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3136, temp.u32);
	// stfs f31,3140(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3140, temp.u32);
	// stfs f31,3144(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3144, temp.u32);
	// lwz r11,-1092(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1092);
	// stb r31,3148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 3148, r31.u8);
	// addi r3,r1,3152
	ctx.r3.s64 = ctx.r1.s64 + 3152;
	// stw r11,3120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3120, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,3160
	ctx.r3.s64 = ctx.r1.s64 + 3160;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,3180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3180, r30.u32);
	// stfs f0,3176(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3176, temp.u32);
	// stw r28,3172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3172, r28.u32);
	// stfs f30,3184(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3184, temp.u32);
	// stb r31,3196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 3196, r31.u8);
	// stfs f31,3188(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3188, temp.u32);
	// addi r3,r1,3200
	ctx.r3.s64 = ctx.r1.s64 + 3200;
	// stfs f31,3192(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3192, temp.u32);
	// lwz r11,-1088(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1088);
	// stw r11,3168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3168, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,3208
	ctx.r3.s64 = ctx.r1.s64 + 3208;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r28,3220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3220, r28.u32);
	// stfs f0,3224(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3224, temp.u32);
	// stw r30,3228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3228, r30.u32);
	// stfs f30,3232(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3232, temp.u32);
	// stb r31,3244(r1)
	PPC_STORE_U8(ctx.r1.u32 + 3244, r31.u8);
	// stfs f31,3236(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3236, temp.u32);
	// addi r3,r1,3248
	ctx.r3.s64 = ctx.r1.s64 + 3248;
	// stfs f31,3240(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3240, temp.u32);
	// lwz r11,-1084(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1084);
	// stw r11,3216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3216, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,3256
	ctx.r3.s64 = ctx.r1.s64 + 3256;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,3276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3276, r30.u32);
	// stfs f0,3272(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3272, temp.u32);
	// stw r28,3268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3268, r28.u32);
	// stfs f30,3280(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3280, temp.u32);
	// stb r31,3292(r1)
	PPC_STORE_U8(ctx.r1.u32 + 3292, r31.u8);
	// stfs f31,3284(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3284, temp.u32);
	// addi r3,r1,3296
	ctx.r3.s64 = ctx.r1.s64 + 3296;
	// stfs f31,3288(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3288, temp.u32);
	// lwz r11,-1080(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1080);
	// stw r11,3264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3264, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,3304
	ctx.r3.s64 = ctx.r1.s64 + 3304;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r31,3324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3324, r31.u32);
	// stfs f0,3320(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3320, temp.u32);
	// stw r28,3316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3316, r28.u32);
	// stfs f30,3328(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3328, temp.u32);
	// stb r31,3340(r1)
	PPC_STORE_U8(ctx.r1.u32 + 3340, r31.u8);
	// stfs f31,3332(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3332, temp.u32);
	// addi r3,r1,3344
	ctx.r3.s64 = ctx.r1.s64 + 3344;
	// stfs f31,3336(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3336, temp.u32);
	// lwz r11,-1076(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1076);
	// stw r11,3312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3312, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,3352
	ctx.r3.s64 = ctx.r1.s64 + 3352;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lfs f0,2244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,3372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3372, r30.u32);
	// stfs f0,3368(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3368, temp.u32);
	// stw r28,3364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3364, r28.u32);
	// stfs f30,3376(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3376, temp.u32);
	// stb r31,3388(r1)
	PPC_STORE_U8(ctx.r1.u32 + 3388, r31.u8);
	// stfs f31,3380(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3380, temp.u32);
	// addi r3,r1,3392
	ctx.r3.s64 = ctx.r1.s64 + 3392;
	// stfs f31,3384(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 3384, temp.u32);
	// lwz r11,-1072(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1072);
	// stw r11,3360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3360, r11.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,3400
	ctx.r3.s64 = ctx.r1.s64 + 3400;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// li r5,69
	ctx.r5.s64 = 69;
	// lwz r3,288(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 288);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x827f05d0
	sub_827F05D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827fef80
	sub_827FEF80(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,288(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 288);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x827f05d8
	sub_827F05D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-1284(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + -1284);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,288(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 288);
	// bl 0x827f03c8
	sub_827F03C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r1,r1,3488
	ctx.r1.s64 = ctx.r1.s64 + 3488;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82817378"))) PPC_WEAK_FUNC(sub_82817378);
PPC_FUNC_IMPL(__imp__sub_82817378) {
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
	// beq 0x828173cc
	if (cr0.eq) goto loc_828173CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-9040
	ctx.r3.s64 = r11.s64 + -9040;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828173cc
	if (cr0.eq) goto loc_828173CC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x82800bc0
	sub_82800BC0(ctx, base);
loc_828173C4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8281759c
	goto loc_8281759C;
loc_828173CC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8281758c
	if (cr6.eq) goto loc_8281758C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,15452
	ctx.r3.s64 = r11.s64 + 15452;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82817404
	if (cr0.eq) goto loc_82817404;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x82800bd0
	sub_82800BD0(ctx, base);
	// b 0x828173c4
	goto loc_828173C4;
loc_82817404:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8281758c
	if (cr6.eq) goto loc_8281758C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-9200
	ctx.r3.s64 = r11.s64 + -9200;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8281743c
	if (cr0.eq) goto loc_8281743C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x82814c98
	sub_82814C98(ctx, base);
	// b 0x828173c4
	goto loc_828173C4;
loc_8281743C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8281758c
	if (cr6.eq) goto loc_8281758C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-9252
	ctx.r3.s64 = r11.s64 + -9252;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82817474
	if (cr0.eq) goto loc_82817474;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x828143f8
	sub_828143F8(ctx, base);
	// b 0x828173c4
	goto loc_828173C4;
loc_82817474:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8281758c
	if (cr6.eq) goto loc_8281758C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-10128
	ctx.r3.s64 = r11.s64 + -10128;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828174ac
	if (cr0.eq) goto loc_828174AC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x82814380
	sub_82814380(ctx, base);
	// b 0x828173c4
	goto loc_828173C4;
loc_828174AC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8281758c
	if (cr6.eq) goto loc_8281758C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-10064
	ctx.r3.s64 = r11.s64 + -10064;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828174e4
	if (cr0.eq) goto loc_828174E4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x828d43e0
	sub_828D43E0(ctx, base);
	// b 0x828173c4
	goto loc_828173C4;
loc_828174E4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8281758c
	if (cr6.eq) goto loc_8281758C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-2944
	ctx.r3.s64 = r11.s64 + -2944;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8281751c
	if (cr0.eq) goto loc_8281751C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x82814420
	sub_82814420(ctx, base);
	// b 0x828173c4
	goto loc_828173C4;
loc_8281751C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8281758c
	if (cr6.eq) goto loc_8281758C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-6156
	ctx.r3.s64 = r11.s64 + -6156;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82817554
	if (cr0.eq) goto loc_82817554;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x82814648
	sub_82814648(ctx, base);
	// b 0x828173c4
	goto loc_828173C4;
loc_82817554:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8281758c
	if (cr6.eq) goto loc_8281758C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-4672
	ctx.r3.s64 = r11.s64 + -4672;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8281758c
	if (cr0.eq) goto loc_8281758C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// b 0x828173c4
	goto loc_828173C4;
loc_8281758C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827ff778
	sub_827FF778(ctx, base);
loc_8281759C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_828175A8"))) PPC_WEAK_FUNC(sub_828175A8);
PPC_FUNC_IMPL(__imp__sub_828175A8) {
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
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x827ff158
	sub_827FF158(ctx, base);
	// lwz r11,328(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 328);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x828175d8
	if (!cr6.eq) goto loc_828175D8;
	// bl 0x82816118
	sub_82816118(ctx, base);
	// b 0x828175dc
	goto loc_828175DC;
loc_828175D8:
	// bl 0x82814d50
	sub_82814D50(ctx, base);
loc_828175DC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825163a8
	sub_825163A8(ctx, base);
	// lwz r26,0(r13)
	r26.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r25,20
	r25.s64 = 20;
	// li r5,39
	ctx.r5.s64 = 39;
	// li r4,96
	ctx.r4.s64 = 96;
	// lwzx r3,r25,r26
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + r26.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r27,r11,30976
	r27.s64 = r11.s64 + 30976;
	// addi r10,r10,-19824
	ctx.r10.s64 = ctx.r10.s64 + -19824;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// li r7,96
	ctx.r7.s64 = 96;
	// lvx128 v63,r0,r27
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// sth r7,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r7.u16);
	// stvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r11,-26336
	r29.s64 = r11.s64 + -26336;
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lfs f1,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x82f270c8
	sub_82F270C8(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r28,r11,-26188
	r28.s64 = r11.s64 + -26188;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8281767c
	if (cr6.eq) goto loc_8281767C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e9f20
	sub_822E9F20(ctx, base);
loc_8281767C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827fef80
	sub_827FEF80(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82e1e040
	sub_82E1E040(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,28920(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 28920);
	// bl 0x82516a08
	sub_82516A08(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828176d0
	if (cr6.eq) goto loc_828176D0;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_828176D0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x828176e8
	if (cr6.eq) goto loc_828176E8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_828176E8:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f0,-24780(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24780);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x82e84d20
	sub_82E84D20(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r30,r11,-26168
	r30.s64 = r11.s64 + -26168;
	// li r5,143
	ctx.r5.s64 = 143;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82817744
	if (cr0.eq) goto loc_82817744;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// bl 0x82e1bac0
	sub_82E1BAC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82817748
	goto loc_82817748;
loc_82817744:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82817748:
	// addi r3,r31,296
	ctx.r3.s64 = r31.s64 + 296;
	// bl 0x822e3958
	sub_822E3958(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,296(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// bl 0x827fef80
	sub_827FEF80(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82e1e040
	sub_82E1E040(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82e1b810
	sub_82E1B810(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82817798
	if (cr6.eq) goto loc_82817798;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82817798:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r10,328(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 328);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-3132
	r11.s64 = r11.s64 + -3132;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-26180
	ctx.r4.s64 = r11.s64 + -26180;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827fef80
	sub_827FEF80(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r29,228(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r28,r1,84
	r28.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82e1e040
	sub_82E1E040(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r8,7
	ctx.r8.s64 = 7;
	// lfs f1,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f1.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x827d5ba0
	sub_827D5BA0(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r3,332(r31)
	PPC_STORE_U32(r31.u32 + 332, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8281783c
	if (cr6.eq) goto loc_8281783C;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281783C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,332(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// bl 0x827d4c90
	sub_827D4C90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,158
	ctx.r5.s64 = 158;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x828178dc
	if (cr0.eq) goto loc_828178DC;
	// li r5,39
	ctx.r5.s64 = 39;
	// lwzx r3,r25,r26
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + r26.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lvx128 v63,r0,r27
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,14592
	r11.s64 = r11.s64 + 14592;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// li r8,64
	ctx.r8.s64 = 64;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// sth r8,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r8.u16);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f1,-23212(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -23212);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82f27c28
	sub_82F27C28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x829654c8
	sub_829654C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828178e0
	goto loc_828178E0;
loc_828178DC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828178E0:
	// addi r3,r31,304
	ctx.r3.s64 = r31.s64 + 304;
	// bl 0x8275d7c8
	sub_8275D7C8(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_828178F8"))) PPC_WEAK_FUNC(sub_828178F8);
PPC_FUNC_IMPL(__imp__sub_828178F8) {
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
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x82e658d8
	sub_82E658D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
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

__attribute__((alias("__imp__sub_82817940"))) PPC_WEAK_FUNC(sub_82817940);
PPC_FUNC_IMPL(__imp__sub_82817940) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-24888
	r11.s64 = r11.s64 + -24888;
	// addi r10,r10,-24908
	ctx.r10.s64 = ctx.r10.s64 + -24908;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r30,r31,192
	r30.s64 = r31.s64 + 192;
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82817984
	if (cr6.eq) goto loc_82817984;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82817984:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e66778
	sub_82E66778(ctx, base);
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

__attribute__((alias("__imp__sub_828179B0"))) PPC_WEAK_FUNC(sub_828179B0);
PPC_FUNC_IMPL(__imp__sub_828179B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x82817ac8
	sub_82817AC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828179B8"))) PPC_WEAK_FUNC(sub_828179B8);
PPC_FUNC_IMPL(__imp__sub_828179B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x828179fc
	if (cr6.eq) goto loc_828179FC;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_828179E0:
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
	// bne 0x828179e0
	if (!cr0.eq) goto loc_828179E0;
loc_828179FC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r3,192
	ctx.r4.s64 = ctx.r3.s64 + 192;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e67778
	sub_82E67778(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82817a2c
	if (cr6.eq) goto loc_82817A2C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82817A2C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82817a3c
	if (cr6.eq) goto loc_82817A3C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82817A3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82817A50"))) PPC_WEAK_FUNC(sub_82817A50);
PPC_FUNC_IMPL(__imp__sub_82817A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82514a50
	sub_82514A50(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-24888
	r11.s64 = r11.s64 + -24888;
	// addi r10,r10,-24908
	ctx.r10.s64 = ctx.r10.s64 + -24908;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r30,r31,192
	r30.s64 = r31.s64 + 192;
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e668c8
	sub_82E668C8(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,28168
	ctx.r10.s64 = ctx.r10.s64 + 28168;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r10,192(r31)
	PPC_STORE_U32(r31.u32 + 192, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,288(r31)
	PPC_STORE_U32(r31.u32 + 288, r11.u32);
	// stw r11,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r11.u32);
	// lwz r11,192(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82817AC8"))) PPC_WEAK_FUNC(sub_82817AC8);
PPC_FUNC_IMPL(__imp__sub_82817AC8) {
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
	// bl 0x82817940
	sub_82817940(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82817af8
	if (cr0.eq) goto loc_82817AF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82817AF8:
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

__attribute__((alias("__imp__sub_82817B18"))) PPC_WEAK_FUNC(sub_82817B18);
PPC_FUNC_IMPL(__imp__sub_82817B18) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,192
	r31.s64 = r30.s64 + 192;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e636a8
	sub_82E636A8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r28,r10,1
	r28.u64 = ctx.r10.u64 ^ 1;
	// beq cr6,0x82817b60
	if (cr6.eq) goto loc_82817B60;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82817B60:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82817b78
	if (cr0.eq) goto loc_82817B78;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827f22b0
	sub_827F22B0(ctx, base);
	// b 0x82817c0c
	goto loc_82817C0C;
loc_82817B78:
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
	// beq cr6,0x82817bb8
	if (cr6.eq) goto loc_82817BB8;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82817B9C:
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
	// bne 0x82817b9c
	if (!cr0.eq) goto loc_82817B9C;
loc_82817BB8:
	// addi r31,r30,40
	r31.s64 = r30.s64 + 40;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,-24848
	ctx.r4.s64 = ctx.r10.s64 + -24848;
	// li r5,71
	ctx.r5.s64 = 71;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82817bfc
	if (cr6.eq) goto loc_82817BFC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82817BFC:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82817c0c
	if (cr6.eq) goto loc_82817C0C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82817C0C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82817C18"))) PPC_WEAK_FUNC(sub_82817C18);
PPC_FUNC_IMPL(__imp__sub_82817C18) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,192
	r31.s64 = r30.s64 + 192;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e636a8
	sub_82E636A8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r28,r10,1
	r28.u64 = ctx.r10.u64 ^ 1;
	// beq cr6,0x82817c60
	if (cr6.eq) goto loc_82817C60;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82817C60:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82817c78
	if (cr0.eq) goto loc_82817C78;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e65f98
	sub_82E65F98(ctx, base);
	// b 0x82817d0c
	goto loc_82817D0C;
loc_82817C78:
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
	// beq cr6,0x82817cb8
	if (cr6.eq) goto loc_82817CB8;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82817C9C:
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
	// bne 0x82817c9c
	if (!cr0.eq) goto loc_82817C9C;
loc_82817CB8:
	// addi r31,r30,40
	r31.s64 = r30.s64 + 40;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,-24848
	ctx.r4.s64 = ctx.r10.s64 + -24848;
	// li r5,86
	ctx.r5.s64 = 86;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82817cfc
	if (cr6.eq) goto loc_82817CFC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82817CFC:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82817d0c
	if (cr6.eq) goto loc_82817D0C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82817D0C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82817D18"))) PPC_WEAK_FUNC(sub_82817D18);
PPC_FUNC_IMPL(__imp__sub_82817D18) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,248(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82817D20"))) PPC_WEAK_FUNC(sub_82817D20);
PPC_FUNC_IMPL(__imp__sub_82817D20) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r31,r29,252
	r31.s64 = r29.s64 + 252;
	// lwz r11,252(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 252);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82817d70
	if (cr6.eq) goto loc_82817D70;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8250e538
	sub_8250E538(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-192
	ctx.r3.s64 = r11.s64 + -192;
	// bne cr6,0x82817d60
	if (!cr6.eq) goto loc_82817D60;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82817D60:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x827d92b8
	sub_827D92B8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_82817D70:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82802ee8
	sub_82802EE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82817D88"))) PPC_WEAK_FUNC(sub_82817D88);
PPC_FUNC_IMPL(__imp__sub_82817D88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82817e24
	if (cr6.eq) goto loc_82817E24;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82817e24
	if (!cr6.eq) goto loc_82817E24;
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r11,r10,30976
	r11.s64 = ctx.r10.s64 + 30976;
	// lfs f0,2240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f0.f64 = double(temp.f32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lvx128 v62,r0,r8
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82f27c28
	sub_82F27C28(ctx, base);
	// b 0x82817e4c
	goto loc_82817E4C;
loc_82817E24:
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
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82f226c8
	sub_82F226C8(ctx, base);
loc_82817E4C:
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

__attribute__((alias("__imp__sub_82817E60"))) PPC_WEAK_FUNC(sub_82817E60);
PPC_FUNC_IMPL(__imp__sub_82817E60) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-24732
	r11.s64 = r11.s64 + -24732;
	// addi r10,r10,-24752
	ctx.r10.s64 = ctx.r10.s64 + -24752;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r3,r31,260
	ctx.r3.s64 = r31.s64 + 260;
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82817ea4
	if (cr6.eq) goto loc_82817EA4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82817EA4:
	// addi r3,r31,244
	ctx.r3.s64 = r31.s64 + 244;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82817ebc
	if (cr6.eq) goto loc_82817EBC;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_82817EBC:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82817ecc
	if (cr6.eq) goto loc_82817ECC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82817ECC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82802ff8
	sub_82802FF8(ctx, base);
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

__attribute__((alias("__imp__sub_82817EE8"))) PPC_WEAK_FUNC(sub_82817EE8);
PPC_FUNC_IMPL(__imp__sub_82817EE8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x82818050
	sub_82818050(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82817EF0"))) PPC_WEAK_FUNC(sub_82817EF0);
PPC_FUNC_IMPL(__imp__sub_82817EF0) {
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
	// beq 0x82817f48
	if (cr0.eq) goto loc_82817F48;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-24772
	ctx.r9.s64 = r11.s64 + -24772;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82817f4c
	goto loc_82817F4C;
loc_82817F48:
	// li r11,0
	r11.s64 = 0;
loc_82817F4C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82817f98
	if (!cr6.eq) goto loc_82817F98;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82817f78
	if (cr6.eq) goto loc_82817F78;
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
loc_82817F78:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-2860(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -2860);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82817F98:
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

__attribute__((alias("__imp__sub_82817FB8"))) PPC_WEAK_FUNC(sub_82817FB8);
PPC_FUNC_IMPL(__imp__sub_82817FB8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82802f50
	sub_82802F50(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-24732
	r11.s64 = r11.s64 + -24732;
	// addi r10,r10,-24752
	ctx.r10.s64 = ctx.r10.s64 + -24752;
	// li r29,0
	r29.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r29.u32);
	// stw r29,236(r31)
	PPC_STORE_U32(r31.u32 + 236, r29.u32);
	// bl 0x82817d88
	sub_82817D88(ctx, base);
	// stw r3,240(r31)
	PPC_STORE_U32(r31.u32 + 240, ctx.r3.u32);
	// addi r3,r31,244
	ctx.r3.s64 = r31.s64 + 244;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r3,r31,260
	ctx.r3.s64 = r31.s64 + 260;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// stw r11,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r11.u32);
	// stw r29,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r29.u32);
	// stw r29,256(r31)
	PPC_STORE_U32(r31.u32 + 256, r29.u32);
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,264(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 264, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	f0.f64 = double(temp.f32);
	// stfs f0,268(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 268, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82818050"))) PPC_WEAK_FUNC(sub_82818050);
PPC_FUNC_IMPL(__imp__sub_82818050) {
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
	// bl 0x82817e60
	sub_82817E60(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82818080
	if (cr0.eq) goto loc_82818080;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82818080:
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

__attribute__((alias("__imp__sub_828180A0"))) PPC_WEAK_FUNC(sub_828180A0);
PPC_FUNC_IMPL(__imp__sub_828180A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// addi r4,r3,240
	ctx.r4.s64 = ctx.r3.s64 + 240;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// b 0x822ef400
	sub_822EF400(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828180B0"))) PPC_WEAK_FUNC(sub_828180B0);
PPC_FUNC_IMPL(__imp__sub_828180B0) {
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
	// beq 0x82818104
	if (cr0.eq) goto loc_82818104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-2784
	ctx.r3.s64 = r11.s64 + -2784;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82818104
	if (cr0.eq) goto loc_82818104;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r29,-40
	ctx.r3.s64 = r29.s64 + -40;
	// bl 0x828180a0
	sub_828180A0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82818114
	goto loc_82818114;
loc_82818104:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82803178
	sub_82803178(ctx, base);
loc_82818114:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82818120"))) PPC_WEAK_FUNC(sub_82818120);
PPC_FUNC_IMPL(__imp__sub_82818120) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-24664
	ctx.r4.s64 = r11.s64 + -24664;
	// li r5,51
	ctx.r5.s64 = 51;
	// li r3,272
	ctx.r3.s64 = 272;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8281816c
	if (cr0.eq) goto loc_8281816C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82817fb8
	sub_82817FB8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82818170
	goto loc_82818170;
loc_8281816C:
	// li r31,0
	r31.s64 = 0;
loc_82818170:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82817ef0
	sub_82817EF0(ctx, base);
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

__attribute__((alias("__imp__sub_828181A0"))) PPC_WEAK_FUNC(sub_828181A0);
PPC_FUNC_IMPL(__imp__sub_828181A0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x82802e58
	sub_82802E58(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82e5e6c8
	sub_82E5E6C8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,244
	ctx.r5.s64 = r31.s64 + 244;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e37318
	sub_82E37318(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82818260
	if (cr6.eq) goto loc_82818260;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-24664
	ctx.r4.s64 = r11.s64 + -24664;
	// li r5,101
	ctx.r5.s64 = 101;
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82818218
	if (cr0.eq) goto loc_82818218;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e1f820
	sub_82E1F820(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8281821c
	goto loc_8281821C;
loc_82818218:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8281821C:
	// addi r30,r31,232
	r30.s64 = r31.s64 + 232;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825182c0
	sub_825182C0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r29,232(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// bl 0x82515a28
	sub_82515A28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e1e0c0
	sub_82E1E0C0(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,31040(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 31040);
	// bl 0x825144c0
	sub_825144C0(ctx, base);
	// b 0x828182fc
	goto loc_828182FC;
loc_82818260:
	// addi r29,r31,260
	r29.s64 = r31.s64 + 260;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dfb8c8
	sub_82DFB8C8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x828182fc
	if (!cr0.eq) goto loc_828182FC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8250e538
	sub_8250E538(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r30,r11,-192
	r30.s64 = r11.s64 + -192;
	// bne cr6,0x82818294
	if (!cr6.eq) goto loc_82818294;
	// li r30,0
	r30.s64 = 0;
loc_82818294:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82515a28
	sub_82515A28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// bl 0x827da560
	sub_827DA560(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r31,252
	ctx.r10.s64 = r31.s64 + 252;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828182e4
	if (cr6.eq) goto loc_828182E4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828182E4:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828182f4
	if (cr6.eq) goto loc_828182F4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_828182F4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_828182FC:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281830c
	if (cr6.eq) goto loc_8281830C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281830C:
	// lwz r3,252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 252);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82818334
	if (cr6.eq) goto loc_82818334;
	// lfs f0,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 268);
	f0.f64 = double(temp.f32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f13,264(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lfs f0,-31000(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31000);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x82e8a108
	sub_82E8A108(ctx, base);
loc_82818334:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e5e6e0
	sub_82E5E6E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82818348"))) PPC_WEAK_FUNC(sub_82818348);
PPC_FUNC_IMPL(__imp__sub_82818348) {
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
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// addi r4,r30,20
	ctx.r4.s64 = r30.s64 + 20;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
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

__attribute__((alias("__imp__sub_828183D0"))) PPC_WEAK_FUNC(sub_828183D0);
PPC_FUNC_IMPL(__imp__sub_828183D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x82818418
	if (cr6.eq) goto loc_82818418;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// li r3,0
	ctx.r3.s64 = 0;
	// bgt cr6,0x8281841c
	if (cr6.gt) goto loc_8281841C;
loc_82818418:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8281841C:
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

__attribute__((alias("__imp__sub_82818430"))) PPC_WEAK_FUNC(sub_82818430);
PPC_FUNC_IMPL(__imp__sub_82818430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// bge cr6,0x82818474
	if (!cr6.lt) goto loc_82818474;
	// lfs f13,48(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blt cr6,0x82818478
	if (cr6.lt) goto loc_82818478;
loc_82818474:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82818478:
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

__attribute__((alias("__imp__sub_82818490"))) PPC_WEAK_FUNC(sub_82818490);
PPC_FUNC_IMPL(__imp__sub_82818490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// blt cr6,0x828184c8
	if (cr6.lt) goto loc_828184C8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_828184C8:
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

__attribute__((alias("__imp__sub_828184E0"))) PPC_WEAK_FUNC(sub_828184E0);
PPC_FUNC_IMPL(__imp__sub_828184E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,88
	ctx.r3.s64 = ctx.r3.s64 + 88;
	// b 0x827c5f80
	sub_827C5F80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828184E8"))) PPC_WEAK_FUNC(sub_828184E8);
PPC_FUNC_IMPL(__imp__sub_828184E8) {
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
	// addi r3,r3,88
	ctx.r3.s64 = ctx.r3.s64 + 88;
	// bl 0x82a563a8
	sub_82A563A8(ctx, base);
	// bl 0x82985ba0
	sub_82985BA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82818510"))) PPC_WEAK_FUNC(sub_82818510);
PPC_FUNC_IMPL(__imp__sub_82818510) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82514010
	sub_82514010(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,216(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f0,216(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 216, temp.u32);
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

__attribute__((alias("__imp__sub_82818558"))) PPC_WEAK_FUNC(sub_82818558);
PPC_FUNC_IMPL(__imp__sub_82818558) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,280(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82818560"))) PPC_WEAK_FUNC(sub_82818560);
PPC_FUNC_IMPL(__imp__sub_82818560) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82818348
	sub_82818348(ctx, base);
	// lfs f0,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	f0.f64 = double(temp.f32);
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// addi r4,r30,56
	ctx.r4.s64 = r30.s64 + 56;
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
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// addi r4,r30,60
	ctx.r4.s64 = r30.s64 + 60;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// addi r4,r30,64
	ctx.r4.s64 = r30.s64 + 64;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// addi r4,r30,68
	ctx.r4.s64 = r30.s64 + 68;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// addi r4,r30,72
	ctx.r4.s64 = r30.s64 + 72;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// addi r4,r30,76
	ctx.r4.s64 = r30.s64 + 76;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r30,80
	ctx.r4.s64 = r30.s64 + 80;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
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

__attribute__((alias("__imp__sub_82818620"))) PPC_WEAK_FUNC(sub_82818620);
PPC_FUNC_IMPL(__imp__sub_82818620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// addi r10,r10,-24592
	ctx.r10.s64 = ctx.r10.s64 + -24592;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x827fc218
	sub_827FC218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82818638"))) PPC_WEAK_FUNC(sub_82818638);
PPC_FUNC_IMPL(__imp__sub_82818638) {
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
	PPCVRegister v63{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addic. r30,r29,-88
	xer.ca = r29.u32 > 87;
	r30.s64 = r29.s64 + -88;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// mr r28,r29
	r28.u64 = r29.u64;
	// bne 0x82818660
	if (!cr0.eq) goto loc_82818660;
	// li r28,0
	r28.s64 = 0;
loc_82818660:
	// lis r11,-31959
	r11.s64 = -2094465024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-5808(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -5808);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250c338
	sub_8250C338(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r4,r29,40
	ctx.r4.s64 = r29.s64 + 40;
	// bne cr6,0x82818698
	if (!cr6.eq) goto loc_82818698;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82818698:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250c358
	sub_8250C358(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250c5d0
	sub_8250C5D0(ctx, base);
	// stw r3,192(r29)
	PPC_STORE_U32(r29.u32 + 192, ctx.r3.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-148
	ctx.r3.s64 = r11.s64 + -148;
	// bne cr6,0x828186c4
	if (!cr6.eq) goto loc_828186C4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_828186C4:
	// bl 0x8252b698
	sub_8252B698(ctx, base);
	// li r11,200
	r11.s64 = 200;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r29,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r29.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_828186E0"))) PPC_WEAK_FUNC(sub_828186E0);
PPC_FUNC_IMPL(__imp__sub_828186E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCVRegister v63{};
	PPCRegister temp{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// stvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,-9716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -9716);
	f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stvx128 v63,r3,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,2240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82818718"))) PPC_WEAK_FUNC(sub_82818718);
PPC_FUNC_IMPL(__imp__sub_82818718) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// addi r11,r11,-24592
	r11.s64 = r11.s64 + -24592;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82818560
	sub_82818560(ctx, base);
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

__attribute__((alias("__imp__sub_82818758"))) PPC_WEAK_FUNC(sub_82818758);
PPC_FUNC_IMPL(__imp__sub_82818758) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// addi r11,r11,-24592
	r11.s64 = r11.s64 + -24592;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x827fc218
	sub_827FC218(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82818798
	if (cr0.eq) goto loc_82818798;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_82818798:
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

__attribute__((alias("__imp__sub_828187B8"))) PPC_WEAK_FUNC(sub_828187B8);
PPC_FUNC_IMPL(__imp__sub_828187B8) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// addi r11,r11,-24592
	r11.s64 = r11.s64 + -24592;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82818560
	sub_82818560(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82868790
	sub_82868790(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-24508
	r11.s64 = r11.s64 + -24508;
	// addi r10,r10,-24572
	ctx.r10.s64 = ctx.r10.s64 + -24572;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82818818"))) PPC_WEAK_FUNC(sub_82818818);
PPC_FUNC_IMPL(__imp__sub_82818818) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-88
	ctx.r3.s64 = ctx.r3.s64 + -88;
	// b 0x82818870
	sub_82818870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82818820"))) PPC_WEAK_FUNC(sub_82818820);
PPC_FUNC_IMPL(__imp__sub_82818820) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bne cr6,0x82818844
	if (!cr6.eq) goto loc_82818844;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82818844:
	// bl 0x82e657c8
	sub_82E657C8(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// addi r11,r11,-24592
	r11.s64 = r11.s64 + -24592;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x827fc218
	sub_827FC218(ctx, base);
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

__attribute__((alias("__imp__sub_82818870"))) PPC_WEAK_FUNC(sub_82818870);
PPC_FUNC_IMPL(__imp__sub_82818870) {
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
	// bl 0x82818820
	sub_82818820(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828188a0
	if (cr0.eq) goto loc_828188A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_828188A0:
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

__attribute__((alias("__imp__sub_828188C0"))) PPC_WEAK_FUNC(sub_828188C0);
PPC_FUNC_IMPL(__imp__sub_828188C0) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// addi r11,r11,-24592
	r11.s64 = r11.s64 + -24592;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82818560
	sub_82818560(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82514a50
	sub_82514A50(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-24424
	r11.s64 = r11.s64 + -24424;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// addi r10,r10,-24468
	ctx.r10.s64 = ctx.r10.s64 + -24468;
	// addi r9,r9,-24488
	ctx.r9.s64 = ctx.r9.s64 + -24488;
	// li r11,0
	r11.s64 = 0;
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// lfs f0,2240(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stw r9,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r9.u32);
	// lfs f13,-24496(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -24496);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,280(r31)
	PPC_STORE_U32(r31.u32 + 280, r11.u32);
	// stfs f0,288(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 288, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f13,292(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 292, temp.u32);
	// stfs f0,296(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 296, temp.u32);
	// stfs f0,300(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 300, temp.u32);
	// stfs f0,304(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 304, temp.u32);
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

__attribute__((alias("__imp__sub_82818958"))) PPC_WEAK_FUNC(sub_82818958);
PPC_FUNC_IMPL(__imp__sub_82818958) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-88
	ctx.r3.s64 = ctx.r3.s64 + -88;
	// b 0x828189b8
	sub_828189B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82818960"))) PPC_WEAK_FUNC(sub_82818960);
PPC_FUNC_IMPL(__imp__sub_82818960) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-128
	ctx.r3.s64 = ctx.r3.s64 + -128;
	// b 0x828189b8
	sub_828189B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82818968"))) PPC_WEAK_FUNC(sub_82818968);
PPC_FUNC_IMPL(__imp__sub_82818968) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bne cr6,0x8281898c
	if (!cr6.eq) goto loc_8281898C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8281898C:
	// bl 0x82514af8
	sub_82514AF8(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// addi r11,r11,-24592
	r11.s64 = r11.s64 + -24592;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x827fc218
	sub_827FC218(ctx, base);
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

__attribute__((alias("__imp__sub_828189B8"))) PPC_WEAK_FUNC(sub_828189B8);
PPC_FUNC_IMPL(__imp__sub_828189B8) {
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
	// bl 0x82818968
	sub_82818968(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828189e8
	if (cr0.eq) goto loc_828189E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_828189E8:
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

__attribute__((alias("__imp__sub_82818A08"))) PPC_WEAK_FUNC(sub_82818A08);
PPC_FUNC_IMPL(__imp__sub_82818A08) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// bl 0x831b0b2c
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r30,16
	ctx.r5.s64 = r30.s64 + 16;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e84a10
	sub_82E84A10(ctx, base);
	// li r11,16
	r11.s64 = 16;
	// lvx128 v62,r0,r29
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lvx128 v63,r31,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// vsubfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e85da8
	sub_82E85DA8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82316df8
	sub_82316DF8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x82818b90
	if (!cr6.gt) goto loc_82818B90;
	// lfs f0,32(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x82818ae4
	if (!cr6.gt) goto loc_82818AE4;
	// fdivs f1,f0,f1
	ctx.f1.f64 = double(float(f0.f64 / ctx.f1.f64));
	// b 0x82818aec
	goto loc_82818AEC;
loc_82818AE4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f1.f64 = double(temp.f32);
loc_82818AEC:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-15648
	ctx.r4.s64 = r11.s64 + -15648;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82e86010
	sub_82E86010(ctx, base);
	// vspltisw128 v63,-1
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// vslw128 v62,v63,v63
	v62.u32[0] = v63.u32[0] << (v63.u8[0] & 0x1F);
	v62.u32[1] = v63.u32[1] << (v63.u8[4] & 0x1F);
	v62.u32[2] = v63.u32[2] << (v63.u8[8] & 0x1F);
	v62.u32[3] = v63.u32[3] << (v63.u8[12] & 0x1F);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r10
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v62,v63,v62
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)v62.u8)));
	// vpermwi128 v60,v61,177
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0x4E));
	// vpermwi128 v59,v61,78
	simde_mm_store_si128((simde__m128i*)v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0xB1));
	// vpermwi128 v58,v61,228
	simde_mm_store_si128((simde__m128i*)v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0x1B));
	// vor128 v57,v62,v62
	simde_mm_store_si128((simde__m128i*)v57.u8, simde_mm_load_si128((simde__m128i*)v62.u8));
	// vor128 v56,v62,v62
	simde_mm_store_si128((simde__m128i*)v56.u8, simde_mm_load_si128((simde__m128i*)v62.u8));
	// vor128 v55,v62,v62
	simde_mm_store_si128((simde__m128i*)v55.u8, simde_mm_load_si128((simde__m128i*)v62.u8));
	// vrlimi128 v62,v63,11,0
	simde_mm_store_ps(v62.f32, simde_mm_blend_ps(simde_mm_load_ps(v62.f32), simde_mm_permute_ps(simde_mm_load_ps(v63.f32), 228), 11));
	// vrlimi128 v57,v63,1,0
	simde_mm_store_ps(v57.f32, simde_mm_blend_ps(simde_mm_load_ps(v57.f32), simde_mm_permute_ps(simde_mm_load_ps(v63.f32), 228), 1));
	// vrlimi128 v56,v63,13,0
	simde_mm_store_ps(v56.f32, simde_mm_blend_ps(simde_mm_load_ps(v56.f32), simde_mm_permute_ps(simde_mm_load_ps(v63.f32), 228), 13));
	// vrlimi128 v55,v63,7,0
	simde_mm_store_ps(v55.f32, simde_mm_blend_ps(simde_mm_load_ps(v55.f32), simde_mm_permute_ps(simde_mm_load_ps(v63.f32), 228), 7));
	// vmsum4fp128 v62,v62,v58
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v62.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v58.f32), 0xFF));
	// vmsum4fp128 v63,v57,v61
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v57.f32), simde_mm_load_ps(v61.f32), 0xFF));
	// vmsum4fp128 v61,v56,v60
	simde_mm_store_ps(v61.f32, simde_mm_dp_ps(simde_mm_load_ps(v56.f32), simde_mm_load_ps(v60.f32), 0xFF));
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
	// lfs f13,92(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
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
	// bl 0x822d6280
	sub_822D6280(ctx, base);
loc_82818B90:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82818BA0"))) PPC_WEAK_FUNC(sub_82818BA0);
PPC_FUNC_IMPL(__imp__sub_82818BA0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,220
	ctx.r10.s64 = ctx.r1.s64 + 220;
	// stfs f1,220(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v62,r11,r9
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// vmulfp128 v63,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e84be0
	sub_82E84BE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e84a10
	sub_82E84A10(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82818C18"))) PPC_WEAK_FUNC(sub_82818C18);
PPC_FUNC_IMPL(__imp__sub_82818C18) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r6,16
	ctx.r4.s64 = ctx.r6.s64 + 16;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e85da8
	sub_82E85DA8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f1,-24412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24412);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e86010
	sub_82E86010(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// bl 0x822d6280
	sub_822D6280(ctx, base);
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

__attribute__((alias("__imp__sub_82818CA0"))) PPC_WEAK_FUNC(sub_82818CA0);
PPC_FUNC_IMPL(__imp__sub_82818CA0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31959
	r11.s64 = -2094465024;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r4,-5808(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -5808);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8250c338
	sub_8250C338(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r6,r30,88
	ctx.r6.s64 = r30.s64 + 88;
	// bne cr6,0x82818cf4
	if (!cr6.eq) goto loc_82818CF4;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82818CF4:
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
	// beq cr6,0x82818d2c
	if (cr6.eq) goto loc_82818D2C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82818D10:
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
	// bne 0x82818d10
	if (!cr0.eq) goto loc_82818D10;
loc_82818D2C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82510d20
	sub_82510D20(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,40
	ctx.r4.s64 = r11.s64 + 40;
	// bne cr6,0x82818d50
	if (!cr6.eq) goto loc_82818D50;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82818D50:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250c358
	sub_8250C358(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82818D60"))) PPC_WEAK_FUNC(sub_82818D60);
PPC_FUNC_IMPL(__imp__sub_82818D60) {
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
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// lwz r5,200(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 200);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x827f49b0
	sub_827F49B0(ctx, base);
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

__attribute__((alias("__imp__sub_82818DA0"))) PPC_WEAK_FUNC(sub_82818DA0);
PPC_FUNC_IMPL(__imp__sub_82818DA0) {
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
	// li r31,0
	r31.s64 = 0;
	// addi r3,r30,-88
	ctx.r3.s64 = r30.s64 + -88;
	// bl 0x828183d0
	sub_828183D0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82818dd0
	if (!cr0.eq) goto loc_82818DD0;
	// li r31,1
	r31.s64 = 1;
loc_82818DD0:
	// lbz r11,236(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 236);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82818de0
	if (!cr6.eq) goto loc_82818DE0;
	// ori r31,r31,2
	r31.u64 = r31.u64 | 2;
loc_82818DE0:
	// clrlwi. r11,r31,31
	r11.u64 = r31.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82818df8
	if (!cr0.eq) goto loc_82818DF8;
	// lbz r11,237(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 237);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82818dfc
	if (cr0.eq) goto loc_82818DFC;
loc_82818DF8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82818DFC:
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

__attribute__((alias("__imp__sub_82818E18"))) PPC_WEAK_FUNC(sub_82818E18);
PPC_FUNC_IMPL(__imp__sub_82818E18) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-24340
	r11.s64 = r11.s64 + -24340;
	// addi r10,r10,-24404
	ctx.r10.s64 = ctx.r10.s64 + -24404;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r30,r31,88
	r30.s64 = r31.s64 + 88;
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// bl 0x822c0270
	sub_822C0270(ctx, base);
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82818e64
	if (cr6.eq) goto loc_82818E64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82818E64:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e657c8
	sub_82E657C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82818620
	sub_82818620(ctx, base);
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

__attribute__((alias("__imp__sub_82818E90"))) PPC_WEAK_FUNC(sub_82818E90);
PPC_FUNC_IMPL(__imp__sub_82818E90) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-88
	ctx.r3.s64 = ctx.r3.s64 + -88;
	// b 0x82819020
	sub_82819020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82818E98"))) PPC_WEAK_FUNC(sub_82818E98);
PPC_FUNC_IMPL(__imp__sub_82818E98) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r3,188(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r31,r29,16
	r31.s64 = r29.s64 + 16;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// lvx128 v62,r0,r30
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,0
	ctx.r7.s64 = 0;
	// lvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// vaddfp128 v62,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v62.f32, simde_mm_add_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x824942f0
	sub_824942F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82818f38
	if (cr0.eq) goto loc_82818F38;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	f0.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// li r30,1
	r30.s64 = 1;
	// lfs f12,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82818F20:
	// stvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d6280
	sub_822D6280(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b7c
	return;
loc_82818F38:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,0
	r30.s64 = 0;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// b 0x82818f20
	goto loc_82818F20;
}

__attribute__((alias("__imp__sub_82818F50"))) PPC_WEAK_FUNC(sub_82818F50);
PPC_FUNC_IMPL(__imp__sub_82818F50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x828187b8
	sub_828187B8(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-24340
	r11.s64 = r11.s64 + -24340;
	// addi r10,r10,-24404
	ctx.r10.s64 = ctx.r10.s64 + -24404;
	// li r30,0
	r30.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r30,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r30.u32);
	// addi r4,r11,-24320
	ctx.r4.s64 = r11.s64 + -24320;
	// li r5,62
	ctx.r5.s64 = 62;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82818fcc
	if (cr0.eq) goto loc_82818FCC;
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lfs f1,36(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r5,r11,-2560
	ctx.r5.s64 = r11.s64 + -2560;
	// addi r4,r10,-2576
	ctx.r4.s64 = ctx.r10.s64 + -2576;
	// bl 0x828186e0
	sub_828186E0(ctx, base);
	// b 0x82818fd0
	goto loc_82818FD0;
loc_82818FCC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82818FD0:
	// stw r3,196(r31)
	PPC_STORE_U32(r31.u32 + 196, ctx.r3.u32);
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r9,208
	ctx.r9.s64 = 208;
	// stw r10,200(r31)
	PPC_STORE_U32(r31.u32 + 200, ctx.r10.u32);
	// addi r5,r11,29232
	ctx.r5.s64 = r11.s64 + 29232;
	// lvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-31949
	r11.s64 = -2093809664;
	// stvx128 v63,r31,r9
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// addi r4,r11,-15648
	ctx.r4.s64 = r11.s64 + -15648;
	// bl 0x82309f98
	sub_82309F98(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stb r30,324(r31)
	PPC_STORE_U8(r31.u32 + 324, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,325(r31)
	PPC_STORE_U8(r31.u32 + 325, r30.u8);
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,320(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 320, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82819020"))) PPC_WEAK_FUNC(sub_82819020);
PPC_FUNC_IMPL(__imp__sub_82819020) {
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
	// bl 0x82818e18
	sub_82818E18(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82819050
	if (cr0.eq) goto loc_82819050;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82819050:
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

__attribute__((alias("__imp__sub_82819070"))) PPC_WEAK_FUNC(sub_82819070);
PPC_FUNC_IMPL(__imp__sub_82819070) {
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
	PPCRegister f31{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// stfs f31,276(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r29,r31,-88
	r29.s64 = r31.s64 + -88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82488a10
	sub_82488A10(ctx, base);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8281928c
	if (cr6.eq) goto loc_8281928C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82820298
	sub_82820298(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82819154
	if (cr0.eq) goto loc_82819154;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822f62d8
	sub_822F62D8(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r6,r11,-2560
	ctx.r6.s64 = r11.s64 + -2560;
	// addi r4,r10,-2576
	ctx.r4.s64 = ctx.r10.s64 + -2576;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e85da8
	sub_82E85DA8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822f6298
	sub_822F6298(ctx, base);
	// addi r30,r31,136
	r30.s64 = r31.s64 + 136;
	// li r11,16
	r11.s64 = 16;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stvx128 v63,r30,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x822d6280
	sub_822D6280(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,136(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// stfs f13,140(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 140, temp.u32);
	// stfs f12,144(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f11,148(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// bl 0x822d6280
	sub_822D6280(ctx, base);
loc_82819154:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82818430
	sub_82818430(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82819184
	if (cr0.eq) goto loc_82819184;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82819184
	if (cr6.eq) goto loc_82819184;
	// addi r5,r31,136
	ctx.r5.s64 = r31.s64 + 136;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82818a08
	sub_82818A08(ctx, base);
loc_82819184:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82818490
	sub_82818490(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x828191b4
	if (!cr6.eq) goto loc_828191B4;
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 232);
	f0.f64 = double(temp.f32);
	// addi r6,r31,136
	ctx.r6.s64 = r31.s64 + 136;
	// lfs f13,32(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r31,120
	ctx.r5.s64 = r31.s64 + 120;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 + ctx.f13.f64));
	// bl 0x82818ba0
	sub_82818BA0(ctx, base);
loc_828191B4:
	// lbz r11,236(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 236);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82819200
	if (!cr0.eq) goto loc_82819200;
	// addi r11,r1,276
	r11.s64 = ctx.r1.s64 + 276;
	// li r10,120
	ctx.r10.s64 = 120;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v62,r31,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x827f3828
	sub_827F3828(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r31,136
	ctx.r4.s64 = r31.s64 + 136;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82818e98
	sub_82818E98(ctx, base);
	// stb r3,236(r31)
	PPC_STORE_U8(r31.u32 + 236, ctx.r3.u8);
loc_82819200:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82820298
	sub_82820298(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82819218
	if (cr0.eq) goto loc_82819218;
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// bl 0x822f63a0
	sub_822F63A0(ctx, base);
loc_82819218:
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8281928c
	if (cr6.eq) goto loc_8281928C;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// li r10,152
	ctx.r10.s64 = 152;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r31,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
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
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x8281928c
	if (!cr6.lt) goto loc_8281928C;
	// li r11,1
	r11.s64 = 1;
	// stb r11,237(r31)
	PPC_STORE_U8(r31.u32 + 237, r11.u8);
loc_8281928C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82819298"))) PPC_WEAK_FUNC(sub_82819298);
PPC_FUNC_IMPL(__imp__sub_82819298) {
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
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r5,39
	ctx.r5.s64 = 39;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r11,32
	r11.s64 = 32;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// lfs f1,-22120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22120);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82f226c8
	sub_82F226C8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,28844(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28844);
	// bl 0x822e6b48
	sub_822E6B48(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e6ad8
	sub_822E6AD8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// bl 0x8248eaf0
	sub_8248EAF0(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,-24320
	ctx.r4.s64 = r11.s64 + -24320;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82819374
	if (cr0.eq) goto loc_82819374;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r30,1
	r30.s64 = 1;
	// addi r26,r1,80
	r26.s64 = ctx.r1.s64 + 80;
	// bl 0x827f3820
	sub_827F3820(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82512d38
	sub_82512D38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x82494578
	sub_82494578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82819378
	goto loc_82819378;
loc_82819374:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82819378:
	// addi r3,r27,100
	ctx.r3.s64 = r27.s64 + 100;
	// bl 0x822e6a00
	sub_822E6A00(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82819390
	if (cr0.eq) goto loc_82819390;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_82819390:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828193a0
	if (cr6.eq) goto loc_828193A0;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_828193A0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82820298
	sub_82820298(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82819404
	if (cr0.eq) goto loc_82819404;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822f62d8
	sub_822F62D8(ctx, base);
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// vspltisw128 v62,1
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_set1_epi32(int(0x1)));
	// vspltisw128 v61,0
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
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
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f0.f64 = double(temp.f32);
	// stfs f0,232(r27)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r27.u32 + 232, temp.u32);
loc_82819404:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82819410"))) PPC_WEAK_FUNC(sub_82819410);
PPC_FUNC_IMPL(__imp__sub_82819410) {
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
	// addi r3,r3,-88
	ctx.r3.s64 = ctx.r3.s64 + -88;
	// li r31,0
	r31.s64 = 0;
	// bl 0x828183d0
	sub_828183D0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82819438
	if (!cr0.eq) goto loc_82819438;
	// li r31,1
	r31.s64 = 1;
loc_82819438:
	// cntlzw r11,r31
	r11.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82819458"))) PPC_WEAK_FUNC(sub_82819458);
PPC_FUNC_IMPL(__imp__sub_82819458) {
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
	// bne cr6,0x82819498
	if (!cr6.eq) goto loc_82819498;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828194c8
	if (cr6.eq) goto loc_828194C8;
	// ld r11,0(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// ld r11,8(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// b 0x828194c8
	goto loc_828194C8;
loc_82819498:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x828194c8
	if (cr6.eq) goto loc_828194C8;
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-2288
	ctx.r4.s64 = r11.s64 + -2288;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x828194c0
	if (cr0.eq) goto loc_828194C0;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x828194c8
	goto loc_828194C8;
loc_828194C0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_828194C8:
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

__attribute__((alias("__imp__sub_828194E0"))) PPC_WEAK_FUNC(sub_828194E0);
PPC_FUNC_IMPL(__imp__sub_828194E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r3,200(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 200);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82819540"))) PPC_WEAK_FUNC(sub_82819540);
PPC_FUNC_IMPL(__imp__sub_82819540) {
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
	// lwz r3,200(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 200);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e85b50
	sub_82E85B50(ctx, base);
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

__attribute__((alias("__imp__sub_82819590"))) PPC_WEAK_FUNC(sub_82819590);
PPC_FUNC_IMPL(__imp__sub_82819590) {
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
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x827c5f88
	sub_827C5F88(ctx, base);
	// lwz r31,8(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828195c0
	if (cr6.eq) goto loc_828195C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ed6b88
	sub_82ED6B88(ctx, base);
loc_828195C0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x827c5f88
	sub_827C5F88(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828195ec
	if (cr6.eq) goto loc_828195EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ed5390
	sub_82ED5390(ctx, base);
loc_828195EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_828195F8"))) PPC_WEAK_FUNC(sub_828195F8);
PPC_FUNC_IMPL(__imp__sub_828195F8) {
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
	// beq 0x82819650
	if (cr0.eq) goto loc_82819650;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-24224
	ctx.r9.s64 = r11.s64 + -24224;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82819654
	goto loc_82819654;
loc_82819650:
	// li r11,0
	r11.s64 = 0;
loc_82819654:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828196a0
	if (!cr6.eq) goto loc_828196A0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82819680
	if (cr6.eq) goto loc_82819680;
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
loc_82819680:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-2496(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -2496);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_828196A0:
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

__attribute__((alias("__imp__sub_828196C0"))) PPC_WEAK_FUNC(sub_828196C0);
PPC_FUNC_IMPL(__imp__sub_828196C0) {
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
	// beq cr6,0x828196ec
	if (cr6.eq) goto loc_828196EC;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82819458
	sub_82819458(ctx, base);
	// b 0x828196f8
	goto loc_828196F8;
loc_828196EC:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// addi r11,r11,-2288
	r11.s64 = r11.s64 + -2288;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_828196F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82819708"))) PPC_WEAK_FUNC(sub_82819708);
PPC_FUNC_IMPL(__imp__sub_82819708) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82488a10
	sub_82488A10(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,216(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// lfs f0,-31000(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31000);
	f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x824907e0
	sub_824907E0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lvx128 v62,r0,r3
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r29
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltisw128 v61,1
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_set1_epi32(int(0x1)));
	// vsubfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// vspltisw128 v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_set1_epi32(int(0x0)));
	// lwz r11,348(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 348);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r9,r31,344
	ctx.r9.s64 = r31.s64 + 344;
	// vcsxwfp128 v13,v61,1
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v61.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
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
	// stvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq cr6,0x8281980c
	if (cr6.eq) goto loc_8281980C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_828197C0:
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * f31.f64));
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x828197c0
	if (!cr6.eq) goto loc_828197C0;
loc_8281980C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82819818"))) PPC_WEAK_FUNC(sub_82819818);
PPC_FUNC_IMPL(__imp__sub_82819818) {
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
	// bl 0x828195f8
	sub_828195F8(ctx, base);
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
	// beq cr6,0x82819870
	if (cr6.eq) goto loc_82819870;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82819870:
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

__attribute__((alias("__imp__sub_82819888"))) PPC_WEAK_FUNC(sub_82819888);
PPC_FUNC_IMPL(__imp__sub_82819888) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x827f3820
	sub_827F3820(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// bne cr6,0x828198c4
	if (!cr6.eq) goto loc_828198C4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_828198C4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8250e538
	sub_8250E538(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r31,292(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 292);
	// b 0x82819914
	goto loc_82819914;
loc_828198DC:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-192
	ctx.r3.s64 = r11.s64 + -192;
	// bne cr6,0x828198f0
	if (!cr6.eq) goto loc_828198F0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_828198F0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x827d92b8
	sub_827D92B8(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// beq cr6,0x82819910
	if (cr6.eq) goto loc_82819910;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82819910:
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_82819914:
	// lwz r11,296(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 296);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x828198dc
	if (!cr6.eq) goto loc_828198DC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82819930"))) PPC_WEAK_FUNC(sub_82819930);
PPC_FUNC_IMPL(__imp__sub_82819930) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r26,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r26.u32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r26,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r26.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-24152
	ctx.r4.s64 = r11.s64 + -24152;
	// li r5,417
	ctx.r5.s64 = 417;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8281999c
	if (cr0.eq) goto loc_8281999C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f1e48
	sub_822F1E48(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r11,r11,-24204
	r11.s64 = r11.s64 + -24204;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x828199a0
	goto loc_828199A0;
loc_8281999C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_828199A0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82819818
	sub_82819818(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-148
	ctx.r3.s64 = r11.s64 + -148;
	// bne cr6,0x828199c0
	if (!cr6.eq) goto loc_828199C0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_828199C0:
	// bl 0x8252b600
	sub_8252B600(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_828199D0"))) PPC_WEAK_FUNC(sub_828199D0);
PPC_FUNC_IMPL(__imp__sub_828199D0) {
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
	// beq 0x82819a28
	if (cr0.eq) goto loc_82819A28;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-24244
	ctx.r9.s64 = r11.s64 + -24244;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82819a2c
	goto loc_82819A2C;
loc_82819A28:
	// li r11,0
	r11.s64 = 0;
loc_82819A2C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82819a6c
	if (!cr6.eq) goto loc_82819A6C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82819a4c
	if (cr6.eq) goto loc_82819A4C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e6478
	sub_822E6478(ctx, base);
loc_82819A4C:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-2496(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -2496);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82819A6C:
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

__attribute__((alias("__imp__sub_82819A88"))) PPC_WEAK_FUNC(sub_82819A88);
PPC_FUNC_IMPL(__imp__sub_82819A88) {
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
	// bl 0x828199d0
	sub_828199D0(ctx, base);
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
	// beq cr6,0x82819ae0
	if (cr6.eq) goto loc_82819AE0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82819AE0:
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

__attribute__((alias("__imp__sub_82819AF8"))) PPC_WEAK_FUNC(sub_82819AF8);
PPC_FUNC_IMPL(__imp__sub_82819AF8) {
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
	// addi r31,r11,-18672
	r31.s64 = r11.s64 + -18672;
	// lwz r11,-18664(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18664);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82819b40
	if (!cr0.eq) goto loc_82819B40;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// lis r8,-32126
	ctx.r8.s64 = -2105409536;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r9,r9,6712
	ctx.r9.s64 = ctx.r9.s64 + 6712;
	// addi r8,r8,-26944
	ctx.r8.s64 = ctx.r8.s64 + -26944;
	// stw r11,-18664(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18664, r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
loc_82819B40:
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
	// beq 0x82819b6c
	if (cr0.eq) goto loc_82819B6C;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// b 0x82819b70
	goto loc_82819B70;
loc_82819B6C:
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
loc_82819B70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82819B78"))) PPC_WEAK_FUNC(sub_82819B78);
PPC_FUNC_IMPL(__imp__sub_82819B78) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-24012
	r11.s64 = r11.s64 + -24012;
	// addi r10,r10,-24076
	ctx.r10.s64 = ctx.r10.s64 + -24076;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r3,r31,376
	ctx.r3.s64 = r31.s64 + 376;
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// addi r29,r31,88
	r29.s64 = r31.s64 + 88;
	// bl 0x82b971e8
	sub_82B971E8(ctx, base);
	// addi r3,r31,292
	ctx.r3.s64 = r31.s64 + 292;
	// bl 0x827fc218
	sub_827FC218(ctx, base);
	// addi r3,r31,276
	ctx.r3.s64 = r31.s64 + 276;
	// bl 0x82b7b7d0
	sub_82B7B7D0(ctx, base);
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82819bcc
	if (cr6.eq) goto loc_82819BCC;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_82819BCC:
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82819be4
	if (cr6.eq) goto loc_82819BE4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82819BE4:
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82819bf4
	if (cr6.eq) goto loc_82819BF4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82819BF4:
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82819c04
	if (cr6.eq) goto loc_82819C04;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82819C04:
	// lwz r30,196(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82819c20
	if (cr6.eq) goto loc_82819C20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82493550
	sub_82493550(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_82819C20:
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82819c30
	if (cr6.eq) goto loc_82819C30;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82819C30:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e657c8
	sub_82E657C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82818620
	sub_82818620(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82819C48"))) PPC_WEAK_FUNC(sub_82819C48);
PPC_FUNC_IMPL(__imp__sub_82819C48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v63{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x828187b8
	sub_828187B8(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-24012
	r11.s64 = r11.s64 + -24012;
	// addi r10,r10,-24076
	ctx.r10.s64 = ctx.r10.s64 + -24076;
	// li r30,0
	r30.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// stw r30,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r30,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r30.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// stw r30,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r30.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r30.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(r31.u32 + 208, r30.u32);
	// stw r30,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r30.u32);
	// stw r30,216(r31)
	PPC_STORE_U32(r31.u32 + 216, r30.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r30.u32);
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// lis r11,-31943
	r11.s64 = -2093416448;
	// li r10,240
	ctx.r10.s64 = 240;
	// addi r11,r11,29232
	r11.s64 = r11.s64 + 29232;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,256
	ctx.r8.s64 = 256;
	// addi r3,r31,292
	ctx.r3.s64 = r31.s64 + 292;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r29,r9
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r30,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r30.u32);
	// stw r30,280(r31)
	PPC_STORE_U32(r31.u32 + 280, r30.u32);
	// stw r30,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r30.u32);
	// stw r30,288(r31)
	PPC_STORE_U32(r31.u32 + 288, r30.u32);
	// bl 0x827fbcd0
	sub_827FBCD0(ctx, base);
	// stw r30,380(r31)
	PPC_STORE_U32(r31.u32 + 380, r30.u32);
	// stw r30,384(r31)
	PPC_STORE_U32(r31.u32 + 384, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,388(r31)
	PPC_STORE_U32(r31.u32 + 388, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82819D00"))) PPC_WEAK_FUNC(sub_82819D00);
PPC_FUNC_IMPL(__imp__sub_82819D00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v63{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r4,28764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28764);
	// bl 0x822e6b48
	sub_822E6B48(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822e6ad8
	sub_822E6AD8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U64(r28.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// bl 0x8248eaf0
	sub_8248EAF0(ctx, base);
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lwz r9,196(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,29232
	r11.s64 = r11.s64 + 29232;
	// addi r30,r1,112
	r30.s64 = ctx.r1.s64 + 112;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x822ed088
	sub_822ED088(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82819d9c
	if (cr0.eq) goto loc_82819D9C;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82819D9C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82819DA8"))) PPC_WEAK_FUNC(sub_82819DA8);
PPC_FUNC_IMPL(__imp__sub_82819DA8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// addi r30,r31,256
	r30.s64 = r31.s64 + 256;
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// bl 0x824907e0
	sub_824907E0(ctx, base);
	// lis r11,-31945
	r11.s64 = -2093547520;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-28908
	ctx.r4.s64 = r11.s64 + -28908;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x8241a708
	sub_8241A708(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82819e18
	if (cr6.eq) goto loc_82819E18;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82819E18:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r27,92(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x82819f00
	if (cr6.eq) goto loc_82819F00;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r11,-24152
	r29.s64 = r11.s64 + -24152;
	// lfs f31,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f31.f64 = double(temp.f32);
loc_82819E3C:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x824917d0
	sub_824917D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82819ef0
	if (cr0.eq) goto loc_82819EF0;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r10,284(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 284);
	// lwz r11,280(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 280);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// b 0x82819e74
	goto loc_82819E74;
loc_82819E64:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// beq cr6,0x82819f1c
	if (cr6.eq) goto loc_82819F1C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82819E74:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82819e64
	if (cr6.lt) goto loc_82819E64;
	// li r11,0
	r11.s64 = 0;
loc_82819E80:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82819ef0
	if (!cr0.eq) goto loc_82819EF0;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// beq cr6,0x82819ebc
	if (cr6.eq) goto loc_82819EBC;
	// addi r11,r27,4
	r11.s64 = r27.s64 + 4;
loc_82819EA0:
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
	// bne 0x82819ea0
	if (!cr0.eq) goto loc_82819EA0;
loc_82819EBC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r5,347
	ctx.r5.s64 = 347;
	// addi r3,r26,40
	ctx.r3.s64 = r26.s64 + 40;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82819ee4
	if (cr6.eq) goto loc_82819EE4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82819EE4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,276
	ctx.r3.s64 = r31.s64 + 276;
	// bl 0x82498048
	sub_82498048(ctx, base);
loc_82819EF0:
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82819e3c
	if (!cr6.eq) goto loc_82819E3C;
loc_82819F00:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82819f10
	if (cr6.eq) goto loc_82819F10;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82819F10:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831b0b70
	return;
loc_82819F1C:
	// li r11,1
	r11.s64 = 1;
	// b 0x82819e80
	goto loc_82819E80;
}

__attribute__((alias("__imp__sub_82819F28"))) PPC_WEAK_FUNC(sub_82819F28);
PPC_FUNC_IMPL(__imp__sub_82819F28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	PPCRegister f31{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b08
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// li r20,0
	r20.s64 = 0;
	// addi r11,r11,29232
	r11.s64 = r11.s64 + 29232;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,152
	ctx.r10.s64 = 152;
	// mr r26,r20
	r26.u64 = r20.u64;
	// addi r21,r31,288
	r21.s64 = r31.s64 + 288;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// bl 0x829f8840
	sub_829F8840(ctx, base);
	// addi r4,r31,188
	ctx.r4.s64 = r31.s64 + 188;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r5,192(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// bl 0x825acda0
	sub_825ACDA0(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x827f47e8
	sub_827F47E8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r30,r31,112
	r30.s64 = r31.s64 + 112;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r3,252(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r29,r11,1
	r29.u64 = r11.u64 ^ 1;
	// beq cr6,0x82819fe0
	if (cr6.eq) goto loc_82819FE0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82819FE0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// clrlwi. r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r27,r11,-24152
	r27.s64 = r11.s64 + -24152;
	// beq 0x8281a0f0
	if (cr0.eq) goto loc_8281A0F0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82e1ac38
	sub_82E1AC38(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
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
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,127
	ctx.r5.s64 = 127;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x8281a078
	if (cr0.eq) goto loc_8281A078;
	// lfs f0,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 60);
	f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f13,56(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f12,52(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,48(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,192(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f12,196(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f13,200(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f0,204(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// bl 0x82e85b50
	sub_82E85B50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82590358
	sub_82590358(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8281a07c
	goto loc_8281A07C;
loc_8281A078:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
loc_8281A07C:
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x823d69a8
	sub_823D69A8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x8281a0e4
	if (cr0.eq) goto loc_8281A0E4;
	// lfs f0,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 60);
	f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f13,56(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f12,52(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,48(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,160(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x82e85b50
	sub_82E85B50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82590358
	sub_82590358(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8281a0e8
	goto loc_8281A0E8;
loc_8281A0E4:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
loc_8281A0E8:
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x823d69a8
	sub_823D69A8(ctx, base);
loc_8281A0F0:
	// lwz r30,120(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// addi r24,r31,120
	r24.s64 = r31.s64 + 120;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8281a13c
	if (cr6.eq) goto loc_8281A13C;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x827f3820
	sub_827F3820(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8281a128
	if (!cr6.eq) goto loc_8281A128;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
loc_8281A128:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8250c758
	sub_8250C758(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_8281A13C:
	// lwz r30,128(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// addi r23,r31,128
	r23.s64 = r31.s64 + 128;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8281a188
	if (cr6.eq) goto loc_8281A188;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x827f3820
	sub_827F3820(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8281a174
	if (!cr6.eq) goto loc_8281A174;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
loc_8281A174:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8250c758
	sub_8250C758(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_8281A188:
	// addi r22,r31,-88
	r22.s64 = r31.s64 + -88;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82488a10
	sub_82488A10(ctx, base);
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f31,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f31.f64 = double(temp.f32);
	// addi r11,r11,30976
	r11.s64 = r11.s64 + 30976;
	// lwz r9,0(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// addi r10,r10,-23920
	ctx.r10.s64 = ctx.r10.s64 + -23920;
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// li r6,20
	ctx.r6.s64 = 20;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,39
	ctx.r5.s64 = 39;
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r4,96
	ctx.r4.s64 = 96;
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwzx r3,r6,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r11,96
	r11.s64 = 96;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lfs f2,-396(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -396);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82f270c8
	sub_82F270C8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r28,r31,184
	r28.s64 = r31.s64 + 184;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822ef400
	sub_822EF400(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8281a220
	if (cr6.eq) goto loc_8281A220;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_8281A220:
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,28772(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28772);
	// bl 0x822e6b48
	sub_822E6B48(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822e6ad8
	sub_822E6AD8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// bl 0x8248eaf0
	sub_8248EAF0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8281a29c
	if (cr0.eq) goto loc_8281A29C;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// li r26,1
	r26.s64 = 1;
	// bl 0x827f3820
	sub_827F3820(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82512d38
	sub_82512D38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82493478
	sub_82493478(ctx, base);
	// b 0x8281a2a0
	goto loc_8281A2A0;
loc_8281A29C:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
loc_8281A2A0:
	// lwz r30,108(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// stw r3,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r3.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8281a2c0
	if (cr6.eq) goto loc_8281A2C0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82493550
	sub_82493550(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_8281A2C0:
	// clrlwi. r11,r26,31
	r11.u64 = r26.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8281a2d4
	if (cr0.eq) goto loc_8281A2D4;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r26,r26,0,0,30
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_8281A2D4:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,153
	ctx.r5.s64 = 153;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8281a340
	if (cr0.eq) goto loc_8281A340;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// beq cr6,0x8281a304
	if (cr6.eq) goto loc_8281A304;
	// bl 0x822e9f20
	sub_822E9F20(ctx, base);
loc_8281A304:
	// ori r11,r26,2
	r11.u64 = r26.u64 | 2;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// ori r26,r11,4
	r26.u64 = r11.u64 | 4;
	// addi r28,r1,88
	r28.s64 = ctx.r1.s64 + 88;
	// bl 0x827f3820
	sub_827F3820(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
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
	// bl 0x82819930
	sub_82819930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8281a344
	goto loc_8281A344;
loc_8281A340:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
loc_8281A344:
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// bl 0x82819a88
	sub_82819A88(ctx, base);
	// rlwinm. r11,r26,0,29,29
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8281a360
	if (cr0.eq) goto loc_8281A360;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// rlwinm r26,r26,0,30,28
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_8281A360:
	// rlwinm. r11,r26,0,30,30
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8281a378
	if (cr0.eq) goto loc_8281A378;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281a378
	if (cr6.eq) goto loc_8281A378;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_8281A378:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x827f3820
	sub_827F3820(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// bne cr6,0x8281a3a0
	if (!cr6.eq) goto loc_8281A3A0;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
loc_8281A3A0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8250e538
	sub_8250E538(ctx, base);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23948
	ctx.r4.s64 = r11.s64 + -23948;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// beq cr6,0x8281a3f8
	if (cr6.eq) goto loc_8281A3F8;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8281A3DC:
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
	// bne 0x8281a3dc
	if (!cr0.eq) goto loc_8281A3DC;
loc_8281A3F8:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,-192
	ctx.r4.s64 = r11.s64 + -192;
	// bne cr6,0x8281a40c
	if (!cr6.eq) goto loc_8281A40C;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
loc_8281A40C:
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827da560
	sub_827DA560(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281a430
	if (cr6.eq) goto loc_8281A430;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281A430:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82afaf88
	sub_82AFAF88(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23968
	ctx.r4.s64 = r11.s64 + -23968;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// beq cr6,0x8281a48c
	if (cr6.eq) goto loc_8281A48C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8281A470:
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
	// bne 0x8281a470
	if (!cr0.eq) goto loc_8281A470;
loc_8281A48C:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,-192
	ctx.r4.s64 = r11.s64 + -192;
	// bne cr6,0x8281a4a0
	if (!cr6.eq) goto loc_8281A4A0;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
loc_8281A4A0:
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827da560
	sub_827DA560(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281a4c4
	if (cr6.eq) goto loc_8281A4C4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281A4C4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82afaf88
	sub_82AFAF88(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23988
	ctx.r4.s64 = r11.s64 + -23988;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// beq cr6,0x8281a520
	if (cr6.eq) goto loc_8281A520;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8281A504:
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
	// bne 0x8281a504
	if (!cr0.eq) goto loc_8281A504;
loc_8281A520:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,-192
	ctx.r4.s64 = r11.s64 + -192;
	// bne cr6,0x8281a534
	if (!cr6.eq) goto loc_8281A534;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
loc_8281A534:
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x827da560
	sub_827DA560(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281a558
	if (cr6.eq) goto loc_8281A558;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281A558:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82afaf88
	sub_82AFAF88(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82e88150
	sub_82E88150(ctx, base);
	// lwz r28,4(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r29,0(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// b 0x8281a5e0
	goto loc_8281A5E0;
loc_8281A580:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r30,r11,264
	r30.s64 = r11.s64 + 264;
	// lwz r11,268(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 268);
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x8281a5dc
	if (cr6.eq) goto loc_8281A5DC;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r20.u32);
	// addi r11,r11,-26872
	r11.s64 = r11.s64 + -26872;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_8281A5A8:
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r22,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r22.u32);
	// ld r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r20,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, r20.u32);
	// bl 0x82819af8
	sub_82819AF8(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8268e860
	sub_8268E860(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8281a5a8
	if (!cr6.eq) goto loc_8281A5A8;
loc_8281A5DC:
	// lwz r29,0(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 0);
loc_8281A5E0:
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// bne cr6,0x8281a580
	if (!cr6.eq) goto loc_8281A580;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281a5f8
	if (cr6.eq) goto loc_8281A5F8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281A5F8:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281a608
	if (cr6.eq) goto loc_8281A608;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281A608:
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281a618
	if (cr6.eq) goto loc_8281A618;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281A618:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_8281A630"))) PPC_WEAK_FUNC(sub_8281A630);
PPC_FUNC_IMPL(__imp__sub_8281A630) {
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
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stfs f1,228(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r29,r31,-88
	r29.s64 = r31.s64 + -88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82488a10
	sub_82488A10(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8255e2b8
	sub_8255E2B8(ctx, base);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq cr6,0x8281a6c8
	if (cr6.eq) goto loc_8281A6C8;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r30,120(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825904a0
	sub_825904A0(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r30,120(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825904e8
	sub_825904E8(ctx, base);
loc_8281A6C8:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281a7b0
	if (cr6.eq) goto loc_8281A7B0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x824907e0
	sub_824907E0(ctx, base);
	// li r11,32
	r11.s64 = 32;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r9,r1,228
	ctx.r9.s64 = ctx.r1.s64 + 228;
	// addi r10,r10,-2480
	ctx.r10.s64 = ctx.r10.s64 + -2480;
	// addi r30,r31,152
	r30.s64 = r31.s64 + 152;
	// lvlx128 v63,r28,r11
	temp.u32 = r28.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lvlx128 v61,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v0,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0xFF));
	// lvx128 v13,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// vmulfp128 v12,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// vmaddfp v0,v12,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e84a10
	sub_82E84A10(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82819d00
	sub_82819D00(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// bl 0x825904a0
	sub_825904A0(ctx, base);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// li r11,48
	r11.s64 = 48;
	// addi r10,r10,30976
	ctx.r10.s64 = ctx.r10.s64 + 30976;
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// stvx128 v63,r10,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r10,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// bl 0x82819590
	sub_82819590(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822f1eb8
	sub_822F1EB8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822f2ba8
	sub_822F2BA8(ctx, base);
loc_8281A7B0:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8281a7d8
	if (cr6.eq) goto loc_8281A7D8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// bl 0x827f3820
	sub_827F3820(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82819da8
	sub_82819DA8(ctx, base);
loc_8281A7D8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b67888
	sub_82B67888(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8281A7F8"))) PPC_WEAK_FUNC(sub_8281A7F8);
PPC_FUNC_IMPL(__imp__sub_8281A7F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,356(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281A800"))) PPC_WEAK_FUNC(sub_8281A800);
PPC_FUNC_IMPL(__imp__sub_8281A800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,268(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8281a858
	if (!cr6.eq) goto loc_8281A858;
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
	// bne cr6,0x8281a844
	if (!cr6.eq) goto loc_8281A844;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8281A844:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8250c5d0
	sub_8250C5D0(ctx, base);
	// stw r3,268(r31)
	PPC_STORE_U32(r31.u32 + 268, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_8281A858:
	// lwz r11,268(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8281a88c
	if (cr6.eq) goto loc_8281A88C;
	// lwz r11,-88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -88);
	// addi r4,r31,-88
	ctx.r4.s64 = r31.s64 + -88;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,280
	r11.s64 = 280;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8281A88C:
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

__attribute__((alias("__imp__sub_8281A8A8"))) PPC_WEAK_FUNC(sub_8281A8A8);
PPC_FUNC_IMPL(__imp__sub_8281A8A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,212(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// b 0x82818a08
	sub_82818A08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8281A8B0"))) PPC_WEAK_FUNC(sub_8281A8B0);
PPC_FUNC_IMPL(__imp__sub_8281A8B0) {
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
	// bl 0x82e65b68
	sub_82E65B68(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r10,-23892
	ctx.r10.s64 = ctx.r10.s64 + -23892;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
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

__attribute__((alias("__imp__sub_8281A8F8"))) PPC_WEAK_FUNC(sub_8281A8F8);
PPC_FUNC_IMPL(__imp__sub_8281A8F8) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r11,-23904
	r29.s64 = r11.s64 + -23904;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,-18656(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18656);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lis r28,-31945
	r28.s64 = -2093547520;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8281a948
	if (!cr0.eq) goto loc_8281A948;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,-18660(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + -18660, temp.u32);
	// stw r11,-18656(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18656, r11.u32);
loc_8281A948:
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 48);
	f0.f64 = double(temp.f32);
	// lfs f13,52(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f11,60(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 60);
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
	// beq cr6,0x8281a998
	if (cr6.eq) goto loc_8281A998;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82494300
	sub_82494300(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r30,196(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// bl 0x82e85b50
	sub_82E85B50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82494308
	sub_82494308(ctx, base);
loc_8281A998:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,368
	ctx.r10.s64 = 368;
	// lis r9,-31956
	ctx.r9.s64 = -2094268416;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r31,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// lfs f0,-1952(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -1952);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// lfs f31,2240(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2240);
	f31.f64 = double(temp.f32);
	// vmsum3fp128 v63,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x8281a9e0
	if (!cr6.lt) goto loc_8281A9E0;
	// stfs f31,384(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 384, temp.u32);
	// b 0x8281aaa4
	goto loc_8281AAA4;
loc_8281A9E0:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x824942f8
	sub_824942F8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8281aa88
	if (cr0.eq) goto loc_8281AA88;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vspltisw128 v63,1
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_set1_epi32(int(0x1)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f0,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	f0.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// vspltisw128 v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_set1_epi32(int(0x0)));
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// vcsxwfp128 v13,v63,1
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v63.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// lvx128 v61,r0,r11
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stfs f13,100(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v63,v63,v61
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v61.f32)));
	// vmsum3fp128 v63,v63,v63
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// lfs f0,-18660(r28)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -18660);
	f0.f64 = double(temp.f32);
	// lfs f12,384(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 384);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-24788(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24788);
	ctx.f13.f64 = double(temp.f32);
	// vrsqrtefp128 v0,v63
	ctx.fpscr.enableFlushModeUnconditional();
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
	// lfs f11,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fmuls f0,f0,f30
	f0.f64 = double(float(f0.f64 * f30.f64));
	// fmadds f0,f0,f13,f12
	f0.f64 = double(float(f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// b 0x8281aaa0
	goto loc_8281AAA0;
loc_8281AA88:
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,384(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 384);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8281aaa4
	if (!cr6.gt) goto loc_8281AAA4;
	// lfs f13,-18660(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + -18660);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f13,f30,f0
	f0.f64 = double(float(-(ctx.f13.f64 * f30.f64 - f0.f64)));
loc_8281AAA0:
	// stfs f0,384(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 384, temp.u32);
loc_8281AAA4:
	// lfs f0,384(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 384);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bge cr6,0x8281aab4
	if (!cr6.lt) goto loc_8281AAB4;
	// stfs f31,384(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 384, temp.u32);
loc_8281AAB4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8281AAC8"))) PPC_WEAK_FUNC(sub_8281AAC8);
PPC_FUNC_IMPL(__imp__sub_8281AAC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x8315cf68
	sub_8315CF68(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x8281aafc
	if (cr0.eq) goto loc_8281AAFC;
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
loc_8281AAFC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
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

__attribute__((alias("__imp__sub_8281AB20"))) PPC_WEAK_FUNC(sub_8281AB20);
PPC_FUNC_IMPL(__imp__sub_8281AB20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,29232
	r11.s64 = r11.s64 + 29232;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
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
	// beq cr6,0x8281ab98
	if (cr6.eq) goto loc_8281AB98;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8281AB7C:
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
	// bne 0x8281ab7c
	if (!cr0.eq) goto loc_8281AB7C;
loc_8281AB98:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lwz r6,356(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 356);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-23832
	ctx.r4.s64 = r11.s64 + -23832;
	// li r5,245
	ctx.r5.s64 = 245;
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281abc4
	if (cr6.eq) goto loc_8281ABC4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281ABC4:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281abd4
	if (cr6.eq) goto loc_8281ABD4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281ABD4:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-20912
	r11.s64 = r11.s64 + -20912;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8281AC00"))) PPC_WEAK_FUNC(sub_8281AC00);
PPC_FUNC_IMPL(__imp__sub_8281AC00) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// lwz r26,4(r24)
	r26.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// beq cr6,0x8281acec
	if (cr6.eq) goto loc_8281ACEC;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// li r29,0
	r29.s64 = 0;
	// lfs f31,2240(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2240);
	f31.f64 = double(temp.f32);
	// addi r27,r10,-23832
	r27.s64 = ctx.r10.s64 + -23832;
	// addi r31,r9,-28908
	r31.s64 = ctx.r9.s64 + -28908;
	// addi r30,r11,29232
	r30.s64 = r11.s64 + 29232;
loc_8281AC50:
	// lwz r3,24(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// bl 0x824917d0
	sub_824917D0(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x8281acdc
	if (cr0.eq) goto loc_8281ACDC;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r25,240
	ctx.r5.s64 = r25.s64 + 240;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241a708
	sub_8241A708(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281aca4
	if (cr6.eq) goto loc_8281ACA4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281ACA4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r28,r1,80
	r28.s64 = ctx.r1.s64 + 80;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r5,303
	ctx.r5.s64 = 303;
	// addi r3,r23,40
	ctx.r3.s64 = r23.s64 + 40;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281acdc
	if (cr6.eq) goto loc_8281ACDC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281ACDC:
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// addi r26,r26,40
	r26.s64 = r26.s64 + 40;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// bne cr6,0x8281ac50
	if (!cr6.eq) goto loc_8281AC50;
loc_8281ACEC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_8281ACF8"))) PPC_WEAK_FUNC(sub_8281ACF8);
PPC_FUNC_IMPL(__imp__sub_8281ACF8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r29,r31,-88
	r29.s64 = r31.s64 + -88;
	// li r30,0
	r30.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828183d0
	sub_828183D0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8281ad28
	if (!cr0.eq) goto loc_8281AD28;
	// li r30,1
	r30.s64 = 1;
loc_8281AD28:
	// lwz r11,252(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 252);
	// addi r5,r31,248
	ctx.r5.s64 = r31.s64 + 248;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8281ad5c
	if (cr6.eq) goto loc_8281AD5C;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// li r9,40
	ctx.r9.s64 = 40;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw. r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8281ad5c
	if (cr0.eq) goto loc_8281AD5C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8281ac00
	sub_8281AC00(ctx, base);
	// ori r30,r30,2
	r30.u64 = r30.u64 | 2;
loc_8281AD5C:
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8281AD70"))) PPC_WEAK_FUNC(sub_8281AD70);
PPC_FUNC_IMPL(__imp__sub_8281AD70) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-23696
	r11.s64 = r11.s64 + -23696;
	// addi r10,r10,-23756
	ctx.r10.s64 = ctx.r10.s64 + -23756;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r3,r31,360
	ctx.r3.s64 = r31.s64 + 360;
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// addi r30,r31,88
	r30.s64 = r31.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r31,336
	ctx.r3.s64 = r31.s64 + 336;
	// bl 0x82b7b7d0
	sub_82B7B7D0(ctx, base);
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x822c0270
	sub_822C0270(ctx, base);
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281adcc
	if (cr6.eq) goto loc_8281ADCC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281ADCC:
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281addc
	if (cr6.eq) goto loc_8281ADDC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281ADDC:
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281adec
	if (cr6.eq) goto loc_8281ADEC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281ADEC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e657c8
	sub_82E657C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82818620
	sub_82818620(ctx, base);
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

__attribute__((alias("__imp__sub_8281AE18"))) PPC_WEAK_FUNC(sub_8281AE18);
PPC_FUNC_IMPL(__imp__sub_8281AE18) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-88
	ctx.r3.s64 = ctx.r3.s64 + -88;
	// b 0x8281ae20
	sub_8281AE20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8281AE20"))) PPC_WEAK_FUNC(sub_8281AE20);
PPC_FUNC_IMPL(__imp__sub_8281AE20) {
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
	// bl 0x8281ad70
	sub_8281AD70(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8281ae50
	if (cr0.eq) goto loc_8281AE50;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_8281AE50:
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

__attribute__((alias("__imp__sub_8281AE70"))) PPC_WEAK_FUNC(sub_8281AE70);
PPC_FUNC_IMPL(__imp__sub_8281AE70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r28{};
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
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82818718
	sub_82818718(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8281a8b0
	sub_8281A8B0(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-23696
	r11.s64 = r11.s64 + -23696;
	// addi r10,r10,-23756
	ctx.r10.s64 = ctx.r10.s64 + -23756;
	// li r30,0
	r30.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r30,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r30.u32);
	// addi r4,r11,-23832
	ctx.r4.s64 = r11.s64 + -23832;
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// li r5,69
	ctx.r5.s64 = 69;
	// stw r30,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r30.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// stw r30,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r30.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(r31.u32 + 208, r30.u32);
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8281af04
	if (cr0.eq) goto loc_8281AF04;
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lfs f1,36(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r5,r11,-1968
	ctx.r5.s64 = r11.s64 + -1968;
	// addi r4,r10,-1984
	ctx.r4.s64 = ctx.r10.s64 + -1984;
	// bl 0x828186e0
	sub_828186E0(ctx, base);
	// b 0x8281af08
	goto loc_8281AF08;
loc_8281AF04:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8281AF08:
	// stw r3,212(r31)
	PPC_STORE_U32(r31.u32 + 212, ctx.r3.u32);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,224(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 224, temp.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r8,r31,224
	ctx.r8.s64 = r31.s64 + 224;
	// stfs f0,228(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 228, temp.u32);
	// addi r11,r29,32
	r11.s64 = r29.s64 + 32;
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	f0.f64 = double(temp.f32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stfs f0,232(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 232, temp.u32);
	// li r7,48
	ctx.r7.s64 = 48;
	// lfs f0,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	f0.f64 = double(temp.f32);
	// addi r10,r8,32
	ctx.r10.s64 = ctx.r8.s64 + 32;
	// stfs f0,236(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 236, temp.u32);
	// lis r5,-31943
	ctx.r5.s64 = -2093416448;
	// lvx128 v63,r29,r9
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r5,29232
	r28.s64 = ctx.r5.s64 + 29232;
	// stvx128 v63,r8,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,320
	ctx.r8.s64 = 320;
	// lvlx128 v63,r9,r11
	temp.u32 = ctx.r9.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r31,360
	ctx.r3.s64 = r31.s64 + 360;
	// lvlx128 v62,r6,r11
	temp.u32 = ctx.r6.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r7,r11
	temp.u32 = ctx.r7.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v60,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r10,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r10,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r10,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r28
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r30,340(r31)
	PPC_STORE_U32(r31.u32 + 340, r30.u32);
	// stw r30,344(r31)
	PPC_STORE_U32(r31.u32 + 344, r30.u32);
	// stw r30,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r30.u32);
	// lwz r11,96(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 96);
	// stw r11,352(r31)
	PPC_STORE_U32(r31.u32 + 352, r11.u32);
	// stw r30,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r30.u32);
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// li r11,368
	r11.s64 = 368;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lvx128 v63,r0,r28
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stvx128 v63,r31,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,384(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 384, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8281AFC8"))) PPC_WEAK_FUNC(sub_8281AFC8);
PPC_FUNC_IMPL(__imp__sub_8281AFC8) {
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
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b0c
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r29,20
	r29.s64 = 20;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// li r5,39
	ctx.r5.s64 = 39;
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lwzx r3,r29,r30
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-9536
	r11.s64 = r11.s64 + -9536;
	// addi r10,r10,25696
	ctx.r10.s64 = ctx.r10.s64 + 25696;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// li r7,96
	ctx.r7.s64 = 96;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// sth r7,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r7.u16);
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r28,-31949
	r28.s64 = -2093809664;
	// stvx128 v62,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lfs f1,-17192(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -17192);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,-396(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + -396);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82f270c8
	sub_82F270C8(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lis r27,-31946
	r27.s64 = -2093613056;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,28832(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 28832);
	// lwz r4,28772(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28772);
	// lwz r6,28720(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 28720);
	// bl 0x822f9e48
	sub_822F9E48(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e6ad8
	sub_822E6AD8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// bl 0x8248eaf0
	sub_8248EAF0(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r24,r11,-23832
	r24.s64 = r11.s64 + -23832;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8281b0e8
	if (cr0.eq) goto loc_8281B0E8;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r26,1
	r26.s64 = 1;
	// addi r21,r1,84
	r21.s64 = ctx.r1.s64 + 84;
	// bl 0x82512d38
	sub_82512D38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// bl 0x82494578
	sub_82494578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8281b0ec
	goto loc_8281B0EC;
loc_8281B0E8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8281B0EC:
	// addi r3,r22,116
	ctx.r3.s64 = r22.s64 + 116;
	// bl 0x822e6a00
	sub_822E6A00(ctx, base);
	// clrlwi. r11,r26,31
	r11.u64 = r26.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8281b108
	if (cr0.eq) goto loc_8281B108;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// rlwinm r26,r26,0,0,30
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_8281B108:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281b118
	if (cr6.eq) goto loc_8281B118;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_8281B118:
	// li r5,39
	ctx.r5.s64 = 39;
	// lwzx r3,r29,r30
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// li r4,48
	ctx.r4.s64 = 48;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-23664
	r11.s64 = r11.s64 + -23664;
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// lfs f1,-396(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -396);
	ctx.f1.f64 = double(temp.f32);
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82f28538
	sub_82F28538(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,28720(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 28720);
	// bl 0x822e6b48
	sub_822E6B48(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822e6ad8
	sub_822E6AD8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// bl 0x8248eaf0
	sub_8248EAF0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,101
	ctx.r5.s64 = 101;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8281b1d4
	if (cr0.eq) goto loc_8281B1D4;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// ori r26,r26,2
	r26.u64 = r26.u64 | 2;
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
	// bl 0x82512d38
	sub_82512D38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x82494578
	sub_82494578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8281b1d8
	goto loc_8281B1D8;
loc_8281B1D4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8281B1D8:
	// addi r3,r22,108
	ctx.r3.s64 = r22.s64 + 108;
	// bl 0x822e6a00
	sub_822E6A00(ctx, base);
	// rlwinm. r11,r26,0,30,30
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8281b1f0
	if (cr0.eq) goto loc_8281B1F0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_8281B1F0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281b200
	if (cr6.eq) goto loc_8281B200;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_8281B200:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8281b250
	if (cr0.eq) goto loc_8281B250;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f3,-23904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -23904);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-21220(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -21220);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e84d60
	sub_82E84D60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e1bac0
	sub_82E1BAC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8281b254
	goto loc_8281B254;
loc_8281B250:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8281B254:
	// addi r3,r22,100
	ctx.r3.s64 = r22.s64 + 100;
	// bl 0x822e3958
	sub_822E3958(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r31,100(r22)
	r31.u64 = PPC_LOAD_U32(r22.u32 + 100);
	// bl 0x82ac9988
	sub_82AC9988(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82e1b810
	sub_82E1B810(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281b288
	if (cr6.eq) goto loc_8281B288;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281B288:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_8281B290"))) PPC_WEAK_FUNC(sub_8281B290);
PPC_FUNC_IMPL(__imp__sub_8281B290) {
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
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r3,204(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 204);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq cr6,0x8281b2e0
	if (cr6.eq) goto loc_8281B2E0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82494300
	sub_82494300(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,204(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 204);
	// bl 0x82494308
	sub_82494308(ctx, base);
loc_8281B2E0:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r28
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r3,204(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 204);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// vaddfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x824942f0
	sub_824942F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x8281b364
	if (cr0.eq) goto loc_8281B364;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	f0.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x822d6280
	sub_822D6280(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82494058
	sub_82494058(ctx, base);
	// b 0x8281b37c
	goto loc_8281B37C;
loc_8281B364:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r28
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x822d6280
	sub_822D6280(ctx, base);
loc_8281B37C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8281B388"))) PPC_WEAK_FUNC(sub_8281B388);
PPC_FUNC_IMPL(__imp__sub_8281B388) {
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
	PPCRegister f31{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// stfs f31,212(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r31,-88
	r28.s64 = r31.s64 + -88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82488a10
	sub_82488A10(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8281b3ec
	if (cr6.eq) goto loc_8281B3EC;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,264(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8281a8f8
	sub_8281A8F8(ctx, base);
loc_8281B3EC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82818430
	sub_82818430(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8281b458
	if (!cr6.eq) goto loc_8281B458;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 296);
	f0.f64 = double(temp.f32);
	// li r10,280
	ctx.r10.s64 = 280;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r5,r31,136
	ctx.r5.s64 = r31.s64 + 136;
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,12(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8281B458:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82818490
	sub_82818490(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r29,r31,136
	r29.s64 = r31.s64 + 136;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8281b48c
	if (!cr6.eq) goto loc_8281B48C;
	// lfs f1,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// addi r30,r31,232
	r30.s64 = r31.s64 + 232;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82818ba0
	sub_82818BA0(ctx, base);
	// b 0x8281b4b8
	goto loc_8281B4B8;
loc_8281B48C:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r30,r31,232
	r30.s64 = r31.s64 + 232;
	// addi r11,r11,-23648
	r11.s64 = r11.s64 + -23648;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// bl 0x82818c18
	sub_82818C18(ctx, base);
loc_8281B4B8:
	// addi r11,r1,212
	r11.s64 = ctx.r1.s64 + 212;
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r7,264(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// addi r6,r31,248
	ctx.r6.s64 = r31.s64 + 248;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lvlx128 v62,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// vmulfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8281b290
	sub_8281B290(ctx, base);
	// addi r4,r31,152
	ctx.r4.s64 = r31.s64 + 152;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82a6fe58
	sub_82A6FE58(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ab21b0
	sub_82AB21B0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8281B510"))) PPC_WEAK_FUNC(sub_8281B510);
PPC_FUNC_IMPL(__imp__sub_8281B510) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281B528"))) PPC_WEAK_FUNC(sub_8281B528);
PPC_FUNC_IMPL(__imp__sub_8281B528) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,328(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281B558"))) PPC_WEAK_FUNC(sub_8281B558);
PPC_FUNC_IMPL(__imp__sub_8281B558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v63{};
	// li r11,352
	r11.s64 = 352;
	// lvx128 v63,r4,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281B568"))) PPC_WEAK_FUNC(sub_8281B568);
PPC_FUNC_IMPL(__imp__sub_8281B568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r30,88
	ctx.r4.s64 = r30.s64 + 88;
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
	// bne cr6,0x8281b59c
	if (!cr6.eq) goto loc_8281B59C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8281B59C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8250e538
	sub_8250E538(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,-192
	r31.s64 = r11.s64 + -192;
	// bne cr6,0x8281b5b8
	if (!cr6.eq) goto loc_8281B5B8;
	// li r31,0
	r31.s64 = 0;
loc_8281B5B8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8281b600
	if (cr6.eq) goto loc_8281B600;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,416
	ctx.r4.s64 = r30.s64 + 416;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x827da400
	sub_827DA400(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_8281B600:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8281B608"))) PPC_WEAK_FUNC(sub_8281B608);
PPC_FUNC_IMPL(__imp__sub_8281B608) {
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
	// beq 0x8281b660
	if (cr0.eq) goto loc_8281B660;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-23628
	ctx.r9.s64 = r11.s64 + -23628;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8281b664
	goto loc_8281B664;
loc_8281B660:
	// li r11,0
	r11.s64 = 0;
loc_8281B664:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8281b6b0
	if (!cr6.eq) goto loc_8281B6B0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8281b690
	if (cr6.eq) goto loc_8281B690;
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
loc_8281B690:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-1904(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1904);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8281B6B0:
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

__attribute__((alias("__imp__sub_8281B6D0"))) PPC_WEAK_FUNC(sub_8281B6D0);
PPC_FUNC_IMPL(__imp__sub_8281B6D0) {
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
	// beq 0x8281b728
	if (cr0.eq) goto loc_8281B728;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-23608
	ctx.r9.s64 = r11.s64 + -23608;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8281b72c
	goto loc_8281B72C;
loc_8281B728:
	// li r11,0
	r11.s64 = 0;
loc_8281B72C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8281b778
	if (!cr6.eq) goto loc_8281B778;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8281b758
	if (cr6.eq) goto loc_8281B758;
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
loc_8281B758:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-1904(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1904);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8281B778:
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

__attribute__((alias("__imp__sub_8281B798"))) PPC_WEAK_FUNC(sub_8281B798);
PPC_FUNC_IMPL(__imp__sub_8281B798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31945
	r11.s64 = -2093547520;
	// li r24,0
	r24.s64 = 0;
	// addi r30,r11,-18652
	r30.s64 = r11.s64 + -18652;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
	// mr r28,r30
	r28.u64 = r30.u64;
loc_8281B7C8:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8281b818
	if (!cr0.eq) goto loc_8281B818;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(r29.u32, 2, xer);
	// blt cr6,0x8281b7c8
	if (cr6.lt) goto loc_8281B7C8;
	// stw r24,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r24.u32);
	// stw r24,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r24.u32);
loc_8281B80C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b64
	return;
loc_8281B818:
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
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
	// beq cr6,0x8281b870
	if (cr6.eq) goto loc_8281B870;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8281B854:
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
	// bne 0x8281b854
	if (!cr0.eq) goto loc_8281B854;
loc_8281B870:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281b80c
	if (cr6.eq) goto loc_8281B80C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
	// b 0x8281b80c
	goto loc_8281B80C;
}

__attribute__((alias("__imp__sub_8281B888"))) PPC_WEAK_FUNC(sub_8281B888);
PPC_FUNC_IMPL(__imp__sub_8281B888) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// bne cr6,0x8281b8c4
	if (!cr6.eq) goto loc_8281B8C4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8281B8C4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b4df50
	sub_82B4DF50(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281b918
	if (cr6.eq) goto loc_8281B918;
	// addi r4,r31,400
	ctx.r4.s64 = r31.s64 + 400;
	// bl 0x82b4dc58
	sub_82B4DC58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b4d970
	sub_82B4D970(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8281B918:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281b928
	if (cr6.eq) goto loc_8281B928;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281B928:
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

__attribute__((alias("__imp__sub_8281B940"))) PPC_WEAK_FUNC(sub_8281B940);
PPC_FUNC_IMPL(__imp__sub_8281B940) {
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
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8281b97c
	if (cr0.eq) goto loc_8281B97C;
	// bl 0x82b59d30
	sub_82B59D30(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8281b980
	goto loc_8281B980;
loc_8281B97C:
	// li r31,0
	r31.s64 = 0;
loc_8281B980:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8281b608
	sub_8281B608(ctx, base);
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

__attribute__((alias("__imp__sub_8281B9B0"))) PPC_WEAK_FUNC(sub_8281B9B0);
PPC_FUNC_IMPL(__imp__sub_8281B9B0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8230c0c8
	sub_8230C0C8(ctx, base);
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
	// beq cr6,0x8281ba10
	if (cr6.eq) goto loc_8281BA10;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8281B9F4:
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
	// bne 0x8281b9f4
	if (!cr0.eq) goto loc_8281B9F4;
loc_8281BA10:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r6,336(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 336);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-23592
	ctx.r4.s64 = ctx.r10.s64 + -23592;
	// li r5,236
	ctx.r5.s64 = 236;
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
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
	// beq cr6,0x8281ba44
	if (cr6.eq) goto loc_8281BA44;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281BA44:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281ba54
	if (cr6.eq) goto loc_8281BA54;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281BA54:
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

__attribute__((alias("__imp__sub_8281BA70"))) PPC_WEAK_FUNC(sub_8281BA70);
PPC_FUNC_IMPL(__imp__sub_8281BA70) {
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
	PPCVRegister v63{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,29232
	r11.s64 = r11.s64 + 29232;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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
	// beq cr6,0x8281badc
	if (cr6.eq) goto loc_8281BADC;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8281BAC0:
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
	// bne 0x8281bac0
	if (!cr0.eq) goto loc_8281BAC0;
loc_8281BADC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r29,r1,88
	r29.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-23592
	ctx.r4.s64 = r11.s64 + -23592;
	// li r5,253
	ctx.r5.s64 = 253;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281bb20
	if (cr6.eq) goto loc_8281BB20;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281BB20:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281bb30
	if (cr6.eq) goto loc_8281BB30;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281BB30:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8281BB40"))) PPC_WEAK_FUNC(sub_8281BB40);
PPC_FUNC_IMPL(__imp__sub_8281BB40) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r30,80
	r31.s64 = r30.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfb8c8
	sub_82DFB8C8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8281bb7c
	if (!cr0.eq) goto loc_8281BB7C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8281b568
	sub_8281B568(ctx, base);
loc_8281BB7C:
	// addi r31,r30,76
	r31.s64 = r30.s64 + 76;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfb8c8
	sub_82DFB8C8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8281bba4
	if (!cr0.eq) goto loc_8281BBA4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8281b888
	sub_8281B888(ctx, base);
loc_8281BBA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8281BBB0"))) PPC_WEAK_FUNC(sub_8281BBB0);
PPC_FUNC_IMPL(__imp__sub_8281BBB0) {
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
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r6,r10,29232
	ctx.r6.s64 = ctx.r10.s64 + 29232;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8241a708
	sub_8241A708(ctx, base);
	// lwz r11,328(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 328);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, r11.u32);
	// lwz r11,328(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 328);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,96(r10)
	PPC_STORE_U32(ctx.r10.u32 + 96, r11.u32);
	// lwz r11,328(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 328);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, r11.u32);
	// lwz r11,328(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 328);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, r11.u32);
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

__attribute__((alias("__imp__sub_8281BC40"))) PPC_WEAK_FUNC(sub_8281BC40);
PPC_FUNC_IMPL(__imp__sub_8281BC40) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r30,4(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x8281bd34
	if (cr6.eq) goto loc_8281BD34;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r27,r11,-23592
	r27.s64 = r11.s64 + -23592;
	// lfs f31,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f31.f64 = double(temp.f32);
loc_8281BC7C:
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281bd24
	if (cr6.eq) goto loc_8281BD24;
	// bl 0x824917d0
	sub_824917D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8281bd24
	if (cr0.eq) goto loc_8281BD24;
	// addi r5,r25,400
	ctx.r5.s64 = r25.s64 + 400;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8281bbb0
	sub_8281BBB0(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r29,92(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// beq cr6,0x8281bcdc
	if (cr6.eq) goto loc_8281BCDC;
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
loc_8281BCC0:
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
	// bne 0x8281bcc0
	if (!cr0.eq) goto loc_8281BCC0;
loc_8281BCDC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r5,350
	ctx.r5.s64 = 350;
	// addi r3,r26,40
	ctx.r3.s64 = r26.s64 + 40;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281bd14
	if (cr6.eq) goto loc_8281BD14;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281BD14:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8281bd24
	if (cr6.eq) goto loc_8281BD24;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281BD24:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x8281bc7c
	if (!cr6.eq) goto loc_8281BC7C;
loc_8281BD34:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_8281BD40"))) PPC_WEAK_FUNC(sub_8281BD40);
PPC_FUNC_IMPL(__imp__sub_8281BD40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// lvlx128 v62,r10,r11
	temp.u32 = ctx.r10.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r30,r1,160
	r30.s64 = ctx.r1.s64 + 160;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lvlx128 v61,r9,r11
	temp.u32 = ctx.r9.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r8,r11
	temp.u32 = ctx.r8.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stvx128 v62,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stvx128 v61,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stvx128 v60,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82484b40
	sub_82484B40(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r30,100(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// beq cr6,0x8281be18
	if (cr6.eq) goto loc_8281BE18;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// beq cr6,0x8281bdec
	if (cr6.eq) goto loc_8281BDEC;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
loc_8281BDD0:
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
	// bne 0x8281bdd0
	if (!cr0.eq) goto loc_8281BDD0;
loc_8281BDEC:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lwz r6,496(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 496);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-23592
	ctx.r4.s64 = r11.s64 + -23592;
	// li r5,413
	ctx.r5.s64 = 413;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281be18
	if (cr6.eq) goto loc_8281BE18;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281BE18:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8281be28
	if (cr6.eq) goto loc_8281BE28;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281BE28:
	// addi r5,r31,512
	ctx.r5.s64 = r31.s64 + 512;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e84a10
	sub_82E84A10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8281BE48"))) PPC_WEAK_FUNC(sub_8281BE48);
PPC_FUNC_IMPL(__imp__sub_8281BE48) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// bl 0x828183d0
	sub_828183D0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8281be6c
	if (!cr0.eq) goto loc_8281BE6C;
	// li r29,1
	r29.s64 = 1;
loc_8281BE6C:
	// lwz r11,484(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 484);
	// addi r30,r31,480
	r30.s64 = r31.s64 + 480;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8281bf3c
	if (cr6.eq) goto loc_8281BF3C;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r9,40
	ctx.r9.s64 = 40;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw. r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8281bf3c
	if (cr0.eq) goto loc_8281BF3C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8281b940
	sub_8281B940(ctx, base);
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
	// beq cr6,0x8281bed0
	if (cr6.eq) goto loc_8281BED0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8281BEB4:
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
	// bne 0x8281beb4
	if (!cr0.eq) goto loc_8281BEB4;
loc_8281BED0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r6,336(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 336);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-23592
	ctx.r4.s64 = ctx.r10.s64 + -23592;
	// li r5,271
	ctx.r5.s64 = 271;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
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
	// beq cr6,0x8281bf04
	if (cr6.eq) goto loc_8281BF04;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281BF04:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281bf14
	if (cr6.eq) goto loc_8281BF14;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281BF14:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8281bc40
	sub_8281BC40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82488a10
	sub_82488A10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8281bb40
	sub_8281BB40(ctx, base);
	// ori r29,r29,2
	r29.u64 = r29.u64 | 2;
loc_8281BF3C:
	// cntlzw r11,r29
	r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8281BF50"))) PPC_WEAK_FUNC(sub_8281BF50);
PPC_FUNC_IMPL(__imp__sub_8281BF50) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r11,r11,-23456
	r11.s64 = r11.s64 + -23456;
	// addi r10,r10,-23500
	ctx.r10.s64 = ctx.r10.s64 + -23500;
	// addi r9,r9,-23520
	ctx.r9.s64 = ctx.r9.s64 + -23520;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// addi r3,r31,480
	ctx.r3.s64 = r31.s64 + 480;
	// stw r9,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r9.u32);
	// addi r30,r31,88
	r30.s64 = r31.s64 + 88;
	// bl 0x82b7b7d0
	sub_82B7B7D0(ctx, base);
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// bl 0x822c0270
	sub_822C0270(ctx, base);
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 328);
	// bl 0x822c0270
	sub_822C0270(ctx, base);
	// lwz r3,324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281bfb8
	if (cr6.eq) goto loc_8281BFB8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281BFB8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82514af8
	sub_82514AF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82818620
	sub_82818620(ctx, base);
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

__attribute__((alias("__imp__sub_8281BFE0"))) PPC_WEAK_FUNC(sub_8281BFE0);
PPC_FUNC_IMPL(__imp__sub_8281BFE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-88
	ctx.r3.s64 = ctx.r3.s64 + -88;
	// b 0x8281c028
	sub_8281C028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8281BFE8"))) PPC_WEAK_FUNC(sub_8281BFE8);
PPC_FUNC_IMPL(__imp__sub_8281BFE8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-128
	ctx.r3.s64 = ctx.r3.s64 + -128;
	// b 0x8281c028
	sub_8281C028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8281BFF0"))) PPC_WEAK_FUNC(sub_8281BFF0);
PPC_FUNC_IMPL(__imp__sub_8281BFF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r11,r11,-23360
	r11.s64 = r11.s64 + -23360;
	// addi r10,r10,-23404
	ctx.r10.s64 = ctx.r10.s64 + -23404;
	// addi r9,r9,-23424
	ctx.r9.s64 = ctx.r9.s64 + -23424;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// stw r9,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r9.u32);
	// b 0x8281bf50
	sub_8281BF50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8281C018"))) PPC_WEAK_FUNC(sub_8281C018);
PPC_FUNC_IMPL(__imp__sub_8281C018) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-88
	ctx.r3.s64 = ctx.r3.s64 + -88;
	// b 0x8281c1f8
	sub_8281C1F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8281C020"))) PPC_WEAK_FUNC(sub_8281C020);
PPC_FUNC_IMPL(__imp__sub_8281C020) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-128
	ctx.r3.s64 = ctx.r3.s64 + -128;
	// b 0x8281c1f8
	sub_8281C1F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8281C028"))) PPC_WEAK_FUNC(sub_8281C028);
PPC_FUNC_IMPL(__imp__sub_8281C028) {
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
	// bl 0x8281bf50
	sub_8281BF50(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8281c058
	if (cr0.eq) goto loc_8281C058;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_8281C058:
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

__attribute__((alias("__imp__sub_8281C078"))) PPC_WEAK_FUNC(sub_8281C078);
PPC_FUNC_IMPL(__imp__sub_8281C078) {
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
	// li r26,0
	r26.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r27,r31,-88
	r27.s64 = r31.s64 + -88;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// bl 0x82488a10
	sub_82488A10(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82818638
	sub_82818638(ctx, base);
	// addi r3,r30,56
	ctx.r3.s64 = r30.s64 + 56;
	// addi r25,r31,296
	r25.s64 = r31.s64 + 296;
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x8281b798
	sub_8281B798(ctx, base);
	// lwz r30,88(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r25,92(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8281c1dc
	if (cr6.eq) goto loc_8281C1DC;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// beq cr6,0x8281c120
	if (cr6.eq) goto loc_8281C120;
	// addi r11,r25,4
	r11.s64 = r25.s64 + 4;
loc_8281C104:
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
	// bne 0x8281c104
	if (!cr0.eq) goto loc_8281C104;
loc_8281C120:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82818ca0
	sub_82818CA0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281c144
	if (cr6.eq) goto loc_8281C144;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281C144:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,-23592
	ctx.r4.s64 = r11.s64 + -23592;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,142
	ctx.r5.s64 = 142;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x8281c1b4
	if (cr0.eq) goto loc_8281C1B4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r26,1
	r26.s64 = 1;
	// bl 0x82488a80
	sub_82488A80(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82512d38
	sub_82512D38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x82494578
	sub_82494578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8281c1b8
	goto loc_8281C1B8;
loc_8281C1B4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8281C1B8:
	// addi r3,r31,232
	ctx.r3.s64 = r31.s64 + 232;
	// bl 0x822e6a00
	sub_822E6A00(ctx, base);
	// clrlwi. r11,r26,31
	r11.u64 = r26.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8281c1d0
	if (cr0.eq) goto loc_8281C1D0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_8281C1D0:
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// stw r3,248(r31)
	PPC_STORE_U32(r31.u32 + 248, ctx.r3.u32);
loc_8281C1DC:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8281c1ec
	if (cr6.eq) goto loc_8281C1EC;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281C1EC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_8281C1F8"))) PPC_WEAK_FUNC(sub_8281C1F8);
PPC_FUNC_IMPL(__imp__sub_8281C1F8) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r11,r11,-23360
	r11.s64 = r11.s64 + -23360;
	// addi r10,r10,-23404
	ctx.r10.s64 = ctx.r10.s64 + -23404;
	// addi r9,r9,-23424
	ctx.r9.s64 = ctx.r9.s64 + -23424;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r9,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r9.u32);
	// bl 0x8281bf50
	sub_8281BF50(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8281c24c
	if (cr0.eq) goto loc_8281C24C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_8281C24C:
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

__attribute__((alias("__imp__sub_8281C268"))) PPC_WEAK_FUNC(sub_8281C268);
PPC_FUNC_IMPL(__imp__sub_8281C268) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
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
	// bl 0x831b0b24
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x828188c0
	sub_828188C0(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r11,r11,-23456
	r11.s64 = r11.s64 + -23456;
	// addi r10,r10,-23500
	ctx.r10.s64 = ctx.r10.s64 + -23500;
	// addi r9,r9,-23520
	ctx.r9.s64 = ctx.r9.s64 + -23520;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r29,0
	r29.s64 = 0;
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// stw r9,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r9.u32);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r29,320(r31)
	PPC_STORE_U32(r31.u32 + 320, r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r29.u32);
	// addi r28,r11,-23592
	r28.s64 = r11.s64 + -23592;
	// li r5,96
	ctx.r5.s64 = 96;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8281c2fc
	if (cr0.eq) goto loc_8281C2FC;
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// li r11,1
	r11.s64 = 1;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,-28908(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28908);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x8281c300
	goto loc_8281C300;
loc_8281C2FC:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8281C300:
	// stw r10,328(r31)
	PPC_STORE_U32(r31.u32 + 328, ctx.r10.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,93
	ctx.r5.s64 = 93;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8281c33c
	if (cr0.eq) goto loc_8281C33C;
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lfs f1,36(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r5,r11,-1872
	ctx.r5.s64 = r11.s64 + -1872;
	// addi r4,r10,-1888
	ctx.r4.s64 = ctx.r10.s64 + -1888;
	// bl 0x828186e0
	sub_828186E0(ctx, base);
	// b 0x8281c340
	goto loc_8281C340;
loc_8281C33C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8281C340:
	// li r11,96
	r11.s64 = 96;
	// stw r3,332(r31)
	PPC_STORE_U32(r31.u32 + 332, ctx.r3.u32);
	// stw r29,336(r31)
	PPC_STORE_U32(r31.u32 + 336, r29.u32);
	// li r10,352
	ctx.r10.s64 = 352;
	// stw r29,340(r31)
	PPC_STORE_U32(r31.u32 + 340, r29.u32);
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// li r7,368
	ctx.r7.s64 = 368;
	// addi r6,r9,29232
	ctx.r6.s64 = ctx.r9.s64 + 29232;
	// lvx128 v63,r30,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,16
	ctx.r9.s64 = 16;
	// stvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r31,384
	ctx.r8.s64 = r31.s64 + 384;
	// lvx128 v63,r0,r6
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r30,32
	r11.s64 = r30.s64 + 32;
	// stvx128 v63,r31,r7
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,32
	ctx.r6.s64 = 32;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r7,48
	ctx.r7.s64 = 48;
	// stfs f0,384(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 384, temp.u32);
	// addi r10,r8,32
	ctx.r10.s64 = ctx.r8.s64 + 32;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,388(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 388, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,392(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 392, temp.u32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,396(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 396, temp.u32);
	// lvx128 v63,r30,r9
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r8,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v63,r9,r11
	temp.u32 = ctx.r9.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r6,r11
	temp.u32 = ctx.r6.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r7,r11
	temp.u32 = ctx.r7.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v60,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r10,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r10,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r10,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r29,484(r31)
	PPC_STORE_U32(r31.u32 + 484, r29.u32);
	// stw r29,488(r31)
	PPC_STORE_U32(r31.u32 + 488, r29.u32);
	// stw r29,492(r31)
	PPC_STORE_U32(r31.u32 + 492, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8281C3E8"))) PPC_WEAK_FUNC(sub_8281C3E8);
PPC_FUNC_IMPL(__imp__sub_8281C3E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,320(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r31,r30,16
	r31.s64 = r30.s64 + 16;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lvx128 v62,r0,r29
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,1
	ctx.r7.s64 = 1;
	// lvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// vaddfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x824942f0
	sub_824942F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x8281c484
	if (cr0.eq) goto loc_8281C484;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	f0.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x822d6280
	sub_822D6280(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494058
	sub_82494058(ctx, base);
	// b 0x8281c498
	goto loc_8281C498;
loc_8281C484:
	// lvx128 v63,r0,r29
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r31
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x822d6280
	sub_822D6280(ctx, base);
loc_8281C498:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8281C4A0"))) PPC_WEAK_FUNC(sub_8281C4A0);
PPC_FUNC_IMPL(__imp__sub_8281C4A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v63{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x8281c268
	sub_8281C268(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r30,496(r31)
	PPC_STORE_U32(r31.u32 + 496, r30.u32);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// li r8,512
	ctx.r8.s64 = 512;
	// addi r11,r11,-23360
	r11.s64 = r11.s64 + -23360;
	// addi r10,r10,-23404
	ctx.r10.s64 = ctx.r10.s64 + -23404;
	// addi r9,r9,-23424
	ctx.r9.s64 = ctx.r9.s64 + -23424;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r9.u32);
	// lvx128 v63,r0,r29
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8281C500"))) PPC_WEAK_FUNC(sub_8281C500);
PPC_FUNC_IMPL(__imp__sub_8281C500) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-23592
	ctx.r4.s64 = r11.s64 + -23592;
	// li r5,85
	ctx.r5.s64 = 85;
	// li r3,496
	ctx.r3.s64 = 496;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8281c54c
	if (cr0.eq) goto loc_8281C54C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8281c268
	sub_8281C268(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8281c550
	goto loc_8281C550;
loc_8281C54C:
	// li r31,0
	r31.s64 = 0;
loc_8281C550:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8281b6d0
	sub_8281B6D0(ctx, base);
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

__attribute__((alias("__imp__sub_8281C580"))) PPC_WEAK_FUNC(sub_8281C580);
PPC_FUNC_IMPL(__imp__sub_8281C580) {
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
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r30,r31,-88
	r30.s64 = r31.s64 + -88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82488a10
	sub_82488A10(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f31,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82818430
	sub_82818430(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8281c5f0
	if (!cr6.eq) goto loc_8281C5F0;
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
	// addi r5,r31,296
	ctx.r5.s64 = r31.s64 + 296;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82818a08
	sub_82818A08(ctx, base);
loc_8281C5F0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82818490
	sub_82818490(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8281c624
	if (!cr6.eq) goto loc_8281C624;
	// lfs f1,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// addi r28,r31,296
	r28.s64 = r31.s64 + 296;
	// addi r29,r31,280
	r29.s64 = r31.s64 + 280;
	// lwz r3,244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82818ba0
	sub_82818BA0(ctx, base);
	// b 0x8281c670
	goto loc_8281C670;
loc_8281C624:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ae9f70
	sub_82AE9F70(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r31,280
	r29.s64 = r31.s64 + 280;
	// addi r28,r31,296
	r28.s64 = r31.s64 + 296;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f0,-17192(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -17192);
	f0.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v13,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v12,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v0,v0,v13,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// bl 0x82818c18
	sub_82818C18(ctx, base);
loc_8281C670:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,312
	ctx.r9.s64 = 312;
	// li r8,16
	ctx.r8.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v0,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r31,r9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v0,v13,v0,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r28,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r28.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x822d6280
	sub_822D6280(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v62,r0,r29
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r6,r31,392
	ctx.r6.s64 = r31.s64 + 392;
	// lwz r7,252(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 252);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// vmulfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8281c3e8
	sub_8281C3E8(ctx, base);
	// addic. r11,r31,-88
	xer.ca = r31.u32 > 87;
	r11.s64 = r31.s64 + -88;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bne 0x8281c6fc
	if (!cr0.eq) goto loc_8281C6FC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8281C6FC:
	// addi r5,r31,328
	ctx.r5.s64 = r31.s64 + 328;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8281b9b0
	sub_8281B9B0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8281c7b8
	if (cr0.eq) goto loc_8281C7B8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825dd5c0
	sub_825DD5C0(ctx, base);
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
	// beq cr6,0x8281c764
	if (cr6.eq) goto loc_8281C764;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8281C748:
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
	// bne 0x8281c748
	if (!cr0.eq) goto loc_8281C748;
loc_8281C764:
	// addi r30,r31,40
	r30.s64 = r31.s64 + 40;
	// addi r29,r1,88
	r29.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,-23592
	ctx.r4.s64 = ctx.r10.s64 + -23592;
	// li r5,186
	ctx.r5.s64 = 186;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281c7a8
	if (cr6.eq) goto loc_8281C7A8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281C7A8:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281c7b8
	if (cr6.eq) goto loc_8281C7B8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281C7B8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82818510
	sub_82818510(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8281C7D0"))) PPC_WEAK_FUNC(sub_8281C7D0);
PPC_FUNC_IMPL(__imp__sub_8281C7D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x831b0b28
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r11,16
	r11.s64 = 16;
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// li r10,48
	ctx.r10.s64 = 48;
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// addi r8,r4,32
	ctx.r8.s64 = ctx.r4.s64 + 32;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// addi r7,r3,32
	ctx.r7.s64 = ctx.r3.s64 + 32;
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// li r28,96
	r28.s64 = 96;
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	f0.f64 = double(temp.f32);
	// addi r6,r4,112
	ctx.r6.s64 = ctx.r4.s64 + 112;
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// addi r5,r3,112
	ctx.r5.s64 = ctx.r3.s64 + 112;
	// lvx128 v63,r4,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r4,176
	r31.s64 = ctx.r4.s64 + 176;
	// stvx128 v63,r3,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r3,176
	r30.s64 = ctx.r3.s64 + 176;
	// lvlx128 v63,r11,r8
	temp.u32 = r11.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r29,r4,240
	r29.s64 = ctx.r4.s64 + 240;
	// lvlx128 v62,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r3,240
	ctx.r8.s64 = ctx.r3.s64 + 240;
	// stvx128 v60,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r7,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r7,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r7,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r3,304
	ctx.r7.s64 = ctx.r3.s64 + 304;
	// lvx128 v63,r4,r28
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v63,r11,r6
	temp.u32 = r11.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r9,r6
	temp.u32 = ctx.r9.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r10,r6
	temp.u32 = ctx.r10.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r4,304
	ctx.r6.s64 = ctx.r4.s64 + 304;
	// stvx128 v60,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r5,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r5,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r5,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v63,r11,r31
	temp.u32 = r11.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r9,r31
	temp.u32 = ctx.r9.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r10,r31
	temp.u32 = ctx.r10.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v60,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r30,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r30,r9
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r30,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v63,r11,r29
	temp.u32 = r11.u32 + r29.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r9,r29
	temp.u32 = ctx.r9.u32 + r29.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r10,r29
	temp.u32 = ctx.r10.u32 + r29.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r29
	temp.u32 = r29.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v60,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r8,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r8,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r8,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v63,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r11,r6
	temp.u32 = r11.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r9,r6
	temp.u32 = ctx.r9.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r10,r6
	temp.u32 = ctx.r10.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r7,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r7,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r7,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8281C8E8"))) PPC_WEAK_FUNC(sub_8281C8E8);
PPC_FUNC_IMPL(__imp__sub_8281C8E8) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r11,r11,-23244
	r11.s64 = r11.s64 + -23244;
	// addi r10,r10,-23288
	ctx.r10.s64 = ctx.r10.s64 + -23288;
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 328);
	// addi r9,r9,-23308
	ctx.r9.s64 = ctx.r9.s64 + -23308;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// addi r30,r31,88
	r30.s64 = r31.s64 + 88;
	// stw r9,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r9.u32);
	// bl 0x822c0270
	sub_822C0270(ctx, base);
	// lwz r3,324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281c940
	if (cr6.eq) goto loc_8281C940;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281C940:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82514af8
	sub_82514AF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82818620
	sub_82818620(ctx, base);
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

__attribute__((alias("__imp__sub_8281C968"))) PPC_WEAK_FUNC(sub_8281C968);
PPC_FUNC_IMPL(__imp__sub_8281C968) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-88
	ctx.r3.s64 = ctx.r3.s64 + -88;
	// b 0x8281cc60
	sub_8281CC60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8281C970"))) PPC_WEAK_FUNC(sub_8281C970);
PPC_FUNC_IMPL(__imp__sub_8281C970) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-128
	ctx.r3.s64 = ctx.r3.s64 + -128;
	// b 0x8281cc60
	sub_8281CC60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8281C978"))) PPC_WEAK_FUNC(sub_8281C978);
PPC_FUNC_IMPL(__imp__sub_8281C978) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lvx128 v62,r0,r28
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,0
	ctx.r8.s64 = 0;
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,1
	ctx.r7.s64 = 1;
	// vaddfp128 v62,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v62.f32, simde_mm_add_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,320(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 320);
	// stvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x824942f0
	sub_824942F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x8281ca18
	if (cr0.eq) goto loc_8281CA18;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	f0.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x822d6280
	sub_822D6280(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,840(r29)
	PPC_STORE_U8(r29.u32 + 840, r11.u8);
	// b 0x8281ca30
	goto loc_8281CA30;
loc_8281CA18:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r28
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x822d6280
	sub_822D6280(ctx, base);
loc_8281CA30:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8281CA38"))) PPC_WEAK_FUNC(sub_8281CA38);
PPC_FUNC_IMPL(__imp__sub_8281CA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,-14832
	r11.s64 = r11.s64 + -14832;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281CA58"))) PPC_WEAK_FUNC(sub_8281CA58);
PPC_FUNC_IMPL(__imp__sub_8281CA58) {
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
	// beq 0x8281cab0
	if (cr0.eq) goto loc_8281CAB0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-23328
	ctx.r9.s64 = r11.s64 + -23328;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8281cab4
	goto loc_8281CAB4;
loc_8281CAB0:
	// li r11,0
	r11.s64 = 0;
loc_8281CAB4:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8281cb00
	if (!cr6.eq) goto loc_8281CB00;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8281cae0
	if (cr6.eq) goto loc_8281CAE0;
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
loc_8281CAE0:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-1616(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1616);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8281CB00:
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

__attribute__((alias("__imp__sub_8281CB20"))) PPC_WEAK_FUNC(sub_8281CB20);
PPC_FUNC_IMPL(__imp__sub_8281CB20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r28{};
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
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x828188c0
	sub_828188C0(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r11,r11,-23244
	r11.s64 = r11.s64 + -23244;
	// addi r10,r10,-23288
	ctx.r10.s64 = ctx.r10.s64 + -23288;
	// addi r9,r9,-23308
	ctx.r9.s64 = ctx.r9.s64 + -23308;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r29,0
	r29.s64 = 0;
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// stw r9,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r9.u32);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r29,320(r31)
	PPC_STORE_U32(r31.u32 + 320, r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r29.u32);
	// addi r4,r11,-23224
	ctx.r4.s64 = r11.s64 + -23224;
	// li r5,59
	ctx.r5.s64 = 59;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8281cba8
	if (cr0.eq) goto loc_8281CBA8;
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lfs f1,36(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r5,r11,-1584
	ctx.r5.s64 = r11.s64 + -1584;
	// addi r4,r10,-1600
	ctx.r4.s64 = ctx.r10.s64 + -1600;
	// bl 0x828186e0
	sub_828186E0(ctx, base);
	// b 0x8281cbac
	goto loc_8281CBAC;
loc_8281CBA8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8281CBAC:
	// stw r3,328(r31)
	PPC_STORE_U32(r31.u32 + 328, ctx.r3.u32);
	// addi r4,r30,96
	ctx.r4.s64 = r30.s64 + 96;
	// addi r3,r31,336
	ctx.r3.s64 = r31.s64 + 336;
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,352
	ctx.r3.s64 = r31.s64 + 352;
	// bl 0x8281c7d0
	sub_8281C7D0(ctx, base);
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,720(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 720, temp.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r31,720
	ctx.r8.s64 = r31.s64 + 720;
	// addi r11,r30,32
	r11.s64 = r30.s64 + 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// addi r10,r8,32
	ctx.r10.s64 = ctx.r8.s64 + 32;
	// lis r5,-31943
	ctx.r5.s64 = -2093416448;
	// li r4,816
	ctx.r4.s64 = 816;
	// addi r5,r5,29232
	ctx.r5.s64 = ctx.r5.s64 + 29232;
	// lis r28,-32256
	r28.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,2240(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 2240);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,724(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 724, temp.u32);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,728(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 728, temp.u32);
	// lfs f13,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,732(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 732, temp.u32);
	// lvx128 v63,r30,r9
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r8,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v63,r9,r11
	temp.u32 = ctx.r9.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r6,r11
	temp.u32 = ctx.r6.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r7,r11
	temp.u32 = ctx.r7.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v60,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r10,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r10,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r10,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r4
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r29,832(r31)
	PPC_STORE_U32(r31.u32 + 832, r29.u32);
	// stfs f0,836(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 836, temp.u32);
	// stb r29,840(r31)
	PPC_STORE_U8(r31.u32 + 840, r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8281CC60"))) PPC_WEAK_FUNC(sub_8281CC60);
PPC_FUNC_IMPL(__imp__sub_8281CC60) {
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
	// bl 0x8281c8e8
	sub_8281C8E8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8281cc90
	if (cr0.eq) goto loc_8281CC90;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_8281CC90:
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

__attribute__((alias("__imp__sub_8281CCB0"))) PPC_WEAK_FUNC(sub_8281CCB0);
PPC_FUNC_IMPL(__imp__sub_8281CCB0) {
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
	// bl 0x8281ca58
	sub_8281CA58(ctx, base);
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
	// beq cr6,0x8281cd08
	if (cr6.eq) goto loc_8281CD08;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281CD08:
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

__attribute__((alias("__imp__sub_8281CD20"))) PPC_WEAK_FUNC(sub_8281CD20);
PPC_FUNC_IMPL(__imp__sub_8281CD20) {
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
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,29232
	r11.s64 = r11.s64 + 29232;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r31,-88
	ctx.r3.s64 = r31.s64 + -88;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82818558
	sub_82818558(ctx, base);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823a1f18
	sub_823A1F18(ctx, base);
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
	// beq cr6,0x8281cda0
	if (cr6.eq) goto loc_8281CDA0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8281CD84:
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
	// bne 0x8281cd84
	if (!cr0.eq) goto loc_8281CD84;
loc_8281CDA0:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-23224
	ctx.r4.s64 = r11.s64 + -23224;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,110
	ctx.r5.s64 = 110;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281cdcc
	if (cr6.eq) goto loc_8281CDCC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281CDCC:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281cddc
	if (cr6.eq) goto loc_8281CDDC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281CDDC:
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// li r10,248
	ctx.r10.s64 = 248;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r31,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	f0.f64 = double(temp.f32);
	// stfs f0,748(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 748, temp.u32);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8281CE18"))) PPC_WEAK_FUNC(sub_8281CE18);
PPC_FUNC_IMPL(__imp__sub_8281CE18) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x8230c0c8
	sub_8230C0C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281ce68
	if (cr6.eq) goto loc_8281CE68;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281CE68:
	// lwz r29,84(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x8281cea0
	if (cr6.eq) goto loc_8281CEA0;
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
loc_8281CE84:
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
	// bne 0x8281ce84
	if (!cr0.eq) goto loc_8281CE84;
loc_8281CEA0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 832);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r4,r10,-23224
	ctx.r4.s64 = ctx.r10.s64 + -23224;
	// li r5,168
	ctx.r5.s64 = 168;
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
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
	// beq cr6,0x8281ced4
	if (cr6.eq) goto loc_8281CED4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281CED4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8281cee4
	if (cr6.eq) goto loc_8281CEE4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281CEE4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8281CEF0"))) PPC_WEAK_FUNC(sub_8281CEF0);
PPC_FUNC_IMPL(__imp__sub_8281CEF0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// bl 0x828183d0
	sub_828183D0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8281cf1c
	if (!cr0.eq) goto loc_8281CF1C;
	// li r30,1
	r30.s64 = 1;
loc_8281CF1C:
	// lbz r11,840(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 840);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8281cfac
	if (!cr6.eq) goto loc_8281CFAC;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8281b940
	sub_8281B940(ctx, base);
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
	// beq cr6,0x8281cf68
	if (cr6.eq) goto loc_8281CF68;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8281CF4C:
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
	// bne 0x8281cf4c
	if (!cr0.eq) goto loc_8281CF4C;
loc_8281CF68:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 832);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-23224
	ctx.r4.s64 = ctx.r10.s64 + -23224;
	// li r5,211
	ctx.r5.s64 = 211;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
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
	// beq cr6,0x8281cf9c
	if (cr6.eq) goto loc_8281CF9C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281CF9C:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281cfac
	if (cr6.eq) goto loc_8281CFAC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281CFAC:
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8281CFD0"))) PPC_WEAK_FUNC(sub_8281CFD0);
PPC_FUNC_IMPL(__imp__sub_8281CFD0) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCVRegister v62{};
	PPCVRegister v63{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x82818510
	sub_82818510(ctx, base);
	// addi r30,r31,-88
	r30.s64 = r31.s64 + -88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82488a10
	sub_82488A10(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f31,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	f31.f64 = double(temp.f32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82818430
	sub_82818430(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8281d048
	if (!cr6.eq) goto loc_8281D048;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r31,648
	ctx.r5.s64 = r31.s64 + 648;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r5,r31,632
	ctx.r5.s64 = r31.s64 + 632;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82818a08
	sub_82818A08(ctx, base);
loc_8281D048:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82818490
	sub_82818490(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8281d070
	if (!cr6.eq) goto loc_8281D070;
	// addi r6,r31,632
	ctx.r6.s64 = r31.s64 + 632;
	// lfs f1,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r31,728
	ctx.r5.s64 = r31.s64 + 728;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// bl 0x82818ba0
	sub_82818BA0(ctx, base);
loc_8281D070:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,748(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 748);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r11,r31,728
	r11.s64 = r31.s64 + 728;
	// li r8,248
	ctx.r8.s64 = 248;
	// lfs f0,-22656(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22656);
	f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v0,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r31,r8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v0,v12,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lbz r10,752(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 752);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8281d0fc
	if (!cr0.eq) goto loc_8281D0FC;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// vor128 v63,v0,v0
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r31,632
	ctx.r4.s64 = r31.s64 + 632;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// vmulfp128 v63,v63,v62
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8281c978
	sub_8281C978(ctx, base);
	// addic. r11,r31,-88
	xer.ca = r31.u32 > 87;
	r11.s64 = r31.s64 + -88;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bne 0x8281d0f0
	if (!cr0.eq) goto loc_8281D0F0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8281D0F0:
	// addi r5,r31,664
	ctx.r5.s64 = r31.s64 + 664;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8281ce18
	sub_8281CE18(ctx, base);
loc_8281D0FC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8281cef0
	sub_8281CEF0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8281d1a0
	if (cr0.eq) goto loc_8281D1A0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825dd5c0
	sub_825DD5C0(ctx, base);
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
	// beq cr6,0x8281d14c
	if (cr6.eq) goto loc_8281D14C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8281D130:
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
	// bne 0x8281d130
	if (!cr0.eq) goto loc_8281D130;
loc_8281D14C:
	// addi r31,r31,40
	r31.s64 = r31.s64 + 40;
	// addi r30,r1,88
	r30.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,-23224
	ctx.r4.s64 = ctx.r10.s64 + -23224;
	// li r5,157
	ctx.r5.s64 = 157;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281d190
	if (cr6.eq) goto loc_8281D190;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281D190:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281d1a0
	if (cr6.eq) goto loc_8281D1A0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281D1A0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8281D1B0"))) PPC_WEAK_FUNC(sub_8281D1B0);
PPC_FUNC_IMPL(__imp__sub_8281D1B0) {
	PPC_FUNC_PROLOGUE();
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
	PPCVRegister v48{};
	PPCVRegister v49{};
	PPCVRegister v50{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af0
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82818638
	sub_82818638(ctx, base);
	// addi r27,r1,368
	r27.s64 = ctx.r1.s64 + 368;
	// addi r11,r31,440
	r11.s64 = r31.s64 + 440;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r27.u32);
	// addi r25,r1,128
	r25.s64 = ctx.r1.s64 + 128;
	// addi r8,r31,504
	ctx.r8.s64 = r31.s64 + 504;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// lvlx128 v62,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// addi r24,r1,144
	r24.s64 = ctx.r1.s64 + 144;
	// lvlx128 v50,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r23,r1,160
	r23.s64 = ctx.r1.s64 + 160;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// addi r22,r1,176
	r22.s64 = ctx.r1.s64 + 176;
	// lvlx128 v57,r6,r8
	temp.u32 = ctx.r6.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r21,r1,192
	r21.s64 = ctx.r1.s64 + 192;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r20,r1,208
	r20.s64 = ctx.r1.s64 + 208;
	// lvlx128 v63,r6,r11
	temp.u32 = ctx.r6.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r19,r1,224
	r19.s64 = ctx.r1.s64 + 224;
	// addi r18,r1,240
	r18.s64 = ctx.r1.s64 + 240;
	// addi r17,r1,256
	r17.s64 = ctx.r1.s64 + 256;
	// addi r16,r1,272
	r16.s64 = ctx.r1.s64 + 272;
	// addi r15,r1,288
	r15.s64 = ctx.r1.s64 + 288;
	// addi r14,r1,304
	r14.s64 = ctx.r1.s64 + 304;
	// stvx128 v62,r0,r25
	simde_mm_store_si128((simde__m128i*)(base + ((r25.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,32
	r30.s64 = 32;
	// lwz r25,100(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stvx128 v50,r0,r25
	simde_mm_store_si128((simde__m128i*)(base + ((r25.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r25,96(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stvx128 v57,r0,r25
	simde_mm_store_si128((simde__m128i*)(base + ((r25.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r25,92(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lvlx128 v49,r30,r8
	temp.u32 = r30.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r7,48
	ctx.r7.s64 = 48;
	// addi r10,r31,376
	ctx.r10.s64 = r31.s64 + 376;
	// stvx128 v49,r0,r25
	simde_mm_store_si128((simde__m128i*)(base + ((r25.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r31,568
	ctx.r9.s64 = r31.s64 + 568;
	// lwz r25,112(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lvlx128 v61,r30,r11
	temp.u32 = r30.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r26,0
	r26.s64 = 0;
	// lvlx128 v60,r7,r11
	temp.u32 = ctx.r7.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lvlx128 v59,r6,r10
	temp.u32 = ctx.r6.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r5,86
	ctx.r5.s64 = 86;
	// lvlx128 v56,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r27,r11,-23224
	r27.s64 = r11.s64 + -23224;
	// lvlx128 v58,r6,r9
	temp.u32 = ctx.r6.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r6,0
	ctx.r6.s64 = 0;
	// lvlx128 v55,r30,r10
	temp.u32 = r30.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lvlx128 v54,r7,r10
	temp.u32 = ctx.r7.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r3,400
	ctx.r3.s64 = 400;
	// lvlx128 v53,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// lvlx128 v52,r30,r9
	temp.u32 = r30.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// lvlx128 v51,r7,r9
	temp.u32 = ctx.r7.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v48,r7,r8
	temp.u32 = ctx.r7.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v63,r0,r24
	simde_mm_store_si128((simde__m128i*)(base + ((r24.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r23
	simde_mm_store_si128((simde__m128i*)(base + ((r23.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r22
	simde_mm_store_si128((simde__m128i*)(base + ((r22.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v56,r0,r21
	simde_mm_store_si128((simde__m128i*)(base + ((r21.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v59,r0,r20
	simde_mm_store_si128((simde__m128i*)(base + ((r20.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v55,r0,r19
	simde_mm_store_si128((simde__m128i*)(base + ((r19.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v54,r0,r18
	simde_mm_store_si128((simde__m128i*)(base + ((r18.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v53,r0,r17
	simde_mm_store_si128((simde__m128i*)(base + ((r17.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v58,r0,r16
	simde_mm_store_si128((simde__m128i*)(base + ((r16.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v52,r0,r15
	simde_mm_store_si128((simde__m128i*)(base + ((r15.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v51,r0,r14
	simde_mm_store_si128((simde__m128i*)(base + ((r14.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v48,r0,r25
	simde_mm_store_si128((simde__m128i*)(base + ((r25.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8281d30c
	if (cr0.eq) goto loc_8281D30C;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r31,632
	ctx.r4.s64 = r31.s64 + 632;
	// bl 0x82813f90
	sub_82813F90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8281d310
	goto loc_8281D310;
loc_8281D30C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_8281D310:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8281ccb0
	sub_8281CCB0(ctx, base);
	// lwz r25,80(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r24,84(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8281d388
	if (cr6.eq) goto loc_8281D388;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r25.u32);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r24.u32);
	// beq cr6,0x8281d358
	if (cr6.eq) goto loc_8281D358;
	// addi r11,r24,4
	r11.s64 = r24.s64 + 4;
loc_8281D33C:
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
	// bne 0x8281d33c
	if (!cr0.eq) goto loc_8281D33C;
loc_8281D358:
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,-88
	ctx.r3.s64 = r31.s64 + -88;
	// bl 0x82818ca0
	sub_82818CA0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281d37c
	if (cr6.eq) goto loc_8281D37C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281D37C:
	// addi r3,r25,40
	ctx.r3.s64 = r25.s64 + 40;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// stw r3,744(r31)
	PPC_STORE_U32(r31.u32 + 744, ctx.r3.u32);
loc_8281D388:
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
	// sth r30,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r30.u16);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f1,-24412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24412);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82f226c8
	sub_82F226C8(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,28720(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28720);
	// bl 0x822e6b48
	sub_822E6B48(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e6ad8
	sub_822E6AD8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// bl 0x8248eaf0
	sub_8248EAF0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,98
	ctx.r5.s64 = 98;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8281d420
	if (cr0.eq) goto loc_8281D420;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82494578
	sub_82494578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8281d424
	goto loc_8281D424;
loc_8281D420:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_8281D424:
	// addi r3,r31,232
	ctx.r3.s64 = r31.s64 + 232;
	// bl 0x822e6a00
	sub_822E6A00(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281d43c
	if (cr6.eq) goto loc_8281D43C;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_8281D43C:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x8281d44c
	if (cr6.eq) goto loc_8281D44C;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8281D44C:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_8281D458"))) PPC_WEAK_FUNC(sub_8281D458);
PPC_FUNC_IMPL(__imp__sub_8281D458) {
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x827f1710
	sub_827F1710(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8281d49c
	if (cr0.eq) goto loc_8281D49C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827f1838
	sub_827F1838(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x8281d4a0
	if (!cr0.eq) goto loc_8281D4A0;
loc_8281D49C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8281D4A0:
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

__attribute__((alias("__imp__sub_8281D4B8"))) PPC_WEAK_FUNC(sub_8281D4B8);
PPC_FUNC_IMPL(__imp__sub_8281D4B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82adefd0
	sub_82ADEFD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8281D4C0"))) PPC_WEAK_FUNC(sub_8281D4C0);
PPC_FUNC_IMPL(__imp__sub_8281D4C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281D4C8"))) PPC_WEAK_FUNC(sub_8281D4C8);
PPC_FUNC_IMPL(__imp__sub_8281D4C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,556(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 556);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281D4D0"))) PPC_WEAK_FUNC(sub_8281D4D0);
PPC_FUNC_IMPL(__imp__sub_8281D4D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,-23007
	ctx.r3.s64 = r11.s64 + -23007;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281D4E0"))) PPC_WEAK_FUNC(sub_8281D4E0);
PPC_FUNC_IMPL(__imp__sub_8281D4E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31945
	r11.s64 = -2093547520;
	// addi r3,r11,-18632
	ctx.r3.s64 = r11.s64 + -18632;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281D4F0"))) PPC_WEAK_FUNC(sub_8281D4F0);
PPC_FUNC_IMPL(__imp__sub_8281D4F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82513438
	sub_82513438(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8281D4F8"))) PPC_WEAK_FUNC(sub_8281D4F8);
PPC_FUNC_IMPL(__imp__sub_8281D4F8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,580(r3)
	PPC_STORE_U32(ctx.r3.u32 + 580, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281D500"))) PPC_WEAK_FUNC(sub_8281D500);
PPC_FUNC_IMPL(__imp__sub_8281D500) {
	PPC_FUNC_PROLOGUE();
	// stw r4,576(r3)
	PPC_STORE_U32(ctx.r3.u32 + 576, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281D508"))) PPC_WEAK_FUNC(sub_8281D508);
PPC_FUNC_IMPL(__imp__sub_8281D508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,572(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// stw r11,572(r3)
	PPC_STORE_U32(ctx.r3.u32 + 572, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281D518"))) PPC_WEAK_FUNC(sub_8281D518);
PPC_FUNC_IMPL(__imp__sub_8281D518) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,572(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281D530"))) PPC_WEAK_FUNC(sub_8281D530);
PPC_FUNC_IMPL(__imp__sub_8281D530) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x82dfb598
	sub_82DFB598(ctx, base);
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

__attribute__((alias("__imp__sub_8281D578"))) PPC_WEAK_FUNC(sub_8281D578);
PPC_FUNC_IMPL(__imp__sub_8281D578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x82adefd0
	sub_82ADEFD0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8281d5a4
	if (cr0.eq) goto loc_8281D5A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827f4b18
	sub_827F4B18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827f3da8
	sub_827F3DA8(ctx, base);
loc_8281D5A4:
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

__attribute__((alias("__imp__sub_8281D5B8"))) PPC_WEAK_FUNC(sub_8281D5B8);
PPC_FUNC_IMPL(__imp__sub_8281D5B8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x827f10b8
	sub_827F10B8(ctx, base);
	// lwz r3,524(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 524);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281d5ec
	if (cr6.eq) goto loc_8281D5EC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x827f7a90
	sub_827F7A90(ctx, base);
loc_8281D5EC:
	// lwz r3,532(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 532);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8281d600
	if (cr6.eq) goto loc_8281D600;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x827f7a90
	sub_827F7A90(ctx, base);
loc_8281D600:
	// lwz r30,540(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 540);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8281d620
	if (cr6.eq) goto loc_8281D620;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ab21a8
	sub_82AB21A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b4dc58
	sub_82B4DC58(ctx, base);
loc_8281D620:
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

__attribute__((alias("__imp__sub_8281D638"))) PPC_WEAK_FUNC(sub_8281D638);
PPC_FUNC_IMPL(__imp__sub_8281D638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,540(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82b4d778
	sub_82B4D778(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8281D648"))) PPC_WEAK_FUNC(sub_8281D648);
PPC_FUNC_IMPL(__imp__sub_8281D648) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281D650"))) PPC_WEAK_FUNC(sub_8281D650);
PPC_FUNC_IMPL(__imp__sub_8281D650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,540(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82b4da70
	sub_82B4DA70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8281D660"))) PPC_WEAK_FUNC(sub_8281D660);
PPC_FUNC_IMPL(__imp__sub_8281D660) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281D668"))) PPC_WEAK_FUNC(sub_8281D668);
PPC_FUNC_IMPL(__imp__sub_8281D668) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82ab21a8
	sub_82AB21A8(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_8281D6A0"))) PPC_WEAK_FUNC(sub_8281D6A0);
PPC_FUNC_IMPL(__imp__sub_8281D6A0) {
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
	// beq 0x8281d6f8
	if (cr0.eq) goto loc_8281D6F8;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-23096
	ctx.r9.s64 = r11.s64 + -23096;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8281d6fc
	goto loc_8281D6FC;
loc_8281D6F8:
	// li r11,0
	r11.s64 = 0;
loc_8281D6FC:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8281d748
	if (!cr6.eq) goto loc_8281D748;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8281d728
	if (cr6.eq) goto loc_8281D728;
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
loc_8281D728:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-1444(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1444);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8281D748:
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

__attribute__((alias("__imp__sub_8281D768"))) PPC_WEAK_FUNC(sub_8281D768);
PPC_FUNC_IMPL(__imp__sub_8281D768) {
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
	// beq 0x8281d7c0
	if (cr0.eq) goto loc_8281D7C0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-23076
	ctx.r9.s64 = r11.s64 + -23076;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8281d7c4
	goto loc_8281D7C4;
loc_8281D7C0:
	// li r11,0
	r11.s64 = 0;
loc_8281D7C4:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8281d810
	if (!cr6.eq) goto loc_8281D810;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8281d7f0
	if (cr6.eq) goto loc_8281D7F0;
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
loc_8281D7F0:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-1444(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1444);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8281D810:
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

__attribute__((alias("__imp__sub_8281D830"))) PPC_WEAK_FUNC(sub_8281D830);
PPC_FUNC_IMPL(__imp__sub_8281D830) {
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
	// beq 0x8281d888
	if (cr0.eq) goto loc_8281D888;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-23056
	ctx.r9.s64 = r11.s64 + -23056;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8281d88c
	goto loc_8281D88C;
loc_8281D888:
	// li r11,0
	r11.s64 = 0;
loc_8281D88C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8281d8d8
	if (!cr6.eq) goto loc_8281D8D8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8281d8b8
	if (cr6.eq) goto loc_8281D8B8;
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
loc_8281D8B8:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-1444(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1444);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8281D8D8:
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

__attribute__((alias("__imp__sub_8281D8F8"))) PPC_WEAK_FUNC(sub_8281D8F8);
PPC_FUNC_IMPL(__imp__sub_8281D8F8) {
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
	// beq 0x8281d950
	if (cr0.eq) goto loc_8281D950;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-23036
	ctx.r9.s64 = r11.s64 + -23036;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8281d954
	goto loc_8281D954;
loc_8281D950:
	// li r11,0
	r11.s64 = 0;
loc_8281D954:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8281d9a0
	if (!cr6.eq) goto loc_8281D9A0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8281d980
	if (cr6.eq) goto loc_8281D980;
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
loc_8281D980:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-1444(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1444);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8281D9A0:
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

__attribute__((alias("__imp__sub_8281D9C0"))) PPC_WEAK_FUNC(sub_8281D9C0);
PPC_FUNC_IMPL(__imp__sub_8281D9C0) {
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
	// beq 0x8281da18
	if (cr0.eq) goto loc_8281DA18;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-23016
	ctx.r9.s64 = r11.s64 + -23016;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8281da1c
	goto loc_8281DA1C;
loc_8281DA18:
	// li r11,0
	r11.s64 = 0;
loc_8281DA1C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8281da68
	if (!cr6.eq) goto loc_8281DA68;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8281da48
	if (cr6.eq) goto loc_8281DA48;
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
loc_8281DA48:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-1444(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1444);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8281DA68:
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

__attribute__((alias("__imp__sub_8281DA88"))) PPC_WEAK_FUNC(sub_8281DA88);
PPC_FUNC_IMPL(__imp__sub_8281DA88) {
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
	// beq 0x8281dae0
	if (cr0.eq) goto loc_8281DAE0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-22996
	ctx.r9.s64 = r11.s64 + -22996;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8281dae4
	goto loc_8281DAE4;
loc_8281DAE0:
	// li r11,0
	r11.s64 = 0;
loc_8281DAE4:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8281db30
	if (!cr6.eq) goto loc_8281DB30;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8281db10
	if (cr6.eq) goto loc_8281DB10;
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
loc_8281DB10:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-1444(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1444);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8281DB30:
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

