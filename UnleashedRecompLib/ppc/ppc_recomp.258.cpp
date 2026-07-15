#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83244FD0"))) PPC_WEAK_FUNC(sub_83244FD0);
PPC_FUNC_IMPL(__imp__sub_83244FD0) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,15560
	ctx.r7.s64 = ctx.r10.s64 + 15560;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,17
	ctx.r6.s64 = 17;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,16628
	ctx.r4.s64 = ctx.r9.s64 + 16628;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-18844
	ctx.r3.s64 = ctx.r8.s64 + -18844;
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
	// li r6,192
	ctx.r6.s64 = 192;
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

__attribute__((alias("__imp__sub_83245040"))) PPC_WEAK_FUNC(sub_83245040);
PPC_FUNC_IMPL(__imp__sub_83245040) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r6,r10,15968
	ctx.r6.s64 = ctx.r10.s64 + 15968;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-31740
	ctx.r5.s64 = ctx.r9.s64 + -31740;
	// addi r4,r8,16656
	ctx.r4.s64 = ctx.r8.s64 + 16656;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-18796
	ctx.r3.s64 = ctx.r7.s64 + -18796;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,25
	r31.s64 = 25;
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
	// li r6,212
	ctx.r6.s64 = 212;
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

__attribute__((alias("__imp__sub_832450B8"))) PPC_WEAK_FUNC(sub_832450B8);
PPC_FUNC_IMPL(__imp__sub_832450B8) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,17064
	ctx.r7.s64 = ctx.r10.s64 + 17064;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,10
	ctx.r6.s64 = 10;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,17616
	ctx.r4.s64 = ctx.r9.s64 + 17616;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-18748
	ctx.r3.s64 = ctx.r8.s64 + -18748;
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
	// li r6,100
	ctx.r6.s64 = 100;
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

__attribute__((alias("__imp__sub_83245128"))) PPC_WEAK_FUNC(sub_83245128);
PPC_FUNC_IMPL(__imp__sub_83245128) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,17304
	ctx.r7.s64 = ctx.r10.s64 + 17304;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,17664
	ctx.r4.s64 = ctx.r9.s64 + 17664;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-18700
	ctx.r3.s64 = ctx.r8.s64 + -18700;
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
	// li r6,208
	ctx.r6.s64 = 208;
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

__attribute__((alias("__imp__sub_83245198"))) PPC_WEAK_FUNC(sub_83245198);
PPC_FUNC_IMPL(__imp__sub_83245198) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,17376
	ctx.r7.s64 = ctx.r10.s64 + 17376;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,9
	ctx.r6.s64 = 9;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,17696
	ctx.r4.s64 = ctx.r9.s64 + 17696;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-18652
	ctx.r3.s64 = ctx.r8.s64 + -18652;
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

__attribute__((alias("__imp__sub_83245208"))) PPC_WEAK_FUNC(sub_83245208);
PPC_FUNC_IMPL(__imp__sub_83245208) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,17592
	ctx.r7.s64 = ctx.r10.s64 + 17592;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,17732
	ctx.r4.s64 = ctx.r9.s64 + 17732;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-18604
	ctx.r3.s64 = ctx.r8.s64 + -18604;
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
	// li r6,72
	ctx.r6.s64 = 72;
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

__attribute__((alias("__imp__sub_83245278"))) PPC_WEAK_FUNC(sub_83245278);
PPC_FUNC_IMPL(__imp__sub_83245278) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,17824
	ctx.r7.s64 = ctx.r10.s64 + 17824;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,17940
	ctx.r4.s64 = ctx.r9.s64 + 17940;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-18556
	ctx.r3.s64 = ctx.r8.s64 + -18556;
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

__attribute__((alias("__imp__sub_832452E8"))) PPC_WEAK_FUNC(sub_832452E8);
PPC_FUNC_IMPL(__imp__sub_832452E8) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r6,r10,17896
	ctx.r6.s64 = ctx.r10.s64 + 17896;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-19180
	ctx.r5.s64 = ctx.r9.s64 + -19180;
	// addi r4,r8,18000
	ctx.r4.s64 = ctx.r8.s64 + 18000;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-18508
	ctx.r3.s64 = ctx.r7.s64 + -18508;
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

__attribute__((alias("__imp__sub_83245360"))) PPC_WEAK_FUNC(sub_83245360);
PPC_FUNC_IMPL(__imp__sub_83245360) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,18144
	ctx.r7.s64 = ctx.r10.s64 + 18144;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,18284
	ctx.r4.s64 = ctx.r9.s64 + 18284;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-18460
	ctx.r3.s64 = ctx.r8.s64 + -18460;
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

__attribute__((alias("__imp__sub_832453D0"))) PPC_WEAK_FUNC(sub_832453D0);
PPC_FUNC_IMPL(__imp__sub_832453D0) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r6,r10,18216
	ctx.r6.s64 = ctx.r10.s64 + 18216;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-18940
	ctx.r5.s64 = ctx.r9.s64 + -18940;
	// addi r4,r8,18332
	ctx.r4.s64 = ctx.r8.s64 + 18332;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-18412
	ctx.r3.s64 = ctx.r7.s64 + -18412;
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

__attribute__((alias("__imp__sub_83245448"))) PPC_WEAK_FUNC(sub_83245448);
PPC_FUNC_IMPL(__imp__sub_83245448) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,18848
	ctx.r7.s64 = ctx.r10.s64 + 18848;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,10
	ctx.r6.s64 = 10;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,19644
	ctx.r4.s64 = ctx.r9.s64 + 19644;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-18364
	ctx.r3.s64 = ctx.r8.s64 + -18364;
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
	// li r6,40
	ctx.r6.s64 = 40;
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

__attribute__((alias("__imp__sub_832454B8"))) PPC_WEAK_FUNC(sub_832454B8);
PPC_FUNC_IMPL(__imp__sub_832454B8) {
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
	// lis r11,-32237
	r11.s64 = -2112684032;
	// li r3,19
	ctx.r3.s64 = 19;
	// addi r11,r11,19088
	r11.s64 = r11.s64 + 19088;
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r6,r11,456
	ctx.r6.s64 = r11.s64 + 456;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r9,30492
	ctx.r5.s64 = ctx.r9.s64 + 30492;
	// addi r4,r8,19680
	ctx.r4.s64 = ctx.r8.s64 + 19680;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r3,r7,-18316
	ctx.r3.s64 = ctx.r7.s64 + -18316;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,416
	ctx.r6.s64 = 416;
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

__attribute__((alias("__imp__sub_83245528"))) PPC_WEAK_FUNC(sub_83245528);
PPC_FUNC_IMPL(__imp__sub_83245528) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,19824
	ctx.r7.s64 = ctx.r10.s64 + 19824;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,20056
	ctx.r4.s64 = ctx.r9.s64 + 20056;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-18268
	ctx.r3.s64 = ctx.r8.s64 + -18268;
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

__attribute__((alias("__imp__sub_83245598"))) PPC_WEAK_FUNC(sub_83245598);
PPC_FUNC_IMPL(__imp__sub_83245598) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// addi r6,r10,19872
	ctx.r6.s64 = ctx.r10.s64 + 19872;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,30492
	ctx.r5.s64 = ctx.r9.s64 + 30492;
	// addi r4,r8,20076
	ctx.r4.s64 = ctx.r8.s64 + 20076;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-18220
	ctx.r3.s64 = ctx.r7.s64 + -18220;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,3
	r31.s64 = 3;
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

__attribute__((alias("__imp__sub_83245610"))) PPC_WEAK_FUNC(sub_83245610);
PPC_FUNC_IMPL(__imp__sub_83245610) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// addi r6,r10,19944
	ctx.r6.s64 = ctx.r10.s64 + 19944;
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
	// addi r4,r8,7760
	ctx.r4.s64 = ctx.r8.s64 + 7760;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-18172
	ctx.r3.s64 = ctx.r7.s64 + -18172;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,3
	r31.s64 = 3;
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

__attribute__((alias("__imp__sub_83245688"))) PPC_WEAK_FUNC(sub_83245688);
PPC_FUNC_IMPL(__imp__sub_83245688) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// addi r6,r10,20168
	ctx.r6.s64 = ctx.r10.s64 + 20168;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,30492
	ctx.r5.s64 = ctx.r9.s64 + 30492;
	// addi r4,r8,20344
	ctx.r4.s64 = ctx.r8.s64 + 20344;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-18124
	ctx.r3.s64 = ctx.r7.s64 + -18124;
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
	// li r8,1
	ctx.r8.s64 = 1;
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

__attribute__((alias("__imp__sub_83245700"))) PPC_WEAK_FUNC(sub_83245700);
PPC_FUNC_IMPL(__imp__sub_83245700) {
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
	// lis r11,-32237
	r11.s64 = -2112684032;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,20300
	ctx.r9.s64 = r11.s64 + 20300;
	// sth r10,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r10.u16);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x82fb30c0
	sub_82FB30C0(ctx, base);
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r7,r8,-18076
	ctx.r7.s64 = ctx.r8.s64 + -18076;
	// addi r11,r11,20372
	r11.s64 = r11.s64 + 20372;
	// lis r10,-32005
	ctx.r10.s64 = -2097479680;
	// stw r11,-18076(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18076, r11.u32);
	// lis r9,-32005
	ctx.r9.s64 = -2097479680;
	// addi r10,r10,-5152
	ctx.r10.s64 = ctx.r10.s64 + -5152;
	// addi r9,r9,-5248
	ctx.r9.s64 = ctx.r9.s64 + -5248;
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83245770"))) PPC_WEAK_FUNC(sub_83245770);
PPC_FUNC_IMPL(__imp__sub_83245770) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r6,r10,20192
	ctx.r6.s64 = ctx.r10.s64 + 20192;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-19372
	ctx.r5.s64 = ctx.r9.s64 + -19372;
	// addi r4,r8,20372
	ctx.r4.s64 = ctx.r8.s64 + 20372;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-18060
	ctx.r3.s64 = ctx.r7.s64 + -18060;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,3
	r31.s64 = 3;
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

__attribute__((alias("__imp__sub_832457E8"))) PPC_WEAK_FUNC(sub_832457E8);
PPC_FUNC_IMPL(__imp__sub_832457E8) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r6,r10,20536
	ctx.r6.s64 = ctx.r10.s64 + 20536;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-19036
	ctx.r5.s64 = ctx.r9.s64 + -19036;
	// addi r4,r8,20784
	ctx.r4.s64 = ctx.r8.s64 + 20784;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-18012
	ctx.r3.s64 = ctx.r7.s64 + -18012;
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

__attribute__((alias("__imp__sub_83245860"))) PPC_WEAK_FUNC(sub_83245860);
PPC_FUNC_IMPL(__imp__sub_83245860) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r6,r10,20632
	ctx.r6.s64 = ctx.r10.s64 + 20632;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-18988
	ctx.r5.s64 = ctx.r9.s64 + -18988;
	// addi r4,r8,20820
	ctx.r4.s64 = ctx.r8.s64 + 20820;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-17964
	ctx.r3.s64 = ctx.r7.s64 + -17964;
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

__attribute__((alias("__imp__sub_832458D8"))) PPC_WEAK_FUNC(sub_832458D8);
PPC_FUNC_IMPL(__imp__sub_832458D8) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r6,r10,20920
	ctx.r6.s64 = ctx.r10.s64 + 20920;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-19324
	ctx.r5.s64 = ctx.r9.s64 + -19324;
	// addi r4,r8,21012
	ctx.r4.s64 = ctx.r8.s64 + 21012;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-17916
	ctx.r3.s64 = ctx.r7.s64 + -17916;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,3
	r31.s64 = 3;
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

__attribute__((alias("__imp__sub_83245950"))) PPC_WEAK_FUNC(sub_83245950);
PPC_FUNC_IMPL(__imp__sub_83245950) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r6,r10,21168
	ctx.r6.s64 = ctx.r10.s64 + 21168;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-19276
	ctx.r5.s64 = ctx.r9.s64 + -19276;
	// addi r4,r8,21376
	ctx.r4.s64 = ctx.r8.s64 + 21376;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-17868
	ctx.r3.s64 = ctx.r7.s64 + -17868;
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

__attribute__((alias("__imp__sub_832459C8"))) PPC_WEAK_FUNC(sub_832459C8);
PPC_FUNC_IMPL(__imp__sub_832459C8) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r6,r10,21472
	ctx.r6.s64 = ctx.r10.s64 + 21472;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-19132
	ctx.r5.s64 = ctx.r9.s64 + -19132;
	// addi r4,r8,21568
	ctx.r4.s64 = ctx.r8.s64 + 21568;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-17820
	ctx.r3.s64 = ctx.r7.s64 + -17820;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,3
	r31.s64 = 3;
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

__attribute__((alias("__imp__sub_83245A40"))) PPC_WEAK_FUNC(sub_83245A40);
PPC_FUNC_IMPL(__imp__sub_83245A40) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r6,r10,21784
	ctx.r6.s64 = ctx.r10.s64 + 21784;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-19084
	ctx.r5.s64 = ctx.r9.s64 + -19084;
	// addi r4,r8,22044
	ctx.r4.s64 = ctx.r8.s64 + 22044;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-17772
	ctx.r3.s64 = ctx.r7.s64 + -17772;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,10
	r31.s64 = 10;
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

__attribute__((alias("__imp__sub_83245AB8"))) PPC_WEAK_FUNC(sub_83245AB8);
PPC_FUNC_IMPL(__imp__sub_83245AB8) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r6,r10,22144
	ctx.r6.s64 = ctx.r10.s64 + 22144;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-18892
	ctx.r5.s64 = ctx.r9.s64 + -18892;
	// addi r4,r8,22292
	ctx.r4.s64 = ctx.r8.s64 + 22292;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-17724
	ctx.r3.s64 = ctx.r7.s64 + -17724;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,5
	r31.s64 = 5;
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

__attribute__((alias("__imp__sub_83245B30"))) PPC_WEAK_FUNC(sub_83245B30);
PPC_FUNC_IMPL(__imp__sub_83245B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r9,r10,11688
	ctx.r9.s64 = ctx.r10.s64 + 11688;
	// lwz r11,11680(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 11680);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83245B48"))) PPC_WEAK_FUNC(sub_83245B48);
PPC_FUNC_IMPL(__imp__sub_83245B48) {
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
	// addi r5,r10,11688
	ctx.r5.s64 = ctx.r10.s64 + 11688;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-31942
	ctx.r6.s64 = -2093350912;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r11,0
	r11.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r5,r8,30492
	ctx.r5.s64 = ctx.r8.s64 + 30492;
	// addi r4,r7,22848
	ctx.r4.s64 = ctx.r7.s64 + 22848;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,-17676
	ctx.r3.s64 = ctx.r6.s64 + -17676;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,22736
	ctx.r9.s64 = ctx.r9.s64 + 22736;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,36
	ctx.r6.s64 = 36;
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

__attribute__((alias("__imp__sub_83245BC0"))) PPC_WEAK_FUNC(sub_83245BC0);
PPC_FUNC_IMPL(__imp__sub_83245BC0) {
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
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,30492
	ctx.r5.s64 = ctx.r10.s64 + 30492;
	// addi r4,r9,22872
	ctx.r4.s64 = ctx.r9.s64 + 22872;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r8,-17628
	ctx.r3.s64 = ctx.r8.s64 + -17628;
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

__attribute__((alias("__imp__sub_83245C28"))) PPC_WEAK_FUNC(sub_83245C28);
PPC_FUNC_IMPL(__imp__sub_83245C28) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,23304
	ctx.r7.s64 = ctx.r10.s64 + 23304;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,10
	ctx.r6.s64 = 10;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,24232
	ctx.r4.s64 = ctx.r9.s64 + 24232;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-17580
	ctx.r3.s64 = ctx.r8.s64 + -17580;
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

__attribute__((alias("__imp__sub_83245C98"))) PPC_WEAK_FUNC(sub_83245C98);
PPC_FUNC_IMPL(__imp__sub_83245C98) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,23544
	ctx.r7.s64 = ctx.r10.s64 + 23544;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,24280
	ctx.r4.s64 = ctx.r9.s64 + 24280;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-17532
	ctx.r3.s64 = ctx.r8.s64 + -17532;
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

__attribute__((alias("__imp__sub_83245D08"))) PPC_WEAK_FUNC(sub_83245D08);
PPC_FUNC_IMPL(__imp__sub_83245D08) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r6,r10,23688
	ctx.r6.s64 = ctx.r10.s64 + 23688;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-17676
	ctx.r5.s64 = ctx.r9.s64 + -17676;
	// addi r4,r8,24328
	ctx.r4.s64 = ctx.r8.s64 + 24328;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-17484
	ctx.r3.s64 = ctx.r7.s64 + -17484;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,10
	r31.s64 = 10;
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
	// li r6,96
	ctx.r6.s64 = 96;
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

__attribute__((alias("__imp__sub_83245D80"))) PPC_WEAK_FUNC(sub_83245D80);
PPC_FUNC_IMPL(__imp__sub_83245D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// addi r7,r8,12016
	ctx.r7.s64 = ctx.r8.s64 + 12016;
	// lwz r10,11960(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 11960);
	// lwz r11,11964(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11964);
	// stw r10,200(r7)
	PPC_STORE_U32(ctx.r7.u32 + 200, ctx.r10.u32);
	// stw r11,224(r7)
	PPC_STORE_U32(ctx.r7.u32 + 224, r11.u32);
	// stw r11,248(r7)
	PPC_STORE_U32(ctx.r7.u32 + 248, r11.u32);
	// stw r11,272(r7)
	PPC_STORE_U32(ctx.r7.u32 + 272, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83245DB0"))) PPC_WEAK_FUNC(sub_83245DB0);
PPC_FUNC_IMPL(__imp__sub_83245DB0) {
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
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r6,r10,12016
	ctx.r6.s64 = ctx.r10.s64 + 12016;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,25376
	ctx.r4.s64 = ctx.r8.s64 + 25376;
	// addi r3,r7,-17436
	ctx.r3.s64 = ctx.r7.s64 + -17436;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r9,r9,24920
	ctx.r9.s64 = ctx.r9.s64 + 24920;
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

__attribute__((alias("__imp__sub_83245E20"))) PPC_WEAK_FUNC(sub_83245E20);
PPC_FUNC_IMPL(__imp__sub_83245E20) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,24960
	ctx.r7.s64 = ctx.r10.s64 + 24960;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,25504
	ctx.r4.s64 = ctx.r9.s64 + 25504;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-17388
	ctx.r3.s64 = ctx.r8.s64 + -17388;
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

__attribute__((alias("__imp__sub_83245E90"))) PPC_WEAK_FUNC(sub_83245E90);
PPC_FUNC_IMPL(__imp__sub_83245E90) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r6,r10,25008
	ctx.r6.s64 = ctx.r10.s64 + 25008;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-17676
	ctx.r5.s64 = ctx.r9.s64 + -17676;
	// addi r4,r8,25560
	ctx.r4.s64 = ctx.r8.s64 + 25560;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-17340
	ctx.r3.s64 = ctx.r7.s64 + -17340;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,13
	r31.s64 = 13;
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
	// li r6,128
	ctx.r6.s64 = 128;
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

__attribute__((alias("__imp__sub_83245F08"))) PPC_WEAK_FUNC(sub_83245F08);
PPC_FUNC_IMPL(__imp__sub_83245F08) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,25808
	ctx.r7.s64 = ctx.r10.s64 + 25808;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,26168
	ctx.r4.s64 = ctx.r9.s64 + 26168;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-17292
	ctx.r3.s64 = ctx.r8.s64 + -17292;
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

__attribute__((alias("__imp__sub_83245F78"))) PPC_WEAK_FUNC(sub_83245F78);
PPC_FUNC_IMPL(__imp__sub_83245F78) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,25880
	ctx.r7.s64 = ctx.r10.s64 + 25880;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,26204
	ctx.r4.s64 = ctx.r9.s64 + 26204;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-17244
	ctx.r3.s64 = ctx.r8.s64 + -17244;
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
	// li r6,112
	ctx.r6.s64 = 112;
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

__attribute__((alias("__imp__sub_83245FE8"))) PPC_WEAK_FUNC(sub_83245FE8);
PPC_FUNC_IMPL(__imp__sub_83245FE8) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,26024
	ctx.r7.s64 = ctx.r10.s64 + 26024;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,26240
	ctx.r4.s64 = ctx.r9.s64 + 26240;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-17196
	ctx.r3.s64 = ctx.r8.s64 + -17196;
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

__attribute__((alias("__imp__sub_83246058"))) PPC_WEAK_FUNC(sub_83246058);
PPC_FUNC_IMPL(__imp__sub_83246058) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,26320
	ctx.r7.s64 = ctx.r10.s64 + 26320;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,26440
	ctx.r4.s64 = ctx.r9.s64 + 26440;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-17148
	ctx.r3.s64 = ctx.r8.s64 + -17148;
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

__attribute__((alias("__imp__sub_832460C8"))) PPC_WEAK_FUNC(sub_832460C8);
PPC_FUNC_IMPL(__imp__sub_832460C8) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,26496
	ctx.r7.s64 = ctx.r10.s64 + 26496;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,26616
	ctx.r4.s64 = ctx.r9.s64 + 26616;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-17100
	ctx.r3.s64 = ctx.r8.s64 + -17100;
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

__attribute__((alias("__imp__sub_83246138"))) PPC_WEAK_FUNC(sub_83246138);
PPC_FUNC_IMPL(__imp__sub_83246138) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,26520
	ctx.r7.s64 = ctx.r10.s64 + 26520;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,26640
	ctx.r4.s64 = ctx.r9.s64 + 26640;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-17052
	ctx.r3.s64 = ctx.r8.s64 + -17052;
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

__attribute__((alias("__imp__sub_832461A8"))) PPC_WEAK_FUNC(sub_832461A8);
PPC_FUNC_IMPL(__imp__sub_832461A8) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,26720
	ctx.r7.s64 = ctx.r10.s64 + 26720;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,27212
	ctx.r4.s64 = ctx.r9.s64 + 27212;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-17004
	ctx.r3.s64 = ctx.r8.s64 + -17004;
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

__attribute__((alias("__imp__sub_83246218"))) PPC_WEAK_FUNC(sub_83246218);
PPC_FUNC_IMPL(__imp__sub_83246218) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r6,r10,26864
	ctx.r6.s64 = ctx.r10.s64 + 26864;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-17676
	ctx.r5.s64 = ctx.r9.s64 + -17676;
	// addi r4,r8,27268
	ctx.r4.s64 = ctx.r8.s64 + 27268;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-16956
	ctx.r3.s64 = ctx.r7.s64 + -16956;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,12
	r31.s64 = 12;
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
	// li r6,104
	ctx.r6.s64 = 104;
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

__attribute__((alias("__imp__sub_83246290"))) PPC_WEAK_FUNC(sub_83246290);
PPC_FUNC_IMPL(__imp__sub_83246290) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,27352
	ctx.r7.s64 = ctx.r10.s64 + 27352;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,27448
	ctx.r4.s64 = ctx.r9.s64 + 27448;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-16908
	ctx.r3.s64 = ctx.r8.s64 + -16908;
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

__attribute__((alias("__imp__sub_83246300"))) PPC_WEAK_FUNC(sub_83246300);
PPC_FUNC_IMPL(__imp__sub_83246300) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,27484
	ctx.r7.s64 = ctx.r10.s64 + 27484;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,27532
	ctx.r4.s64 = ctx.r9.s64 + 27532;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-16860
	ctx.r3.s64 = ctx.r8.s64 + -16860;
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

__attribute__((alias("__imp__sub_83246370"))) PPC_WEAK_FUNC(sub_83246370);
PPC_FUNC_IMPL(__imp__sub_83246370) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,27548
	ctx.r7.s64 = ctx.r10.s64 + 27548;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,27644
	ctx.r4.s64 = ctx.r9.s64 + 27644;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-16812
	ctx.r3.s64 = ctx.r8.s64 + -16812;
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

__attribute__((alias("__imp__sub_832463E0"))) PPC_WEAK_FUNC(sub_832463E0);
PPC_FUNC_IMPL(__imp__sub_832463E0) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,27596
	ctx.r7.s64 = ctx.r10.s64 + 27596;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,27676
	ctx.r4.s64 = ctx.r9.s64 + 27676;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-16764
	ctx.r3.s64 = ctx.r8.s64 + -16764;
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

__attribute__((alias("__imp__sub_83246450"))) PPC_WEAK_FUNC(sub_83246450);
PPC_FUNC_IMPL(__imp__sub_83246450) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,27744
	ctx.r7.s64 = ctx.r10.s64 + 27744;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,27864
	ctx.r4.s64 = ctx.r9.s64 + 27864;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-16716
	ctx.r3.s64 = ctx.r8.s64 + -16716;
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
	// li r6,40
	ctx.r6.s64 = 40;
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

__attribute__((alias("__imp__sub_832464C0"))) PPC_WEAK_FUNC(sub_832464C0);
PPC_FUNC_IMPL(__imp__sub_832464C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r9,r10,12632
	ctx.r9.s64 = ctx.r10.s64 + 12632;
	// lwz r11,12608(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12608);
	// stw r11,80(r9)
	PPC_STORE_U32(ctx.r9.u32 + 80, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832464D8"))) PPC_WEAK_FUNC(sub_832464D8);
PPC_FUNC_IMPL(__imp__sub_832464D8) {
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
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r6,r10,12632
	ctx.r6.s64 = ctx.r10.s64 + 12632;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,28032
	ctx.r4.s64 = ctx.r8.s64 + 28032;
	// addi r3,r7,-16668
	ctx.r3.s64 = ctx.r7.s64 + -16668;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r9,r9,28012
	ctx.r9.s64 = ctx.r9.s64 + 28012;
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

__attribute__((alias("__imp__sub_83246548"))) PPC_WEAK_FUNC(sub_83246548);
PPC_FUNC_IMPL(__imp__sub_83246548) {
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
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r9,r11,28144
	ctx.r9.s64 = r11.s64 + 28144;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
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
	// addi r4,r8,28204
	ctx.r4.s64 = ctx.r8.s64 + 28204;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-16620
	ctx.r3.s64 = ctx.r7.s64 + -16620;
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
	// li r6,56
	ctx.r6.s64 = 56;
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

__attribute__((alias("__imp__sub_832465C0"))) PPC_WEAK_FUNC(sub_832465C0);
PPC_FUNC_IMPL(__imp__sub_832465C0) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r6,r10,28224
	ctx.r6.s64 = ctx.r10.s64 + 28224;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-17676
	ctx.r5.s64 = ctx.r9.s64 + -17676;
	// addi r4,r8,28328
	ctx.r4.s64 = ctx.r8.s64 + 28328;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-16572
	ctx.r3.s64 = ctx.r7.s64 + -16572;
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

__attribute__((alias("__imp__sub_83246638"))) PPC_WEAK_FUNC(sub_83246638);
PPC_FUNC_IMPL(__imp__sub_83246638) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r6,r10,28392
	ctx.r6.s64 = ctx.r10.s64 + 28392;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-17628
	ctx.r5.s64 = ctx.r9.s64 + -17628;
	// addi r4,r8,28516
	ctx.r4.s64 = ctx.r8.s64 + 28516;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-16524
	ctx.r3.s64 = ctx.r7.s64 + -16524;
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
	// li r6,64
	ctx.r6.s64 = 64;
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

__attribute__((alias("__imp__sub_832466B0"))) PPC_WEAK_FUNC(sub_832466B0);
PPC_FUNC_IMPL(__imp__sub_832466B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21880
	ctx.r3.s64 = r11.s64 + -21880;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832466C0"))) PPC_WEAK_FUNC(sub_832466C0);
PPC_FUNC_IMPL(__imp__sub_832466C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-16092
	ctx.r3.s64 = r11.s64 + -16092;
	// b 0x82fffd28
	sub_82FFFD28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832466D0"))) PPC_WEAK_FUNC(sub_832466D0);
PPC_FUNC_IMPL(__imp__sub_832466D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-16104
	ctx.r3.s64 = r11.s64 + -16104;
	// b 0x82fffd28
	sub_82FFFD28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832466E0"))) PPC_WEAK_FUNC(sub_832466E0);
PPC_FUNC_IMPL(__imp__sub_832466E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-16068
	ctx.r3.s64 = r11.s64 + -16068;
	// b 0x82fffd28
	sub_82FFFD28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832466F0"))) PPC_WEAK_FUNC(sub_832466F0);
PPC_FUNC_IMPL(__imp__sub_832466F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-16056
	ctx.r3.s64 = r11.s64 + -16056;
	// b 0x82fffd28
	sub_82FFFD28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246700"))) PPC_WEAK_FUNC(sub_83246700);
PPC_FUNC_IMPL(__imp__sub_83246700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-16032
	ctx.r3.s64 = r11.s64 + -16032;
	// b 0x82fffd28
	sub_82FFFD28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246710"))) PPC_WEAK_FUNC(sub_83246710);
PPC_FUNC_IMPL(__imp__sub_83246710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-15936
	ctx.r3.s64 = r11.s64 + -15936;
	// b 0x82fffd28
	sub_82FFFD28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246720"))) PPC_WEAK_FUNC(sub_83246720);
PPC_FUNC_IMPL(__imp__sub_83246720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-15948
	ctx.r3.s64 = r11.s64 + -15948;
	// b 0x82fffd28
	sub_82FFFD28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246730"))) PPC_WEAK_FUNC(sub_83246730);
PPC_FUNC_IMPL(__imp__sub_83246730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21416
	ctx.r3.s64 = r11.s64 + -21416;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246740"))) PPC_WEAK_FUNC(sub_83246740);
PPC_FUNC_IMPL(__imp__sub_83246740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21856
	ctx.r3.s64 = r11.s64 + -21856;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246750"))) PPC_WEAK_FUNC(sub_83246750);
PPC_FUNC_IMPL(__imp__sub_83246750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21816
	ctx.r3.s64 = r11.s64 + -21816;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246760"))) PPC_WEAK_FUNC(sub_83246760);
PPC_FUNC_IMPL(__imp__sub_83246760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21776
	ctx.r3.s64 = r11.s64 + -21776;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246770"))) PPC_WEAK_FUNC(sub_83246770);
PPC_FUNC_IMPL(__imp__sub_83246770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21736
	ctx.r3.s64 = r11.s64 + -21736;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246780"))) PPC_WEAK_FUNC(sub_83246780);
PPC_FUNC_IMPL(__imp__sub_83246780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21696
	ctx.r3.s64 = r11.s64 + -21696;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246790"))) PPC_WEAK_FUNC(sub_83246790);
PPC_FUNC_IMPL(__imp__sub_83246790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21656
	ctx.r3.s64 = r11.s64 + -21656;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832467A0"))) PPC_WEAK_FUNC(sub_832467A0);
PPC_FUNC_IMPL(__imp__sub_832467A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21616
	ctx.r3.s64 = r11.s64 + -21616;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832467B0"))) PPC_WEAK_FUNC(sub_832467B0);
PPC_FUNC_IMPL(__imp__sub_832467B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21576
	ctx.r3.s64 = r11.s64 + -21576;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832467C0"))) PPC_WEAK_FUNC(sub_832467C0);
PPC_FUNC_IMPL(__imp__sub_832467C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21536
	ctx.r3.s64 = r11.s64 + -21536;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832467D0"))) PPC_WEAK_FUNC(sub_832467D0);
PPC_FUNC_IMPL(__imp__sub_832467D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21496
	ctx.r3.s64 = r11.s64 + -21496;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832467E0"))) PPC_WEAK_FUNC(sub_832467E0);
PPC_FUNC_IMPL(__imp__sub_832467E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21456
	ctx.r3.s64 = r11.s64 + -21456;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832467F0"))) PPC_WEAK_FUNC(sub_832467F0);
PPC_FUNC_IMPL(__imp__sub_832467F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-15900
	ctx.r3.s64 = r11.s64 + -15900;
	// b 0x82fffd28
	sub_82FFFD28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246800"))) PPC_WEAK_FUNC(sub_83246800);
PPC_FUNC_IMPL(__imp__sub_83246800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-15888
	ctx.r3.s64 = r11.s64 + -15888;
	// b 0x82fffd28
	sub_82FFFD28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246810"))) PPC_WEAK_FUNC(sub_83246810);
PPC_FUNC_IMPL(__imp__sub_83246810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-15912
	ctx.r3.s64 = r11.s64 + -15912;
	// b 0x82fffd28
	sub_82FFFD28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246820"))) PPC_WEAK_FUNC(sub_83246820);
PPC_FUNC_IMPL(__imp__sub_83246820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-15872
	ctx.r3.s64 = r11.s64 + -15872;
	// b 0x82fffd28
	sub_82FFFD28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246830"))) PPC_WEAK_FUNC(sub_83246830);
PPC_FUNC_IMPL(__imp__sub_83246830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-15828
	ctx.r3.s64 = r11.s64 + -15828;
	// b 0x82fffd28
	sub_82FFFD28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246840"))) PPC_WEAK_FUNC(sub_83246840);
PPC_FUNC_IMPL(__imp__sub_83246840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-15840
	ctx.r3.s64 = r11.s64 + -15840;
	// b 0x82fffd28
	sub_82FFFD28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246850"))) PPC_WEAK_FUNC(sub_83246850);
PPC_FUNC_IMPL(__imp__sub_83246850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-15804
	ctx.r3.s64 = r11.s64 + -15804;
	// b 0x82fffd28
	sub_82FFFD28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246860"))) PPC_WEAK_FUNC(sub_83246860);
PPC_FUNC_IMPL(__imp__sub_83246860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-15792
	ctx.r3.s64 = r11.s64 + -15792;
	// b 0x82fffd28
	sub_82FFFD28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246870"))) PPC_WEAK_FUNC(sub_83246870);
PPC_FUNC_IMPL(__imp__sub_83246870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-15764
	ctx.r3.s64 = r11.s64 + -15764;
	// b 0x82fffd28
	sub_82FFFD28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246880"))) PPC_WEAK_FUNC(sub_83246880);
PPC_FUNC_IMPL(__imp__sub_83246880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-15732
	ctx.r3.s64 = r11.s64 + -15732;
	// b 0x82fffd28
	sub_82FFFD28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246890"))) PPC_WEAK_FUNC(sub_83246890);
PPC_FUNC_IMPL(__imp__sub_83246890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-15744
	ctx.r3.s64 = r11.s64 + -15744;
	// b 0x82fffd28
	sub_82FFFD28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832468A0"))) PPC_WEAK_FUNC(sub_832468A0);
PPC_FUNC_IMPL(__imp__sub_832468A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r11,-32235
	r11.s64 = -2112552960;
	// addi r10,r11,-28732
	ctx.r10.s64 = r11.s64 + -28732;
	// addi r11,r10,2
	r11.s64 = ctx.r10.s64 + 2;
loc_832468AC:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x832468ac
	if (!cr0.eq) goto loc_832468AC;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// stw r11,-15712(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15712, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832468D0"))) PPC_WEAK_FUNC(sub_832468D0);
PPC_FUNC_IMPL(__imp__sub_832468D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-15696
	ctx.r3.s64 = r11.s64 + -15696;
	// b 0x82fffd28
	sub_82FFFD28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832468E0"))) PPC_WEAK_FUNC(sub_832468E0);
PPC_FUNC_IMPL(__imp__sub_832468E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-15684
	ctx.r3.s64 = r11.s64 + -15684;
	// b 0x82fffd28
	sub_82FFFD28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832468F0"))) PPC_WEAK_FUNC(sub_832468F0);
PPC_FUNC_IMPL(__imp__sub_832468F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-15660
	ctx.r3.s64 = r11.s64 + -15660;
	// b 0x82fffd28
	sub_82FFFD28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246900"))) PPC_WEAK_FUNC(sub_83246900);
PPC_FUNC_IMPL(__imp__sub_83246900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-15636
	ctx.r3.s64 = r11.s64 + -15636;
	// b 0x82fffd28
	sub_82FFFD28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246910"))) PPC_WEAK_FUNC(sub_83246910);
PPC_FUNC_IMPL(__imp__sub_83246910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-15092
	ctx.r3.s64 = r11.s64 + -15092;
	// b 0x82fffd28
	sub_82FFFD28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246920"))) PPC_WEAK_FUNC(sub_83246920);
PPC_FUNC_IMPL(__imp__sub_83246920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-15068
	ctx.r3.s64 = r11.s64 + -15068;
	// b 0x82fffd28
	sub_82FFFD28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246930"))) PPC_WEAK_FUNC(sub_83246930);
PPC_FUNC_IMPL(__imp__sub_83246930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-15080
	ctx.r3.s64 = r11.s64 + -15080;
	// b 0x82fffd28
	sub_82FFFD28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246940"))) PPC_WEAK_FUNC(sub_83246940);
PPC_FUNC_IMPL(__imp__sub_83246940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-15028
	ctx.r3.s64 = r11.s64 + -15028;
	// b 0x82fffd28
	sub_82FFFD28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246950"))) PPC_WEAK_FUNC(sub_83246950);
PPC_FUNC_IMPL(__imp__sub_83246950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-15008
	ctx.r3.s64 = r11.s64 + -15008;
	// b 0x82fffd28
	sub_82FFFD28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246960"))) PPC_WEAK_FUNC(sub_83246960);
PPC_FUNC_IMPL(__imp__sub_83246960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-14972
	ctx.r3.s64 = r11.s64 + -14972;
	// b 0x82fffd28
	sub_82FFFD28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246970"))) PPC_WEAK_FUNC(sub_83246970);
PPC_FUNC_IMPL(__imp__sub_83246970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-14984
	ctx.r3.s64 = r11.s64 + -14984;
	// b 0x82fffd28
	sub_82FFFD28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246980"))) PPC_WEAK_FUNC(sub_83246980);
PPC_FUNC_IMPL(__imp__sub_83246980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-14960
	ctx.r3.s64 = r11.s64 + -14960;
	// b 0x82fffd28
	sub_82FFFD28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246990"))) PPC_WEAK_FUNC(sub_83246990);
PPC_FUNC_IMPL(__imp__sub_83246990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-14928
	ctx.r3.s64 = r11.s64 + -14928;
	// b 0x82fffd28
	sub_82FFFD28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832469A0"))) PPC_WEAK_FUNC(sub_832469A0);
PPC_FUNC_IMPL(__imp__sub_832469A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-14940
	ctx.r3.s64 = r11.s64 + -14940;
	// b 0x82fffd28
	sub_82FFFD28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832469B0"))) PPC_WEAK_FUNC(sub_832469B0);
PPC_FUNC_IMPL(__imp__sub_832469B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-14768
	r11.s64 = r11.s64 + -14768;
	// li r10,15
	ctx.r10.s64 = 15;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_832469C4:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x832469c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832469C4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832469D8"))) PPC_WEAK_FUNC(sub_832469D8);
PPC_FUNC_IMPL(__imp__sub_832469D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r7,31
	ctx.r7.s64 = 31;
	// addi r11,r11,-14552
	r11.s64 = r11.s64 + -14552;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,16
	ctx.r10.s64 = r11.s64 + 16;
loc_832469EC:
	// stw r9,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r9.u32);
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bge 0x832469ec
	if (!cr0.lt) goto loc_832469EC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r9,524(r11)
	PPC_STORE_U32(r11.u32 + 524, ctx.r9.u32);
	// lis r7,-31963
	ctx.r7.s64 = -2094727168;
	// stw r9,536(r11)
	PPC_STORE_U32(r11.u32 + 536, ctx.r9.u32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r10,520(r11)
	PPC_STORE_U32(r11.u32 + 520, ctx.r10.u32);
	// stw r10,532(r11)
	PPC_STORE_U32(r11.u32 + 532, ctx.r10.u32);
	// addi r3,r7,-21360
	ctx.r3.s64 = ctx.r7.s64 + -21360;
	// stw r8,528(r11)
	PPC_STORE_U32(r11.u32 + 528, ctx.r8.u32);
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246A30"))) PPC_WEAK_FUNC(sub_83246A30);
PPC_FUNC_IMPL(__imp__sub_83246A30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21344
	ctx.r3.s64 = r11.s64 + -21344;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246A40"))) PPC_WEAK_FUNC(sub_83246A40);
PPC_FUNC_IMPL(__imp__sub_83246A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21328
	ctx.r3.s64 = r11.s64 + -21328;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246A50"))) PPC_WEAK_FUNC(sub_83246A50);
PPC_FUNC_IMPL(__imp__sub_83246A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21312
	ctx.r3.s64 = r11.s64 + -21312;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246A60"))) PPC_WEAK_FUNC(sub_83246A60);
PPC_FUNC_IMPL(__imp__sub_83246A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20696
	ctx.r3.s64 = r11.s64 + -20696;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246A70"))) PPC_WEAK_FUNC(sub_83246A70);
PPC_FUNC_IMPL(__imp__sub_83246A70) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-13616
	r31.s64 = r11.s64 + -13616;
	// addi r3,r31,512
	ctx.r3.s64 = r31.s64 + 512;
	// bl 0x8324b58c
	__imp__RtlInitializeCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21304
	ctx.r3.s64 = r11.s64 + -21304;
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

__attribute__((alias("__imp__sub_83246AC0"))) PPC_WEAK_FUNC(sub_83246AC0);
PPC_FUNC_IMPL(__imp__sub_83246AC0) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r5,108
	ctx.r5.s64 = 108;
	// addi r3,r11,-13056
	ctx.r3.s64 = r11.s64 + -13056;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20624
	ctx.r3.s64 = r11.s64 + -20624;
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

__attribute__((alias("__imp__sub_83246B00"))) PPC_WEAK_FUNC(sub_83246B00);
PPC_FUNC_IMPL(__imp__sub_83246B00) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-13060
	ctx.r3.s64 = r11.s64 + -13060;
	// bl 0x830d6c30
	sub_830D6C30(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-21296
	ctx.r3.s64 = r11.s64 + -21296;
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

__attribute__((alias("__imp__sub_83246B38"))) PPC_WEAK_FUNC(sub_83246B38);
PPC_FUNC_IMPL(__imp__sub_83246B38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20496
	ctx.r3.s64 = r11.s64 + -20496;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246B48"))) PPC_WEAK_FUNC(sub_83246B48);
PPC_FUNC_IMPL(__imp__sub_83246B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20480
	ctx.r3.s64 = r11.s64 + -20480;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246B58"))) PPC_WEAK_FUNC(sub_83246B58);
PPC_FUNC_IMPL(__imp__sub_83246B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20512
	ctx.r3.s64 = r11.s64 + -20512;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246B68"))) PPC_WEAK_FUNC(sub_83246B68);
PPC_FUNC_IMPL(__imp__sub_83246B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20416
	ctx.r3.s64 = r11.s64 + -20416;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246B78"))) PPC_WEAK_FUNC(sub_83246B78);
PPC_FUNC_IMPL(__imp__sub_83246B78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20400
	ctx.r3.s64 = r11.s64 + -20400;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246B88"))) PPC_WEAK_FUNC(sub_83246B88);
PPC_FUNC_IMPL(__imp__sub_83246B88) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r11,r11,-7496
	r11.s64 = r11.s64 + -7496;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x8324b58c
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20384
	ctx.r3.s64 = r11.s64 + -20384;
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

__attribute__((alias("__imp__sub_83246BC0"))) PPC_WEAK_FUNC(sub_83246BC0);
PPC_FUNC_IMPL(__imp__sub_83246BC0) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r11,r11,-7452
	r11.s64 = r11.s64 + -7452;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x8324b58c
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20368
	ctx.r3.s64 = r11.s64 + -20368;
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

__attribute__((alias("__imp__sub_83246BF8"))) PPC_WEAK_FUNC(sub_83246BF8);
PPC_FUNC_IMPL(__imp__sub_83246BF8) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r11,r11,-7408
	r11.s64 = r11.s64 + -7408;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x8324b58c
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20352
	ctx.r3.s64 = r11.s64 + -20352;
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

__attribute__((alias("__imp__sub_83246C30"))) PPC_WEAK_FUNC(sub_83246C30);
PPC_FUNC_IMPL(__imp__sub_83246C30) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-7028
	ctx.r3.s64 = r11.s64 + -7028;
	// bl 0x831218b0
	sub_831218B0(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20336
	ctx.r3.s64 = r11.s64 + -20336;
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

__attribute__((alias("__imp__sub_83246C68"))) PPC_WEAK_FUNC(sub_83246C68);
PPC_FUNC_IMPL(__imp__sub_83246C68) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r31,r11,-6992
	r31.s64 = r11.s64 + -6992;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,804(r31)
	PPC_STORE_U32(r31.u32 + 804, r11.u32);
	// addi r3,r31,404
	ctx.r3.s64 = r31.s64 + 404;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
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

__attribute__((alias("__imp__sub_83246CC0"))) PPC_WEAK_FUNC(sub_83246CC0);
PPC_FUNC_IMPL(__imp__sub_83246CC0) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r11,-7088
	ctx.r3.s64 = r11.s64 + -7088;
	// bl 0x8324b58c
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20320
	ctx.r3.s64 = r11.s64 + -20320;
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

__attribute__((alias("__imp__sub_83246CF8"))) PPC_WEAK_FUNC(sub_83246CF8);
PPC_FUNC_IMPL(__imp__sub_83246CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20312
	ctx.r3.s64 = r11.s64 + -20312;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246D08"))) PPC_WEAK_FUNC(sub_83246D08);
PPC_FUNC_IMPL(__imp__sub_83246D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-31941
	r11.s64 = -2093285376;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-30656
	r11.s64 = r11.s64 + -30656;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83246D20:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83246d20
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83246D20;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,1300(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 1300);
	f0.f64 = double(temp.f32);
	// lfs f13,2440(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2440);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lfs f12,31532(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 31532);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r9.u32);
	// lfs f11,8260(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8260);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f11,20(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83246D70"))) PPC_WEAK_FUNC(sub_83246D70);
PPC_FUNC_IMPL(__imp__sub_83246D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31963
	r11.s64 = -2094727168;
	// addi r3,r11,-20280
	ctx.r3.s64 = r11.s64 + -20280;
	// b 0x831b0e98
	sub_831B0E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246D80"))) PPC_WEAK_FUNC(sub_83246D80);
PPC_FUNC_IMPL(__imp__sub_83246D80) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,5252
	r11.s64 = r11.s64 + 5252;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x8324b58c
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// addi r3,r10,-20256
	ctx.r3.s64 = ctx.r10.s64 + -20256;
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

__attribute__((alias("__imp__sub_83246DB8"))) PPC_WEAK_FUNC(sub_83246DB8);
PPC_FUNC_IMPL(__imp__sub_83246DB8) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,5284
	r11.s64 = r11.s64 + 5284;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x8324b58c
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// addi r3,r10,-20232
	ctx.r3.s64 = ctx.r10.s64 + -20232;
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

__attribute__((alias("__imp__sub_83246DF0"))) PPC_WEAK_FUNC(sub_83246DF0);
PPC_FUNC_IMPL(__imp__sub_83246DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// lis r8,-31946
	ctx.r8.s64 = -2093613056;
	// addi r7,r8,5512
	ctx.r7.s64 = ctx.r8.s64 + 5512;
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

__attribute__((alias("__imp__sub_83246E10"))) PPC_WEAK_FUNC(sub_83246E10);
PPC_FUNC_IMPL(__imp__sub_83246E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// lis r8,-31946
	ctx.r8.s64 = -2093613056;
	// addi r7,r8,5612
	ctx.r7.s64 = ctx.r8.s64 + 5612;
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

__attribute__((alias("__imp__sub_83246E30"))) PPC_WEAK_FUNC(sub_83246E30);
PPC_FUNC_IMPL(__imp__sub_83246E30) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,16424
	ctx.r7.s64 = ctx.r10.s64 + 16424;
	// lis r8,-31932
	ctx.r8.s64 = -2092695552;
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,3604
	ctx.r4.s64 = ctx.r9.s64 + 3604;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-8440
	ctx.r3.s64 = ctx.r8.s64 + -8440;
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

__attribute__((alias("__imp__sub_83246EA0"))) PPC_WEAK_FUNC(sub_83246EA0);
PPC_FUNC_IMPL(__imp__sub_83246EA0) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,16592
	ctx.r7.s64 = ctx.r10.s64 + 16592;
	// lis r8,-31932
	ctx.r8.s64 = -2092695552;
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,3604
	ctx.r4.s64 = ctx.r9.s64 + 3604;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-8392
	ctx.r3.s64 = ctx.r8.s64 + -8392;
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

__attribute__((alias("__imp__sub_83246F10"))) PPC_WEAK_FUNC(sub_83246F10);
PPC_FUNC_IMPL(__imp__sub_83246F10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r9,-31946
	ctx.r9.s64 = -2093613056;
	// lis r8,-31946
	ctx.r8.s64 = -2093613056;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r8,5640
	r11.s64 = ctx.r8.s64 + 5640;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lwz r9,5624(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5624);
	// li r7,24
	ctx.r7.s64 = 24;
	// addi r8,r8,3272
	ctx.r8.s64 = ctx.r8.s64 + 3272;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// stw r9,80(r11)
	PPC_STORE_U32(r11.u32 + 80, ctx.r9.u32);
	// stw r10,92(r11)
	PPC_STORE_U32(r11.u32 + 92, ctx.r10.u32);
	// stw r9,104(r11)
	PPC_STORE_U32(r11.u32 + 104, ctx.r9.u32);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// stw r8,96(r11)
	PPC_STORE_U32(r11.u32 + 96, ctx.r8.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stb r7,108(r11)
	PPC_STORE_U8(r11.u32 + 108, ctx.r7.u8);
	// addi r9,r9,3260
	ctx.r9.s64 = ctx.r9.s64 + 3260;
	// sth r8,112(r11)
	PPC_STORE_U16(r11.u32 + 112, ctx.r8.u16);
	// li r7,5
	ctx.r7.s64 = 5;
	// stb r6,109(r11)
	PPC_STORE_U8(r11.u32 + 109, ctx.r6.u8);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// stw r10,100(r11)
	PPC_STORE_U32(r11.u32 + 100, ctx.r10.u32);
	// sth r5,110(r11)
	PPC_STORE_U16(r11.u32 + 110, ctx.r5.u16);
	// sth r4,114(r11)
	PPC_STORE_U16(r11.u32 + 114, ctx.r4.u16);
	// stw r10,116(r11)
	PPC_STORE_U32(r11.u32 + 116, ctx.r10.u32);
	// stw r9,120(r11)
	PPC_STORE_U32(r11.u32 + 120, ctx.r9.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r8,128(r11)
	PPC_STORE_U32(r11.u32 + 128, ctx.r8.u32);
	// li r8,14
	ctx.r8.s64 = 14;
	// stb r7,132(r11)
	PPC_STORE_U8(r11.u32 + 132, ctx.r7.u8);
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// sth r9,134(r11)
	PPC_STORE_U16(r11.u32 + 134, ctx.r9.u16);
	// sth r8,138(r11)
	PPC_STORE_U16(r11.u32 + 138, ctx.r8.u16);
	// addi r9,r7,1692
	ctx.r9.s64 = ctx.r7.s64 + 1692;
	// stw r10,124(r11)
	PPC_STORE_U32(r11.u32 + 124, ctx.r10.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// sth r10,136(r11)
	PPC_STORE_U16(r11.u32 + 136, ctx.r10.u16);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stb r6,133(r11)
	PPC_STORE_U8(r11.u32 + 133, ctx.r6.u8);
	// stw r10,140(r11)
	PPC_STORE_U32(r11.u32 + 140, ctx.r10.u32);
	// stw r9,144(r11)
	PPC_STORE_U32(r11.u32 + 144, ctx.r9.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r7,156(r11)
	PPC_STORE_U8(r11.u32 + 156, ctx.r7.u8);
	// li r7,16
	ctx.r7.s64 = 16;
	// stb r9,157(r11)
	PPC_STORE_U8(r11.u32 + 157, ctx.r9.u8);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// stw r8,152(r11)
	PPC_STORE_U32(r11.u32 + 152, ctx.r8.u32);
	// sth r8,160(r11)
	PPC_STORE_U16(r11.u32 + 160, ctx.r8.u16);
	// addi r8,r9,3252
	ctx.r8.s64 = ctx.r9.s64 + 3252;
	// sth r7,162(r11)
	PPC_STORE_U16(r11.u32 + 162, ctx.r7.u16);
	// addi r9,r11,92
	ctx.r9.s64 = r11.s64 + 92;
	// stw r10,148(r11)
	PPC_STORE_U32(r11.u32 + 148, ctx.r10.u32);
	// addi r9,r11,116
	ctx.r9.s64 = r11.s64 + 116;
	// sth r10,158(r11)
	PPC_STORE_U16(r11.u32 + 158, ctx.r10.u16);
	// addi r9,r11,140
	ctx.r9.s64 = r11.s64 + 140;
	// stw r10,164(r11)
	PPC_STORE_U32(r11.u32 + 164, ctx.r10.u32);
	// stw r8,168(r11)
	PPC_STORE_U32(r11.u32 + 168, ctx.r8.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r9,r11,164
	ctx.r9.s64 = r11.s64 + 164;
	// stw r10,172(r11)
	PPC_STORE_U32(r11.u32 + 172, ctx.r10.u32);
	// stb r8,180(r11)
	PPC_STORE_U8(r11.u32 + 180, ctx.r8.u8);
	// addi r9,r11,188
	ctx.r9.s64 = r11.s64 + 188;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r10,181(r11)
	PPC_STORE_U8(r11.u32 + 181, ctx.r10.u8);
	// li r7,18
	ctx.r7.s64 = 18;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r9,176(r11)
	PPC_STORE_U32(r11.u32 + 176, ctx.r9.u32);
	// sth r7,186(r11)
	PPC_STORE_U16(r11.u32 + 186, ctx.r7.u16);
	// sth r9,182(r11)
	PPC_STORE_U16(r11.u32 + 182, ctx.r9.u16);
	// sth r8,184(r11)
	PPC_STORE_U16(r11.u32 + 184, ctx.r8.u16);
	// stw r10,188(r11)
	PPC_STORE_U32(r11.u32 + 188, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247038"))) PPC_WEAK_FUNC(sub_83247038);
PPC_FUNC_IMPL(__imp__sub_83247038) {
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
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r6,r10,5640
	ctx.r6.s64 = ctx.r10.s64 + 5640;
	// lis r7,-31932
	ctx.r7.s64 = -2092695552;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,3236
	ctx.r4.s64 = ctx.r8.s64 + 3236;
	// addi r3,r7,-8344
	ctx.r3.s64 = ctx.r7.s64 + -8344;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r9,r9,17128
	ctx.r9.s64 = ctx.r9.s64 + 17128;
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

__attribute__((alias("__imp__sub_832470A8"))) PPC_WEAK_FUNC(sub_832470A8);
PPC_FUNC_IMPL(__imp__sub_832470A8) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,17188
	ctx.r7.s64 = ctx.r10.s64 + 17188;
	// lis r8,-31932
	ctx.r8.s64 = -2092695552;
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
	// addi r3,r8,-8296
	ctx.r3.s64 = ctx.r8.s64 + -8296;
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

__attribute__((alias("__imp__sub_83247118"))) PPC_WEAK_FUNC(sub_83247118);
PPC_FUNC_IMPL(__imp__sub_83247118) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,17236
	ctx.r7.s64 = ctx.r10.s64 + 17236;
	// lis r8,-31932
	ctx.r8.s64 = -2092695552;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,3380
	ctx.r4.s64 = ctx.r9.s64 + 3380;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-8248
	ctx.r3.s64 = ctx.r8.s64 + -8248;
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

__attribute__((alias("__imp__sub_83247188"))) PPC_WEAK_FUNC(sub_83247188);
PPC_FUNC_IMPL(__imp__sub_83247188) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,17304
	ctx.r7.s64 = ctx.r10.s64 + 17304;
	// lis r8,-31932
	ctx.r8.s64 = -2092695552;
	// li r6,10
	ctx.r6.s64 = 10;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,3604
	ctx.r4.s64 = ctx.r9.s64 + 3604;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-8200
	ctx.r3.s64 = ctx.r8.s64 + -8200;
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

__attribute__((alias("__imp__sub_832471F8"))) PPC_WEAK_FUNC(sub_832471F8);
PPC_FUNC_IMPL(__imp__sub_832471F8) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,17544
	ctx.r7.s64 = ctx.r10.s64 + 17544;
	// lis r8,-31932
	ctx.r8.s64 = -2092695552;
	// li r6,10
	ctx.r6.s64 = 10;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,3604
	ctx.r4.s64 = ctx.r9.s64 + 3604;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-8152
	ctx.r3.s64 = ctx.r8.s64 + -8152;
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

__attribute__((alias("__imp__sub_83247268"))) PPC_WEAK_FUNC(sub_83247268);
PPC_FUNC_IMPL(__imp__sub_83247268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r9,-31946
	ctx.r9.s64 = -2093613056;
	// lis r8,-31946
	ctx.r8.s64 = -2093613056;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r8,5848
	r11.s64 = ctx.r8.s64 + 5848;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lwz r9,5832(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5832);
	// li r7,24
	ctx.r7.s64 = 24;
	// addi r8,r8,3272
	ctx.r8.s64 = ctx.r8.s64 + 3272;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// stw r9,80(r11)
	PPC_STORE_U32(r11.u32 + 80, ctx.r9.u32);
	// stw r10,92(r11)
	PPC_STORE_U32(r11.u32 + 92, ctx.r10.u32);
	// stw r9,104(r11)
	PPC_STORE_U32(r11.u32 + 104, ctx.r9.u32);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// stw r8,96(r11)
	PPC_STORE_U32(r11.u32 + 96, ctx.r8.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r9,r9,3260
	ctx.r9.s64 = ctx.r9.s64 + 3260;
	// stb r7,108(r11)
	PPC_STORE_U8(r11.u32 + 108, ctx.r7.u8);
	// sth r8,112(r11)
	PPC_STORE_U16(r11.u32 + 112, ctx.r8.u16);
	// li r7,5
	ctx.r7.s64 = 5;
	// stb r6,109(r11)
	PPC_STORE_U8(r11.u32 + 109, ctx.r6.u8);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// stw r10,100(r11)
	PPC_STORE_U32(r11.u32 + 100, ctx.r10.u32);
	// sth r5,110(r11)
	PPC_STORE_U16(r11.u32 + 110, ctx.r5.u16);
	// sth r4,114(r11)
	PPC_STORE_U16(r11.u32 + 114, ctx.r4.u16);
	// stw r10,116(r11)
	PPC_STORE_U32(r11.u32 + 116, ctx.r10.u32);
	// stw r9,120(r11)
	PPC_STORE_U32(r11.u32 + 120, ctx.r9.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r8,128(r11)
	PPC_STORE_U32(r11.u32 + 128, ctx.r8.u32);
	// li r8,14
	ctx.r8.s64 = 14;
	// stb r7,132(r11)
	PPC_STORE_U8(r11.u32 + 132, ctx.r7.u8);
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// sth r9,134(r11)
	PPC_STORE_U16(r11.u32 + 134, ctx.r9.u16);
	// sth r8,138(r11)
	PPC_STORE_U16(r11.u32 + 138, ctx.r8.u16);
	// addi r9,r7,1692
	ctx.r9.s64 = ctx.r7.s64 + 1692;
	// stw r10,124(r11)
	PPC_STORE_U32(r11.u32 + 124, ctx.r10.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// sth r10,136(r11)
	PPC_STORE_U16(r11.u32 + 136, ctx.r10.u16);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stb r6,133(r11)
	PPC_STORE_U8(r11.u32 + 133, ctx.r6.u8);
	// stw r10,140(r11)
	PPC_STORE_U32(r11.u32 + 140, ctx.r10.u32);
	// stw r9,144(r11)
	PPC_STORE_U32(r11.u32 + 144, ctx.r9.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r7,156(r11)
	PPC_STORE_U8(r11.u32 + 156, ctx.r7.u8);
	// li r7,16
	ctx.r7.s64 = 16;
	// stb r9,157(r11)
	PPC_STORE_U8(r11.u32 + 157, ctx.r9.u8);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// stw r8,152(r11)
	PPC_STORE_U32(r11.u32 + 152, ctx.r8.u32);
	// sth r8,160(r11)
	PPC_STORE_U16(r11.u32 + 160, ctx.r8.u16);
	// addi r8,r9,3252
	ctx.r8.s64 = ctx.r9.s64 + 3252;
	// sth r7,162(r11)
	PPC_STORE_U16(r11.u32 + 162, ctx.r7.u16);
	// addi r9,r11,92
	ctx.r9.s64 = r11.s64 + 92;
	// stw r10,148(r11)
	PPC_STORE_U32(r11.u32 + 148, ctx.r10.u32);
	// addi r9,r11,116
	ctx.r9.s64 = r11.s64 + 116;
	// sth r10,158(r11)
	PPC_STORE_U16(r11.u32 + 158, ctx.r10.u16);
	// addi r9,r11,140
	ctx.r9.s64 = r11.s64 + 140;
	// stw r10,164(r11)
	PPC_STORE_U32(r11.u32 + 164, ctx.r10.u32);
	// stw r8,168(r11)
	PPC_STORE_U32(r11.u32 + 168, ctx.r8.u32);
	// addi r9,r11,164
	ctx.r9.s64 = r11.s64 + 164;
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r10,172(r11)
	PPC_STORE_U32(r11.u32 + 172, ctx.r10.u32);
	// addi r9,r11,188
	ctx.r9.s64 = r11.s64 + 188;
	// stb r10,181(r11)
	PPC_STORE_U8(r11.u32 + 181, ctx.r10.u8);
	// addi r9,r11,212
	ctx.r9.s64 = r11.s64 + 212;
	// stb r8,180(r11)
	PPC_STORE_U8(r11.u32 + 180, ctx.r8.u8);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// li r7,18
	ctx.r7.s64 = 18;
	// stw r9,176(r11)
	PPC_STORE_U32(r11.u32 + 176, ctx.r9.u32);
	// sth r9,182(r11)
	PPC_STORE_U16(r11.u32 + 182, ctx.r9.u16);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// sth r8,184(r11)
	PPC_STORE_U16(r11.u32 + 184, ctx.r8.u16);
	// sth r7,186(r11)
	PPC_STORE_U16(r11.u32 + 186, ctx.r7.u16);
	// addi r9,r9,17284
	ctx.r9.s64 = ctx.r9.s64 + 17284;
	// stw r10,188(r11)
	PPC_STORE_U32(r11.u32 + 188, ctx.r10.u32);
	// stw r9,192(r11)
	PPC_STORE_U32(r11.u32 + 192, ctx.r9.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r10,196(r11)
	PPC_STORE_U32(r11.u32 + 196, ctx.r10.u32);
	// stw r8,200(r11)
	PPC_STORE_U32(r11.u32 + 200, ctx.r8.u32);
	// stb r7,204(r11)
	PPC_STORE_U8(r11.u32 + 204, ctx.r7.u8);
	// stb r10,205(r11)
	PPC_STORE_U8(r11.u32 + 205, ctx.r10.u8);
	// sth r7,210(r11)
	PPC_STORE_U16(r11.u32 + 210, ctx.r7.u16);
	// sth r9,206(r11)
	PPC_STORE_U16(r11.u32 + 206, ctx.r9.u16);
	// sth r8,208(r11)
	PPC_STORE_U16(r11.u32 + 208, ctx.r8.u16);
	// stw r10,212(r11)
	PPC_STORE_U32(r11.u32 + 212, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832473C8"))) PPC_WEAK_FUNC(sub_832473C8);
PPC_FUNC_IMPL(__imp__sub_832473C8) {
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
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r6,r10,5848
	ctx.r6.s64 = ctx.r10.s64 + 5848;
	// lis r7,-31932
	ctx.r7.s64 = -2092695552;
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,3236
	ctx.r4.s64 = ctx.r8.s64 + 3236;
	// addi r3,r7,-8104
	ctx.r3.s64 = ctx.r7.s64 + -8104;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r9,r9,18152
	ctx.r9.s64 = ctx.r9.s64 + 18152;
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

__attribute__((alias("__imp__sub_83247438"))) PPC_WEAK_FUNC(sub_83247438);
PPC_FUNC_IMPL(__imp__sub_83247438) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,18212
	ctx.r7.s64 = ctx.r10.s64 + 18212;
	// lis r8,-31932
	ctx.r8.s64 = -2092695552;
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
	// addi r3,r8,-8056
	ctx.r3.s64 = ctx.r8.s64 + -8056;
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

__attribute__((alias("__imp__sub_832474A8"))) PPC_WEAK_FUNC(sub_832474A8);
PPC_FUNC_IMPL(__imp__sub_832474A8) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,18264
	ctx.r7.s64 = ctx.r10.s64 + 18264;
	// lis r8,-31932
	ctx.r8.s64 = -2092695552;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,3380
	ctx.r4.s64 = ctx.r9.s64 + 3380;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-8008
	ctx.r3.s64 = ctx.r8.s64 + -8008;
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

__attribute__((alias("__imp__sub_83247518"))) PPC_WEAK_FUNC(sub_83247518);
PPC_FUNC_IMPL(__imp__sub_83247518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// lis r8,-31946
	ctx.r8.s64 = -2093613056;
	// addi r7,r8,6252
	ctx.r7.s64 = ctx.r8.s64 + 6252;
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

__attribute__((alias("__imp__sub_83247538"))) PPC_WEAK_FUNC(sub_83247538);
PPC_FUNC_IMPL(__imp__sub_83247538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,6516
	ctx.r3.s64 = r11.s64 + 6516;
	// b 0x82df9978
	sub_82DF9978(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247548"))) PPC_WEAK_FUNC(sub_83247548);
PPC_FUNC_IMPL(__imp__sub_83247548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,7452
	ctx.r3.s64 = r11.s64 + 7452;
	// b 0x822c17d0
	sub_822C17D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247558"))) PPC_WEAK_FUNC(sub_83247558);
PPC_FUNC_IMPL(__imp__sub_83247558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,7624
	ctx.r3.s64 = r11.s64 + 7624;
	// b 0x82df9978
	sub_82DF9978(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247568"))) PPC_WEAK_FUNC(sub_83247568);
PPC_FUNC_IMPL(__imp__sub_83247568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,6936
	ctx.r3.s64 = r11.s64 + 6936;
	// b 0x82ea7dc8
	sub_82EA7DC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247578"))) PPC_WEAK_FUNC(sub_83247578);
PPC_FUNC_IMPL(__imp__sub_83247578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,6872
	ctx.r3.s64 = r11.s64 + 6872;
	// b 0x82ea79d0
	sub_82EA79D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247588"))) PPC_WEAK_FUNC(sub_83247588);
PPC_FUNC_IMPL(__imp__sub_83247588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,6768
	ctx.r3.s64 = r11.s64 + 6768;
	// b 0x82ea7738
	sub_82EA7738(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247598"))) PPC_WEAK_FUNC(sub_83247598);
PPC_FUNC_IMPL(__imp__sub_83247598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,7172
	ctx.r3.s64 = r11.s64 + 7172;
	// b 0x82df9978
	sub_82DF9978(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832475A8"))) PPC_WEAK_FUNC(sub_832475A8);
PPC_FUNC_IMPL(__imp__sub_832475A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,7440
	r11.s64 = r11.s64 + 7440;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x822c0890
	sub_822C0890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832475C0"))) PPC_WEAK_FUNC(sub_832475C0);
PPC_FUNC_IMPL(__imp__sub_832475C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832475C8"))) PPC_WEAK_FUNC(sub_832475C8);
PPC_FUNC_IMPL(__imp__sub_832475C8) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r30,8
	r30.s64 = 8;
	// addi r11,r11,7956
	r11.s64 = r11.s64 + 7956;
	// addi r31,r11,36
	r31.s64 = r11.s64 + 36;
loc_832475EC:
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x832475ec
	if (!cr0.lt) goto loc_832475EC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247618"))) PPC_WEAK_FUNC(sub_83247618);
PPC_FUNC_IMPL(__imp__sub_83247618) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,7992
	r11.s64 = r11.s64 + 7992;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x822c0890
	sub_822C0890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247630"))) PPC_WEAK_FUNC(sub_83247630);
PPC_FUNC_IMPL(__imp__sub_83247630) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247638"))) PPC_WEAK_FUNC(sub_83247638);
PPC_FUNC_IMPL(__imp__sub_83247638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,8000
	r11.s64 = r11.s64 + 8000;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x822c0890
	sub_822C0890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247650"))) PPC_WEAK_FUNC(sub_83247650);
PPC_FUNC_IMPL(__imp__sub_83247650) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247658"))) PPC_WEAK_FUNC(sub_83247658);
PPC_FUNC_IMPL(__imp__sub_83247658) {
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
	// addi r31,r11,8052
	r31.s64 = r11.s64 + 8052;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822cd7f0
	sub_822CD7F0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x822c0270
	sub_822C0270(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
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

__attribute__((alias("__imp__sub_832476A0"))) PPC_WEAK_FUNC(sub_832476A0);
PPC_FUNC_IMPL(__imp__sub_832476A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,8100
	r11.s64 = r11.s64 + 8100;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x822c0890
	sub_822C0890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832476B8"))) PPC_WEAK_FUNC(sub_832476B8);
PPC_FUNC_IMPL(__imp__sub_832476B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832476C0"))) PPC_WEAK_FUNC(sub_832476C0);
PPC_FUNC_IMPL(__imp__sub_832476C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,8108
	r11.s64 = r11.s64 + 8108;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x822c0890
	sub_822C0890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832476D8"))) PPC_WEAK_FUNC(sub_832476D8);
PPC_FUNC_IMPL(__imp__sub_832476D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832476E0"))) PPC_WEAK_FUNC(sub_832476E0);
PPC_FUNC_IMPL(__imp__sub_832476E0) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,8152
	r31.s64 = r11.s64 + 8152;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x822c2248
	sub_822C2248(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822c2248
	sub_822C2248(ctx, base);
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

__attribute__((alias("__imp__sub_83247730"))) PPC_WEAK_FUNC(sub_83247730);
PPC_FUNC_IMPL(__imp__sub_83247730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,12016
	ctx.r3.s64 = r11.s64 + 12016;
	// b 0x82dfb148
	sub_82DFB148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247740"))) PPC_WEAK_FUNC(sub_83247740);
PPC_FUNC_IMPL(__imp__sub_83247740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,12024
	ctx.r3.s64 = r11.s64 + 12024;
	// b 0x82dfb148
	sub_82DFB148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247750"))) PPC_WEAK_FUNC(sub_83247750);
PPC_FUNC_IMPL(__imp__sub_83247750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,12056
	ctx.r3.s64 = r11.s64 + 12056;
	// b 0x82dfb148
	sub_82DFB148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247760"))) PPC_WEAK_FUNC(sub_83247760);
PPC_FUNC_IMPL(__imp__sub_83247760) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,12112
	r11.s64 = r11.s64 + 12112;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x822c0890
	sub_822C0890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247778"))) PPC_WEAK_FUNC(sub_83247778);
PPC_FUNC_IMPL(__imp__sub_83247778) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247780"))) PPC_WEAK_FUNC(sub_83247780);
PPC_FUNC_IMPL(__imp__sub_83247780) {
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
	// addi r31,r11,12080
	r31.s64 = r11.s64 + 12080;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82b7b7d0
	sub_82B7B7D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ae3e38
	sub_82AE3E38(ctx, base);
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

__attribute__((alias("__imp__sub_832477C0"))) PPC_WEAK_FUNC(sub_832477C0);
PPC_FUNC_IMPL(__imp__sub_832477C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,12196
	r11.s64 = r11.s64 + 12196;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x822c0890
	sub_822C0890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832477D8"))) PPC_WEAK_FUNC(sub_832477D8);
PPC_FUNC_IMPL(__imp__sub_832477D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832477E0"))) PPC_WEAK_FUNC(sub_832477E0);
PPC_FUNC_IMPL(__imp__sub_832477E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,12204
	r11.s64 = r11.s64 + 12204;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x822c0890
	sub_822C0890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832477F8"))) PPC_WEAK_FUNC(sub_832477F8);
PPC_FUNC_IMPL(__imp__sub_832477F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247800"))) PPC_WEAK_FUNC(sub_83247800);
PPC_FUNC_IMPL(__imp__sub_83247800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,12212
	r11.s64 = r11.s64 + 12212;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x822c0890
	sub_822C0890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247818"))) PPC_WEAK_FUNC(sub_83247818);
PPC_FUNC_IMPL(__imp__sub_83247818) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247820"))) PPC_WEAK_FUNC(sub_83247820);
PPC_FUNC_IMPL(__imp__sub_83247820) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,12220
	r11.s64 = r11.s64 + 12220;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x822c0890
	sub_822C0890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247838"))) PPC_WEAK_FUNC(sub_83247838);
PPC_FUNC_IMPL(__imp__sub_83247838) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247840"))) PPC_WEAK_FUNC(sub_83247840);
PPC_FUNC_IMPL(__imp__sub_83247840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,12228
	r11.s64 = r11.s64 + 12228;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x822c0890
	sub_822C0890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247858"))) PPC_WEAK_FUNC(sub_83247858);
PPC_FUNC_IMPL(__imp__sub_83247858) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247860"))) PPC_WEAK_FUNC(sub_83247860);
PPC_FUNC_IMPL(__imp__sub_83247860) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,12236
	r11.s64 = r11.s64 + 12236;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x822c0890
	sub_822C0890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247878"))) PPC_WEAK_FUNC(sub_83247878);
PPC_FUNC_IMPL(__imp__sub_83247878) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247880"))) PPC_WEAK_FUNC(sub_83247880);
PPC_FUNC_IMPL(__imp__sub_83247880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,12244
	r11.s64 = r11.s64 + 12244;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x822c0890
	sub_822C0890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247898"))) PPC_WEAK_FUNC(sub_83247898);
PPC_FUNC_IMPL(__imp__sub_83247898) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832478A0"))) PPC_WEAK_FUNC(sub_832478A0);
PPC_FUNC_IMPL(__imp__sub_832478A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,12188
	r11.s64 = r11.s64 + 12188;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x822c0890
	sub_822C0890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832478B8"))) PPC_WEAK_FUNC(sub_832478B8);
PPC_FUNC_IMPL(__imp__sub_832478B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832478C0"))) PPC_WEAK_FUNC(sub_832478C0);
PPC_FUNC_IMPL(__imp__sub_832478C0) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r30,17
	r30.s64 = 17;
	// addi r11,r11,15960
	r11.s64 = r11.s64 + 15960;
	// addi r31,r11,728
	r31.s64 = r11.s64 + 728;
loc_832478E4:
	// addi r31,r31,-40
	r31.s64 = r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x832478e4
	if (!cr0.lt) goto loc_832478E4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247910"))) PPC_WEAK_FUNC(sub_83247910);
PPC_FUNC_IMPL(__imp__sub_83247910) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r30,13
	r30.s64 = 13;
	// addi r11,r11,16680
	r11.s64 = r11.s64 + 16680;
	// addi r31,r11,568
	r31.s64 = r11.s64 + 568;
loc_83247934:
	// addi r31,r31,-40
	r31.s64 = r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x83247934
	if (!cr0.lt) goto loc_83247934;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247960"))) PPC_WEAK_FUNC(sub_83247960);
PPC_FUNC_IMPL(__imp__sub_83247960) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r30,4
	r30.s64 = 4;
	// addi r11,r11,17240
	r11.s64 = r11.s64 + 17240;
	// addi r31,r11,208
	r31.s64 = r11.s64 + 208;
loc_83247984:
	// addi r31,r31,-40
	r31.s64 = r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x83247984
	if (!cr0.lt) goto loc_83247984;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832479B0"))) PPC_WEAK_FUNC(sub_832479B0);
PPC_FUNC_IMPL(__imp__sub_832479B0) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r30,4
	r30.s64 = 4;
	// addi r11,r11,17440
	r11.s64 = r11.s64 + 17440;
	// addi r31,r11,208
	r31.s64 = r11.s64 + 208;
loc_832479D4:
	// addi r31,r31,-40
	r31.s64 = r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x832479d4
	if (!cr0.lt) goto loc_832479D4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247A00"))) PPC_WEAK_FUNC(sub_83247A00);
PPC_FUNC_IMPL(__imp__sub_83247A00) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r30,13
	r30.s64 = 13;
	// addi r11,r11,17640
	r11.s64 = r11.s64 + 17640;
	// addi r31,r11,568
	r31.s64 = r11.s64 + 568;
loc_83247A24:
	// addi r31,r31,-40
	r31.s64 = r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x83247a24
	if (!cr0.lt) goto loc_83247A24;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247A50"))) PPC_WEAK_FUNC(sub_83247A50);
PPC_FUNC_IMPL(__imp__sub_83247A50) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r30,79
	r30.s64 = 79;
	// addi r11,r11,12360
	r11.s64 = r11.s64 + 12360;
	// addi r31,r11,3208
	r31.s64 = r11.s64 + 3208;
loc_83247A74:
	// addi r31,r31,-40
	r31.s64 = r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x83247a74
	if (!cr0.lt) goto loc_83247A74;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247AA0"))) PPC_WEAK_FUNC(sub_83247AA0);
PPC_FUNC_IMPL(__imp__sub_83247AA0) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r30,9
	r30.s64 = 9;
	// addi r11,r11,15560
	r11.s64 = r11.s64 + 15560;
	// addi r31,r11,408
	r31.s64 = r11.s64 + 408;
loc_83247AC4:
	// addi r31,r31,-40
	r31.s64 = r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x83247ac4
	if (!cr0.lt) goto loc_83247AC4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247AF0"))) PPC_WEAK_FUNC(sub_83247AF0);
PPC_FUNC_IMPL(__imp__sub_83247AF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,18256
	r11.s64 = r11.s64 + 18256;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x822c0890
	sub_822C0890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247B08"))) PPC_WEAK_FUNC(sub_83247B08);
PPC_FUNC_IMPL(__imp__sub_83247B08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247B10"))) PPC_WEAK_FUNC(sub_83247B10);
PPC_FUNC_IMPL(__imp__sub_83247B10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,18264
	r11.s64 = r11.s64 + 18264;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x822c0890
	sub_822C0890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247B28"))) PPC_WEAK_FUNC(sub_83247B28);
PPC_FUNC_IMPL(__imp__sub_83247B28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247B30"))) PPC_WEAK_FUNC(sub_83247B30);
PPC_FUNC_IMPL(__imp__sub_83247B30) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r30,3
	r30.s64 = 3;
	// addi r11,r11,18272
	r11.s64 = r11.s64 + 18272;
	// addi r31,r11,36
	r31.s64 = r11.s64 + 36;
loc_83247B54:
	// addi r31,r31,-8
	r31.s64 = r31.s64 + -8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83247b68
	if (cr6.eq) goto loc_83247B68;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_83247B68:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x83247b54
	if (!cr0.lt) goto loc_83247B54;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247B88"))) PPC_WEAK_FUNC(sub_83247B88);
PPC_FUNC_IMPL(__imp__sub_83247B88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,18216
	r11.s64 = r11.s64 + 18216;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x822c0890
	sub_822C0890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247BA0"))) PPC_WEAK_FUNC(sub_83247BA0);
PPC_FUNC_IMPL(__imp__sub_83247BA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247BA8"))) PPC_WEAK_FUNC(sub_83247BA8);
PPC_FUNC_IMPL(__imp__sub_83247BA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,18464
	r11.s64 = r11.s64 + 18464;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x822c0890
	sub_822C0890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247BC0"))) PPC_WEAK_FUNC(sub_83247BC0);
PPC_FUNC_IMPL(__imp__sub_83247BC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247BC8"))) PPC_WEAK_FUNC(sub_83247BC8);
PPC_FUNC_IMPL(__imp__sub_83247BC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,18472
	r11.s64 = r11.s64 + 18472;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x822c0890
	sub_822C0890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247BE0"))) PPC_WEAK_FUNC(sub_83247BE0);
PPC_FUNC_IMPL(__imp__sub_83247BE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247BE8"))) PPC_WEAK_FUNC(sub_83247BE8);
PPC_FUNC_IMPL(__imp__sub_83247BE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,18480
	r11.s64 = r11.s64 + 18480;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x822c0890
	sub_822C0890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247C00"))) PPC_WEAK_FUNC(sub_83247C00);
PPC_FUNC_IMPL(__imp__sub_83247C00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247C08"))) PPC_WEAK_FUNC(sub_83247C08);
PPC_FUNC_IMPL(__imp__sub_83247C08) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r30,2
	r30.s64 = 2;
	// addi r11,r11,21496
	r11.s64 = r11.s64 + 21496;
	// addi r31,r11,128
	r31.s64 = r11.s64 + 128;
loc_83247C2C:
	// addi r31,r31,-40
	r31.s64 = r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x83247c2c
	if (!cr0.lt) goto loc_83247C2C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247C58"))) PPC_WEAK_FUNC(sub_83247C58);
PPC_FUNC_IMPL(__imp__sub_83247C58) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r30,1
	r30.s64 = 1;
	// addi r11,r11,21616
	r11.s64 = r11.s64 + 21616;
	// addi r31,r11,88
	r31.s64 = r11.s64 + 88;
loc_83247C7C:
	// addi r31,r31,-40
	r31.s64 = r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x83247c7c
	if (!cr0.lt) goto loc_83247C7C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247CA8"))) PPC_WEAK_FUNC(sub_83247CA8);
PPC_FUNC_IMPL(__imp__sub_83247CA8) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r30,73
	r30.s64 = 73;
	// addi r11,r11,18536
	r11.s64 = r11.s64 + 18536;
	// addi r31,r11,2968
	r31.s64 = r11.s64 + 2968;
loc_83247CCC:
	// addi r31,r31,-40
	r31.s64 = r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x83247ccc
	if (!cr0.lt) goto loc_83247CCC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247CF8"))) PPC_WEAK_FUNC(sub_83247CF8);
PPC_FUNC_IMPL(__imp__sub_83247CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,21780
	ctx.r3.s64 = r11.s64 + 21780;
	// b 0x823d54f0
	sub_823D54F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247D08"))) PPC_WEAK_FUNC(sub_83247D08);
PPC_FUNC_IMPL(__imp__sub_83247D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,21976
	ctx.r3.s64 = r11.s64 + 21976;
	// b 0x82424020
	sub_82424020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247D18"))) PPC_WEAK_FUNC(sub_83247D18);
PPC_FUNC_IMPL(__imp__sub_83247D18) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r30,3
	r30.s64 = 3;
	// addi r11,r11,26904
	r11.s64 = r11.s64 + 26904;
	// addi r31,r11,168
	r31.s64 = r11.s64 + 168;
loc_83247D3C:
	// addi r31,r31,-40
	r31.s64 = r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x83247d3c
	if (!cr0.lt) goto loc_83247D3C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247D68"))) PPC_WEAK_FUNC(sub_83247D68);
PPC_FUNC_IMPL(__imp__sub_83247D68) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r30,2
	r30.s64 = 2;
	// addi r11,r11,27064
	r11.s64 = r11.s64 + 27064;
	// addi r31,r11,128
	r31.s64 = r11.s64 + 128;
loc_83247D8C:
	// addi r31,r31,-40
	r31.s64 = r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x83247d8c
	if (!cr0.lt) goto loc_83247D8C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247DB8"))) PPC_WEAK_FUNC(sub_83247DB8);
PPC_FUNC_IMPL(__imp__sub_83247DB8) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r30,2
	r30.s64 = 2;
	// addi r11,r11,27264
	r11.s64 = r11.s64 + 27264;
	// addi r31,r11,128
	r31.s64 = r11.s64 + 128;
loc_83247DDC:
	// addi r31,r31,-40
	r31.s64 = r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x83247ddc
	if (!cr0.lt) goto loc_83247DDC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247E08"))) PPC_WEAK_FUNC(sub_83247E08);
PPC_FUNC_IMPL(__imp__sub_83247E08) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r30,13
	r30.s64 = 13;
	// addi r11,r11,26344
	r11.s64 = r11.s64 + 26344;
	// addi r31,r11,568
	r31.s64 = r11.s64 + 568;
loc_83247E2C:
	// addi r31,r31,-40
	r31.s64 = r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x83247e2c
	if (!cr0.lt) goto loc_83247E2C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247E58"))) PPC_WEAK_FUNC(sub_83247E58);
PPC_FUNC_IMPL(__imp__sub_83247E58) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r30,1
	r30.s64 = 1;
	// addi r11,r11,27184
	r11.s64 = r11.s64 + 27184;
	// addi r31,r11,88
	r31.s64 = r11.s64 + 88;
loc_83247E7C:
	// addi r31,r31,-40
	r31.s64 = r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x83247e7c
	if (!cr0.lt) goto loc_83247E7C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247EA8"))) PPC_WEAK_FUNC(sub_83247EA8);
PPC_FUNC_IMPL(__imp__sub_83247EA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,27392
	r11.s64 = r11.s64 + 27392;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x822c0890
	sub_822C0890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247EC0"))) PPC_WEAK_FUNC(sub_83247EC0);
PPC_FUNC_IMPL(__imp__sub_83247EC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247EC8"))) PPC_WEAK_FUNC(sub_83247EC8);
PPC_FUNC_IMPL(__imp__sub_83247EC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,27400
	r11.s64 = r11.s64 + 27400;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x822c0890
	sub_822C0890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247EE0"))) PPC_WEAK_FUNC(sub_83247EE0);
PPC_FUNC_IMPL(__imp__sub_83247EE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247EE8"))) PPC_WEAK_FUNC(sub_83247EE8);
PPC_FUNC_IMPL(__imp__sub_83247EE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,27384
	r11.s64 = r11.s64 + 27384;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x822c0890
	sub_822C0890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247F00"))) PPC_WEAK_FUNC(sub_83247F00);
PPC_FUNC_IMPL(__imp__sub_83247F00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247F08"))) PPC_WEAK_FUNC(sub_83247F08);
PPC_FUNC_IMPL(__imp__sub_83247F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,27412
	ctx.r3.s64 = r11.s64 + 27412;
	// b 0x82dfb148
	sub_82DFB148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247F18"))) PPC_WEAK_FUNC(sub_83247F18);
PPC_FUNC_IMPL(__imp__sub_83247F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,27420
	ctx.r3.s64 = r11.s64 + 27420;
	// b 0x82dfb148
	sub_82DFB148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247F28"))) PPC_WEAK_FUNC(sub_83247F28);
PPC_FUNC_IMPL(__imp__sub_83247F28) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r30,12
	r30.s64 = 12;
	// addi r11,r11,27488
	r11.s64 = r11.s64 + 27488;
	// addi r31,r11,528
	r31.s64 = r11.s64 + 528;
loc_83247F4C:
	// addi r31,r31,-40
	r31.s64 = r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x83247f4c
	if (!cr0.lt) goto loc_83247F4C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247F78"))) PPC_WEAK_FUNC(sub_83247F78);
PPC_FUNC_IMPL(__imp__sub_83247F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,28008
	ctx.r3.s64 = r11.s64 + 28008;
	// b 0x82dfb148
	sub_82DFB148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247F88"))) PPC_WEAK_FUNC(sub_83247F88);
PPC_FUNC_IMPL(__imp__sub_83247F88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,28036
	ctx.r3.s64 = r11.s64 + 28036;
	// b 0x82dfb148
	sub_82DFB148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247F98"))) PPC_WEAK_FUNC(sub_83247F98);
PPC_FUNC_IMPL(__imp__sub_83247F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,28208
	ctx.r3.s64 = r11.s64 + 28208;
	// b 0x82dfb148
	sub_82DFB148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247FA8"))) PPC_WEAK_FUNC(sub_83247FA8);
PPC_FUNC_IMPL(__imp__sub_83247FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,28312
	ctx.r3.s64 = r11.s64 + 28312;
	// b 0x82dfb148
	sub_82DFB148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247FB8"))) PPC_WEAK_FUNC(sub_83247FB8);
PPC_FUNC_IMPL(__imp__sub_83247FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,28320
	ctx.r3.s64 = r11.s64 + 28320;
	// b 0x82dfb148
	sub_82DFB148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247FC8"))) PPC_WEAK_FUNC(sub_83247FC8);
PPC_FUNC_IMPL(__imp__sub_83247FC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,28388
	ctx.r3.s64 = r11.s64 + 28388;
	// b 0x82dfb148
	sub_82DFB148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247FD8"))) PPC_WEAK_FUNC(sub_83247FD8);
PPC_FUNC_IMPL(__imp__sub_83247FD8) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r31,28500(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 28500);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83248008
	if (cr6.eq) goto loc_83248008;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b7b7d0
	sub_82B7B7D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_83248008:
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

__attribute__((alias("__imp__sub_83248020"))) PPC_WEAK_FUNC(sub_83248020);
PPC_FUNC_IMPL(__imp__sub_83248020) {
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
	// addi r31,r11,28504
	r31.s64 = r11.s64 + 28504;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x825d38b0
	sub_825D38B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248e8e0
	sub_8248E8E0(ctx, base);
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

__attribute__((alias("__imp__sub_83248060"))) PPC_WEAK_FUNC(sub_83248060);
PPC_FUNC_IMPL(__imp__sub_83248060) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r31,28496(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 28496);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83248090
	if (cr6.eq) goto loc_83248090;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248e238
	sub_8248E238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_83248090:
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

__attribute__((alias("__imp__sub_832480A8"))) PPC_WEAK_FUNC(sub_832480A8);
PPC_FUNC_IMPL(__imp__sub_832480A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,29212
	ctx.r3.s64 = r11.s64 + 29212;
	// b 0x82ae3428
	sub_82AE3428(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832480B8"))) PPC_WEAK_FUNC(sub_832480B8);
PPC_FUNC_IMPL(__imp__sub_832480B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,29168
	ctx.r3.s64 = r11.s64 + 29168;
	// b 0x82529c80
	sub_82529C80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832480C8"))) PPC_WEAK_FUNC(sub_832480C8);
PPC_FUNC_IMPL(__imp__sub_832480C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r9,-31946
	ctx.r9.s64 = -2093613056;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r9,29240
	ctx.r10.s64 = ctx.r9.s64 + 29240;
	// addi r11,r11,3820
	r11.s64 = r11.s64 + 3820;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// stw r11,29240(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29240, r11.u32);
	// b 0x82dfa218
	sub_82DFA218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832480E8"))) PPC_WEAK_FUNC(sub_832480E8);
PPC_FUNC_IMPL(__imp__sub_832480E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,30568
	ctx.r3.s64 = r11.s64 + 30568;
	// b 0x82dfa218
	sub_82DFA218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832480F8"))) PPC_WEAK_FUNC(sub_832480F8);
PPC_FUNC_IMPL(__imp__sub_832480F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,30104
	ctx.r3.s64 = r11.s64 + 30104;
	// b 0x82dfa218
	sub_82DFA218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83248108"))) PPC_WEAK_FUNC(sub_83248108);
PPC_FUNC_IMPL(__imp__sub_83248108) {
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
	// addi r31,r11,30808
	r31.s64 = r11.s64 + 30808;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82bb4b60
	sub_82BB4B60(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82bb4b60
	sub_82BB4B60(ctx, base);
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

__attribute__((alias("__imp__sub_83248150"))) PPC_WEAK_FUNC(sub_83248150);
PPC_FUNC_IMPL(__imp__sub_83248150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,30788
	ctx.r3.s64 = r11.s64 + 30788;
	// b 0x824eec50
	sub_824EEC50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83248160"))) PPC_WEAK_FUNC(sub_83248160);
PPC_FUNC_IMPL(__imp__sub_83248160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,30944
	r11.s64 = r11.s64 + 30944;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x822c0890
	sub_822C0890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83248178"))) PPC_WEAK_FUNC(sub_83248178);
PPC_FUNC_IMPL(__imp__sub_83248178) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83248180"))) PPC_WEAK_FUNC(sub_83248180);
PPC_FUNC_IMPL(__imp__sub_83248180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,30960
	r11.s64 = r11.s64 + 30960;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x822c0890
	sub_822C0890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83248198"))) PPC_WEAK_FUNC(sub_83248198);
PPC_FUNC_IMPL(__imp__sub_83248198) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832481A0"))) PPC_WEAK_FUNC(sub_832481A0);
PPC_FUNC_IMPL(__imp__sub_832481A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r11,r11,30968
	r11.s64 = r11.s64 + 30968;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x822c0890
	sub_822C0890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832481B8"))) PPC_WEAK_FUNC(sub_832481B8);
PPC_FUNC_IMPL(__imp__sub_832481B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832481C0"))) PPC_WEAK_FUNC(sub_832481C0);
PPC_FUNC_IMPL(__imp__sub_832481C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,31280
	ctx.r3.s64 = r11.s64 + 31280;
	// b 0x82b7b7d0
	sub_82B7B7D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832481D0"))) PPC_WEAK_FUNC(sub_832481D0);
PPC_FUNC_IMPL(__imp__sub_832481D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,31300
	ctx.r3.s64 = r11.s64 + 31300;
	// b 0x82dfb148
	sub_82DFB148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832481E0"))) PPC_WEAK_FUNC(sub_832481E0);
PPC_FUNC_IMPL(__imp__sub_832481E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,31304
	ctx.r3.s64 = r11.s64 + 31304;
	// b 0x82dfb148
	sub_82DFB148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832481F0"))) PPC_WEAK_FUNC(sub_832481F0);
PPC_FUNC_IMPL(__imp__sub_832481F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,31312
	ctx.r3.s64 = r11.s64 + 31312;
	// b 0x82dfb148
	sub_82DFB148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83248200"))) PPC_WEAK_FUNC(sub_83248200);
PPC_FUNC_IMPL(__imp__sub_83248200) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r30,2
	r30.s64 = 2;
	// addi r11,r11,31344
	r11.s64 = r11.s64 + 31344;
	// addi r31,r11,76
	r31.s64 = r11.s64 + 76;
loc_83248224:
	// addi r31,r31,-24
	r31.s64 = r31.s64 + -24;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x83248224
	if (!cr0.lt) goto loc_83248224;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83248260"))) PPC_WEAK_FUNC(sub_83248260);
PPC_FUNC_IMPL(__imp__sub_83248260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,31460
	ctx.r3.s64 = r11.s64 + 31460;
	// b 0x82dfb148
	sub_82DFB148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83248270"))) PPC_WEAK_FUNC(sub_83248270);
PPC_FUNC_IMPL(__imp__sub_83248270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,31464
	ctx.r3.s64 = r11.s64 + 31464;
	// b 0x82dfb148
	sub_82DFB148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83248280"))) PPC_WEAK_FUNC(sub_83248280);
PPC_FUNC_IMPL(__imp__sub_83248280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,31644
	ctx.r3.s64 = r11.s64 + 31644;
	// b 0x82dfb148
	sub_82DFB148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83248290"))) PPC_WEAK_FUNC(sub_83248290);
PPC_FUNC_IMPL(__imp__sub_83248290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,31648
	ctx.r3.s64 = r11.s64 + 31648;
	// b 0x82dfb148
	sub_82DFB148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832482A0"))) PPC_WEAK_FUNC(sub_832482A0);
PPC_FUNC_IMPL(__imp__sub_832482A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31945
	r11.s64 = -2093547520;
	// addi r3,r11,-31660
	ctx.r3.s64 = r11.s64 + -31660;
	// b 0x82dfb148
	sub_82DFB148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832482B0"))) PPC_WEAK_FUNC(sub_832482B0);
PPC_FUNC_IMPL(__imp__sub_832482B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31945
	r11.s64 = -2093547520;
	// addi r3,r11,-31568
	ctx.r3.s64 = r11.s64 + -31568;
	// b 0x82dfb148
	sub_82DFB148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832482C0"))) PPC_WEAK_FUNC(sub_832482C0);
PPC_FUNC_IMPL(__imp__sub_832482C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31945
	r11.s64 = -2093547520;
	// addi r3,r11,-31452
	ctx.r3.s64 = r11.s64 + -31452;
	// b 0x823d54f0
	sub_823D54F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832482D0"))) PPC_WEAK_FUNC(sub_832482D0);
PPC_FUNC_IMPL(__imp__sub_832482D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31945
	r11.s64 = -2093547520;
	// addi r3,r11,-31192
	ctx.r3.s64 = r11.s64 + -31192;
	// b 0x82dfb148
	sub_82DFB148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832482E0"))) PPC_WEAK_FUNC(sub_832482E0);
PPC_FUNC_IMPL(__imp__sub_832482E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31945
	r11.s64 = -2093547520;
	// addi r3,r11,-31184
	ctx.r3.s64 = r11.s64 + -31184;
	// b 0x825d38b0
	sub_825D38B0(ctx, base);
	return;
}

