#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82B4B918"))) PPC_WEAK_FUNC(sub_82B4B918);
PPC_FUNC_IMPL(__imp__sub_82B4B918) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r4,r9,-14944
	ctx.r4.s64 = ctx.r9.s64 + -14944;
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 92, temp.u32);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lfs f1,92(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82b4db48
	sub_82B4DB48(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82B4B980"))) PPC_WEAK_FUNC(sub_82B4B980);
PPC_FUNC_IMPL(__imp__sub_82B4B980) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// stw r10,80(r11)
	PPC_STORE_U32(r11.u32 + 80, ctx.r10.u32);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82b4d778
	sub_82B4D778(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82b4d778
	sub_82B4D778(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82b4d778
	sub_82B4D778(ctx, base);
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

__attribute__((alias("__imp__sub_82B4B9D8"))) PPC_WEAK_FUNC(sub_82B4B9D8);
PPC_FUNC_IMPL(__imp__sub_82B4B9D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,80(r11)
	PPC_STORE_U32(r11.u32 + 80, ctx.r10.u32);
	// lwz r11,156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B4BA00"))) PPC_WEAK_FUNC(sub_82B4BA00);
PPC_FUNC_IMPL(__imp__sub_82B4BA00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,80(r11)
	PPC_STORE_U32(r11.u32 + 80, ctx.r10.u32);
	// lwz r11,156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x82b4d870
	sub_82B4D870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B4BA20"))) PPC_WEAK_FUNC(sub_82B4BA20);
PPC_FUNC_IMPL(__imp__sub_82B4BA20) {
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
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4ba74
	if (cr6.eq) goto loc_82B4BA74;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B4BA74:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4ba84
	if (cr6.eq) goto loc_82B4BA84;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B4BA84:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4ba94
	if (cr6.eq) goto loc_82B4BA94;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B4BA94:
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

__attribute__((alias("__imp__sub_82B4BAA8"))) PPC_WEAK_FUNC(sub_82B4BAA8);
PPC_FUNC_IMPL(__imp__sub_82B4BAA8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// lfs f31,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f31.f64 = double(temp.f32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// bl 0x82b4e200
	sub_82B4E200(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82b4e200
	sub_82B4E200(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// stb r30,100(r31)
	PPC_STORE_U8(r31.u32 + 100, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// stb r30,101(r31)
	PPC_STORE_U8(r31.u32 + 101, r30.u8);
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// stfs f0,92(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B4BB78"))) PPC_WEAK_FUNC(sub_82B4BB78);
PPC_FUNC_IMPL(__imp__sub_82B4BB78) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lfs f2,-22120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22120);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// lfs f1,2240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82b4e190
	sub_82B4E190(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// stb r30,100(r11)
	PPC_STORE_U8(r11.u32 + 100, r30.u8);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r4,12284(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12284);
	// beq 0x82b4bc04
	if (cr0.eq) goto loc_82B4BC04;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df98c0
	sub_82DF98C0(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,19472
	ctx.r4.s64 = r11.s64 + 19472;
	// bl 0x82e58910
	sub_82E58910(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r4,r11,19456
	ctx.r4.s64 = r11.s64 + 19456;
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// b 0x82b4bc4c
	goto loc_82B4BC4C;
loc_82B4BC04:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df98c0
	sub_82DF98C0(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// addi r3,r11,64
	ctx.r3.s64 = r11.s64 + 64;
	// lwz r30,88(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82e58910
	sub_82E58910(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// addi r3,r11,76
	ctx.r3.s64 = r11.s64 + 76;
	// lwz r30,16(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82B4BC4C:
	// bl 0x82b4d970
	sub_82B4D970(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82b4d870
	sub_82B4D870(ctx, base);
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

__attribute__((alias("__imp__sub_82B4BC98"))) PPC_WEAK_FUNC(sub_82B4BC98);
PPC_FUNC_IMPL(__imp__sub_82B4BC98) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// addi r3,r11,60
	ctx.r3.s64 = r11.s64 + 60;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,64
	ctx.r3.s64 = r11.s64 + 64;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,56
	ctx.r3.s64 = r11.s64 + 56;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,68
	ctx.r3.s64 = r11.s64 + 68;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,72
	ctx.r3.s64 = r11.s64 + 72;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,76
	ctx.r3.s64 = r11.s64 + 76;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r11,101(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 101);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82b4bd70
	if (cr0.eq) goto loc_82B4BD70;
	// bl 0x82519a90
	sub_82519A90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4df50
	sub_82B4DF50(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x82b4bdac
	goto loc_82B4BDAC;
loc_82B4BD70:
	// bl 0x82519a90
	sub_82519A90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4df50
	sub_82B4DF50(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_82B4BDAC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4bdb8
	if (cr6.eq) goto loc_82B4BDB8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B4BDB8:
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,12284(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12284);
	// bl 0x82df98c0
	sub_82DF98C0(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// addi r3,r11,60
	ctx.r3.s64 = r11.s64 + 60;
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82e58910
	sub_82E58910(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82519a90
	sub_82519A90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4df50
	sub_82B4DF50(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4be40
	if (cr6.eq) goto loc_82B4BE40;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B4BE40:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82519a90
	sub_82519A90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4df50
	sub_82B4DF50(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4be8c
	if (cr6.eq) goto loc_82B4BE8C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B4BE8C:
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82b4dca0
	sub_82B4DCA0(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82b4dca0
	sub_82B4DCA0(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82b4dca0
	sub_82B4DCA0(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// addi r3,r11,68
	ctx.r3.s64 = r11.s64 + 68;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b4d970
	sub_82B4D970(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// addi r3,r11,72
	ctx.r3.s64 = r11.s64 + 72;
	// lwz r31,8(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b4d970
	sub_82B4D970(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82B4BF00"))) PPC_WEAK_FUNC(sub_82B4BF00);
PPC_FUNC_IMPL(__imp__sub_82B4BF00) {
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
	// lis r30,-31946
	r30.s64 = -2093613056;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,12284(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12284);
	// bl 0x82df98c0
	sub_82DF98C0(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// addi r3,r11,60
	ctx.r3.s64 = r11.s64 + 60;
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e58958
	sub_82E58958(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lwz r11,80(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x82b4bf60
	if (cr6.eq) goto loc_82B4BF60;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x82b4bfc0
	if (!cr6.eq) goto loc_82B4BFC0;
loc_82B4BF60:
	// lbz r11,100(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 100);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,12284(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12284);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82b4bf94
	if (cr0.eq) goto loc_82B4BF94;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df98c0
	sub_82DF98C0(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r11,19472
	ctx.r4.s64 = r11.s64 + 19472;
	// bl 0x82e58958
	sub_82E58958(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// b 0x82b4bfbc
	goto loc_82B4BFBC;
loc_82B4BF94:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df98c0
	sub_82DF98C0(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// addi r3,r11,64
	ctx.r3.s64 = r11.s64 + 64;
	// lwz r31,96(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e58958
	sub_82E58958(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_82B4BFBC:
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_82B4BFC0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B4BFC8"))) PPC_WEAK_FUNC(sub_82B4BFC8);
PPC_FUNC_IMPL(__imp__sub_82B4BFC8) {
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
	// bl 0x82b43da0
	sub_82B43DA0(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,21452
	r11.s64 = r11.s64 + 21452;
	// addi r4,r10,21380
	ctx.r4.s64 = ctx.r10.s64 + 21380;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b4c028
	if (cr0.eq) goto loc_82B4C028;
	// bl 0x82b4baa8
	sub_82B4BAA8(ctx, base);
	// b 0x82b4c02c
	goto loc_82B4C02C;
loc_82B4C028:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B4C02C:
	// lbz r11,231(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 231);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// stw r3,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r3.u32);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stb r11,101(r3)
	PPC_STORE_U8(ctx.r3.u32 + 101, r11.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b4bc98
	sub_82B4BC98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82B4C068"))) PPC_WEAK_FUNC(sub_82B4C068);
PPC_FUNC_IMPL(__imp__sub_82B4C068) {
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
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r11,r11,21452
	r11.s64 = r11.s64 + 21452;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82b4bf00
	sub_82B4BF00(ctx, base);
	// lwz r30,156(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82b4c0ac
	if (cr6.eq) goto loc_82B4C0AC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b4ba20
	sub_82B4BA20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82B4C0AC:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,17764
	r11.s64 = r11.s64 + 17764;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82e61da0
	sub_82E61DA0(ctx, base);
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

__attribute__((alias("__imp__sub_82B4C0D8"))) PPC_WEAK_FUNC(sub_82B4C0D8);
PPC_FUNC_IMPL(__imp__sub_82B4C0D8) {
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
	// bl 0x82b4c068
	sub_82B4C068(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b4c108
	if (cr0.eq) goto loc_82B4C108;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82B4C108:
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

__attribute__((alias("__imp__sub_82B4C128"))) PPC_WEAK_FUNC(sub_82B4C128);
PPC_FUNC_IMPL(__imp__sub_82B4C128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lfs f1,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
	// bl 0x82b4e130
	sub_82B4E130(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// lfs f1,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82B4C180"))) PPC_WEAK_FUNC(sub_82B4C180);
PPC_FUNC_IMPL(__imp__sub_82B4C180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// lwz r11,156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82b4d778
	sub_82B4D778(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B4C198"))) PPC_WEAK_FUNC(sub_82B4C198);
PPC_FUNC_IMPL(__imp__sub_82B4C198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// bl 0x82b43d90
	sub_82B43D90(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lfs f1,80(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
	// bl 0x82b4e1f0
	sub_82B4E1F0(ctx, base);
	// bl 0x82b43d90
	sub_82B43D90(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lfs f2,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
	// lfs f1,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82b4e190
	sub_82B4E190(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// lfs f1,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82B4C238"))) PPC_WEAK_FUNC(sub_82B4C238);
PPC_FUNC_IMPL(__imp__sub_82B4C238) {
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
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// stfs f1,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 36, temp.u32);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82b4e128
	sub_82B4E128(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 36);
	f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
	// bl 0x82b4da70
	sub_82B4DA70(ctx, base);
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

__attribute__((alias("__imp__sub_82B4C298"))) PPC_WEAK_FUNC(sub_82B4C298);
PPC_FUNC_IMPL(__imp__sub_82B4C298) {
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
	// li r30,0
	r30.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82b4e200
	sub_82B4E200(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
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

__attribute__((alias("__imp__sub_82B4C308"))) PPC_WEAK_FUNC(sub_82B4C308);
PPC_FUNC_IMPL(__imp__sub_82B4C308) {
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
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4c344
	if (cr6.eq) goto loc_82B4C344;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B4C344:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b4c354
	if (cr0.eq) goto loc_82B4C354;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82B4C354:
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

__attribute__((alias("__imp__sub_82B4C370"))) PPC_WEAK_FUNC(sub_82B4C370);
PPC_FUNC_IMPL(__imp__sub_82B4C370) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82519a90
	sub_82519A90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4df50
	sub_82B4DF50(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4c3f4
	if (cr6.eq) goto loc_82B4C3F4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B4C3F4:
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82b4dca0
	sub_82B4DCA0(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b4d970
	sub_82B4D970(ctx, base);
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

__attribute__((alias("__imp__sub_82B4C438"))) PPC_WEAK_FUNC(sub_82B4C438);
PPC_FUNC_IMPL(__imp__sub_82B4C438) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x82b43da0
	sub_82B43DA0(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,21604
	r11.s64 = r11.s64 + 21604;
	// addi r4,r10,21540
	ctx.r4.s64 = ctx.r10.s64 + 21540;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,71
	ctx.r5.s64 = 71;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b4c488
	if (cr0.eq) goto loc_82B4C488;
	// bl 0x82b4c298
	sub_82B4C298(ctx, base);
	// b 0x82b4c48c
	goto loc_82B4C48C;
loc_82B4C488:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B4C48C:
	// stw r3,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b4c370
	sub_82B4C370(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B4C4B0"))) PPC_WEAK_FUNC(sub_82B4C4B0);
PPC_FUNC_IMPL(__imp__sub_82B4C4B0) {
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
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r11,r11,21604
	r11.s64 = r11.s64 + 21604;
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4c4e4
	if (cr6.eq) goto loc_82B4C4E4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82b4c308
	sub_82B4C308(ctx, base);
loc_82B4C4E4:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,17764
	r11.s64 = r11.s64 + 17764;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82e61da0
	sub_82E61DA0(ctx, base);
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

__attribute__((alias("__imp__sub_82B4C510"))) PPC_WEAK_FUNC(sub_82B4C510);
PPC_FUNC_IMPL(__imp__sub_82B4C510) {
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
	// bl 0x82b4c4b0
	sub_82B4C4B0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b4c540
	if (cr0.eq) goto loc_82B4C540;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82B4C540:
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

__attribute__((alias("__imp__sub_82B4C560"))) PPC_WEAK_FUNC(sub_82B4C560);
PPC_FUNC_IMPL(__imp__sub_82B4C560) {
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
	// li r30,0
	r30.s64 = 0;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82b4c5b0
	if (!cr6.eq) goto loc_82B4C5B0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// li r30,1
	r30.s64 = 1;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x82b4c5b4
	if (!cr0.eq) goto loc_82B4C5B4;
loc_82B4C5B0:
	// li r11,0
	r11.s64 = 0;
loc_82B4C5B4:
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// clrlwi r31,r11,24
	r31.u64 = r11.u32 & 0xFF;
	// beq 0x82b4c5c8
	if (cr0.eq) goto loc_82B4C5C8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_82B4C5C8:
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
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
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B4C5F0"))) PPC_WEAK_FUNC(sub_82B4C5F0);
PPC_FUNC_IMPL(__imp__sub_82B4C5F0) {
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
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b4c65c
	if (cr0.eq) goto loc_82B4C65C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfb298
	sub_82DFB298(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82b4c660
	goto loc_82B4C660;
loc_82B4C65C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B4C660:
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B4C678"))) PPC_WEAK_FUNC(sub_82B4C678);
PPC_FUNC_IMPL(__imp__sub_82B4C678) {
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
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4c6b4
	if (cr6.eq) goto loc_82B4C6B4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B4C6B4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa218
	sub_82DFA218(ctx, base);
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

__attribute__((alias("__imp__sub_82B4C6D0"))) PPC_WEAK_FUNC(sub_82B4C6D0);
PPC_FUNC_IMPL(__imp__sub_82B4C6D0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b4c7b4
	if (cr6.eq) goto loc_82B4C7B4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82dfb7b0
	sub_82DFB7B0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfaf28
	sub_82DFAF28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r30,r11,21692
	r30.s64 = r11.s64 + 21692;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b4c76c
	if (cr0.eq) goto loc_82B4C76C;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82bd42f0
	sub_82BD42F0(ctx, base);
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// b 0x82b4c7a4
	goto loc_82B4C7A4;
loc_82B4C76C:
	// addi r4,r30,20
	ctx.r4.s64 = r30.s64 + 20;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b4c7ac
	if (cr0.eq) goto loc_82B4C7AC;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82bd42f0
	sub_82BD42F0(ctx, base);
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
loc_82B4C7A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b4c5f0
	sub_82B4C5F0(ctx, base);
loc_82B4C7AC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_82B4C7B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B4C7C0"))) PPC_WEAK_FUNC(sub_82B4C7C0);
PPC_FUNC_IMPL(__imp__sub_82B4C7C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r4,r11,21744
	ctx.r4.s64 = r11.s64 + 21744;
	// b 0x82b4c6d0
	sub_82B4C6D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B4C7D0"))) PPC_WEAK_FUNC(sub_82B4C7D0);
PPC_FUNC_IMPL(__imp__sub_82B4C7D0) {
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
	// lis r11,-32244
	r11.s64 = -2113142784;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,21752
	ctx.r4.s64 = r11.s64 + 21752;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb298
	sub_82DFB298(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b4c6d0
	sub_82B4C6D0(ctx, base);
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

__attribute__((alias("__imp__sub_82B4C840"))) PPC_WEAK_FUNC(sub_82B4C840);
PPC_FUNC_IMPL(__imp__sub_82B4C840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r4,r11,21764
	ctx.r4.s64 = r11.s64 + 21764;
	// b 0x82b4c6d0
	sub_82B4C6D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B4C850"))) PPC_WEAK_FUNC(sub_82B4C850);
PPC_FUNC_IMPL(__imp__sub_82B4C850) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r4,r11,21772
	ctx.r4.s64 = r11.s64 + 21772;
	// beq 0x82b4c8b0
	if (cr0.eq) goto loc_82B4C8B0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-2072
	ctx.r4.s64 = r11.s64 + -2072;
	// bl 0x82dfb298
	sub_82DFB298(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// b 0x82b4c8d8
	goto loc_82B4C8D8;
loc_82B4C8B0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,14952
	ctx.r4.s64 = r11.s64 + 14952;
	// bl 0x82dfb298
	sub_82DFB298(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
loc_82B4C8D8:
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b4c6d0
	sub_82B4C6D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
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

__attribute__((alias("__imp__sub_82B4C910"))) PPC_WEAK_FUNC(sub_82B4C910);
PPC_FUNC_IMPL(__imp__sub_82B4C910) {
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
	// lis r11,-32244
	r11.s64 = -2113142784;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,21736
	ctx.r4.s64 = r11.s64 + 21736;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb298
	sub_82DFB298(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b4c6d0
	sub_82B4C6D0(ctx, base);
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

__attribute__((alias("__imp__sub_82B4C980"))) PPC_WEAK_FUNC(sub_82B4C980);
PPC_FUNC_IMPL(__imp__sub_82B4C980) {
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
	// bl 0x82dfa1a0
	sub_82DFA1A0(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// addi r4,r11,21796
	ctx.r4.s64 = r11.s64 + 21796;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r11,12346
	r11.s64 = 12346;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// addi r4,r10,21788
	ctx.r4.s64 = ctx.r10.s64 + 21788;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// addi r4,r11,21780
	ctx.r4.s64 = r11.s64 + 21780;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
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

__attribute__((alias("__imp__sub_82B4CA00"))) PPC_WEAK_FUNC(sub_82B4CA00);
PPC_FUNC_IMPL(__imp__sub_82B4CA00) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
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
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82b4dc58
	sub_82B4DC58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B4CA58"))) PPC_WEAK_FUNC(sub_82B4CA58);
PPC_FUNC_IMPL(__imp__sub_82B4CA58) {
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
	// beq 0x82b4cab0
	if (cr0.eq) goto loc_82B4CAB0;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,21844
	ctx.r9.s64 = r11.s64 + 21844;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82b4cab4
	goto loc_82B4CAB4;
loc_82B4CAB0:
	// li r11,0
	r11.s64 = 0;
loc_82B4CAB4:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b4cb00
	if (!cr6.eq) goto loc_82B4CB00;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b4cae0
	if (cr6.eq) goto loc_82B4CAE0;
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
loc_82B4CAE0:
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,29972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 29972);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82B4CB00:
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

__attribute__((alias("__imp__sub_82B4CB20"))) PPC_WEAK_FUNC(sub_82B4CB20);
PPC_FUNC_IMPL(__imp__sub_82B4CB20) {
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
	// li r30,0
	r30.s64 = 0;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b4cb60
	if (cr6.eq) goto loc_82B4CB60;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82e1aa70
	sub_82E1AA70(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// beq cr6,0x82b4cb60
	if (cr6.eq) goto loc_82B4CB60;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B4CB60:
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// beq cr6,0x82b4cb7c
	if (cr6.eq) goto loc_82B4CB7C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B4CB7C:
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4cb98
	if (cr6.eq) goto loc_82B4CB98;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B4CB98:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4cba8
	if (cr6.eq) goto loc_82B4CBA8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B4CBA8:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4cbb8
	if (cr6.eq) goto loc_82B4CBB8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B4CBB8:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4cbc8
	if (cr6.eq) goto loc_82B4CBC8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B4CBC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B4CBD0"))) PPC_WEAK_FUNC(sub_82B4CBD0);
PPC_FUNC_IMPL(__imp__sub_82B4CBD0) {
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
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82b4df50
	sub_82B4DF50(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4cc38
	if (cr6.eq) goto loc_82B4CC38;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82b4dc58
	sub_82B4DC58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82b4d970
	sub_82B4D970(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
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
loc_82B4CC38:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B4CC48"))) PPC_WEAK_FUNC(sub_82B4CC48);
PPC_FUNC_IMPL(__imp__sub_82B4CC48) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e1e040
	sub_82E1E040(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
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
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f0,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f13,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,48(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82b4cbd0
	sub_82B4CBD0(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4ccec
	if (cr6.eq) goto loc_82B4CCEC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B4CCEC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4ccfc
	if (cr6.eq) goto loc_82B4CCFC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B4CCFC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82B4CD08"))) PPC_WEAK_FUNC(sub_82B4CD08);
PPC_FUNC_IMPL(__imp__sub_82B4CD08) {
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
	// b 0x82b4cd48
	goto loc_82B4CD48;
loc_82B4CD2C:
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82b4d778
	sub_82B4D778(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827e1578
	sub_827E1578(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82B4CD48:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b4cd2c
	if (!cr6.eq) goto loc_82B4CD2C;
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

__attribute__((alias("__imp__sub_82B4CD68"))) PPC_WEAK_FUNC(sub_82B4CD68);
PPC_FUNC_IMPL(__imp__sub_82B4CD68) {
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
	// b 0x82b4cdb8
	goto loc_82B4CDB8;
loc_82B4CD8C:
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827e1578
	sub_827E1578(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82B4CDB8:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b4cd8c
	if (!cr6.eq) goto loc_82B4CD8C;
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

__attribute__((alias("__imp__sub_82B4CDD8"))) PPC_WEAK_FUNC(sub_82B4CDD8);
PPC_FUNC_IMPL(__imp__sub_82B4CDD8) {
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
	// beq cr6,0x82b4ce1c
	if (cr6.eq) goto loc_82B4CE1C;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82b4d778
	sub_82B4D778(ctx, base);
loc_82B4CE1C:
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

__attribute__((alias("__imp__sub_82B4CE30"))) PPC_WEAK_FUNC(sub_82B4CE30);
PPC_FUNC_IMPL(__imp__sub_82B4CE30) {
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
	// beq cr6,0x82b4ce84
	if (cr6.eq) goto loc_82B4CE84;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B4CE84:
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

__attribute__((alias("__imp__sub_82B4CE98"))) PPC_WEAK_FUNC(sub_82B4CE98);
PPC_FUNC_IMPL(__imp__sub_82B4CE98) {
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
	// bl 0x82b4ca58
	sub_82B4CA58(ctx, base);
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
	// beq cr6,0x82b4cef0
	if (cr6.eq) goto loc_82B4CEF0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B4CEF0:
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

__attribute__((alias("__imp__sub_82B4CF08"))) PPC_WEAK_FUNC(sub_82B4CF08);
PPC_FUNC_IMPL(__imp__sub_82B4CF08) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b4cfa8
	if (cr6.eq) goto loc_82B4CFA8;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,21860
	ctx.r4.s64 = r11.s64 + 21860;
	// li r5,108
	ctx.r5.s64 = 108;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b4cf90
	if (cr0.eq) goto loc_82B4CF90;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,21812
	r11.s64 = r11.s64 + 21812;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82b4cf94
	goto loc_82B4CF94;
loc_82B4CF90:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82B4CF94:
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82b4ce98
	sub_82B4CE98(ctx, base);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82e1b4a0
	sub_82E1B4A0(ctx, base);
loc_82B4CFA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B4CFB0"))) PPC_WEAK_FUNC(sub_82B4CFB0);
PPC_FUNC_IMPL(__imp__sub_82B4CFB0) {
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
	// beq 0x82b4d008
	if (cr0.eq) goto loc_82B4D008;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,21824
	ctx.r9.s64 = r11.s64 + 21824;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82b4d00c
	goto loc_82B4D00C;
loc_82B4D008:
	// li r11,0
	r11.s64 = 0;
loc_82B4D00C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b4d050
	if (!cr6.eq) goto loc_82B4D050;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b4d030
	if (cr6.eq) goto loc_82B4D030;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b4cb20
	sub_82B4CB20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_82B4D030:
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,29972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 29972);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82B4D050:
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

__attribute__((alias("__imp__sub_82B4D070"))) PPC_WEAK_FUNC(sub_82B4D070);
PPC_FUNC_IMPL(__imp__sub_82B4D070) {
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
	// beq cr6,0x82b4d09c
	if (cr6.eq) goto loc_82B4D09C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b4cb20
	sub_82B4CB20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_82B4D09C:
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

__attribute__((alias("__imp__sub_82B4D0B0"))) PPC_WEAK_FUNC(sub_82B4D0B0);
PPC_FUNC_IMPL(__imp__sub_82B4D0B0) {
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
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827ace20
	sub_827ACE20(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x82b4d120
	if (cr6.eq) goto loc_82B4D120;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82b4d778
	sub_82B4D778(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// beq cr6,0x82b4d110
	if (cr6.eq) goto loc_82B4D110;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B4D110:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827d5268
	sub_827D5268(ctx, base);
loc_82B4D120:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B4D128"))) PPC_WEAK_FUNC(sub_82B4D128);
PPC_FUNC_IMPL(__imp__sub_82B4D128) {
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
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// beq cr6,0x82b4d190
	if (cr6.eq) goto loc_82B4D190;
	// li r29,0
	r29.s64 = 0;
loc_82B4D150:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82b4d778
	sub_82B4D778(ctx, base);
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
	// beq cr6,0x82b4d178
	if (cr6.eq) goto loc_82B4D178;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B4D178:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827e1578
	sub_827E1578(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82b4d150
	if (!cr6.eq) goto loc_82B4D150;
loc_82B4D190:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82635878
	sub_82635878(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B4D1A0"))) PPC_WEAK_FUNC(sub_82B4D1A0);
PPC_FUNC_IMPL(__imp__sub_82B4D1A0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82b4df50
	sub_82B4DF50(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4d37c
	if (cr6.eq) goto loc_82B4D37C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82b4dc58
	sub_82B4DC58(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
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
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b4dc28
	sub_82B4DC28(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// addi r4,r10,21860
	ctx.r4.s64 = ctx.r10.s64 + 21860;
	// li r5,345
	ctx.r5.s64 = 345;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b4d264
	if (cr0.eq) goto loc_82B4D264;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// b 0x82b4d268
	goto loc_82B4D268;
loc_82B4D264:
	// li r31,0
	r31.s64 = 0;
loc_82B4D268:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82b4cfb0
	sub_82B4CFB0(ctx, base);
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
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b4cf08
	sub_82B4CF08(ctx, base);
	// lwz r29,92(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// beq cr6,0x82b4d2d0
	if (cr6.eq) goto loc_82B4D2D0;
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
loc_82B4D2B4:
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
	// bne 0x82b4d2b4
	if (!cr0.eq) goto loc_82B4D2B4;
loc_82B4D2D0:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
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
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// beq cr6,0x82b4d320
	if (cr6.eq) goto loc_82B4D320;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B4D304:
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
	// bne 0x82b4d304
	if (!cr0.eq) goto loc_82B4D304;
loc_82B4D320:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82af3d70
	sub_82AF3D70(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4d340
	if (cr6.eq) goto loc_82B4D340;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B4D340:
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4d350
	if (cr6.eq) goto loc_82B4D350;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B4D350:
	// lwz r31,16(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82b4d364
	if (cr6.eq) goto loc_82B4D364;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B4D364:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4d374
	if (cr6.eq) goto loc_82B4D374;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B4D374:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82b4d390
	goto loc_82B4D390;
loc_82B4D37C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4d38c
	if (cr6.eq) goto loc_82B4D38C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B4D38C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B4D390:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B4D398"))) PPC_WEAK_FUNC(sub_82B4D398);
PPC_FUNC_IMPL(__imp__sub_82B4D398) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e1e040
	sub_82E1E040(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
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
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f0,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f13,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,48(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82b4d1a0
	sub_82B4D1A0(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b4d440
	if (cr6.eq) goto loc_82B4D440;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B4D440:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4d450
	if (cr6.eq) goto loc_82B4D450;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B4D450:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B4D460"))) PPC_WEAK_FUNC(sub_82B4D460);
PPC_FUNC_IMPL(__imp__sub_82B4D460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
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
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f0,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f13,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,48(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82b4d1a0
	sub_82B4D1A0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B4D4D8"))) PPC_WEAK_FUNC(sub_82B4D4D8);
PPC_FUNC_IMPL(__imp__sub_82B4D4D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8294b538
	sub_8294B538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B4D4E0"))) PPC_WEAK_FUNC(sub_82B4D4E0);
PPC_FUNC_IMPL(__imp__sub_82B4D4E0) {
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
	// bl 0x825533a8
	sub_825533A8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
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

__attribute__((alias("__imp__sub_82B4D528"))) PPC_WEAK_FUNC(sub_82B4D528);
PPC_FUNC_IMPL(__imp__sub_82B4D528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B4D540"))) PPC_WEAK_FUNC(sub_82B4D540);
PPC_FUNC_IMPL(__imp__sub_82B4D540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stb r4,16(r11)
	PPC_STORE_U8(r11.u32 + 16, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B4D550"))) PPC_WEAK_FUNC(sub_82B4D550);
PPC_FUNC_IMPL(__imp__sub_82B4D550) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r4,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r4.u32);
	// addi r4,r11,-23007
	ctx.r4.s64 = r11.s64 + -23007;
	// stw r5,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r5.u32);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82b4d5a8
	if (cr6.eq) goto loc_82B4D5A8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dfb7f8
	sub_82DFB7F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_82B4D5A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B4D5B8"))) PPC_WEAK_FUNC(sub_82B4D5B8);
PPC_FUNC_IMPL(__imp__sub_82B4D5B8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b4d750
	if (cr6.eq) goto loc_82B4D750;
	// bl 0x82e5a180
	sub_82E5A180(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b4d68c
	if (cr0.eq) goto loc_82B4D68C;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82b4d68c
	if (cr0.eq) goto loc_82B4D68C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82b4d64c
	if (!cr6.eq) goto loc_82B4D64C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8250c518
	sub_8250C518(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,-192
	r31.s64 = r11.s64 + -192;
	// bne cr6,0x82b4d628
	if (!cr6.eq) goto loc_82B4D628;
	// li r31,0
	r31.s64 = 0;
loc_82B4D628:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b43c68
	sub_82B43C68(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// b 0x82b4d678
	goto loc_82B4D678;
loc_82B4D64C:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8250c518
	sub_8250C518(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-192
	ctx.r3.s64 = r11.s64 + -192;
	// bne cr6,0x82b4d668
	if (!cr6.eq) goto loc_82B4D668;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B4D668:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82b43c68
	sub_82B43C68(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
loc_82B4D678:
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82b4d68c
	if (!cr0.eq) goto loc_82B4D68C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b4d770
	goto loc_82B4D770;
loc_82B4D68C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8250c518
	sub_8250C518(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,-192
	r31.s64 = r11.s64 + -192;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bne cr6,0x82b4d6b8
	if (!cr6.eq) goto loc_82B4D6B8;
	// li r31,0
	r31.s64 = 0;
loc_82B4D6B8:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b42340
	sub_82B42340(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b4d720
	if (cr0.eq) goto loc_82B4D720;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-192
	ctx.r3.s64 = r11.s64 + -192;
	// bne cr6,0x82b4d704
	if (!cr6.eq) goto loc_82B4D704;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B4D704:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82b422f0
	sub_82B422F0(ctx, base);
	// li r31,1
	r31.s64 = 1;
loc_82B4D710:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82b4d770
	goto loc_82B4D770;
loc_82B4D720:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// beq cr6,0x82b4d744
	if (cr6.eq) goto loc_82B4D744;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82e5a100
	sub_82E5A100(ctx, base);
loc_82B4D73C:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82b4d710
	goto loc_82B4D710;
loc_82B4D744:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82e5a0a0
	sub_82E5A0A0(ctx, base);
	// b 0x82b4d73c
	goto loc_82B4D73C;
loc_82B4D750:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82b4d768
	if (cr6.eq) goto loc_82B4D768;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82e5a100
	sub_82E5A100(ctx, base);
	// b 0x82b4d770
	goto loc_82B4D770;
loc_82B4D768:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82e5a0a0
	sub_82E5A0A0(ctx, base);
loc_82B4D770:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B4D778"))) PPC_WEAK_FUNC(sub_82B4D778);
PPC_FUNC_IMPL(__imp__sub_82B4D778) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b4d840
	if (cr6.eq) goto loc_82B4D840;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x8250c518
	sub_8250C518(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,-192
	r31.s64 = r11.s64 + -192;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bne cr6,0x82b4d7c8
	if (!cr6.eq) goto loc_82B4D7C8;
	// li r31,0
	r31.s64 = 0;
loc_82B4D7C8:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b42340
	sub_82B42340(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b4d81c
	if (cr0.eq) goto loc_82B4D81C;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-192
	ctx.r3.s64 = r11.s64 + -192;
	// bne cr6,0x82b4d814
	if (!cr6.eq) goto loc_82B4D814;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B4D814:
	// bl 0x82b42310
	sub_82B42310(ctx, base);
	// b 0x82b4d834
	goto loc_82B4D834;
loc_82B4D81C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B4D834:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// b 0x82b4d854
	goto loc_82B4D854;
loc_82B4D840:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B4D854:
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

__attribute__((alias("__imp__sub_82B4D870"))) PPC_WEAK_FUNC(sub_82B4D870);
PPC_FUNC_IMPL(__imp__sub_82B4D870) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b4d944
	if (cr6.eq) goto loc_82B4D944;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x8250c518
	sub_8250C518(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r30,r11,-192
	r30.s64 = r11.s64 + -192;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bne cr6,0x82b4d8bc
	if (!cr6.eq) goto loc_82B4D8BC;
	// li r30,0
	r30.s64 = 0;
loc_82B4D8BC:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b42340
	sub_82B42340(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b4d918
	if (cr0.eq) goto loc_82B4D918;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-192
	ctx.r3.s64 = r11.s64 + -192;
	// bne cr6,0x82b4d908
	if (!cr6.eq) goto loc_82B4D908;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B4D908:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82b42320
	sub_82B42320(ctx, base);
	// li r31,1
	r31.s64 = 1;
	// b 0x82b4d938
	goto loc_82B4D938;
loc_82B4D918:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82B4D938:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// b 0x82b4d960
	goto loc_82B4D960;
loc_82B4D944:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82B4D960:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B4D970"))) PPC_WEAK_FUNC(sub_82B4D970);
PPC_FUNC_IMPL(__imp__sub_82B4D970) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b4da3c
	if (cr6.eq) goto loc_82B4DA3C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x8250c518
	sub_8250C518(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,-192
	r31.s64 = r11.s64 + -192;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bne cr6,0x82b4d9bc
	if (!cr6.eq) goto loc_82B4D9BC;
	// li r31,0
	r31.s64 = 0;
loc_82B4D9BC:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b42340
	sub_82B42340(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b4da14
	if (cr0.eq) goto loc_82B4DA14;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-192
	ctx.r3.s64 = r11.s64 + -192;
	// bne cr6,0x82b4da08
	if (!cr6.eq) goto loc_82B4DA08;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B4DA08:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82b42330
	sub_82B42330(ctx, base);
	// b 0x82b4da30
	goto loc_82B4DA30;
loc_82B4DA14:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B4DA30:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// b 0x82b4da54
	goto loc_82B4DA54;
loc_82B4DA3C:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B4DA54:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// bl 0x82dfb598
	sub_82DFB598(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B4DA70"))) PPC_WEAK_FUNC(sub_82B4DA70);
PPC_FUNC_IMPL(__imp__sub_82B4DA70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b4db1c
	if (cr6.eq) goto loc_82B4DB1C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x8250c518
	sub_8250C518(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,-192
	r31.s64 = r11.s64 + -192;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bne cr6,0x82b4dac8
	if (!cr6.eq) goto loc_82B4DAC8;
	// li r31,0
	r31.s64 = 0;
loc_82B4DAC8:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b42340
	sub_82B42340(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82b4db10
	if (!cr0.eq) goto loc_82B4DB10;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82e5a160
	sub_82E5A160(ctx, base);
loc_82B4DB10:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// b 0x82b4db28
	goto loc_82B4DB28;
loc_82B4DB1C:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82e5a160
	sub_82E5A160(ctx, base);
loc_82B4DB28:
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

__attribute__((alias("__imp__sub_82B4DB48"))) PPC_WEAK_FUNC(sub_82B4DB48);
PPC_FUNC_IMPL(__imp__sub_82B4DB48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b4dc00
	if (cr6.eq) goto loc_82B4DC00;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x8250c518
	sub_8250C518(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r30,r11,-192
	r30.s64 = r11.s64 + -192;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bne cr6,0x82b4db9c
	if (!cr6.eq) goto loc_82B4DB9C;
	// li r30,0
	r30.s64 = 0;
loc_82B4DB9C:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b42340
	sub_82B42340(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82b4dbf4
	if (!cr0.eq) goto loc_82B4DBF4;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B4DBF4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// b 0x82b4dc1c
	goto loc_82B4DC1C;
loc_82B4DC00:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B4DC1C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B4DC28"))) PPC_WEAK_FUNC(sub_82B4DC28);
PPC_FUNC_IMPL(__imp__sub_82B4DC28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B4DC40"))) PPC_WEAK_FUNC(sub_82B4DC40);
PPC_FUNC_IMPL(__imp__sub_82B4DC40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B4DC58"))) PPC_WEAK_FUNC(sub_82B4DC58);
PPC_FUNC_IMPL(__imp__sub_82B4DC58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B4DC70"))) PPC_WEAK_FUNC(sub_82B4DC70);
PPC_FUNC_IMPL(__imp__sub_82B4DC70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B4DC88"))) PPC_WEAK_FUNC(sub_82B4DC88);
PPC_FUNC_IMPL(__imp__sub_82B4DC88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B4DCA0"))) PPC_WEAK_FUNC(sub_82B4DCA0);
PPC_FUNC_IMPL(__imp__sub_82B4DCA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x82e5a178
	sub_82E5A178(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B4DCB0"))) PPC_WEAK_FUNC(sub_82B4DCB0);
PPC_FUNC_IMPL(__imp__sub_82B4DCB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x82e5a188
	sub_82E5A188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B4DCC0"))) PPC_WEAK_FUNC(sub_82B4DCC0);
PPC_FUNC_IMPL(__imp__sub_82B4DCC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x82e5a220
	sub_82E5A220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B4DCD0"))) PPC_WEAK_FUNC(sub_82B4DCD0);
PPC_FUNC_IMPL(__imp__sub_82B4DCD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x82e5adb8
	sub_82E5ADB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B4DCE0"))) PPC_WEAK_FUNC(sub_82B4DCE0);
PPC_FUNC_IMPL(__imp__sub_82B4DCE0) {
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
	// beq 0x82b4dd38
	if (cr0.eq) goto loc_82B4DD38;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,21928
	ctx.r9.s64 = r11.s64 + 21928;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82b4dd3c
	goto loc_82B4DD3C;
loc_82B4DD38:
	// li r11,0
	r11.s64 = 0;
loc_82B4DD3C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b4dd88
	if (!cr6.eq) goto loc_82B4DD88;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b4dd68
	if (cr6.eq) goto loc_82B4DD68;
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
loc_82B4DD68:
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,30164(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 30164);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82B4DD88:
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

__attribute__((alias("__imp__sub_82B4DDA8"))) PPC_WEAK_FUNC(sub_82B4DDA8);
PPC_FUNC_IMPL(__imp__sub_82B4DDA8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r5,4
	r30.s64 = ctx.r5.s64 + 4;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// stw r4,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r4.u32);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// beq cr6,0x82b4de04
	if (cr6.eq) goto loc_82B4DE04;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B4DDE8:
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
	// bne 0x82b4dde8
	if (!cr0.eq) goto loc_82B4DDE8;
loc_82B4DE04:
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r11.u8);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4de24
	if (cr6.eq) goto loc_82B4DE24;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B4DE24:
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

__attribute__((alias("__imp__sub_82B4DE40"))) PPC_WEAK_FUNC(sub_82B4DE40);
PPC_FUNC_IMPL(__imp__sub_82B4DE40) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,22004
	r11.s64 = r11.s64 + 22004;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r4,r10,21944
	ctx.r4.s64 = ctx.r10.s64 + 21944;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,61
	ctx.r5.s64 = 61;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b4decc
	if (cr0.eq) goto loc_82B4DECC;
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
	// beq cr6,0x82b4debc
	if (cr6.eq) goto loc_82B4DEBC;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B4DEA0:
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
	// bne 0x82b4dea0
	if (!cr0.eq) goto loc_82B4DEA0;
loc_82B4DEBC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82b4dda8
	sub_82B4DDA8(ctx, base);
	// b 0x82b4ded0
	goto loc_82B4DED0;
loc_82B4DECC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B4DED0:
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4dee4
	if (cr6.eq) goto loc_82B4DEE4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B4DEE4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B4DEF0"))) PPC_WEAK_FUNC(sub_82B4DEF0);
PPC_FUNC_IMPL(__imp__sub_82B4DEF0) {
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
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4df24
	if (cr6.eq) goto loc_82B4DF24;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B4DF24:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b4df34
	if (cr0.eq) goto loc_82B4DF34;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82B4DF34:
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

__attribute__((alias("__imp__sub_82B4DF50"))) PPC_WEAK_FUNC(sub_82B4DF50);
PPC_FUNC_IMPL(__imp__sub_82B4DF50) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x82b4df80
	if (!cr6.eq) goto loc_82B4DF80;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x82b4df80
	if (!cr6.eq) goto loc_82B4DF80;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82B4DF80:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82b4d550
	sub_82B4D550(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lis r31,-31946
	r31.s64 = -2093613056;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,12284(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12284);
	// bl 0x82df98c0
	sub_82DF98C0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,12284(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12284);
	// lwz r31,112(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82df98c0
	sub_82DF98C0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r1,120
	r31.s64 = ctx.r1.s64 + 120;
	// lwz r28,104(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82e58650
	sub_82E58650(ctx, base);
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// bl 0x82e59c70
	sub_82E59C70(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,21944
	ctx.r4.s64 = r11.s64 + 21944;
	// li r5,520
	ctx.r5.s64 = 520;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b4e070
	if (cr0.eq) goto loc_82B4E070;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq cr6,0x82b4e05c
	if (cr6.eq) goto loc_82B4E05C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B4E040:
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
	// bne 0x82b4e040
	if (!cr0.eq) goto loc_82B4E040;
loc_82B4E05C:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82b4de40
	sub_82B4DE40(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82b4e074
	goto loc_82B4E074;
loc_82B4E070:
	// li r31,0
	r31.s64 = 0;
loc_82B4E074:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b4dce0
	sub_82B4DCE0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4e0a8
	if (cr6.eq) goto loc_82B4E0A8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B4E0A8:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B4E0C0"))) PPC_WEAK_FUNC(sub_82B4E0C0);
PPC_FUNC_IMPL(__imp__sub_82B4E0C0) {
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
	// lis r11,-32244
	r11.s64 = -2113142784;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,22004
	r11.s64 = r11.s64 + 22004;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4e0fc
	if (cr6.eq) goto loc_82B4E0FC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82b4def0
	sub_82B4DEF0(ctx, base);
loc_82B4E0FC:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b4e10c
	if (cr0.eq) goto loc_82B4E10C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_82B4E10C:
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

__attribute__((alias("__imp__sub_82B4E128"))) PPC_WEAK_FUNC(sub_82B4E128);
PPC_FUNC_IMPL(__imp__sub_82B4E128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B4E130"))) PPC_WEAK_FUNC(sub_82B4E130);
PPC_FUNC_IMPL(__imp__sub_82B4E130) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f13,-3776(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -3776);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgelr cr6
	if (!cr6.lt) return;
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f12,f1,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// bge cr6,0x82b4e178
	if (!cr6.lt) goto loc_82B4E178;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82b4e184
	if (!cr6.lt) goto loc_82B4E184;
	// b 0x82b4e180
	goto loc_82B4E180;
loc_82B4E178:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82b4e184
	if (!cr6.gt) goto loc_82B4E184;
loc_82B4E180:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f13.f64;
loc_82B4E184:
	// stfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B4E190"))) PPC_WEAK_FUNC(sub_82B4E190);
PPC_FUNC_IMPL(__imp__sub_82B4E190) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// fabs f12,f2
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f1,8(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,-3776(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -3776);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// blt cr6,0x82b4e1b8
	if (cr6.lt) goto loc_82B4E1B8;
	// li r11,0
	r11.s64 = 0;
loc_82B4E1B8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b4e1d0
	if (cr0.eq) goto loc_82B4E1D0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// b 0x82b4e1e4
	goto loc_82B4E1E4;
loc_82B4E1D0:
	// fcmpu cr6,f0,f2
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f2.f64);
	// bgt cr6,0x82b4e1dc
	if (cr6.gt) goto loc_82B4E1DC;
	// fmr f0,f2
	f0.f64 = ctx.f2.f64;
loc_82B4E1DC:
	// fsubs f13,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
loc_82B4E1E4:
	// stfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B4E1F0"))) PPC_WEAK_FUNC(sub_82B4E1F0);
PPC_FUNC_IMPL(__imp__sub_82B4E1F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f2,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f2.f64 = double(temp.f32);
	// b 0x82b4e190
	sub_82B4E190(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B4E200"))) PPC_WEAK_FUNC(sub_82B4E200);
PPC_FUNC_IMPL(__imp__sub_82B4E200) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lfs f2,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82b4e190
	sub_82B4E190(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B4E230"))) PPC_WEAK_FUNC(sub_82B4E230);
PPC_FUNC_IMPL(__imp__sub_82B4E230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	r11.s64 = 0;
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, r11.u16);
	// sth r11,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, r11.u16);
	// lfs f0,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B4E250"))) PPC_WEAK_FUNC(sub_82B4E250);
PPC_FUNC_IMPL(__imp__sub_82B4E250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lfs f0,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// sth r11,24(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24, r11.u16);
	// sth r11,26(r3)
	PPC_STORE_U16(ctx.r3.u32 + 26, r11.u16);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// sth r11,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, r11.u16);
	// sth r11,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, r11.u16);
	// stfs f0,40(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// sth r11,48(r3)
	PPC_STORE_U16(ctx.r3.u32 + 48, r11.u16);
	// sth r11,50(r3)
	PPC_STORE_U16(ctx.r3.u32 + 50, r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B4E2A0"))) PPC_WEAK_FUNC(sub_82B4E2A0);
PPC_FUNC_IMPL(__imp__sub_82B4E2A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lfs f0,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// sth r11,26(r3)
	PPC_STORE_U16(ctx.r3.u32 + 26, r11.u16);
	// sth r11,24(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24, r11.u16);
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// sth r11,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, r11.u16);
	// sth r11,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B4E2E0"))) PPC_WEAK_FUNC(sub_82B4E2E0);
PPC_FUNC_IMPL(__imp__sub_82B4E2E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,56
	r11.s64 = ctx.r4.s64 * 56;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B4E2F0"))) PPC_WEAK_FUNC(sub_82B4E2F0);
PPC_FUNC_IMPL(__imp__sub_82B4E2F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,452(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 452);
	// mulli r11,r11,56
	r11.s64 = r11.s64 * 56;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B4E308"))) PPC_WEAK_FUNC(sub_82B4E308);
PPC_FUNC_IMPL(__imp__sub_82B4E308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,452(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 452);
	// mulli r11,r11,56
	r11.s64 = r11.s64 * 56;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,228
	ctx.r3.s64 = r11.s64 + 228;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B4E320"))) PPC_WEAK_FUNC(sub_82B4E320);
PPC_FUNC_IMPL(__imp__sub_82B4E320) {
	PPC_FUNC_PROLOGUE();
	// stw r4,452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 452, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B4E328"))) PPC_WEAK_FUNC(sub_82B4E328);
PPC_FUNC_IMPL(__imp__sub_82B4E328) {
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
	// mulli r11,r4,56
	r11.s64 = ctx.r4.s64 * 56;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// add r31,r11,r3
	r31.u64 = r11.u64 + ctx.r3.u64;
	// li r5,52
	ctx.r5.s64 = 52;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
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

__attribute__((alias("__imp__sub_82B4E370"))) PPC_WEAK_FUNC(sub_82B4E370);
PPC_FUNC_IMPL(__imp__sub_82B4E370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// lwz r11,12(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// lfs f0,16(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f0,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lhz r11,24(r5)
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 24);
	// sth r11,24(r4)
	PPC_STORE_U16(ctx.r4.u32 + 24, r11.u16);
	// lhz r11,26(r5)
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 26);
	// sth r11,26(r4)
	PPC_STORE_U16(ctx.r4.u32 + 26, r11.u16);
	// lfs f0,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// lfs f0,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// lhz r11,36(r5)
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 36);
	// sth r11,36(r4)
	PPC_STORE_U16(ctx.r4.u32 + 36, r11.u16);
	// lhz r11,38(r5)
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 38);
	// sth r11,38(r4)
	PPC_STORE_U16(ctx.r4.u32 + 38, r11.u16);
	// lfs f0,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// lfs f0,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// lhz r11,48(r5)
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 48);
	// sth r11,48(r4)
	PPC_STORE_U16(ctx.r4.u32 + 48, r11.u16);
	// lhz r11,50(r5)
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 50);
	// sth r11,50(r4)
	PPC_STORE_U16(ctx.r4.u32 + 50, r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B4E3F8"))) PPC_WEAK_FUNC(sub_82B4E3F8);
PPC_FUNC_IMPL(__imp__sub_82B4E3F8) {
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
	// bl 0x82dfa1a0
	sub_82DFA1A0(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r9,r31,4
	ctx.r9.s64 = r31.s64 + 4;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r10,r9,24
	ctx.r10.s64 = ctx.r9.s64 + 24;
	// li r11,0
	r11.s64 = 0;
	// lfs f0,2240(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2240);
	f0.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
loc_82B4E42C:
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r11,-20(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20, r11.u32);
	// addi r9,r9,56
	ctx.r9.s64 = ctx.r9.s64 + 56;
	// stw r11,-16(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16, r11.u32);
	// stw r11,-12(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12, r11.u32);
	// stfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// stfs f0,-4(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
	// stfs f0,4(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,8(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// sth r11,12(r10)
	PPC_STORE_U16(ctx.r10.u32 + 12, r11.u16);
	// sth r11,14(r10)
	PPC_STORE_U16(ctx.r10.u32 + 14, r11.u16);
	// stfs f0,16(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// stfs f0,20(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// sth r11,24(r10)
	PPC_STORE_U16(ctx.r10.u32 + 24, r11.u16);
	// sth r11,26(r10)
	PPC_STORE_U16(ctx.r10.u32 + 26, r11.u16);
	// stw r7,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r7.u32);
	// addi r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 + 56;
	// bge 0x82b4e42c
	if (!cr0.lt) goto loc_82B4E42C;
	// addi r9,r31,228
	ctx.r9.s64 = r31.s64 + 228;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r10,r9,24
	ctx.r10.s64 = ctx.r9.s64 + 24;
loc_82B4E48C:
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r11,-20(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20, r11.u32);
	// addi r9,r9,56
	ctx.r9.s64 = ctx.r9.s64 + 56;
	// stw r11,-16(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16, r11.u32);
	// stw r11,-12(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12, r11.u32);
	// stfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// stfs f0,-4(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
	// stfs f0,4(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,8(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// sth r11,12(r10)
	PPC_STORE_U16(ctx.r10.u32 + 12, r11.u16);
	// sth r11,14(r10)
	PPC_STORE_U16(ctx.r10.u32 + 14, r11.u16);
	// stfs f0,16(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// stfs f0,20(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// sth r11,24(r10)
	PPC_STORE_U16(ctx.r10.u32 + 24, r11.u16);
	// sth r11,26(r10)
	PPC_STORE_U16(ctx.r10.u32 + 26, r11.u16);
	// stw r7,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r7.u32);
	// addi r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 + 56;
	// bge 0x82b4e48c
	if (!cr0.lt) goto loc_82B4E48C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,452(r31)
	PPC_STORE_U32(r31.u32 + 452, r11.u32);
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

__attribute__((alias("__imp__sub_82B4E500"))) PPC_WEAK_FUNC(sub_82B4E500);
PPC_FUNC_IMPL(__imp__sub_82B4E500) {
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
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// bl 0x82b4e370
	sub_82B4E370(ctx, base);
	// lwz r11,52(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82b4e538
	if (cr6.eq) goto loc_82B4E538;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82b4e538
	if (cr6.eq) goto loc_82B4E538;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// li r11,2
	r11.s64 = 2;
	// beq cr6,0x82b4e538
	if (cr6.eq) goto loc_82B4E538;
	// li r11,4
	r11.s64 = 4;
loc_82B4E538:
	// stw r11,52(r4)
	PPC_STORE_U32(ctx.r4.u32 + 52, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B4E550"))) PPC_WEAK_FUNC(sub_82B4E550);
PPC_FUNC_IMPL(__imp__sub_82B4E550) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// lis r29,-31946
	r29.s64 = -2093613056;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,7428(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 7428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b4e578
	if (!cr6.eq) goto loc_82B4E578;
	// bl 0x822c0830
	sub_822C0830(ctx, base);
	// stw r3,7428(r29)
	PPC_STORE_U32(r29.u32 + 7428, ctx.r3.u32);
loc_82B4E578:
	// bl 0x82ea7df0
	sub_82EA7DF0(ctx, base);
	// lwz r3,7428(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 7428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b4e590
	if (!cr6.eq) goto loc_82B4E590;
	// bl 0x822c0830
	sub_822C0830(ctx, base);
	// stw r3,7428(r29)
	PPC_STORE_U32(r29.u32 + 7428, ctx.r3.u32);
loc_82B4E590:
	// bl 0x82ea7d38
	sub_82EA7D38(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// li r30,0
	r30.s64 = 0;
	// beq 0x82b4e5ec
	if (cr0.eq) goto loc_82B4E5EC;
	// addi r31,r27,228
	r31.s64 = r27.s64 + 228;
loc_82B4E5A4:
	// lwz r3,7428(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 7428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b4e5b8
	if (!cr6.eq) goto loc_82B4E5B8;
	// bl 0x822c0830
	sub_822C0830(ctx, base);
	// stw r3,7428(r29)
	PPC_STORE_U32(r29.u32 + 7428, ctx.r3.u32);
loc_82B4E5B8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ea7d40
	sub_82EA7D40(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82b4e500
	sub_82B4E500(ctx, base);
	// addi r3,r31,-224
	ctx.r3.s64 = r31.s64 + -224;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,56
	r31.s64 = r31.s64 + 56;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// blt cr6,0x82b4e5a4
	if (cr6.lt) goto loc_82B4E5A4;
loc_82B4E5EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82B4E5F8"))) PPC_WEAK_FUNC(sub_82B4E5F8);
PPC_FUNC_IMPL(__imp__sub_82B4E5F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,48
	r11.s64 = ctx.r4.s64 * 48;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B4E608"))) PPC_WEAK_FUNC(sub_82B4E608);
PPC_FUNC_IMPL(__imp__sub_82B4E608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,212(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// mulli r11,r11,48
	r11.s64 = r11.s64 * 48;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B4E620"))) PPC_WEAK_FUNC(sub_82B4E620);
PPC_FUNC_IMPL(__imp__sub_82B4E620) {
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
	// bl 0x82dfa1a0
	sub_82DFA1A0(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r9,r31,4
	ctx.r9.s64 = r31.s64 + 4;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r9,28
	r11.s64 = ctx.r9.s64 + 28;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,2240(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2240);
	f0.f64 = double(temp.f32);
loc_82B4E650:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,-24(r11)
	PPC_STORE_U32(r11.u32 + -24, ctx.r10.u32);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r10,-20(r11)
	PPC_STORE_U32(r11.u32 + -20, ctx.r10.u32);
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// stw r10,-16(r11)
	PPC_STORE_U32(r11.u32 + -16, ctx.r10.u32);
	// stw r10,-12(r11)
	PPC_STORE_U32(r11.u32 + -12, ctx.r10.u32);
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -8, temp.u32);
	// stfs f0,-4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
	// sth r10,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r10.u16);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// sth r10,12(r11)
	PPC_STORE_U16(r11.u32 + 12, ctx.r10.u16);
	// sth r10,14(r11)
	PPC_STORE_U16(r11.u32 + 14, ctx.r10.u16);
	// stw r7,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r7.u32);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// bge 0x82b4e650
	if (!cr0.lt) goto loc_82B4E650;
	// lis r11,16153
	r11.s64 = 1058603008;
	// addi r9,r31,196
	ctx.r9.s64 = r31.s64 + 196;
	// ori r11,r11,39322
	r11.u64 = r11.u64 | 39322;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r11.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r11.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r11.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(r31.u32 + 208, r11.u32);
	// stw r10,212(r31)
	PPC_STORE_U32(r31.u32 + 212, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82B4E6D8"))) PPC_WEAK_FUNC(sub_82B4E6D8);
PPC_FUNC_IMPL(__imp__sub_82B4E6D8) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r30,r11,27,31,31
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x82b4e724
	if (cr0.eq) goto loc_82B4E724;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82b4e738
	goto loc_82B4E738;
loc_82B4E724:
	// rlwinm r11,r31,31,31,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x1;
	// rlwinm r10,r31,1,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0x2;
	// rlwinm r9,r31,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFC;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// or r3,r11,r9
	ctx.r3.u64 = r11.u64 | ctx.r9.u64;
loc_82B4E738:
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

__attribute__((alias("__imp__sub_82B4E750"))) PPC_WEAK_FUNC(sub_82B4E750);
PPC_FUNC_IMPL(__imp__sub_82B4E750) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82b4e6d8
	sub_82B4E6D8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x82b4e6d8
	sub_82B4E6D8(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82b4e6d8
	sub_82B4E6D8(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x82b4e6d8
	sub_82B4E6D8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// lfs f0,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// lfs f0,20(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 24, temp.u32);
	// lhz r11,24(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 24);
	// sth r11,28(r30)
	PPC_STORE_U16(r30.u32 + 28, r11.u16);
	// lhz r11,26(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 26);
	// sth r11,30(r30)
	PPC_STORE_U16(r30.u32 + 30, r11.u16);
	// lfs f0,28(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 32, temp.u32);
	// lfs f0,32(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 32);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 36, temp.u32);
	// lhz r11,36(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 36);
	// sth r11,40(r30)
	PPC_STORE_U16(r30.u32 + 40, r11.u16);
	// lhz r11,38(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 38);
	// sth r11,42(r30)
	PPC_STORE_U16(r30.u32 + 42, r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B4E7F8"))) PPC_WEAK_FUNC(sub_82B4E7F8);
PPC_FUNC_IMPL(__imp__sub_82B4E7F8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82b4e750
	sub_82B4E750(ctx, base);
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82b4e83c
	if (cr6.eq) goto loc_82B4E83C;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82b4e83c
	if (cr6.eq) goto loc_82B4E83C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// li r11,2
	r11.s64 = 2;
	// beq cr6,0x82b4e83c
	if (cr6.eq) goto loc_82B4E83C;
	// li r11,4
	r11.s64 = 4;
loc_82B4E83C:
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
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

__attribute__((alias("__imp__sub_82B4E858"))) PPC_WEAK_FUNC(sub_82B4E858);
PPC_FUNC_IMPL(__imp__sub_82B4E858) {
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
	// lis r31,-31946
	r31.s64 = -2093613056;
	// lwz r3,7428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 7428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b4e880
	if (!cr6.eq) goto loc_82B4E880;
	// bl 0x822c0830
	sub_822C0830(ctx, base);
	// stw r3,7428(r31)
	PPC_STORE_U32(r31.u32 + 7428, ctx.r3.u32);
loc_82B4E880:
	// bl 0x82ea7d38
	sub_82EA7D38(ctx, base);
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

__attribute__((alias("__imp__sub_82B4E898"))) PPC_WEAK_FUNC(sub_82B4E898);
PPC_FUNC_IMPL(__imp__sub_82B4E898) {
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
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b0c
	// stfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, f29.u64);
	// stfd f30,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r23,-31946
	r23.s64 = -2093613056;
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// li r21,0
	r21.s64 = 0;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r28,r21
	r28.u64 = r21.u64;
	// lwz r3,7428(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 7428);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b4e8dc
	if (!cr6.eq) goto loc_82B4E8DC;
	// bl 0x822c0830
	sub_822C0830(ctx, base);
	// stw r3,7428(r23)
	PPC_STORE_U32(r23.u32 + 7428, ctx.r3.u32);
loc_82B4E8DC:
	// bl 0x82ea7d38
	sub_82EA7D38(ctx, base);
	// mr. r22,r3
	r22.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// mr r26,r21
	r26.u64 = r21.u64;
	// beq 0x82b4eb78
	if (cr0.eq) goto loc_82B4EB78;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r25,r24,196
	r25.s64 = r24.s64 + 196;
	// addi r31,r24,4
	r31.s64 = r24.s64 + 4;
	// lfs f30,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f30.f64 = double(temp.f32);
	// addi r27,r11,22016
	r27.s64 = r11.s64 + 22016;
	// lfs f31,13948(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 13948);
	f31.f64 = double(temp.f32);
loc_82B4E90C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,7428(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 7428);
	// rlwinm r29,r11,0,6,25
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3FFFFC0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r29,r29,0,22,13
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFC03FF;
	// bne cr6,0x82b4e92c
	if (!cr6.eq) goto loc_82B4E92C;
	// bl 0x822c0830
	sub_822C0830(ctx, base);
	// stw r3,7428(r23)
	PPC_STORE_U32(r23.u32 + 7428, ctx.r3.u32);
loc_82B4E92C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82ea7d40
	sub_82EA7D40(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82b4e7f8
	sub_82B4E7F8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ori r28,r28,1
	r28.u64 = r28.u64 | 1;
	// bl 0x822c0ab0
	sub_822C0AB0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// bne cr6,0x82b4e964
	if (!cr6.eq) goto loc_82B4E964;
	// mr r11,r21
	r11.u64 = r21.u64;
loc_82B4E964:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b4e9a8
	if (cr6.eq) goto loc_82B4E9A8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r28,r28,2
	r28.u64 = r28.u64 | 2;
	// bl 0x822c0ab0
	sub_822C0AB0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x82b4e98c
	if (!cr6.eq) goto loc_82B4E98C;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
loc_82B4E98C:
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
	// li r11,1
	r11.s64 = 1;
	// bne 0x82b4e9ac
	if (!cr0.eq) goto loc_82B4E9AC;
loc_82B4E9A8:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_82B4E9AC:
	// rlwinm. r10,r28,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// clrlwi r30,r11,24
	r30.u64 = r11.u32 & 0xFF;
	// beq 0x82b4e9c4
	if (cr0.eq) goto loc_82B4E9C4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r28,r28,0,31,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_82B4E9C4:
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b4e9d8
	if (cr0.eq) goto loc_82B4E9D8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rlwinm r28,r28,0,0,30
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_82B4E9D8:
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b4e9f8
	if (cr0.eq) goto loc_82B4E9F8;
	// li r11,-1
	r11.s64 = -1;
	// stw r21,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r21.u32);
	// stw r21,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r21.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r21,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r21.u32);
	// b 0x82b4eb64
	goto loc_82B4EB64;
loc_82B4E9F8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r8,r10,12,10,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3C0000;
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// addi r11,r31,20
	r11.s64 = r31.s64 + 20;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bge cr6,0x82b4ea28
	if (!cr6.lt) goto loc_82B4EA28;
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// b 0x82b4ea34
	goto loc_82B4EA34;
loc_82B4EA28:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82b4ea38
	if (!cr6.gt) goto loc_82B4EA38;
	// oris r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 262144;
loc_82B4EA34:
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_82B4EA38:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bge cr6,0x82b4ea50
	if (!cr6.lt) goto loc_82B4EA50;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// oris r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 1048576;
	// b 0x82b4ea60
	goto loc_82B4EA60;
loc_82B4EA50:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82b4ea64
	if (!cr6.gt) goto loc_82B4EA64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// oris r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 2097152;
loc_82B4EA60:
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_82B4EA64:
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bge cr6,0x82b4ea7c
	if (!cr6.lt) goto loc_82B4EA7C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// oris r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 8388608;
	// b 0x82b4ea8c
	goto loc_82B4EA8C;
loc_82B4EA7C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82b4ea90
	if (!cr6.gt) goto loc_82B4EA90;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// oris r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 4194304;
loc_82B4EA8C:
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_82B4EA90:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bge cr6,0x82b4eaa8
	if (!cr6.lt) goto loc_82B4EAA8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// oris r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 16777216;
	// b 0x82b4eab8
	goto loc_82B4EAB8;
loc_82B4EAA8:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82b4eabc
	if (!cr6.gt) goto loc_82B4EABC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// oris r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 33554432;
loc_82B4EAB8:
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_82B4EABC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r8,1020
	ctx.r8.s64 = 66846720;
	// rlwinm r6,r29,0,6,13
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x3FC0000;
	// lwz r7,-16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + -16);
	// rlwinm r5,r10,0,6,13
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3FC0000;
	// lwz r4,-8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -8);
	// rlwinm r10,r10,0,6,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3FFFFC0;
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	f0.f64 = double(temp.f32);
	// subf r8,r5,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r5.s64;
	// xor r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// and r7,r6,r5
	ctx.r7.u64 = ctx.r6.u64 & ctx.r5.u64;
	// and r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 & ctx.r8.u64;
	// stw r8,-16(r11)
	PPC_STORE_U32(r11.u32 + -16, ctx.r8.u32);
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// rlwinm r8,r6,0,6,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x3FC0000;
	// rlwinm r10,r10,0,22,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFC03FF;
	// stw r9,-12(r11)
	PPC_STORE_U32(r11.u32 + -12, ctx.r9.u32);
	// or r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 | ctx.r4.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// stw r8,-8(r11)
	PPC_STORE_U32(r11.u32 + -8, ctx.r8.u32);
	// beq cr6,0x82b4eb1c
	if (cr6.eq) goto loc_82B4EB1C;
	// stfs f0,0(r25)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r25.u32 + 0, temp.u32);
loc_82B4EB1C:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82b4eb60
	if (cr6.eq) goto loc_82B4EB60;
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 0);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f29
	f0.f64 = double(float(f0.f64 - f29.f64));
	// stfs f0,0(r25)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r25.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// bge cr6,0x82b4eb64
	if (!cr6.lt) goto loc_82B4EB64;
	// lfs f13,4(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f0,0(r25)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r25.u32 + 0, temp.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r10,0,6,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3FFFFC0;
	// rlwinm r10,r10,0,22,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFC03FF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// b 0x82b4eb64
	goto loc_82B4EB64;
loc_82B4EB60:
	// stfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r25.u32 + 0, temp.u32);
loc_82B4EB64:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// cmplw cr6,r26,r22
	cr6.compare<uint32_t>(r26.u32, r22.u32, xer);
	// blt cr6,0x82b4e90c
	if (cr6.lt) goto loc_82B4E90C;
loc_82B4EB78:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_82B4EB90"))) PPC_WEAK_FUNC(sub_82B4EB90);
PPC_FUNC_IMPL(__imp__sub_82B4EB90) {
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
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// bl 0x830ba328
	sub_830BA328(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// bl 0x830ba328
	sub_830BA328(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// addi r4,r30,20
	ctx.r4.s64 = r30.s64 + 20;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// lbz r11,32(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 32);
	// stb r11,32(r31)
	PPC_STORE_U8(r31.u32 + 32, r11.u8);
	// lbz r11,33(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 33);
	// stb r11,33(r31)
	PPC_STORE_U8(r31.u32 + 33, r11.u8);
	// lbz r11,34(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 34);
	// stb r11,34(r31)
	PPC_STORE_U8(r31.u32 + 34, r11.u8);
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 36);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
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

__attribute__((alias("__imp__sub_82B4EC28"))) PPC_WEAK_FUNC(sub_82B4EC28);
PPC_FUNC_IMPL(__imp__sub_82B4EC28) {
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
	// bl 0x830ba328
	sub_830BA328(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f0,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
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

__attribute__((alias("__imp__sub_82B4EC88"))) PPC_WEAK_FUNC(sub_82B4EC88);
PPC_FUNC_IMPL(__imp__sub_82B4EC88) {
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
	// bl 0x830ba328
	sub_830BA328(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// bl 0x830ba328
	sub_830BA328(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x830ba328
	sub_830BA328(ctx, base);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
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

__attribute__((alias("__imp__sub_82B4ECF0"))) PPC_WEAK_FUNC(sub_82B4ECF0);
PPC_FUNC_IMPL(__imp__sub_82B4ECF0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x830ba1c0
	sub_830BA1C0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-8428
	r11.s64 = r11.s64 + -8428;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x830ba298
	sub_830BA298(ctx, base);
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba1c0
	sub_830BA1C0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r11,-12472
	r29.s64 = r11.s64 + -12472;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// bl 0x830ba298
	sub_830BA298(ctx, base);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba1c0
	sub_830BA1C0(ctx, base);
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba298
	sub_830BA298(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B4ED78"))) PPC_WEAK_FUNC(sub_82B4ED78);
PPC_FUNC_IMPL(__imp__sub_82B4ED78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x82b4edd0
	if (cr0.eq) goto loc_82B4EDD0;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x830bb930
	sub_830BB930(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82B4EDD0:
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
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

__attribute__((alias("__imp__sub_82B4EDF8"))) PPC_WEAK_FUNC(sub_82B4EDF8);
PPC_FUNC_IMPL(__imp__sub_82B4EDF8) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x82b4ee38
	if (cr0.eq) goto loc_82B4EE38;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830be6c0
	sub_830BE6C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82B4EE38:
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
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

__attribute__((alias("__imp__sub_82B4EE60"))) PPC_WEAK_FUNC(sub_82B4EE60);
PPC_FUNC_IMPL(__imp__sub_82B4EE60) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x82b4eea8
	if (cr0.eq) goto loc_82B4EEA8;
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cntlzw r30,r11
	r30.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// rlwinm r4,r30,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 27) & 0x1;
	// bl 0x830bb378
	sub_830BB378(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82B4EEA8:
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
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

__attribute__((alias("__imp__sub_82B4EEC8"))) PPC_WEAK_FUNC(sub_82B4EEC8);
PPC_FUNC_IMPL(__imp__sub_82B4EEC8) {
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
	// bl 0x830ba1c0
	sub_830BA1C0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-8428
	r11.s64 = r11.s64 + -8428;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x830ba298
	sub_830BA298(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
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

__attribute__((alias("__imp__sub_82B4EF18"))) PPC_WEAK_FUNC(sub_82B4EF18);
PPC_FUNC_IMPL(__imp__sub_82B4EF18) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// beq 0x82b4f08c
	if (cr0.eq) goto loc_82B4F08C;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x830bcca8
	sub_830BCCA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b4f080
	if (cr0.eq) goto loc_82B4F080;
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(r31.s32, 1, xer);
	// beq 0x82b4efc8
	if (cr0.eq) goto loc_82B4EFC8;
	// beq cr6,0x82b4efbc
	if (cr6.eq) goto loc_82B4EFBC;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(r31.s32, 2, xer);
	// beq cr6,0x82b4efb0
	if (cr6.eq) goto loc_82B4EFB0;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(r31.s32, 3, xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// beq cr6,0x82b4efa4
	if (cr6.eq) goto loc_82B4EFA4;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r4,r11,22080
	ctx.r4.s64 = r11.s64 + 22080;
	// b 0x82b4f068
	goto loc_82B4F068;
loc_82B4EFA4:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r4,r11,22072
	ctx.r4.s64 = r11.s64 + 22072;
	// b 0x82b4f068
	goto loc_82B4F068;
loc_82B4EFB0:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r4,r11,22064
	ctx.r4.s64 = r11.s64 + 22064;
	// b 0x82b4f060
	goto loc_82B4F060;
loc_82B4EFBC:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r4,r11,22056
	ctx.r4.s64 = r11.s64 + 22056;
	// b 0x82b4f060
	goto loc_82B4F060;
loc_82B4EFC8:
	// beq cr6,0x82b4f058
	if (cr6.eq) goto loc_82B4F058;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(r31.s32, 2, xer);
	// beq cr6,0x82b4f04c
	if (cr6.eq) goto loc_82B4F04C;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(r31.s32, 3, xer);
	// beq cr6,0x82b4f040
	if (cr6.eq) goto loc_82B4F040;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// beq cr6,0x82b4f034
	if (cr6.eq) goto loc_82B4F034;
	// cmpwi cr6,r31,5
	cr6.compare<int32_t>(r31.s32, 5, xer);
	// beq cr6,0x82b4f028
	if (cr6.eq) goto loc_82B4F028;
	// cmpwi cr6,r31,6
	cr6.compare<int32_t>(r31.s32, 6, xer);
	// beq cr6,0x82b4f01c
	if (cr6.eq) goto loc_82B4F01C;
	// cmpwi cr6,r31,7
	cr6.compare<int32_t>(r31.s32, 7, xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// beq cr6,0x82b4f010
	if (cr6.eq) goto loc_82B4F010;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r11,-11776
	ctx.r4.s64 = r11.s64 + -11776;
	// b 0x82b4f068
	goto loc_82B4F068;
loc_82B4F010:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r4,r11,22048
	ctx.r4.s64 = r11.s64 + 22048;
	// b 0x82b4f068
	goto loc_82B4F068;
loc_82B4F01C:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r4,r11,22040
	ctx.r4.s64 = r11.s64 + 22040;
	// b 0x82b4f060
	goto loc_82B4F060;
loc_82B4F028:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r4,r11,22032
	ctx.r4.s64 = r11.s64 + 22032;
	// b 0x82b4f060
	goto loc_82B4F060;
loc_82B4F034:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r11,-1576
	ctx.r4.s64 = r11.s64 + -1576;
	// b 0x82b4f060
	goto loc_82B4F060;
loc_82B4F040:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r11,-11768
	ctx.r4.s64 = r11.s64 + -11768;
	// b 0x82b4f060
	goto loc_82B4F060;
loc_82B4F04C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r11,-12168
	ctx.r4.s64 = r11.s64 + -12168;
	// b 0x82b4f060
	goto loc_82B4F060;
loc_82B4F058:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r4,r11,22028
	ctx.r4.s64 = r11.s64 + 22028;
loc_82B4F060:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_82B4F068:
	// bl 0x82bd4ae8
	sub_82BD4AE8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r1,88
	r31.s64 = ctx.r1.s64 + 88;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830bf640
	sub_830BF640(ctx, base);
loc_82B4F080:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82B4F08C:
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82B4F098"))) PPC_WEAK_FUNC(sub_82B4F098);
PPC_FUNC_IMPL(__imp__sub_82B4F098) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x82b4f134
	if (cr0.eq) goto loc_82B4F134;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x830bcca8
	sub_830BCCA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b4f128
	if (cr0.eq) goto loc_82B4F128;
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq 0x82b4f108
	if (cr0.eq) goto loc_82B4F108;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r11,1732
	ctx.r4.s64 = r11.s64 + 1732;
	// b 0x82b4f110
	goto loc_82B4F110;
loc_82B4F108:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r11,-32320
	ctx.r4.s64 = r11.s64 + -32320;
loc_82B4F110:
	// bl 0x82bd4ae8
	sub_82BD4AE8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r1,96
	r30.s64 = ctx.r1.s64 + 96;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x830bf640
	sub_830BF640(ctx, base);
loc_82B4F128:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82B4F134:
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B4F140"))) PPC_WEAK_FUNC(sub_82B4F140);
PPC_FUNC_IMPL(__imp__sub_82B4F140) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x82b4f1c0
	if (cr0.eq) goto loc_82B4F1C0;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x830bcca8
	sub_830BCCA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b4f1b4
	if (cr0.eq) goto loc_82B4F1B4;
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq 0x82b4f1a8
	if (cr0.eq) goto loc_82B4F1A8;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82b4f1b0
	goto loc_82B4F1B0;
loc_82B4F1A8:
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
loc_82B4F1B0:
	// bl 0x830bf080
	sub_830BF080(ctx, base);
loc_82B4F1B4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82B4F1C0:
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B4F1D0"))) PPC_WEAK_FUNC(sub_82B4F1D0);
PPC_FUNC_IMPL(__imp__sub_82B4F1D0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x82b4f258
	if (cr0.eq) goto loc_82B4F258;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x830bcca8
	sub_830BCCA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b4f24c
	if (cr0.eq) goto loc_82B4F24C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x830bf300
	sub_830BF300(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_82B4F24C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82B4F258:
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
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

__attribute__((alias("__imp__sub_82B4F278"))) PPC_WEAK_FUNC(sub_82B4F278);
PPC_FUNC_IMPL(__imp__sub_82B4F278) {
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
	// bl 0x82332328
	sub_82332328(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f0,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
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

__attribute__((alias("__imp__sub_82B4F2D8"))) PPC_WEAK_FUNC(sub_82B4F2D8);
PPC_FUNC_IMPL(__imp__sub_82B4F2D8) {
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
	// bl 0x82332328
	sub_82332328(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// bl 0x824d30b0
	sub_824D30B0(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x824d30b0
	sub_824D30B0(ctx, base);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
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

__attribute__((alias("__imp__sub_82B4F340"))) PPC_WEAK_FUNC(sub_82B4F340);
PPC_FUNC_IMPL(__imp__sub_82B4F340) {
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
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b4f384
	if (cr0.eq) goto loc_82B4F384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_82B4F384:
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

__attribute__((alias("__imp__sub_82B4F3A0"))) PPC_WEAK_FUNC(sub_82B4F3A0);
PPC_FUNC_IMPL(__imp__sub_82B4F3A0) {
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
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b4f3e4
	if (cr0.eq) goto loc_82B4F3E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_82B4F3E4:
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

__attribute__((alias("__imp__sub_82B4F400"))) PPC_WEAK_FUNC(sub_82B4F400);
PPC_FUNC_IMPL(__imp__sub_82B4F400) {
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
	PPCRegister temp{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b4f4dc
	if (cr0.eq) goto loc_82B4F4DC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82b4ee60
	sub_82B4EE60(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23007
	ctx.r4.s64 = r11.s64 + -23007;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
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
	// beq 0x82b4f49c
	if (cr0.eq) goto loc_82B4F49C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830bac08
	sub_830BAC08(ctx, base);
loc_82B4F49C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-24780(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24780);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// beq cr6,0x82b4f4bc
	if (cr6.eq) goto loc_82B4F4BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x830ba488
	sub_830BA488(ctx, base);
loc_82B4F4BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// lwz r11,156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82b4f4dc
	if (!cr6.eq) goto loc_82B4F4DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// bl 0x830ba4c0
	sub_830BA4C0(ctx, base);
loc_82B4F4DC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B4F4F8"))) PPC_WEAK_FUNC(sub_82B4F4F8);
PPC_FUNC_IMPL(__imp__sub_82B4F4F8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b4f560
	if (cr0.eq) goto loc_82B4F560;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82b4ee60
	sub_82B4EE60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// lwz r11,156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82b4f560
	if (!cr6.eq) goto loc_82B4F560;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// bl 0x830ba4d0
	sub_830BA4D0(ctx, base);
loc_82B4F560:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
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

__attribute__((alias("__imp__sub_82B4F580"))) PPC_WEAK_FUNC(sub_82B4F580);
PPC_FUNC_IMPL(__imp__sub_82B4F580) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r30,36(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x82b4f658
	if (cr6.eq) goto loc_82B4F658;
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
loc_82B4F5A4:
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830bf040
	sub_830BF040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// bl 0x830bf0e8
	sub_830BF0E8(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	f0.f64 = double(float(f0.f64 - ctx.f1.f64));
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// bl 0x830bf158
	sub_830BF158(ctx, base);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	f0.f64 = double(float(f0.f64 - ctx.f1.f64));
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830c0950
	sub_830C0950(ctx, base);
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f0,f0,f12
	f0.f64 = double(float(f0.f64 / ctx.f12.f64));
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r28,r1,88
	r28.s64 = ctx.r1.s64 + 88;
	// fdivs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f12
	f0.f64 = double(float(f0.f64 + ctx.f12.f64));
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f0,f13,f11
	f0.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x830bb940
	sub_830BB940(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// bl 0x830ba470
	sub_830BA470(ctx, base);
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// addi r31,r31,32
	r31.s64 = r31.s64 + 32;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82b4f5a4
	if (!cr6.eq) goto loc_82B4F5A4;
loc_82B4F658:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B4F660"))) PPC_WEAK_FUNC(sub_82B4F660);
PPC_FUNC_IMPL(__imp__sub_82B4F660) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x82b4f800
	if (cr0.eq) goto loc_82B4F800;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830bac08
	sub_830BAC08(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82b4f7fc
	if (cr0.eq) goto loc_82B4F7FC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82b4ee60
	sub_82B4EE60(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b4f4f8
	sub_82B4F4F8(ctx, base);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x82b4f774
	if (!cr6.eq) goto loc_82B4F774;
	// addi r29,r30,48
	r29.s64 = r30.s64 + 48;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b4f72c
	if (cr0.eq) goto loc_82B4F72C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830ba498
	sub_830BA498(ctx, base);
	// b 0x82b4f74c
	goto loc_82B4F74C;
loc_82B4F72C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830ba4a8
	sub_830BA4A8(ctx, base);
loc_82B4F74C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x830ba488
	sub_830BA488(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82ae9d30
	sub_82AE9D30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x830ba4e0
	sub_830BA4E0(ctx, base);
loc_82B4F774:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(r28.s32, 1, xer);
	// bne cr6,0x82b4f7fc
	if (!cr6.eq) goto loc_82B4F7FC;
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b4f7b4
	if (cr0.eq) goto loc_82B4F7B4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba498
	sub_830BA498(ctx, base);
	// b 0x82b4f7d4
	goto loc_82B4F7D4;
loc_82B4F7B4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba4b8
	sub_830BA4B8(ctx, base);
loc_82B4F7D4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830ba488
	sub_830BA488(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82ae9d30
	sub_82AE9D30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x830ba4e0
	sub_830BA4E0(ctx, base);
loc_82B4F7FC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82B4F800:
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82B4F818"))) PPC_WEAK_FUNC(sub_82B4F818);
PPC_FUNC_IMPL(__imp__sub_82B4F818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x82b4f9a8
	if (cr0.eq) goto loc_82B4F9A8;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x830ba760
	sub_830BA760(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82b4f9a4
	if (cr0.eq) goto loc_82B4F9A4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82b4ee60
	sub_82B4EE60(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b4f4f8
	sub_82B4F4F8(ctx, base);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x82b4f91c
	if (!cr6.eq) goto loc_82B4F91C;
	// addi r29,r30,48
	r29.s64 = r30.s64 + 48;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b4f8d4
	if (cr0.eq) goto loc_82B4F8D4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830ba498
	sub_830BA498(ctx, base);
	// b 0x82b4f8f4
	goto loc_82B4F8F4;
loc_82B4F8D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830ba4a8
	sub_830BA4A8(ctx, base);
loc_82B4F8F4:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x830ba488
	sub_830BA488(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82ae9d30
	sub_82AE9D30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x830ba4e0
	sub_830BA4E0(ctx, base);
loc_82B4F91C:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(r28.s32, 1, xer);
	// bne cr6,0x82b4f9a4
	if (!cr6.eq) goto loc_82B4F9A4;
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b4f95c
	if (cr0.eq) goto loc_82B4F95C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba498
	sub_830BA498(ctx, base);
	// b 0x82b4f97c
	goto loc_82B4F97C;
loc_82B4F95C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba4b8
	sub_830BA4B8(ctx, base);
loc_82B4F97C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830ba488
	sub_830BA488(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82ae9d30
	sub_82AE9D30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x830ba4e0
	sub_830BA4E0(ctx, base);
loc_82B4F9A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82B4F9A8:
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82B4F9B8"))) PPC_WEAK_FUNC(sub_82B4F9B8);
PPC_FUNC_IMPL(__imp__sub_82B4F9B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x82b4fa98
	if (cr0.eq) goto loc_82B4FA98;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x830bac08
	sub_830BAC08(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82b4fa94
	if (cr0.eq) goto loc_82B4FA94;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82b4ee60
	sub_82B4EE60(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b4f4f8
	sub_82B4F4F8(ctx, base);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x82b4fa6c
	if (!cr6.eq) goto loc_82B4FA6C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82ae9d30
	sub_82AE9D30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x830ba4e0
	sub_830BA4E0(ctx, base);
loc_82B4FA6C:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(r28.s32, 1, xer);
	// bne cr6,0x82b4fa94
	if (!cr6.eq) goto loc_82B4FA94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82ae9d30
	sub_82AE9D30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x830ba4e0
	sub_830BA4E0(ctx, base);
loc_82B4FA94:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82B4FA98:
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82B4FAB0"))) PPC_WEAK_FUNC(sub_82B4FAB0);
PPC_FUNC_IMPL(__imp__sub_82B4FAB0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// beq cr6,0x82b4faec
	if (cr6.eq) goto loc_82B4FAEC;
loc_82B4FAD4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b4f340
	sub_82B4F340(ctx, base);
	// addi r31,r31,40
	r31.s64 = r31.s64 + 40;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82b4fad4
	if (!cr6.eq) goto loc_82B4FAD4;
loc_82B4FAEC:
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

__attribute__((alias("__imp__sub_82B4FB08"))) PPC_WEAK_FUNC(sub_82B4FB08);
PPC_FUNC_IMPL(__imp__sub_82B4FB08) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// beq cr6,0x82b4fb48
	if (cr6.eq) goto loc_82B4FB48;
loc_82B4FB2C:
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82b4fb2c
	if (!cr6.eq) goto loc_82B4FB2C;
loc_82B4FB48:
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

__attribute__((alias("__imp__sub_82B4FB60"))) PPC_WEAK_FUNC(sub_82B4FB60);
PPC_FUNC_IMPL(__imp__sub_82B4FB60) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// beq cr6,0x82b4fb9c
	if (cr6.eq) goto loc_82B4FB9C;
loc_82B4FB84:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b4f3a0
	sub_82B4F3A0(ctx, base);
	// addi r31,r31,32
	r31.s64 = r31.s64 + 32;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82b4fb84
	if (!cr6.eq) goto loc_82B4FB84;
loc_82B4FB9C:
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

__attribute__((alias("__imp__sub_82B4FBB8"))) PPC_WEAK_FUNC(sub_82B4FBB8);
PPC_FUNC_IMPL(__imp__sub_82B4FBB8) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4fbf4
	if (cr6.eq) goto loc_82B4FBF4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82b4fab0
	sub_82B4FAB0(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
loc_82B4FBF4:
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
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

__attribute__((alias("__imp__sub_82B4FC18"))) PPC_WEAK_FUNC(sub_82B4FC18);
PPC_FUNC_IMPL(__imp__sub_82B4FC18) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r29,r31
	r29.u64 = r31.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b4fc60
	if (cr6.eq) goto loc_82B4FC60;
loc_82B4FC40:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82b4fc54
	if (cr6.eq) goto loc_82B4FC54;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d1e48
	sub_824D1E48(ctx, base);
loc_82B4FC54:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// bne 0x82b4fc40
	if (!cr0.eq) goto loc_82B4FC40;
loc_82B4FC60:
	// mulli r11,r31,40
	r11.s64 = r31.s64 * 40;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82B4FC70"))) PPC_WEAK_FUNC(sub_82B4FC70);
PPC_FUNC_IMPL(__imp__sub_82B4FC70) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4fcac
	if (cr6.eq) goto loc_82B4FCAC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82b4fb08
	sub_82B4FB08(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
loc_82B4FCAC:
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
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

__attribute__((alias("__imp__sub_82B4FCD0"))) PPC_WEAK_FUNC(sub_82B4FCD0);
PPC_FUNC_IMPL(__imp__sub_82B4FCD0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r29,r31
	r29.u64 = r31.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b4fd18
	if (cr6.eq) goto loc_82B4FD18;
loc_82B4FCF8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82b4fd0c
	if (cr6.eq) goto loc_82B4FD0C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b4f278
	sub_82B4F278(ctx, base);
loc_82B4FD0C:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// bne 0x82b4fcf8
	if (!cr0.eq) goto loc_82B4FCF8;
loc_82B4FD18:
	// mulli r11,r31,24
	r11.s64 = r31.s64 * 24;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82B4FD28"))) PPC_WEAK_FUNC(sub_82B4FD28);
PPC_FUNC_IMPL(__imp__sub_82B4FD28) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b4fd64
	if (cr6.eq) goto loc_82B4FD64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82b4fb60
	sub_82B4FB60(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
loc_82B4FD64:
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
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

__attribute__((alias("__imp__sub_82B4FD88"))) PPC_WEAK_FUNC(sub_82B4FD88);
PPC_FUNC_IMPL(__imp__sub_82B4FD88) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r29,r31
	r29.u64 = r31.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b4fdd0
	if (cr6.eq) goto loc_82B4FDD0;
loc_82B4FDB0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82b4fdc4
	if (cr6.eq) goto loc_82B4FDC4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b4f2d8
	sub_82B4F2D8(ctx, base);
loc_82B4FDC4:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// bne 0x82b4fdb0
	if (!cr0.eq) goto loc_82B4FDB0;
loc_82B4FDD0:
	// rlwinm r11,r31,5,0,26
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82B4FDE0"))) PPC_WEAK_FUNC(sub_82B4FDE0);
PPC_FUNC_IMPL(__imp__sub_82B4FDE0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r31,r29,40
	r31.s64 = r29.s64 + 40;
	// lwz r28,8(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// beq cr6,0x82b4fe24
	if (cr6.eq) goto loc_82B4FE24;
	// subf r26,r31,r29
	r26.s64 = r29.s64 - r31.s64;
loc_82B4FE0C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r26,r31
	ctx.r3.u64 = r26.u64 + r31.u64;
	// bl 0x82b4eb90
	sub_82B4EB90(ctx, base);
	// addi r31,r31,40
	r31.s64 = r31.s64 + 40;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// bne cr6,0x82b4fe0c
	if (!cr6.eq) goto loc_82B4FE0C;
loc_82B4FE24:
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r4,-40
	ctx.r3.s64 = ctx.r4.s64 + -40;
	// bl 0x82b4fab0
	sub_82B4FAB0(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r29,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r29.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r11,r11,-40
	r11.s64 = r11.s64 + -40;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82B4FE50"))) PPC_WEAK_FUNC(sub_82B4FE50);
PPC_FUNC_IMPL(__imp__sub_82B4FE50) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// lwz r28,8(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// beq cr6,0x82b4fe94
	if (cr6.eq) goto loc_82B4FE94;
	// subf r26,r31,r29
	r26.s64 = r29.s64 - r31.s64;
loc_82B4FE7C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r26,r31
	ctx.r3.u64 = r26.u64 + r31.u64;
	// bl 0x82b4ec28
	sub_82B4EC28(ctx, base);
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// bne cr6,0x82b4fe7c
	if (!cr6.eq) goto loc_82B4FE7C;
loc_82B4FE94:
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r4,-24
	ctx.r3.s64 = ctx.r4.s64 + -24;
	// bl 0x82b4fb08
	sub_82B4FB08(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r29,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r29.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r11,r11,-24
	r11.s64 = r11.s64 + -24;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82B4FEC0"))) PPC_WEAK_FUNC(sub_82B4FEC0);
PPC_FUNC_IMPL(__imp__sub_82B4FEC0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r31,r29,32
	r31.s64 = r29.s64 + 32;
	// lwz r28,8(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// beq cr6,0x82b4ff04
	if (cr6.eq) goto loc_82B4FF04;
	// subf r26,r31,r29
	r26.s64 = r29.s64 - r31.s64;
loc_82B4FEEC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r26,r31
	ctx.r3.u64 = r26.u64 + r31.u64;
	// bl 0x82b4ec88
	sub_82B4EC88(ctx, base);
	// addi r31,r31,32
	r31.s64 = r31.s64 + 32;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// bne cr6,0x82b4feec
	if (!cr6.eq) goto loc_82B4FEEC;
loc_82B4FF04:
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r4,-32
	ctx.r3.s64 = ctx.r4.s64 + -32;
	// bl 0x82b4fb60
	sub_82B4FB60(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r29,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r29.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82B4FF30"))) PPC_WEAK_FUNC(sub_82B4FF30);
PPC_FUNC_IMPL(__imp__sub_82B4FF30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplw cr6,r27,r6
	cr6.compare<uint32_t>(r27.u32, ctx.r6.u32, xer);
	// beq cr6,0x82b4ff94
	if (cr6.eq) goto loc_82B4FF94;
	// lwz r29,8(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r31,r27
	r31.u64 = r27.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r29
	cr6.compare<uint32_t>(ctx.r6.u32, r29.u32, xer);
	// beq cr6,0x82b4ff80
	if (cr6.eq) goto loc_82B4FF80;
loc_82B4FF64:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b4eb90
	sub_82B4EB90(ctx, base);
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// addi r31,r31,40
	r31.s64 = r31.s64 + 40;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x82b4ff64
	if (!cr6.eq) goto loc_82B4FF64;
loc_82B4FF80:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b4fab0
	sub_82B4FAB0(ctx, base);
	// stw r31,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r31.u32);
loc_82B4FF94:
	// stw r27,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r27.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82B4FFA8"))) PPC_WEAK_FUNC(sub_82B4FFA8);
PPC_FUNC_IMPL(__imp__sub_82B4FFA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplw cr6,r27,r6
	cr6.compare<uint32_t>(r27.u32, ctx.r6.u32, xer);
	// beq cr6,0x82b5000c
	if (cr6.eq) goto loc_82B5000C;
	// lwz r29,8(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r31,r27
	r31.u64 = r27.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r29
	cr6.compare<uint32_t>(ctx.r6.u32, r29.u32, xer);
	// beq cr6,0x82b4fff8
	if (cr6.eq) goto loc_82B4FFF8;
loc_82B4FFDC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b4ec88
	sub_82B4EC88(ctx, base);
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// addi r31,r31,32
	r31.s64 = r31.s64 + 32;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x82b4ffdc
	if (!cr6.eq) goto loc_82B4FFDC;
loc_82B4FFF8:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b4fb60
	sub_82B4FB60(ctx, base);
	// stw r31,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r31.u32);
loc_82B5000C:
	// stw r27,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r27.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82B50020"))) PPC_WEAK_FUNC(sub_82B50020);
PPC_FUNC_IMPL(__imp__sub_82B50020) {
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
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x82b4fd28
	sub_82B4FD28(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82b4fc70
	sub_82B4FC70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b4fbb8
	sub_82B4FBB8(ctx, base);
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

__attribute__((alias("__imp__sub_82B50068"))) PPC_WEAK_FUNC(sub_82B50068);
PPC_FUNC_IMPL(__imp__sub_82B50068) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, f29.u64);
	// stfd f30,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// li r27,0
	r27.s64 = 0;
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x82b50248
	if (cr6.eq) goto loc_82B50248;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
loc_82B500A4:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b500c0
	if (cr0.eq) goto loc_82B500C0;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r27,0
	r27.s64 = 0;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x82b500c0
	if (cr6.eq) goto loc_82B500C0;
	// addi r31,r31,-40
	r31.s64 = r31.s64 + -40;
loc_82B500C0:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	f0.f64 = double(float(f0.f64 - f30.f64));
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bgt cr6,0x82b50238
	if (cr6.gt) goto loc_82B50238;
	// lbz r11,34(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 34);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82b50164
	if (cr0.eq) goto loc_82B50164;
	// addi r28,r31,20
	r28.s64 = r31.s64 + 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// bl 0x830ba4b8
	sub_830BA4B8(ctx, base);
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	f0.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// fadds f29,f1,f0
	f29.f64 = double(float(ctx.f1.f64 + f0.f64));
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x82b4f400
	sub_82B4F400(ctx, base);
	// b 0x82b50214
	goto loc_82B50214;
loc_82B50164:
	// lbz r11,32(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82b5018c
	if (cr0.eq) goto loc_82B5018C;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r29,r1,96
	r29.s64 = ctx.r1.s64 + 96;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x830bb950
	sub_830BB950(ctx, base);
loc_82B5018C:
	// addi r28,r31,4
	r28.s64 = r31.s64 + 4;
	// lbz r29,33(r31)
	r29.u64 = PPC_LOAD_U8(r31.u32 + 33);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82b4ee60
	sub_82B4EE60(ctx, base);
	// lbz r11,33(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 33);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82b50214
	if (cr0.eq) goto loc_82B50214;
	// addi r29,r30,48
	r29.s64 = r30.s64 + 48;
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830ba328
	sub_830BA328(ctx, base);
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r26,28(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r25,24(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830ba410
	sub_830BA410(ctx, base);
loc_82B50214:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82b4fde0
	sub_82B4FDE0(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x82b50248
	if (cr6.eq) goto loc_82B50248;
	// li r27,1
	r27.s64 = 1;
loc_82B50238:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r31,r31,40
	r31.s64 = r31.s64 + 40;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82b500a4
	if (!cr6.eq) goto loc_82B500A4;
loc_82B50248:
	// lwz r31,20(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x82b50300
	if (cr6.eq) goto loc_82B50300;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-24700(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24700);
	f0.f64 = double(temp.f32);
	// fmuls f31,f30,f0
	f31.f64 = double(float(f30.f64 * f0.f64));
loc_82B50264:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b50280
	if (cr0.eq) goto loc_82B50280;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r27,0
	r27.s64 = 0;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x82b50280
	if (cr6.eq) goto loc_82B50280;
	// addi r31,r31,-24
	r31.s64 = r31.s64 + -24;
loc_82B50280:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// lfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x830ba488
	sub_830BA488(ctx, base);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	f0.f64 = double(float(f0.f64 + f31.f64));
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82b502f0
	if (!cr6.gt) goto loc_82B502F0;
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// lfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x830ba488
	sub_830BA488(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// bl 0x830ba4c0
	sub_830BA4C0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82b4fe50
	sub_82B4FE50(ctx, base);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x82b50300
	if (cr6.eq) goto loc_82B50300;
	// li r27,1
	r27.s64 = 1;
loc_82B502F0:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82b50264
	if (!cr6.eq) goto loc_82B50264;
loc_82B50300:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82B50318"))) PPC_WEAK_FUNC(sub_82B50318);
PPC_FUNC_IMPL(__imp__sub_82B50318) {
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
	// lwz r31,36(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// b 0x82b5036c
	goto loc_82B5036C;
loc_82B50334:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba248
	sub_830BA248(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82b50368
	if (cr0.eq) goto loc_82B50368;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r30,32
	ctx.r4.s64 = r30.s64 + 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b4fec0
	sub_82B4FEC0(ctx, base);
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x82b50378
	if (cr6.eq) goto loc_82B50378;
loc_82B50368:
	// addi r31,r31,32
	r31.s64 = r31.s64 + 32;
loc_82B5036C:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82b50334
	if (!cr6.eq) goto loc_82B50334;
loc_82B50378:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B50388"))) PPC_WEAK_FUNC(sub_82B50388);
PPC_FUNC_IMPL(__imp__sub_82B50388) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b10
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// bl 0x824d1e48
	sub_824D1E48(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r22,40
	r22.s64 = 40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b503c4
	if (!cr6.eq) goto loc_82B503C4;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82b503d0
	goto loc_82B503D0;
loc_82B503C4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r8,r11,r22
	ctx.r8.s32 = r11.s32 / r22.s32;
loc_82B503D0:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82b506cc
	if (cr6.eq) goto loc_82B506CC;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b503e8
	if (!cr6.eq) goto loc_82B503E8;
	// li r11,0
	r11.s64 = 0;
	// b 0x82b503f4
	goto loc_82B503F4;
loc_82B503E8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
loc_82B503F4:
	// lis r9,1638
	ctx.r9.s64 = 107347968;
	// ori r9,r9,26214
	ctx.r9.u64 = ctx.r9.u64 | 26214;
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// bge cr6,0x82b50410
	if (!cr6.lt) goto loc_82B50410;
	// bl 0x8284e0a0
	sub_8284E0A0(ctx, base);
	// b 0x82b506cc
	goto loc_82B506CC;
loc_82B50410:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b50420
	if (!cr6.eq) goto loc_82B50420;
	// li r11,0
	r11.s64 = 0;
	// b 0x82b5042c
	goto loc_82B5042C;
loc_82B50420:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
loc_82B5042C:
	// add r11,r11,r23
	r11.u64 = r11.u64 + r23.u64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bge cr6,0x82b5059c
	if (!cr6.lt) goto loc_82B5059C;
	// rlwinm r11,r8,31,1,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x82b50450
	if (!cr6.lt) goto loc_82B50450;
	// li r11,0
	r11.s64 = 0;
	// b 0x82b50454
	goto loc_82B50454;
loc_82B50450:
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
loc_82B50454:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b50464
	if (!cr6.eq) goto loc_82B50464;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82b50470
	goto loc_82B50470;
loc_82B50464:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r9,r9,r22
	ctx.r9.s32 = ctx.r9.s32 / r22.s32;
loc_82B50470:
	// add r9,r9,r23
	ctx.r9.u64 = ctx.r9.u64 + r23.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82b5049c
	if (!cr6.lt) goto loc_82B5049C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b5048c
	if (!cr6.eq) goto loc_82B5048C;
	// li r11,0
	r11.s64 = 0;
	// b 0x82b50498
	goto loc_82B50498;
loc_82B5048C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
loc_82B50498:
	// add r11,r11,r23
	r11.u64 = r11.u64 + r23.u64;
loc_82B5049C:
	// mulli r24,r11,40
	r24.s64 = r11.s64 * 40;
	// lis r25,-31946
	r25.s64 = -2093613056;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// addi r4,r11,2300
	ctx.r4.s64 = r11.s64 + 2300;
	// li r5,45
	ctx.r5.s64 = 45;
	// lwz r3,6512(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 6512);
	// bl 0x82df9d90
	sub_82DF9D90(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r29,r27
	r29.u64 = r27.u64;
	// b 0x82b504e8
	goto loc_82B504E8;
loc_82B504CC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82b504e0
	if (cr6.eq) goto loc_82B504E0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824d1e48
	sub_824D1E48(ctx, base);
loc_82B504E0:
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// addi r29,r29,40
	r29.s64 = r29.s64 + 40;
loc_82B504E8:
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(r30.u32, r26.u32, xer);
	// bne cr6,0x82b504cc
	if (!cr6.eq) goto loc_82B504CC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b4fc18
	sub_82B4FC18(ctx, base);
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r26,r29
	cr6.compare<uint32_t>(r26.u32, r29.u32, xer);
	// beq cr6,0x82b5053c
	if (cr6.eq) goto loc_82B5053C;
	// subf r28,r30,r26
	r28.s64 = r26.s64 - r30.s64;
loc_82B50518:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82b5052c
	if (cr6.eq) goto loc_82B5052C;
	// add r4,r28,r30
	ctx.r4.u64 = r28.u64 + r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d1e48
	sub_824D1E48(ctx, base);
loc_82B5052C:
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// add r11,r28,r30
	r11.u64 = r28.u64 + r30.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x82b50518
	if (!cr6.eq) goto loc_82B50518;
loc_82B5053C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b50550
	if (!cr6.eq) goto loc_82B50550;
	// li r11,0
	r11.s64 = 0;
	// b 0x82b5055c
	goto loc_82B5055C;
loc_82B50550:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
loc_82B5055C:
	// add r30,r11,r23
	r30.u64 = r11.u64 + r23.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b50580
	if (cr6.eq) goto loc_82B50580;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82b4fab0
	sub_82B4FAB0(ctx, base);
	// lwz r3,6512(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 6512);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
loc_82B50580:
	// mulli r11,r30,40
	r11.s64 = r30.s64 * 40;
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// add r10,r24,r27
	ctx.r10.u64 = r24.u64 + r27.u64;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82b506cc
	goto loc_82B506CC;
loc_82B5059C:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r26,r30
	r11.s64 = r30.s64 - r26.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// bge cr6,0x82b5063c
	if (!cr6.lt) goto loc_82B5063C;
	// mulli r29,r23,40
	r29.s64 = r23.s64 * 40;
	// add r28,r29,r26
	r28.u64 = r29.u64 + r26.u64;
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(r26.u32, r30.u32, xer);
	// beq cr6,0x82b505e8
	if (cr6.eq) goto loc_82B505E8;
	// subf r27,r29,r28
	r27.s64 = r28.s64 - r29.s64;
loc_82B505C4:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82b505d8
	if (cr6.eq) goto loc_82B505D8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824d1e48
	sub_824D1E48(ctx, base);
loc_82B505D8:
	// addi r27,r27,40
	r27.s64 = r27.s64 + 40;
	// addi r28,r28,40
	r28.s64 = r28.s64 + 40;
	// cmplw cr6,r27,r30
	cr6.compare<uint32_t>(r27.u32, r30.u32, xer);
	// bne cr6,0x82b505c4
	if (!cr6.eq) goto loc_82B505C4;
loc_82B505E8:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r11,r26,r4
	r11.s64 = ctx.r4.s64 - r26.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
	// subf r5,r11,r23
	ctx.r5.s64 = r23.s64 - r11.s64;
	// bl 0x82b4fc18
	sub_82B4FC18(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r28,r26
	r28.u64 = r26.u64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// subf r30,r29,r11
	r30.s64 = r11.s64 - r29.s64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(r26.u32, r30.u32, xer);
	// beq cr6,0x82b506cc
	if (cr6.eq) goto loc_82B506CC;
loc_82B50620:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82b4eb90
	sub_82B4EB90(ctx, base);
	// addi r28,r28,40
	r28.s64 = r28.s64 + 40;
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(r28.u32, r30.u32, xer);
	// bne cr6,0x82b50620
	if (!cr6.eq) goto loc_82B50620;
	// b 0x82b506cc
	goto loc_82B506CC;
loc_82B5063C:
	// mulli r25,r23,40
	r25.s64 = r23.s64 * 40;
	// subf r29,r25,r30
	r29.s64 = r30.s64 - r25.s64;
	// mr r28,r30
	r28.u64 = r30.u64;
	// mr r27,r29
	r27.u64 = r29.u64;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// beq cr6,0x82b50678
	if (cr6.eq) goto loc_82B50678;
loc_82B50654:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82b50668
	if (cr6.eq) goto loc_82B50668;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824d1e48
	sub_824D1E48(ctx, base);
loc_82B50668:
	// addi r27,r27,40
	r27.s64 = r27.s64 + 40;
	// addi r28,r28,40
	r28.s64 = r28.s64 + 40;
	// cmplw cr6,r27,r30
	cr6.compare<uint32_t>(r27.u32, r30.u32, xer);
	// bne cr6,0x82b50654
	if (!cr6.eq) goto loc_82B50654;
loc_82B50678:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplw cr6,r26,r29
	cr6.compare<uint32_t>(r26.u32, r29.u32, xer);
	// beq cr6,0x82b506a4
	if (cr6.eq) goto loc_82B506A4;
	// subf r30,r29,r30
	r30.s64 = r30.s64 - r29.s64;
loc_82B5068C:
	// addi r31,r31,-40
	r31.s64 = r31.s64 + -40;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r30,r31
	ctx.r3.u64 = r30.u64 + r31.u64;
	// bl 0x82b4eb90
	sub_82B4EB90(ctx, base);
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(r31.u32, r26.u32, xer);
	// bne cr6,0x82b5068c
	if (!cr6.eq) goto loc_82B5068C;
loc_82B506A4:
	// add r30,r25,r26
	r30.u64 = r25.u64 + r26.u64;
	// mr r31,r26
	r31.u64 = r26.u64;
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(r26.u32, r30.u32, xer);
	// beq cr6,0x82b506cc
	if (cr6.eq) goto loc_82B506CC;
loc_82B506B4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b4eb90
	sub_82B4EB90(ctx, base);
	// addi r31,r31,40
	r31.s64 = r31.s64 + 40;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82b506b4
	if (!cr6.eq) goto loc_82B506B4;
loc_82B506CC:
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_82B506F0"))) PPC_WEAK_FUNC(sub_82B506F0);
PPC_FUNC_IMPL(__imp__sub_82B506F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b10
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// bl 0x82b4f278
	sub_82B4F278(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r22,24
	r22.s64 = 24;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b5072c
	if (!cr6.eq) goto loc_82B5072C;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82b50738
	goto loc_82B50738;
loc_82B5072C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r8,r11,r22
	ctx.r8.s32 = r11.s32 / r22.s32;
loc_82B50738:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82b50a34
	if (cr6.eq) goto loc_82B50A34;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b50750
	if (!cr6.eq) goto loc_82B50750;
	// li r11,0
	r11.s64 = 0;
	// b 0x82b5075c
	goto loc_82B5075C;
loc_82B50750:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
loc_82B5075C:
	// lis r9,2730
	ctx.r9.s64 = 178913280;
	// ori r9,r9,43690
	ctx.r9.u64 = ctx.r9.u64 | 43690;
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// bge cr6,0x82b50778
	if (!cr6.lt) goto loc_82B50778;
	// bl 0x8284e0a0
	sub_8284E0A0(ctx, base);
	// b 0x82b50a34
	goto loc_82B50A34;
loc_82B50778:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b50788
	if (!cr6.eq) goto loc_82B50788;
	// li r11,0
	r11.s64 = 0;
	// b 0x82b50794
	goto loc_82B50794;
loc_82B50788:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
loc_82B50794:
	// add r11,r11,r23
	r11.u64 = r11.u64 + r23.u64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bge cr6,0x82b50904
	if (!cr6.lt) goto loc_82B50904;
	// rlwinm r11,r8,31,1,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x82b507b8
	if (!cr6.lt) goto loc_82B507B8;
	// li r11,0
	r11.s64 = 0;
	// b 0x82b507bc
	goto loc_82B507BC;
loc_82B507B8:
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
loc_82B507BC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b507cc
	if (!cr6.eq) goto loc_82B507CC;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82b507d8
	goto loc_82B507D8;
loc_82B507CC:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r9,r9,r22
	ctx.r9.s32 = ctx.r9.s32 / r22.s32;
loc_82B507D8:
	// add r9,r9,r23
	ctx.r9.u64 = ctx.r9.u64 + r23.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82b50804
	if (!cr6.lt) goto loc_82B50804;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b507f4
	if (!cr6.eq) goto loc_82B507F4;
	// li r11,0
	r11.s64 = 0;
	// b 0x82b50800
	goto loc_82B50800;
loc_82B507F4:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
loc_82B50800:
	// add r11,r11,r23
	r11.u64 = r11.u64 + r23.u64;
loc_82B50804:
	// mulli r24,r11,24
	r24.s64 = r11.s64 * 24;
	// lis r25,-31946
	r25.s64 = -2093613056;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// addi r4,r11,2300
	ctx.r4.s64 = r11.s64 + 2300;
	// li r5,45
	ctx.r5.s64 = 45;
	// lwz r3,6512(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 6512);
	// bl 0x82df9d90
	sub_82DF9D90(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r29,r27
	r29.u64 = r27.u64;
	// b 0x82b50850
	goto loc_82B50850;
loc_82B50834:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82b50848
	if (cr6.eq) goto loc_82B50848;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b4f278
	sub_82B4F278(ctx, base);
loc_82B50848:
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// addi r29,r29,24
	r29.s64 = r29.s64 + 24;
loc_82B50850:
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(r30.u32, r26.u32, xer);
	// bne cr6,0x82b50834
	if (!cr6.eq) goto loc_82B50834;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b4fcd0
	sub_82B4FCD0(ctx, base);
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r26,r29
	cr6.compare<uint32_t>(r26.u32, r29.u32, xer);
	// beq cr6,0x82b508a4
	if (cr6.eq) goto loc_82B508A4;
	// subf r28,r30,r26
	r28.s64 = r26.s64 - r30.s64;
loc_82B50880:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82b50894
	if (cr6.eq) goto loc_82B50894;
	// add r4,r28,r30
	ctx.r4.u64 = r28.u64 + r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b4f278
	sub_82B4F278(ctx, base);
loc_82B50894:
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// add r11,r28,r30
	r11.u64 = r28.u64 + r30.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x82b50880
	if (!cr6.eq) goto loc_82B50880;
loc_82B508A4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b508b8
	if (!cr6.eq) goto loc_82B508B8;
	// li r11,0
	r11.s64 = 0;
	// b 0x82b508c4
	goto loc_82B508C4;
loc_82B508B8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
loc_82B508C4:
	// add r30,r11,r23
	r30.u64 = r11.u64 + r23.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b508e8
	if (cr6.eq) goto loc_82B508E8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82b4fb08
	sub_82B4FB08(ctx, base);
	// lwz r3,6512(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 6512);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
loc_82B508E8:
	// mulli r11,r30,24
	r11.s64 = r30.s64 * 24;
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// add r10,r24,r27
	ctx.r10.u64 = r24.u64 + r27.u64;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82b50a34
	goto loc_82B50A34;
loc_82B50904:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r26,r30
	r11.s64 = r30.s64 - r26.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// bge cr6,0x82b509a4
	if (!cr6.lt) goto loc_82B509A4;
	// mulli r29,r23,24
	r29.s64 = r23.s64 * 24;
	// add r28,r29,r26
	r28.u64 = r29.u64 + r26.u64;
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(r26.u32, r30.u32, xer);
	// beq cr6,0x82b50950
	if (cr6.eq) goto loc_82B50950;
	// subf r27,r29,r28
	r27.s64 = r28.s64 - r29.s64;
loc_82B5092C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82b50940
	if (cr6.eq) goto loc_82B50940;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82b4f278
	sub_82B4F278(ctx, base);
loc_82B50940:
	// addi r27,r27,24
	r27.s64 = r27.s64 + 24;
	// addi r28,r28,24
	r28.s64 = r28.s64 + 24;
	// cmplw cr6,r27,r30
	cr6.compare<uint32_t>(r27.u32, r30.u32, xer);
	// bne cr6,0x82b5092c
	if (!cr6.eq) goto loc_82B5092C;
loc_82B50950:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r11,r26,r4
	r11.s64 = ctx.r4.s64 - r26.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
	// subf r5,r11,r23
	ctx.r5.s64 = r23.s64 - r11.s64;
	// bl 0x82b4fcd0
	sub_82B4FCD0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r28,r26
	r28.u64 = r26.u64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// subf r30,r29,r11
	r30.s64 = r11.s64 - r29.s64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(r26.u32, r30.u32, xer);
	// beq cr6,0x82b50a34
	if (cr6.eq) goto loc_82B50A34;
loc_82B50988:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82b4ec28
	sub_82B4EC28(ctx, base);
	// addi r28,r28,24
	r28.s64 = r28.s64 + 24;
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(r28.u32, r30.u32, xer);
	// bne cr6,0x82b50988
	if (!cr6.eq) goto loc_82B50988;
	// b 0x82b50a34
	goto loc_82B50A34;
loc_82B509A4:
	// mulli r25,r23,24
	r25.s64 = r23.s64 * 24;
	// subf r29,r25,r30
	r29.s64 = r30.s64 - r25.s64;
	// mr r28,r30
	r28.u64 = r30.u64;
	// mr r27,r29
	r27.u64 = r29.u64;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// beq cr6,0x82b509e0
	if (cr6.eq) goto loc_82B509E0;
loc_82B509BC:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82b509d0
	if (cr6.eq) goto loc_82B509D0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82b4f278
	sub_82B4F278(ctx, base);
loc_82B509D0:
	// addi r27,r27,24
	r27.s64 = r27.s64 + 24;
	// addi r28,r28,24
	r28.s64 = r28.s64 + 24;
	// cmplw cr6,r27,r30
	cr6.compare<uint32_t>(r27.u32, r30.u32, xer);
	// bne cr6,0x82b509bc
	if (!cr6.eq) goto loc_82B509BC;
loc_82B509E0:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplw cr6,r26,r29
	cr6.compare<uint32_t>(r26.u32, r29.u32, xer);
	// beq cr6,0x82b50a0c
	if (cr6.eq) goto loc_82B50A0C;
	// subf r30,r29,r30
	r30.s64 = r30.s64 - r29.s64;
loc_82B509F4:
	// addi r31,r31,-24
	r31.s64 = r31.s64 + -24;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r30,r31
	ctx.r3.u64 = r30.u64 + r31.u64;
	// bl 0x82b4ec28
	sub_82B4EC28(ctx, base);
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(r31.u32, r26.u32, xer);
	// bne cr6,0x82b509f4
	if (!cr6.eq) goto loc_82B509F4;
loc_82B50A0C:
	// add r30,r25,r26
	r30.u64 = r25.u64 + r26.u64;
	// mr r31,r26
	r31.u64 = r26.u64;
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(r26.u32, r30.u32, xer);
	// beq cr6,0x82b50a34
	if (cr6.eq) goto loc_82B50A34;
loc_82B50A1C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b4ec28
	sub_82B4EC28(ctx, base);
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82b50a1c
	if (!cr6.eq) goto loc_82B50A1C;
loc_82B50A34:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_82B50A50"))) PPC_WEAK_FUNC(sub_82B50A50);
PPC_FUNC_IMPL(__imp__sub_82B50A50) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// bl 0x82b4f2d8
	sub_82B4F2D8(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b50a88
	if (!cr6.eq) goto loc_82B50A88;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82b50a94
	goto loc_82B50A94;
loc_82B50A88:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// srawi r8,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = r11.s32 >> 5;
loc_82B50A94:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82b50d90
	if (cr6.eq) goto loc_82B50D90;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b50aac
	if (!cr6.eq) goto loc_82B50AAC;
	// li r11,0
	r11.s64 = 0;
	// b 0x82b50ab8
	goto loc_82B50AB8;
loc_82B50AAC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// srawi r11,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r11.s64 = r11.s32 >> 5;
loc_82B50AB8:
	// lis r10,2047
	ctx.r10.s64 = 134152192;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// bge cr6,0x82b50ad4
	if (!cr6.lt) goto loc_82B50AD4;
	// bl 0x8284e0a0
	sub_8284E0A0(ctx, base);
	// b 0x82b50d90
	goto loc_82B50D90;
loc_82B50AD4:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b50ae4
	if (!cr6.eq) goto loc_82B50AE4;
	// li r11,0
	r11.s64 = 0;
	// b 0x82b50af0
	goto loc_82B50AF0;
loc_82B50AE4:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// srawi r11,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r11.s64 = r11.s32 >> 5;
loc_82B50AF0:
	// add r11,r11,r23
	r11.u64 = r11.u64 + r23.u64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bge cr6,0x82b50c60
	if (!cr6.lt) goto loc_82B50C60;
	// rlwinm r11,r8,31,1,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x82b50b14
	if (!cr6.lt) goto loc_82B50B14;
	// li r11,0
	r11.s64 = 0;
	// b 0x82b50b18
	goto loc_82B50B18;
loc_82B50B14:
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
loc_82B50B18:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b50b28
	if (!cr6.eq) goto loc_82B50B28;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82b50b34
	goto loc_82B50B34;
loc_82B50B28:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,5
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 5;
loc_82B50B34:
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + r23.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b50b60
	if (!cr6.lt) goto loc_82B50B60;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b50b50
	if (!cr6.eq) goto loc_82B50B50;
	// li r11,0
	r11.s64 = 0;
	// b 0x82b50b5c
	goto loc_82B50B5C;
loc_82B50B50:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// srawi r11,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r11.s64 = r11.s32 >> 5;
loc_82B50B5C:
	// add r11,r11,r23
	r11.u64 = r11.u64 + r23.u64;
loc_82B50B60:
	// rlwinm r24,r11,5,0,26
	r24.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r25,-31946
	r25.s64 = -2093613056;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// addi r4,r11,2300
	ctx.r4.s64 = r11.s64 + 2300;
	// li r5,45
	ctx.r5.s64 = 45;
	// lwz r3,6512(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 6512);
	// bl 0x82df9d90
	sub_82DF9D90(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r29,r27
	r29.u64 = r27.u64;
	// b 0x82b50bac
	goto loc_82B50BAC;
loc_82B50B90:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82b50ba4
	if (cr6.eq) goto loc_82B50BA4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b4f2d8
	sub_82B4F2D8(ctx, base);
loc_82B50BA4:
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// addi r29,r29,32
	r29.s64 = r29.s64 + 32;
loc_82B50BAC:
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(r30.u32, r26.u32, xer);
	// bne cr6,0x82b50b90
	if (!cr6.eq) goto loc_82B50B90;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b4fd88
	sub_82B4FD88(ctx, base);
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r26,r29
	cr6.compare<uint32_t>(r26.u32, r29.u32, xer);
	// beq cr6,0x82b50c00
	if (cr6.eq) goto loc_82B50C00;
	// subf r28,r30,r26
	r28.s64 = r26.s64 - r30.s64;
loc_82B50BDC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82b50bf0
	if (cr6.eq) goto loc_82B50BF0;
	// add r4,r28,r30
	ctx.r4.u64 = r28.u64 + r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b4f2d8
	sub_82B4F2D8(ctx, base);
loc_82B50BF0:
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// add r11,r28,r30
	r11.u64 = r28.u64 + r30.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x82b50bdc
	if (!cr6.eq) goto loc_82B50BDC;
loc_82B50C00:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b50c14
	if (!cr6.eq) goto loc_82B50C14;
	// li r11,0
	r11.s64 = 0;
	// b 0x82b50c20
	goto loc_82B50C20;
loc_82B50C14:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// srawi r11,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r11.s64 = r11.s32 >> 5;
loc_82B50C20:
	// add r30,r11,r23
	r30.u64 = r11.u64 + r23.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b50c44
	if (cr6.eq) goto loc_82B50C44;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82b4fb60
	sub_82B4FB60(ctx, base);
	// lwz r3,6512(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 6512);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
loc_82B50C44:
	// rlwinm r11,r30,5,0,26
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// add r10,r24,r27
	ctx.r10.u64 = r24.u64 + r27.u64;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82b50d90
	goto loc_82B50D90;
loc_82B50C60:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r26,r30
	r11.s64 = r30.s64 - r26.s64;
	// srawi r11,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r11.s64 = r11.s32 >> 5;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// bge cr6,0x82b50d00
	if (!cr6.lt) goto loc_82B50D00;
	// rlwinm r29,r23,5,0,26
	r29.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(r26.u32, r30.u32, xer);
	// add r28,r29,r26
	r28.u64 = r29.u64 + r26.u64;
	// beq cr6,0x82b50cac
	if (cr6.eq) goto loc_82B50CAC;
	// subf r27,r29,r28
	r27.s64 = r28.s64 - r29.s64;
loc_82B50C88:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82b50c9c
	if (cr6.eq) goto loc_82B50C9C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82b4f2d8
	sub_82B4F2D8(ctx, base);
loc_82B50C9C:
	// addi r27,r27,32
	r27.s64 = r27.s64 + 32;
	// addi r28,r28,32
	r28.s64 = r28.s64 + 32;
	// cmplw cr6,r27,r30
	cr6.compare<uint32_t>(r27.u32, r30.u32, xer);
	// bne cr6,0x82b50c88
	if (!cr6.eq) goto loc_82B50C88;
loc_82B50CAC:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r11,r26,r4
	r11.s64 = ctx.r4.s64 - r26.s64;
	// srawi r11,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r11.s64 = r11.s32 >> 5;
	// subf r5,r11,r23
	ctx.r5.s64 = r23.s64 - r11.s64;
	// bl 0x82b4fd88
	sub_82B4FD88(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r28,r26
	r28.u64 = r26.u64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// subf r30,r29,r11
	r30.s64 = r11.s64 - r29.s64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(r26.u32, r30.u32, xer);
	// beq cr6,0x82b50d90
	if (cr6.eq) goto loc_82B50D90;
loc_82B50CE4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82b4ec88
	sub_82B4EC88(ctx, base);
	// addi r28,r28,32
	r28.s64 = r28.s64 + 32;
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(r28.u32, r30.u32, xer);
	// bne cr6,0x82b50ce4
	if (!cr6.eq) goto loc_82B50CE4;
	// b 0x82b50d90
	goto loc_82B50D90;
loc_82B50D00:
	// rlwinm r25,r23,5,0,26
	r25.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r28,r30
	r28.u64 = r30.u64;
	// subf r29,r25,r30
	r29.s64 = r30.s64 - r25.s64;
	// mr r27,r29
	r27.u64 = r29.u64;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// beq cr6,0x82b50d3c
	if (cr6.eq) goto loc_82B50D3C;
loc_82B50D18:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82b50d2c
	if (cr6.eq) goto loc_82B50D2C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82b4f2d8
	sub_82B4F2D8(ctx, base);
loc_82B50D2C:
	// addi r27,r27,32
	r27.s64 = r27.s64 + 32;
	// addi r28,r28,32
	r28.s64 = r28.s64 + 32;
	// cmplw cr6,r27,r30
	cr6.compare<uint32_t>(r27.u32, r30.u32, xer);
	// bne cr6,0x82b50d18
	if (!cr6.eq) goto loc_82B50D18;
loc_82B50D3C:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplw cr6,r26,r29
	cr6.compare<uint32_t>(r26.u32, r29.u32, xer);
	// beq cr6,0x82b50d68
	if (cr6.eq) goto loc_82B50D68;
	// subf r30,r29,r30
	r30.s64 = r30.s64 - r29.s64;
loc_82B50D50:
	// addi r31,r31,-32
	r31.s64 = r31.s64 + -32;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r30,r31
	ctx.r3.u64 = r30.u64 + r31.u64;
	// bl 0x82b4ec88
	sub_82B4EC88(ctx, base);
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(r31.u32, r26.u32, xer);
	// bne cr6,0x82b50d50
	if (!cr6.eq) goto loc_82B50D50;
loc_82B50D68:
	// add r30,r25,r26
	r30.u64 = r25.u64 + r26.u64;
	// mr r31,r26
	r31.u64 = r26.u64;
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(r26.u32, r30.u32, xer);
	// beq cr6,0x82b50d90
	if (cr6.eq) goto loc_82B50D90;
loc_82B50D78:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b4ec88
	sub_82B4EC88(ctx, base);
	// addi r31,r31,32
	r31.s64 = r31.s64 + 32;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82b50d78
	if (!cr6.eq) goto loc_82B50D78;
loc_82B50D90:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82B50DB0"))) PPC_WEAK_FUNC(sub_82B50DB0);
PPC_FUNC_IMPL(__imp__sub_82B50DB0) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,32
	ctx.r4.s64 = r11.s64 + 32;
	// lwz r6,40(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// bl 0x82b4ffa8
	sub_82B4FFA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B50DE8"))) PPC_WEAK_FUNC(sub_82B50DE8);
PPC_FUNC_IMPL(__imp__sub_82B50DE8) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82b4ff30
	sub_82B4FF30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B50E20"))) PPC_WEAK_FUNC(sub_82B50E20);
PPC_FUNC_IMPL(__imp__sub_82B50E20) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b50e58
	if (cr6.eq) goto loc_82B50E58;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r10,40
	ctx.r10.s64 = 40;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// divw. r9,r9,r10
	ctx.r9.s32 = ctx.r9.s32 / ctx.r10.s32;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82b50e60
	if (!cr0.eq) goto loc_82B50E60;
loc_82B50E58:
	// li r30,0
	r30.s64 = 0;
	// b 0x82b50e68
	goto loc_82B50E68;
loc_82B50E60:
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// divw r30,r11,r10
	r30.s32 = r11.s32 / ctx.r10.s32;
loc_82B50E68:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b50388
	sub_82B50388(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mulli r11,r30,40
	r11.s64 = r30.s64 * 40;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B50E90"))) PPC_WEAK_FUNC(sub_82B50E90);
PPC_FUNC_IMPL(__imp__sub_82B50E90) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b50ec8
	if (cr6.eq) goto loc_82B50EC8;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r10,24
	ctx.r10.s64 = 24;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// divw. r9,r9,r10
	ctx.r9.s32 = ctx.r9.s32 / ctx.r10.s32;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82b50ed0
	if (!cr0.eq) goto loc_82B50ED0;
loc_82B50EC8:
	// li r30,0
	r30.s64 = 0;
	// b 0x82b50ed8
	goto loc_82B50ED8;
loc_82B50ED0:
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// divw r30,r11,r10
	r30.s32 = r11.s32 / ctx.r10.s32;
loc_82B50ED8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b506f0
	sub_82B506F0(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mulli r11,r30,24
	r11.s64 = r30.s64 * 24;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B50F00"))) PPC_WEAK_FUNC(sub_82B50F00);
PPC_FUNC_IMPL(__imp__sub_82B50F00) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b50f34
	if (cr6.eq) goto loc_82B50F34;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi. r10,r10,5
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 5;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82b50f3c
	if (!cr0.eq) goto loc_82B50F3C;
loc_82B50F34:
	// li r29,0
	r29.s64 = 0;
	// b 0x82b50f44
	goto loc_82B50F44;
loc_82B50F3C:
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// srawi r29,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r29.s64 = r11.s32 >> 5;
loc_82B50F44:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b50a50
	sub_82B50A50(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r29,5,0,26
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B50F70"))) PPC_WEAK_FUNC(sub_82B50F70);
PPC_FUNC_IMPL(__imp__sub_82B50F70) {
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
	// li r9,40
	ctx.r9.s64 = 40;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b50fa0
	if (!cr6.eq) goto loc_82B50FA0;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82b50fac
	goto loc_82B50FAC;
loc_82B50FA0:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r10,r9
	ctx.r10.s32 = ctx.r10.s32 / ctx.r9.s32;
loc_82B50FAC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b50fe8
	if (cr6.eq) goto loc_82B50FE8;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r11,r11,r8
	r11.s64 = ctx.r8.s64 - r11.s64;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82b50fe8
	if (!cr6.lt) goto loc_82B50FE8;
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82b50fdc
	if (cr6.eq) goto loc_82B50FDC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d1e48
	sub_824D1E48(ctx, base);
loc_82B50FDC:
	// addi r11,r30,40
	r11.s64 = r30.s64 + 40;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82b50ffc
	goto loc_82B50FFC;
loc_82B50FE8:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b50e20
	sub_82B50E20(ctx, base);
loc_82B50FFC:
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

__attribute__((alias("__imp__sub_82B51018"))) PPC_WEAK_FUNC(sub_82B51018);
PPC_FUNC_IMPL(__imp__sub_82B51018) {
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
	// li r9,24
	ctx.r9.s64 = 24;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b51048
	if (!cr6.eq) goto loc_82B51048;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82b51054
	goto loc_82B51054;
loc_82B51048:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r10,r9
	ctx.r10.s32 = ctx.r10.s32 / ctx.r9.s32;
loc_82B51054:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b51090
	if (cr6.eq) goto loc_82B51090;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r11,r11,r8
	r11.s64 = ctx.r8.s64 - r11.s64;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82b51090
	if (!cr6.lt) goto loc_82B51090;
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82b51084
	if (cr6.eq) goto loc_82B51084;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b4f278
	sub_82B4F278(ctx, base);
loc_82B51084:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82b510a4
	goto loc_82B510A4;
loc_82B51090:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b50e90
	sub_82B50E90(ctx, base);
loc_82B510A4:
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

__attribute__((alias("__imp__sub_82B510C0"))) PPC_WEAK_FUNC(sub_82B510C0);
PPC_FUNC_IMPL(__imp__sub_82B510C0) {
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b510ec
	if (!cr6.eq) goto loc_82B510EC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82b510f8
	goto loc_82B510F8;
loc_82B510EC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,5
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 5;
loc_82B510F8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b51134
	if (cr6.eq) goto loc_82B51134;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// srawi r11,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r11.s64 = r11.s32 >> 5;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82b51134
	if (!cr6.lt) goto loc_82B51134;
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82b51128
	if (cr6.eq) goto loc_82B51128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b4f2d8
	sub_82B4F2D8(ctx, base);
loc_82B51128:
	// addi r11,r30,32
	r11.s64 = r30.s64 + 32;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82b51148
	goto loc_82B51148;
loc_82B51134:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b50f00
	sub_82B50F00(ctx, base);
loc_82B51148:
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

__attribute__((alias("__imp__sub_82B51160"))) PPC_WEAK_FUNC(sub_82B51160);
PPC_FUNC_IMPL(__imp__sub_82B51160) {
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
	// li r11,0
	r11.s64 = 0;
	// addi r30,r31,48
	r30.s64 = r31.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// bl 0x830ba1c0
	sub_830BA1C0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-8428
	r11.s64 = r11.s64 + -8428;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// bl 0x830ba298
	sub_830BA298(ctx, base);
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

__attribute__((alias("__imp__sub_82B511E0"))) PPC_WEAK_FUNC(sub_82B511E0);
PPC_FUNC_IMPL(__imp__sub_82B511E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82b4ecf0
	sub_82B4ECF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830ba328
	sub_830BA328(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830ba328
	sub_830BA328(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830ba328
	sub_830BA328(ctx, base);
	// stfs f31,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x82b510c0
	sub_82B510C0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B51290"))) PPC_WEAK_FUNC(sub_82B51290);
PPC_FUNC_IMPL(__imp__sub_82B51290) {
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
	// bl 0x82b50f70
	sub_82B50F70(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
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

__attribute__((alias("__imp__sub_82B512D8"))) PPC_WEAK_FUNC(sub_82B512D8);
PPC_FUNC_IMPL(__imp__sub_82B512D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b5138c
	if (cr0.eq) goto loc_82B5138C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b4eec8
	sub_82B4EEC8(ctx, base);
	// stfs f31,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stfs f30,112(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830ba328
	sub_830BA328(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r29,16
	ctx.r3.s64 = r29.s64 + 16;
	// bl 0x82b51018
	sub_82B51018(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
loc_82B5138C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B513B0"))) PPC_WEAK_FUNC(sub_82B513B0);
PPC_FUNC_IMPL(__imp__sub_82B513B0) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b514b4
	if (cr0.eq) goto loc_82B514B4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// lis r11,-31943
	r11.s64 = -2093416448;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r28,r11,-3336
	r28.s64 = r11.s64 + -3336;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830bcca8
	sub_830BCCA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b514ac
	if (cr0.eq) goto loc_82B514AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830bcca8
	sub_830BCCA8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b514a4
	if (cr0.eq) goto loc_82B514A4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824d30b0
	sub_824D30B0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824d30b0
	sub_824D30B0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x82b511e0
	sub_82B511E0(ctx, base);
loc_82B514A4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
loc_82B514AC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
loc_82B514B4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82B514E0"))) PPC_WEAK_FUNC(sub_82B514E0);
PPC_FUNC_IMPL(__imp__sub_82B514E0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x830bee00
	sub_830BEE00(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23007
	ctx.r4.s64 = r11.s64 + -23007;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dfafc0
	sub_82DFAFC0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b515d4
	if (cr0.eq) goto loc_82B515D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x830bee00
	sub_830BEE00(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8249c608
	sub_8249C608(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lfs f2,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82b513b0
	sub_82B513B0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
loc_82B515D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82B515F8"))) PPC_WEAK_FUNC(sub_82B515F8);
PPC_FUNC_IMPL(__imp__sub_82B515F8) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x830bee00
	sub_830BEE00(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23007
	ctx.r4.s64 = r11.s64 + -23007;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dfafc0
	sub_82DFAFC0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b516fc
	if (cr0.eq) goto loc_82B516FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x830bee00
	sub_830BEE00(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8249c608
	sub_8249C608(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// bl 0x82b513b0
	sub_82B513B0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// b 0x82b51710
	goto loc_82B51710;
loc_82B516FC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x830bb470
	sub_830BB470(ctx, base);
loc_82B51710:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82B51740"))) PPC_WEAK_FUNC(sub_82B51740);
PPC_FUNC_IMPL(__imp__sub_82B51740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B51758"))) PPC_WEAK_FUNC(sub_82B51758);
PPC_FUNC_IMPL(__imp__sub_82B51758) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82e55648
	sub_82E55648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B51760"))) PPC_WEAK_FUNC(sub_82B51760);
PPC_FUNC_IMPL(__imp__sub_82B51760) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b517a0
	if (cr6.eq) goto loc_82B517A0;
	// bl 0x82e536f0
	sub_82E536F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x82b517a0
	if (!cr0.gt) goto loc_82B517A0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82e53718
	sub_82E53718(ctx, base);
	// bl 0x82e537d0
	sub_82E537D0(ctx, base);
	// b 0x82b517a8
	goto loc_82B517A8;
loc_82B517A0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
loc_82B517A8:
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

__attribute__((alias("__imp__sub_82B517C0"))) PPC_WEAK_FUNC(sub_82B517C0);
PPC_FUNC_IMPL(__imp__sub_82B517C0) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b08
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// li r31,0
	r31.s64 = 0;
	// addi r11,r11,22148
	r11.s64 = r11.s64 + 22148;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// stw r31,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r31.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// stw r31,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r31.u32);
	// addi r25,r30,4
	r25.s64 = r30.s64 + 4;
	// stw r31,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r31.u32);
	// addi r26,r30,12
	r26.s64 = r30.s64 + 12;
	// stw r31,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r31.u32);
	// addi r23,r30,20
	r23.s64 = r30.s64 + 20;
	// stw r31,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r31.u32);
	// addi r28,r30,28
	r28.s64 = r30.s64 + 28;
	// stw r31,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r31.u32);
	// addi r29,r30,36
	r29.s64 = r30.s64 + 36;
	// stw r31,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r31.u32);
	// stw r31,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r31.u32);
	// stw r7,44(r30)
	PPC_STORE_U32(r30.u32 + 44, ctx.r7.u32);
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// bl 0x82e5e6c8
	sub_82E5E6C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// bl 0x82e76d50
	sub_82E76D50(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e56cd0
	sub_82E56CD0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r26,4
	ctx.r3.s64 = r26.s64 + 4;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b51884
	if (cr6.eq) goto loc_82B51884;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B51884:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82e56de8
	sub_82E56DE8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r23,4
	ctx.r3.s64 = r23.s64 + 4;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b518c0
	if (cr6.eq) goto loc_82B518C0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B518C0:
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b519c8
	if (cr0.eq) goto loc_82B519C8;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-8764
	ctx.r4.s64 = r11.s64 + -8764;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e345c0
	sub_82E345C0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-9928
	ctx.r4.s64 = r11.s64 + -9928;
	// lwz r21,104(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// addi r27,r11,-8772
	r27.s64 = r11.s64 + -8772;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,0(r20)
	ctx.r6.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82e20bc8
	sub_82E20BC8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r28,4
	ctx.r3.s64 = r28.s64 + 4;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b51964
	if (cr6.eq) goto loc_82B51964;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B51964:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r27,104(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82e20ac8
	sub_82E20AC8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b519b4
	if (cr6.eq) goto loc_82B519B4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B519B4:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b51ad8
	if (cr6.eq) goto loc_82B51AD8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
	// b 0x82b51ad8
	goto loc_82B51AD8;
loc_82B519C8:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// bl 0x82e5e6c8
	sub_82E5E6C8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,3752
	ctx.r4.s64 = r11.s64 + 3752;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e345c0
	sub_82E345C0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-9928
	ctx.r4.s64 = r11.s64 + -9928;
	// lwz r21,112(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// addi r27,r11,-8772
	r27.s64 = r11.s64 + -8772;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,0(r20)
	ctx.r6.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82e20bc8
	sub_82E20BC8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r28,4
	ctx.r3.s64 = r28.s64 + 4;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b51a70
	if (cr6.eq) goto loc_82B51A70;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B51A70:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r27,112(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82e20ac8
	sub_82E20AC8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b51ac0
	if (cr6.eq) goto loc_82B51AC0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B51AC0:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b51ad0
	if (cr6.eq) goto loc_82B51AD0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B51AD0:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82e5e6e0
	sub_82E5E6E0(ctx, base);
loc_82B51AD8:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,22088
	ctx.r4.s64 = r11.s64 + 22088;
	// li r5,81
	ctx.r5.s64 = 81;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b51b04
	if (cr0.eq) goto loc_82B51B04;
	// bl 0x82e55768
	sub_82E55768(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82b51b08
	goto loc_82B51B08;
loc_82B51B04:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_82B51B08:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824a8bf8
	sub_824A8BF8(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// beq cr6,0x82b51b48
	if (cr6.eq) goto loc_82B51B48;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B51B2C:
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
	// bne 0x82b51b2c
	if (!cr0.eq) goto loc_82B51B2C;
loc_82B51B48:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq cr6,0x82b51b80
	if (cr6.eq) goto loc_82B51B80;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B51B64:
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
	// bne 0x82b51b64
	if (!cr0.eq) goto loc_82B51B64;
loc_82B51B80:
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq cr6,0x82b51bb8
	if (cr6.eq) goto loc_82B51BB8;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B51B9C:
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
	// bne 0x82b51b9c
	if (!cr0.eq) goto loc_82B51B9C;
loc_82B51BB8:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// beq cr6,0x82b51bf0
	if (cr6.eq) goto loc_82B51BF0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B51BD4:
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
	// bne 0x82b51bd4
	if (!cr0.eq) goto loc_82B51BD4;
loc_82B51BF0:
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82e53f28
	sub_82E53F28(ctx, base);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stw r10,112(r11)
	PPC_STORE_U32(r11.u32 + 112, ctx.r10.u32);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// stb r22,105(r11)
	PPC_STORE_U8(r11.u32 + 105, r22.u8);
	// bl 0x82e5e6e0
	sub_82E5E6E0(ctx, base);
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b51c34
	if (cr6.eq) goto loc_82B51C34;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B51C34:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_82B51C40"))) PPC_WEAK_FUNC(sub_82B51C40);
PPC_FUNC_IMPL(__imp__sub_82B51C40) {
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
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r11,r11,22148
	r11.s64 = r11.s64 + 22148;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b51c70
	if (cr6.eq) goto loc_82B51C70;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B51C70:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b51c80
	if (cr6.eq) goto loc_82B51C80;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B51C80:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b51c90
	if (cr6.eq) goto loc_82B51C90;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B51C90:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b51ca0
	if (cr6.eq) goto loc_82B51CA0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B51CA0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b51cb0
	if (cr6.eq) goto loc_82B51CB0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B51CB0:
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

__attribute__((alias("__imp__sub_82B51CC8"))) PPC_WEAK_FUNC(sub_82B51CC8);
PPC_FUNC_IMPL(__imp__sub_82B51CC8) {
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
	// bl 0x82b51c40
	sub_82B51C40(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b51cf8
	if (cr0.eq) goto loc_82B51CF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_82B51CF8:
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

__attribute__((alias("__imp__sub_82B51D18"))) PPC_WEAK_FUNC(sub_82B51D18);
PPC_FUNC_IMPL(__imp__sub_82B51D18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,84(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b51d2c
	if (!cr6.eq) goto loc_82B51D2C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82b51d3c
	goto loc_82B51D3C;
loc_82B51D2C:
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r9,116
	ctx.r9.s64 = 116;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r11,r9
	ctx.r10.s32 = r11.s32 / ctx.r9.s32;
loc_82B51D3C:
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// ble cr6,0x82b51d58
	if (!cr6.gt) goto loc_82B51D58;
	// lwz r10,84(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mulli r11,r11,116
	r11.s64 = r11.s64 * 116;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_82B51D58:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B51D60"))) PPC_WEAK_FUNC(sub_82B51D60);
PPC_FUNC_IMPL(__imp__sub_82B51D60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r30,r10,-8152
	r30.s64 = ctx.r10.s64 + -8152;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x830bcca8
	sub_830BCCA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b51e24
	if (cr0.eq) goto loc_82B51E24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830bf210
	sub_830BF210(ctx, base);
	// lbz r11,242(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 242);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82b51df0
	if (cr0.eq) goto loc_82B51DF0;
	// lbz r11,250(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 250);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82b51df0
	if (!cr0.eq) goto loc_82B51DF0;
	// lfs f13,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,260(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 260);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f13,256(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 + ctx.f13.f64));
	// b 0x82b51dfc
	goto loc_82B51DFC;
loc_82B51DF0:
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,256(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
	// stb r10,250(r31)
	PPC_STORE_U8(r31.u32 + 250, ctx.r10.u8);
loc_82B51DFC:
	// lwz r11,268(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b51e24
	if (cr6.eq) goto loc_82B51E24;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lfs f0,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 80, temp.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stfs f13,84(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 84, temp.u32);
loc_82B51E24:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
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

__attribute__((alias("__imp__sub_82B51E48"))) PPC_WEAK_FUNC(sub_82B51E48);
PPC_FUNC_IMPL(__imp__sub_82B51E48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r30,r11,-23007
	r30.s64 = r11.s64 + -23007;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r25,212(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// addi r27,r31,16
	r27.s64 = r31.s64 + 16;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8249c608
	sub_8249C608(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// bl 0x82b514e0
	sub_82B514E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
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
	// beq 0x82b51f6c
	if (cr0.eq) goto loc_82B51F6C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// bl 0x82b51e48
	sub_82B51E48(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r25,212(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8249c608
	sub_8249C608(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// lfs f2,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82b513b0
	sub_82B513B0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
loc_82B51F6C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r31,212(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lfs f1,-24780(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24780);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82b4f400
	sub_82B4F400(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82B51FC0"))) PPC_WEAK_FUNC(sub_82B51FC0);
PPC_FUNC_IMPL(__imp__sub_82B51FC0) {
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
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82b52808
	sub_82B52808(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82b52808
	sub_82B52808(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b5200c
	if (cr0.eq) goto loc_82B5200C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_82B5200C:
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

__attribute__((alias("__imp__sub_82B52028"))) PPC_WEAK_FUNC(sub_82B52028);
PPC_FUNC_IMPL(__imp__sub_82B52028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// b 0x82b51d60
	sub_82B51D60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B52040"))) PPC_WEAK_FUNC(sub_82B52040);
PPC_FUNC_IMPL(__imp__sub_82B52040) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B52048"))) PPC_WEAK_FUNC(sub_82B52048);
PPC_FUNC_IMPL(__imp__sub_82B52048) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23007
	ctx.r4.s64 = r11.s64 + -23007;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x82b51e48
	sub_82B51E48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x830ba328
	sub_830BA328(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B520B8"))) PPC_WEAK_FUNC(sub_82B520B8);
PPC_FUNC_IMPL(__imp__sub_82B520B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r28,r11,-23007
	r28.s64 = r11.s64 + -23007;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// bl 0x82b51e48
	sub_82B51E48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x830ba328
	sub_830BA328(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x82b51e48
	sub_82B51E48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// bl 0x830ba328
	sub_830BA328(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82B52178"))) PPC_WEAK_FUNC(sub_82B52178);
PPC_FUNC_IMPL(__imp__sub_82B52178) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r6,r8,96
	ctx.r6.s64 = ctx.r8.s64 + 96;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r4,224(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 224);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x82b521ac
	if (!cr6.gt) goto loc_82B521AC;
	// rotlwi r7,r4,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
loc_82B521A0:
	// bl 0x82b51d18
	sub_82B51D18(ctx, base);
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82b521a0
	if (!cr0.eq) goto loc_82B521A0;
loc_82B521AC:
	// bl 0x82b51d18
	sub_82B51D18(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b52220
	if (cr0.eq) goto loc_82B52220;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82b52214
	if (cr6.eq) goto loc_82B52214;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x82b52214
	if (cr6.eq) goto loc_82B52214;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r5,252(r8)
	PPC_STORE_U8(ctx.r8.u32 + 252, ctx.r5.u8);
	// b 0x82b521ec
	goto loc_82B521EC;
loc_82B521DC:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bl 0x82b51d18
	sub_82B51D18(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_82B521EC:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82b51d18
	sub_82B51D18(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82b521dc
	if (!cr0.eq) goto loc_82B521DC;
	// addi r11,r4,1
	r11.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x82b5221c
	if (cr6.lt) goto loc_82B5221C;
	// li r11,0
	r11.s64 = 0;
	// stb r11,251(r8)
	PPC_STORE_U8(ctx.r8.u32 + 251, r11.u8);
	// b 0x82b52220
	goto loc_82B52220;
loc_82B52214:
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,252(r8)
	PPC_STORE_U8(ctx.r8.u32 + 252, ctx.r5.u8);
loc_82B5221C:
	// stb r5,251(r8)
	PPC_STORE_U8(ctx.r8.u32 + 251, ctx.r5.u8);
loc_82B52220:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B52230"))) PPC_WEAK_FUNC(sub_82B52230);
PPC_FUNC_IMPL(__imp__sub_82B52230) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b08
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r24,r5,4
	r24.s64 = ctx.r5.s64 + 4;
	// addi r30,r31,268
	r30.s64 = r31.s64 + 268;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r11,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r11.u32);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r20,r8
	r20.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r26,r31,276
	r26.s64 = r31.s64 + 276;
	// addi r23,r29,4
	r23.s64 = r29.s64 + 4;
	// addi r3,r26,4
	ctx.r3.s64 = r26.s64 + 4;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// stw r11,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r29,r31,284
	r29.s64 = r31.s64 + 284;
	// addi r22,r28,4
	r22.s64 = r28.s64 + 4;
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// stw r11,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// addi r11,r31,292
	r11.s64 = r31.s64 + 292;
	// addi r28,r27,4
	r28.s64 = r27.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r11,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r27,r11,22152
	r27.s64 = r11.s64 + 22152;
	// lfs f30,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f30.f64 = double(temp.f32);
	// beq 0x82b523bc
	if (cr0.eq) goto loc_82B523BC;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830bf358
	sub_830BF358(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x830bf358
	sub_830BF358(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b52348
	if (cr6.eq) goto loc_82B52348;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,56(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 56, temp.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stfs f0,60(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 60, temp.u32);
loc_82B52348:
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f31,f0,f13
	f31.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b52380
	if (cr6.eq) goto loc_82B52380;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - f0.f64));
	// bl 0x82e53e50
	sub_82E53E50(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82e535b8
	sub_82E535B8(ctx, base);
loc_82B52380:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b52398
	if (cr6.eq) goto loc_82B52398;
	// lfs f0,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,72(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 72, temp.u32);
loc_82B52398:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b523bc
	if (cr6.eq) goto loc_82B523BC;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f30,80(r10)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r10.u32 + 80, temp.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stfs f0,84(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 84, temp.u32);
loc_82B523BC:
	// lwz r30,308(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b5249c
	if (cr0.eq) goto loc_82B5249C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830bf358
	sub_830BF358(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x830bf358
	sub_830BF358(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b52428
	if (cr6.eq) goto loc_82B52428;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,56(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 56, temp.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stfs f0,60(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 60, temp.u32);
loc_82B52428:
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f31,f0,f13
	f31.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b52460
	if (cr6.eq) goto loc_82B52460;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - f0.f64));
	// bl 0x82e53e50
	sub_82E53E50(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82e535b8
	sub_82E535B8(ctx, base);
loc_82B52460:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b5247c
	if (cr6.eq) goto loc_82B5247C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2248(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2248);
	f0.f64 = double(temp.f32);
	// stfs f0,72(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 72, temp.u32);
loc_82B5247C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b5249c
	if (cr6.eq) goto loc_82B5249C;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stfs f30,80(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r10.u32 + 80, temp.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stfs f30,84(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 84, temp.u32);
loc_82B5249C:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b52574
	if (cr0.eq) goto loc_82B52574;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830bf358
	sub_830BF358(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x830bf358
	sub_830BF358(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b52504
	if (cr6.eq) goto loc_82B52504;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,56(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 56, temp.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stfs f0,60(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 60, temp.u32);
loc_82B52504:
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f31,f0,f13
	f31.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5253c
	if (cr6.eq) goto loc_82B5253C;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - f0.f64));
	// bl 0x82e53e50
	sub_82E53E50(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82e535b8
	sub_82E535B8(ctx, base);
loc_82B5253C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b52554
	if (cr6.eq) goto loc_82B52554;
	// lfs f0,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,72(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 72, temp.u32);
loc_82B52554:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b52574
	if (cr6.eq) goto loc_82B52574;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stfs f30,80(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r10.u32 + 80, temp.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stfs f30,84(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 84, temp.u32);
loc_82B52574:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b52584
	if (cr6.eq) goto loc_82B52584;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B52584:
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b52594
	if (cr6.eq) goto loc_82B52594;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B52594:
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b525a4
	if (cr6.eq) goto loc_82B525A4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B525A4:
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b525b4
	if (cr6.eq) goto loc_82B525B4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B525B4:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_82B525E8"))) PPC_WEAK_FUNC(sub_82B525E8);
PPC_FUNC_IMPL(__imp__sub_82B525E8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, xer);
	// beq cr6,0x82b52630
	if (cr6.eq) goto loc_82B52630;
loc_82B52610:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x827e1578
	sub_827E1578(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x82b52610
	if (!cr6.eq) goto loc_82B52610;
loc_82B52630:
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

__attribute__((alias("__imp__sub_82B52648"))) PPC_WEAK_FUNC(sub_82B52648);
PPC_FUNC_IMPL(__imp__sub_82B52648) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// beq cr6,0x82b52684
	if (cr6.eq) goto loc_82B52684;
loc_82B5266C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b51fc0
	sub_82B51FC0(ctx, base);
	// addi r31,r31,116
	r31.s64 = r31.s64 + 116;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82b5266c
	if (!cr6.eq) goto loc_82B5266C;
loc_82B52684:
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

__attribute__((alias("__imp__sub_82B526A0"))) PPC_WEAK_FUNC(sub_82B526A0);
PPC_FUNC_IMPL(__imp__sub_82B526A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplw cr6,r27,r6
	cr6.compare<uint32_t>(r27.u32, ctx.r6.u32, xer);
	// beq cr6,0x82b52704
	if (cr6.eq) goto loc_82B52704;
	// lwz r29,8(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r31,r27
	r31.u64 = r27.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r29
	cr6.compare<uint32_t>(ctx.r6.u32, r29.u32, xer);
	// beq cr6,0x82b526f0
	if (cr6.eq) goto loc_82B526F0;
loc_82B526D4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b56d40
	sub_82B56D40(ctx, base);
	// addi r30,r30,116
	r30.s64 = r30.s64 + 116;
	// addi r31,r31,116
	r31.s64 = r31.s64 + 116;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x82b526d4
	if (!cr6.eq) goto loc_82B526D4;
loc_82B526F0:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b52648
	sub_82B52648(ctx, base);
	// stw r31,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r31.u32);
loc_82B52704:
	// stw r27,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r27.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82B52718"))) PPC_WEAK_FUNC(sub_82B52718);
PPC_FUNC_IMPL(__imp__sub_82B52718) {
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
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r11,r11,22176
	r11.s64 = r11.s64 + 22176;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r3,296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5274c
	if (cr6.eq) goto loc_82B5274C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B5274C:
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5275c
	if (cr6.eq) goto loc_82B5275C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B5275C:
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 280);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5276c
	if (cr6.eq) goto loc_82B5276C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B5276C:
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5277c
	if (cr6.eq) goto loc_82B5277C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B5277C:
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5278c
	if (cr6.eq) goto loc_82B5278C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B5278C:
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// bl 0x82b52808
	sub_82B52808(ctx, base);
	// addi r3,r30,80
	ctx.r3.s64 = r30.s64 + 80;
	// bl 0x82b52808
	sub_82B52808(ctx, base);
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x824d14a0
	sub_824D14A0(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x824d14a0
	sub_824D14A0(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x824d14a0
	sub_824D14A0(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b57528
	sub_82B57528(ctx, base);
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

__attribute__((alias("__imp__sub_82B52808"))) PPC_WEAK_FUNC(sub_82B52808);
PPC_FUNC_IMPL(__imp__sub_82B52808) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b52844
	if (cr6.eq) goto loc_82B52844;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82b52648
	sub_82B52648(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
loc_82B52844:
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
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

__attribute__((alias("__imp__sub_82B52868"))) PPC_WEAK_FUNC(sub_82B52868);
PPC_FUNC_IMPL(__imp__sub_82B52868) {
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
	// bl 0x82b52718
	sub_82B52718(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b52898
	if (cr0.eq) goto loc_82B52898;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_82B52898:
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

__attribute__((alias("__imp__sub_82B528B8"))) PPC_WEAK_FUNC(sub_82B528B8);
PPC_FUNC_IMPL(__imp__sub_82B528B8) {
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
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bne cr6,0x82b528f0
	if (!cr6.eq) goto loc_82B528F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b5293c
	goto loc_82B5293C;
loc_82B528F0:
	// lis r11,564
	r11.s64 = 36962304;
	// ori r11,r11,63276
	r11.u64 = r11.u64 | 63276;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x82b52908
	if (!cr6.gt) goto loc_82B52908;
	// bl 0x8284e0a0
	sub_8284E0A0(ctx, base);
	// b 0x82b52938
	goto loc_82B52938;
loc_82B52908:
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mulli r30,r4,116
	r30.s64 = ctx.r4.s64 * 116;
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r11,2300
	ctx.r4.s64 = r11.s64 + 2300;
	// li r5,45
	ctx.r5.s64 = 45;
	// bl 0x82df9d90
	sub_82DF9D90(ctx, base);
	// add r11,r30,r3
	r11.u64 = r30.u64 + ctx.r3.u64;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_82B52938:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82B5293C:
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

__attribute__((alias("__imp__sub_82B52958"))) PPC_WEAK_FUNC(sub_82B52958);
PPC_FUNC_IMPL(__imp__sub_82B52958) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b52980
	if (!cr6.eq) goto loc_82B52980;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82b52990
	goto loc_82B52990;
loc_82B52980:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r9,116
	ctx.r9.s64 = 116;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw r4,r11,r9
	ctx.r4.s32 = r11.s32 / ctx.r9.s32;
loc_82B52990:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82b528b8
	sub_82B528B8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b529e0
	if (cr0.eq) goto loc_82B529E0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r31,4(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r30,r11
	r30.u64 = r11.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x82b529dc
	if (cr6.eq) goto loc_82B529DC;
loc_82B529B8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b529cc
	if (cr6.eq) goto loc_82B529CC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b52f68
	sub_82B52F68(ctx, base);
loc_82B529CC:
	// addi r30,r30,116
	r30.s64 = r30.s64 + 116;
	// addi r31,r31,116
	r31.s64 = r31.s64 + 116;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x82b529b8
	if (!cr6.eq) goto loc_82B529B8;
loc_82B529DC:
	// stw r31,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r31.u32);
loc_82B529E0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B529F0"))) PPC_WEAK_FUNC(sub_82B529F0);
PPC_FUNC_IMPL(__imp__sub_82B529F0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r30,108(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b52a38
	if (cr0.eq) goto loc_82B52A38;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// std r29,4(r3)
	PPC_STORE_U64(ctx.r3.u32 + 4, r29.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,22164
	r11.s64 = r11.s64 + 22164;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82b52a3c
	goto loc_82B52A3C;
loc_82B52A38:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82B52A3C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8230f778
	sub_8230F778(ctx, base);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8230f7d0
	sub_8230F7D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x8230f7d0
	sub_8230F7D0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82310458
	sub_82310458(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B52AA0"))) PPC_WEAK_FUNC(sub_82B52AA0);
PPC_FUNC_IMPL(__imp__sub_82B52AA0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82928ca8
	sub_82928CA8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r31,92(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r30,88(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b525e8
	sub_82B525E8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830c0358
	sub_830C0358(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B52B08"))) PPC_WEAK_FUNC(sub_82B52B08);
PPC_FUNC_IMPL(__imp__sub_82B52B08) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lbz r11,242(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 242);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82b52b34
	if (cr0.eq) goto loc_82B52B34;
	// stw r4,244(r26)
	PPC_STORE_U32(r26.u32 + 244, ctx.r4.u32);
	// b 0x82b52ea4
	goto loc_82B52EA4;
loc_82B52B34:
	// lwz r11,224(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 224);
	// addi r3,r26,96
	ctx.r3.s64 = r26.s64 + 96;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82b52b54
	if (!cr6.gt) goto loc_82B52B54;
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(r11.u32, 0);
loc_82B52B48:
	// bl 0x82b51d18
	sub_82B51D18(ctx, base);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82b52b48
	if (!cr0.eq) goto loc_82B52B48;
loc_82B52B54:
	// bl 0x82b51d18
	sub_82B51D18(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// beq cr6,0x82b52c38
	if (cr6.eq) goto loc_82B52C38;
	// ble cr6,0x82b52ea4
	if (!cr6.gt) goto loc_82B52EA4;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// bgt cr6,0x82b52ea4
	if (cr6.gt) goto loc_82B52EA4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b52ea4
	if (cr6.eq) goto loc_82B52EA4;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82b52ea4
	if (!cr6.eq) goto loc_82B52EA4;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f31,f0
	f31.f64 = double(float(f0.f64));
	// bne cr6,0x82b52bc0
	if (!cr6.eq) goto loc_82B52BC0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82b52be0
	if (!cr6.gt) goto loc_82B52BE0;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x82b52bdc
	goto loc_82B52BDC;
loc_82B52BC0:
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// bne cr6,0x82b52be0
	if (!cr6.eq) goto loc_82B52BE0;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// bge cr6,0x82b52be0
	if (!cr6.lt) goto loc_82B52BE0;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_82B52BDC:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_82B52BE0:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,212(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 212);
	// addi r4,r10,-9448
	ctx.r4.s64 = ctx.r10.s64 + -9448;
	// lwa r11,0(r11)
	r11.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 0));
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f30,f0
	f30.f64 = double(float(f0.f64));
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x82b512d8
	sub_82B512D8(ctx, base);
	// b 0x82b52ea4
	goto loc_82B52EA4;
loc_82B52C38:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x82b52cdc
	if (!cr6.eq) goto loc_82B52CDC;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r30,212(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 212);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82b52c98
	if (!cr6.eq) goto loc_82B52C98;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,22220
	ctx.r4.s64 = r11.s64 + 22220;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// b 0x82b52cd4
	goto loc_82B52CD4;
loc_82B52C98:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,22204
	ctx.r4.s64 = r11.s64 + 22204;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// li r11,0
	r11.s64 = 0;
loc_82B52CD4:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_82B52CDC:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82b52ea4
	if (!cr6.eq) goto loc_82B52EA4;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r29,r8,96
	r29.s64 = ctx.r8.s64 + 96;
	// lwz r11,224(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 224);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82b52d14
	if (!cr6.gt) goto loc_82B52D14;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
loc_82B52D00:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b51d18
	sub_82B51D18(ctx, base);
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bne 0x82b52d00
	if (!cr0.eq) goto loc_82B52D00;
loc_82B52D14:
	// lwz r11,224(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 224);
	// addi r3,r8,96
	ctx.r3.s64 = ctx.r8.s64 + 96;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82b52d34
	if (!cr6.gt) goto loc_82B52D34;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
loc_82B52D28:
	// bl 0x82b51d18
	sub_82B51D18(ctx, base);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82b52d28
	if (!cr0.eq) goto loc_82B52D28;
loc_82B52D34:
	// addi r4,r3,80
	ctx.r4.s64 = ctx.r3.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b52958
	sub_82B52958(ctx, base);
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82b52e9c
	if (cr6.eq) goto loc_82B52E9C;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r30,212(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 212);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,18236
	ctx.r4.s64 = r11.s64 + 18236;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r30,0
	r30.s64 = 0;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82b52e9c
	if (cr6.eq) goto loc_82B52E9C;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r9,116
	ctx.r9.s64 = 116;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// divw. r27,r10,r9
	r27.s32 = ctx.r10.s32 / ctx.r9.s32;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x82b52e9c
	if (cr0.eq) goto loc_82B52E9C;
	// addi r31,r11,12
	r31.s64 = r11.s64 + 12;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r28,r11,-8104
	r28.s64 = r11.s64 + -8104;
loc_82B52DCC:
	// lwz r10,44(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x82b52e8c
	if (cr6.lt) goto loc_82B52E8C;
	// lwz r11,28(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b52df0
	if (cr6.eq) goto loc_82B52DF0;
	// lwz r9,32(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 32);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
loc_82B52DF0:
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82b52e8c
	if (!cr6.lt) goto loc_82B52E8C;
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x82b52e8c
	if (cr6.eq) goto loc_82B52E8C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r25,212(r26)
	r25.u64 = PPC_LOAD_U32(r26.u32 + 212);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// lwz r25,212(r26)
	r25.u64 = PPC_LOAD_U32(r26.u32 + 212);
	// bl 0x830ba4b8
	sub_830BA4B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// bl 0x82b4f400
	sub_82B4F400(ctx, base);
loc_82B52E8C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,116
	r31.s64 = r31.s64 + 116;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// blt cr6,0x82b52dcc
	if (cr6.lt) goto loc_82B52DCC;
loc_82B52E9C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b52808
	sub_82B52808(ctx, base);
loc_82B52EA4:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82B52EB8"))) PPC_WEAK_FUNC(sub_82B52EB8);
PPC_FUNC_IMPL(__imp__sub_82B52EB8) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,224(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 224);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r4,96
	ctx.r3.s64 = ctx.r4.s64 + 96;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82b52eec
	if (!cr6.gt) goto loc_82B52EEC;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
loc_82B52EE0:
	// bl 0x82b51d18
	sub_82B51D18(ctx, base);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82b52ee0
	if (!cr0.eq) goto loc_82B52EE0;
loc_82B52EEC:
	// addi r4,r3,80
	ctx.r4.s64 = ctx.r3.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b52958
	sub_82B52958(ctx, base);
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

__attribute__((alias("__imp__sub_82B52F10"))) PPC_WEAK_FUNC(sub_82B52F10);
PPC_FUNC_IMPL(__imp__sub_82B52F10) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,224(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 224);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r4,96
	ctx.r3.s64 = ctx.r4.s64 + 96;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82b52f44
	if (!cr6.gt) goto loc_82B52F44;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
loc_82B52F38:
	// bl 0x82b51d18
	sub_82B51D18(ctx, base);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82b52f38
	if (!cr0.eq) goto loc_82B52F38;
loc_82B52F44:
	// addi r4,r3,96
	ctx.r4.s64 = ctx.r3.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b52958
	sub_82B52958(ctx, base);
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

__attribute__((alias("__imp__sub_82B52F68"))) PPC_WEAK_FUNC(sub_82B52F68);
PPC_FUNC_IMPL(__imp__sub_82B52F68) {
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
	// bl 0x82332328
	sub_82332328(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r30,80
	ctx.r4.s64 = r30.s64 + 80;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// bl 0x82b52958
	sub_82B52958(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r30,96
	ctx.r4.s64 = r30.s64 + 96;
	// bl 0x82b52958
	sub_82B52958(ctx, base);
	// lbz r11,112(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,112(r31)
	PPC_STORE_U8(r31.u32 + 112, r11.u8);
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

__attribute__((alias("__imp__sub_82B53058"))) PPC_WEAK_FUNC(sub_82B53058);
PPC_FUNC_IMPL(__imp__sub_82B53058) {
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
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba1c0
	sub_830BA1C0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r11,-8428
	r29.s64 = r11.s64 + -8428;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// bl 0x830ba298
	sub_830BA298(ctx, base);
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba1c0
	sub_830BA1C0(ctx, base);
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba298
	sub_830BA298(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r10.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r10.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r10.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// stb r11,112(r31)
	PPC_STORE_U8(r31.u32 + 112, r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B53108"))) PPC_WEAK_FUNC(sub_82B53108);
PPC_FUNC_IMPL(__imp__sub_82B53108) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x82b57500
	sub_82B57500(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r11,r11,22176
	r11.s64 = r11.s64 + 22176;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x8249c608
	sub_8249C608(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// bl 0x82956ac8
	sub_82956AC8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x82956ac8
	sub_82956AC8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// bl 0x82956ac8
	sub_82956AC8(ctx, base);
	// stw r30,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r30.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// bl 0x82b53058
	sub_82B53058(ctx, base);
	// addi r11,r31,212
	r11.s64 = r31.s64 + 212;
	// addi r29,r28,4
	r29.s64 = r28.s64 + 4;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r11,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r11.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,216(r31)
	PPC_STORE_U32(r31.u32 + 216, r11.u32);
	// beq cr6,0x82b531d0
	if (cr6.eq) goto loc_82B531D0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B531B4:
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
	// bne 0x82b531b4
	if (!cr0.eq) goto loc_82B531B4;
loc_82B531D0:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r30,224(r31)
	PPC_STORE_U32(r31.u32 + 224, r30.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stb r30,240(r31)
	PPC_STORE_U8(r31.u32 + 240, r30.u8);
	// li r11,1
	r11.s64 = 1;
	// stb r30,241(r31)
	PPC_STORE_U8(r31.u32 + 241, r30.u8);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r30,242(r31)
	PPC_STORE_U8(r31.u32 + 242, r30.u8);
	// stw r30,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r30.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f0,2240(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stw r10,220(r31)
	PPC_STORE_U32(r31.u32 + 220, ctx.r10.u32);
	// lfs f13,-24780(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24780);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,248(r31)
	PPC_STORE_U8(r31.u32 + 248, r11.u8);
	// stfs f0,228(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 228, temp.u32);
	// stb r11,249(r31)
	PPC_STORE_U8(r31.u32 + 249, r11.u8);
	// stfs f0,232(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 232, temp.u32);
	// stb r30,250(r31)
	PPC_STORE_U8(r31.u32 + 250, r30.u8);
	// stfs f13,236(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 236, temp.u32);
	// stb r11,251(r31)
	PPC_STORE_U8(r31.u32 + 251, r11.u8);
	// stfs f0,256(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 256, temp.u32);
	// stb r11,252(r31)
	PPC_STORE_U8(r31.u32 + 252, r11.u8);
	// stfs f0,260(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 260, temp.u32);
	// stw r10,264(r31)
	PPC_STORE_U32(r31.u32 + 264, ctx.r10.u32);
	// stw r30,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r30.u32);
	// stw r30,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r30.u32);
	// stw r30,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r30.u32);
	// stw r30,280(r31)
	PPC_STORE_U32(r31.u32 + 280, r30.u32);
	// stw r30,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r30.u32);
	// stw r30,288(r31)
	PPC_STORE_U32(r31.u32 + 288, r30.u32);
	// stw r30,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r30.u32);
	// stw r30,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r30.u32);
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b53264
	if (cr6.eq) goto loc_82B53264;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B53264:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82B53270"))) PPC_WEAK_FUNC(sub_82B53270);
PPC_FUNC_IMPL(__imp__sub_82B53270) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23007
	ctx.r4.s64 = r11.s64 + -23007;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x82b51e48
	sub_82B51E48(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x824d1980
	sub_824D1980(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B532E0"))) PPC_WEAK_FUNC(sub_82B532E0);
PPC_FUNC_IMPL(__imp__sub_82B532E0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x82b51e48
	sub_82B51E48(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x824d1980
	sub_824D1980(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B53358"))) PPC_WEAK_FUNC(sub_82B53358);
PPC_FUNC_IMPL(__imp__sub_82B53358) {
	PPC_FUNC_PROLOGUE();
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x82b51e48
	sub_82B51E48(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x824d1980
	sub_824D1980(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B533D0"))) PPC_WEAK_FUNC(sub_82B533D0);
PPC_FUNC_IMPL(__imp__sub_82B533D0) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b0c
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r24,r31,96
	r24.s64 = r31.s64 + 96;
	// lwz r8,224(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x82b5340c
	if (!cr6.gt) goto loc_82B5340C;
loc_82B533F8:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82b51d18
	sub_82B51D18(ctx, base);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// bne 0x82b533f8
	if (!cr0.eq) goto loc_82B533F8;
loc_82B5340C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82b52eb8
	sub_82B52EB8(ctx, base);
	// addi r28,r24,80
	r28.s64 = r24.s64 + 80;
	// li r30,0
	r30.s64 = 0;
	// li r27,116
	r27.s64 = 116;
	// lwz r23,164(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r29,r23,12
	r29.s64 = r23.s64 + 12;
loc_82B5342C:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b53490
	if (cr6.eq) goto loc_82B53490;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw r11,r11,r27
	r11.s32 = r11.s32 / r27.s32;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82b53490
	if (!cr6.lt) goto loc_82B53490;
	// addi r4,r29,-8
	ctx.r4.s64 = r29.s64 + -8;
	// lwz r26,212(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82b50318
	sub_82B50318(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r26,212(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82b50318
	sub_82B50318(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,116
	r29.s64 = r29.s64 + 116;
	// b 0x82b5342c
	goto loc_82B5342C;
loc_82B53490:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b534a4
	if (!cr6.eq) goto loc_82B534A4;
	// li r25,0
	r25.s64 = 0;
	// b 0x82b534b0
	goto loc_82B534B0;
loc_82B534A4:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r25,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r25.s64 = r11.s32 >> 3;
loc_82B534B0:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b534c8
	if (cr6.eq) goto loc_82B534C8;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw r11,r11,r27
	r11.s32 = r11.s32 / r27.s32;
loc_82B534C8:
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// ble cr6,0x82b534f0
	if (!cr6.gt) goto loc_82B534F0;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b534e4
	if (!cr6.eq) goto loc_82B534E4;
	// li r25,0
	r25.s64 = 0;
	// b 0x82b534f0
	goto loc_82B534F0;
loc_82B534E4:
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw r25,r11,r27
	r25.s32 = r11.s32 / r27.s32;
loc_82B534F0:
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82b53674
	if (cr6.eq) goto loc_82B53674;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r27,r31,16
	r27.s64 = r31.s64 + 16;
	// li r30,0
	r30.s64 = 0;
	// addi r28,r11,-8104
	r28.s64 = r11.s64 + -8104;
	// lfs f31,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f31.f64 = double(temp.f32);
loc_82B53514:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r22,212(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// add r26,r30,r11
	r26.u64 = r30.u64 + r11.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r22,212(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// add r26,r30,r11
	r26.u64 = r30.u64 + r11.u64;
	// bl 0x830ba4b8
	sub_830BA4B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// bl 0x82b4f400
	sub_82B4F400(ctx, base);
	// lwz r11,44(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 44);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// add r4,r30,r10
	ctx.r4.u64 = r30.u64 + ctx.r10.u64;
	// mulli r11,r11,116
	r11.s64 = r11.s64 * 116;
	// add r26,r11,r23
	r26.u64 = r11.u64 + r23.u64;
	// lwz r22,212(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// addi r4,r26,4
	ctx.r4.s64 = r26.s64 + 4;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8249c608
	sub_8249C608(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// bl 0x82b513b0
	sub_82B513B0(ctx, base);
	// lwz r11,44(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 44);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// add r4,r30,r10
	ctx.r4.u64 = r30.u64 + ctx.r10.u64;
	// mulli r11,r11,116
	r11.s64 = r11.s64 * 116;
	// add r26,r11,r23
	r26.u64 = r11.u64 + r23.u64;
	// lwz r22,212(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// addi r4,r26,12
	ctx.r4.s64 = r26.s64 + 12;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x8249c608
	sub_8249C608(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// bl 0x82b513b0
	sub_82B513B0(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r29,r25
	cr6.compare<uint32_t>(r29.u32, r25.u32, xer);
	// blt cr6,0x82b53514
	if (cr6.lt) goto loc_82B53514;
loc_82B53674:
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// lwz r31,212(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82b4ee60
	sub_82B4EE60(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82b52808
	sub_82B52808(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_82B536B0"))) PPC_WEAK_FUNC(sub_82B536B0);
PPC_FUNC_IMPL(__imp__sub_82B536B0) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b08
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// bl 0x82b63e30
	sub_82B63E30(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82b539c4
	if (!cr0.eq) goto loc_82B539C4;
	// lbz r11,242(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 242);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82b539c4
	if (cr0.eq) goto loc_82B539C4;
	// lwz r11,224(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// li r23,0
	r23.s64 = 0;
	// addi r24,r31,96
	r24.s64 = r31.s64 + 96;
	// stb r23,242(r31)
	PPC_STORE_U8(r31.u32 + 242, r23.u8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82b53714
	if (!cr6.gt) goto loc_82B53714;
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(r11.u32, 0);
loc_82B53700:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82b51d18
	sub_82B51D18(ctx, base);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// bne 0x82b53700
	if (!cr0.eq) goto loc_82B53700;
loc_82B53714:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b52eb8
	sub_82B52EB8(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b53734
	if (!cr6.eq) goto loc_82B53734;
	// mr r25,r23
	r25.u64 = r23.u64;
	// b 0x82b53740
	goto loc_82B53740;
loc_82B53734:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r25,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r25.s64 = r11.s32 >> 3;
loc_82B53740:
	// lwz r26,132(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r28,r24,80
	r28.s64 = r24.s64 + 80;
	// mr r30,r23
	r30.u64 = r23.u64;
	// addi r29,r26,12
	r29.s64 = r26.s64 + 12;
loc_82B53750:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b537b8
	if (cr6.eq) goto loc_82B537B8;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// li r9,116
	ctx.r9.s64 = 116;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82b537b8
	if (!cr6.lt) goto loc_82B537B8;
	// addi r4,r29,-8
	ctx.r4.s64 = r29.s64 + -8;
	// lwz r27,212(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82b50318
	sub_82B50318(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r27,212(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82b50318
	sub_82B50318(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,116
	r29.s64 = r29.s64 + 116;
	// b 0x82b53750
	goto loc_82B53750;
loc_82B537B8:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r23
	r30.u64 = r23.u64;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// lfs f31,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// ble cr6,0x82b53950
	if (!cr6.gt) goto loc_82B53950;
	// addi r28,r31,16
	r28.s64 = r31.s64 + 16;
	// mr r29,r23
	r29.u64 = r23.u64;
loc_82B537D4:
	// lwz r11,44(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 44);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r21,212(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + r29.u64;
	// mulli r11,r11,116
	r11.s64 = r11.s64 * 116;
	// add r27,r11,r26
	r27.u64 = r11.u64 + r26.u64;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// addi r4,r27,4
	ctx.r4.s64 = r27.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8249c608
	sub_8249C608(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// bl 0x82b513b0
	sub_82B513B0(ctx, base);
	// lwz r11,44(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 44);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + r29.u64;
	// mulli r11,r11,116
	r11.s64 = r11.s64 * 116;
	// add r27,r11,r26
	r27.u64 = r11.u64 + r26.u64;
	// lwz r21,212(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// addi r4,r27,12
	ctx.r4.s64 = r27.s64 + 12;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8249c608
	sub_8249C608(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// bl 0x82b513b0
	sub_82B513B0(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmpw cr6,r30,r25
	cr6.compare<int32_t>(r30.s32, r25.s32, xer);
	// blt cr6,0x82b537d4
	if (cr6.lt) goto loc_82B537D4;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// ble cr6,0x82b53950
	if (!cr6.gt) goto loc_82B53950;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r23
	r30.u64 = r23.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// addi r28,r11,17164
	r28.s64 = r11.s64 + 17164;
loc_82B538BC:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r26,212(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// add r27,r11,r30
	r27.u64 = r11.u64 + r30.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// add r27,r11,r30
	r27.u64 = r11.u64 + r30.u64;
	// lwz r26,212(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x830ba4a8
	sub_830BA4A8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x82b4f400
	sub_82B4F400(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x82b538bc
	if (!cr0.eq) goto loc_82B538BC;
loc_82B53950:
	// lwz r4,244(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82b53968
	if (cr6.eq) goto loc_82B53968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b52b08
	sub_82B52B08(ctx, base);
	// stw r23,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r23.u32);
loc_82B53968:
	// lwa r10,44(r24)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(r24.u32 + 44));
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r11,268(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// lfs f0,22156(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 22156);
	f0.f64 = double(temp.f32);
	// lfs f13,-24688(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24688);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f0,f12,f0,f13
	f0.f64 = double(float(ctx.f12.f64 * f0.f64 - ctx.f13.f64));
	// stfs f0,256(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 256, temp.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b539b4
	if (cr6.eq) goto loc_82B539B4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stfs f31,80(r10)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 80, temp.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stfs f0,84(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 84, temp.u32);
loc_82B539B4:
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82b51740
	sub_82B51740(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b52808
	sub_82B52808(ctx, base);
loc_82B539C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_82B539D8"))) PPC_WEAK_FUNC(sub_82B539D8);
PPC_FUNC_IMPL(__imp__sub_82B539D8) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b0c
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r24,r31,96
	r24.s64 = r31.s64 + 96;
	// lwz r10,224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// lfs f0,-7076(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -7076);
	f0.f64 = double(temp.f32);
	// stfs f0,228(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 228, temp.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82b53a20
	if (!cr6.gt) goto loc_82B53A20;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82B53A0C:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82b51d18
	sub_82B51D18(ctx, base);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// bne 0x82b53a0c
	if (!cr0.eq) goto loc_82B53A0C;
loc_82B53A20:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82b52eb8
	sub_82B52EB8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82b52f10
	sub_82B52F10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b533d0
	sub_82B533D0(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b53a54
	if (!cr6.eq) goto loc_82B53A54;
	// li r26,0
	r26.s64 = 0;
	// b 0x82b53a60
	goto loc_82B53A60;
loc_82B53A54:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r26,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r26.s64 = r11.s32 >> 3;
loc_82B53A60:
	// lwz r11,84(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 84);
	// li r23,116
	r23.s64 = 116;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b53a7c
	if (cr6.eq) goto loc_82B53A7C;
	// lwz r10,88(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 88);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
loc_82B53A7C:
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// ble cr6,0x82b53aa4
	if (!cr6.gt) goto loc_82B53AA4;
	// lwz r11,84(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b53a98
	if (!cr6.eq) goto loc_82B53A98;
	// li r26,0
	r26.s64 = 0;
	// b 0x82b53aa4
	goto loc_82B53AA4;
loc_82B53A98:
	// lwz r10,88(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 88);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw r26,r11,r23
	r26.s32 = r11.s32 / r23.s32;
loc_82B53AA4:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r25,164(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// addi r28,r11,-8104
	r28.s64 = r11.s64 + -8104;
	// beq cr6,0x82b53b58
	if (cr6.eq) goto loc_82B53B58;
	// li r29,0
	r29.s64 = 0;
loc_82B53AC0:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r22,212(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// add r27,r29,r11
	r27.u64 = r29.u64 + r11.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// lwz r11,44(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 44);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mulli r11,r11,116
	r11.s64 = r11.s64 * 116;
	// add r27,r11,r25
	r27.u64 = r11.u64 + r25.u64;
	// lwz r22,212(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// addi r4,r27,4
	ctx.r4.s64 = r27.s64 + 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(r30.u32, r26.u32, xer);
	// blt cr6,0x82b53ac0
	if (cr6.lt) goto loc_82B53AC0;
loc_82B53B58:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r30,212(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r30,212(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r30,212(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// addi r30,r25,12
	r30.s64 = r25.s64 + 12;
loc_82B53C08:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82b53d68
	if (cr6.eq) goto loc_82B53D68;
	// lwz r11,168(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// subf r11,r25,r11
	r11.s64 = r11.s64 - r25.s64;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x82b53d68
	if (!cr6.lt) goto loc_82B53D68;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b53d5c
	if (cr0.eq) goto loc_82B53D5C;
	// lwz r10,44(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 44);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// blt cr6,0x82b53d18
	if (cr6.lt) goto loc_82B53D18;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b53c58
	if (cr6.eq) goto loc_82B53C58;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
loc_82B53C58:
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x82b53d18
	if (!cr6.lt) goto loc_82B53D18;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82b53cdc
	if (cr6.eq) goto loc_82B53CDC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82b53cc0
	if (cr6.eq) goto loc_82B53CC0;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x82b53ca4
	if (cr6.eq) goto loc_82B53CA4;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x82b53d5c
	if (!cr6.eq) goto loc_82B53D5C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r27,212(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// b 0x82b53cf4
	goto loc_82B53CF4;
loc_82B53CA4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r27,212(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// b 0x82b53cf4
	goto loc_82B53CF4;
loc_82B53CC0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r27,212(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// b 0x82b53cf4
	goto loc_82B53CF4;
loc_82B53CDC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r27,212(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
loc_82B53CF4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// b 0x82b53d5c
	goto loc_82B53D5C;
loc_82B53D18:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// lwz r27,212(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x830ba4a8
	sub_830BA4A8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x82b4f400
	sub_82B4F400(ctx, base);
loc_82B53D5C:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,116
	r30.s64 = r30.s64 + 116;
	// b 0x82b53c08
	goto loc_82B53C08;
loc_82B53D68:
	// addi r26,r31,64
	r26.s64 = r31.s64 + 64;
	// li r30,0
	r30.s64 = 0;
	// li r29,0
	r29.s64 = 0;
loc_82B53D74:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b53de0
	if (cr6.eq) goto loc_82B53DE0;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82b53de0
	if (!cr6.lt) goto loc_82B53DE0;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r25,212(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// add r27,r11,r29
	r27.u64 = r11.u64 + r29.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// b 0x82b53d74
	goto loc_82B53D74;
loc_82B53DE0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82b57a48
	sub_82B57A48(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82b52808
	sub_82B52808(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82b52808
	sub_82B52808(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_82B53E20"))) PPC_WEAK_FUNC(sub_82B53E20);
PPC_FUNC_IMPL(__imp__sub_82B53E20) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// addi r30,r29,96
	r30.s64 = r29.s64 + 96;
	// lwz r11,224(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 224);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82b53e64
	if (!cr6.gt) goto loc_82B53E64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
loc_82B53E50:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b51d18
	sub_82B51D18(ctx, base);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bne 0x82b53e50
	if (!cr0.eq) goto loc_82B53E50;
loc_82B53E64:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82b52eb8
	sub_82B52EB8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824d1d80
	sub_824D1D80(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,276(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mulli r10,r31,116
	ctx.r10.s64 = r31.s64 * 116;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r31,r28,12
	r31.s64 = r28.s64 + 12;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830ba328
	sub_830BA328(ctx, base);
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82b54498
	if (cr6.eq) goto loc_82B54498;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82b54308
	if (cr6.eq) goto loc_82B54308;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x82b54250
	if (cr6.eq) goto loc_82B54250;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x82b54024
	if (cr6.eq) goto loc_82B54024;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82b53fbc
	if (cr6.eq) goto loc_82B53FBC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b54670
	if (cr0.eq) goto loc_82B54670;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// blt cr6,0x82b53f7c
	if (cr6.lt) goto loc_82B53F7C;
	// beq cr6,0x82b53f5c
	if (cr6.eq) goto loc_82B53F5C;
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(r27.u32, 3, xer);
	// blt cr6,0x82b53f3c
	if (cr6.lt) goto loc_82B53F3C;
	// bne cr6,0x82b54670
	if (!cr6.eq) goto loc_82B54670;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// lwz r30,212(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 212);
	// bl 0x830ba4a8
	sub_830BA4A8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r4,r11,-8104
	ctx.r4.s64 = r11.s64 + -8104;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
loc_82B53F1C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82b4f400
	sub_82B4F400(ctx, base);
	// b 0x82b54670
	goto loc_82B54670;
loc_82B53F3C:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// lwz r30,212(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 212);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// addi r4,r11,22248
	ctx.r4.s64 = r11.s64 + 22248;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// b 0x82b53f98
	goto loc_82B53F98;
loc_82B53F5C:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// lwz r30,212(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 212);
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// addi r4,r11,22240
	ctx.r4.s64 = r11.s64 + 22240;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,392
	ctx.r3.s64 = ctx.r1.s64 + 392;
	// b 0x82b53f98
	goto loc_82B53F98;
loc_82B53F7C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r30,212(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 212);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-8104
	ctx.r4.s64 = r11.s64 + -8104;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
loc_82B53F98:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// b 0x82b54670
	goto loc_82B54670;
loc_82B53FBC:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r28,4
	ctx.r3.s64 = r28.s64 + 4;
	// addi r31,r11,-9432
	r31.s64 = r11.s64 + -9432;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x830bcca8
	sub_830BCCA8(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b54018
	if (cr0.eq) goto loc_82B54018;
	// lwz r11,32(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-12168
	ctx.r4.s64 = ctx.r10.s64 + -12168;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x831b1630
	sub_831B1630(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x830bf640
	sub_830BF640(ctx, base);
loc_82B54018:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// b 0x82b54670
	goto loc_82B54670;
loc_82B54024:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b54670
	if (cr0.eq) goto loc_82B54670;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r3,r11,96
	ctx.r3.s64 = r11.s64 + 96;
	// lwz r11,224(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82b54058
	if (!cr6.gt) goto loc_82B54058;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
loc_82B5404C:
	// bl 0x82b51d18
	sub_82B51D18(ctx, base);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82b5404c
	if (!cr0.eq) goto loc_82B5404C;
loc_82B54058:
	// addi r4,r3,80
	ctx.r4.s64 = ctx.r3.s64 + 80;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82b52958
	sub_82B52958(ctx, base);
	// lwz r11,32(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r30,r11,1
	r30.u64 = r11.u64 ^ 1;
	// blt cr6,0x82b541b0
	if (cr6.lt) goto loc_82B541B0;
	// beq cr6,0x82b54124
	if (cr6.eq) goto loc_82B54124;
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(r27.u32, 3, xer);
	// blt cr6,0x82b540dc
	if (cr6.lt) goto loc_82B540DC;
	// bne cr6,0x82b54248
	if (!cr6.eq) goto loc_82B54248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// lwz r30,212(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 212);
	// bl 0x830ba4a8
	sub_830BA4A8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r4,r11,-8104
	ctx.r4.s64 = r11.s64 + -8104;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82b4f400
	sub_82B4F400(ctx, base);
	// b 0x82b54248
	goto loc_82B54248;
loc_82B540DC:
	// lwz r3,212(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 212);
	// bl 0x82b50de8
	sub_82B50DE8(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// addi r4,r11,22248
	ctx.r4.s64 = r11.s64 + 22248;
	// lwz r30,212(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 212);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// b 0x82b54248
	goto loc_82B54248;
loc_82B54124:
	// lwz r3,212(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 212);
	// bl 0x82b50de8
	sub_82B50DE8(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// addi r4,r11,22240
	ctx.r4.s64 = r11.s64 + 22240;
	// lwz r28,212(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 212);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// bl 0x830ba4b8
	sub_830BA4B8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// clrlwi. r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfs f0,-13364(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -13364);
	f0.f64 = double(temp.f32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// beq 0x82b5419c
	if (cr0.eq) goto loc_82B5419C;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r4,r11,22220
	ctx.r4.s64 = r11.s64 + 22220;
	// b 0x82b541a4
	goto loc_82B541A4;
loc_82B5419C:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r4,r11,22204
	ctx.r4.s64 = r11.s64 + 22204;
loc_82B541A4:
	// bl 0x82dfb598
	sub_82DFB598(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// b 0x82b54230
	goto loc_82B54230;
loc_82B541B0:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r28,212(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 212);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-8104
	ctx.r4.s64 = r11.s64 + -8104;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// bl 0x830ba4b8
	sub_830BA4B8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// clrlwi. r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfs f0,-13364(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -13364);
	f0.f64 = double(temp.f32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// beq 0x82b54220
	if (cr0.eq) goto loc_82B54220;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r4,r11,22220
	ctx.r4.s64 = r11.s64 + 22220;
	// b 0x82b54228
	goto loc_82B54228;
loc_82B54220:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r4,r11,22204
	ctx.r4.s64 = r11.s64 + 22204;
loc_82B54228:
	// bl 0x82dfb598
	sub_82DFB598(ctx, base);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
loc_82B54230:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r31,212(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 212);
	// bl 0x824d1e48
	sub_824D1E48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b51290
	sub_82B51290(ctx, base);
loc_82B54248:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// b 0x82b5466c
	goto loc_82B5466C;
loc_82B54250:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b54670
	if (cr0.eq) goto loc_82B54670;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// blt cr6,0x82b542e8
	if (cr6.lt) goto loc_82B542E8;
	// beq cr6,0x82b542c8
	if (cr6.eq) goto loc_82B542C8;
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(r27.u32, 3, xer);
	// blt cr6,0x82b542a8
	if (cr6.lt) goto loc_82B542A8;
	// bne cr6,0x82b54670
	if (!cr6.eq) goto loc_82B54670;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// lwz r30,212(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 212);
	// bl 0x830ba4a8
	sub_830BA4A8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r4,r11,-8104
	ctx.r4.s64 = r11.s64 + -8104;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// b 0x82b53f1c
	goto loc_82B53F1C;
loc_82B542A8:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// lwz r30,212(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 212);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// addi r4,r11,22248
	ctx.r4.s64 = r11.s64 + 22248;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,424
	ctx.r3.s64 = ctx.r1.s64 + 424;
	// b 0x82b53f98
	goto loc_82B53F98;
loc_82B542C8:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// lwz r30,212(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 212);
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// addi r4,r11,22240
	ctx.r4.s64 = r11.s64 + 22240;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// b 0x82b53f98
	goto loc_82B53F98;
loc_82B542E8:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r30,212(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 212);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-8104
	ctx.r4.s64 = r11.s64 + -8104;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// b 0x82b53f98
	goto loc_82B53F98;
loc_82B54308:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b54670
	if (cr0.eq) goto loc_82B54670;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r3,r11,96
	ctx.r3.s64 = r11.s64 + 96;
	// lwz r11,224(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82b5433c
	if (!cr6.gt) goto loc_82B5433C;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
loc_82B54330:
	// bl 0x82b51d18
	sub_82B51D18(ctx, base);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82b54330
	if (!cr0.eq) goto loc_82B54330;
loc_82B5433C:
	// addi r4,r3,80
	ctx.r4.s64 = ctx.r3.s64 + 80;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82b52958
	sub_82B52958(ctx, base);
	// lwz r11,32(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// cmplwi cr6,r27,2
	cr6.compare<uint32_t>(r27.u32, 2, xer);
	// lwa r11,0(r11)
	r11.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 0));
	// std r11,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, r11.u64);
	// lfd f0,208(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f31,f0
	f31.f64 = double(float(f0.f64));
	// blt cr6,0x82b543c4
	if (cr6.lt) goto loc_82B543C4;
	// beq cr6,0x82b543a4
	if (cr6.eq) goto loc_82B543A4;
	// cmplwi cr6,r27,4
	cr6.compare<uint32_t>(r27.u32, 4, xer);
	// bge cr6,0x82b54668
	if (!cr6.lt) goto loc_82B54668;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// lwz r30,212(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 212);
	// bl 0x830ba4a8
	sub_830BA4A8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r4,r11,-8104
	ctx.r4.s64 = r11.s64 + -8104;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// b 0x82b54558
	goto loc_82B54558;
loc_82B543A4:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// lwz r30,212(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 212);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// addi r4,r11,22248
	ctx.r4.s64 = r11.s64 + 22248;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,440
	ctx.r3.s64 = ctx.r1.s64 + 440;
	// b 0x82b54594
	goto loc_82B54594;
loc_82B543C4:
	// lwz r30,212(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 212);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x82b543ec
	if (!cr6.eq) goto loc_82B543EC;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addi r4,r11,-8104
	ctx.r4.s64 = r11.s64 + -8104;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// b 0x82b54404
	goto loc_82B54404;
loc_82B543EC:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,22240
	ctx.r4.s64 = r11.s64 + 22240;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
loc_82B54404:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, r11.u8);
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// bl 0x830ba4b8
	sub_830BA4B8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,27976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 27976);
	f0.f64 = double(temp.f32);
	// fsubs f12,f0,f31
	ctx.f12.f64 = double(float(f0.f64 - f31.f64));
	// lfs f0,-13364(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13364);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f13,5764(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5764);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f12
	f0.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82b5447c
	if (cr6.gt) goto loc_82B5447C;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// lfs f13,22236(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 22236);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82b54480
	if (!cr6.lt) goto loc_82B54480;
loc_82B5447C:
	// stfs f13,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
loc_82B54480:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// addi r4,r11,-9448
	ctx.r4.s64 = r11.s64 + -9448;
	// bl 0x82dfb598
	sub_82DFB598(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// b 0x82b54650
	goto loc_82B54650;
loc_82B54498:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b54670
	if (cr0.eq) goto loc_82B54670;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r30,r8,96
	r30.s64 = ctx.r8.s64 + 96;
	// lwz r11,224(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 224);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82b544d4
	if (!cr6.gt) goto loc_82B544D4;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
loc_82B544C0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b51d18
	sub_82B51D18(ctx, base);
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bne 0x82b544c0
	if (!cr0.eq) goto loc_82B544C0;
loc_82B544D4:
	// lwz r11,224(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 224);
	// addi r3,r8,96
	ctx.r3.s64 = ctx.r8.s64 + 96;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82b544f4
	if (!cr6.gt) goto loc_82B544F4;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
loc_82B544E8:
	// bl 0x82b51d18
	sub_82B51D18(ctx, base);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82b544e8
	if (!cr0.eq) goto loc_82B544E8;
loc_82B544F4:
	// addi r4,r3,80
	ctx.r4.s64 = ctx.r3.s64 + 80;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82b52958
	sub_82B52958(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// cmplwi cr6,r27,2
	cr6.compare<uint32_t>(r27.u32, 2, xer);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r30,r11,27,31,31
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blt cr6,0x82b545b8
	if (cr6.lt) goto loc_82B545B8;
	// beq cr6,0x82b54578
	if (cr6.eq) goto loc_82B54578;
	// cmplwi cr6,r27,4
	cr6.compare<uint32_t>(r27.u32, 4, xer);
	// bge cr6,0x82b54668
	if (!cr6.lt) goto loc_82B54668;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// lwz r30,212(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 212);
	// bl 0x830ba4a8
	sub_830BA4A8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r4,r11,-8104
	ctx.r4.s64 = r11.s64 + -8104;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
loc_82B54558:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82b4f400
	sub_82B4F400(ctx, base);
	// b 0x82b54668
	goto loc_82B54668;
loc_82B54578:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// lwz r30,212(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 212);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,22248
	ctx.r4.s64 = r11.s64 + 22248;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
loc_82B54594:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// b 0x82b54668
	goto loc_82B54668;
loc_82B545B8:
	// lwz r28,212(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 212);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x82b545e0
	if (!cr6.eq) goto loc_82B545E0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// addi r4,r11,-8104
	ctx.r4.s64 = r11.s64 + -8104;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// b 0x82b545f8
	goto loc_82B545F8;
loc_82B545E0:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,22240
	ctx.r4.s64 = r11.s64 + 22240;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
loc_82B545F8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b54668
	if (cr0.eq) goto loc_82B54668;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// bl 0x830ba4b8
	sub_830BA4B8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// addi r4,r10,18236
	ctx.r4.s64 = ctx.r10.s64 + 18236;
	// lfs f0,-13364(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -13364);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x82dfb598
	sub_82DFB598(ctx, base);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
loc_82B54650:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r31,212(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 212);
	// bl 0x824d1e48
	sub_824D1E48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b51290
	sub_82B51290(ctx, base);
loc_82B54668:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
loc_82B5466C:
	// bl 0x82b52808
	sub_82B52808(ctx, base);
loc_82B54670:
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82b52808
	sub_82B52808(ctx, base);
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82B546A0"))) PPC_WEAK_FUNC(sub_82B546A0);
PPC_FUNC_IMPL(__imp__sub_82B546A0) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0afc
	// stfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82b51758
	sub_82B51758(ctx, base);
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// bl 0x82b51758
	sub_82B51758(ctx, base);
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 284);
	// bl 0x82b51758
	sub_82B51758(ctx, base);
	// li r21,0
	r21.s64 = 0;
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// stb r21,242(r31)
	PPC_STORE_U8(r31.u32 + 242, r21.u8);
	// bl 0x82b50de8
	sub_82B50DE8(ctx, base);
	// lwz r11,224(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// add. r10,r11,r20
	ctx.r10.u64 = r11.u64 + r20.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge 0x82b546f8
	if (!cr0.lt) goto loc_82B546F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b539d8
	sub_82B539D8(ctx, base);
	// b 0x82b54e40
	goto loc_82B54E40;
loc_82B546F8:
	// addi r19,r31,96
	r19.s64 = r31.s64 + 96;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r22,r19
	r22.u64 = r19.u64;
	// ble cr6,0x82b54720
	if (!cr6.gt) goto loc_82B54720;
	// lwz r8,224(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 224);
loc_82B5470C:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82b51d18
	sub_82B51D18(ctx, base);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// bne 0x82b5470c
	if (!cr0.eq) goto loc_82B5470C;
loc_82B54720:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82b51d18
	sub_82B51D18(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b52eb8
	sub_82B52EB8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82b52f10
	sub_82B52F10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b533d0
	sub_82B533D0(ctx, base);
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x82b50db0
	sub_82B50DB0(ctx, base);
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// blt cr6,0x82b549a8
	if (cr6.lt) goto loc_82B549A8;
	// lbz r11,248(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 248);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82b54824
	if (cr0.eq) goto loc_82B54824;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// lwz r29,212(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,22276
	ctx.r4.s64 = r11.s64 + 22276;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x824d1d80
	sub_824D1D80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// bl 0x830ba4b8
	sub_830BA4B8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// lfs f0,-13364(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -13364);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f0,192(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// bl 0x830ba328
	sub_830BA328(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// addi r4,r11,22260
	ctx.r4.s64 = r11.s64 + 22260;
	// bl 0x82dfb598
	sub_82DFB598(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stb r11,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, r11.u8);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r30,212(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x824d1e48
	sub_824D1E48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b51290
	sub_82B51290(ctx, base);
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
loc_82B54824:
	// lwz r25,132(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r24,136(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r29,r21
	r29.u64 = r21.u64;
	// addi r30,r25,12
	r30.s64 = r25.s64 + 12;
	// li r23,116
	r23.s64 = 116;
	// addi r26,r11,-8104
	r26.s64 = r11.s64 + -8104;
	// addi r28,r10,18236
	r28.s64 = ctx.r10.s64 + 18236;
loc_82B54848:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82b54b2c
	if (cr6.eq) goto loc_82B54B2C;
	// subf r11,r25,r24
	r11.s64 = r24.s64 - r25.s64;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x82b54b2c
	if (!cr6.lt) goto loc_82B54B2C;
	// lwz r10,44(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 44);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// blt cr6,0x82b5499c
	if (cr6.lt) goto loc_82B5499C;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b54880
	if (!cr6.eq) goto loc_82B54880;
	// mr r11,r21
	r11.u64 = r21.u64;
	// b 0x82b5488c
	goto loc_82B5488C;
loc_82B54880:
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
loc_82B5488C:
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x82b5499c
	if (!cr6.lt) goto loc_82B5499C;
	// lwz r11,40(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 40);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x82b548d8
	if (!cr6.eq) goto loc_82B548D8;
	// lbz r11,249(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 249);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82b548d8
	if (cr0.eq) goto loc_82B548D8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r27,212(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82b54988
	goto loc_82B54988;
loc_82B548D8:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r27,212(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// addi r4,r30,-8
	ctx.r4.s64 = r30.s64 + -8;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b5499c
	if (cr0.eq) goto loc_82B5499C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// lwz r27,212(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x830ba4b8
	sub_830BA4B8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// bl 0x82b4f400
	sub_82B4F400(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r27,212(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
loc_82B54988:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
loc_82B5499C:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,116
	r30.s64 = r30.s64 + 116;
	// b 0x82b54848
	goto loc_82B54848;
loc_82B549A8:
	// lwz r25,132(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r24,136(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r28,r21
	r28.u64 = r21.u64;
	// addi r29,r25,12
	r29.s64 = r25.s64 + 12;
	// li r23,116
	r23.s64 = 116;
	// addi r26,r11,-8104
	r26.s64 = r11.s64 + -8104;
loc_82B549C4:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82b54b2c
	if (cr6.eq) goto loc_82B54B2C;
	// subf r11,r25,r24
	r11.s64 = r24.s64 - r25.s64;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bge cr6,0x82b54b2c
	if (!cr6.lt) goto loc_82B54B2C;
	// lwz r10,44(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 44);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// blt cr6,0x82b54b20
	if (cr6.lt) goto loc_82B54B20;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b549fc
	if (!cr6.eq) goto loc_82B549FC;
	// mr r11,r21
	r11.u64 = r21.u64;
	// b 0x82b54a08
	goto loc_82B54A08;
loc_82B549FC:
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
loc_82B54A08:
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bge cr6,0x82b54b20
	if (!cr6.lt) goto loc_82B54B20;
	// addi r30,r29,-8
	r30.s64 = r29.s64 + -8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// lwz r27,212(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x830ba4b8
	sub_830BA4B8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// bl 0x82b4f400
	sub_82B4F400(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r27,212(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b54b20
	if (cr0.eq) goto loc_82B54B20;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// lwz r30,212(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x830ba4b8
	sub_830BA4B8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x82b4f400
	sub_82B4F400(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r30,212(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
loc_82B54B20:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,116
	r29.s64 = r29.s64 + 116;
	// b 0x82b549c4
	goto loc_82B549C4;
loc_82B54B2C:
	// addi r27,r31,24
	r27.s64 = r31.s64 + 24;
	// mr r29,r21
	r29.u64 = r21.u64;
	// mr r30,r21
	r30.u64 = r21.u64;
loc_82B54B38:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b54c0c
	if (cr6.eq) goto loc_82B54C0C;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x82b54c0c
	if (!cr6.lt) goto loc_82B54C0C;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82b54c14
	if (cr6.eq) goto loc_82B54C14;
	// subf r11,r25,r24
	r11.s64 = r24.s64 - r25.s64;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x82b54c0c
	if (!cr6.lt) goto loc_82B54C0C;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r18,212(r31)
	r18.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// add r28,r11,r30
	r28.u64 = r11.u64 + r30.u64;
	// bl 0x830ba4b8
	sub_830BA4B8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// bl 0x82b4f400
	sub_82B4F400(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// add r28,r11,r30
	r28.u64 = r11.u64 + r30.u64;
	// lwz r18,212(r31)
	r18.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// b 0x82b54b38
	goto loc_82B54B38;
loc_82B54C0C:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x82b54c1c
	if (!cr6.eq) goto loc_82B54C1C;
loc_82B54C14:
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// b 0x82b54c24
	goto loc_82B54C24;
loc_82B54C1C:
	// subf r11,r25,r24
	r11.s64 = r24.s64 - r25.s64;
	// divw r10,r11,r23
	ctx.r10.s32 = r11.s32 / r23.s32;
loc_82B54C24:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b54c38
	if (!cr6.eq) goto loc_82B54C38;
	// mr r11,r21
	r11.u64 = r21.u64;
	// b 0x82b54c44
	goto loc_82B54C44;
loc_82B54C38:
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
loc_82B54C44:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x82b54cbc
	if (!cr6.gt) goto loc_82B54CBC;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r30,212(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,212(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
loc_82B54CBC:
	// lbz r11,112(r22)
	r11.u64 = PPC_LOAD_U8(r22.u32 + 112);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82b54d40
	if (cr0.eq) goto loc_82B54D40;
	// addi r27,r31,80
	r27.s64 = r31.s64 + 80;
	// mr r30,r21
	r30.u64 = r21.u64;
	// mr r29,r21
	r29.u64 = r21.u64;
loc_82B54CD4:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b54d40
	if (cr6.eq) goto loc_82B54D40;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82b54d40
	if (!cr6.lt) goto loc_82B54D40;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r25,212(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// add r28,r11,r29
	r28.u64 = r11.u64 + r29.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// b 0x82b54cd4
	goto loc_82B54CD4;
loc_82B54D40:
	// lwz r28,164(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r30,r21
	r30.u64 = r21.u64;
	// addi r29,r28,12
	r29.s64 = r28.s64 + 12;
loc_82B54D4C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82b54de4
	if (cr6.eq) goto loc_82B54DE4;
	// lwz r11,168(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82b54de4
	if (!cr6.lt) goto loc_82B54DE4;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r27,212(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r4,r29,-8
	ctx.r4.s64 = r29.s64 + -8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r27,212(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,116
	r29.s64 = r29.s64 + 116;
	// b 0x82b54d4c
	goto loc_82B54D4C;
loc_82B54DE4:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82b52808
	sub_82B52808(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b52808
	sub_82B52808(ctx, base);
	// lwz r11,224(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// add. r11,r11,r20
	r11.u64 = r11.u64 + r20.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,224(r31)
	PPC_STORE_U32(r31.u32 + 224, r11.u32);
	// ble 0x82b54e18
	if (!cr0.gt) goto loc_82B54E18;
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(r11.u32, 0);
loc_82B54E0C:
	// bl 0x82b51d18
	sub_82B51D18(ctx, base);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82b54e0c
	if (!cr0.eq) goto loc_82B54E0C;
loc_82B54E18:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// blt cr6,0x82b54e28
	if (cr6.lt) goto loc_82B54E28;
	// stw r21,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r21.u32);
	// stw r21,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r21.u32);
loc_82B54E28:
	// lwz r11,224(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82b54e40
	if (cr6.lt) goto loc_82B54E40;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-7076(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -7076);
	f0.f64 = double(temp.f32);
	// stfs f0,232(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 232, temp.u32);
loc_82B54E40:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x831b0b4c
	return;
}

__attribute__((alias("__imp__sub_82B54E50"))) PPC_WEAK_FUNC(sub_82B54E50);
PPC_FUNC_IMPL(__imp__sub_82B54E50) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af0
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r4.u32);
	// mr r18,r5
	r18.u64 = ctx.r5.u64;
	// stw r6,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, ctx.r6.u32);
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// cmpw cr6,r4,r6
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, xer);
	// bne cr6,0x82b54e88
	if (!cr6.eq) goto loc_82B54E88;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b55dc8
	goto loc_82B55DC8;
loc_82B54E88:
	// lwz r11,224(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// addi r19,r31,96
	r19.s64 = r31.s64 + 96;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82b54eb0
	if (!cr6.gt) goto loc_82B54EB0;
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(r11.u32, 0);
loc_82B54E9C:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82b51d18
	sub_82B51D18(ctx, base);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// bne 0x82b54e9c
	if (!cr0.eq) goto loc_82B54E9C;
loc_82B54EB0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82b52eb8
	sub_82B52EB8(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r26,r31,24
	r26.s64 = r31.s64 + 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b54ed4
	if (!cr6.eq) goto loc_82B54ED4;
	// li r21,0
	r21.s64 = 0;
	// b 0x82b54ee0
	goto loc_82B54EE0;
loc_82B54ED4:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r21,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r21.s64 = r11.s32 >> 3;
loc_82B54EE0:
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x82b50de8
	sub_82B50DE8(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r14,r10,18236
	r14.s64 = ctx.r10.s64 + 18236;
	// li r16,1
	r16.s64 = 1;
	// cmpw cr6,r18,r20
	cr6.compare<int32_t>(r18.s32, r20.s32, xer);
	// stw r14,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r14.u32);
	// addi r15,r11,-8104
	r15.s64 = r11.s64 + -8104;
	// addi r17,r9,-14440
	r17.s64 = ctx.r9.s64 + -14440;
	// ble cr6,0x82b550f4
	if (!cr6.gt) goto loc_82B550F4;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r30,0
	r30.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// addi r27,r11,17084
	r27.s64 = r11.s64 + 17084;
loc_82B54F20:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b54f8c
	if (cr6.eq) goto loc_82B54F8C;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82b54f8c
	if (!cr6.lt) goto loc_82B54F8C;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r25,212(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// add r28,r11,r29
	r28.u64 = r11.u64 + r29.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// b 0x82b54f20
	goto loc_82B54F20;
loc_82B54F8C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r30,212(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// bne cr6,0x82b55004
	if (!cr6.eq) goto loc_82B55004;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r30,212(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
loc_82B55004:
	// lwz r25,148(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r23,116
	r23.s64 = 116;
	// lwz r22,152(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x82b55020
	if (!cr6.eq) goto loc_82B55020;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82b55028
	goto loc_82B55028;
loc_82B55020:
	// subf r11,r25,r22
	r11.s64 = r22.s64 - r25.s64;
	// divw r10,r11,r23
	ctx.r10.s32 = r11.s32 / r23.s32;
loc_82B55028:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b55040
	if (cr6.eq) goto loc_82B55040;
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
loc_82B55040:
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// lwz r30,212(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// cmplw cr6,r18,r11
	cr6.compare<uint32_t>(r18.u32, r11.u32, xer);
	// bne cr6,0x82b55060
	if (!cr6.eq) goto loc_82B55060;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r4,r11,22292
	ctx.r4.s64 = r11.s64 + 22292;
	// b 0x82b55068
	goto loc_82B55068;
loc_82B55060:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r11,17124
	ctx.r4.s64 = r11.s64 + 17124;
loc_82B55068:
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// lwz r11,264(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// stb r16,250(r31)
	PPC_STORE_U8(r31.u32 + 250, r16.u8);
	// stb r16,242(r31)
	PPC_STORE_U8(r31.u32 + 242, r16.u8);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82b550c4
	if (cr6.eq) goto loc_82B550C4;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// lwz r11,264(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// bl 0x82b52aa0
	sub_82B52AA0(ctx, base);
loc_82B550C4:
	// lis r11,-32075
	r11.s64 = -2102067200;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r11,r11,14000
	r11.s64 = r11.s64 + 14000;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82b529f0
	sub_82B529F0(ctx, base);
	// extsw r11,r20
	r11.s64 = r20.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82b552c0
	goto loc_82B552C0;
loc_82B550F4:
	// bge cr6,0x82b552e8
	if (!cr6.lt) goto loc_82B552E8;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// addi r27,r11,17164
	r27.s64 = r11.s64 + 17164;
	// ble cr6,0x82b5515c
	if (!cr6.gt) goto loc_82B5515C;
	// li r29,0
	r29.s64 = 0;
	// mr r30,r21
	r30.u64 = r21.u64;
loc_82B55110:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r25,212(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// add r28,r11,r29
	r28.u64 = r11.u64 + r29.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bne 0x82b55110
	if (!cr0.eq) goto loc_82B55110;
loc_82B5515C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r30,212(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r30,212(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bne cr6,0x82b551b0
	if (!cr6.eq) goto loc_82B551B0;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r4,r11,22292
	ctx.r4.s64 = r11.s64 + 22292;
	// b 0x82b551b8
	goto loc_82B551B8;
loc_82B551B0:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r11,17124
	ctx.r4.s64 = r11.s64 + 17124;
loc_82B551B8:
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// lwz r25,148(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r22,152(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r23,116
	r23.s64 = 116;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x82b55200
	if (!cr6.eq) goto loc_82B55200;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82b55208
	goto loc_82B55208;
loc_82B55200:
	// subf r11,r25,r22
	r11.s64 = r22.s64 - r25.s64;
	// divw r10,r11,r23
	ctx.r10.s32 = r11.s32 / r23.s32;
loc_82B55208:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b55220
	if (cr6.eq) goto loc_82B55220;
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
loc_82B55220:
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r20,r11
	cr6.compare<uint32_t>(r20.u32, r11.u32, xer);
	// bne cr6,0x82b55264
	if (!cr6.eq) goto loc_82B55264;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r30,212(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
loc_82B55264:
	// lwz r11,264(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// stb r16,242(r31)
	PPC_STORE_U8(r31.u32 + 242, r16.u8);
	// stb r16,250(r31)
	PPC_STORE_U8(r31.u32 + 250, r16.u8);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82b55294
	if (cr6.eq) goto loc_82B55294;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// lwz r11,264(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// bl 0x82b52aa0
	sub_82B52AA0(ctx, base);
loc_82B55294:
	// lis r11,-32075
	r11.s64 = -2102067200;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r11,r11,14000
	r11.s64 = r11.s64 + 14000;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82b529f0
	sub_82B529F0(ctx, base);
	// extsw r11,r20
	r11.s64 = r20.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82B552C0:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(f0.s64);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r3,264(r31)
	PPC_STORE_U32(r31.u32 + 264, ctx.r3.u32);
	// lfs f13,-24688(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24688);
	ctx.f13.f64 = double(temp.f32);
	// frsp f12,f0
	ctx.f12.f64 = double(float(f0.f64));
	// lfs f0,22156(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22156);
	f0.f64 = double(temp.f32);
	// fmsubs f0,f12,f0,f13
	f0.f64 = double(float(ctx.f12.f64 * f0.f64 - ctx.f13.f64));
	// stfs f0,256(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 256, temp.u32);
	// b 0x82b554d0
	goto loc_82B554D0;
loc_82B552E8:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r10,556(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 556);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// subf r24,r18,r10
	r24.s64 = ctx.r10.s64 - r18.s64;
	// bne cr6,0x82b55304
	if (!cr6.eq) goto loc_82B55304;
	// li r26,0
	r26.s64 = 0;
	// b 0x82b55310
	goto loc_82B55310;
loc_82B55304:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r26,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r26.s64 = r11.s32 >> 3;
loc_82B55310:
	// lwz r25,148(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r23,116
	r23.s64 = 116;
	// lwz r22,152(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x82b5532c
	if (!cr6.eq) goto loc_82B5532C;
	// li r27,0
	r27.s64 = 0;
	// b 0x82b55334
	goto loc_82B55334;
loc_82B5532C:
	// subf r11,r25,r22
	r11.s64 = r22.s64 - r25.s64;
	// divw r27,r11,r23
	r27.s32 = r11.s32 / r23.s32;
loc_82B55334:
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x82b55440
	if (!cr6.gt) goto loc_82B55440;
	// li r30,0
	r30.s64 = 0;
loc_82B55344:
	// cmpw cr6,r28,r27
	cr6.compare<int32_t>(r28.s32, r27.s32, xer);
	// bge cr6,0x82b55440
	if (!cr6.lt) goto loc_82B55440;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpw cr6,r28,r24
	cr6.compare<int32_t>(r28.s32, r24.s32, xer);
	// add r29,r11,r30
	r29.u64 = r11.u64 + r30.u64;
	// bne cr6,0x82b5539c
	if (!cr6.eq) goto loc_82B5539C;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// lwz r14,212(r31)
	r14.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// b 0x82b5542c
	goto loc_82B5542C;
loc_82B5539C:
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// lwz r14,212(r31)
	r14.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r14,212(r31)
	r14.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// add r29,r11,r30
	r29.u64 = r11.u64 + r30.u64;
	// bl 0x830ba4b8
	sub_830BA4B8(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82b4f400
	sub_82B4F400(ctx, base);
loc_82B5542C:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r14,104(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r28,r26
	cr6.compare<int32_t>(r28.s32, r26.s32, xer);
	// blt cr6,0x82b55344
	if (cr6.lt) goto loc_82B55344;
loc_82B55440:
	// cmpw cr6,r26,r27
	cr6.compare<int32_t>(r26.s32, r27.s32, xer);
	// bgt cr6,0x82b554d0
	if (cr6.gt) goto loc_82B554D0;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r29,212(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,17164
	r28.s64 = r11.s64 + 17164;
	// addi r30,r31,40
	r30.s64 = r31.s64 + 40;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// lwz r29,212(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x830ba4a8
	sub_830BA4A8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x82b4f400
	sub_82B4F400(ctx, base);
loc_82B554D0:
	// addi r28,r19,80
	r28.s64 = r19.s64 + 80;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r25,12
	r29.s64 = r25.s64 + 12;
loc_82B554DC:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b55540
	if (cr6.eq) goto loc_82B55540;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82b55540
	if (!cr6.lt) goto loc_82B55540;
	// addi r4,r29,-8
	ctx.r4.s64 = r29.s64 + -8;
	// lwz r27,212(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82b50318
	sub_82B50318(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r27,212(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82b50318
	sub_82B50318(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,116
	r29.s64 = r29.s64 + 116;
	// b 0x82b554dc
	goto loc_82B554DC;
loc_82B55540:
	// cmpw cr6,r18,r20
	cr6.compare<int32_t>(r18.s32, r20.s32, xer);
	// ble cr6,0x82b556cc
	if (!cr6.gt) goto loc_82B556CC;
	// add r11,r21,r20
	r11.u64 = r21.u64 + r20.u64;
	// lwz r28,212(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r30,r31,40
	r30.s64 = r31.s64 + 40;
	// mulli r11,r11,116
	r11.s64 = r11.s64 * 116;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r29,r11,r25
	r29.u64 = r11.u64 + r25.u64;
	// addi r27,r31,16
	r27.s64 = r31.s64 + 16;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8249c608
	sub_8249C608(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lfs f31,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x82b513b0
	sub_82B513B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r30,212(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8249c608
	sub_8249C608(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x82b513b0
	sub_82B513B0(ctx, base);
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// ble cr6,0x82b55948
	if (!cr6.gt) goto loc_82B55948;
	// mulli r11,r20,116
	r11.s64 = r20.s64 * 116;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// li r29,0
	r29.s64 = 0;
	// addi r30,r11,12
	r30.s64 = r11.s64 + 12;
	// mr r28,r21
	r28.u64 = r21.u64;
loc_82B55618:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r26,212(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r4,r30,-8
	ctx.r4.s64 = r30.s64 + -8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8249c608
	sub_8249C608(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// bl 0x82b513b0
	sub_82B513B0(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// lwz r26,212(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8249c608
	sub_8249C608(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// bl 0x82b513b0
	sub_82B513B0(ctx, base);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r30,r30,116
	r30.s64 = r30.s64 + 116;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bne 0x82b55618
	if (!cr0.eq) goto loc_82B55618;
	// b 0x82b55948
	goto loc_82B55948;
loc_82B556CC:
	// bge cr6,0x82b55848
	if (!cr6.lt) goto loc_82B55848;
	// addi r29,r31,40
	r29.s64 = r31.s64 + 40;
	// lwz r27,212(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// mulli r11,r20,116
	r11.s64 = r20.s64 * 116;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r30,r11,r25
	r30.u64 = r11.u64 + r25.u64;
	// addi r28,r31,16
	r28.s64 = r31.s64 + 16;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r4,r30,-112
	ctx.r4.s64 = r30.s64 + -112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8249c608
	sub_8249C608(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lfs f31,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x82b513b0
	sub_82B513B0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r29,212(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r30,-104
	ctx.r4.s64 = r30.s64 + -104;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8249c608
	sub_8249C608(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// bl 0x82b513b0
	sub_82B513B0(ctx, base);
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// ble cr6,0x82b55948
	if (!cr6.gt) goto loc_82B55948;
	// li r29,0
	r29.s64 = 0;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// mr r27,r21
	r27.u64 = r21.u64;
loc_82B55794:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r26,212(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r4,r30,-8
	ctx.r4.s64 = r30.s64 + -8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8249c608
	sub_8249C608(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// bl 0x82b513b0
	sub_82B513B0(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// lwz r26,212(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8249c608
	sub_8249C608(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// bl 0x82b513b0
	sub_82B513B0(ctx, base);
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r30,r30,116
	r30.s64 = r30.s64 + 116;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bne 0x82b55794
	if (!cr0.eq) goto loc_82B55794;
	// b 0x82b55948
	goto loc_82B55948;
loc_82B55848:
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// ble cr6,0x82b55948
	if (!cr6.gt) goto loc_82B55948;
	// mulli r11,r18,116
	r11.s64 = r18.s64 * 116;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// li r28,0
	r28.s64 = 0;
	// addi r29,r11,12
	r29.s64 = r11.s64 + 12;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
loc_82B5586C:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x82b5587c
	if (!cr6.eq) goto loc_82B5587C;
	// li r11,0
	r11.s64 = 0;
	// b 0x82b55884
	goto loc_82B55884;
loc_82B5587C:
	// subf r11,r25,r22
	r11.s64 = r22.s64 - r25.s64;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
loc_82B55884:
	// add r10,r27,r18
	ctx.r10.u64 = r27.u64 + r18.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x82b55934
	if (!cr6.gt) goto loc_82B55934;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r26,212(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// add r4,r28,r11
	ctx.r4.u64 = r28.u64 + r11.u64;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r4,r29,-8
	ctx.r4.s64 = r29.s64 + -8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8249c608
	sub_8249C608(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// bl 0x82b513b0
	sub_82B513B0(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r28,r11
	ctx.r4.u64 = r28.u64 + r11.u64;
	// lwz r26,212(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8249c608
	sub_8249C608(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// bl 0x82b513b0
	sub_82B513B0(ctx, base);
loc_82B55934:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,116
	r29.s64 = r29.s64 + 116;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmpw cr6,r27,r21
	cr6.compare<int32_t>(r27.s32, r21.s32, xer);
	// blt cr6,0x82b5586c
	if (cr6.lt) goto loc_82B5586C;
loc_82B55948:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// cmpw cr6,r18,r20
	cr6.compare<int32_t>(r18.s32, r20.s32, xer);
	// lfs f31,-13364(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -13364);
	f31.f64 = double(temp.f32);
	// ble cr6,0x82b55aa4
	if (!cr6.gt) goto loc_82B55AA4;
	// add r28,r21,r18
	r28.u64 = r21.u64 + r18.u64;
	// lwz r27,212(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// mulli r11,r28,116
	r11.s64 = r28.s64 * 116;
	// add r29,r11,r25
	r29.u64 = r11.u64 + r25.u64;
	// addi r4,r10,22240
	ctx.r4.s64 = ctx.r10.s64 + 22240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r29,-112
	r30.s64 = r29.s64 + -112;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// lwz r11,-96(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -96);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x82b55a34
	if (!cr6.eq) goto loc_82B55A34;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x824d1d80
	sub_824D1D80(ctx, base);
	// stw r16,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r16.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x830ba328
	sub_830BA328(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// bl 0x830ba4b8
	sub_830BA4B8(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 * f31.f64));
	// stfs f0,176(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x82dfb598
	sub_82DFB598(ctx, base);
	// add r11,r21,r20
	r11.u64 = r21.u64 + r20.u64;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// mulli r11,r11,116
	r11.s64 = r11.s64 * 116;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// addi r4,r11,-112
	ctx.r4.s64 = r11.s64 + -112;
	// bl 0x830ba328
	sub_830BA328(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lwz r30,212(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x824d1e48
	sub_824D1E48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b51290
	sub_82B51290(ctx, base);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
loc_82B55A34:
	// addi r3,r29,-104
	ctx.r3.s64 = r29.s64 + -104;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b55a54
	if (cr0.eq) goto loc_82B55A54;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r28,-1
	ctx.r4.s64 = r28.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b53e20
	sub_82B53E20(ctx, base);
loc_82B55A54:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// lwz r30,212(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,22248
	ctx.r4.s64 = r11.s64 + 22248;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mulli r11,r20,116
	r11.s64 = r20.s64 * 116;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// b 0x82b55bec
	goto loc_82B55BEC;
loc_82B55AA4:
	// bge cr6,0x82b55bf4
	if (!cr6.lt) goto loc_82B55BF4;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// lwz r29,212(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,22248
	ctx.r4.s64 = r11.s64 + 22248;
	// add r30,r21,r20
	r30.u64 = r21.u64 + r20.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mulli r11,r30,116
	r11.s64 = r30.s64 * 116;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,-112
	ctx.r4.s64 = r11.s64 + -112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r30,-1
	ctx.r4.s64 = r30.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b53e20
	sub_82B53E20(ctx, base);
	// mulli r11,r18,116
	r11.s64 = r18.s64 * 116;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// add r29,r11,r25
	r29.u64 = r11.u64 + r25.u64;
	// addi r4,r10,22240
	ctx.r4.s64 = ctx.r10.s64 + 22240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// lwz r28,212(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x82b55bd4
	if (!cr6.eq) goto loc_82B55BD4;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x824d1d80
	sub_824D1D80(ctx, base);
	// stw r16,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, r16.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// bl 0x830ba328
	sub_830BA328(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// bl 0x830ba4b8
	sub_830BA4B8(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 * f31.f64));
	// stfs f0,224(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// bl 0x82dfb598
	sub_82DFB598(ctx, base);
	// mulli r11,r20,116
	r11.s64 = r20.s64 * 116;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bl 0x830ba328
	sub_830BA328(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lwz r30,212(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x824d1e48
	sub_824D1E48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b51290
	sub_82B51290(ctx, base);
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
loc_82B55BD4:
	// addi r3,r29,12
	ctx.r3.s64 = r29.s64 + 12;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b55bf4
	if (cr0.eq) goto loc_82B55BF4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
loc_82B55BEC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b53e20
	sub_82B53E20(ctx, base);
loc_82B55BF4:
	// lwz r11,572(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 572);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82b55ca4
	if (cr6.lt) goto loc_82B55CA4;
	// mulli r11,r11,116
	r11.s64 = r11.s64 * 116;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// beq cr6,0x82b55ca4
	if (cr6.eq) goto loc_82B55CA4;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,212(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// lwz r30,212(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x830ba4b8
	sub_830BA4B8(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82b4f400
	sub_82B4F400(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
loc_82B55CA4:
	// lwz r30,556(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 556);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x82b55d90
	if (cr6.lt) goto loc_82B55D90;
	// mulli r11,r30,116
	r11.s64 = r30.s64 * 116;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// beq cr6,0x82b55d90
	if (cr6.eq) goto loc_82B55D90;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// cmpw cr6,r18,r20
	cr6.compare<int32_t>(r18.s32, r20.s32, xer);
	// bgt cr6,0x82b55d18
	if (cr6.gt) goto loc_82B55D18;
	// blt cr6,0x82b55d18
	if (cr6.lt) goto loc_82B55D18;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// lwz r29,212(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// b 0x82b55d88
	goto loc_82B55D88;
loc_82B55D18:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x824d1d80
	sub_824D1D80(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r11,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, r11.u32);
	// addi r3,r1,276
	ctx.r3.s64 = ctx.r1.s64 + 276;
	// bl 0x830ba328
	sub_830BA328(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// bl 0x830ba4b8
	sub_830BA4B8(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 * f31.f64));
	// stfs f0,272(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// addi r3,r1,292
	ctx.r3.s64 = ctx.r1.s64 + 292;
	// bl 0x82dfb598
	sub_82DFB598(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lwz r29,212(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x824d1e48
	sub_824D1E48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b51290
	sub_82B51290(ctx, base);
	// addi r3,r1,292
	ctx.r3.s64 = ctx.r1.s64 + 292;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,284
	ctx.r3.s64 = ctx.r1.s64 + 284;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r3,r1,276
	ctx.r3.s64 = ctx.r1.s64 + 276;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
loc_82B55D88:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
loc_82B55D90:
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// bl 0x82b51758
	sub_82B51758(ctx, base);
	// mulli r11,r30,116
	r11.s64 = r30.s64 * 116;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// lwz r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82b55dbc
	if (cr6.lt) goto loc_82B55DBC;
	// lwz r10,292(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// lwz r5,60(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82e562c8
	sub_82E562C8(ctx, base);
loc_82B55DBC:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82b52808
	sub_82B52808(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82B55DC8:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_82B55DD8"))) PPC_WEAK_FUNC(sub_82B55DD8);
PPC_FUNC_IMPL(__imp__sub_82B55DD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b00
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// addi r23,r31,96
	r23.s64 = r31.s64 + 96;
	// lwz r10,224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// lfs f0,-7076(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -7076);
	f0.f64 = double(temp.f32);
	// stfs f0,228(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 228, temp.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82b55e24
	if (!cr6.gt) goto loc_82B55E24;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82B55E10:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82b51d18
	sub_82B51D18(ctx, base);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// bne 0x82b55e10
	if (!cr0.eq) goto loc_82B55E10;
loc_82B55E24:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82b51d18
	sub_82B51D18(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b52eb8
	sub_82B52EB8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b52f10
	sub_82B52F10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b533d0
	sub_82B533D0(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b55e64
	if (!cr6.eq) goto loc_82B55E64;
	// li r26,0
	r26.s64 = 0;
	// b 0x82b55e70
	goto loc_82B55E70;
loc_82B55E64:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r26,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r26.s64 = r11.s32 >> 3;
loc_82B55E70:
	// lwz r11,84(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 84);
	// li r21,116
	r21.s64 = 116;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b55e8c
	if (cr6.eq) goto loc_82B55E8C;
	// lwz r10,88(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 88);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw r11,r11,r21
	r11.s32 = r11.s32 / r21.s32;
loc_82B55E8C:
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// ble cr6,0x82b55eb4
	if (!cr6.gt) goto loc_82B55EB4;
	// lwz r11,84(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b55ea8
	if (!cr6.eq) goto loc_82B55EA8;
	// li r26,0
	r26.s64 = 0;
	// b 0x82b55eb4
	goto loc_82B55EB4;
loc_82B55EA8:
	// lwz r10,88(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 88);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw r26,r11,r21
	r26.s32 = r11.s32 / r21.s32;
loc_82B55EB4:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r25,132(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// addi r24,r11,-8104
	r24.s64 = r11.s64 + -8104;
	// beq cr6,0x82b56024
	if (cr6.eq) goto loc_82B56024;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r28,0
	r28.s64 = 0;
	// addi r27,r11,-14440
	r27.s64 = r11.s64 + -14440;
	// lfs f31,-13364(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13364);
	f31.f64 = double(temp.f32);
loc_82B55EE0:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r19,212(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// add r29,r11,r28
	r29.u64 = r11.u64 + r28.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// lwz r11,44(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 44);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mulli r11,r11,116
	r11.s64 = r11.s64 * 116;
	// add r29,r11,r25
	r29.u64 = r11.u64 + r25.u64;
	// lwz r19,212(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// lwz r11,44(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 44);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// mulli r11,r11,116
	r11.s64 = r11.s64 * 116;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x82b56014
	if (!cr6.eq) goto loc_82B56014;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x824d1d80
	sub_824D1D80(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r11.u32);
	// lwz r11,44(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 44);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// mulli r11,r11,116
	r11.s64 = r11.s64 * 116;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bl 0x830ba328
	sub_830BA328(ctx, base);
	// lwz r11,44(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 44);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// mulli r11,r11,116
	r11.s64 = r11.s64 * 116;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// bl 0x830ba4b8
	sub_830BA4B8(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 * f31.f64));
	// stfs f0,160(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x82dfb598
	sub_82DFB598(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r29,212(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x824d1e48
	sub_824D1E48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b51290
	sub_82B51290(ctx, base);
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
loc_82B56014:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(r30.u32, r26.u32, xer);
	// blt cr6,0x82b55ee0
	if (cr6.lt) goto loc_82B55EE0;
loc_82B56024:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b56038
	if (!cr6.eq) goto loc_82B56038;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82b56044
	goto loc_82B56044;
loc_82B56038:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	ctx.r10.s64 = r11.s32 >> 3;
loc_82B56044:
	// lwz r26,136(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x82b56058
	if (!cr6.eq) goto loc_82B56058;
	// li r11,0
	r11.s64 = 0;
	// b 0x82b56060
	goto loc_82B56060;
loc_82B56058:
	// subf r11,r25,r26
	r11.s64 = r26.s64 - r25.s64;
	// divw r11,r11,r21
	r11.s32 = r11.s32 / r21.s32;
loc_82B56060:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82b56264
	if (cr6.gt) goto loc_82B56264;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r30,212(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,22292
	r29.s64 = r11.s64 + 22292;
	// lwz r11,44(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 44);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82b56138
	if (!cr6.eq) goto loc_82B56138;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r28,212(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r30,r31,48
	r30.s64 = r31.s64 + 48;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// lwz r28,212(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x830ba4b8
	sub_830BA4B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x82b4f400
	sub_82B4F400(ctx, base);
	// b 0x82b5616c
	goto loc_82B5616C;
loc_82B56138:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r30,212(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
loc_82B5616C:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x82b5617c
	if (!cr6.eq) goto loc_82B5617C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82b56184
	goto loc_82B56184;
loc_82B5617C:
	// subf r11,r25,r26
	r11.s64 = r26.s64 - r25.s64;
	// divw r10,r11,r21
	ctx.r10.s32 = r11.s32 / r21.s32;
loc_82B56184:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b5619c
	if (cr6.eq) goto loc_82B5619C;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
loc_82B5619C:
	// lwz r9,44(r23)
	ctx.r9.u64 = PPC_LOAD_U32(r23.u32 + 44);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x82b56230
	if (!cr6.eq) goto loc_82B56230;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r28,212(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r30,r31,56
	r30.s64 = r31.s64 + 56;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// lwz r28,212(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x830ba4b8
	sub_830BA4B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82b4f400
	sub_82B4F400(ctx, base);
	// b 0x82b56264
	goto loc_82B56264;
loc_82B56230:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r30,212(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
loc_82B56264:
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b562e4
	if (cr0.eq) goto loc_82B562E4;
	// addi r27,r31,64
	r27.s64 = r31.s64 + 64;
	// li r30,0
	r30.s64 = 0;
	// li r29,0
	r29.s64 = 0;
loc_82B56278:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b562e4
	if (cr6.eq) goto loc_82B562E4;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82b562e4
	if (!cr6.lt) goto loc_82B562E4;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r22,212(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// add r28,r11,r29
	r28.u64 = r11.u64 + r29.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// b 0x82b56278
	goto loc_82B56278;
loc_82B562E4:
	// lbz r11,112(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + 112);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82b56368
	if (cr0.eq) goto loc_82B56368;
	// addi r27,r31,80
	r27.s64 = r31.s64 + 80;
	// li r30,0
	r30.s64 = 0;
	// li r29,0
	r29.s64 = 0;
loc_82B562FC:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b56368
	if (cr6.eq) goto loc_82B56368;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82b56368
	if (!cr6.lt) goto loc_82B56368;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r22,212(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// add r28,r11,r29
	r28.u64 = r11.u64 + r29.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// b 0x82b562fc
	goto loc_82B562FC;
loc_82B56368:
	// li r30,0
	r30.s64 = 0;
loc_82B5636C:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82b563d0
	if (cr6.eq) goto loc_82B563D0;
	// subf r11,r25,r26
	r11.s64 = r26.s64 - r25.s64;
	// divw r11,r11,r21
	r11.s32 = r11.s32 / r21.s32;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82b563d0
	if (!cr6.lt) goto loc_82B563D0;
	// lwz r10,44(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 44);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x82b563b8
	if (cr6.lt) goto loc_82B563B8;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b563a8
	if (cr6.eq) goto loc_82B563A8;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
loc_82B563A8:
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82b563bc
	if (cr6.lt) goto loc_82B563BC;
loc_82B563B8:
	// li r5,3
	ctx.r5.s64 = 3;
loc_82B563BC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b53e20
	sub_82B53E20(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x82b5636c
	goto loc_82B5636C;
loc_82B563D0:
	// lwz r28,116(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r30,0
	r30.s64 = 0;
	// lwz r27,120(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r29,r28,12
	r29.s64 = r28.s64 + 12;
loc_82B563E0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82b56474
	if (cr6.eq) goto loc_82B56474;
	// subf r11,r28,r27
	r11.s64 = r27.s64 - r28.s64;
	// divw r11,r11,r21
	r11.s32 = r11.s32 / r21.s32;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82b56474
	if (!cr6.lt) goto loc_82B56474;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r22,212(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// addi r4,r29,-8
	ctx.r4.s64 = r29.s64 + -8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r22,212(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,116
	r29.s64 = r29.s64 + 116;
	// b 0x82b563e0
	goto loc_82B563E0;
loc_82B56474:
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82b51758
	sub_82B51758(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// addi r30,r25,48
	r30.s64 = r25.s64 + 48;
loc_82B56484:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82b564c4
	if (cr6.eq) goto loc_82B564C4;
	// subf r11,r25,r26
	r11.s64 = r26.s64 - r25.s64;
	// divw r11,r11,r21
	r11.s32 = r11.s32 / r21.s32;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x82b564c4
	if (!cr6.lt) goto loc_82B564C4;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82b564b8
	if (cr6.lt) goto loc_82B564B8;
	// lwz r11,268(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82e562c8
	sub_82E562C8(ctx, base);
loc_82B564B8:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,116
	r30.s64 = r30.s64 + 116;
	// b 0x82b56484
	goto loc_82B56484;
loc_82B564C4:
	// li r30,0
	r30.s64 = 0;
	// addi r29,r28,64
	r29.s64 = r28.s64 + 64;
loc_82B564CC:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82b56518
	if (cr6.eq) goto loc_82B56518;
	// subf r11,r28,r27
	r11.s64 = r27.s64 - r28.s64;
	// divw r11,r11,r21
	r11.s32 = r11.s32 / r21.s32;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82b56518
	if (!cr6.lt) goto loc_82B56518;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82b5650c
	if (cr6.lt) goto loc_82B5650C;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 284);
	// bl 0x82b51758
	sub_82B51758(ctx, base);
	// lwz r11,284(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 284);
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82e562c8
	sub_82E562C8(ctx, base);
loc_82B5650C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,116
	r29.s64 = r29.s64 + 116;
	// b 0x82b564cc
	goto loc_82B564CC;
loc_82B56518:
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// bl 0x82b51758
	sub_82B51758(ctx, base);
	// lwz r4,72(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 72);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82b5653c
	if (cr6.lt) goto loc_82B5653C;
	// lwz r11,276(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// lwz r5,76(r23)
	ctx.r5.u64 = PPC_LOAD_U32(r23.u32 + 76);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82e562c8
	sub_82E562C8(ctx, base);
loc_82B5653C:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x82b56564
	if (cr6.eq) goto loc_82B56564;
	// lwz r11,56(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82b56564
	if (cr6.lt) goto loc_82B56564;
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// bl 0x82b51758
	sub_82B51758(ctx, base);
	// lwz r5,60(r20)
	ctx.r5.u64 = PPC_LOAD_U32(r20.u32 + 60);
	// lwz r4,56(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + 56);
	// b 0x82b56594
	goto loc_82B56594;
loc_82B56564:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82b565a0
	if (cr6.eq) goto loc_82B565A0;
	// subf r11,r28,r27
	r11.s64 = r27.s64 - r28.s64;
	// divw. r11,r11,r21
	r11.s32 = r11.s32 / r21.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b565a0
	if (cr0.eq) goto loc_82B565A0;
	// lwz r11,60(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 60);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82b565a0
	if (cr6.lt) goto loc_82B565A0;
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// bl 0x82b51758
	sub_82B51758(ctx, base);
	// lwz r5,60(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 60);
	// lwz r4,56(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 56);
loc_82B56594:
	// lwz r11,292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82e562c8
	sub_82E562C8(ctx, base);
loc_82B565A0:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// addi r30,r10,-8152
	r30.s64 = ctx.r10.s64 + -8152;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x830bcca8
	sub_830BCCA8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b565f0
	if (cr0.eq) goto loc_82B565F0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830bf210
	sub_830BF210(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// stfs f0,260(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 260, temp.u32);
loc_82B565F0:
	// lwa r11,44(r23)
	r11.s64 = int32_t(PPC_LOAD_U32(r23.u32 + 44));
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,22156(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22156);
	f0.f64 = double(temp.f32);
	// lfs f13,-24688(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24688);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmsubs f0,f12,f0,f13
	f0.f64 = double(float(ctx.f12.f64 * f0.f64 - ctx.f13.f64));
	// stfs f0,256(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 256, temp.u32);
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b52808
	sub_82B52808(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b52808
	sub_82B52808(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x831b0b50
	return;
}

__attribute__((alias("__imp__sub_82B56640"))) PPC_WEAK_FUNC(sub_82B56640);
PPC_FUNC_IMPL(__imp__sub_82B56640) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82b55dd8
	sub_82B55DD8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82b579a8
	sub_82B579A8(ctx, base);
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

__attribute__((alias("__imp__sub_82B56690"))) PPC_WEAK_FUNC(sub_82B56690);
PPC_FUNC_IMPL(__imp__sub_82B56690) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8024(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8024);
	// bl 0x82df98c0
	sub_82DF98C0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b4e608
	sub_82B4E608(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r11,224(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 224);
	// addi r26,r30,96
	r26.s64 = r30.s64 + 96;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r31,r26
	r31.u64 = r26.u64;
	// ble cr6,0x82b56700
	if (!cr6.gt) goto loc_82B56700;
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(r11.u32, 0);
loc_82B566EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b51d18
	sub_82B51D18(ctx, base);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bne 0x82b566ec
	if (!cr0.eq) goto loc_82B566EC;
loc_82B56700:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r28,44(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r27,40(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// rlwinm. r9,r11,0,11,11
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f31,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f31.f64 = double(temp.f32);
	// beq 0x82b56740
	if (cr0.eq) goto loc_82B56740;
	// lfs f0,236(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 236);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bge cr6,0x82b56768
	if (!cr6.lt) goto loc_82B56768;
	// li r4,2
	ctx.r4.s64 = 2;
loc_82B5672C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b52b08
	sub_82B52B08(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-21808(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -21808);
	f0.f64 = double(temp.f32);
	// b 0x82b56764
	goto loc_82B56764;
loc_82B56740:
	// rlwinm. r11,r11,0,10,10
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b5675c
	if (cr0.eq) goto loc_82B5675C;
	// lfs f0,236(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 236);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bge cr6,0x82b56768
	if (!cr6.lt) goto loc_82B56768;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82b5672c
	goto loc_82B5672C;
loc_82B5675C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-24780(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24780);
	f0.f64 = double(temp.f32);
loc_82B56764:
	// stfs f0,236(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 236, temp.u32);
loc_82B56768:
	// lfs f0,236(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 236);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// blt cr6,0x82b5677c
	if (cr6.lt) goto loc_82B5677C;
	// fsubs f0,f0,f30
	f0.f64 = double(float(f0.f64 - f30.f64));
	// stfs f0,236(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 236, temp.u32);
loc_82B5677C:
	// lis r29,-31952
	r29.s64 = -2094006272;
	// lfs f0,30552(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 30552);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x82b56794
	if (!cr6.gt) goto loc_82B56794;
	// fsubs f0,f0,f30
	f0.f64 = double(float(f0.f64 - f30.f64));
	// stfs f0,30552(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 30552, temp.u32);
loc_82B56794:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f31.f64);
	// bgt cr6,0x82b5687c
	if (cr6.gt) goto loc_82B5687C;
	// lwz r11,16(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// rlwinm. r11,r11,0,12,12
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b56820
	if (cr0.eq) goto loc_82B56820;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b567bc
	if (!cr6.eq) goto loc_82B567BC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82b567cc
	goto loc_82B567CC;
loc_82B567BC:
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// li r9,116
	ctx.r9.s64 = 116;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r11,r9
	ctx.r10.s32 = r11.s32 / ctx.r9.s32;
loc_82B567CC:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82b56820
	if (!cr6.lt) goto loc_82B56820;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r9.u32);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b567f8
	if (!cr6.eq) goto loc_82B567F8;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82b56804
	goto loc_82B56804;
loc_82B567F8:
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	ctx.r10.s64 = r11.s32 >> 3;
loc_82B56804:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// ble cr6,0x82b56820
	if (!cr6.gt) goto loc_82B56820;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
loc_82B56820:
	// lwz r11,16(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// rlwinm. r11,r11,0,13,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b56850
	if (cr0.eq) goto loc_82B56850;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82b56850
	if (!cr6.gt) goto loc_82B56850;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82b56850
	if (!cr6.lt) goto loc_82B56850;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
loc_82B56850:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b54e50
	sub_82B54E50(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b5687c
	if (cr0.eq) goto loc_82B5687C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-24412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24412);
	f0.f64 = double(temp.f32);
	// stfs f0,30552(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 30552, temp.u32);
loc_82B5687C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b52178
	sub_82B52178(ctx, base);
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b568ec
	if (cr0.eq) goto loc_82B568EC;
	// lwz r11,224(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 224);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82b568b0
	if (!cr6.gt) goto loc_82B568B0;
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(r11.u32, 0);
loc_82B568A4:
	// bl 0x82b51d18
	sub_82B51D18(ctx, base);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82b568a4
	if (!cr0.eq) goto loc_82B568A4;
loc_82B568B0:
	// bl 0x82b51d18
	sub_82B51D18(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b568ec
	if (cr0.eq) goto loc_82B568EC;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x82b568e0
	if (cr6.eq) goto loc_82B568E0;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// beq cr6,0x82b568e0
	if (cr6.eq) goto loc_82B568E0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b52b08
	sub_82B52B08(ctx, base);
	// b 0x82b568ec
	goto loc_82B568EC;
loc_82B568E0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b546a0
	sub_82B546A0(ctx, base);
loc_82B568EC:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b56904
	if (cr0.eq) goto loc_82B56904;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b546a0
	sub_82B546A0(ctx, base);
loc_82B56904:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82B56918"))) PPC_WEAK_FUNC(sub_82B56918);
PPC_FUNC_IMPL(__imp__sub_82B56918) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// bl 0x830ba280
	sub_830BA280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b56ab0
	if (cr0.eq) goto loc_82B56AB0;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82b56ab0
	if (!cr0.eq) goto loc_82B56AB0;
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82b56ab0
	if (!cr0.eq) goto loc_82B56AB0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82b56690
	sub_82B56690(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,232(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 232);
	f0.f64 = double(temp.f32);
	// lfs f31,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x82b56994
	if (!cr6.gt) goto loc_82B56994;
	// fsubs f0,f0,f30
	f0.f64 = double(float(f0.f64 - f30.f64));
	// stfs f0,232(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 232, temp.u32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bgt cr6,0x82b56994
	if (cr6.gt) goto loc_82B56994;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b55dd8
	sub_82B55DD8(ctx, base);
loc_82B56994:
	// lfs f0,228(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 228);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x82b56ab0
	if (!cr6.gt) goto loc_82B56AB0;
	// lwz r11,224(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 224);
	// fsubs f0,f0,f30
	f0.f64 = double(float(f0.f64 - f30.f64));
	// stfs f0,228(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 228, temp.u32);
	// addi r31,r30,96
	r31.s64 = r30.s64 + 96;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82b569d0
	if (!cr6.gt) goto loc_82B569D0;
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(r11.u32, 0);
loc_82B569BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b51d18
	sub_82B51D18(ctx, base);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bne 0x82b569bc
	if (!cr0.eq) goto loc_82B569BC;
loc_82B569D0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b56ab0
	if (cr6.eq) goto loc_82B56AB0;
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f31.f64);
	// bgt cr6,0x82b56ab0
	if (cr6.gt) goto loc_82B56AB0;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b56ab0
	if (cr6.eq) goto loc_82B56AB0;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// li r9,116
	ctx.r9.s64 = 116;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x82b56ab0
	if (!cr6.gt) goto loc_82B56AB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b51d18
	sub_82B51D18(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// addi r29,r11,18236
	r29.s64 = r11.s64 + 18236;
	// beq cr6,0x82b56a60
	if (cr6.eq) goto loc_82B56A60;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r28,212(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b51d18
	sub_82B51D18(ctx, base);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
loc_82B56A60:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r30,212(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82b4f660
	sub_82B4F660(ctx, base);
loc_82B56AB0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82B56AC0"))) PPC_WEAK_FUNC(sub_82B56AC0);
PPC_FUNC_IMPL(__imp__sub_82B56AC0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r29,r31
	r29.u64 = r31.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b56b08
	if (cr6.eq) goto loc_82B56B08;
loc_82B56AE8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82b56afc
	if (cr6.eq) goto loc_82B56AFC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b52f68
	sub_82B52F68(ctx, base);
loc_82B56AFC:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,116
	r30.s64 = r30.s64 + 116;
	// bne 0x82b56ae8
	if (!cr0.eq) goto loc_82B56AE8;
loc_82B56B08:
	// mulli r11,r31,116
	r11.s64 = r31.s64 * 116;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82B56B18"))) PPC_WEAK_FUNC(sub_82B56B18);
PPC_FUNC_IMPL(__imp__sub_82B56B18) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplw cr6,r27,r28
	cr6.compare<uint32_t>(r27.u32, r28.u32, xer);
	// beq cr6,0x82b56d34
	if (cr6.eq) goto loc_82B56D34;
	// lwz r30,4(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82b56b54
	if (cr6.eq) goto loc_82B56B54;
	// lwz r29,8(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// li r26,116
	r26.s64 = 116;
	// subf r11,r30,r29
	r11.s64 = r29.s64 - r30.s64;
	// divw. r10,r11,r26
	ctx.r10.s32 = r11.s32 / r26.s32;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82b56b6c
	if (!cr0.eq) goto loc_82B56B6C;
loc_82B56B54:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r6,8(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// bl 0x82b526a0
	sub_82B526A0(ctx, base);
	// b 0x82b56d34
	goto loc_82B56D34;
loc_82B56B6C:
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b56b80
	if (!cr6.eq) goto loc_82B56B80;
	// li r11,0
	r11.s64 = 0;
	// b 0x82b56b8c
	goto loc_82B56B8C;
loc_82B56B80:
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// divw r11,r11,r26
	r11.s32 = r11.s32 / r26.s32;
loc_82B56B8C:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82b56bf0
	if (cr6.gt) goto loc_82B56BF0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82b56bac
	goto loc_82B56BAC;
loc_82B56B9C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82b56d40
	sub_82B56D40(ctx, base);
	// addi r30,r30,116
	r30.s64 = r30.s64 + 116;
	// addi r31,r31,116
	r31.s64 = r31.s64 + 116;
loc_82B56BAC:
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x82b56b9c
	if (!cr6.eq) goto loc_82B56B9C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// bl 0x82b52648
	sub_82B52648(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b56bdc
	if (cr6.eq) goto loc_82B56BDC;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw r11,r11,r26
	r11.s32 = r11.s32 / r26.s32;
loc_82B56BDC:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// mulli r11,r11,116
	r11.s64 = r11.s64 * 116;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r11.u32);
	// b 0x82b56d34
	goto loc_82B56D34;
loc_82B56BF0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b56c00
	if (!cr6.eq) goto loc_82B56C00;
	// li r11,0
	r11.s64 = 0;
	// b 0x82b56c0c
	goto loc_82B56C0C;
loc_82B56C00:
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// divw r11,r11,r26
	r11.s32 = r11.s32 / r26.s32;
loc_82B56C0C:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82b56ca8
	if (cr6.gt) goto loc_82B56CA8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b56c24
	if (!cr6.eq) goto loc_82B56C24;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82b56c30
	goto loc_82B56C30;
loc_82B56C24:
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// divw r10,r11,r26
	ctx.r10.s32 = r11.s32 / r26.s32;
loc_82B56C30:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mulli r10,r10,116
	ctx.r10.s64 = ctx.r10.s64 * 116;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + r11.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r11
	r30.u64 = r11.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x82b56c68
	if (cr6.eq) goto loc_82B56C68;
loc_82B56C4C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b56d40
	sub_82B56D40(ctx, base);
	// addi r30,r30,116
	r30.s64 = r30.s64 + 116;
	// addi r29,r29,116
	r29.s64 = r29.s64 + 116;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// bne cr6,0x82b56c4c
	if (!cr6.eq) goto loc_82B56C4C;
loc_82B56C68:
	// lwz r29,8(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// lwz r31,8(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// beq cr6,0x82b56ca0
	if (cr6.eq) goto loc_82B56CA0;
loc_82B56C7C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b56c90
	if (cr6.eq) goto loc_82B56C90;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b52f68
	sub_82B52F68(ctx, base);
loc_82B56C90:
	// addi r30,r30,116
	r30.s64 = r30.s64 + 116;
	// addi r31,r31,116
	r31.s64 = r31.s64 + 116;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x82b56c7c
	if (!cr6.eq) goto loc_82B56C7C;
loc_82B56CA0:
	// stw r31,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r31.u32);
	// b 0x82b56d34
	goto loc_82B56D34;
loc_82B56CA8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b56ccc
	if (cr6.eq) goto loc_82B56CCC;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// bl 0x82b52648
	sub_82B52648(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
loc_82B56CCC:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b56ce0
	if (!cr6.eq) goto loc_82B56CE0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82b56cec
	goto loc_82B56CEC;
loc_82B56CE0:
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw r4,r11,r26
	ctx.r4.s32 = r11.s32 / r26.s32;
loc_82B56CEC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82b528b8
	sub_82B528B8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b56d34
	if (cr0.eq) goto loc_82B56D34;
	// lwz r29,8(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r31,4(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r30,4(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// b 0x82b56d28
	goto loc_82B56D28;
loc_82B56D0C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82b56d20
	if (cr6.eq) goto loc_82B56D20;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b52f68
	sub_82B52F68(ctx, base);
loc_82B56D20:
	// addi r31,r31,116
	r31.s64 = r31.s64 + 116;
	// addi r30,r30,116
	r30.s64 = r30.s64 + 116;
loc_82B56D28:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x82b56d0c
	if (!cr6.eq) goto loc_82B56D0C;
	// stw r30,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r30.u32);
loc_82B56D34:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82B56D40"))) PPC_WEAK_FUNC(sub_82B56D40);
PPC_FUNC_IMPL(__imp__sub_82B56D40) {
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
	// bl 0x830ba328
	sub_830BA328(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// bl 0x830ba328
	sub_830BA328(ctx, base);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r30,80
	ctx.r4.s64 = r30.s64 + 80;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// bl 0x82b56b18
	sub_82B56B18(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r30,96
	ctx.r4.s64 = r30.s64 + 96;
	// bl 0x82b56b18
	sub_82B56B18(ctx, base);
	// lbz r11,112(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,112(r31)
	PPC_STORE_U8(r31.u32 + 112, r11.u8);
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

__attribute__((alias("__imp__sub_82B56E30"))) PPC_WEAK_FUNC(sub_82B56E30);
PPC_FUNC_IMPL(__imp__sub_82B56E30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b10
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// bl 0x82b52f68
	sub_82B52F68(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r22,116
	r22.s64 = 116;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b56e6c
	if (!cr6.eq) goto loc_82B56E6C;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82b56e78
	goto loc_82B56E78;
loc_82B56E6C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r8,r11,r22
	ctx.r8.s32 = r11.s32 / r22.s32;
loc_82B56E78:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82b57174
	if (cr6.eq) goto loc_82B57174;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b56e90
	if (!cr6.eq) goto loc_82B56E90;
	// li r11,0
	r11.s64 = 0;
	// b 0x82b56e9c
	goto loc_82B56E9C;
loc_82B56E90:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
loc_82B56E9C:
	// lis r9,564
	ctx.r9.s64 = 36962304;
	// ori r9,r9,63276
	ctx.r9.u64 = ctx.r9.u64 | 63276;
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// bge cr6,0x82b56eb8
	if (!cr6.lt) goto loc_82B56EB8;
	// bl 0x8284e0a0
	sub_8284E0A0(ctx, base);
	// b 0x82b57174
	goto loc_82B57174;
loc_82B56EB8:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b56ec8
	if (!cr6.eq) goto loc_82B56EC8;
	// li r11,0
	r11.s64 = 0;
	// b 0x82b56ed4
	goto loc_82B56ED4;
loc_82B56EC8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
loc_82B56ED4:
	// add r11,r11,r23
	r11.u64 = r11.u64 + r23.u64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bge cr6,0x82b57044
	if (!cr6.lt) goto loc_82B57044;
	// rlwinm r11,r8,31,1,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x82b56ef8
	if (!cr6.lt) goto loc_82B56EF8;
	// li r11,0
	r11.s64 = 0;
	// b 0x82b56efc
	goto loc_82B56EFC;
loc_82B56EF8:
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
loc_82B56EFC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b56f0c
	if (!cr6.eq) goto loc_82B56F0C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82b56f18
	goto loc_82B56F18;
loc_82B56F0C:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r9,r9,r22
	ctx.r9.s32 = ctx.r9.s32 / r22.s32;
loc_82B56F18:
	// add r9,r9,r23
	ctx.r9.u64 = ctx.r9.u64 + r23.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82b56f44
	if (!cr6.lt) goto loc_82B56F44;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b56f34
	if (!cr6.eq) goto loc_82B56F34;
	// li r11,0
	r11.s64 = 0;
	// b 0x82b56f40
	goto loc_82B56F40;
loc_82B56F34:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
loc_82B56F40:
	// add r11,r11,r23
	r11.u64 = r11.u64 + r23.u64;
loc_82B56F44:
	// mulli r24,r11,116
	r24.s64 = r11.s64 * 116;
	// lis r25,-31946
	r25.s64 = -2093613056;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// addi r4,r11,2300
	ctx.r4.s64 = r11.s64 + 2300;
	// li r5,45
	ctx.r5.s64 = 45;
	// lwz r3,6512(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 6512);
	// bl 0x82df9d90
	sub_82DF9D90(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r29,r27
	r29.u64 = r27.u64;
	// b 0x82b56f90
	goto loc_82B56F90;
loc_82B56F74:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82b56f88
	if (cr6.eq) goto loc_82B56F88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b52f68
	sub_82B52F68(ctx, base);
loc_82B56F88:
	// addi r30,r30,116
	r30.s64 = r30.s64 + 116;
	// addi r29,r29,116
	r29.s64 = r29.s64 + 116;
loc_82B56F90:
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(r30.u32, r26.u32, xer);
	// bne cr6,0x82b56f74
	if (!cr6.eq) goto loc_82B56F74;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b56ac0
	sub_82B56AC0(ctx, base);
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r26,r29
	cr6.compare<uint32_t>(r26.u32, r29.u32, xer);
	// beq cr6,0x82b56fe4
	if (cr6.eq) goto loc_82B56FE4;
	// subf r28,r30,r26
	r28.s64 = r26.s64 - r30.s64;
loc_82B56FC0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82b56fd4
	if (cr6.eq) goto loc_82B56FD4;
	// add r4,r28,r30
	ctx.r4.u64 = r28.u64 + r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b52f68
	sub_82B52F68(ctx, base);
loc_82B56FD4:
	// addi r30,r30,116
	r30.s64 = r30.s64 + 116;
	// add r11,r28,r30
	r11.u64 = r28.u64 + r30.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x82b56fc0
	if (!cr6.eq) goto loc_82B56FC0;
loc_82B56FE4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b56ff8
	if (!cr6.eq) goto loc_82B56FF8;
	// li r11,0
	r11.s64 = 0;
	// b 0x82b57004
	goto loc_82B57004;
loc_82B56FF8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
loc_82B57004:
	// add r30,r11,r23
	r30.u64 = r11.u64 + r23.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b57028
	if (cr6.eq) goto loc_82B57028;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82b52648
	sub_82B52648(ctx, base);
	// lwz r3,6512(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 6512);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
loc_82B57028:
	// mulli r11,r30,116
	r11.s64 = r30.s64 * 116;
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// add r10,r24,r27
	ctx.r10.u64 = r24.u64 + r27.u64;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82b57174
	goto loc_82B57174;
loc_82B57044:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r26,r30
	r11.s64 = r30.s64 - r26.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// bge cr6,0x82b570e4
	if (!cr6.lt) goto loc_82B570E4;
	// mulli r29,r23,116
	r29.s64 = r23.s64 * 116;
	// add r28,r29,r26
	r28.u64 = r29.u64 + r26.u64;
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(r26.u32, r30.u32, xer);
	// beq cr6,0x82b57090
	if (cr6.eq) goto loc_82B57090;
	// subf r27,r29,r28
	r27.s64 = r28.s64 - r29.s64;
loc_82B5706C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82b57080
	if (cr6.eq) goto loc_82B57080;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82b52f68
	sub_82B52F68(ctx, base);
loc_82B57080:
	// addi r27,r27,116
	r27.s64 = r27.s64 + 116;
	// addi r28,r28,116
	r28.s64 = r28.s64 + 116;
	// cmplw cr6,r27,r30
	cr6.compare<uint32_t>(r27.u32, r30.u32, xer);
	// bne cr6,0x82b5706c
	if (!cr6.eq) goto loc_82B5706C;
loc_82B57090:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r11,r26,r4
	r11.s64 = ctx.r4.s64 - r26.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
	// subf r5,r11,r23
	ctx.r5.s64 = r23.s64 - r11.s64;
	// bl 0x82b56ac0
	sub_82B56AC0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r28,r26
	r28.u64 = r26.u64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// subf r30,r29,r11
	r30.s64 = r11.s64 - r29.s64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(r26.u32, r30.u32, xer);
	// beq cr6,0x82b57174
	if (cr6.eq) goto loc_82B57174;
loc_82B570C8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82b56d40
	sub_82B56D40(ctx, base);
	// addi r28,r28,116
	r28.s64 = r28.s64 + 116;
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(r28.u32, r30.u32, xer);
	// bne cr6,0x82b570c8
	if (!cr6.eq) goto loc_82B570C8;
	// b 0x82b57174
	goto loc_82B57174;
loc_82B570E4:
	// mulli r25,r23,116
	r25.s64 = r23.s64 * 116;
	// subf r29,r25,r30
	r29.s64 = r30.s64 - r25.s64;
	// mr r28,r30
	r28.u64 = r30.u64;
	// mr r27,r29
	r27.u64 = r29.u64;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// beq cr6,0x82b57120
	if (cr6.eq) goto loc_82B57120;
loc_82B570FC:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82b57110
	if (cr6.eq) goto loc_82B57110;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82b52f68
	sub_82B52F68(ctx, base);
loc_82B57110:
	// addi r27,r27,116
	r27.s64 = r27.s64 + 116;
	// addi r28,r28,116
	r28.s64 = r28.s64 + 116;
	// cmplw cr6,r27,r30
	cr6.compare<uint32_t>(r27.u32, r30.u32, xer);
	// bne cr6,0x82b570fc
	if (!cr6.eq) goto loc_82B570FC;
loc_82B57120:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplw cr6,r26,r29
	cr6.compare<uint32_t>(r26.u32, r29.u32, xer);
	// beq cr6,0x82b5714c
	if (cr6.eq) goto loc_82B5714C;
	// subf r30,r29,r30
	r30.s64 = r30.s64 - r29.s64;
loc_82B57134:
	// addi r31,r31,-116
	r31.s64 = r31.s64 + -116;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r30,r31
	ctx.r3.u64 = r30.u64 + r31.u64;
	// bl 0x82b56d40
	sub_82B56D40(ctx, base);
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(r31.u32, r26.u32, xer);
	// bne cr6,0x82b57134
	if (!cr6.eq) goto loc_82B57134;
loc_82B5714C:
	// add r30,r25,r26
	r30.u64 = r25.u64 + r26.u64;
	// mr r31,r26
	r31.u64 = r26.u64;
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(r26.u32, r30.u32, xer);
	// beq cr6,0x82b57174
	if (cr6.eq) goto loc_82B57174;
loc_82B5715C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b56d40
	sub_82B56D40(ctx, base);
	// addi r31,r31,116
	r31.s64 = r31.s64 + 116;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82b5715c
	if (!cr6.eq) goto loc_82B5715C;
loc_82B57174:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82b52808
	sub_82B52808(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82b52808
	sub_82B52808(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_82B571A0"))) PPC_WEAK_FUNC(sub_82B571A0);
PPC_FUNC_IMPL(__imp__sub_82B571A0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b571d8
	if (cr6.eq) goto loc_82B571D8;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r10,116
	ctx.r10.s64 = 116;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// divw. r9,r9,r10
	ctx.r9.s32 = ctx.r9.s32 / ctx.r10.s32;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82b571e0
	if (!cr0.eq) goto loc_82B571E0;
loc_82B571D8:
	// li r30,0
	r30.s64 = 0;
	// b 0x82b571e8
	goto loc_82B571E8;
loc_82B571E0:
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// divw r30,r11,r10
	r30.s32 = r11.s32 / ctx.r10.s32;
loc_82B571E8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b56e30
	sub_82B56E30(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mulli r11,r30,116
	r11.s64 = r30.s64 * 116;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B57210"))) PPC_WEAK_FUNC(sub_82B57210);
PPC_FUNC_IMPL(__imp__sub_82B57210) {
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
	// li r9,116
	ctx.r9.s64 = 116;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b57240
	if (!cr6.eq) goto loc_82B57240;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82b5724c
	goto loc_82B5724C;
loc_82B57240:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r10,r9
	ctx.r10.s32 = ctx.r10.s32 / ctx.r9.s32;
loc_82B5724C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b57288
	if (cr6.eq) goto loc_82B57288;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r11,r11,r8
	r11.s64 = ctx.r8.s64 - r11.s64;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82b57288
	if (!cr6.lt) goto loc_82B57288;
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82b5727c
	if (cr6.eq) goto loc_82B5727C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b52f68
	sub_82B52F68(ctx, base);
loc_82B5727C:
	// addi r11,r30,116
	r11.s64 = r30.s64 + 116;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82b5729c
	goto loc_82B5729C;
loc_82B57288:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b571a0
	sub_82B571A0(ctx, base);
loc_82B5729C:
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

__attribute__((alias("__imp__sub_82B572B8"))) PPC_WEAK_FUNC(sub_82B572B8);
PPC_FUNC_IMPL(__imp__sub_82B572B8) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b10
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// bl 0x82b53058
	sub_82B53058(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,-23007
	r30.s64 = r11.s64 + -23007;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82dfafc0
	sub_82DFAFC0(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b57364
	if (cr0.eq) goto loc_82B57364;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// bl 0x82b51e48
	sub_82B51E48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x830ba328
	sub_830BA328(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
loc_82B57364:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82dfafc0
	sub_82DFAFC0(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b573d4
	if (cr0.eq) goto loc_82B573D4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x82b51e48
	sub_82B51E48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x830ba328
	sub_830BA328(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
loc_82B573D4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(r29.s32, 6, xer);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r29.u32);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r28.u32);
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r27.u32);
	// stw r26,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r26.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r25,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r25.u32);
	// ble cr6,0x82b57400
	if (!cr6.gt) goto loc_82B57400;
	// li r11,0
	r11.s64 = 0;
loc_82B57400:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// beq 0x82b57458
	if (cr0.eq) goto loc_82B57458;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82b57210
	sub_82B57210(ctx, base);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82B57418:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r31,r11,-116
	r31.s64 = r11.s64 + -116;
	// bl 0x82b52808
	sub_82B52808(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82b52808
	sub_82B52808(ctx, base);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831b0b60
	return;
loc_82B57458:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82b57210
	sub_82B57210(ctx, base);
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x82b57418
	goto loc_82B57418;
}

__attribute__((alias("__imp__sub_82B57468"))) PPC_WEAK_FUNC(sub_82B57468);
PPC_FUNC_IMPL(__imp__sub_82B57468) {
	PPC_FUNC_PROLOGUE();
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r11,96(r11)
	PPC_STORE_U32(r11.u32 + 96, r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// addi r31,r11,96
	r31.s64 = r11.s64 + 96;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// bl 0x82b572b8
	sub_82B572B8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82B57500"))) PPC_WEAK_FUNC(sub_82B57500);
PPC_FUNC_IMPL(__imp__sub_82B57500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r11,-1
	r11.s64 = -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,22312
	ctx.r10.s64 = ctx.r10.s64 + 22312;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B57528"))) PPC_WEAK_FUNC(sub_82B57528);
PPC_FUNC_IMPL(__imp__sub_82B57528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r11,r11,22312
	r11.s64 = r11.s64 + 22312;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B57538"))) PPC_WEAK_FUNC(sub_82B57538);
PPC_FUNC_IMPL(__imp__sub_82B57538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B57548"))) PPC_WEAK_FUNC(sub_82B57548);
PPC_FUNC_IMPL(__imp__sub_82B57548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B57558"))) PPC_WEAK_FUNC(sub_82B57558);
PPC_FUNC_IMPL(__imp__sub_82B57558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,28,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B57568"))) PPC_WEAK_FUNC(sub_82B57568);
PPC_FUNC_IMPL(__imp__sub_82B57568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B57578"))) PPC_WEAK_FUNC(sub_82B57578);
PPC_FUNC_IMPL(__imp__sub_82B57578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82b575a8
	if (cr0.eq) goto loc_82B575A8;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// andi. r10,r11,11
	ctx.r10.u64 = r11.u64 & 11;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// b 0x82b575c4
	goto loc_82B575C4;
loc_82B575A8:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82b575d0
	if (cr0.eq) goto loc_82B575D0;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x6;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
loc_82B575C4:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B575D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B575E8"))) PPC_WEAK_FUNC(sub_82B575E8);
PPC_FUNC_IMPL(__imp__sub_82B575E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,26,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x30;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B57600"))) PPC_WEAK_FUNC(sub_82B57600);
PPC_FUNC_IMPL(__imp__sub_82B57600) {
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
	// lis r11,-32244
	r11.s64 = -2113142784;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,22312
	r11.s64 = r11.s64 + 22312;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82b5762c
	if (cr0.eq) goto loc_82B5762C;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_82B5762C:
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

__attribute__((alias("__imp__sub_82B57648"))) PPC_WEAK_FUNC(sub_82B57648);
PPC_FUNC_IMPL(__imp__sub_82B57648) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r30,108(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b57690
	if (cr0.eq) goto loc_82B57690;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// std r29,4(r3)
	PPC_STORE_U64(ctx.r3.u32 + 4, r29.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,22344
	r11.s64 = r11.s64 + 22344;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82b57694
	goto loc_82B57694;
loc_82B57690:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82B57694:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8230f778
	sub_8230F778(ctx, base);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8230f7d0
	sub_8230F7D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x8230f7d0
	sub_8230F7D0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82310458
	sub_82310458(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B576F8"))) PPC_WEAK_FUNC(sub_82B576F8);
PPC_FUNC_IMPL(__imp__sub_82B576F8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r30,108(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82b57740
	if (cr0.eq) goto loc_82B57740;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// std r29,4(r3)
	PPC_STORE_U64(ctx.r3.u32 + 4, r29.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,22344
	r11.s64 = r11.s64 + 22344;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82b57744
	goto loc_82B57744;
loc_82B57740:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82B57744:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8230f778
	sub_8230F778(ctx, base);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8230f7d0
	sub_8230F7D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x8230f7d0
	sub_8230F7D0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82310458
	sub_82310458(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B577A8"))) PPC_WEAK_FUNC(sub_82B577A8);
PPC_FUNC_IMPL(__imp__sub_82B577A8) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82b577ec
	if (cr6.eq) goto loc_82B577EC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82b52aa0
	sub_82B52AA0(ctx, base);
loc_82B577EC:
	// li r11,-1
	r11.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
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

__attribute__((alias("__imp__sub_82B57818"))) PPC_WEAK_FUNC(sub_82B57818);
PPC_FUNC_IMPL(__imp__sub_82B57818) {
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
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82b5785c
	if (cr6.eq) goto loc_82B5785C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82b52aa0
	sub_82B52AA0(ctx, base);
loc_82B5785C:
	// li r11,-1
	r11.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
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

__attribute__((alias("__imp__sub_82B57888"))) PPC_WEAK_FUNC(sub_82B57888);
PPC_FUNC_IMPL(__imp__sub_82B57888) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b577a8
	sub_82B577A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b57818
	sub_82B57818(ctx, base);
	// lis r11,-32075
	r11.s64 = -2102067200;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r11,r11,30072
	r11.s64 = r11.s64 + 30072;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82b57648
	sub_82B57648(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
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

__attribute__((alias("__imp__sub_82B57918"))) PPC_WEAK_FUNC(sub_82B57918);
PPC_FUNC_IMPL(__imp__sub_82B57918) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b577a8
	sub_82B577A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b57818
	sub_82B57818(ctx, base);
	// lis r11,-32075
	r11.s64 = -2102067200;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r11,r11,30072
	r11.s64 = r11.s64 + 30072;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x830ba228
	sub_830BA228(ctx, base);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82b576f8
	sub_82B576F8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
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

__attribute__((alias("__imp__sub_82B579A8"))) PPC_WEAK_FUNC(sub_82B579A8);
PPC_FUNC_IMPL(__imp__sub_82B579A8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82b579e4
	if (cr0.eq) goto loc_82B579E4;
	// li r31,0
	r31.s64 = 0;
loc_82B579D0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_82B579E4:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82b57a14
	if (cr0.eq) goto loc_82B57A14;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82b57a14
	if (!cr0.eq) goto loc_82B57A14;
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b57a14
	if (cr0.eq) goto loc_82B57A14;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b57818
	sub_82B57818(ctx, base);
loc_82B57A14:
	// li r11,2
	r11.s64 = 2;
	// clrlwi. r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// beq 0x82b57a3c
	if (cr0.eq) goto loc_82B57A3C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b57888
	sub_82B57888(ctx, base);
loc_82B57A3C:
	// li r31,1
	r31.s64 = 1;
	// b 0x82b579d0
	goto loc_82B579D0;
}

__attribute__((alias("__imp__sub_82B57A48"))) PPC_WEAK_FUNC(sub_82B57A48);
PPC_FUNC_IMPL(__imp__sub_82B57A48) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82b57a88
	if (cr0.eq) goto loc_82B57A88;
	// li r31,0
	r31.s64 = 0;
loc_82B57A74:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830ba1d8
	sub_830BA1D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_82B57A88:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82b57ab8
	if (cr0.eq) goto loc_82B57AB8;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// clrlwi. r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// beq 0x82b57ab8
	if (cr0.eq) goto loc_82B57AB8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b577a8
	sub_82B577A8(ctx, base);
loc_82B57AB8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi. r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// beq 0x82b57b08
	if (cr0.eq) goto loc_82B57B08;
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq 0x82b57af8
	if (cr0.eq) goto loc_82B57AF8;
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b57888
	sub_82B57888(ctx, base);
	// b 0x82b57b08
	goto loc_82B57B08;
loc_82B57AF8:
	// bl 0x82332328
	sub_82332328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b57918
	sub_82B57918(ctx, base);
loc_82B57B08:
	// li r31,1
	r31.s64 = 1;
	// b 0x82b57a74
	goto loc_82B57A74;
}

__attribute__((alias("__imp__sub_82B57B10"))) PPC_WEAK_FUNC(sub_82B57B10);
PPC_FUNC_IMPL(__imp__sub_82B57B10) {
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
	// bl 0x82e626b8
	sub_82E626B8(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,22356
	r11.s64 = r11.s64 + 22356;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_82B57B60"))) PPC_WEAK_FUNC(sub_82B57B60);
PPC_FUNC_IMPL(__imp__sub_82B57B60) {
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
	// bl 0x82e626b8
	sub_82E626B8(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// addi r11,r11,22364
	r11.s64 = r11.s64 + 22364;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_82B57BB8"))) PPC_WEAK_FUNC(sub_82B57BB8);
PPC_FUNC_IMPL(__imp__sub_82B57BB8) {
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
	// bl 0x82e626d8
	sub_82E626D8(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,22372
	r11.s64 = r11.s64 + 22372;
	// stb r10,28(r31)
	PPC_STORE_U8(r31.u32 + 28, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_82B57C10"))) PPC_WEAK_FUNC(sub_82B57C10);
PPC_FUNC_IMPL(__imp__sub_82B57C10) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// bl 0x82e626b8
	sub_82E626B8(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// stfs f31,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f30,32(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// addi r11,r11,22380
	r11.s64 = r11.s64 + 22380;
	// stfs f29,36(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f29,-48(r1)
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

__attribute__((alias("__imp__sub_82B57C90"))) PPC_WEAK_FUNC(sub_82B57C90);
PPC_FUNC_IMPL(__imp__sub_82B57C90) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// bl 0x82e626d8
	sub_82E626D8(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,22388
	r11.s64 = r11.s64 + 22388;
	// stw r28,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r28.u32);
	// stw r27,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r27.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r26,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r26.u32);
	// stw r25,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r25.u32);
	// stw r24,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82B57CF8"))) PPC_WEAK_FUNC(sub_82B57CF8);
PPC_FUNC_IMPL(__imp__sub_82B57CF8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x82e626d8
	sub_82E626D8(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,22396
	r11.s64 = r11.s64 + 22396;
	// stw r28,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r28.u32);
	// stw r27,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r27.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82B57D48"))) PPC_WEAK_FUNC(sub_82B57D48);
PPC_FUNC_IMPL(__imp__sub_82B57D48) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82e626d8
	sub_82E626D8(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,22404
	r11.s64 = r11.s64 + 22404;
	// stw r28,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r28.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B57D90"))) PPC_WEAK_FUNC(sub_82B57D90);
PPC_FUNC_IMPL(__imp__sub_82B57D90) {
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
	// bl 0x82e626b8
	sub_82E626B8(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// stb r30,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,22412
	r11.s64 = r11.s64 + 22412;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_82B57DE0"))) PPC_WEAK_FUNC(sub_82B57DE0);
PPC_FUNC_IMPL(__imp__sub_82B57DE0) {
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
	// bl 0x82e626b8
	sub_82E626B8(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,22420
	r11.s64 = r11.s64 + 22420;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_82B57E30"))) PPC_WEAK_FUNC(sub_82B57E30);
PPC_FUNC_IMPL(__imp__sub_82B57E30) {
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
	// bl 0x82e626b8
	sub_82E626B8(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,22428
	r11.s64 = r11.s64 + 22428;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_82B57E80"))) PPC_WEAK_FUNC(sub_82B57E80);
PPC_FUNC_IMPL(__imp__sub_82B57E80) {
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
	// bl 0x82e626b8
	sub_82E626B8(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,22436
	r11.s64 = r11.s64 + 22436;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
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

__attribute__((alias("__imp__sub_82B57EE0"))) PPC_WEAK_FUNC(sub_82B57EE0);
PPC_FUNC_IMPL(__imp__sub_82B57EE0) {
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
	// bl 0x82e626b8
	sub_82E626B8(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r10,r31,24
	ctx.r10.s64 = r31.s64 + 24;
	// addi r9,r11,22444
	ctx.r9.s64 = r11.s64 + 22444;
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B57F1C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82b57f1c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B57F1C;
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

__attribute__((alias("__imp__sub_82B57F50"))) PPC_WEAK_FUNC(sub_82B57F50);
PPC_FUNC_IMPL(__imp__sub_82B57F50) {
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
	// bl 0x82e626b8
	sub_82E626B8(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,22452
	r11.s64 = r11.s64 + 22452;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_82B57FA0"))) PPC_WEAK_FUNC(sub_82B57FA0);
PPC_FUNC_IMPL(__imp__sub_82B57FA0) {
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
	// bl 0x82e626b8
	sub_82E626B8(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// stb r30,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,22460
	r11.s64 = r11.s64 + 22460;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_82B57FF0"))) PPC_WEAK_FUNC(sub_82B57FF0);
PPC_FUNC_IMPL(__imp__sub_82B57FF0) {
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
	// bl 0x82e626b8
	sub_82E626B8(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// stb r30,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,22468
	r11.s64 = r11.s64 + 22468;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_82B58040"))) PPC_WEAK_FUNC(sub_82B58040);
PPC_FUNC_IMPL(__imp__sub_82B58040) {
	PPC_FUNC_PROLOGUE();
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
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// bl 0x82e626b8
	sub_82E626B8(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// stfs f31,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,22476
	r11.s64 = r11.s64 + 22476;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_82B58090"))) PPC_WEAK_FUNC(sub_82B58090);
PPC_FUNC_IMPL(__imp__sub_82B58090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v63{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// bl 0x82e626b8
	sub_82E626B8(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// li r10,48
	ctx.r10.s64 = 48;
	// stfs f31,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// addi r11,r11,22484
	r11.s64 = r11.s64 + 22484;
	// stfs f30,28(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lvx128 v63,r0,r29
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f29,64(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82B58108"))) PPC_WEAK_FUNC(sub_82B58108);
PPC_FUNC_IMPL(__imp__sub_82B58108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v63{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82e626b8
	sub_82E626B8(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r11,22492
	r11.s64 = r11.s64 + 22492;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r29,48(r31)
	PPC_STORE_U8(r31.u32 + 48, r29.u8);
	// stb r28,49(r31)
	PPC_STORE_U8(r31.u32 + 49, r28.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B58158"))) PPC_WEAK_FUNC(sub_82B58158);
PPC_FUNC_IMPL(__imp__sub_82B58158) {
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
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b58184
	if (cr6.eq) goto loc_82B58184;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B58184:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b58194
	if (cr6.eq) goto loc_82B58194;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B58194:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e62610
	sub_82E62610(ctx, base);
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

__attribute__((alias("__imp__sub_82B581B0"))) PPC_WEAK_FUNC(sub_82B581B0);
PPC_FUNC_IMPL(__imp__sub_82B581B0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82e626b8
	sub_82E626B8(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
	// addi r11,r10,22524
	r11.s64 = ctx.r10.s64 + 22524;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// beq cr6,0x82b58218
	if (cr6.eq) goto loc_82B58218;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B581FC:
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
	// bne 0x82b581fc
	if (!cr0.eq) goto loc_82B581FC;
loc_82B58218:
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

__attribute__((alias("__imp__sub_82B58238"))) PPC_WEAK_FUNC(sub_82B58238);
PPC_FUNC_IMPL(__imp__sub_82B58238) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// bl 0x82e626b8
	sub_82E626B8(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
	// addi r11,r10,22532
	r11.s64 = ctx.r10.s64 + 22532;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// beq cr6,0x82b582ac
	if (cr6.eq) goto loc_82B582AC;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B58290:
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
	// bne 0x82b58290
	if (!cr0.eq) goto loc_82B58290;
loc_82B582AC:
	// li r30,0
	r30.s64 = 0;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// stfs f31,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stw r28,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r29,52(r31)
	PPC_STORE_U8(r31.u32 + 52, r29.u8);
	// stb r27,53(r31)
	PPC_STORE_U8(r31.u32 + 53, r27.u8);
	// stb r30,54(r31)
	PPC_STORE_U8(r31.u32 + 54, r30.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82B582E8"))) PPC_WEAK_FUNC(sub_82B582E8);
PPC_FUNC_IMPL(__imp__sub_82B582E8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// bl 0x82e626b8
	sub_82E626B8(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,22532
	r11.s64 = r11.s64 + 22532;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// stfs f31,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stw r27,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r28,52(r31)
	PPC_STORE_U8(r31.u32 + 52, r28.u8);
	// stb r26,53(r31)
	PPC_STORE_U8(r31.u32 + 53, r26.u8);
	// stb r30,54(r31)
	PPC_STORE_U8(r31.u32 + 54, r30.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82B58368"))) PPC_WEAK_FUNC(sub_82B58368);
PPC_FUNC_IMPL(__imp__sub_82B58368) {
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
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5839c
	if (cr6.eq) goto loc_82B5839C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82B5839C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e62610
	sub_82E62610(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b583b4
	if (cr0.eq) goto loc_82B583B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82B583B4:
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

__attribute__((alias("__imp__sub_82B583D0"))) PPC_WEAK_FUNC(sub_82B583D0);
PPC_FUNC_IMPL(__imp__sub_82B583D0) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x82e626b8
	sub_82E626B8(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,22500
	r11.s64 = r11.s64 + 22500;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// stw r28,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r28.u32);
	// stb r30,40(r31)
	PPC_STORE_U8(r31.u32 + 40, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82B58428"))) PPC_WEAK_FUNC(sub_82B58428);
PPC_FUNC_IMPL(__imp__sub_82B58428) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// bl 0x82e626b8
	sub_82E626B8(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
	// addi r11,r10,22508
	r11.s64 = ctx.r10.s64 + 22508;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// beq cr6,0x82b584a0
	if (cr6.eq) goto loc_82B584A0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B58484:
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
	// bne 0x82b58484
	if (!cr0.eq) goto loc_82B58484;
loc_82B584A0:
	// li r30,0
	r30.s64 = 0;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// stfs f31,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stw r29,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r28,52(r31)
	PPC_STORE_U8(r31.u32 + 52, r28.u8);
	// stb r27,53(r31)
	PPC_STORE_U8(r31.u32 + 53, r27.u8);
	// stb r30,54(r31)
	PPC_STORE_U8(r31.u32 + 54, r30.u8);
	// stb r26,55(r31)
	PPC_STORE_U8(r31.u32 + 55, r26.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82B584E0"))) PPC_WEAK_FUNC(sub_82B584E0);
PPC_FUNC_IMPL(__imp__sub_82B584E0) {
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
	// bl 0x82b58158
	sub_82B58158(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82b58510
	if (cr0.eq) goto loc_82B58510;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82B58510:
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

__attribute__((alias("__imp__sub_82B58530"))) PPC_WEAK_FUNC(sub_82B58530);
PPC_FUNC_IMPL(__imp__sub_82B58530) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// bl 0x82e626b8
	sub_82E626B8(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,22508
	r11.s64 = r11.s64 + 22508;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// stfs f31,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stw r28,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r27,52(r31)
	PPC_STORE_U8(r31.u32 + 52, r27.u8);
	// stb r26,53(r31)
	PPC_STORE_U8(r31.u32 + 53, r26.u8);
	// stb r30,54(r31)
	PPC_STORE_U8(r31.u32 + 54, r30.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82B585B0"))) PPC_WEAK_FUNC(sub_82B585B0);
PPC_FUNC_IMPL(__imp__sub_82B585B0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82e626b8
	sub_82E626B8(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,22516
	r11.s64 = r11.s64 + 22516;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// stfs f31,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// stb r29,44(r31)
	PPC_STORE_U8(r31.u32 + 44, r29.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,45(r31)
	PPC_STORE_U8(r31.u32 + 45, r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

