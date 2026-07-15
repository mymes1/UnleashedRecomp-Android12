#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83139850"))) PPC_WEAK_FUNC(sub_83139850);
PPC_FUNC_IMPL(__imp__sub_83139850) {
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
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// lwz r11,-30960(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30960);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,-30960(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30960, r11.u32);
	// bne 0x831398d0
	if (!cr0.eq) goto loc_831398D0;
	// lis r11,-31931
	r11.s64 = -2092630016;
	// addi r30,r11,-7072
	r30.s64 = r11.s64 + -7072;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_83139884:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x83139898
	if (!cr6.eq) goto loc_83139898;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313e568
	sub_8313E568(ctx, base);
loc_83139898:
	// addis r11,r30,1
	r11.s64 = r30.s64 + 65536;
	// addi r31,r31,568
	r31.s64 = r31.s64 + 568;
	// addi r11,r11,-29184
	r11.s64 = r11.s64 + -29184;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x83139884
	if (cr6.lt) goto loc_83139884;
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,36352
	ctx.r5.u64 = ctx.r5.u64 | 36352;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83139708
	sub_83139708(ctx, base);
	// bl 0x8312f638
	sub_8312F638(ctx, base);
loc_831398D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831398E8"))) PPC_WEAK_FUNC(sub_831398E8);
PPC_FUNC_IMPL(__imp__sub_831398E8) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lis r30,-31941
	r30.s64 = -2093285376;
	// addi r11,r11,10696
	r11.s64 = r11.s64 + 10696;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// lwz r31,-30952(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + -30952);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// stw r11,-30956(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30956, r11.u32);
	// bne cr6,0x831399a8
	if (!cr6.eq) goto loc_831399A8;
	// lis r11,-31931
	r11.s64 = -2092630016;
	// li r5,832
	ctx.r5.s64 = 832;
	// addi r3,r11,-7904
	ctx.r3.s64 = r11.s64 + -7904;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lis r11,-31931
	r11.s64 = -2092630016;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r3,r11,-8928
	ctx.r3.s64 = r11.s64 + -8928;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lis r11,-31931
	r11.s64 = -2092630016;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r3,r11,-9280
	ctx.r3.s64 = r11.s64 + -9280;
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lis r11,-31931
	r11.s64 = -2092630016;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r3,r11,-8992
	ctx.r3.s64 = r11.s64 + -8992;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31931
	ctx.r10.s64 = -2092630016;
	// stw r11,-9024(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9024, r11.u32);
	// lis r10,-31931
	ctx.r10.s64 = -2092630016;
	// stw r11,-9020(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9020, r11.u32);
	// lis r10,-31931
	ctx.r10.s64 = -2092630016;
	// stw r11,-8956(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8956, r11.u32);
	// lis r10,-31931
	ctx.r10.s64 = -2092630016;
	// stw r11,-8960(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8960, r11.u32);
	// lis r10,-31931
	ctx.r10.s64 = -2092630016;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,-9312(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9312, r11.u32);
	// lis r10,-31931
	ctx.r10.s64 = -2092630016;
	// li r11,1
	r11.s64 = 1;
	// stw r11,-9308(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9308, r11.u32);
loc_831399A8:
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// stw r11,-30952(r30)
	PPC_STORE_U32(r30.u32 + -30952, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831399C8"))) PPC_WEAK_FUNC(sub_831399C8);
PPC_FUNC_IMPL(__imp__sub_831399C8) {
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
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// lwz r11,-30952(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30952);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,-30952(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30952, r11.u32);
	// bne 0x83139a78
	if (!cr0.eq) goto loc_83139A78;
	// bl 0x831400d8
	sub_831400D8(ctx, base);
	// lis r11,-31931
	r11.s64 = -2092630016;
	// lis r10,-31931
	ctx.r10.s64 = -2092630016;
	// addi r3,r11,-8992
	ctx.r3.s64 = r11.s64 + -8992;
	// li r11,1
	r11.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,-9308(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9308, r11.u32);
	// lis r10,-31931
	ctx.r10.s64 = -2092630016;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,-9312(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9312, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31931
	ctx.r10.s64 = -2092630016;
	// stw r11,-8960(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8960, r11.u32);
	// lis r10,-31931
	ctx.r10.s64 = -2092630016;
	// stw r11,-8956(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8956, r11.u32);
	// lis r10,-31931
	ctx.r10.s64 = -2092630016;
	// stw r11,-9020(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9020, r11.u32);
	// lis r10,-31931
	ctx.r10.s64 = -2092630016;
	// stw r11,-9024(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9024, r11.u32);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lis r11,-31931
	r11.s64 = -2092630016;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r3,r11,-9280
	ctx.r3.s64 = r11.s64 + -9280;
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lis r11,-31931
	r11.s64 = -2092630016;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r3,r11,-8928
	ctx.r3.s64 = r11.s64 + -8928;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lis r11,-31931
	r11.s64 = -2092630016;
	// li r5,832
	ctx.r5.s64 = 832;
	// addi r3,r11,-7904
	ctx.r3.s64 = r11.s64 + -7904;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_83139A78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139A88"))) PPC_WEAK_FUNC(sub_83139A88);
PPC_FUNC_IMPL(__imp__sub_83139A88) {
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
	// lis r31,-31941
	r31.s64 = -2093285376;
	// lwz r11,-30948(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -30948);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83139ac0
	if (!cr6.eq) goto loc_83139AC0;
	// bl 0x83140308
	sub_83140308(ctx, base);
	// lis r11,-31931
	r11.s64 = -2092630016;
	// li r5,5760
	ctx.r5.s64 = 5760;
	// addi r3,r11,-15072
	ctx.r3.s64 = r11.s64 + -15072;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_83139AC0:
	// lwz r11,-30948(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -30948);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,-30948(r31)
	PPC_STORE_U32(r31.u32 + -30948, r11.u32);
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

__attribute__((alias("__imp__sub_83139AE0"))) PPC_WEAK_FUNC(sub_83139AE0);
PPC_FUNC_IMPL(__imp__sub_83139AE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r10,-30948(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -30948);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,-30948(r11)
	PPC_STORE_U32(r11.u32 + -30948, ctx.r10.u32);
	// lwz r11,-30948(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -30948);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r11,-31931
	r11.s64 = -2092630016;
	// li r5,5760
	ctx.r5.s64 = 5760;
	// addi r3,r11,-15072
	ctx.r3.s64 = r11.s64 + -15072;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x831b0ba0
	sub_831B0BA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83139B10"))) PPC_WEAK_FUNC(sub_83139B10);
PPC_FUNC_IMPL(__imp__sub_83139B10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139B18"))) PPC_WEAK_FUNC(sub_83139B18);
PPC_FUNC_IMPL(__imp__sub_83139B18) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83139b64
	if (cr6.eq) goto loc_83139B64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83139b4c
	if (cr0.eq) goto loc_83139B4C;
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x831403a8
	sub_831403A8(ctx, base);
loc_83139B4C:
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// li r5,180
	ctx.r5.s64 = 180;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
loc_83139B64:
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

__attribute__((alias("__imp__sub_83139B78"))) PPC_WEAK_FUNC(sub_83139B78);
PPC_FUNC_IMPL(__imp__sub_83139B78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r4,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r4.u32);
	// b 0x83141140
	sub_83141140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83139B88"))) PPC_WEAK_FUNC(sub_83139B88);
PPC_FUNC_IMPL(__imp__sub_83139B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r4,56(r11)
	PPC_STORE_U32(r11.u32 + 56, ctx.r4.u32);
	// b 0x83141160
	sub_83141160(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83139B98"))) PPC_WEAK_FUNC(sub_83139B98);
PPC_FUNC_IMPL(__imp__sub_83139B98) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x831411d0
	sub_831411D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83139BA0"))) PPC_WEAK_FUNC(sub_83139BA0);
PPC_FUNC_IMPL(__imp__sub_83139BA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// li r11,0
	r11.s64 = 0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, r11.u32);
	// stw r10,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// stw r9,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, r11.u32);
	// stb r11,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, r11.u8);
	// stw r11,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, r11.u32);
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, r11.u32);
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139BE8"))) PPC_WEAK_FUNC(sub_83139BE8);
PPC_FUNC_IMPL(__imp__sub_83139BE8) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x83140790
	sub_83140790(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
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

__attribute__((alias("__imp__sub_83139C20"))) PPC_WEAK_FUNC(sub_83139C20);
PPC_FUNC_IMPL(__imp__sub_83139C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,51200
	ctx.r5.u64 = ctx.r5.u64 | 51200;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r27,8(r26)
	r27.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lwz r31,4(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83139c88
	if (!cr6.gt) goto loc_83139C88;
loc_83139C6C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83139c88
	if (!cr6.eq) goto loc_83139C88;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// blt cr6,0x83139c6c
	if (cr6.lt) goto loc_83139C6C;
loc_83139C88:
	// srawi r11,r4,1
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	r11.s64 = ctx.r4.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83139ce8
	if (!cr6.eq) goto loc_83139CE8;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x831402f8
	sub_831402F8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83139cdc
	if (!cr0.eq) goto loc_83139CDC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,10872
	ctx.r4.s64 = r11.s64 + 10872;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,10840
	ctx.r3.s64 = r11.s64 + 10840;
loc_83139CD8:
	// bl 0x83139368
	sub_83139368(ctx, base);
loc_83139CDC:
	// li r11,4
	r11.s64 = 4;
loc_83139CE0:
	// stb r11,1(r26)
	PPC_STORE_U8(r26.u32 + 1, r11.u8);
	// b 0x83139ee4
	goto loc_83139EE4;
loc_83139CE8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8313daa0
	sub_8313DAA0(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r5,16
	cr6.compare<int32_t>(ctx.r5.s32, 16, xer);
	// blt cr6,0x83139ec8
	if (cr6.lt) goto loc_83139EC8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83140f68
	sub_83140F68(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// beq 0x83139ec8
	if (cr0.eq) goto loc_83139EC8;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// bgt cr6,0x83139ec8
	if (cr6.gt) goto loc_83139EC8;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// bge cr6,0x83139d60
	if (!cr6.lt) goto loc_83139D60;
	// lhz r11,154(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 154);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83139e68
	if (cr6.eq) goto loc_83139E68;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83140408
	sub_83140408(ctx, base);
	// li r25,0
	r25.s64 = 0;
loc_83139D60:
	// lwz r11,80(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 80);
	// stw r25,160(r26)
	PPC_STORE_U32(r26.u32 + 160, r25.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83139dbc
	if (cr6.eq) goto loc_83139DBC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831404b0
	sub_831404B0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831404b8
	sub_831404B8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8315e278
	sub_8315E278(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83156250
	sub_83156250(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r3,84(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 84);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r11,80(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 80);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83139DBC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831404b0
	sub_831404B0(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x83139dd4
	if (!cr6.eq) goto loc_83139DD4;
	// li r11,1
	r11.s64 = 1;
	// stb r11,3(r26)
	PPC_STORE_U8(r26.u32 + 3, r11.u8);
loc_83139DD4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831404b0
	sub_831404B0(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83139e00
	if (!cr6.eq) goto loc_83139E00;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r5,64
	cr6.compare<int32_t>(ctx.r5.s32, 64, xer);
	// blt cr6,0x83139df4
	if (cr6.lt) goto loc_83139DF4;
	// li r5,64
	ctx.r5.s64 = 64;
loc_83139DF4:
	// addi r3,r26,96
	ctx.r3.s64 = r26.s64 + 96;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
loc_83139E00:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831404b0
	sub_831404B0(ctx, base);
	// cmpwi cr6,r3,10
	cr6.compare<int32_t>(ctx.r3.s32, 10, xer);
	// beq cr6,0x83139ea4
	if (cr6.eq) goto loc_83139EA4;
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// beq cr6,0x83139ea4
	if (cr6.eq) goto loc_83139EA4;
	// cmpwi cr6,r3,12
	cr6.compare<int32_t>(ctx.r3.s32, 12, xer);
	// beq cr6,0x83139ea4
	if (cr6.eq) goto loc_83139EA4;
	// cmpwi cr6,r3,20
	cr6.compare<int32_t>(ctx.r3.s32, 20, xer);
	// beq cr6,0x83139ea4
	if (cr6.eq) goto loc_83139EA4;
	// cmpwi cr6,r3,15
	cr6.compare<int32_t>(ctx.r3.s32, 15, xer);
	// beq cr6,0x83139ea4
	if (cr6.eq) goto loc_83139EA4;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8313daa0
	sub_8313DAA0(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// b 0x83139ea8
	goto loc_83139EA8;
loc_83139E68:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x831402f8
	sub_831402F8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83139cdc
	if (!cr0.eq) goto loc_83139CDC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,10804
	ctx.r4.s64 = r11.s64 + 10804;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,10772
	ctx.r3.s64 = r11.s64 + 10772;
	// b 0x83139cd8
	goto loc_83139CD8;
loc_83139EA4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_83139EA8:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,2
	r11.s64 = 2;
	// b 0x83139ce0
	goto loc_83139CE0;
loc_83139EC8:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83139EE4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83139EF0"))) PPC_WEAK_FUNC(sub_83139EF0);
PPC_FUNC_IMPL(__imp__sub_83139EF0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
	// lwz r26,12(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r28,0
	r28.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x831404b8
	sub_831404B8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x83139f68
	if (!cr0.gt) goto loc_83139F68;
	// addi r29,r31,28
	r29.s64 = r31.s64 + 28;
loc_83139F2C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bl 0x831404b8
	sub_831404B8(ctx, base);
	// cmpw cr6,r28,r3
	cr6.compare<int32_t>(r28.s32, ctx.r3.s32, xer);
	// blt cr6,0x83139f2c
	if (cr6.lt) goto loc_83139F2C;
loc_83139F68:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8313ced8
	sub_8313CED8(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x83139fa0
	if (!cr6.lt) goto loc_83139FA0;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_83139FA0:
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x83139fbc
	if (cr0.lt) goto loc_83139FBC;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// b 0x83139fc4
	goto loc_83139FC4;
loc_83139FBC:
	// lis r11,8191
	r11.s64 = 536805376;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
loc_83139FC4:
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82e76338
	sub_82E76338(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_83139FD8"))) PPC_WEAK_FUNC(sub_83139FD8);
PPC_FUNC_IMPL(__imp__sub_83139FD8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lbz r11,2(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 2);
	// lwz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// rlwinm r28,r10,1,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8313a06c
	if (!cr0.gt) goto loc_8313A06C;
	// addi r31,r30,12
	r31.s64 = r30.s64 + 12;
loc_8313A004:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x8313a038
	if (cr6.lt) goto loc_8313A038;
	// mr r28,r11
	r28.u64 = r11.u64;
loc_8313A038:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,2(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 2);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8313a004
	if (cr6.lt) goto loc_8313A004;
loc_8313A06C:
	// srawi r11,r28,1
	xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	r11.s64 = r28.s32 >> 1;
	// addze r27,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r27.s64 = temp.s64;
	// rlwinm. r28,r27,1,0,30
	r28.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// ble 0x8313a100
	if (!cr0.gt) goto loc_8313A100;
	// lbz r11,2(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 2);
	// li r29,0
	r29.s64 = 0;
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8313a0f4
	if (!cr0.gt) goto loc_8313A0F4;
	// addi r31,r30,12
	r31.s64 = r30.s64 + 12;
loc_8313A090:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,2(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 2);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8313a090
	if (cr6.lt) goto loc_8313A090;
loc_8313A0F4:
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// stw r11,168(r30)
	PPC_STORE_U32(r30.u32 + 168, r11.u32);
loc_8313A100:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8313A108"))) PPC_WEAK_FUNC(sub_8313A108);
PPC_FUNC_IMPL(__imp__sub_8313A108) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lbz r11,2(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 2);
	// lwz r10,172(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// rlwinm r28,r10,1,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8313a19c
	if (!cr0.gt) goto loc_8313A19C;
	// addi r31,r30,12
	r31.s64 = r30.s64 + 12;
loc_8313A134:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x8313a168
	if (cr6.lt) goto loc_8313A168;
	// mr r28,r11
	r28.u64 = r11.u64;
loc_8313A168:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,2(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 2);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8313a134
	if (cr6.lt) goto loc_8313A134;
loc_8313A19C:
	// srawi r11,r28,1
	xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	r11.s64 = r28.s32 >> 1;
	// addze r27,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r27.s64 = temp.s64;
	// rlwinm. r28,r27,1,0,30
	r28.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// ble 0x8313a220
	if (!cr0.gt) goto loc_8313A220;
	// lbz r11,2(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 2);
	// li r29,0
	r29.s64 = 0;
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8313a214
	if (!cr0.gt) goto loc_8313A214;
	// addi r31,r30,12
	r31.s64 = r30.s64 + 12;
loc_8313A1C0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,2(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 2);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8313a1c0
	if (cr6.lt) goto loc_8313A1C0;
loc_8313A214:
	// lwz r11,172(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// stw r11,172(r30)
	PPC_STORE_U32(r30.u32 + 172, r11.u32);
loc_8313A220:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8313A228"))) PPC_WEAK_FUNC(sub_8313A228);
PPC_FUNC_IMPL(__imp__sub_8313A228) {
	PPC_FUNC_PROLOGUE();
	// stw r4,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A230"))) PPC_WEAK_FUNC(sub_8313A230);
PPC_FUNC_IMPL(__imp__sub_8313A230) {
	PPC_FUNC_PROLOGUE();
	// stw r4,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r4.u32);
	// stw r5,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A240"))) PPC_WEAK_FUNC(sub_8313A240);
PPC_FUNC_IMPL(__imp__sub_8313A240) {
	PPC_FUNC_PROLOGUE();
	// stw r4,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r4.u32);
	// stw r5,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A250"))) PPC_WEAK_FUNC(sub_8313A250);
PPC_FUNC_IMPL(__imp__sub_8313A250) {
	PPC_FUNC_PROLOGUE();
	// stw r4,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A258"))) PPC_WEAK_FUNC(sub_8313A258);
PPC_FUNC_IMPL(__imp__sub_8313A258) {
	PPC_FUNC_PROLOGUE();
	// stw r4,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A260"))) PPC_WEAK_FUNC(sub_8313A260);
PPC_FUNC_IMPL(__imp__sub_8313A260) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x831404b0
	sub_831404B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313A268"))) PPC_WEAK_FUNC(sub_8313A268);
PPC_FUNC_IMPL(__imp__sub_8313A268) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8315e278
	sub_8315E278(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313A270"))) PPC_WEAK_FUNC(sub_8313A270);
PPC_FUNC_IMPL(__imp__sub_8313A270) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x831404b8
	sub_831404B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313A278"))) PPC_WEAK_FUNC(sub_8313A278);
PPC_FUNC_IMPL(__imp__sub_8313A278) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x83140508
	sub_83140508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313A280"))) PPC_WEAK_FUNC(sub_8313A280);
PPC_FUNC_IMPL(__imp__sub_8313A280) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8315cf60
	sub_8315CF60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313A288"))) PPC_WEAK_FUNC(sub_8313A288);
PPC_FUNC_IMPL(__imp__sub_8313A288) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x83156250
	sub_83156250(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313A290"))) PPC_WEAK_FUNC(sub_8313A290);
PPC_FUNC_IMPL(__imp__sub_8313A290) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x83140560
	sub_83140560(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313A298"))) PPC_WEAK_FUNC(sub_8313A298);
PPC_FUNC_IMPL(__imp__sub_8313A298) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x83165348
	sub_83165348(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313A2A0"))) PPC_WEAK_FUNC(sub_8313A2A0);
PPC_FUNC_IMPL(__imp__sub_8313A2A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8313a2ac
	if (!cr6.eq) goto loc_8313A2AC;
	// blr 
	return;
loc_8313A2AC:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x83140568
	sub_83140568(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313A2B8"))) PPC_WEAK_FUNC(sub_8313A2B8);
PPC_FUNC_IMPL(__imp__sub_8313A2B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x83159448
	sub_83159448(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313A2C0"))) PPC_WEAK_FUNC(sub_8313A2C0);
PPC_FUNC_IMPL(__imp__sub_8313A2C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x83154848
	sub_83154848(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313A2C8"))) PPC_WEAK_FUNC(sub_8313A2C8);
PPC_FUNC_IMPL(__imp__sub_8313A2C8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x83140578
	sub_83140578(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x8313a310
	if (!cr0.gt) goto loc_8313A310;
	// lbz r11,1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x8313a304
	if (cr6.eq) goto loc_8313A304;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x8313a310
	if (!cr6.eq) goto loc_8313A310;
loc_8313A304:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x83140580
	sub_83140580(ctx, base);
	// b 0x8313a314
	goto loc_8313A314;
loc_8313A310:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8313A314:
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

__attribute__((alias("__imp__sub_8313A328"))) PPC_WEAK_FUNC(sub_8313A328);
PPC_FUNC_IMPL(__imp__sub_8313A328) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x83140578
	sub_83140578(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x8313a37c
	if (!cr0.gt) goto loc_8313A37C;
	// lbz r11,1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x8313a36c
	if (cr6.eq) goto loc_8313A36C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x8313a37c
	if (!cr6.eq) goto loc_8313A37C;
loc_8313A36C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x83140588
	sub_83140588(ctx, base);
	// b 0x8313a380
	goto loc_8313A380;
loc_8313A37C:
	// li r3,-128
	ctx.r3.s64 = -128;
loc_8313A380:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A398"))) PPC_WEAK_FUNC(sub_8313A398);
PPC_FUNC_IMPL(__imp__sub_8313A398) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A3A0"))) PPC_WEAK_FUNC(sub_8313A3A0);
PPC_FUNC_IMPL(__imp__sub_8313A3A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x83140598
	sub_83140598(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313A3A8"))) PPC_WEAK_FUNC(sub_8313A3A8);
PPC_FUNC_IMPL(__imp__sub_8313A3A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x831405e8
	sub_831405E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313A3B0"))) PPC_WEAK_FUNC(sub_8313A3B0);
PPC_FUNC_IMPL(__imp__sub_8313A3B0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lis r11,-31931
	r11.s64 = -2092630016;
	// li r25,0
	r25.s64 = 0;
	// addi r11,r11,-15072
	r11.s64 = r11.s64 + -15072;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r30,0(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
loc_8313A3E0:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8313a400
	if (cr6.eq) goto loc_8313A400;
	// addi r9,r9,180
	ctx.r9.s64 = ctx.r9.s64 + 180;
	// addi r8,r11,5760
	ctx.r8.s64 = r11.s64 + 5760;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x8313a3e0
	if (cr6.lt) goto loc_8313A3E0;
loc_8313A400:
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// bne cr6,0x8313a410
	if (!cr6.eq) goto loc_8313A410;
loc_8313A408:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8313a500
	goto loc_8313A500;
loc_8313A410:
	// mulli r10,r10,180
	ctx.r10.s64 = ctx.r10.s64 * 180;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x8313ced8
	sub_8313CED8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8313cf58
	sub_8313CF58(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r30,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r30.s64 = temp.s64;
	// bl 0x8313cfd8
	sub_8313CFD8(ctx, base);
	// srawi r11,r3,1
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	r11.s64 = ctx.r3.s32 >> 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r6,r11,r30
	ctx.r6.u64 = r11.u64 + r30.u64;
	// bl 0x83140bb0
	sub_83140BB0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// beq 0x8313a408
	if (cr0.eq) goto loc_8313A408;
	// lis r11,-31980
	r11.s64 = -2095841280;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,-24848
	ctx.r4.s64 = r11.s64 + -24848;
	// bl 0x82e23ed0
	sub_82E23ED0(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// stw r26,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r26.u32);
	// stb r29,2(r31)
	PPC_STORE_U8(r31.u32 + 2, r29.u8);
	// ble cr6,0x8313a4a8
	if (!cr6.gt) goto loc_8313A4A8;
	// mr r11,r27
	r11.u64 = r27.u64;
	// addi r10,r31,12
	ctx.r10.s64 = r31.s64 + 12;
loc_8313A490:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x8313a490
	if (!cr0.eq) goto loc_8313A490;
loc_8313A4A8:
	// lis r11,32767
	r11.s64 = 2147418112;
	// stb r25,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r25.u8);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r25,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r25.u32);
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// stw r25,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r25.u32);
	// stw r25,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r25.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r25,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r25.u32);
	// stw r25,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r25.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r10.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r25,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r25.u32);
	// stb r25,3(r31)
	PPC_STORE_U8(r31.u32 + 3, r25.u8);
	// stw r25,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r25.u32);
	// stw r25,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r25.u32);
	// stw r25,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r25.u32);
	// stw r25,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r25.u32);
	// stw r25,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r25.u32);
	// stw r25,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r25.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
loc_8313A500:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_8313A508"))) PPC_WEAK_FUNC(sub_8313A508);
PPC_FUNC_IMPL(__imp__sub_8313A508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r25,4(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x8313a550
	if (cr0.lt) goto loc_8313A550;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// blt cr6,0x8313a550
	if (cr6.lt) goto loc_8313A550;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8313a550
	if (cr0.eq) goto loc_8313A550;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8313A550:
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8313a588
	if (!cr6.eq) goto loc_8313A588;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8313a588
	if (!cr0.eq) goto loc_8313A588;
	// li r11,3
	r11.s64 = 3;
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// b 0x8313a8b8
	goto loc_8313A8B8;
loc_8313A588:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// addi r29,r31,20
	r29.s64 = r31.s64 + 20;
	// ori r26,r10,65535
	r26.u64 = ctx.r10.u64 | 65535;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x831404b0
	sub_831404B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8313a730
	if (!cr0.eq) goto loc_8313A730;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// blt cr6,0x8313a730
	if (cr6.lt) goto loc_8313A730;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,32769
	cr6.compare<uint32_t>(r11.u32, 32769, xer);
	// bne cr6,0x8313a730
	if (!cr6.eq) goto loc_8313A730;
	// li r11,3
	r11.s64 = 3;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// bl 0x8313ebb8
	sub_8313EBB8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8313a66c
	if (!cr0.eq) goto loc_8313A66C;
	// lha r4,80(r1)
	ctx.r4.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 80));
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// ble cr6,0x8313a628
	if (!cr6.gt) goto loc_8313A628;
loc_8313A60C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8313a8b8
	goto loc_8313A8B8;
loc_8313A628:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8313daa0
	sub_8313DAA0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
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
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8313A66C:
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8313a8b8
	if (cr6.eq) goto loc_8313A8B8;
	// b 0x8313a700
	goto loc_8313A700;
loc_8313A67C:
	// lwz r27,24(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r28,0
	r28.s64 = 0;
	// cmpwi r27,0
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// ble 0x8313a6ac
	if (!cr0.gt) goto loc_8313A6AC;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
loc_8313A690:
	// lbzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r28.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8313a6ac
	if (!cr6.eq) goto loc_8313A6AC;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(r28.s32, ctx.r10.s32, xer);
	// blt cr6,0x8313a690
	if (cr6.lt) goto loc_8313A690;
loc_8313A6AC:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8313daa0
	sub_8313DAA0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
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
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r28,r27
	cr6.compare<int32_t>(r28.s32, r27.s32, xer);
	// blt cr6,0x8313a8b8
	if (cr6.lt) goto loc_8313A8B8;
loc_8313A700:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8313a67c
	if (!cr6.eq) goto loc_8313A67C;
	// b 0x8313a8b8
	goto loc_8313A8B8;
loc_8313A730:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x83156250
	sub_83156250(ctx, base);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// blt cr6,0x8313a7a4
	if (cr6.lt) goto loc_8313A7A4;
	// bl 0x831404b0
	sub_831404B0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8313a7c0
	if (!cr6.eq) goto loc_8313A7C0;
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8313a7c0
	if (!cr6.eq) goto loc_8313A7C0;
loc_8313A764:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8315cf60
	sub_8315CF60(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,36(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// srawi r11,r3,1
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	r11.s64 = ctx.r3.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// bge cr6,0x8313a7d0
	if (!cr6.lt) goto loc_8313A7D0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// b 0x8313a60c
	goto loc_8313A60C;
loc_8313A7A4:
	// bl 0x831404b0
	sub_831404B0(ctx, base);
	// cmpwi cr6,r3,10
	cr6.compare<int32_t>(ctx.r3.s32, 10, xer);
	// bne cr6,0x8313a764
	if (!cr6.eq) goto loc_8313A764;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r11,r11,576
	r11.s64 = r11.s64 + 576;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// blt cr6,0x8313a764
	if (cr6.lt) goto loc_8313A764;
loc_8313A7C0:
	// li r11,3
	r11.s64 = 3;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// b 0x8313a60c
	goto loc_8313A60C;
loc_8313A7D0:
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8313a874
	if (cr6.eq) goto loc_8313A874;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x831404b0
	sub_831404B0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8313a874
	if (!cr6.eq) goto loc_8313A874;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x831404f8
	sub_831404F8(ctx, base);
	// cmpwi cr6,r3,16
	cr6.compare<int32_t>(ctx.r3.s32, 16, xer);
	// bne cr6,0x8313a860
	if (!cr6.eq) goto loc_8313A860;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x831404b8
	sub_831404B8(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// divw r10,r10,r3
	ctx.r10.s32 = ctx.r10.s32 / ctx.r3.s32;
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// cmpw cr6,r10,r28
	cr6.compare<int32_t>(ctx.r10.s32, r28.s32, xer);
	// ble cr6,0x8313a874
	if (!cr6.gt) goto loc_8313A874;
	// subf r11,r11,r28
	r11.s64 = r28.s64 - r11.s64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mullw r11,r11,r3
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r3.s32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8313daa0
	sub_8313DAA0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8313a874
	goto loc_8313A874;
loc_8313A860:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,10940
	ctx.r4.s64 = r11.s64 + 10940;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,10904
	ctx.r3.s64 = r11.s64 + 10904;
	// bl 0x83139368
	sub_83139368(ctx, base);
loc_8313A874:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x831404b0
	sub_831404B0(ctx, base);
	// cmpwi cr6,r3,10
	cr6.compare<int32_t>(ctx.r3.s32, 10, xer);
	// bne cr6,0x8313a8a0
	if (!cr6.eq) goto loc_8313A8A0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8313A8A0:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x83140718
	sub_83140718(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x83140778
	sub_83140778(ctx, base);
loc_8313A8B8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_8313A8C0"))) PPC_WEAK_FUNC(sub_8313A8C0);
PPC_FUNC_IMPL(__imp__sub_8313A8C0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r26,4(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x83156250
	sub_83156250(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fe9d90
	sub_82FE9D90(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x83140810
	sub_83140810(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x831404b0
	sub_831404B0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8313a918
	if (!cr6.eq) goto loc_8313A918;
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8313a92c
	if (cr6.eq) goto loc_8313A92C;
loc_8313A918:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// subf r11,r11,r28
	r11.s64 = r28.s64 - r11.s64;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x8313a92c
	if (cr6.lt) goto loc_8313A92C;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_8313A92C:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x8313daa0
	sub_8313DAA0(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r27,0
	r27.s64 = 0;
	// bl 0x831404b8
	sub_831404B8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x8313aa24
	if (!cr0.gt) goto loc_8313AA24;
	// rlwinm r24,r30,1,0,30
	r24.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r31,12
	r29.s64 = r31.s64 + 12;
	// addi r28,r31,28
	r28.s64 = r31.s64 + 28;
loc_8313A998:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8313daa0
	sub_8313DAA0(ctx, base);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8313a9d0
	if (cr0.eq) goto loc_8313A9D0;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8313A9D0:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// bl 0x831404b8
	sub_831404B8(ctx, base);
	// cmpw cr6,r27,r3
	cr6.compare<int32_t>(r27.s32, ctx.r3.s32, xer);
	// blt cr6,0x8313a998
	if (cr6.lt) goto loc_8313A998;
loc_8313AA24:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + r30.u64;
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// add r7,r11,r25
	ctx.r7.u64 = r11.u64 + r25.u64;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// stw r8,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r8.u32);
	// stw r7,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r7.u32);
	// stw r9,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r9.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// bl 0x831407c8
	sub_831407C8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_8313AA70"))) PPC_WEAK_FUNC(sub_8313AA70);
PPC_FUNC_IMPL(__imp__sub_8313AA70) {
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
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831a0fd8
	sub_831A0FD8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8313aa9c
	if (!cr0.eq) goto loc_8313AA9C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313a508
	sub_8313A508(ctx, base);
loc_8313AA9C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83141058
	sub_83141058(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831a0fd8
	sub_831A0FD8(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x8313aabc
	if (!cr6.eq) goto loc_8313AABC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313a8c0
	sub_8313A8C0(ctx, base);
loc_8313AABC:
	// lha r11,152(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 152));
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// beq cr6,0x8313aae8
	if (cr6.eq) goto loc_8313AAE8;
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(r11.s32, 20, xer);
	// beq cr6,0x8313aae8
	if (cr6.eq) goto loc_8313AAE8;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(r11.s32, 11, xer);
	// beq cr6,0x8313aae8
	if (cr6.eq) goto loc_8313AAE8;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// beq cr6,0x8313aae8
	if (cr6.eq) goto loc_8313AAE8;
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(r11.s32, 15, xer);
	// bne cr6,0x8313ab40
	if (!cr6.eq) goto loc_8313AB40;
loc_8313AAE8:
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83156250
	sub_83156250(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe9d90
	sub_82FE9D90(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83140810
	sub_83140810(ctx, base);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// subf r10,r11,r29
	ctx.r10.s64 = r29.s64 - r11.s64;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// blt cr6,0x8313ab20
	if (cr6.lt) goto loc_8313AB20;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_8313AB20:
	// add r9,r11,r3
	ctx.r9.u64 = r11.u64 + ctx.r3.u64;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r9,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r9.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
loc_8313AB40:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8313AB48"))) PPC_WEAK_FUNC(sub_8313AB48);
PPC_FUNC_IMPL(__imp__sub_8313AB48) {
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
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8313ab78
	if (!cr6.gt) goto loc_8313AB78;
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83139fd8
	sub_83139FD8(ctx, base);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
loc_8313AB78:
	// lbz r11,1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8313ab94
	if (!cr6.eq) goto loc_8313AB94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313aa70
	sub_8313AA70(ctx, base);
	// b 0x8313aba4
	goto loc_8313ABA4;
loc_8313AB94:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8313aba4
	if (!cr6.eq) goto loc_8313ABA4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83139c20
	sub_83139C20(ctx, base);
loc_8313ABA4:
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8313abc0
	if (!cr6.gt) goto loc_8313ABC0;
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313a108
	sub_8313A108(ctx, base);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
loc_8313ABC0:
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

__attribute__((alias("__imp__sub_8313ABD8"))) PPC_WEAK_FUNC(sub_8313ABD8);
PPC_FUNC_IMPL(__imp__sub_8313ABD8) {
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r30,r11,-30932
	r30.s64 = r11.s64 + -30932;
	// lwz r11,-12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8313ac0c
	if (cr6.eq) goto loc_8313AC0C;
	// addi r11,r30,-12
	r11.s64 = r30.s64 + -12;
	// lwz r3,-8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8313AC0C:
	// lis r11,-31931
	r11.s64 = -2092630016;
	// addi r29,r11,-15072
	r29.s64 = r11.s64 + -15072;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_8313AC18:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8313ac2c
	if (!cr6.eq) goto loc_8313AC2C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313ab48
	sub_8313AB48(ctx, base);
loc_8313AC2C:
	// addi r31,r31,180
	r31.s64 = r31.s64 + 180;
	// addi r11,r29,5760
	r11.s64 = r29.s64 + 5760;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x8313ac18
	if (cr6.lt) goto loc_8313AC18;
	// lwz r11,-4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8313ac5c
	if (cr6.eq) goto loc_8313AC5C;
	// addi r11,r30,-4
	r11.s64 = r30.s64 + -4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8313AC5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8313AC68"))) PPC_WEAK_FUNC(sub_8313AC68);
PPC_FUNC_IMPL(__imp__sub_8313AC68) {
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
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// lwz r11,-30928(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30928);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// stw r11,-30928(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30928, r11.u32);
	// bne cr6,0x8313aca0
	if (!cr6.eq) goto loc_8313ACA0;
	// lis r11,-31931
	r11.s64 = -2092630016;
	// li r5,8320
	ctx.r5.s64 = 8320;
	// addi r3,r11,-23392
	ctx.r3.s64 = r11.s64 + -23392;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_8313ACA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313ACB8"))) PPC_WEAK_FUNC(sub_8313ACB8);
PPC_FUNC_IMPL(__imp__sub_8313ACB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// lwz r11,-30928(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30928);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,-30928(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30928, r11.u32);
	// bnelr 
	if (!cr0.eq) return;
	// lis r11,-31931
	r11.s64 = -2092630016;
	// li r5,8320
	ctx.r5.s64 = 8320;
	// addi r3,r11,-23392
	ctx.r3.s64 = r11.s64 + -23392;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x831b0ba0
	sub_831B0BA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313ACE0"))) PPC_WEAK_FUNC(sub_8313ACE0);
PPC_FUNC_IMPL(__imp__sub_8313ACE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313ACE8"))) PPC_WEAK_FUNC(sub_8313ACE8);
PPC_FUNC_IMPL(__imp__sub_8313ACE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,74(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 74);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8313acfc
	if (cr6.eq) goto loc_8313ACFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8313ACFC:
	// lbz r11,73(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 73);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8313ad10
	if (cr6.eq) goto loc_8313AD10;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8313AD10:
	// lbz r11,77(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 77);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313AD28"))) PPC_WEAK_FUNC(sub_8313AD28);
PPC_FUNC_IMPL(__imp__sub_8313AD28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,73(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 73);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8313ad44
	if (!cr6.eq) goto loc_8313AD44;
	// lbz r11,77(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 77);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_8313AD44:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313AD50"))) PPC_WEAK_FUNC(sub_8313AD50);
PPC_FUNC_IMPL(__imp__sub_8313AD50) {
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
	// bl 0x83131d08
	sub_83131D08(ctx, base);
	// bl 0x831323d0
	sub_831323D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313AD78"))) PPC_WEAK_FUNC(sub_8313AD78);
PPC_FUNC_IMPL(__imp__sub_8313AD78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,77(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 77);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313AD88"))) PPC_WEAK_FUNC(sub_8313AD88);
PPC_FUNC_IMPL(__imp__sub_8313AD88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// srawi r11,r30,11
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FF) != 0);
	r11.s64 = r30.s32 >> 11;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// extsw r10,r30
	ctx.r10.s64 = r30.s32;
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// li r25,1
	r25.s64 = 1;
	// stw r27,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r27.u32);
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// li r26,0
	r26.s64 = 0;
	// rlwinm r11,r11,11,0,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 11) & 0xFFFFF800;
	// std r10,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// stb r25,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r25.u8);
	// subf. r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r26,2(r31)
	PPC_STORE_U8(r31.u32 + 2, r26.u8);
	// bgt 0x8313adec
	if (cr0.gt) goto loc_8313ADEC;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_8313ADEC:
	// srawi r11,r30,11
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FF) != 0);
	r11.s64 = r30.s32 >> 11;
	// stw r26,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r26.u32);
	// li r9,512
	ctx.r9.s64 = 512;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// stw r9,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// beq cr6,0x8313ae64
	if (cr6.eq) goto loc_8313AE64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add r11,r30,r3
	r11.u64 = r30.u64 + ctx.r3.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
loc_8313AE64:
	// stb r26,72(r31)
	PPC_STORE_U8(r31.u32 + 72, r26.u8);
	// stb r25,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r25.u8);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_8313AE78"))) PPC_WEAK_FUNC(sub_8313AE78);
PPC_FUNC_IMPL(__imp__sub_8313AE78) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,256
	cr6.compare<int32_t>(ctx.r4.s32, 256, xer);
	// li r31,0
	r31.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// bge cr6,0x8313af08
	if (!cr6.lt) goto loc_8313AF08;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// lwz r8,25280(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 25280);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x8313aee4
	if (!cr6.gt) goto loc_8313AEE4;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// lis r11,-31931
	r11.s64 = -2092630016;
	// addi r11,r11,-23392
	r11.s64 = r11.s64 + -23392;
	// lwz r10,-30924(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30924);
	// mulli r10,r10,104
	ctx.r10.s64 = ctx.r10.s64 * 104;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
loc_8313AEC4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// mr r31,r11
	r31.u64 = r11.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8313aee4
	if (cr6.eq) goto loc_8313AEE4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,104
	r11.s64 = r11.s64 + 104;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x8313aec4
	if (cr6.lt) goto loc_8313AEC4;
loc_8313AEE4:
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// beq cr6,0x8313af58
	if (cr6.eq) goto loc_8313AF58;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313ad88
	sub_8313AD88(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// b 0x8313af78
	goto loc_8313AF78;
loc_8313AF08:
	// lis r11,-31947
	r11.s64 = -2093678592;
	// lwz r8,25288(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 25288);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x8313af50
	if (!cr6.gt) goto loc_8313AF50;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// lis r11,-31931
	r11.s64 = -2092630016;
	// addi r11,r11,-23392
	r11.s64 = r11.s64 + -23392;
	// lwz r10,25284(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25284);
	// mulli r10,r10,104
	ctx.r10.s64 = ctx.r10.s64 * 104;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
loc_8313AF30:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// mr r31,r11
	r31.u64 = r11.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8313af50
	if (cr6.eq) goto loc_8313AF50;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,104
	r11.s64 = r11.s64 + 104;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x8313af30
	if (cr6.lt) goto loc_8313AF30;
loc_8313AF50:
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bne cr6,0x8313af60
	if (!cr6.eq) goto loc_8313AF60;
loc_8313AF58:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8313af80
	goto loc_8313AF80;
loc_8313AF60:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313ad88
	sub_8313AD88(ctx, base);
	// li r11,0
	r11.s64 = 0;
loc_8313AF78:
	// stb r11,3(r31)
	PPC_STORE_U8(r31.u32 + 3, r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8313AF80:
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

__attribute__((alias("__imp__sub_8313AF98"))) PPC_WEAK_FUNC(sub_8313AF98);
PPC_FUNC_IMPL(__imp__sub_8313AF98) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// lbz r11,1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// extsb r31,r11
	r31.s64 = r11.s8;
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
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

__attribute__((alias("__imp__sub_8313AFD8"))) PPC_WEAK_FUNC(sub_8313AFD8);
PPC_FUNC_IMPL(__imp__sub_8313AFD8) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// ble cr6,0x8313b00c
	if (!cr6.gt) goto loc_8313B00C;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
loc_8313B00C:
	// lwz r31,92(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
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

__attribute__((alias("__imp__sub_8313B030"))) PPC_WEAK_FUNC(sub_8313B030);
PPC_FUNC_IMPL(__imp__sub_8313B030) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8313b05c
	if (cr6.eq) goto loc_8313B05C;
	// lwz r31,92(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// b 0x8313b060
	goto loc_8313B060;
loc_8313B05C:
	// li r31,0
	r31.s64 = 0;
loc_8313B060:
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
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

__attribute__((alias("__imp__sub_8313B080"))) PPC_WEAK_FUNC(sub_8313B080);
PPC_FUNC_IMPL(__imp__sub_8313B080) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// stw r29,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r29.u32);
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8313B0B0"))) PPC_WEAK_FUNC(sub_8313B0B0);
PPC_FUNC_IMPL(__imp__sub_8313B0B0) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x8313b0e0
	if (cr6.lt) goto loc_8313B0E0;
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// b 0x8313b0e8
	goto loc_8313B0E8;
loc_8313B0E0:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
loc_8313B0E8:
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B108"))) PPC_WEAK_FUNC(sub_8313B108);
PPC_FUNC_IMPL(__imp__sub_8313B108) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r29,4(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x83132448
	sub_83132448(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// li r28,0
	r28.s64 = 0;
	// li r26,3
	r26.s64 = 3;
	// ori r25,r10,65535
	r25.u64 = ctx.r10.u64 | 65535;
	// li r23,4
	r23.s64 = 4;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// lis r24,-31941
	r24.s64 = -2093285376;
	// bne cr6,0x8313b2a0
	if (!cr6.eq) goto loc_8313B2A0;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// bne cr6,0x8313b234
	if (!cr6.eq) goto loc_8313B234;
	// stb r28,2(r31)
	PPC_STORE_U8(r31.u32 + 2, r28.u8);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// rlwinm r30,r11,11,0,20
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 11) & 0xFFFFF800;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8313daa0
	sub_8313DAA0(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r28,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r28.u32);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// stw r28,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r28.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// bne cr6,0x8313b200
	if (!cr6.eq) goto loc_8313B200;
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8313b200
	if (cr0.eq) goto loc_8313B200;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8313B200:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x8313b228
	if (!cr6.lt) goto loc_8313B228;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// rlwinm r10,r10,21,11,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1FFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x8313b22c
	if (cr6.lt) goto loc_8313B22C;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(r11.u32, r25.u32, xer);
	// bge cr6,0x8313b22c
	if (!cr6.lt) goto loc_8313B22C;
loc_8313B228:
	// stb r26,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r26.u8);
loc_8313B22C:
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// b 0x8313b2a4
	goto loc_8313B2A4;
loc_8313B234:
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(r30.s32, 3, xer);
	// bne cr6,0x8313b2a0
	if (!cr6.eq) goto loc_8313B2A0;
	// stb r28,2(r31)
	PPC_STORE_U8(r31.u32 + 2, r28.u8);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r5,r31,40
	ctx.r5.s64 = r31.s64 + 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r28.u32);
	// stw r28,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r28.u32);
	// lwz r11,-30912(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + -30912);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8313b288
	if (cr6.lt) goto loc_8313B288;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// blt cr6,0x8313b288
	if (cr6.lt) goto loc_8313B288;
	// stb r23,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r23.u8);
	// b 0x8313b2a4
	goto loc_8313B2A4;
loc_8313B288:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpw cr6,r11,r25
	cr6.compare<int32_t>(r11.s32, r25.s32, xer);
	// bge cr6,0x8313b2a4
	if (!cr6.lt) goto loc_8313B2A4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x8313b2a4
	goto loc_8313B2A4;
loc_8313B2A0:
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
loc_8313B2A4:
	// lbz r11,1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// beq cr6,0x8313b4ac
	if (cr6.eq) goto loc_8313B4AC;
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8313b4a8
	if (!cr6.eq) goto loc_8313B4A8;
	// li r11,1
	r11.s64 = 1;
	// stw r28,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r28.u32);
	// addi r27,r31,40
	r27.s64 = r31.s64 + 40;
	// stw r28,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r28.u32);
	// stb r11,2(r31)
	PPC_STORE_U8(r31.u32 + 2, r11.u8);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// lbz r11,72(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 72);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x8313b4a0
	if (cr6.eq) goto loc_8313B4A0;
	// lbz r11,76(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 76);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x8313b4a0
	if (cr6.eq) goto loc_8313B4A0;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8313b30c
	if (!cr6.eq) goto loc_8313B30C;
	// stb r28,2(r31)
	PPC_STORE_U8(r31.u32 + 2, r28.u8);
	// stw r28,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r28.u32);
	// stb r26,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r26.u8);
	// b 0x8313b4ac
	goto loc_8313B4AC;
loc_8313B30C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8313b488
	if (cr6.eq) goto loc_8313B488;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8313b488
	if (cr0.eq) goto loc_8313B488;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8313b4a0
	if (!cr6.lt) goto loc_8313B4A0;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// srawi r9,r9,11
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 11;
	// addze r30,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	r30.s64 = temp.s64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x8313b38c
	if (cr6.lt) goto loc_8313B38C;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_8313B38C:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x8313b3a0
	if (cr6.lt) goto loc_8313B3A0;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_8313B3A0:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x8313b3b0
	if (cr6.lt) goto loc_8313B3B0;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_8313B3B0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x831321e8
	sub_831321E8(ctx, base);
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(r11.u32, r25.u32, xer);
	// beq cr6,0x8313b3ec
	if (cr6.eq) goto loc_8313B3EC;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// srawi r10,r10,11
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 11;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x8313b3ec
	if (cr6.lt) goto loc_8313B3EC;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_8313B3EC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x831322a8
	sub_831322A8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// bgt 0x8313b4ac
	if (cr0.gt) goto loc_8313B4AC;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r28,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r28.u32);
	// stw r28,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r28.u32);
	// stb r28,2(r31)
	PPC_STORE_U8(r31.u32 + 2, r28.u8);
	// bl 0x83132448
	sub_83132448(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x8313b4ac
	if (!cr6.eq) goto loc_8313B4AC;
	// lwz r11,-30912(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + -30912);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8313b470
	if (cr6.lt) goto loc_8313B470;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// blt cr6,0x8313b470
	if (cr6.lt) goto loc_8313B470;
	// stb r23,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r23.u8);
	// b 0x8313b4ac
	goto loc_8313B4AC;
loc_8313B470:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpw cr6,r11,r25
	cr6.compare<int32_t>(r11.s32, r25.s32, xer);
	// bge cr6,0x8313b4ac
	if (!cr6.lt) goto loc_8313B4AC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x8313b4ac
	goto loc_8313B4AC;
loc_8313B488:
	// lis r11,-31941
	r11.s64 = -2093285376;
	// stb r28,2(r31)
	PPC_STORE_U8(r31.u32 + 2, r28.u8);
	// lwz r10,-30908(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -30908);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,-30908(r11)
	PPC_STORE_U32(r11.u32 + -30908, ctx.r10.u32);
	// b 0x8313b4ac
	goto loc_8313B4AC;
loc_8313B4A0:
	// stb r28,2(r31)
	PPC_STORE_U8(r31.u32 + 2, r28.u8);
	// b 0x8313b4ac
	goto loc_8313B4AC;
loc_8313B4A8:
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
loc_8313B4AC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_8313B4B8"))) PPC_WEAK_FUNC(sub_8313B4B8);
PPC_FUNC_IMPL(__imp__sub_8313B4B8) {
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
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8313b718
	if (!cr6.eq) goto loc_8313B718;
	// lbz r11,76(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 76);
	// li r29,1
	r29.s64 = 1;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8313b4fc
	if (!cr6.eq) goto loc_8313B4FC;
	// lbz r11,75(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 75);
	// stb r28,76(r31)
	PPC_STORE_U8(r31.u32 + 76, r28.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8313b4fc
	if (!cr6.eq) goto loc_8313B4FC;
	// stb r29,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r29.u8);
loc_8313B4FC:
	// lbz r11,74(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 74);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8313b52c
	if (!cr6.eq) goto loc_8313B52C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8313b51c
	if (cr0.eq) goto loc_8313B51C;
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// bl 0x83132078
	sub_83132078(ctx, base);
loc_8313B51C:
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// stb r28,74(r31)
	PPC_STORE_U8(r31.u32 + 74, r28.u8);
	// stb r28,77(r31)
	PPC_STORE_U8(r31.u32 + 77, r28.u8);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
loc_8313B52C:
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// lbz r11,73(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 73);
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8313b704
	if (!cr6.eq) goto loc_8313B704;
	// lbz r11,74(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 74);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x8313b744
	if (cr6.eq) goto loc_8313B744;
	// lbz r11,77(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 77);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8313b5b0
	if (!cr6.eq) goto loc_8313B5B0;
	// stb r29,77(r31)
	PPC_STORE_U8(r31.u32 + 77, r29.u8);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8313b5b0
	if (!cr6.eq) goto loc_8313B5B0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x83132b20
	sub_83132B20(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// bne 0x8313b5b0
	if (!cr0.eq) goto loc_8313B5B0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r3,r11,11032
	ctx.r3.s64 = r11.s64 + 11032;
	// bl 0x83139368
	sub_83139368(ctx, base);
loc_8313B59C:
	// li r11,4
	r11.s64 = 4;
	// stb r28,77(r31)
	PPC_STORE_U8(r31.u32 + 77, r28.u8);
	// stb r28,73(r31)
	PPC_STORE_U8(r31.u32 + 73, r28.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// b 0x8313b744
	goto loc_8313B744;
loc_8313B5B0:
	// lbz r11,77(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 77);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8313b708
	if (!cr6.eq) goto loc_8313B708;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x8313b5c8
	if (!cr6.eq) goto loc_8313B5C8;
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
loc_8313B5C8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x83132508
	sub_83132508(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8313b6cc
	if (cr0.eq) goto loc_8313B6CC;
	// lbz r11,73(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 73);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8313b5f0
	if (!cr6.eq) goto loc_8313B5F0;
	// lbz r11,74(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 74);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x8313b744
	if (cr6.eq) goto loc_8313B744;
loc_8313B5F0:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8313b638
	if (!cr6.eq) goto loc_8313B638;
	// bl 0x831326a0
	sub_831326A0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpdi cr6,r29,0
	cr6.compare<int64_t>(r29.s64, 0, xer);
	// bge cr6,0x8313b61c
	if (!cr6.lt) goto loc_8313B61C;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x83132cb8
	sub_83132CB8(ctx, base);
	// extsw r29,r3
	r29.s64 = ctx.r3.s32;
loc_8313B61C:
	// addi r11,r29,2047
	r11.s64 = r29.s64 + 2047;
	// sradi r10,r11,10
	xer.ca = (r11.s64 < 0) & ((r11.u64 & 0x3FF) != 0);
	ctx.r10.s64 = r11.s64 >> 10;
	// rldicl r10,r10,11,53
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 11) & 0x7FF;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// sradi r11,r11,11
	xer.ca = (r11.s64 < 0) & ((r11.u64 & 0x7FF) != 0);
	r11.s64 = r11.s64 >> 11;
	// extsw r30,r11
	r30.s64 = r11.s32;
	// b 0x8313b668
	goto loc_8313B668;
loc_8313B638:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831321e8
	sub_831321E8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x83132128
	sub_83132128(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r30,11,0,20
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 11) & 0xFFFFF800;
	// li r4,0
	ctx.r4.s64 = 0;
	// extsw r29,r11
	r29.s64 = r11.s32;
	// bl 0x831321e8
	sub_831321E8(ctx, base);
loc_8313B668:
	// li r10,-2048
	ctx.r10.s64 = -2048;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// clrldi r10,r10,22
	ctx.r10.u64 = ctx.r10.u64 & 0x3FFFFFFFFFF;
	// cmpd cr6,r11,r10
	cr6.compare<int64_t>(r11.s64, ctx.r10.s64, xer);
	// bne cr6,0x8313b684
	if (!cr6.eq) goto loc_8313B684;
	// std r29,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r29.u64);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
loc_8313B684:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// ble cr6,0x8313b694
	if (!cr6.gt) goto loc_8313B694;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
loc_8313B694:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, r30.s32, xer);
	// ble cr6,0x8313b6bc
	if (!cr6.gt) goto loc_8313B6BC;
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// rldicr r10,r10,11,52
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 11) & 0xFFFFFFFFFFFFF800;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// std r10,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r10.u64);
loc_8313B6BC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313afd8
	sub_8313AFD8(ctx, base);
	// stb r28,73(r31)
	PPC_STORE_U8(r31.u32 + 73, r28.u8);
loc_8313B6CC:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x83132448
	sub_83132448(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x8313b708
	if (!cr6.eq) goto loc_8313B708;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r3,r11,10988
	ctx.r3.s64 = r11.s64 + 10988;
	// bl 0x83139368
	sub_83139368(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8313b59c
	if (cr0.eq) goto loc_8313B59C;
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// bl 0x83132078
	sub_83132078(ctx, base);
	// b 0x8313b59c
	goto loc_8313B59C;
loc_8313B704:
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
loc_8313B708:
	// lbz r11,75(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 75);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8313b718
	if (!cr6.eq) goto loc_8313B718;
	// stb r28,75(r31)
	PPC_STORE_U8(r31.u32 + 75, r28.u8);
loc_8313B718:
	// lbz r11,1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x8313b744
	if (!cr6.eq) goto loc_8313B744;
	// lbz r11,77(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 77);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8313b744
	if (!cr6.eq) goto loc_8313B744;
	// lbz r11,73(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 73);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8313b744
	if (!cr6.eq) goto loc_8313B744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313b108
	sub_8313B108(ctx, base);
loc_8313B744:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8313B750"))) PPC_WEAK_FUNC(sub_8313B750);
PPC_FUNC_IMPL(__imp__sub_8313B750) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// bl 0x83132368
	sub_83132368(ctx, base);
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B778"))) PPC_WEAK_FUNC(sub_8313B778);
PPC_FUNC_IMPL(__imp__sub_8313B778) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r29.u32);
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8313B7B0"))) PPC_WEAK_FUNC(sub_8313B7B0);
PPC_FUNC_IMPL(__imp__sub_8313B7B0) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// lwz r31,24(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
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

__attribute__((alias("__imp__sub_8313B7E8"))) PPC_WEAK_FUNC(sub_8313B7E8);
PPC_FUNC_IMPL(__imp__sub_8313B7E8) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313ae78
	sub_8313AE78(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
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

__attribute__((alias("__imp__sub_8313B838"))) PPC_WEAK_FUNC(sub_8313B838);
PPC_FUNC_IMPL(__imp__sub_8313B838) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r30,2047
	r11.s64 = r30.s64 + 2047;
	// stw r27,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r27.u32);
	// std r30,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r30.u64);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// stb r10,73(r31)
	PPC_STORE_U8(r31.u32 + 73, ctx.r10.u8);
	// sradi r10,r11,10
	xer.ca = (r11.s64 < 0) & ((r11.u64 & 0x3FF) != 0);
	ctx.r10.s64 = r11.s64 >> 10;
	// rldicl r10,r10,11,53
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 11) & 0x7FF;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// sradi r11,r11,11
	xer.ca = (r11.s64 < 0) & ((r11.u64 & 0x7FF) != 0);
	r11.s64 = r11.s64 >> 11;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8313B8A0"))) PPC_WEAK_FUNC(sub_8313B8A0);
PPC_FUNC_IMPL(__imp__sub_8313B8A0) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// beq cr6,0x8313b8dc
	if (cr6.eq) goto loc_8313B8DC;
	// li r10,2
	ctx.r10.s64 = 2;
loc_8313B8DC:
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// stb r10,1(r31)
	PPC_STORE_U8(r31.u32 + 1, ctx.r10.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,2(r31)
	PPC_STORE_U8(r31.u32 + 2, r11.u8);
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stb r10,75(r31)
	PPC_STORE_U8(r31.u32 + 75, ctx.r10.u8);
	// stw r9,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r9.u32);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8313B920"))) PPC_WEAK_FUNC(sub_8313B920);
PPC_FUNC_IMPL(__imp__sub_8313B920) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x83132598
	sub_83132598(ctx, base);
	// lbz r11,1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x8313b978
	if (!cr6.eq) goto loc_8313B978;
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8313b978
	if (!cr6.eq) goto loc_8313B978;
	// lbz r10,75(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 75);
	// stb r11,76(r31)
	PPC_STORE_U8(r31.u32 + 76, r11.u8);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8313b980
	if (!cr6.eq) goto loc_8313B980;
	// li r11,0
	r11.s64 = 0;
	// stb r11,75(r31)
	PPC_STORE_U8(r31.u32 + 75, r11.u8);
	// b 0x8313b980
	goto loc_8313B980;
loc_8313B978:
	// li r11,1
	r11.s64 = 1;
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
loc_8313B980:
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
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

__attribute__((alias("__imp__sub_8313B9A0"))) PPC_WEAK_FUNC(sub_8313B9A0);
PPC_FUNC_IMPL(__imp__sub_8313B9A0) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r29,r11,-30920
	r29.s64 = r11.s64 + -30920;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8312f228
	sub_8312F228(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8313ba00
	if (cr0.eq) goto loc_8313BA00;
	// lis r11,-31931
	r11.s64 = -2092630016;
	// addi r30,r11,-23392
	r30.s64 = r11.s64 + -23392;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_8313B9D4:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8313b9e8
	if (!cr6.eq) goto loc_8313B9E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313b4b8
	sub_8313B4B8(ctx, base);
loc_8313B9E8:
	// addi r31,r31,104
	r31.s64 = r31.s64 + 104;
	// addi r11,r30,8320
	r11.s64 = r30.s64 + 8320;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x8313b9d4
	if (cr6.lt) goto loc_8313B9D4;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_8313BA00:
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8313BA10"))) PPC_WEAK_FUNC(sub_8313BA10);
PPC_FUNC_IMPL(__imp__sub_8313BA10) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313b920
	sub_8313B920(ctx, base);
loc_8313BA30:
	// lbz r11,1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8313ba48
	if (!cr6.eq) goto loc_8313BA48;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8313ba54
	if (cr6.eq) goto loc_8313BA54;
loc_8313BA48:
	// bl 0x83139610
	sub_83139610(ctx, base);
	// bl 0x83136408
	sub_83136408(ctx, base);
	// b 0x8313ba30
	goto loc_8313BA30;
loc_8313BA54:
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
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

__attribute__((alias("__imp__sub_8313BA70"))) PPC_WEAK_FUNC(sub_8313BA70);
PPC_FUNC_IMPL(__imp__sub_8313BA70) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313b920
	sub_8313B920(ctx, base);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// lbz r11,77(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 77);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8313baa4
	if (!cr6.eq) goto loc_8313BAA4;
	// stb r11,74(r31)
	PPC_STORE_U8(r31.u32 + 74, r11.u8);
loc_8313BAA4:
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,73(r31)
	PPC_STORE_U8(r31.u32 + 73, r11.u8);
	// bl 0x8313b4b8
	sub_8313B4B8(ctx, base);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
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

__attribute__((alias("__imp__sub_8313BAD0"))) PPC_WEAK_FUNC(sub_8313BAD0);
PPC_FUNC_IMPL(__imp__sub_8313BAD0) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313ba10
	sub_8313BA10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313ba70
	sub_8313BA70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313b4b8
	sub_8313B4B8(ctx, base);
loc_8313BB00:
	// lbz r11,77(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 77);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8313bb18
	if (!cr6.eq) goto loc_8313BB18;
	// lbz r11,74(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 74);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8313bb24
	if (cr6.eq) goto loc_8313BB24;
loc_8313BB18:
	// bl 0x83139610
	sub_83139610(ctx, base);
	// bl 0x83136408
	sub_83136408(ctx, base);
	// b 0x8313bb00
	goto loc_8313BB00;
loc_8313BB24:
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
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

__attribute__((alias("__imp__sub_8313BB40"))) PPC_WEAK_FUNC(sub_8313BB40);
PPC_FUNC_IMPL(__imp__sub_8313BB40) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8313bb88
	if (cr6.eq) goto loc_8313BB88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313ba10
	sub_8313BA10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313bad0
	sub_8313BAD0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_8313BB88:
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
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

__attribute__((alias("__imp__sub_8313BBA0"))) PPC_WEAK_FUNC(sub_8313BBA0);
PPC_FUNC_IMPL(__imp__sub_8313BBA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11092
	ctx.r3.s64 = r11.s64 + 11092;
	// b 0x83185af8
	sub_83185AF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313BBB0"))) PPC_WEAK_FUNC(sub_8313BBB0);
PPC_FUNC_IMPL(__imp__sub_8313BBB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8313bbcc
	if (!cr6.eq) goto loc_8313BBCC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11160
	ctx.r4.s64 = r11.s64 + 11160;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11344
	ctx.r3.s64 = r11.s64 + 11344;
	// b 0x8313c420
	sub_8313C420(ctx, base);
	return;
loc_8313BBCC:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8313bbec
	if (!cr6.eq) goto loc_8313BBEC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11116
	ctx.r4.s64 = r11.s64 + 11116;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11332
	ctx.r3.s64 = r11.s64 + 11332;
	// b 0x8313c420
	sub_8313C420(ctx, base);
	return;
loc_8313BBEC:
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blelr 
	if (!cr0.gt) return;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8313bc28
	if (!cr6.eq) goto loc_8313BC28;
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_8313BC28:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8313bc94
	if (!cr6.eq) goto loc_8313BC94;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// subf. r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bgt 0x8313bc40
	if (cr0.gt) goto loc_8313BC40;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8313BC40:
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8313bc60
	if (cr6.lt) goto loc_8313BC60;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8313BC60:
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, r11.s32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_8313BC94:
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8313BCBC"))) PPC_WEAK_FUNC(sub_8313BCBC);
PPC_FUNC_IMPL(__imp__sub_8313BCBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313BCC0"))) PPC_WEAK_FUNC(sub_8313BCC0);
PPC_FUNC_IMPL(__imp__sub_8313BCC0) {
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
	// bl 0x831411f0
	sub_831411F0(ctx, base);
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// lis r30,-31941
	r30.s64 = -2093285376;
	// lwz r31,-30904(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + -30904);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x8313bd00
	if (!cr6.eq) goto loc_8313BD00;
	// lis r11,-31931
	r11.s64 = -2092630016;
	// li r5,1728
	ctx.r5.s64 = 1728;
	// addi r3,r11,-25120
	ctx.r3.s64 = r11.s64 + -25120;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_8313BD00:
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// stw r11,-30904(r30)
	PPC_STORE_U32(r30.u32 + -30904, r11.u32);
	// bl 0x83141328
	sub_83141328(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313BD28"))) PPC_WEAK_FUNC(sub_8313BD28);
PPC_FUNC_IMPL(__imp__sub_8313BD28) {
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
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// lwz r11,-30904(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30904);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,-30904(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30904, r11.u32);
	// bne 0x8313bd60
	if (!cr0.eq) goto loc_8313BD60;
	// lis r11,-31931
	r11.s64 = -2092630016;
	// li r5,1728
	ctx.r5.s64 = 1728;
	// addi r3,r11,-25120
	ctx.r3.s64 = r11.s64 + -25120;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_8313BD60:
	// bl 0x83141328
	sub_83141328(ctx, base);
	// bl 0x83141270
	sub_83141270(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313BD78"))) PPC_WEAK_FUNC(sub_8313BD78);
PPC_FUNC_IMPL(__imp__sub_8313BD78) {
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
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313bdb0
	if (!cr6.eq) goto loc_8313BDB0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11160
	ctx.r4.s64 = r11.s64 + 11160;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11148
	ctx.r3.s64 = r11.s64 + 11148;
loc_8313BDA8:
	// bl 0x8313c420
	sub_8313C420(ctx, base);
	// b 0x8313bde8
	goto loc_8313BDE8;
loc_8313BDB0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8313bdd0
	if (!cr6.eq) goto loc_8313BDD0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11116
	ctx.r4.s64 = r11.s64 + 11116;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11104
	ctx.r3.s64 = r11.s64 + 11104;
	// b 0x8313bda8
	goto loc_8313BDA8;
loc_8313BDD0:
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_8313BDE8:
	// bl 0x83141328
	sub_83141328(ctx, base);
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

__attribute__((alias("__imp__sub_8313BE00"))) PPC_WEAK_FUNC(sub_8313BE00);
PPC_FUNC_IMPL(__imp__sub_8313BE00) {
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
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313be3c
	if (!cr6.eq) goto loc_8313BE3C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11160
	ctx.r4.s64 = r11.s64 + 11160;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11200
	ctx.r3.s64 = r11.s64 + 11200;
loc_8313BE30:
	// bl 0x8313c420
	sub_8313C420(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// b 0x8313be60
	goto loc_8313BE60;
loc_8313BE3C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8313be5c
	if (!cr6.eq) goto loc_8313BE5C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11116
	ctx.r4.s64 = r11.s64 + 11116;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11188
	ctx.r3.s64 = r11.s64 + 11188;
	// b 0x8313be30
	goto loc_8313BE30;
loc_8313BE5C:
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_8313BE60:
	// bl 0x83141328
	sub_83141328(ctx, base);
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

__attribute__((alias("__imp__sub_8313BE80"))) PPC_WEAK_FUNC(sub_8313BE80);
PPC_FUNC_IMPL(__imp__sub_8313BE80) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313bebc
	if (!cr6.eq) goto loc_8313BEBC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11160
	ctx.r4.s64 = r11.s64 + 11160;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11224
	ctx.r3.s64 = r11.s64 + 11224;
loc_8313BEB4:
	// bl 0x8313c420
	sub_8313C420(ctx, base);
	// b 0x8313bee4
	goto loc_8313BEE4;
loc_8313BEBC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8313bedc
	if (!cr6.eq) goto loc_8313BEDC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11116
	ctx.r4.s64 = r11.s64 + 11116;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11212
	ctx.r3.s64 = r11.s64 + 11212;
	// b 0x8313beb4
	goto loc_8313BEB4;
loc_8313BEDC:
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r29.u32);
loc_8313BEE4:
	// bl 0x83141328
	sub_83141328(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8313BEF0"))) PPC_WEAK_FUNC(sub_8313BEF0);
PPC_FUNC_IMPL(__imp__sub_8313BEF0) {
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
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313bf28
	if (!cr6.eq) goto loc_8313BF28;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11160
	ctx.r4.s64 = r11.s64 + 11160;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11248
	ctx.r3.s64 = r11.s64 + 11248;
loc_8313BF20:
	// bl 0x8313c420
	sub_8313C420(ctx, base);
	// b 0x8313bf58
	goto loc_8313BF58;
loc_8313BF28:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8313bf48
	if (!cr6.eq) goto loc_8313BF48;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11116
	ctx.r4.s64 = r11.s64 + 11116;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11236
	ctx.r3.s64 = r11.s64 + 11236;
	// b 0x8313bf20
	goto loc_8313BF20;
loc_8313BF48:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
loc_8313BF58:
	// bl 0x83141328
	sub_83141328(ctx, base);
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

__attribute__((alias("__imp__sub_8313BF70"))) PPC_WEAK_FUNC(sub_8313BF70);
PPC_FUNC_IMPL(__imp__sub_8313BF70) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313bfb0
	if (!cr6.eq) goto loc_8313BFB0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11160
	ctx.r4.s64 = r11.s64 + 11160;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11272
	ctx.r3.s64 = r11.s64 + 11272;
loc_8313BFA8:
	// bl 0x8313c420
	sub_8313C420(ctx, base);
	// b 0x8313c004
	goto loc_8313C004;
loc_8313BFB0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8313bfd0
	if (!cr6.eq) goto loc_8313BFD0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11116
	ctx.r4.s64 = r11.s64 + 11116;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11260
	ctx.r3.s64 = r11.s64 + 11260;
	// b 0x8313bfa8
	goto loc_8313BFA8;
loc_8313BFD0:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// bne cr6,0x8313bfe0
	if (!cr6.eq) goto loc_8313BFE0;
	// lwz r31,12(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// b 0x8313c008
	goto loc_8313C008;
loc_8313BFE0:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x8313c004
	if (cr6.eq) goto loc_8313C004;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8313c004
	if (cr0.eq) goto loc_8313C004;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8313C004:
	// li r31,0
	r31.s64 = 0;
loc_8313C008:
	// bl 0x83141328
	sub_83141328(ctx, base);
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

__attribute__((alias("__imp__sub_8313C028"))) PPC_WEAK_FUNC(sub_8313C028);
PPC_FUNC_IMPL(__imp__sub_8313C028) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313c068
	if (!cr6.eq) goto loc_8313C068;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11160
	ctx.r4.s64 = r11.s64 + 11160;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11296
	ctx.r3.s64 = r11.s64 + 11296;
loc_8313C060:
	// bl 0x8313c420
	sub_8313C420(ctx, base);
	// b 0x8313c114
	goto loc_8313C114;
loc_8313C068:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8313c088
	if (!cr6.eq) goto loc_8313C088;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11116
	ctx.r4.s64 = r11.s64 + 11116;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11284
	ctx.r3.s64 = r11.s64 + 11284;
	// b 0x8313c060
	goto loc_8313C060;
loc_8313C088:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x8313c0a0
	if (!cr6.eq) goto loc_8313C0A0;
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x8313c114
	goto loc_8313C114;
loc_8313C0A0:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(r28.s32, 1, xer);
	// bne cr6,0x8313c0ec
	if (!cr6.eq) goto loc_8313C0EC;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// blt cr6,0x8313c0b8
	if (cr6.lt) goto loc_8313C0B8;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8313C0B8:
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x8313c114
	goto loc_8313C114;
loc_8313C0EC:
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8313c114
	if (cr0.eq) goto loc_8313C114;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8313C114:
	// bl 0x83141328
	sub_83141328(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8313C120"))) PPC_WEAK_FUNC(sub_8313C120);
PPC_FUNC_IMPL(__imp__sub_8313C120) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8313c15c
	if (!cr6.eq) goto loc_8313C15C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11160
	ctx.r4.s64 = r11.s64 + 11160;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11320
	ctx.r3.s64 = r11.s64 + 11320;
loc_8313C154:
	// bl 0x8313c420
	sub_8313C420(ctx, base);
	// b 0x8313c1cc
	goto loc_8313C1CC;
loc_8313C15C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8313c17c
	if (!cr6.eq) goto loc_8313C17C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11116
	ctx.r4.s64 = r11.s64 + 11116;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11308
	ctx.r3.s64 = r11.s64 + 11308;
	// b 0x8313c154
	goto loc_8313C154;
loc_8313C17C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8313c1cc
	if (!cr6.gt) goto loc_8313C1CC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8313c1cc
	if (cr6.eq) goto loc_8313C1CC;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x8313c1cc
	if (cr6.eq) goto loc_8313C1CC;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// beq cr6,0x8313c1cc
	if (cr6.eq) goto loc_8313C1CC;
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8313c1cc
	if (cr0.eq) goto loc_8313C1CC;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8313C1CC:
	// bl 0x83141328
	sub_83141328(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8313C1D8"))) PPC_WEAK_FUNC(sub_8313C1D8);
PPC_FUNC_IMPL(__imp__sub_8313C1D8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313bbb0
	sub_8313BBB0(ctx, base);
	// bl 0x83141328
	sub_83141328(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8313C210"))) PPC_WEAK_FUNC(sub_8313C210);
PPC_FUNC_IMPL(__imp__sub_8313C210) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313c254
	if (!cr6.eq) goto loc_8313C254;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11160
	ctx.r4.s64 = r11.s64 + 11160;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11368
	ctx.r3.s64 = r11.s64 + 11368;
loc_8313C248:
	// bl 0x8313c420
	sub_8313C420(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// b 0x8313c2c8
	goto loc_8313C2C8;
loc_8313C254:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8313c274
	if (!cr6.eq) goto loc_8313C274;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11116
	ctx.r4.s64 = r11.s64 + 11116;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11356
	ctx.r3.s64 = r11.s64 + 11356;
	// b 0x8313c248
	goto loc_8313C248;
loc_8313C274:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x8313c2b8
	if (cr6.eq) goto loc_8313C2B8;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// bne cr6,0x8313c298
	if (!cr6.eq) goto loc_8313C298;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(r30.s32, r29.s32, xer);
	// blt cr6,0x8313c2b8
	if (cr6.lt) goto loc_8313C2B8;
	// mr r30,r29
	r30.u64 = r29.u64;
	// b 0x8313c2b8
	goto loc_8313C2B8;
loc_8313C298:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// li r30,0
	r30.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8313c2b8
	if (cr0.eq) goto loc_8313C2B8;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8313C2B8:
	// subf r11,r30,r29
	r11.s64 = r29.s64 - r30.s64;
	// stw r30,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r30.u32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r31,r11,27,31,31
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_8313C2C8:
	// bl 0x83141328
	sub_83141328(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8313C2D8"))) PPC_WEAK_FUNC(sub_8313C2D8);
PPC_FUNC_IMPL(__imp__sub_8313C2D8) {
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
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313c314
	if (!cr6.eq) goto loc_8313C314;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11160
	ctx.r4.s64 = r11.s64 + 11160;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11392
	ctx.r3.s64 = r11.s64 + 11392;
loc_8313C308:
	// bl 0x8313c420
	sub_8313C420(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// b 0x8313c338
	goto loc_8313C338;
loc_8313C314:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8313c334
	if (!cr6.eq) goto loc_8313C334;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11116
	ctx.r4.s64 = r11.s64 + 11116;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11380
	ctx.r3.s64 = r11.s64 + 11380;
	// b 0x8313c308
	goto loc_8313C308;
loc_8313C334:
	// lwz r31,24(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 24);
loc_8313C338:
	// bl 0x83141328
	sub_83141328(ctx, base);
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

__attribute__((alias("__imp__sub_8313C358"))) PPC_WEAK_FUNC(sub_8313C358);
PPC_FUNC_IMPL(__imp__sub_8313C358) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// lis r11,-31931
	r11.s64 = -2092630016;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-25120
	r11.s64 = r11.s64 + -25120;
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
loc_8313C380:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x8313c3a0
	if (cr6.eq) goto loc_8313C3A0;
	// addi r9,r9,36
	ctx.r9.s64 = ctx.r9.s64 + 36;
	// addi r8,r11,1732
	ctx.r8.s64 = r11.s64 + 1732;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x8313c380
	if (cr6.lt) goto loc_8313C380;
loc_8313C3A0:
	// cmpwi cr6,r10,48
	cr6.compare<int32_t>(ctx.r10.s32, 48, xer);
	// bne cr6,0x8313c3b0
	if (!cr6.eq) goto loc_8313C3B0;
	// li r30,0
	r30.s64 = 0;
	// b 0x8313c400
	goto loc_8313C400;
loc_8313C3B0:
	// mulli r8,r10,36
	ctx.r8.s64 = ctx.r10.s64 * 36;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r8,-31980
	ctx.r8.s64 = -2095841280;
	// addi r10,r10,25292
	ctx.r10.s64 = ctx.r10.s64 + 25292;
	// addi r9,r9,11076
	ctx.r9.s64 = ctx.r9.s64 + 11076;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r8,r8,-17504
	ctx.r8.s64 = ctx.r8.s64 + -17504;
	// stw r29,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r29.u32);
	// mr r30,r11
	r30.u64 = r11.u64;
	// stw r31,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r31.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r8,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r8.u32);
	// stw r11,32(r11)
	PPC_STORE_U32(r11.u32 + 32, r11.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r31.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
loc_8313C400:
	// bl 0x83141328
	sub_83141328(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8313C410"))) PPC_WEAK_FUNC(sub_8313C410);
PPC_FUNC_IMPL(__imp__sub_8313C410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11472
	ctx.r3.s64 = r11.s64 + 11472;
	// b 0x83185af8
	sub_83185AF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313C420"))) PPC_WEAK_FUNC(sub_8313C420);
PPC_FUNC_IMPL(__imp__sub_8313C420) {
	PPC_FUNC_PROLOGUE();
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83138218
	sub_83138218(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831382a8
	sub_831382A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83185af8
	sub_83185AF8(ctx, base);
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

__attribute__((alias("__imp__sub_8313C470"))) PPC_WEAK_FUNC(sub_8313C470);
PPC_FUNC_IMPL(__imp__sub_8313C470) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8313c48c
	if (!cr6.eq) goto loc_8313C48C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11160
	ctx.r4.s64 = r11.s64 + 11160;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11568
	ctx.r3.s64 = r11.s64 + 11568;
	// b 0x8313c420
	sub_8313C420(ctx, base);
	return;
loc_8313C48C:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8313c4ac
	if (!cr6.eq) goto loc_8313C4AC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11116
	ctx.r4.s64 = r11.s64 + 11116;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11556
	ctx.r3.s64 = r11.s64 + 11556;
	// b 0x8313c420
	sub_8313C420(ctx, base);
	return;
loc_8313C4AC:
	// li r11,0
	r11.s64 = 0;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C4D8"))) PPC_WEAK_FUNC(sub_8313C4D8);
PPC_FUNC_IMPL(__imp__sub_8313C4D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8313c4f8
	if (!cr6.eq) goto loc_8313C4F8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11160
	ctx.r4.s64 = r11.s64 + 11160;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11652
	ctx.r3.s64 = r11.s64 + 11652;
	// b 0x8313c420
	sub_8313C420(ctx, base);
	return;
loc_8313C4F8:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8313c518
	if (!cr6.eq) goto loc_8313C518;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11116
	ctx.r4.s64 = r11.s64 + 11116;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11640
	ctx.r3.s64 = r11.s64 + 11640;
	// b 0x8313c420
	sub_8313C420(ctx, base);
	return;
loc_8313C518:
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8313c538
	if (!cr0.eq) goto loc_8313C538;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11616
	ctx.r4.s64 = r11.s64 + 11616;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11604
	ctx.r3.s64 = r11.s64 + 11604;
	// b 0x8313c420
	sub_8313C420(ctx, base);
	return;
loc_8313C538:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8313c5c4
	if (!cr6.eq) goto loc_8313C5C4;
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x8313c560
	if (cr6.lt) goto loc_8313C560;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8313C560:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// bge cr6,0x8313c570
	if (!cr6.lt) goto loc_8313C570;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8313C570:
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, r11.u32);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// divw r7,r10,r9
	ctx.r7.s32 = ctx.r10.s32 / ctx.r9.s32;
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// blr 
	return;
loc_8313C5C4:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8313c650
	if (!cr6.eq) goto loc_8313C650;
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x8313c5ec
	if (cr6.lt) goto loc_8313C5EC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8313C5EC:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// bge cr6,0x8313c5fc
	if (!cr6.lt) goto loc_8313C5FC;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8313C5FC:
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, r11.u32);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// divw r7,r10,r9
	ctx.r7.s32 = ctx.r10.s32 / ctx.r9.s32;
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// blr 
	return;
loc_8313C650:
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, r11.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8313C678"))) PPC_WEAK_FUNC(sub_8313C678);
PPC_FUNC_IMPL(__imp__sub_8313C678) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313c6b4
	if (!cr6.eq) goto loc_8313C6B4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11160
	ctx.r4.s64 = r11.s64 + 11160;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11676
	ctx.r3.s64 = r11.s64 + 11676;
loc_8313C6AC:
	// bl 0x8313c420
	sub_8313C420(ctx, base);
	// b 0x8313c804
	goto loc_8313C804;
loc_8313C6B4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8313c6d4
	if (!cr6.eq) goto loc_8313C6D4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11116
	ctx.r4.s64 = r11.s64 + 11116;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11664
	ctx.r3.s64 = r11.s64 + 11664;
	// b 0x8313c6ac
	goto loc_8313C6AC;
loc_8313C6D4:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x8313c804
	if (!cr0.gt) goto loc_8313C804;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8313c804
	if (cr6.eq) goto loc_8313C804;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8313c7b4
	if (!cr6.eq) goto loc_8313C7B4;
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8313c710
	if (cr0.eq) goto loc_8313C710;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8313C710:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// subf r11,r8,r4
	r11.s64 = ctx.r4.s64 - ctx.r8.s64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8313c750
	if (!cr6.lt) goto loc_8313C750;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// blt cr6,0x8313c73c
	if (cr6.lt) goto loc_8313C73C;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8313C73C:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
loc_8313C750:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r9,r3,r11
	ctx.r9.s64 = r11.s64 - ctx.r3.s64;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// ble cr6,0x8313c790
	if (!cr6.gt) goto loc_8313C790;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8313c780
	if (cr6.lt) goto loc_8313C780;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8313C780:
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - r11.s64;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
loc_8313C790:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// b 0x8313c804
	goto loc_8313C804;
loc_8313C7B4:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8313c7dc
	if (!cr6.eq) goto loc_8313C7DC;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// b 0x8313c804
	goto loc_8313C804;
loc_8313C7DC:
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8313c804
	if (cr0.eq) goto loc_8313C804;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8313C804:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C820"))) PPC_WEAK_FUNC(sub_8313C820);
PPC_FUNC_IMPL(__imp__sub_8313C820) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313c85c
	if (!cr6.eq) goto loc_8313C85C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11160
	ctx.r4.s64 = r11.s64 + 11160;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11712
	ctx.r3.s64 = r11.s64 + 11712;
loc_8313C854:
	// bl 0x8313c420
	sub_8313C420(ctx, base);
	// b 0x8313c9e4
	goto loc_8313C9E4;
loc_8313C85C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8313c87c
	if (!cr6.eq) goto loc_8313C87C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11116
	ctx.r4.s64 = r11.s64 + 11116;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11700
	ctx.r3.s64 = r11.s64 + 11700;
	// b 0x8313c854
	goto loc_8313C854;
loc_8313C87C:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8313c89c
	if (!cr0.eq) goto loc_8313C89C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11616
	ctx.r4.s64 = r11.s64 + 11616;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11688
	ctx.r3.s64 = r11.s64 + 11688;
	// b 0x8313c854
	goto loc_8313C854;
loc_8313C89C:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x8313c9e4
	if (!cr0.gt) goto loc_8313C9E4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8313c9e4
	if (cr0.eq) goto loc_8313C9E4;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8313c938
	if (!cr6.eq) goto loc_8313C938;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// divw r8,r10,r11
	ctx.r8.s32 = ctx.r10.s32 / r11.s32;
	// divw r7,r9,r11
	ctx.r7.s32 = ctx.r9.s32 / r11.s32;
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r11.s32);
	// mullw r11,r7,r11
	r11.s64 = int64_t(ctx.r7.s32) * int64_t(r11.s32);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8313c908
	if (!cr6.eq) goto loc_8313C908;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// b 0x8313c924
	goto loc_8313C924;
loc_8313C908:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8313c924
	if (cr0.eq) goto loc_8313C924;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8313C924:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// b 0x8313c9e4
	goto loc_8313C9E4;
loc_8313C938:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8313c9bc
	if (!cr6.eq) goto loc_8313C9BC;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// divw r8,r10,r11
	ctx.r8.s32 = ctx.r10.s32 / r11.s32;
	// divw r7,r9,r11
	ctx.r7.s32 = ctx.r9.s32 / r11.s32;
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r11.s32);
	// mullw r11,r7,r11
	r11.s64 = int64_t(ctx.r7.s32) * int64_t(r11.s32);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8313c98c
	if (!cr6.eq) goto loc_8313C98C;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x8313c9a8
	goto loc_8313C9A8;
loc_8313C98C:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8313c9a8
	if (cr0.eq) goto loc_8313C9A8;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8313C9A8:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// b 0x8313c9e4
	goto loc_8313C9E4;
loc_8313C9BC:
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8313c9e4
	if (cr0.eq) goto loc_8313C9E4;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8313C9E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313CA00"))) PPC_WEAK_FUNC(sub_8313CA00);
PPC_FUNC_IMPL(__imp__sub_8313CA00) {
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
	// bl 0x831411f0
	sub_831411F0(ctx, base);
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// lis r30,-31941
	r30.s64 = -2093285376;
	// lwz r31,-30900(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + -30900);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x8313ca40
	if (!cr6.eq) goto loc_8313CA40;
	// lis r11,-31932
	r11.s64 = -2092695552;
	// li r5,27648
	ctx.r5.s64 = 27648;
	// addi r3,r11,12768
	ctx.r3.s64 = r11.s64 + 12768;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_8313CA40:
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// stw r11,-30900(r30)
	PPC_STORE_U32(r30.u32 + -30900, r11.u32);
	// bl 0x83141328
	sub_83141328(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313CA68"))) PPC_WEAK_FUNC(sub_8313CA68);
PPC_FUNC_IMPL(__imp__sub_8313CA68) {
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
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// lwz r11,-30900(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30900);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,-30900(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30900, r11.u32);
	// bne 0x8313caa0
	if (!cr0.eq) goto loc_8313CAA0;
	// lis r11,-31932
	r11.s64 = -2092695552;
	// li r5,27648
	ctx.r5.s64 = 27648;
	// addi r3,r11,12768
	ctx.r3.s64 = r11.s64 + 12768;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_8313CAA0:
	// bl 0x83141328
	sub_83141328(ctx, base);
	// bl 0x83141270
	sub_83141270(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313CAB8"))) PPC_WEAK_FUNC(sub_8313CAB8);
PPC_FUNC_IMPL(__imp__sub_8313CAB8) {
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
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313caf0
	if (!cr6.eq) goto loc_8313CAF0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11160
	ctx.r4.s64 = r11.s64 + 11160;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11496
	ctx.r3.s64 = r11.s64 + 11496;
loc_8313CAE8:
	// bl 0x8313c420
	sub_8313C420(ctx, base);
	// b 0x8313cb28
	goto loc_8313CB28;
loc_8313CAF0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8313cb10
	if (!cr6.eq) goto loc_8313CB10;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11116
	ctx.r4.s64 = r11.s64 + 11116;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11484
	ctx.r3.s64 = r11.s64 + 11484;
	// b 0x8313cae8
	goto loc_8313CAE8;
loc_8313CB10:
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_8313CB28:
	// bl 0x83141328
	sub_83141328(ctx, base);
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

__attribute__((alias("__imp__sub_8313CB40"))) PPC_WEAK_FUNC(sub_8313CB40);
PPC_FUNC_IMPL(__imp__sub_8313CB40) {
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
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313cb7c
	if (!cr6.eq) goto loc_8313CB7C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11160
	ctx.r4.s64 = r11.s64 + 11160;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11520
	ctx.r3.s64 = r11.s64 + 11520;
loc_8313CB70:
	// bl 0x8313c420
	sub_8313C420(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// b 0x8313cba0
	goto loc_8313CBA0;
loc_8313CB7C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8313cb9c
	if (!cr6.eq) goto loc_8313CB9C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11116
	ctx.r4.s64 = r11.s64 + 11116;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11508
	ctx.r3.s64 = r11.s64 + 11508;
	// b 0x8313cb70
	goto loc_8313CB70;
loc_8313CB9C:
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_8313CBA0:
	// bl 0x83141328
	sub_83141328(ctx, base);
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

__attribute__((alias("__imp__sub_8313CBC0"))) PPC_WEAK_FUNC(sub_8313CBC0);
PPC_FUNC_IMPL(__imp__sub_8313CBC0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313cbfc
	if (!cr6.eq) goto loc_8313CBFC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11160
	ctx.r4.s64 = r11.s64 + 11160;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11544
	ctx.r3.s64 = r11.s64 + 11544;
loc_8313CBF4:
	// bl 0x8313c420
	sub_8313C420(ctx, base);
	// b 0x8313cc24
	goto loc_8313CC24;
loc_8313CBFC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8313cc1c
	if (!cr6.eq) goto loc_8313CC1C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11116
	ctx.r4.s64 = r11.s64 + 11116;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11532
	ctx.r3.s64 = r11.s64 + 11532;
	// b 0x8313cbf4
	goto loc_8313CBF4;
loc_8313CC1C:
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r29,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r29.u32);
loc_8313CC24:
	// bl 0x83141328
	sub_83141328(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8313CC30"))) PPC_WEAK_FUNC(sub_8313CC30);
PPC_FUNC_IMPL(__imp__sub_8313CC30) {
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
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313c470
	sub_8313C470(ctx, base);
	// bl 0x83141328
	sub_83141328(ctx, base);
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

__attribute__((alias("__imp__sub_8313CC68"))) PPC_WEAK_FUNC(sub_8313CC68);
PPC_FUNC_IMPL(__imp__sub_8313CC68) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313cca8
	if (!cr6.eq) goto loc_8313CCA8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11160
	ctx.r4.s64 = r11.s64 + 11160;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11592
	ctx.r3.s64 = r11.s64 + 11592;
loc_8313CCA0:
	// bl 0x8313c420
	sub_8313C420(ctx, base);
	// b 0x8313cd04
	goto loc_8313CD04;
loc_8313CCA8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8313ccc8
	if (!cr6.eq) goto loc_8313CCC8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11116
	ctx.r4.s64 = r11.s64 + 11116;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11580
	ctx.r3.s64 = r11.s64 + 11580;
	// b 0x8313cca0
	goto loc_8313CCA0;
loc_8313CCC8:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// bne cr6,0x8313ccd8
	if (!cr6.eq) goto loc_8313CCD8;
	// lwz r31,12(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// b 0x8313cd08
	goto loc_8313CD08;
loc_8313CCD8:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x8313cce8
	if (!cr6.eq) goto loc_8313CCE8;
	// lwz r31,16(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// b 0x8313cd08
	goto loc_8313CD08;
loc_8313CCE8:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8313cd04
	if (cr0.eq) goto loc_8313CD04;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8313CD04:
	// li r31,0
	r31.s64 = 0;
loc_8313CD08:
	// bl 0x83141328
	sub_83141328(ctx, base);
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

__attribute__((alias("__imp__sub_8313CD28"))) PPC_WEAK_FUNC(sub_8313CD28);
PPC_FUNC_IMPL(__imp__sub_8313CD28) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313c4d8
	sub_8313C4D8(ctx, base);
	// bl 0x83141328
	sub_83141328(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8313CD68"))) PPC_WEAK_FUNC(sub_8313CD68);
PPC_FUNC_IMPL(__imp__sub_8313CD68) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313c678
	sub_8313C678(ctx, base);
	// bl 0x83141328
	sub_83141328(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8313CDA0"))) PPC_WEAK_FUNC(sub_8313CDA0);
PPC_FUNC_IMPL(__imp__sub_8313CDA0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313c820
	sub_8313C820(ctx, base);
	// bl 0x83141328
	sub_83141328(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8313CDD8"))) PPC_WEAK_FUNC(sub_8313CDD8);
PPC_FUNC_IMPL(__imp__sub_8313CDD8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313ce1c
	if (!cr6.eq) goto loc_8313CE1C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11160
	ctx.r4.s64 = r11.s64 + 11160;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11736
	ctx.r3.s64 = r11.s64 + 11736;
loc_8313CE10:
	// bl 0x8313c420
	sub_8313C420(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// b 0x8313cec4
	goto loc_8313CEC4;
loc_8313CE1C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8313ce3c
	if (!cr6.eq) goto loc_8313CE3C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11116
	ctx.r4.s64 = r11.s64 + 11116;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11724
	ctx.r3.s64 = r11.s64 + 11724;
	// b 0x8313ce10
	goto loc_8313CE10;
loc_8313CE3C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x8313ce58
	if (!cr6.eq) goto loc_8313CE58;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// b 0x8313ce70
	goto loc_8313CE70;
loc_8313CE58:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// bne cr6,0x8313ce94
	if (!cr6.eq) goto loc_8313CE94;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_8313CE70:
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// add r30,r10,r9
	r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x8313ce84
	if (!cr6.lt) goto loc_8313CE84;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_8313CE84:
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(r30.s32, r29.s32, xer);
	// blt cr6,0x8313ceb4
	if (cr6.lt) goto loc_8313CEB4;
	// mr r30,r29
	r30.u64 = r29.u64;
	// b 0x8313ceb4
	goto loc_8313CEB4;
loc_8313CE94:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// li r30,0
	r30.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8313ceb4
	if (cr0.eq) goto loc_8313CEB4;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8313CEB4:
	// subf r11,r30,r29
	r11.s64 = r29.s64 - r30.s64;
	// stw r30,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r30.u32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r31,r11,27,31,31
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_8313CEC4:
	// bl 0x83141328
	sub_83141328(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8313CED8"))) PPC_WEAK_FUNC(sub_8313CED8);
PPC_FUNC_IMPL(__imp__sub_8313CED8) {
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
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313cf14
	if (!cr6.eq) goto loc_8313CF14;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11160
	ctx.r4.s64 = r11.s64 + 11160;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11760
	ctx.r3.s64 = r11.s64 + 11760;
loc_8313CF08:
	// bl 0x8313c420
	sub_8313C420(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// b 0x8313cf38
	goto loc_8313CF38;
loc_8313CF14:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8313cf34
	if (!cr6.eq) goto loc_8313CF34;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11116
	ctx.r4.s64 = r11.s64 + 11116;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11748
	ctx.r3.s64 = r11.s64 + 11748;
	// b 0x8313cf08
	goto loc_8313CF08;
loc_8313CF34:
	// lwz r31,28(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 28);
loc_8313CF38:
	// bl 0x83141328
	sub_83141328(ctx, base);
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

__attribute__((alias("__imp__sub_8313CF58"))) PPC_WEAK_FUNC(sub_8313CF58);
PPC_FUNC_IMPL(__imp__sub_8313CF58) {
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
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313cf94
	if (!cr6.eq) goto loc_8313CF94;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11160
	ctx.r4.s64 = r11.s64 + 11160;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11784
	ctx.r3.s64 = r11.s64 + 11784;
loc_8313CF88:
	// bl 0x8313c420
	sub_8313C420(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// b 0x8313cfb8
	goto loc_8313CFB8;
loc_8313CF94:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8313cfb4
	if (!cr6.eq) goto loc_8313CFB4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11116
	ctx.r4.s64 = r11.s64 + 11116;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11772
	ctx.r3.s64 = r11.s64 + 11772;
	// b 0x8313cf88
	goto loc_8313CF88;
loc_8313CFB4:
	// lwz r31,32(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 32);
loc_8313CFB8:
	// bl 0x83141328
	sub_83141328(ctx, base);
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

__attribute__((alias("__imp__sub_8313CFD8"))) PPC_WEAK_FUNC(sub_8313CFD8);
PPC_FUNC_IMPL(__imp__sub_8313CFD8) {
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
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313d014
	if (!cr6.eq) goto loc_8313D014;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11160
	ctx.r4.s64 = r11.s64 + 11160;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11808
	ctx.r3.s64 = r11.s64 + 11808;
loc_8313D008:
	// bl 0x8313c420
	sub_8313C420(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// b 0x8313d038
	goto loc_8313D038;
loc_8313D014:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8313d034
	if (!cr6.eq) goto loc_8313D034;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11116
	ctx.r4.s64 = r11.s64 + 11116;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11796
	ctx.r3.s64 = r11.s64 + 11796;
	// b 0x8313d008
	goto loc_8313D008;
loc_8313D034:
	// lwz r31,36(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 36);
loc_8313D038:
	// bl 0x83141328
	sub_83141328(ctx, base);
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

__attribute__((alias("__imp__sub_8313D058"))) PPC_WEAK_FUNC(sub_8313D058);
PPC_FUNC_IMPL(__imp__sub_8313D058) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313d098
	if (!cr6.eq) goto loc_8313D098;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11160
	ctx.r4.s64 = r11.s64 + 11160;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11832
	ctx.r3.s64 = r11.s64 + 11832;
loc_8313D08C:
	// bl 0x8313c420
	sub_8313C420(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// b 0x8313d0cc
	goto loc_8313D0CC;
loc_8313D098:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8313d0b8
	if (!cr6.eq) goto loc_8313D0B8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11116
	ctx.r4.s64 = r11.s64 + 11116;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11820
	ctx.r3.s64 = r11.s64 + 11820;
	// b 0x8313d08c
	goto loc_8313D08C;
loc_8313D0B8:
	// addi r11,r30,5
	r11.s64 = r30.s64 + 5;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r31
	r31.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
loc_8313D0CC:
	// bl 0x83141328
	sub_83141328(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8313D0E0"))) PPC_WEAK_FUNC(sub_8313D0E0);
PPC_FUNC_IMPL(__imp__sub_8313D0E0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// lis r11,-31932
	r11.s64 = -2092695552;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,12768
	r11.s64 = r11.s64 + 12768;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
loc_8313D110:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x8313d130
	if (cr6.eq) goto loc_8313D130;
	// addi r9,r9,72
	ctx.r9.s64 = ctx.r9.s64 + 72;
	// addi r8,r11,27652
	ctx.r8.s64 = r11.s64 + 27652;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x8313d110
	if (cr6.lt) goto loc_8313D110;
loc_8313D130:
	// cmpwi cr6,r10,384
	cr6.compare<int32_t>(ctx.r10.s32, 384, xer);
	// bne cr6,0x8313d140
	if (!cr6.eq) goto loc_8313D140;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// b 0x8313d194
	goto loc_8313D194;
loc_8313D140:
	// mulli r8,r10,72
	ctx.r8.s64 = ctx.r10.s64 * 72;
	// add r31,r8,r11
	r31.u64 = ctx.r8.u64 + r11.u64;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r11,-31980
	r11.s64 = -2095841280;
	// addi r10,r10,25340
	ctx.r10.s64 = ctx.r10.s64 + 25340;
	// addi r9,r9,11456
	ctx.r9.s64 = ctx.r9.s64 + 11456;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// addi r11,r11,-15344
	r11.s64 = r11.s64 + -15344;
	// stw r29,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r28,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r28.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r31,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r31.u32);
	// stw r7,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r7.u32);
	// stw r7,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r7.u32);
	// bl 0x8313c470
	sub_8313C470(ctx, base);
loc_8313D194:
	// bl 0x83141328
	sub_83141328(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8313D1A8"))) PPC_WEAK_FUNC(sub_8313D1A8);
PPC_FUNC_IMPL(__imp__sub_8313D1A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8313d1c4
	if (!cr6.eq) goto loc_8313D1C4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11160
	ctx.r4.s64 = r11.s64 + 11160;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11944
	ctx.r3.s64 = r11.s64 + 11944;
	// b 0x8313c420
	sub_8313C420(ctx, base);
	return;
loc_8313D1C4:
	// lbz r11,4(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8313d1e4
	if (!cr6.eq) goto loc_8313D1E4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11116
	ctx.r4.s64 = r11.s64 + 11116;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11932
	ctx.r3.s64 = r11.s64 + 11932;
	// b 0x8313c420
	sub_8313C420(ctx, base);
	return;
loc_8313D1E4:
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	r11.s64 = 0;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// ble 0x8313d22c
	if (!cr0.gt) goto loc_8313D22C;
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
loc_8313D204:
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r7,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r7.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// blt cr6,0x8313d204
	if (cr6.lt) goto loc_8313D204;
loc_8313D22C:
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D258"))) PPC_WEAK_FUNC(sub_8313D258);
PPC_FUNC_IMPL(__imp__sub_8313D258) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8313d298
	if (!cr6.eq) goto loc_8313D298;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11160
	ctx.r4.s64 = r11.s64 + 11160;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11992
	ctx.r3.s64 = r11.s64 + 11992;
loc_8313D290:
	// bl 0x8313c420
	sub_8313C420(ctx, base);
	// b 0x8313d35c
	goto loc_8313D35C;
loc_8313D298:
	// lbz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8313d2b8
	if (!cr6.eq) goto loc_8313D2B8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11116
	ctx.r4.s64 = r11.s64 + 11116;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11980
	ctx.r3.s64 = r11.s64 + 11980;
	// b 0x8313d290
	goto loc_8313D290;
loc_8313D2B8:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgt cr6,0x8313d334
	if (cr6.gt) goto loc_8313D334;
	// addi r11,r11,6
	r11.s64 = r11.s64 + 6;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r3
	r31.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x8313d350
	if (cr0.eq) goto loc_8313D350;
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// bgt cr6,0x8313d304
	if (cr6.gt) goto loc_8313D304;
	// std r10,0(r30)
	PPC_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stwx r10,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r31.u32);
	// b 0x8313d35c
	goto loc_8313D35C;
loc_8313D304:
	// lbz r11,5(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8313d350
	if (!cr6.eq) goto loc_8313D350;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8313daa0
	sub_8313DAA0(ctx, base);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r11.u64);
	// std r10,8(r31)
	PPC_STORE_U64(r31.u32 + 8, ctx.r10.u64);
	// b 0x8313d35c
	goto loc_8313D35C;
loc_8313D334:
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8313d350
	if (cr0.eq) goto loc_8313D350;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8313D350:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_8313D35C:
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

__attribute__((alias("__imp__sub_8313D378"))) PPC_WEAK_FUNC(sub_8313D378);
PPC_FUNC_IMPL(__imp__sub_8313D378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8313d394
	if (!cr6.eq) goto loc_8313D394;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11160
	ctx.r4.s64 = r11.s64 + 11160;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,12016
	ctx.r3.s64 = r11.s64 + 12016;
	// b 0x8313c420
	sub_8313C420(ctx, base);
	return;
loc_8313D394:
	// lbz r11,4(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8313d3b4
	if (!cr6.eq) goto loc_8313D3B4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11116
	ctx.r4.s64 = r11.s64 + 11116;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,12004
	ctx.r3.s64 = r11.s64 + 12004;
	// b 0x8313c420
	sub_8313C420(ctx, base);
	return;
loc_8313D3B4:
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bgt cr6,0x8313d484
	if (cr6.gt) goto loc_8313D484;
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi r6,0
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// blelr 
	if (!cr0.gt) return;
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// addi r11,r4,6
	r11.s64 = ctx.r4.s64 + 6;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r3
	ctx.r9.u64 = r11.u64 + ctx.r3.u64;
	// b 0x8313d3f0
	goto loc_8313D3F0;
loc_8313D3E8:
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8313D3F0:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8313d3e8
	if (!cr0.eq) goto loc_8313D3E8;
	// lbz r11,5(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8313d430
	if (!cr6.eq) goto loc_8313D430;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8313d430
	if (cr6.eq) goto loc_8313D430;
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x8313d430
	if (!cr6.eq) goto loc_8313D430;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// blr 
	return;
loc_8313D430:
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8313d458
	if (!cr0.eq) goto loc_8313D458;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_8313D458:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// blr 
	return;
loc_8313D484:
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8313D4A0"))) PPC_WEAK_FUNC(sub_8313D4A0);
PPC_FUNC_IMPL(__imp__sub_8313D4A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8313d4bc
	if (!cr6.eq) goto loc_8313D4BC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11160
	ctx.r4.s64 = r11.s64 + 11160;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,12040
	ctx.r3.s64 = r11.s64 + 12040;
	// b 0x8313c420
	sub_8313C420(ctx, base);
	return;
loc_8313D4BC:
	// lbz r11,4(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8313d4dc
	if (!cr6.eq) goto loc_8313D4DC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11116
	ctx.r4.s64 = r11.s64 + 11116;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,12028
	ctx.r3.s64 = r11.s64 + 12028;
	// b 0x8313c420
	sub_8313C420(ctx, base);
	return;
loc_8313D4DC:
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bgt cr6,0x8313d5a0
	if (cr6.gt) goto loc_8313D5A0;
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blelr 
	if (!cr0.gt) return;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// addi r11,r4,6
	r11.s64 = ctx.r4.s64 + 6;
	// lbz r7,5(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// lwzx r11,r10,r3
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// bne cr6,0x8313d544
	if (!cr6.eq) goto loc_8313D544;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8313d544
	if (cr6.eq) goto loc_8313D544;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x8313d544
	if (!cr6.eq) goto loc_8313D544;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
loc_8313D544:
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8313d56c
	if (!cr0.eq) goto loc_8313D56C;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_8313D56C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,8
	ctx.r7.s64 = r11.s64 + 8;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r9,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, r11.u32);
	// blr 
	return;
loc_8313D5A0:
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8313D5C0"))) PPC_WEAK_FUNC(sub_8313D5C0);
PPC_FUNC_IMPL(__imp__sub_8313D5C0) {
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
	// bl 0x831411f0
	sub_831411F0(ctx, base);
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// lis r30,-31941
	r30.s64 = -2093285376;
	// lwz r31,-30896(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + -30896);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x8313d600
	if (!cr6.eq) goto loc_8313D600;
	// lis r11,-31932
	r11.s64 = -2092695552;
	// li r5,4608
	ctx.r5.s64 = 4608;
	// addi r3,r11,8160
	ctx.r3.s64 = r11.s64 + 8160;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_8313D600:
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// stw r11,-30896(r30)
	PPC_STORE_U32(r30.u32 + -30896, r11.u32);
	// bl 0x83141328
	sub_83141328(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D628"))) PPC_WEAK_FUNC(sub_8313D628);
PPC_FUNC_IMPL(__imp__sub_8313D628) {
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
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// lwz r11,-30896(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30896);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,-30896(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30896, r11.u32);
	// bne 0x8313d660
	if (!cr0.eq) goto loc_8313D660;
	// lis r11,-31932
	r11.s64 = -2092695552;
	// li r5,4608
	ctx.r5.s64 = 4608;
	// addi r3,r11,8160
	ctx.r3.s64 = r11.s64 + 8160;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_8313D660:
	// bl 0x83141328
	sub_83141328(ctx, base);
	// bl 0x83141270
	sub_83141270(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D678"))) PPC_WEAK_FUNC(sub_8313D678);
PPC_FUNC_IMPL(__imp__sub_8313D678) {
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
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313d6b0
	if (!cr6.eq) goto loc_8313D6B0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11160
	ctx.r4.s64 = r11.s64 + 11160;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11872
	ctx.r3.s64 = r11.s64 + 11872;
loc_8313D6A8:
	// bl 0x8313c420
	sub_8313C420(ctx, base);
	// b 0x8313d6e8
	goto loc_8313D6E8;
loc_8313D6B0:
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8313d6d0
	if (!cr6.eq) goto loc_8313D6D0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11116
	ctx.r4.s64 = r11.s64 + 11116;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11860
	ctx.r3.s64 = r11.s64 + 11860;
	// b 0x8313d6a8
	goto loc_8313D6A8;
loc_8313D6D0:
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
loc_8313D6E8:
	// bl 0x83141328
	sub_83141328(ctx, base);
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

__attribute__((alias("__imp__sub_8313D700"))) PPC_WEAK_FUNC(sub_8313D700);
PPC_FUNC_IMPL(__imp__sub_8313D700) {
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
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313d73c
	if (!cr6.eq) goto loc_8313D73C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11160
	ctx.r4.s64 = r11.s64 + 11160;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11896
	ctx.r3.s64 = r11.s64 + 11896;
loc_8313D730:
	// bl 0x8313c420
	sub_8313C420(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// b 0x8313d760
	goto loc_8313D760;
loc_8313D73C:
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8313d75c
	if (!cr6.eq) goto loc_8313D75C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11116
	ctx.r4.s64 = r11.s64 + 11116;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11884
	ctx.r3.s64 = r11.s64 + 11884;
	// b 0x8313d730
	goto loc_8313D730;
loc_8313D75C:
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_8313D760:
	// bl 0x83141328
	sub_83141328(ctx, base);
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

__attribute__((alias("__imp__sub_8313D780"))) PPC_WEAK_FUNC(sub_8313D780);
PPC_FUNC_IMPL(__imp__sub_8313D780) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313d7bc
	if (!cr6.eq) goto loc_8313D7BC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11160
	ctx.r4.s64 = r11.s64 + 11160;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11920
	ctx.r3.s64 = r11.s64 + 11920;
loc_8313D7B4:
	// bl 0x8313c420
	sub_8313C420(ctx, base);
	// b 0x8313d7e4
	goto loc_8313D7E4;
loc_8313D7BC:
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8313d7dc
	if (!cr6.eq) goto loc_8313D7DC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11116
	ctx.r4.s64 = r11.s64 + 11116;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11908
	ctx.r3.s64 = r11.s64 + 11908;
	// b 0x8313d7b4
	goto loc_8313D7B4;
loc_8313D7DC:
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r29,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r29.u32);
loc_8313D7E4:
	// bl 0x83141328
	sub_83141328(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8313D7F0"))) PPC_WEAK_FUNC(sub_8313D7F0);
PPC_FUNC_IMPL(__imp__sub_8313D7F0) {
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
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313d1a8
	sub_8313D1A8(ctx, base);
	// bl 0x83141328
	sub_83141328(ctx, base);
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

__attribute__((alias("__imp__sub_8313D828"))) PPC_WEAK_FUNC(sub_8313D828);
PPC_FUNC_IMPL(__imp__sub_8313D828) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8313d868
	if (!cr6.eq) goto loc_8313D868;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11160
	ctx.r4.s64 = r11.s64 + 11160;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11968
	ctx.r3.s64 = r11.s64 + 11968;
loc_8313D860:
	// bl 0x8313c420
	sub_8313C420(ctx, base);
	// b 0x8313d8d8
	goto loc_8313D8D8;
loc_8313D868:
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8313d888
	if (!cr6.eq) goto loc_8313D888;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11116
	ctx.r4.s64 = r11.s64 + 11116;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,11956
	ctx.r3.s64 = r11.s64 + 11956;
	// b 0x8313d860
	goto loc_8313D860;
loc_8313D888:
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(r31.u32, 3, xer);
	// bgt cr6,0x8313d8bc
	if (cr6.gt) goto loc_8313D8BC;
	// addi r11,r31,6
	r11.s64 = r31.s64 + 6;
	// li r31,0
	r31.s64 = 0;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// b 0x8313d8b0
	goto loc_8313D8B0;
loc_8313D8A4:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r31,r10,r31
	r31.u64 = ctx.r10.u64 + r31.u64;
loc_8313D8B0:
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8313d8a4
	if (!cr0.eq) goto loc_8313D8A4;
	// b 0x8313d8dc
	goto loc_8313D8DC;
loc_8313D8BC:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8313d8d8
	if (cr0.eq) goto loc_8313D8D8;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8313D8D8:
	// li r31,0
	r31.s64 = 0;
loc_8313D8DC:
	// bl 0x83141328
	sub_83141328(ctx, base);
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

__attribute__((alias("__imp__sub_8313D900"))) PPC_WEAK_FUNC(sub_8313D900);
PPC_FUNC_IMPL(__imp__sub_8313D900) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313d258
	sub_8313D258(ctx, base);
	// bl 0x83141328
	sub_83141328(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8313D940"))) PPC_WEAK_FUNC(sub_8313D940);
PPC_FUNC_IMPL(__imp__sub_8313D940) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313d378
	sub_8313D378(ctx, base);
	// bl 0x83141328
	sub_83141328(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8313D978"))) PPC_WEAK_FUNC(sub_8313D978);
PPC_FUNC_IMPL(__imp__sub_8313D978) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313d4a0
	sub_8313D4A0(ctx, base);
	// bl 0x83141328
	sub_83141328(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8313D9B0"))) PPC_WEAK_FUNC(sub_8313D9B0);
PPC_FUNC_IMPL(__imp__sub_8313D9B0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x831412e8
	sub_831412E8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313d9f0
	if (!cr6.eq) goto loc_8313D9F0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11160
	ctx.r4.s64 = r11.s64 + 11160;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,12064
	ctx.r3.s64 = r11.s64 + 12064;
loc_8313D9E8:
	// bl 0x8313c420
	sub_8313C420(ctx, base);
	// b 0x8313da8c
	goto loc_8313DA8C;
loc_8313D9F0:
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8313da10
	if (!cr6.eq) goto loc_8313DA10;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,11116
	ctx.r4.s64 = r11.s64 + 11116;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,12052
	ctx.r3.s64 = r11.s64 + 12052;
	// b 0x8313d9e8
	goto loc_8313D9E8;
loc_8313DA10:
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(r30.u32, 3, xer);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// bgt cr6,0x8313da70
	if (cr6.gt) goto loc_8313DA70;
	// addi r11,r30,6
	r11.s64 = r30.s64 + 6;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8313da8c
	if (cr0.eq) goto loc_8313DA8C;
	// ld r11,8(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8313da60
	if (!cr6.eq) goto loc_8313DA60;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// blt cr6,0x8313da8c
	if (cr6.lt) goto loc_8313DA8C;
	// li r31,1
	r31.s64 = 1;
	// b 0x8313da90
	goto loc_8313DA90;
loc_8313DA60:
	// subf r11,r11,r28
	r11.s64 = r28.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r31,r11,27,31,31
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// b 0x8313da90
	goto loc_8313DA90;
loc_8313DA70:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8313da8c
	if (cr0.eq) goto loc_8313DA8C;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8313DA8C:
	// li r31,0
	r31.s64 = 0;
loc_8313DA90:
	// bl 0x83141328
	sub_83141328(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8313DAA0"))) PPC_WEAK_FUNC(sub_8313DAA0);
PPC_FUNC_IMPL(__imp__sub_8313DAA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, r11.u32);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// ble cr6,0x8313dac8
	if (!cr6.gt) goto loc_8313DAC8;
	// stw r4,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
loc_8313DAC8:
	// lwz r11,4(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// subf. r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, r11.u32);
	// bne 0x8313dae4
	if (!cr0.eq) goto loc_8313DAE4;
	// li r11,0
	r11.s64 = 0;
	// b 0x8313daf0
	goto loc_8313DAF0;
loc_8313DAE4:
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_8313DAF0:
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DAF8"))) PPC_WEAK_FUNC(sub_8313DAF8);
PPC_FUNC_IMPL(__imp__sub_8313DAF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lis r11,-31947
	r11.s64 = -2093678592;
	// lbz r9,1(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r8,2(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// addi r11,r11,25464
	r11.s64 = r11.s64 + 25464;
	// lbz r7,3(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// lbz r5,5(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// lbz r4,6(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// extsb r7,r6
	ctx.r7.s64 = ctx.r6.s8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// extsb r7,r5
	ctx.r7.s64 = ctx.r5.s8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// extsb r7,r4
	ctx.r7.s64 = ctx.r4.s8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DBA8"))) PPC_WEAK_FUNC(sub_8313DBA8);
PPC_FUNC_IMPL(__imp__sub_8313DBA8) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r29,r11,r31
	r29.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bge cr6,0x8313dc54
	if (!cr6.lt) goto loc_8313DC54;
loc_8313DBE0:
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b5880
	sub_831B5880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8313dc34
	if (cr0.eq) goto loc_8313DC34;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8313dc18
	if (cr6.eq) goto loc_8313DC18;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b5880
	sub_831B5880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8313dc54
	if (cr0.eq) goto loc_8313DC54;
loc_8313DC18:
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x8313daf8
	sub_8313DAF8(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// addi r31,r11,16
	r31.s64 = r11.s64 + 16;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// blt cr6,0x8313dbe0
	if (cr6.lt) goto loc_8313DBE0;
	// b 0x8313dc48
	goto loc_8313DC48;
loc_8313DC34:
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x8313daf8
	sub_8313DAF8(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
loc_8313DC48:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// blt cr6,0x8313dc58
	if (cr6.lt) goto loc_8313DC58;
loc_8313DC54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8313DC58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8313DC60"))) PPC_WEAK_FUNC(sub_8313DC60);
PPC_FUNC_IMPL(__imp__sub_8313DC60) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8313dc94
	if (cr6.eq) goto loc_8313DC94;
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
loc_8313DC94:
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

__attribute__((alias("__imp__sub_8313DCA8"))) PPC_WEAK_FUNC(sub_8313DCA8);
PPC_FUNC_IMPL(__imp__sub_8313DCA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lbz r11,2(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 2);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8313dcec
	if (!cr0.gt) goto loc_8313DCEC;
	// addi r11,r30,20
	r11.s64 = r30.s64 + 20;
loc_8313DCD0:
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 2);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x8313dcd0
	if (cr6.lt) goto loc_8313DCD0;
loc_8313DCEC:
	// lbz r11,2(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 2);
	// mr r27,r28
	r27.u64 = r28.u64;
	// stw r28,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r28.u32);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8313dd98
	if (!cr0.gt) goto loc_8313DD98;
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
loc_8313DD04:
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r26,0(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r25,r1,80
	r25.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,36(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,24(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,2(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 2);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x8313dd04
	if (cr6.lt) goto loc_8313DD04;
loc_8313DD98:
	// lbz r11,2(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 2);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8313de3c
	if (!cr0.gt) goto loc_8313DE3C;
	// addi r29,r30,12
	r29.s64 = r30.s64 + 12;
loc_8313DDA8:
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r27,0(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r26,r1,80
	r26.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,36(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,24(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,2(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 2);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x8313dda8
	if (cr6.lt) goto loc_8313DDA8;
loc_8313DE3C:
	// li r11,2
	r11.s64 = 2;
	// stb r11,1(r30)
	PPC_STORE_U8(r30.u32 + 1, r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_8313DE50"))) PPC_WEAK_FUNC(sub_8313DE50);
PPC_FUNC_IMPL(__imp__sub_8313DE50) {
	PPC_FUNC_PROLOGUE();
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DE58"))) PPC_WEAK_FUNC(sub_8313DE58);
PPC_FUNC_IMPL(__imp__sub_8313DE58) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8313de84
	if (!cr6.eq) goto loc_8313DE84;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,12124
	ctx.r3.s64 = r11.s64 + 12124;
	// bl 0x83139740
	sub_83139740(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8313df68
	goto loc_8313DF68;
loc_8313DE84:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// lis r11,-31931
	r11.s64 = -2092630016;
	// li r29,0
	r29.s64 = 0;
	// addi r10,r11,-7072
	ctx.r10.s64 = r11.s64 + -7072;
	// mr r31,r29
	r31.u64 = r29.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8313DEA4:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8313decc
	if (cr6.eq) goto loc_8313DECC;
	// addis r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 65536;
	// addi r11,r11,568
	r11.s64 = r11.s64 + 568;
	// addi r8,r8,-29184
	ctx.r8.s64 = ctx.r8.s64 + -29184;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x8313dea4
	if (cr6.lt) goto loc_8313DEA4;
	// b 0x8313ded8
	goto loc_8313DED8;
loc_8313DECC:
	// mulli r11,r9,568
	r11.s64 = ctx.r9.s64 * 568;
	// add. r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x8313dee8
	if (!cr0.eq) goto loc_8313DEE8;
loc_8313DED8:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,12076
	ctx.r3.s64 = r11.s64 + 12076;
	// bl 0x83139740
	sub_83139740(ctx, base);
	// b 0x8313df5c
	goto loc_8313DF5C;
loc_8313DEE8:
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r29,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r29.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add r11,r28,r3
	r11.u64 = r28.u64 + ctx.r3.u64;
	// li r8,10
	ctx.r8.s64 = 10;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,80
	ctx.r9.s64 = r31.s64 + 80;
	// divw r8,r7,r8
	ctx.r8.s32 = ctx.r7.s32 / ctx.r8.s32;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r8.u32);
loc_8313DF44:
	// stw r29,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r29.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// bne 0x8313df44
	if (!cr0.eq) goto loc_8313DF44;
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
loc_8313DF5C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8313DF68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8313DF70"))) PPC_WEAK_FUNC(sub_8313DF70);
PPC_FUNC_IMPL(__imp__sub_8313DF70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8313df9c
	if (!cr6.eq) goto loc_8313DF9C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,12216
	ctx.r3.s64 = r11.s64 + 12216;
	// bl 0x83139740
	sub_83139740(ctx, base);
loc_8313DF94:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8313e0b0
	goto loc_8313E0B0;
loc_8313DF9C:
	// lwz r11,36(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// bge cr6,0x8313df94
	if (!cr6.lt) goto loc_8313DF94;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8313dfc0
	if (!cr6.eq) goto loc_8313DFC0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,12172
	ctx.r3.s64 = r11.s64 + 12172;
	// bl 0x83139740
	sub_83139740(ctx, base);
	// b 0x8313df94
	goto loc_8313DF94;
loc_8313DFC0:
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// lwz r11,28(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// li r29,0
	r29.s64 = 0;
	// ori r8,r9,65535
	ctx.r8.u64 = ctx.r9.u64 | 65535;
	// addi r9,r11,15
	ctx.r9.s64 = r11.s64 + 15;
	// srawi r3,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 4;
	// addze r3,r3
	temp.s64 = ctx.r3.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r3.s64 = temp.s64;
	// rlwinm r3,r3,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r9,r3,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r3.s64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,56(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// beq cr6,0x8313e000
	if (cr6.eq) goto loc_8313E000;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
loc_8313E000:
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// addi r11,r11,56
	r11.s64 = r11.s64 + 56;
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r4.u32);
loc_8313E01C:
	// lbz r31,0(r9)
	r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313e01c
	if (!cr6.eq) goto loc_8313E01C;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rotlwi. r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// beq 0x8313e060
	if (cr0.eq) goto loc_8313E060;
loc_8313E044:
	// lbzx r31,r9,r4
	r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r30,8(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// stw r31,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r31.u32);
	// blt cr6,0x8313e044
	if (cr6.lt) goto loc_8313E044;
loc_8313E060:
	// stw r7,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r7.u32);
	// stw r6,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r6.u32);
	// stw r5,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r5.u32);
	// stw r29,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r29.u32);
	// stw r29,28(r11)
	PPC_STORE_U32(r11.u32 + 28, r29.u32);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r11,36(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// srawi r7,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 4;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// addze r8,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, r11.u32);
	// subf r11,r8,r9
	r11.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, r11.u32);
	// bne cr6,0x8313e0b0
	if (!cr6.eq) goto loc_8313E0B0;
	// li r11,2
	r11.s64 = 2;
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, r11.u8);
loc_8313E0B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8313E0B8"))) PPC_WEAK_FUNC(sub_8313E0B8);
PPC_FUNC_IMPL(__imp__sub_8313E0B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// lwz r11,-30888(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30888);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r4,-30880(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -30880);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r3,-30884(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -30884);
	// lwz r11,-30888(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30888);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8313E0E4"))) PPC_WEAK_FUNC(sub_8313E0E4);
PPC_FUNC_IMPL(__imp__sub_8313E0E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E0E8"))) PPC_WEAK_FUNC(sub_8313E0E8);
PPC_FUNC_IMPL(__imp__sub_8313E0E8) {
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
	// bl 0x8320ce88
	sub_8320CE88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313de58
	sub_8313DE58(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x831401a0
	sub_831401A0(ctx, base);
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

__attribute__((alias("__imp__sub_8313E128"))) PPC_WEAK_FUNC(sub_8313E128);
PPC_FUNC_IMPL(__imp__sub_8313E128) {
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
	// bl 0x8320ce88
	sub_8320CE88(ctx, base);
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// bl 0x831401a0
	sub_831401A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E168"))) PPC_WEAK_FUNC(sub_8313E168);
PPC_FUNC_IMPL(__imp__sub_8313E168) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x8320ce88
	sub_8320CE88(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313df70
	sub_8313DF70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x831401a0
	sub_831401A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8313E1B8"))) PPC_WEAK_FUNC(sub_8313E1B8);
PPC_FUNC_IMPL(__imp__sub_8313E1B8) {
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
	// bl 0x8320ce88
	sub_8320CE88(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313e1e8
	if (!cr6.eq) goto loc_8313E1E8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,12260
	ctx.r3.s64 = r11.s64 + 12260;
	// bl 0x83139740
	sub_83139740(ctx, base);
	// b 0x8313e200
	goto loc_8313E200;
loc_8313E1E8:
	// lbz r11,1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8313e200
	if (!cr6.eq) goto loc_8313E200;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
loc_8313E200:
	// bl 0x831401a0
	sub_831401A0(ctx, base);
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

__attribute__((alias("__imp__sub_8313E218"))) PPC_WEAK_FUNC(sub_8313E218);
PPC_FUNC_IMPL(__imp__sub_8313E218) {
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
	// bl 0x8320ce88
	sub_8320CE88(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313e250
	if (!cr6.eq) goto loc_8313E250;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,12304
	ctx.r3.s64 = r11.s64 + 12304;
	// bl 0x83139740
	sub_83139740(ctx, base);
	// b 0x8313e264
	goto loc_8313E264;
loc_8313E250:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8313e260
	if (cr6.eq) goto loc_8313E260;
	// li r11,0
	r11.s64 = 0;
loc_8313E260:
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
loc_8313E264:
	// bl 0x831401a0
	sub_831401A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E280"))) PPC_WEAK_FUNC(sub_8313E280);
PPC_FUNC_IMPL(__imp__sub_8313E280) {
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
	// bl 0x8320ce88
	sub_8320CE88(ctx, base);
	// lis r11,-31931
	r11.s64 = -2092630016;
	// addi r30,r11,-7072
	r30.s64 = r11.s64 + -7072;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_8313E2A4:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8313e2b8
	if (!cr6.eq) goto loc_8313E2B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831415d0
	sub_831415D0(ctx, base);
loc_8313E2B8:
	// addis r11,r30,1
	r11.s64 = r30.s64 + 65536;
	// addi r31,r31,568
	r31.s64 = r31.s64 + 568;
	// addi r11,r11,-29184
	r11.s64 = r11.s64 + -29184;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x8313e2a4
	if (cr6.lt) goto loc_8313E2A4;
	// bl 0x831401a0
	sub_831401A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E2E8"))) PPC_WEAK_FUNC(sub_8313E2E8);
PPC_FUNC_IMPL(__imp__sub_8313E2E8) {
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
	// bl 0x8320ce88
	sub_8320CE88(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313e31c
	if (!cr6.eq) goto loc_8313E31C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,12348
	ctx.r3.s64 = r11.s64 + 12348;
	// bl 0x83139740
	sub_83139740(ctx, base);
	// li r31,-1
	r31.s64 = -1;
	// b 0x8313e324
	goto loc_8313E324;
loc_8313E31C:
	// lbz r11,1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// extsb r31,r11
	r31.s64 = r11.s8;
loc_8313E324:
	// bl 0x831401a0
	sub_831401A0(ctx, base);
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

__attribute__((alias("__imp__sub_8313E340"))) PPC_WEAK_FUNC(sub_8313E340);
PPC_FUNC_IMPL(__imp__sub_8313E340) {
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
	// bl 0x8320ce88
	sub_8320CE88(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313e374
	if (!cr6.eq) goto loc_8313E374;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,12392
	ctx.r3.s64 = r11.s64 + 12392;
	// bl 0x83139740
	sub_83139740(ctx, base);
	// li r31,-1
	r31.s64 = -1;
	// b 0x8313e378
	goto loc_8313E378;
loc_8313E374:
	// lwz r31,36(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 36);
loc_8313E378:
	// bl 0x831401a0
	sub_831401A0(ctx, base);
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

__attribute__((alias("__imp__sub_8313E398"))) PPC_WEAK_FUNC(sub_8313E398);
PPC_FUNC_IMPL(__imp__sub_8313E398) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8320ce88
	sub_8320CE88(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8313e3d0
	if (!cr6.eq) goto loc_8313E3D0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,12480
	ctx.r3.s64 = r11.s64 + 12480;
	// bl 0x83139740
	sub_83139740(ctx, base);
	// b 0x8313e3fc
	goto loc_8313E3FC;
loc_8313E3D0:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x8313e3ec
	if (cr6.lt) goto loc_8313E3EC;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bgt cr6,0x8313e3ec
	if (cr6.gt) goto loc_8313E3EC;
	// stw r31,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r31.u32);
	// b 0x8313e3fc
	goto loc_8313E3FC;
loc_8313E3EC:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,12436
	ctx.r3.s64 = r11.s64 + 12436;
	// bl 0x83139740
	sub_83139740(ctx, base);
loc_8313E3FC:
	// bl 0x831401a0
	sub_831401A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E418"))) PPC_WEAK_FUNC(sub_8313E418);
PPC_FUNC_IMPL(__imp__sub_8313E418) {
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
	// bl 0x8320ce88
	sub_8320CE88(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313e450
	if (!cr6.eq) goto loc_8313E450;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,12524
	ctx.r3.s64 = r11.s64 + 12524;
	// bl 0x83139740
	sub_83139740(ctx, base);
	// b 0x8313e454
	goto loc_8313E454;
loc_8313E450:
	// stb r30,3(r31)
	PPC_STORE_U8(r31.u32 + 3, r30.u8);
loc_8313E454:
	// bl 0x831401a0
	sub_831401A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E470"))) PPC_WEAK_FUNC(sub_8313E470);
PPC_FUNC_IMPL(__imp__sub_8313E470) {
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
	// bl 0x8320ce88
	sub_8320CE88(ctx, base);
	// lis r7,32767
	ctx.r7.s64 = 2147418112;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313df70
	sub_8313DF70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x831401a0
	sub_831401A0(ctx, base);
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

__attribute__((alias("__imp__sub_8313E4D0"))) PPC_WEAK_FUNC(sub_8313E4D0);
PPC_FUNC_IMPL(__imp__sub_8313E4D0) {
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
	// bl 0x8320ce88
	sub_8320CE88(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313e504
	if (!cr6.eq) goto loc_8313E504;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,12568
	ctx.r3.s64 = r11.s64 + 12568;
	// bl 0x83139740
	sub_83139740(ctx, base);
	// b 0x8313e548
	goto loc_8313E548;
loc_8313E504:
	// lbz r11,1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8313e548
	if (cr6.eq) goto loc_8313E548;
	// li r30,0
	r30.s64 = 0;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r30,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r30.u8);
	// beq 0x8313e538
	if (cr0.eq) goto loc_8313E538;
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8313e538
	if (!cr6.eq) goto loc_8313E538;
	// bl 0x8313ba10
	sub_8313BA10(ctx, base);
	// stb r30,2(r31)
	PPC_STORE_U8(r31.u32 + 2, r30.u8);
loc_8313E538:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// bl 0x8313e1b8
	sub_8313E1B8(ctx, base);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
loc_8313E548:
	// bl 0x831401a0
	sub_831401A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E568"))) PPC_WEAK_FUNC(sub_8313E568);
PPC_FUNC_IMPL(__imp__sub_8313E568) {
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
	// bl 0x8320ce88
	sub_8320CE88(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8313e5a8
	if (cr6.eq) goto loc_8313E5A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313e4d0
	sub_8313E4D0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r5,568
	ctx.r5.s64 = 568;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_8313E5A8:
	// bl 0x831401a0
	sub_831401A0(ctx, base);
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

__attribute__((alias("__imp__sub_8313E5C0"))) PPC_WEAK_FUNC(sub_8313E5C0);
PPC_FUNC_IMPL(__imp__sub_8313E5C0) {
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
	// bl 0x8320ce88
	sub_8320CE88(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313e5f0
	if (!cr6.eq) goto loc_8313E5F0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,12612
	ctx.r3.s64 = r11.s64 + 12612;
	// bl 0x83139740
	sub_83139740(ctx, base);
	// b 0x8313e61c
	goto loc_8313E61C;
loc_8313E5F0:
	// lbz r11,1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8313e604
	if (cr6.eq) goto loc_8313E604;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313e4d0
	sub_8313E4D0(ctx, base);
loc_8313E604:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r11,2
	r11.s64 = 2;
	// bgt cr6,0x8313e618
	if (cr6.gt) goto loc_8313E618;
	// li r11,1
	r11.s64 = 1;
loc_8313E618:
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
loc_8313E61C:
	// bl 0x831401a0
	sub_831401A0(ctx, base);
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

__attribute__((alias("__imp__sub_8313E638"))) PPC_WEAK_FUNC(sub_8313E638);
PPC_FUNC_IMPL(__imp__sub_8313E638) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,-18480(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -18480);
	// extsw r11,r4
	r11.s64 = ctx.r4.s32;
	// fsqrts f31,f0
	f31.f64 = double(float(sqrt(f0.f64)));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(f0.f64));
	// lfs f0,12224(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12224);
	f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 / ctx.f13.f64));
	// bl 0x831b1868
	sub_831B1868(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// fsubs f0,f31,f0
	f0.f64 = double(float(f31.f64 - f0.f64));
	// fsubs f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 - ctx.f13.f64));
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(f0.f64 + ctx.f13.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
	// lfs f13,-25728(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25728);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(f0.f64 * f0.f64));
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lfs f0,12656(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12656);
	f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lhz r11,94(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// sth r11,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r11.u16);
	// lhz r11,86(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_8313E728"))) PPC_WEAK_FUNC(sub_8313E728);
PPC_FUNC_IMPL(__imp__sub_8313E728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addic. r10,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r10.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// ble 0x8313e74c
	if (!cr0.gt) goto loc_8313E74C;
loc_8313E734:
	// lhzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r9,32768
	cr6.compare<uint32_t>(ctx.r9.u32, 32768, xer);
	// beq cr6,0x8313e75c
	if (cr6.eq) goto loc_8313E75C;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8313e734
	if (cr6.lt) goto loc_8313E734;
loc_8313E74C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// li r11,0
	r11.s64 = 0;
loc_8313E754:
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, r11.u16);
	// blr 
	return;
loc_8313E75C:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8313e74c
	if (!cr6.lt) goto loc_8313E74C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8313e754
	goto loc_8313E754;
}

__attribute__((alias("__imp__sub_8313E778"))) PPC_WEAK_FUNC(sub_8313E778);
PPC_FUNC_IMPL(__imp__sub_8313E778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,16
	cr6.compare<int32_t>(ctx.r4.s32, 16, xer);
	// bge cr6,0x8313e788
	if (!cr6.lt) goto loc_8313E788;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8313E788:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r4,1(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// rotlwi r11,r11,8
	r11.u64 = __builtin_rotateleft32(r11.u32, 8);
	// or r11,r11,r4
	r11.u64 = r11.u64 | ctx.r4.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32768
	cr6.compare<uint32_t>(r11.u32, 32768, xer);
	// beq cr6,0x8313e7ac
	if (cr6.eq) goto loc_8313E7AC;
	// li r3,-2
	ctx.r3.s64 = -2;
	// blr 
	return;
loc_8313E7AC:
	// lbz r11,2(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r4,3(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// rotlwi r11,r11,8
	r11.u64 = __builtin_rotateleft32(r11.u32, 8);
	// or r11,r11,r4
	r11.u64 = r11.u64 | ctx.r4.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, r11.u16);
	// lbz r11,4(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r11.u8);
	// lbz r11,5(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r11.u8);
	// lbz r11,6(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r11.u8);
	// lbz r11,7(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// lbz r11,8(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lbz r9,9(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// rotlwi r11,r11,8
	r11.u64 = __builtin_rotateleft32(r11.u32, 8);
	// lbz r6,10(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// lbz r5,11(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r6
	r11.u64 = r11.u64 | ctx.r6.u64;
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r5
	r11.u64 = r11.u64 | ctx.r5.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lbz r11,12(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// lbz r10,13(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// rotlwi r11,r11,8
	r11.u64 = __builtin_rotateleft32(r11.u32, 8);
	// lbz r9,14(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14);
	// lbz r6,15(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r6
	r11.u64 = r11.u64 | ctx.r6.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lbz r11,0(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8313e854
	if (!cr0.eq) goto loc_8313E854;
	// li r11,0
	r11.s64 = 0;
	// b 0x8313e868
	goto loc_8313E868;
loc_8313E854:
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// divw r11,r10,r11
	r11.s32 = ctx.r10.s32 / r11.s32;
loc_8313E868:
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E878"))) PPC_WEAK_FUNC(sub_8313E878);
PPC_FUNC_IMPL(__imp__sub_8313E878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,18
	cr6.compare<int32_t>(ctx.r4.s32, 18, xer);
	// bge cr6,0x8313e888
	if (!cr6.lt) goto loc_8313E888;
loc_8313E880:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8313E888:
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,32768
	cr6.compare<uint32_t>(r11.u32, 32768, xer);
	// beq cr6,0x8313e89c
	if (cr6.eq) goto loc_8313E89C;
	// li r3,-2
	ctx.r3.s64 = -2;
	// blr 
	return;
loc_8313E89C:
	// lha r11,2(r3)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 2));
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(r11.s32, 14, xer);
	// blt cr6,0x8313e880
	if (cr6.lt) goto loc_8313E880;
	// lhz r11,16(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E8B8"))) PPC_WEAK_FUNC(sub_8313E8B8);
PPC_FUNC_IMPL(__imp__sub_8313E8B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,20
	cr6.compare<int32_t>(ctx.r4.s32, 20, xer);
	// bge cr6,0x8313e8cc
	if (!cr6.lt) goto loc_8313E8CC;
loc_8313E8C4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8313E8CC:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,32768
	cr6.compare<uint32_t>(ctx.r10.u32, 32768, xer);
	// beq cr6,0x8313e8e0
	if (cr6.eq) goto loc_8313E8E0;
	// li r3,-2
	ctx.r3.s64 = -2;
	// blr 
	return;
loc_8313E8E0:
	// lha r10,2(r11)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 2));
	// cmpwi cr6,r10,16
	cr6.compare<int32_t>(ctx.r10.s32, 16, xer);
	// blt cr6,0x8313e8c4
	if (cr6.lt) goto loc_8313E8C4;
	// lbz r10,18(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 18);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// lbz r11,19(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 19);
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E908"))) PPC_WEAK_FUNC(sub_8313E908);
PPC_FUNC_IMPL(__imp__sub_8313E908) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,20
	cr6.compare<int32_t>(ctx.r4.s32, 20, xer);
	// blt cr6,0x8313e96c
	if (cr6.lt) goto loc_8313E96C;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,32768
	cr6.compare<uint32_t>(r11.u32, 32768, xer);
	// bne cr6,0x8313e96c
	if (!cr6.eq) goto loc_8313E96C;
	// lha r10,2(r3)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 2));
	// cmpwi cr6,r10,16
	cr6.compare<int32_t>(ctx.r10.s32, 16, xer);
	// blt cr6,0x8313e96c
	if (cr6.lt) goto loc_8313E96C;
	// lbz r11,18(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 18);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x8313e974
	if (cr6.lt) goto loc_8313E974;
	// cmpwi cr6,r4,32
	cr6.compare<int32_t>(ctx.r4.s32, 32, xer);
	// blt cr6,0x8313e96c
	if (cr6.lt) goto loc_8313E96C;
	// cmpwi cr6,r10,28
	cr6.compare<int32_t>(ctx.r10.s32, 28, xer);
	// blt cr6,0x8313e96c
	if (cr6.lt) goto loc_8313E96C;
	// lhz r11,24(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, r11.u16);
	// lhz r11,26(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 26);
	// sth r11,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, r11.u16);
	// lhz r11,28(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 28);
	// sth r11,2(r5)
	PPC_STORE_U16(ctx.r5.u32 + 2, r11.u16);
	// lhz r11,30(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 30);
	// sth r11,2(r6)
	PPC_STORE_U16(ctx.r6.u32 + 2, r11.u16);
	// b 0x8313e988
	goto loc_8313E988;
loc_8313E96C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8313E974:
	// li r11,0
	r11.s64 = 0;
	// sth r11,2(r6)
	PPC_STORE_U16(ctx.r6.u32 + 2, r11.u16);
	// sth r11,2(r5)
	PPC_STORE_U16(ctx.r5.u32 + 2, r11.u16);
	// sth r11,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, r11.u16);
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, r11.u16);
loc_8313E988:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E990"))) PPC_WEAK_FUNC(sub_8313E990);
PPC_FUNC_IMPL(__imp__sub_8313E990) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,20
	cr6.compare<int32_t>(ctx.r4.s32, 20, xer);
	// sth r3,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r3.u16);
	// blt cr6,0x8313e9e4
	if (cr6.lt) goto loc_8313E9E4;
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r3,32768
	cr6.compare<uint32_t>(ctx.r3.u32, 32768, xer);
	// bne cr6,0x8313ea24
	if (!cr6.eq) goto loc_8313EA24;
	// lha r30,2(r11)
	r30.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 2));
	// cmpwi cr6,r30,16
	cr6.compare<int32_t>(r30.s32, 16, xer);
	// blt cr6,0x8313e9e4
	if (cr6.lt) goto loc_8313E9E4;
	// lbz r3,18(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 18);
	// clrlwi r31,r3,24
	r31.u64 = ctx.r3.u32 & 0xFF;
	// li r3,48
	ctx.r3.s64 = 48;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// bne cr6,0x8313e9dc
	if (!cr6.eq) goto loc_8313E9DC;
	// li r3,60
	ctx.r3.s64 = 60;
loc_8313E9DC:
	// cmpw cr6,r4,r3
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, xer);
	// bge cr6,0x8313e9ec
	if (!cr6.lt) goto loc_8313E9EC;
loc_8313E9E4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8313ea70
	goto loc_8313EA70;
loc_8313E9EC:
	// addi r4,r3,-4
	ctx.r4.s64 = ctx.r3.s64 + -4;
	// cmpw cr6,r30,r4
	cr6.compare<int32_t>(r30.s32, ctx.r4.s32, xer);
	// blt cr6,0x8313e9e4
	if (cr6.lt) goto loc_8313E9E4;
	// li r4,20
	ctx.r4.s64 = 20;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// bne cr6,0x8313ea08
	if (!cr6.eq) goto loc_8313EA08;
	// li r4,32
	ctx.r4.s64 = 32;
loc_8313EA08:
	// lhax r3,r4,r11
	ctx.r3.s64 = int16_t(PPC_LOAD_U16(ctx.r4.u32 + r11.u32));
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// lhzx r5,r4,r11
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + r11.u32);
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// sth r5,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r5.u16);
	// beq cr6,0x8313ea2c
	if (cr6.eq) goto loc_8313EA2C;
loc_8313EA24:
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x8313ea70
	goto loc_8313EA70;
loc_8313EA2C:
	// addi r6,r4,4
	ctx.r6.s64 = ctx.r4.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// lhzx r5,r6,r11
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + r11.u32);
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// sth r5,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r5.u16);
	// addi r7,r6,4
	ctx.r7.s64 = ctx.r6.s64 + 4;
	// lwzx r5,r6,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + r11.u32);
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// lwzx r6,r7,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + r11.u64;
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_8313EA70:
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EA80"))) PPC_WEAK_FUNC(sub_8313EA80);
PPC_FUNC_IMPL(__imp__sub_8313EA80) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// cmpwi cr6,r4,20
	cr6.compare<int32_t>(ctx.r4.s32, 20, xer);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// blt cr6,0x8313eae4
	if (cr6.lt) goto loc_8313EAE4;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,32768
	cr6.compare<uint32_t>(r11.u32, 32768, xer);
	// bne cr6,0x8313eb60
	if (!cr6.eq) goto loc_8313EB60;
	// lha r9,2(r31)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 2));
	// cmpwi cr6,r9,16
	cr6.compare<int32_t>(ctx.r9.s32, 16, xer);
	// blt cr6,0x8313eae4
	if (cr6.lt) goto loc_8313EAE4;
	// lbz r11,18(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 18);
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// li r11,60
	r11.s64 = 60;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bne cr6,0x8313eadc
	if (!cr6.eq) goto loc_8313EADC;
	// li r11,72
	r11.s64 = 72;
loc_8313EADC:
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// bge cr6,0x8313eaec
	if (!cr6.lt) goto loc_8313EAEC;
loc_8313EAE4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8313ebac
	goto loc_8313EBAC;
loc_8313EAEC:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// blt cr6,0x8313eae4
	if (cr6.lt) goto loc_8313EAE4;
	// li r11,20
	r11.s64 = 20;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bne cr6,0x8313eb08
	if (!cr6.eq) goto loc_8313EB08;
	// li r11,32
	r11.s64 = 32;
loc_8313EB08:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + r31.u32);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8313eb20
	if (cr0.eq) goto loc_8313EB20;
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
loc_8313EB20:
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// lbzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + r31.u32);
	// lis r8,16713
	ctx.r8.s64 = 1095303168;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// ori r8,r8,20038
	ctx.r8.u64 = ctx.r8.u64 | 20038;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r5,2(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// lbz r10,3(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x8313eb68
	if (cr6.eq) goto loc_8313EB68;
loc_8313EB60:
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x8313ebac
	goto loc_8313EBAC;
loc_8313EB68:
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// add r4,r30,r31
	ctx.r4.u64 = r30.u64 + r31.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + r31.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// sth r10,0(r27)
	PPC_STORE_U16(r27.u32 + 0, ctx.r10.u16);
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// lhzx r11,r11,r31
	r11.u64 = PPC_LOAD_U16(r11.u32 + r31.u32);
	// sth r11,0(r29)
	PPC_STORE_U16(r29.u32 + 0, r11.u16);
	// lhz r11,2(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// sth r11,2(r29)
	PPC_STORE_U16(r29.u32 + 2, r11.u16);
loc_8313EBAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8313EBB8"))) PPC_WEAK_FUNC(sub_8313EBB8);
PPC_FUNC_IMPL(__imp__sub_8313EBB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,16
	cr6.compare<int32_t>(ctx.r4.s32, 16, xer);
	// bge cr6,0x8313ebc8
	if (!cr6.lt) goto loc_8313EBC8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8313EBC8:
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,32769
	cr6.compare<uint32_t>(r11.u32, 32769, xer);
	// beq cr6,0x8313ebdc
	if (cr6.eq) goto loc_8313EBDC;
	// li r3,-2
	ctx.r3.s64 = -2;
	// blr 
	return;
loc_8313EBDC:
	// lhz r11,2(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EBF0"))) PPC_WEAK_FUNC(sub_8313EBF0);
PPC_FUNC_IMPL(__imp__sub_8313EBF0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r29,20(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8313a298
	sub_8313A298(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8313a2a0
	sub_8313A2A0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8313a2b8
	sub_8313A2B8(ctx, base);
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x8313ec44
	if (cr6.eq) goto loc_8313EC44;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x8313ec60
	if (!cr6.eq) goto loc_8313EC60;
loc_8313EC44:
	// lbz r11,108(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8313ec60
	if (!cr6.eq) goto loc_8313EC60;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8313a250
	sub_8313A250(ctx, base);
	// b 0x8313ed5c
	goto loc_8313ED5C;
loc_8313EC60:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x8313ec9c
	if (!cr6.lt) goto loc_8313EC9C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,12668
	ctx.r3.s64 = r11.s64 + 12668;
	// bl 0x831392e0
	sub_831392E0(ctx, base);
loc_8313EC9C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83154850
	sub_83154850(ctx, base);
	// subf r4,r28,r26
	ctx.r4.s64 = r26.s64 - r28.s64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r4,144(r31)
	PPC_STORE_U32(r31.u32 + 144, ctx.r4.u32);
	// bl 0x8313a250
	sub_8313A250(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8313a258
	sub_8313A258(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e5f3a8
	sub_82E5F3A8(ctx, base);
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x8313ed48
	if (!cr6.eq) goto loc_8313ED48;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8313ED48:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8313a3a8
	sub_8313A3A8(ctx, base);
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
loc_8313ED5C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8313ED68"))) PPC_WEAK_FUNC(sub_8313ED68);
PPC_FUNC_IMPL(__imp__sub_8313ED68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x8313edf8
	if (cr0.eq) goto loc_8313EDF8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8313edf8
	if (cr6.eq) goto loc_8313EDF8;
	// bl 0x8313a2a0
	sub_8313A2A0(ctx, base);
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// beq cr6,0x8313edd4
	if (cr6.eq) goto loc_8313EDD4;
	// lbz r11,108(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8313ede8
	if (!cr6.eq) goto loc_8313EDE8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x83159448
	sub_83159448(ctx, base);
	// lwz r11,192(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// blt cr6,0x8313edd4
	if (cr6.lt) goto loc_8313EDD4;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8313a250
	sub_8313A250(ctx, base);
loc_8313EDD4:
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// bl 0x8313b0b0
	sub_8313B0B0(ctx, base);
	// b 0x8313edf8
	goto loc_8313EDF8;
loc_8313EDE8:
	// srawi r11,r3,11
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FF) != 0);
	r11.s64 = ctx.r3.s32 >> 11;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addze r4,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r4.s64 = temp.s64;
	// bl 0x8313afd8
	sub_8313AFD8(ctx, base);
loc_8313EDF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EE10"))) PPC_WEAK_FUNC(sub_8313EE10);
PPC_FUNC_IMPL(__imp__sub_8313EE10) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8313a270
	sub_8313A270(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lha r5,66(r31)
	ctx.r5.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 66));
	// beq cr6,0x8313ee50
	if (cr6.eq) goto loc_8313EE50;
	// bl 0x831361b0
	sub_831361B0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lha r5,68(r31)
	ctx.r5.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 68));
loc_8313EE50:
	// bl 0x831361b0
	sub_831361B0(ctx, base);
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

__attribute__((alias("__imp__sub_8313EE68"))) PPC_WEAK_FUNC(sub_8313EE68);
PPC_FUNC_IMPL(__imp__sub_8313EE68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lbz r11,152(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 152);
	// lwz r30,4(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r31,20(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8313f164
	if (cr6.eq) goto loc_8313F164;
	// li r11,0
	r11.s64 = 0;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, r11.u16);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r11.u16);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8313a260
	sub_8313A260(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8313ef58
	if (!cr0.eq) goto loc_8313EF58;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8313ebb8
	sub_8313EBB8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8313ef58
	if (cr0.eq) goto loc_8313EF58;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x831366e0
	sub_831366E0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8313EF50:
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// b 0x8313f164
	goto loc_8313F164;
loc_8313EF58:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lha r29,80(r1)
	r29.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 80));
	// bl 0x8313a260
	sub_8313A260(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// subf r4,r29,r11
	ctx.r4.s64 = r11.s64 - r29.s64;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// bne cr6,0x8313efa0
	if (!cr6.eq) goto loc_8313EFA0;
	// bl 0x83141f00
	sub_83141F00(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x8313efac
	if (cr0.eq) goto loc_8313EFAC;
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x83141f00
	sub_83141F00(ctx, base);
	// b 0x8313efc4
	goto loc_8313EFC4;
loc_8313EFA0:
	// bl 0x8313e728
	sub_8313E728(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x8313efb4
	if (!cr0.eq) goto loc_8313EFB4;
loc_8313EFAC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8313efc4
	goto loc_8313EFC4;
loc_8313EFB4:
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8313e728
	sub_8313E728(ctx, base);
loc_8313EFC4:
	// lha r11,80(r1)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 80));
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// lha r27,82(r1)
	r27.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 82));
	// add r29,r11,r29
	r29.u64 = r11.u64 + r29.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// beq cr6,0x8313f028
	if (cr6.eq) goto loc_8313F028;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x8313f078
	if (cr6.eq) goto loc_8313F078;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x831366e0
	sub_831366E0(ctx, base);
	// b 0x8313ef50
	goto loc_8313EF50;
loc_8313F028:
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8313daa0
	sub_8313DAA0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// b 0x8313f0c0
	goto loc_8313F0C0;
loc_8313F078:
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8313daa0
	sub_8313DAA0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_8313F0C0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// lwz r10,164(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 164);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,164(r26)
	PPC_STORE_U32(r26.u32 + 164, r11.u32);
	// bl 0x83139be8
	sub_83139BE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83139ba0
	sub_83139BA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8313ab48
	sub_8313AB48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8320cf88
	sub_8320CF88(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x8313f12c
	if (cr6.eq) goto loc_8313F12C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x831366e0
	sub_831366E0(ctx, base);
	// b 0x8313f164
	goto loc_8313F164;
loc_8313F12C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,72(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 72);
	// bl 0x83139b88
	sub_83139B88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8313a288
	sub_8313A288(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8313a250
	sub_8313A250(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8313a258
	sub_8313A258(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83154850
	sub_83154850(ctx, base);
loc_8313F164:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8313F170"))) PPC_WEAK_FUNC(sub_8313F170);
PPC_FUNC_IMPL(__imp__sub_8313F170) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r28,4(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831370c0
	sub_831370C0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831370f8
	sub_831370F8(ctx, base);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,8192
	cr6.compare<int32_t>(r11.s32, 8192, xer);
	// blt cr6,0x8313f1b0
	if (cr6.lt) goto loc_8313F1B0;
	// li r11,8192
	r11.s64 = 8192;
loc_8313F1B0:
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bge cr6,0x8313f1d8
	if (!cr6.lt) goto loc_8313F1D8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8313a280
	sub_8313A280(ctx, base);
	// cmpw cr6,r27,r3
	cr6.compare<int32_t>(r27.s32, ctx.r3.s32, xer);
	// ble cr6,0x8313f1d8
	if (!cr6.gt) goto loc_8313F1D8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8320cf88
	sub_8320CF88(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x8313f220
	if (!cr6.eq) goto loc_8313F220;
loc_8313F1D8:
	// lbz r11,112(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8313f218
	if (!cr6.eq) goto loc_8313F218;
	// lbz r11,114(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 114);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8313f210
	if (!cr6.eq) goto loc_8313F210;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83137050
	sub_83137050(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// stw r10,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r10.u32);
	// lwz r11,32412(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32412);
	// stw r11,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r11.u32);
loc_8313F210:
	// li r11,3
	r11.s64 = 3;
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
loc_8313F218:
	// li r11,1
	r11.s64 = 1;
	// stb r11,113(r31)
	PPC_STORE_U8(r31.u32 + 113, r11.u8);
loc_8313F220:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8320cf88
	sub_8320CF88(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x8313f2b0
	if (!cr6.eq) goto loc_8313F2B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83136138
	sub_83136138(ctx, base);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mullw r11,r11,r3
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r3.s32);
	// rlwinm r28,r11,1,0,30
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble 0x8313f2b0
	if (!cr0.gt) goto loc_8313F2B0;
	// addi r29,r31,24
	r29.s64 = r31.s64 + 24;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8313F254:
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x8313f254
	if (!cr0.eq) goto loc_8313F254;
loc_8313F2B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8313F2B8"))) PPC_WEAK_FUNC(sub_8313F2B8);
PPC_FUNC_IMPL(__imp__sub_8313F2B8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,108(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8313f300
	if (!cr6.eq) goto loc_8313F300;
	// lwz r11,192(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 192);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8313f300
	if (!cr6.gt) goto loc_8313F300;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x83159448
	sub_83159448(ctx, base);
	// lwz r11,192(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 192);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// blt cr6,0x8313f300
	if (cr6.lt) goto loc_8313F300;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x8313a250
	sub_8313A250(ctx, base);
loc_8313F300:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x8320cf88
	sub_8320CF88(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x8313f390
	if (!cr6.eq) goto loc_8313F390;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x8313a270
	sub_8313A270(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-31932
	r11.s64 = -2092695552;
	// stw r30,8132(r11)
	PPC_STORE_U32(r11.u32 + 8132, r30.u32);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x831374b8
	sub_831374B8(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x8313f374
	if (!cr6.gt) goto loc_8313F374;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// lis r27,-31932
	r27.s64 = -2092695552;
loc_8313F340:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,8128(r27)
	PPC_STORE_U32(r27.u32 + 8128, ctx.r3.u32);
	// cmpwi cr6,r3,64
	cr6.compare<int32_t>(ctx.r3.s32, 64, xer);
	// bge cr6,0x8313f374
	if (!cr6.lt) goto loc_8313F374;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r28,r30
	cr6.compare<int32_t>(r28.s32, r30.s32, xer);
	// blt cr6,0x8313f340
	if (cr6.lt) goto loc_8313F340;
loc_8313F374:
	// cmpw cr6,r28,r30
	cr6.compare<int32_t>(r28.s32, r30.s32, xer);
	// bne cr6,0x8313f390
	if (!cr6.eq) goto loc_8313F390;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x83137030
	sub_83137030(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// stb r11,1(r29)
	PPC_STORE_U8(r29.u32 + 1, r11.u8);
loc_8313F390:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8313F398"))) PPC_WEAK_FUNC(sub_8313F398);
PPC_FUNC_IMPL(__imp__sub_8313F398) {
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x831370c0
	sub_831370C0(ctx, base);
	// lis r11,-31932
	r11.s64 = -2092695552;
	// stw r3,8136(r11)
	PPC_STORE_U32(r11.u32 + 8136, ctx.r3.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x83137108
	sub_83137108(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x8313f3d4
	if (cr6.eq) goto loc_8313F3D4;
	// li r11,5
	r11.s64 = 5;
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
loc_8313F3D4:
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

__attribute__((alias("__imp__sub_8313F3E8"))) PPC_WEAK_FUNC(sub_8313F3E8);
PPC_FUNC_IMPL(__imp__sub_8313F3E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// li r29,-1
	r29.s64 = -1;
	// li r30,6
	r30.s64 = 6;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8313f420
	if (cr0.eq) goto loc_8313F420;
	// bl 0x8313af98
	sub_8313AF98(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x8313f420
	if (!cr6.eq) goto loc_8313F420;
	// sth r29,96(r31)
	PPC_STORE_U16(r31.u32 + 96, r29.u16);
	// stb r30,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r30.u8);
loc_8313F420:
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8313f440
	if (cr0.eq) goto loc_8313F440;
	// bl 0x8313e2e8
	sub_8313E2E8(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x8313f440
	if (!cr6.eq) goto loc_8313F440;
	// sth r29,96(r31)
	PPC_STORE_U16(r31.u32 + 96, r29.u16);
	// stb r30,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r30.u8);
loc_8313F440:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8313F448"))) PPC_WEAK_FUNC(sub_8313F448);
PPC_FUNC_IMPL(__imp__sub_8313F448) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8313f49c
	if (cr6.eq) goto loc_8313F49C;
	// bl 0x83135fb8
	sub_83135FB8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8313f49c
	if (cr0.eq) goto loc_8313F49C;
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bge cr6,0x8313f490
	if (!cr6.lt) goto loc_8313F490;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8313af98
	sub_8313AF98(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
loc_8313F490:
	// bne cr6,0x8313f49c
	if (!cr6.eq) goto loc_8313F49C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x83139b98
	sub_83139B98(ctx, base);
loc_8313F49C:
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

__attribute__((alias("__imp__sub_8313F4B0"))) PPC_WEAK_FUNC(sub_8313F4B0);
PPC_FUNC_IMPL(__imp__sub_8313F4B0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313a298
	sub_8313A298(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313a2a0
	sub_8313A2A0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313a2b8
	sub_8313A2B8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313a3a0
	sub_8313A3A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83154850
	sub_83154850(ctx, base);
	// subf r4,r29,r27
	ctx.r4.s64 = r27.s64 - r29.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,144(r30)
	PPC_STORE_U32(r30.u32 + 144, ctx.r4.u32);
	// bl 0x8313a250
	sub_8313A250(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313a258
	sub_8313A258(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e5f3a8
	sub_82E5F3A8(ctx, base);
	// lis r11,-31980
	r11.s64 = -2095841280;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-5136
	ctx.r4.s64 = r11.s64 + -5136;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313a240
	sub_8313A240(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8313F540"))) PPC_WEAK_FUNC(sub_8313F540);
PPC_FUNC_IMPL(__imp__sub_8313F540) {
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
	// li r27,0
	r27.s64 = 0;
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8313f574
	if (cr0.eq) goto loc_8313F574;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8313f5c8
	if (!cr6.eq) goto loc_8313F5C8;
loc_8313F574:
	// lbz r11,168(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 168);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8313f5c8
	if (!cr6.eq) goto loc_8313F5C8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8313af98
	sub_8313AF98(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x8313f8dc
	if (cr6.eq) goto loc_8313F8DC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8313f5ac
	if (cr0.eq) goto loc_8313F5AC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8313F5AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,188(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// lwz r6,184(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// lwz r5,180(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// lwz r4,176(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// bl 0x83136c00
	sub_83136C00(ctx, base);
	// stb r27,168(r31)
	PPC_STORE_U8(r31.u32 + 168, r27.u8);
loc_8313F5C8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8320cf88
	sub_8320CF88(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x8313f8cc
	if (!cr6.eq) goto loc_8313F8CC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8313a270
	sub_8313A270(ctx, base);
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// extsb r4,r11
	ctx.r4.s64 = r11.s8;
	// cmpw cr6,r3,r4
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, xer);
	// ble cr6,0x8313f618
	if (!cr6.gt) goto loc_8313F618;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x831394c0
	sub_831394C0(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,12712
	ctx.r3.s64 = r11.s64 + 12712;
	// bl 0x83139368
	sub_83139368(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83135f80
	sub_83135F80(ctx, base);
	// b 0x8313f8dc
	goto loc_8313F8DC;
loc_8313F618:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8313a268
	sub_8313A268(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8313a290
	sub_8313A290(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8313a260
	sub_8313A260(ctx, base);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r3,10
	cr6.compare<int32_t>(ctx.r3.s32, 10, xer);
	// divw r11,r29,r11
	r11.s32 = r29.s32 / r11.s32;
	// bne cr6,0x8313f65c
	if (!cr6.eq) goto loc_8313F65C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// bl 0x8313a280
	sub_8313A280(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8313f680
	goto loc_8313F680;
loc_8313F65C:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// mulli r11,r11,3
	r11.s64 = r11.s64 * 3;
	// bgt cr6,0x8313f670
	if (cr6.gt) goto loc_8313F670;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
loc_8313F670:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// bl 0x8313a280
	sub_8313A280(ctx, base);
	// rlwinm r11,r3,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
loc_8313F680:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// divw r10,r10,r11
	ctx.r10.s32 = ctx.r10.s32 / r11.s32;
	// mullw r4,r10,r11
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// stw r4,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r4.u32);
	// bl 0x83139b88
	sub_83139B88(ctx, base);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x8313f75c
	if (!cr6.gt) goto loc_8313F75C;
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x8313f6b8
	if (!cr6.eq) goto loc_8313F6B8;
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// b 0x8313f718
	goto loc_8313F718;
loc_8313F6B8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8313a2c0
	sub_8313A2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// srawi r10,r11,11
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FF) != 0);
	ctx.r10.s64 = r11.s32 >> 11;
	// addi r9,r11,2047
	ctx.r9.s64 = r11.s64 + 2047;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0xFFFFF800;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subfic r11,r11,2048
	xer.ca = r11.u32 <= 2048;
	r11.s64 = 2048 - r11.s64;
	// srawi r10,r11,11
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FF) != 0);
	ctx.r10.s64 = r11.s32 >> 11;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r9,r9,11
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 11;
	// rlwinm r10,r10,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0xFFFFF800;
	// addze r4,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r4.s64 = temp.s64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stw r4,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r4.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x8313b0b0
	sub_8313B0B0(ctx, base);
	// lis r11,-31980
	r11.s64 = -2095841280;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,-4760
	ctx.r4.s64 = r11.s64 + -4760;
	// bl 0x8313b080
	sub_8313B080(ctx, base);
loc_8313F718:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8313a2b8
	sub_8313A2B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8313a298
	sub_8313A298(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r4,144(r31)
	PPC_STORE_U32(r31.u32 + 144, ctx.r4.u32);
	// bl 0x8313a250
	sub_8313A250(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8313a258
	sub_8313A258(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83154850
	sub_83154850(ctx, base);
	// lis r11,-31980
	r11.s64 = -2095841280;
	// addi r4,r11,-2896
	ctx.r4.s64 = r11.s64 + -2896;
	// b 0x8313f7a8
	goto loc_8313F7A8;
loc_8313F75C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8313f774
	if (cr0.eq) goto loc_8313F774;
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// bl 0x8313b0b0
	sub_8313B0B0(ctx, base);
loc_8313F774:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8313a288
	sub_8313A288(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8313a250
	sub_8313A250(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8313a258
	sub_8313A258(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83154850
	sub_83154850(ctx, base);
	// lis r11,-31980
	r11.s64 = -2095841280;
	// addi r4,r11,-4504
	ctx.r4.s64 = r11.s64 + -4504;
loc_8313F7A8:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8313a240
	sub_8313A240(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8313a268
	sub_8313A268(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8313a270
	sub_8313A270(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8313a288
	sub_8313A288(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8313a278
	sub_8313A278(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x831371d0
	sub_831371D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x831371b8
	sub_831371B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lha r4,64(r31)
	ctx.r4.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 64));
	// bl 0x83136250
	sub_83136250(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83136618
	sub_83136618(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8313f844
	if (!cr6.eq) goto loc_8313F844;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x8313f84c
	if (cr6.eq) goto loc_8313F84C;
loc_8313F844:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831365c8
	sub_831365C8(ctx, base);
loc_8313F84C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313ee10
	sub_8313EE10(ctx, base);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8313f868
	if (cr0.eq) goto loc_8313F868;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8313de50
	sub_8313DE50(ctx, base);
loc_8313F868:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8313a260
	sub_8313A260(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x8313f88c
	if (!cr6.eq) goto loc_8313F88C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8313a398
	sub_8313A398(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82e71e58
	sub_82E71E58(ctx, base);
loc_8313F88C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x83137030
	sub_83137030(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r10,-30876(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -30876);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8313f8c4
	if (cr6.eq) goto loc_8313F8C4;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8313F8C4:
	// li r11,2
	r11.s64 = 2;
	// b 0x8313f8d8
	goto loc_8313F8D8;
loc_8313F8CC:
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x8313f8dc
	if (!cr6.eq) goto loc_8313F8DC;
	// li r11,6
	r11.s64 = 6;
loc_8313F8D8:
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
loc_8313F8DC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8313F8E8"))) PPC_WEAK_FUNC(sub_8313F8E8);
PPC_FUNC_IMPL(__imp__sub_8313F8E8) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313f918
	if (!cr6.eq) goto loc_8313F918;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,12776
	ctx.r3.s64 = r11.s64 + 12776;
	// bl 0x831392e0
	sub_831392E0(ctx, base);
	// b 0x8313f97c
	goto loc_8313F97C;
loc_8313F918:
	// lbz r11,1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x8313f934
	if (!cr6.eq) goto loc_8313F934;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313f2b8
	sub_8313F2B8(ctx, base);
	// b 0x8313f96c
	goto loc_8313F96C;
loc_8313F934:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8313f948
	if (!cr6.eq) goto loc_8313F948;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313f540
	sub_8313F540(ctx, base);
	// b 0x8313f96c
	goto loc_8313F96C;
loc_8313F948:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8313f95c
	if (!cr6.eq) goto loc_8313F95C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313f170
	sub_8313F170(ctx, base);
	// b 0x8313f96c
	goto loc_8313F96C;
loc_8313F95C:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x8313f96c
	if (!cr6.eq) goto loc_8313F96C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313f398
	sub_8313F398(ctx, base);
loc_8313F96C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313f448
	sub_8313F448(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313f3e8
	sub_8313F3E8(ctx, base);
loc_8313F97C:
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
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

__attribute__((alias("__imp__sub_8313F998"))) PPC_WEAK_FUNC(sub_8313F998);
PPC_FUNC_IMPL(__imp__sub_8313F998) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// lis r10,-31931
	ctx.r10.s64 = -2092630016;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// addi r8,r10,-9280
	ctx.r8.s64 = ctx.r10.s64 + -9280;
	// lwz r11,-9024(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9024);
	// srawi r31,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r31.s64 = r11.s32 >> 4;
	// addze r10,r31
	temp.s64 = r31.s64 + xer.ca;
	xer.ca = temp.u32 < r31.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm r11,r10,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// addi r8,r8,-8992
	ctx.r8.s64 = ctx.r8.s64 + -8992;
	// bne cr6,0x8313f9e8
	if (!cr6.eq) goto loc_8313F9E8;
	// rlwinm r31,r3,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r30,r31,r8
	r30.u64 = PPC_LOAD_U16(r31.u32 + ctx.r8.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// sthx r30,r31,r8
	PPC_STORE_U16(r31.u32 + ctx.r8.u32, r30.u16);
loc_8313F9E8:
	// rlwinm r31,r3,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r3,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r3.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r4,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r4.u8);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r6.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r7.u32);
	// lhzx r8,r31,r8
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + ctx.r8.u32);
	// stw r10,-9024(r9)
	PPC_STORE_U32(ctx.r9.u32 + -9024, ctx.r10.u32);
	// sth r8,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r8.u16);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313FA20"))) PPC_WEAK_FUNC(sub_8313FA20);
PPC_FUNC_IMPL(__imp__sub_8313FA20) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8313fa84
	if (cr6.eq) goto loc_8313FA84;
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8313fa84
	if (!cr6.eq) goto loc_8313FA84;
	// lis r11,-31931
	r11.s64 = -2092630016;
	// lwz r11,-9020(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9020);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8313fa68
	if (!cr6.eq) goto loc_8313FA68;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
loc_8313FA68:
	// li r11,0
	r11.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8313FA84:
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

__attribute__((alias("__imp__sub_8313FA98"))) PPC_WEAK_FUNC(sub_8313FA98);
PPC_FUNC_IMPL(__imp__sub_8313FA98) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x8313f998
	sub_8313F998(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313fae0
	if (!cr6.eq) goto loc_8313FAE0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,12904
	ctx.r3.s64 = r11.s64 + 12904;
	// bl 0x831392e0
	sub_831392E0(ctx, base);
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x8313fb74
	goto loc_8313FB74;
loc_8313FAE0:
	// lbz r11,1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8313fb70
	if (cr6.eq) goto loc_8313FB70;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x8313fb04
	if (!cr6.eq) goto loc_8313FB04;
	// li r11,1
	r11.s64 = 1;
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// b 0x8313fb70
	goto loc_8313FB70;
loc_8313FB04:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8313fb24
	if (!cr0.eq) goto loc_8313FB24;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,12860
	ctx.r3.s64 = r11.s64 + 12860;
	// bl 0x831392e0
	sub_831392E0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8313fb74
	goto loc_8313FB74;
loc_8313FB24:
	// bl 0x8313ba10
	sub_8313BA10(ctx, base);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8313b030
	sub_8313B030(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// bl 0x8313fa20
	sub_8313FA20(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x8313f998
	sub_8313F998(ctx, base);
loc_8313FB70:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
loc_8313FB74:
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

__attribute__((alias("__imp__sub_8313FB88"))) PPC_WEAK_FUNC(sub_8313FB88);
PPC_FUNC_IMPL(__imp__sub_8313FB88) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8313af98
	sub_8313AF98(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x8313fbc0
	if (!cr6.eq) goto loc_8313FBC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313fa20
	sub_8313FA20(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// b 0x8313fcac
	goto loc_8313FCAC;
loc_8313FBC0:
	// lbz r11,1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x8313fc64
	if (!cr6.eq) goto loc_8313FC64;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8313fc18
	if (!cr6.eq) goto loc_8313FC18;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8313ace8
	sub_8313ACE8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8313fc18
	if (cr0.eq) goto loc_8313FC18;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8313b7b0
	sub_8313B7B0(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bgt cr6,0x8313fc18
	if (cr6.gt) goto loc_8313FC18;
	// li r11,3
	r11.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// bl 0x8313fa20
	sub_8313FA20(ctx, base);
	// b 0x8313fcb0
	goto loc_8313FCB0;
loc_8313FC18:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8313af98
	sub_8313AF98(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r30,16(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// bl 0x8313b030
	sub_8313B030(ctx, base);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// subf r11,r30,r3
	r11.s64 = ctx.r3.s64 - r30.s64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// beq cr6,0x8313fc54
	if (cr6.eq) goto loc_8313FC54;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bne cr6,0x8313fc64
	if (!cr6.eq) goto loc_8313FC64;
loc_8313FC54:
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x8313fa20
	sub_8313FA20(ctx, base);
loc_8313FC64:
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8313fcb0
	if (!cr6.eq) goto loc_8313FCB0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8313af98
	sub_8313AF98(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8313fcb0
	if (!cr6.eq) goto loc_8313FCB0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8313b030
	sub_8313B030(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// bl 0x8313fa20
	sub_8313FA20(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	r11.s64 = 1;
	// stb r10,3(r31)
	PPC_STORE_U8(r31.u32 + 3, ctx.r10.u8);
loc_8313FCAC:
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
loc_8313FCB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313FCC8"))) PPC_WEAK_FUNC(sub_8313FCC8);
PPC_FUNC_IMPL(__imp__sub_8313FCC8) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,12820
	r30.s64 = r11.s64 + 12820;
loc_8313FCE8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313fcfc
	if (!cr6.eq) goto loc_8313FCFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831392e0
	sub_831392E0(ctx, base);
	// b 0x8313fd0c
	goto loc_8313FD0C;
loc_8313FCFC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8313ace8
	sub_8313ACE8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8313fd28
	if (cr6.eq) goto loc_8313FD28;
loc_8313FD0C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8313ad28
	sub_8313AD28(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8313fd28
	if (cr0.eq) goto loc_8313FD28;
	// bl 0x83139610
	sub_83139610(ctx, base);
	// bl 0x83136408
	sub_83136408(ctx, base);
	// b 0x8313fce8
	goto loc_8313FCE8;
loc_8313FD28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313FD40"))) PPC_WEAK_FUNC(sub_8313FD40);
PPC_FUNC_IMPL(__imp__sub_8313FD40) {
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
	// cmplwi cr6,r3,255
	cr6.compare<uint32_t>(ctx.r3.u32, 255, xer);
	// bgt cr6,0x8313fd94
	if (cr6.gt) goto loc_8313FD94;
	// lis r11,-31931
	r11.s64 = -2092630016;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-8928
	r11.s64 = r11.s64 + -8928;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8313fd94
	if (cr0.eq) goto loc_8313FD94;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x8313fd88
	if (cr6.lt) goto loc_8313FD88;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// bge cr6,0x8313fd88
	if (!cr6.lt) goto loc_8313FD88;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8313fda4
	goto loc_8313FDA4;
loc_8313FD88:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,12976
	ctx.r3.s64 = r11.s64 + 12976;
	// b 0x8313fd9c
	goto loc_8313FD9C;
loc_8313FD94:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,12940
	ctx.r3.s64 = r11.s64 + 12940;
loc_8313FD9C:
	// bl 0x831392e0
	sub_831392E0(ctx, base);
	// li r3,-3
	ctx.r3.s64 = -3;
loc_8313FDA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313FDB8"))) PPC_WEAK_FUNC(sub_8313FDB8);
PPC_FUNC_IMPL(__imp__sub_8313FDB8) {
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
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8313f998
	sub_8313F998(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8313fe5c
	if (cr6.eq) goto loc_8313FE5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313fcc8
	sub_8313FCC8(ctx, base);
	// lbz r11,1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x8313fe0c
	if (!cr6.eq) goto loc_8313FE0C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313fa98
	sub_8313FA98(ctx, base);
loc_8313FE0C:
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x8313fe34
	if (cr0.eq) goto loc_8313FE34;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x8313bad0
	sub_8313BAD0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8313bb40
	sub_8313BB40(ctx, base);
loc_8313FE34:
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8313f998
	sub_8313F998(ctx, base);
loc_8313FE5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313FE78"))) PPC_WEAK_FUNC(sub_8313FE78);
PPC_FUNC_IMPL(__imp__sub_8313FE78) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// lis r11,-31931
	r11.s64 = -2092630016;
	// addi r30,r11,-7904
	r30.s64 = r11.s64 + -7904;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_8313FEA0:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8313feb4
	if (!cr6.eq) goto loc_8313FEB4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313fb88
	sub_8313FB88(ctx, base);
loc_8313FEB4:
	// addi r31,r31,52
	r31.s64 = r31.s64 + 52;
	// addi r11,r30,832
	r11.s64 = r30.s64 + 832;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x8313fea0
	if (cr6.lt) goto loc_8313FEA0;
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313FEE8"))) PPC_WEAK_FUNC(sub_8313FEE8);
PPC_FUNC_IMPL(__imp__sub_8313FEE8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// bl 0x8313fd40
	sub_8313FD40(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// bge 0x8313ff44
	if (!cr0.lt) goto loc_8313FF44;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8313ff2c
	if (cr6.eq) goto loc_8313FF2C;
	// stb r10,0(r25)
	PPC_STORE_U8(r25.u32 + 0, ctx.r10.u8);
loc_8313FF2C:
	// li r11,-1
	r11.s64 = -1;
	// stw r10,0(r24)
	PPC_STORE_U32(r24.u32 + 0, ctx.r10.u32);
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// b 0x83140080
	goto loc_83140080;
loc_8313FF44:
	// lis r11,-31931
	r11.s64 = -2092630016;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-8928
	r11.s64 = r11.s64 + -8928;
	// lwzx r29,r10,r11
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lbz r11,15(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 15);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x83140008
	if (!cr6.eq) goto loc_83140008;
	// addi r10,r29,280
	ctx.r10.s64 = r29.s64 + 280;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// srawi r9,r11,11
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FF) != 0);
	ctx.r9.s64 = r11.s32 >> 11;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r11,11
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FF) != 0);
	ctx.r8.s64 = r11.s32 >> 11;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r8,r8,11,0,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 11) & 0xFFFFF800;
	// subf. r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8313ff88
	if (!cr0.gt) goto loc_8313FF88;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8313FF88:
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x8313ffd4
	if (!cr6.gt) goto loc_8313FFD4;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_8313FFA0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// srawi r7,r9,11
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 11;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r6,r9,11
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 11;
	// addze r6,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r6,r6,11,0,20
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 11) & 0xFFFFF800;
	// subf. r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x8313ffc4
	if (!cr0.gt) goto loc_8313FFC4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_8313FFC4:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r30,r7,r30
	r30.u64 = ctx.r7.u64 + r30.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x8313ffa0
	if (!cr0.eq) goto loc_8313FFA0;
loc_8313FFD4:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r8
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// srawi r9,r11,11
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FF) != 0);
	ctx.r9.s64 = r11.s32 >> 11;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r7,r11,11
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FF) != 0);
	ctx.r7.s64 = r11.s32 >> 11;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r7,r7,11,0,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 11) & 0xFFFFF800;
	// subf. r11,r7,r11
	r11.s64 = r11.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8313fffc
	if (!cr0.gt) goto loc_8313FFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8313FFFC:
	// stw r9,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// lwzx r11,r10,r8
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// b 0x8314004c
	goto loc_8314004C;
loc_83140008:
	// addi r11,r29,280
	r11.s64 = r29.s64 + 280;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// lhz r30,0(r11)
	r30.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// ble cr6,0x83140038
	if (!cr6.gt) goto loc_83140038;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_83140024:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// add r30,r8,r30
	r30.u64 = ctx.r8.u64 + r30.u64;
	// bne 0x83140024
	if (!cr0.eq) goto loc_83140024;
loc_83140038:
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + ctx.r9.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// lhzx r11,r11,r9
	r11.u64 = PPC_LOAD_U16(r11.u32 + ctx.r9.u32);
	// rotlwi r11,r11,11
	r11.u64 = __builtin_rotateleft32(r11.u32, 11);
loc_8314004C:
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8314006c
	if (cr6.eq) goto loc_8314006C;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r29,16
	ctx.r5.s64 = r29.s64 + 16;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x83138248
	sub_83138248(ctx, base);
loc_8314006C:
	// lwz r11,272(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 272);
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
	// lwz r11,276(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 276);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
loc_83140080:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_83140090"))) PPC_WEAK_FUNC(sub_83140090);
PPC_FUNC_IMPL(__imp__sub_83140090) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// lis r11,-31931
	r11.s64 = -2092630016;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-8928
	r11.s64 = r11.s64 + -8928;
	// lwzx r31,r10,r11
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
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

__attribute__((alias("__imp__sub_831400D8"))) PPC_WEAK_FUNC(sub_831400D8);
PPC_FUNC_IMPL(__imp__sub_831400D8) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// lis r11,-31931
	r11.s64 = -2092630016;
	// addi r30,r11,-7904
	r30.s64 = r11.s64 + -7904;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_831400FC:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x83140110
	if (!cr6.eq) goto loc_83140110;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313fdb8
	sub_8313FDB8(ctx, base);
loc_83140110:
	// addi r31,r31,52
	r31.s64 = r31.s64 + 52;
	// addi r11,r30,832
	r11.s64 = r30.s64 + 832;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x831400fc
	if (cr6.lt) goto loc_831400FC;
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140140"))) PPC_WEAK_FUNC(sub_83140140);
PPC_FUNC_IMPL(__imp__sub_83140140) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313fee8
	sub_8313FEE8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_831401A0"))) PPC_WEAK_FUNC(sub_831401A0);
PPC_FUNC_IMPL(__imp__sub_831401A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8312f6f0
	sub_8312F6F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831401A8"))) PPC_WEAK_FUNC(sub_831401A8);
PPC_FUNC_IMPL(__imp__sub_831401A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x831b0b2c
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r10,-30784(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -30784);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x831401c8
	if (!cr6.eq) goto loc_831401C8;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,-30784(r11)
	PPC_STORE_U32(r11.u32 + -30784, ctx.r10.u32);
loc_831401C8:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// sth r30,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, r30.u16);
	// sth r30,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, r30.u16);
	// sth r30,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, r30.u16);
	// bne cr6,0x831401e8
	if (!cr6.eq) goto loc_831401E8;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x831402ec
	if (!cr6.gt) goto loc_831402EC;
loc_831401E8:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r31,18973
	r31.s64 = 18973;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// addi r11,r11,13064
	r11.s64 = r11.s64 + 13064;
	// ble cr6,0x83140240
	if (!cr6.gt) goto loc_83140240;
loc_83140200:
	// lbzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// addi r8,r11,256
	ctx.r8.s64 = r11.s64 + 256;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// lhax r9,r9,r8
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32));
	// mullw r9,r9,r31
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r31.s32);
	// srawi r8,r9,10
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 10;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r8,r8,10,0,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 10) & 0xFFFFFC00;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r31,r9,r11
	r31.u64 = PPC_LOAD_U16(ctx.r9.u32 + r11.u32);
	// blt cr6,0x83140200
	if (cr6.lt) goto loc_83140200;
loc_83140240:
	// li r8,21503
	ctx.r8.s64 = 21503;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x83140290
	if (!cr6.gt) goto loc_83140290;
loc_83140250:
	// lbzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// addi r29,r11,256
	r29.s64 = r11.s64 + 256;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// lhax r9,r9,r29
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + r29.u32));
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// srawi r8,r9,10
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 10;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r8,r8,10,0,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 10) & 0xFFFFFC00;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + r11.u32);
	// blt cr6,0x83140250
	if (cr6.lt) goto loc_83140250;
loc_83140290:
	// li r9,24001
	ctx.r9.s64 = 24001;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x831402e0
	if (!cr6.gt) goto loc_831402E0;
loc_831402A0:
	// lbzx r30,r10,r3
	r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// addi r29,r11,256
	r29.s64 = r11.s64 + 256;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// extsb r30,r30
	r30.s64 = r30.s8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r30,r30,1,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// lhax r30,r30,r29
	r30.s64 = int16_t(PPC_LOAD_U16(r30.u32 + r29.u32));
	// mullw r9,r30,r9
	ctx.r9.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// srawi r30,r9,10
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FF) != 0);
	r30.s64 = ctx.r9.s32 >> 10;
	// addze r30,r30
	temp.s64 = r30.s64 + xer.ca;
	xer.ca = temp.u32 < r30.u32;
	r30.s64 = temp.s64;
	// rlwinm r30,r30,10,0,21
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 10) & 0xFFFFFC00;
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - r30.s64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + r11.u32);
	// blt cr6,0x831402a0
	if (cr6.lt) goto loc_831402A0;
loc_831402E0:
	// sth r31,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, r31.u16);
	// sth r8,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r8.u16);
	// sth r9,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r9.u16);
loc_831402EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831402F8"))) PPC_WEAK_FUNC(sub_831402F8);
PPC_FUNC_IMPL(__imp__sub_831402F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r3,-30756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -30756);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140308"))) PPC_WEAK_FUNC(sub_83140308);
PPC_FUNC_IMPL(__imp__sub_83140308) {
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
	// bl 0x83141f88
	sub_83141F88(ctx, base);
	// lis r11,-31932
	r11.s64 = -2092695552;
	// li r5,7552
	ctx.r5.s64 = 7552;
	// addi r3,r11,576
	ctx.r3.s64 = r11.s64 + 576;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,-30784(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -30784);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,-30784(r11)
	PPC_STORE_U32(r11.u32 + -30784, ctx.r10.u32);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// li r11,0
	r11.s64 = 0;
	// stw r11,-30756(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30756, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140358"))) PPC_WEAK_FUNC(sub_83140358);
PPC_FUNC_IMPL(__imp__sub_83140358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,140(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r10,140(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,136(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140388"))) PPC_WEAK_FUNC(sub_83140388);
PPC_FUNC_IMPL(__imp__sub_83140388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,140(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lwz r11,136(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// stw r10,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r10.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831403A8"))) PPC_WEAK_FUNC(sub_831403A8);
PPC_FUNC_IMPL(__imp__sub_831403A8) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831403ec
	if (cr6.eq) goto loc_831403EC;
	// li r30,0
	r30.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// bl 0x831420e0
	sub_831420E0(ctx, base);
	// li r5,236
	ctx.r5.s64 = 236;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// sth r30,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r30.u16);
loc_831403EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140408"))) PPC_WEAK_FUNC(sub_83140408);
PPC_FUNC_IMPL(__imp__sub_83140408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x831b0b2c
	// lis r10,0
	ctx.r10.s64 = 0;
	// lhz r7,154(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 154);
	// li r11,1
	r11.s64 = 1;
	// lwz r6,60(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// ori r5,r10,48000
	ctx.r5.u64 = ctx.r10.u64 | 48000;
	// lwz r4,64(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lwz r31,68(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r8,2
	ctx.r8.s64 = 2;
	// ori r29,r10,65535
	r29.u64 = ctx.r10.u64 | 65535;
	// sth r7,152(r3)
	PPC_STORE_U16(ctx.r3.u32 + 152, ctx.r7.u16);
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, r11.u16);
	// li r11,0
	r11.s64 = 0;
	// li r9,127
	ctx.r9.s64 = 127;
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// li r10,1024
	ctx.r10.s64 = 1024;
	// stw r6,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r6.u32);
	// li r30,16
	r30.s64 = 16;
	// stb r8,14(r3)
	PPC_STORE_U8(ctx.r3.u32 + 14, ctx.r8.u8);
	// stw r29,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r29.u32);
	// stw r8,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r8.u32);
	// stb r9,15(r3)
	PPC_STORE_U8(ctx.r3.u32 + 15, ctx.r9.u8);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stb r30,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, r30.u8);
	// stw r9,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r9.u32);
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// stw r4,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r4.u32);
	// stw r31,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, r31.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, r11.u32);
	// sth r11,28(r3)
	PPC_STORE_U16(ctx.r3.u32 + 28, r11.u16);
	// sth r11,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, r11.u16);
	// sth r11,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, r11.u16);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, r11.u32);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831404B0"))) PPC_WEAK_FUNC(sub_831404B0);
PPC_FUNC_IMPL(__imp__sub_831404B0) {
	PPC_FUNC_PROLOGUE();
	// lha r3,152(r3)
	ctx.r3.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 152));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831404B8"))) PPC_WEAK_FUNC(sub_831404B8);
PPC_FUNC_IMPL(__imp__sub_831404B8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831404e0
	if (!cr6.eq) goto loc_831404E0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,15112
	ctx.r3.s64 = r11.s64 + 15112;
	// bl 0x831392e0
	sub_831392E0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831404e8
	goto loc_831404E8;
loc_831404E0:
	// lbz r11,14(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
loc_831404E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831404F8"))) PPC_WEAK_FUNC(sub_831404F8);
PPC_FUNC_IMPL(__imp__sub_831404F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,13(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140508"))) PPC_WEAK_FUNC(sub_83140508);
PPC_FUNC_IMPL(__imp__sub_83140508) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lha r11,152(r3)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 152));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83140558
	if (cr0.eq) goto loc_83140558;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83140540
	if (!cr6.eq) goto loc_83140540;
	// lha r11,156(r3)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 156));
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83140530
	if (!cr6.eq) goto loc_83140530;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_83140530:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83140558
	if (!cr6.eq) goto loc_83140558;
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_83140540:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83140558
	if (!cr6.eq) goto loc_83140558;
	// lhz r11,156(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 156);
	// li r3,4
	ctx.r3.s64 = 4;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_83140558:
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140560"))) PPC_WEAK_FUNC(sub_83140560);
PPC_FUNC_IMPL(__imp__sub_83140560) {
	PPC_FUNC_PROLOGUE();
	// lha r3,36(r3)
	ctx.r3.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 36));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140568"))) PPC_WEAK_FUNC(sub_83140568);
PPC_FUNC_IMPL(__imp__sub_83140568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140578"))) PPC_WEAK_FUNC(sub_83140578);
PPC_FUNC_IMPL(__imp__sub_83140578) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,192(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140580"))) PPC_WEAK_FUNC(sub_83140580);
PPC_FUNC_IMPL(__imp__sub_83140580) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,212(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 212);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140588"))) PPC_WEAK_FUNC(sub_83140588);
PPC_FUNC_IMPL(__imp__sub_83140588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,107
	r11.s64 = ctx.r4.s64 + 107;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U16(r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140598"))) PPC_WEAK_FUNC(sub_83140598);
PPC_FUNC_IMPL(__imp__sub_83140598) {
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
	// addi r5,r31,176
	ctx.r5.s64 = r31.s64 + 176;
	// addi r4,r31,172
	ctx.r4.s64 = r31.s64 + 172;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x83142088
	sub_83142088(ctx, base);
	// addi r6,r31,170
	ctx.r6.s64 = r31.s64 + 170;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r5,r31,168
	ctx.r5.s64 = r31.s64 + 168;
	// addi r4,r31,166
	ctx.r4.s64 = r31.s64 + 166;
	// bl 0x831420c0
	sub_831420C0(ctx, base);
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

__attribute__((alias("__imp__sub_831405E8"))) PPC_WEAK_FUNC(sub_831405E8);
PPC_FUNC_IMPL(__imp__sub_831405E8) {
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
	// addi r5,r31,176
	ctx.r5.s64 = r31.s64 + 176;
	// addi r4,r31,172
	ctx.r4.s64 = r31.s64 + 172;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x83142060
	sub_83142060(ctx, base);
	// lhz r6,170(r31)
	ctx.r6.u64 = PPC_LOAD_U16(r31.u32 + 170);
	// lhz r5,168(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 168);
	// lhz r4,166(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 166);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x831420b0
	sub_831420B0(ctx, base);
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

__attribute__((alias("__imp__sub_83140638"))) PPC_WEAK_FUNC(sub_83140638);
PPC_FUNC_IMPL(__imp__sub_83140638) {
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
	// clrlwi r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x831406fc
	if (cr6.lt) goto loc_831406FC;
	// clrlwi r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x83140698
	if (cr6.lt) goto loc_83140698;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r5,r11,15152
	ctx.r5.s64 = r11.s64 + 15152;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831382d8
	sub_831382D8(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831401a8
	sub_831401A8(ctx, base);
	// b 0x8314070c
	goto loc_8314070C;
loc_83140698:
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// blt cr6,0x831406fc
	if (cr6.lt) goto loc_831406FC;
	// lhz r11,160(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831406e4
	if (!cr6.eq) goto loc_831406E4;
	// lhz r11,162(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 162);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831406e4
	if (!cr6.eq) goto loc_831406E4;
	// lhz r11,164(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 164);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831406e4
	if (!cr6.eq) goto loc_831406E4;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r11,r11,-30760
	r11.s64 = r11.s64 + -30760;
	// lhz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// sth r10,160(r3)
	PPC_STORE_U16(ctx.r3.u32 + 160, ctx.r10.u16);
	// lhz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + -4);
	// sth r10,162(r3)
	PPC_STORE_U16(ctx.r3.u32 + 162, ctx.r10.u16);
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// sth r11,164(r3)
	PPC_STORE_U16(ctx.r3.u32 + 164, r11.u16);
loc_831406E4:
	// lhz r11,160(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 160);
	// sth r11,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r11.u16);
	// lhz r11,162(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 162);
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// lhz r11,164(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 164);
	// b 0x83140708
	goto loc_83140708;
loc_831406FC:
	// li r11,0
	r11.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r11.u16);
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
loc_83140708:
	// sth r11,0(r29)
	PPC_STORE_U16(r29.u32 + 0, r11.u16);
loc_8314070C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83140718"))) PPC_WEAK_FUNC(sub_83140718);
PPC_FUNC_IMPL(__imp__sub_83140718) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lhz r11,152(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 152);
	// stw r4,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83140734
	if (!cr6.eq) goto loc_83140734;
	// lbz r11,15(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15);
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// b 0x83140750
	goto loc_83140750;
loc_83140734:
	// lbz r10,13(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// lbz r9,14(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// srawi r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
loc_83140750:
	// li r11,0
	r11.s64 = 0;
	// divw r10,r5,r10
	ctx.r10.s32 = ctx.r5.s32 / ctx.r10.s32;
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, r11.u32);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, r11.u32);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, r11.u32);
	// stw r11,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, r11.u32);
	// stw r11,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140778"))) PPC_WEAK_FUNC(sub_83140778);
PPC_FUNC_IMPL(__imp__sub_83140778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r11,1
	r11.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140790"))) PPC_WEAK_FUNC(sub_83140790);
PPC_FUNC_IMPL(__imp__sub_83140790) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x83142190
	sub_83142190(ctx, base);
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

__attribute__((alias("__imp__sub_831407C8"))) PPC_WEAK_FUNC(sub_831407C8);
PPC_FUNC_IMPL(__imp__sub_831407C8) {
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x831407fc
	if (!cr6.eq) goto loc_831407FC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x831421a8
	sub_831421A8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_831407FC:
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

__attribute__((alias("__imp__sub_83140810"))) PPC_WEAK_FUNC(sub_83140810);
PPC_FUNC_IMPL(__imp__sub_83140810) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140818"))) PPC_WEAK_FUNC(sub_83140818);
PPC_FUNC_IMPL(__imp__sub_83140818) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,104(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// lwz r31,8(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// lwz r4,72(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// rlwinm r11,r9,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x83142100
	sub_83142100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83142170
	sub_83142170(ctx, base);
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

__attribute__((alias("__imp__sub_83140870"))) PPC_WEAK_FUNC(sub_83140870);
PPC_FUNC_IMPL(__imp__sub_83140870) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// rlwinm r5,r4,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// lwz r31,8(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r9,92(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,72(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r6
	ctx.r7.u64 = r11.u64 + ctx.r6.u64;
	// bl 0x83142138
	sub_83142138(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83142170
	sub_83142170(ctx, base);
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

__attribute__((alias("__imp__sub_831408D0"))) PPC_WEAK_FUNC(sub_831408D0);
PPC_FUNC_IMPL(__imp__sub_831408D0) {
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
	// lwz r11,88(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r6,112(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r9,104(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// add r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 + r11.u64;
	// lwz r8,96(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r29,80(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r4,76(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lwz r5,108(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// divw r30,r10,r11
	r30.s32 = ctx.r10.s32 / r11.s32;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + r11.u64;
	// mullw r30,r30,r11
	r30.s64 = int64_t(r30.s32) * int64_t(r11.s32);
	// divw r31,r10,r11
	r31.s32 = ctx.r10.s32 / r11.s32;
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - r30.s64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// divw r7,r7,r11
	ctx.r7.s32 = ctx.r7.s32 / r11.s32;
	// divw r4,r4,r29
	ctx.r4.s32 = ctx.r4.s32 / r29.s32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r31,r7
	cr6.compare<int32_t>(r31.s32, ctx.r7.s32, xer);
	// bge cr6,0x8314094c
	if (!cr6.lt) goto loc_8314094C;
	// mullw r30,r7,r11
	r30.s64 = int64_t(ctx.r7.s32) * int64_t(r11.s32);
	// subf r30,r10,r30
	r30.s64 = r30.s64 - ctx.r10.s64;
	// add r9,r30,r9
	ctx.r9.u64 = r30.u64 + ctx.r9.u64;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bge cr6,0x8314094c
	if (!cr6.lt) goto loc_8314094C;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_8314094C:
	// cmpw cr6,r6,r5
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, xer);
	// bge cr6,0x83140958
	if (!cr6.lt) goto loc_83140958;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
loc_83140958:
	// divw r11,r5,r11
	r11.s32 = ctx.r5.s32 / r11.s32;
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// ble cr6,0x83140968
	if (!cr6.gt) goto loc_83140968;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_83140968:
	// cmpw cr6,r4,r31
	cr6.compare<int32_t>(ctx.r4.s32, r31.s32, xer);
	// ble cr6,0x83140974
	if (!cr6.gt) goto loc_83140974;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_83140974:
	// cmpw cr6,r4,r7
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, xer);
	// ble cr6,0x83140980
	if (!cr6.gt) goto loc_83140980;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
loc_83140980:
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// bne cr6,0x83140990
	if (!cr6.eq) goto loc_83140990;
	// bl 0x83140870
	sub_83140870(ctx, base);
	// b 0x83140994
	goto loc_83140994;
loc_83140990:
	// bl 0x83140818
	sub_83140818(ctx, base);
loc_83140994:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831409A0"))) PPC_WEAK_FUNC(sub_831409A0);
PPC_FUNC_IMPL(__imp__sub_831409A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// ble cr6,0x831409c8
	if (!cr6.gt) goto loc_831409C8;
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - r11.s64;
loc_831409B8:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// sthx r9,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + r11.u32, ctx.r9.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// bdnz 0x831409b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831409B8;
loc_831409C8:
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// add r11,r4,r5
	r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
loc_831409EC:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// sthx r9,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + r11.u32, ctx.r9.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// bdnz 0x831409ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831409EC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140A00"))) PPC_WEAK_FUNC(sub_83140A00);
PPC_FUNC_IMPL(__imp__sub_83140A00) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r30,72
	r31.s64 = r30.s64 + 72;
	// lwz r28,64(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// lwz r23,68(r30)
	r23.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r29,16(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r26,12(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r27,40(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r25,32(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r24,20(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8315cf60
	sub_8315CF60(ctx, base);
	// add r10,r27,r29
	ctx.r10.u64 = r27.u64 + r29.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// mullw r10,r3,r29
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(r29.s32);
	// divw r8,r9,r29
	ctx.r8.s32 = ctx.r9.s32 / r29.s32;
	// divw r10,r10,r11
	ctx.r10.s32 = ctx.r10.s32 / r11.s32;
	// mullw r11,r8,r11
	r11.s64 = int64_t(ctx.r8.s32) * int64_t(r11.s32);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// bgt cr6,0x83140a74
	if (cr6.gt) goto loc_83140A74;
	// divw r11,r9,r29
	r11.s32 = ctx.r9.s32 / r29.s32;
	// mullw r11,r11,r29
	r11.s64 = int64_t(r11.s32) * int64_t(r29.s32);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
loc_83140A74:
	// mullw r9,r3,r26
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(r26.s32);
	// stw r10,144(r30)
	PPC_STORE_U32(r30.u32 + 144, ctx.r10.u32);
	// add r11,r10,r25
	r11.u64 = ctx.r10.u64 + r25.u64;
	// stw r9,148(r30)
	PPC_STORE_U32(r30.u32 + 148, ctx.r9.u32);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// blt cr6,0x83140ad8
	if (cr6.lt) goto loc_83140AD8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r6,r28,r11
	ctx.r6.s64 = r11.s64 - r28.s64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x83140ab0
	if (!cr6.eq) goto loc_83140AB0;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x831409a0
	sub_831409A0(ctx, base);
	// b 0x83140ad8
	goto loc_83140AD8;
loc_83140AB0:
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// rlwinm r11,r28,1,0,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// add r11,r11,r24
	r11.u64 = r11.u64 + r24.u64;
	// ble cr6,0x83140ad8
	if (!cr6.gt) goto loc_83140AD8;
	// subf r10,r11,r24
	ctx.r10.s64 = r24.s64 - r11.s64;
loc_83140AC8:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// sthx r9,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + r11.u32, ctx.r9.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// bdnz 0x83140ac8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83140AC8;
loc_83140AD8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_83140AE0"))) PPC_WEAK_FUNC(sub_83140AE0);
PPC_FUNC_IMPL(__imp__sub_83140AE0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r31,72
	r30.s64 = r31.s64 + 72;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83140b44
	if (!cr6.eq) goto loc_83140B44;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83140b44
	if (!cr0.eq) goto loc_83140B44;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// addi r6,r30,40
	ctx.r6.s64 = r30.s64 + 40;
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// addi r5,r30,36
	ctx.r5.s64 = r30.s64 + 36;
	// addi r4,r30,32
	ctx.r4.s64 = r30.s64 + 32;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831408d0
	sub_831408D0(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_83140B44:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83140b98
	if (!cr6.eq) goto loc_83140B98;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x831421c0
	sub_831421C0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x83140b98
	if (!cr6.eq) goto loc_83140B98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83140a00
	sub_83140A00(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x831421a8
	sub_831421A8(ctx, base);
	// lwz r5,144(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,3
	r11.s64 = 3;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_83140B98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140BB0"))) PPC_WEAK_FUNC(sub_83140BB0);
PPC_FUNC_IMPL(__imp__sub_83140BB0) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,576
	r11.s64 = r11.s64 + 576;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
loc_83140BE0:
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83140c00
	if (cr6.eq) goto loc_83140C00;
	// addi r9,r9,236
	ctx.r9.s64 = ctx.r9.s64 + 236;
	// addi r8,r11,7552
	ctx.r8.s64 = r11.s64 + 7552;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x83140be0
	if (cr6.lt) goto loc_83140BE0;
loc_83140C00:
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// bne cr6,0x83140c10
	if (!cr6.eq) goto loc_83140C10;
loc_83140C08:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83140ca0
	goto loc_83140CA0;
loc_83140C10:
	// mulli r10,r10,236
	ctx.r10.s64 = ctx.r10.s64 * 236;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + r11.u64;
	// li r5,236
	ctx.r5.s64 = 236;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// sth r11,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r11.u16);
	// bl 0x83141fa0
	sub_83141FA0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x83140c4c
	if (!cr0.eq) goto loc_83140C4C;
	// bl 0x831403a8
	sub_831403A8(ctx, base);
	// b 0x83140c08
	goto loc_83140C08;
loc_83140C4C:
	// lis r11,-31980
	r11.s64 = -2095841280;
	// stw r29,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r29.u32);
	// lis r10,-31980
	ctx.r10.s64 = -2095841280;
	// stw r28,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r28.u32);
	// addi r9,r11,904
	ctx.r9.s64 = r11.s64 + 904;
	// stw r27,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r27.u32);
	// li r11,-128
	r11.s64 = -128;
	// stw r26,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r26.u32);
	// addi r10,r10,856
	ctx.r10.s64 = ctx.r10.s64 + 856;
	// stw r31,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r31.u32);
	// stw r31,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r31.u32);
	// stw r30,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r30.u32);
	// stw r9,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r9.u32);
	// sth r30,212(r31)
	PPC_STORE_U16(r31.u32 + 212, r30.u16);
	// stw r10,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// sth r11,214(r31)
	PPC_STORE_U16(r31.u32 + 214, r11.u16);
	// sth r11,216(r31)
	PPC_STORE_U16(r31.u32 + 216, r11.u16);
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// stw r30,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r30.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r30.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(r31.u32 + 208, r30.u32);
loc_83140CA0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83140CA8"))) PPC_WEAK_FUNC(sub_83140CA8);
PPC_FUNC_IMPL(__imp__sub_83140CA8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b10
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,1
	r11.s64 = 1;
	// addi r22,r31,16
	r22.s64 = r31.s64 + 16;
	// addi r25,r31,24
	r25.s64 = r31.s64 + 24;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r26,r31,20
	r26.s64 = r31.s64 + 20;
	// sth r11,2(r31)
	PPC_STORE_U16(r31.u32 + 2, r11.u16);
	// addi r24,r31,14
	r24.s64 = r31.s64 + 14;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// addi r23,r31,15
	r23.s64 = r31.s64 + 15;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// addi r27,r31,13
	r27.s64 = r31.s64 + 13;
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x8313e778
	sub_8313E778(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83140d20
	if (!cr0.lt) goto loc_83140D20;
loc_83140D18:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83140f5c
	goto loc_83140F5C;
loc_83140D20:
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// ble cr6,0x83140e1c
	if (!cr6.gt) goto loc_83140E1C;
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83140d58
	if (!cr6.eq) goto loc_83140D58;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,15192
	ctx.r4.s64 = r11.s64 + 15192;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,15160
	ctx.r3.s64 = r11.s64 + 15160;
	// bl 0x83139368
	sub_83139368(ctx, base);
loc_83140D50:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83140f5c
	goto loc_83140F5C;
loc_83140D58:
	// lbz r11,0(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// li r9,96
	ctx.r9.s64 = 96;
	// neg r11,r11
	r11.s64 = -r11.s64;
	// li r8,10
	ctx.r8.s64 = 10;
	// sth r30,28(r31)
	PPC_STORE_U16(r31.u32 + 28, r30.u16);
	// rlwinm r11,r11,6,0,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// stb r10,0(r27)
	PPC_STORE_U8(r27.u32 + 0, ctx.r10.u8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// sth r30,36(r31)
	PPC_STORE_U16(r31.u32 + 36, r30.u16);
	// addi r5,r1,97
	ctx.r5.s64 = ctx.r1.s64 + 97;
	// stw r9,0(r22)
	PPC_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// sth r30,38(r31)
	PPC_STORE_U16(r31.u32 + 38, r30.u16);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// sth r8,152(r31)
	PPC_STORE_U16(r31.u32 + 152, ctx.r8.u16);
	// stb r11,0(r23)
	PPC_STORE_U8(r23.u32 + 0, r11.u8);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r30.u32);
	// bl 0x8313e8b8
	sub_8313E8B8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83140d18
	if (cr0.lt) goto loc_83140D18;
	// addi r9,r1,126
	ctx.r9.s64 = ctx.r1.s64 + 126;
	// lwz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// lbz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// addi r7,r1,122
	ctx.r7.s64 = ctx.r1.s64 + 122;
	// lbz r4,97(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r30,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, r30.u16);
	// bl 0x83140638
	sub_83140638(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83140d50
	if (cr0.lt) goto loc_83140D50;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r10,-30772(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -30772);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83140f1c
	if (cr6.eq) goto loc_83140F1C;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83140f1c
	goto loc_83140F1C;
loc_83140E1C:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,97
	ctx.r5.s64 = ctx.r1.s64 + 97;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8313e8b8
	sub_8313E8B8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83140d18
	if (cr0.lt) goto loc_83140D18;
	// addi r9,r1,98
	ctx.r9.s64 = ctx.r1.s64 + 98;
	// lwz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// lbz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// addi r7,r1,102
	ctx.r7.s64 = ctx.r1.s64 + 102;
	// lbz r4,97(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83140638
	sub_83140638(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83140d50
	if (cr0.lt) goto loc_83140D50;
	// lhz r6,98(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lhz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// lhz r4,102(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// bl 0x831420b0
	sub_831420B0(ctx, base);
	// addi r30,r31,28
	r30.s64 = r31.s64 + 28;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8313e878
	sub_8313E878(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83140d18
	if (cr0.lt) goto loc_83140D18;
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8313e908
	sub_8313E908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83140d18
	if (cr0.lt) goto loc_83140D18;
	// lha r5,0(r30)
	ctx.r5.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 0));
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x83142048
	sub_83142048(ctx, base);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x83142060
	sub_83142060(ctx, base);
	// addi r11,r31,52
	r11.s64 = r31.s64 + 52;
	// addi r10,r31,48
	ctx.r10.s64 = r31.s64 + 48;
	// addi r9,r31,44
	ctx.r9.s64 = r31.s64 + 44;
	// addi r8,r31,40
	ctx.r8.s64 = r31.s64 + 40;
	// addi r7,r31,38
	ctx.r7.s64 = r31.s64 + 38;
	// addi r6,r31,36
	ctx.r6.s64 = r31.s64 + 36;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8313e990
	sub_8313E990(ctx, base);
	// addi r8,r31,214
	ctx.r8.s64 = r31.s64 + 214;
	// addi r7,r31,212
	ctx.r7.s64 = r31.s64 + 212;
	// addi r6,r31,196
	ctx.r6.s64 = r31.s64 + 196;
	// addi r5,r31,192
	ctx.r5.s64 = r31.s64 + 192;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8313ea80
	sub_8313EA80(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// sth r30,152(r31)
	PPC_STORE_U16(r31.u32 + 152, r30.u16);
loc_83140F1C:
	// lbz r11,0(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 0);
	// lbz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U8(r23.u32 + 0);
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// lwz r6,68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lha r3,104(r1)
	ctx.r3.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 104));
	// stw r30,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r30.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// stw r9,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r9.u32);
	// stw r8,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r8.u32);
	// stw r7,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r7.u32);
	// stw r6,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r6.u32);
loc_83140F5C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_83140F68"))) PPC_WEAK_FUNC(sub_83140F68);
PPC_FUNC_IMPL(__imp__sub_83140F68) {
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
	// li r11,0
	r11.s64 = 0;
	// li r10,-128
	ctx.r10.s64 = -128;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r11,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r11.u32);
	// sth r11,212(r31)
	PPC_STORE_U16(r31.u32 + 212, r11.u16);
	// sth r10,214(r31)
	PPC_STORE_U16(r31.u32 + 214, ctx.r10.u16);
	// sth r10,216(r31)
	PPC_STORE_U16(r31.u32 + 216, ctx.r10.u16);
	// stw r11,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r11.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r11.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r11.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(r31.u32 + 208, r11.u32);
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi cr6,r11,32768
	cr6.compare<uint32_t>(r11.u32, 32768, xer);
	// bne cr6,0x83140fbc
	if (!cr6.eq) goto loc_83140FBC;
	// bl 0x83140ca8
	sub_83140CA8(ctx, base);
	// b 0x83141050
	goto loc_83141050;
loc_83140FBC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831434a8
	sub_831434A8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83140fe0
	if (cr0.eq) goto loc_83140FE0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831433c8
	sub_831433C8(ctx, base);
	// b 0x83141050
	goto loc_83141050;
loc_83140FE0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83141e50
	sub_83141E50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83141004
	if (cr0.eq) goto loc_83141004;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83141900
	sub_83141900(ctx, base);
	// b 0x83141050
	goto loc_83141050;
loc_83141004:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83142ee0
	sub_83142EE0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83141028
	if (cr0.eq) goto loc_83141028;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83143050
	sub_83143050(ctx, base);
	// b 0x83141050
	goto loc_83141050;
loc_83141028:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831424e8
	sub_831424E8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8314104c
	if (cr0.eq) goto loc_8314104C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83142658
	sub_83142658(ctx, base);
	// b 0x83141050
	goto loc_83141050;
loc_8314104C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83141050:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83141058"))) PPC_WEAK_FUNC(sub_83141058);
PPC_FUNC_IMPL(__imp__sub_83141058) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lha r11,152(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 152));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83141080
	if (!cr0.eq) goto loc_83141080;
	// bl 0x83140ae0
	sub_83140AE0(ctx, base);
	// b 0x831410e0
	goto loc_831410E0;
loc_83141080:
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// bne cr6,0x83141094
	if (!cr6.eq) goto loc_83141094;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831411c0
	sub_831411C0(ctx, base);
	// b 0x831410e0
	goto loc_831410E0;
loc_83141094:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x831410a8
	if (!cr6.eq) goto loc_831410A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83143148
	sub_83143148(ctx, base);
	// b 0x831410e0
	goto loc_831410E0;
loc_831410A8:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x831410bc
	if (!cr6.eq) goto loc_831410BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831432a0
	sub_831432A0(ctx, base);
	// b 0x831410e0
	goto loc_831410E0;
loc_831410BC:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x831410d0
	if (!cr6.eq) goto loc_831410D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83142bb0
	sub_83142BB0(ctx, base);
	// b 0x831410e0
	goto loc_831410E0;
loc_831410D0:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x831410e0
	if (!cr6.eq) goto loc_831410E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83141ed0
	sub_83141ED0(ctx, base);
loc_831410E0:
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8314112c
	if (cr0.eq) goto loc_8314112C;
	// lwz r9,148(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r8,220(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// subf. r4,r8,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge 0x83141108
	if (!cr0.lt) goto loc_83141108;
	// addis r4,r4,-32768
	ctx.r4.s64 = ctx.r4.s64 + -2147483648;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
loc_83141108:
	// lbz r9,14(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 14);
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// mullw r11,r9,r11
	r11.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// stw r11,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r11.u32);
loc_8314112C:
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

__attribute__((alias("__imp__sub_83141140"))) PPC_WEAK_FUNC(sub_83141140);
PPC_FUNC_IMPL(__imp__sub_83141140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r3,180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r11,-30752(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -30752);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8314115C"))) PPC_WEAK_FUNC(sub_8314115C);
PPC_FUNC_IMPL(__imp__sub_8314115C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141160"))) PPC_WEAK_FUNC(sub_83141160);
PPC_FUNC_IMPL(__imp__sub_83141160) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83141198
	if (cr0.eq) goto loc_83141198;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r11,-30748(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -30748);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83141198:
	// li r11,96
	r11.s64 = 96;
	// stw r31,184(r30)
	PPC_STORE_U32(r30.u32 + 184, r31.u32);
	// divw r11,r31,r11
	r11.s32 = r31.s32 / r11.s32;
	// stw r11,188(r30)
	PPC_STORE_U32(r30.u32 + 188, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831411C0"))) PPC_WEAK_FUNC(sub_831411C0);
PPC_FUNC_IMPL(__imp__sub_831411C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r11,-30740(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -30740);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_831411D0"))) PPC_WEAK_FUNC(sub_831411D0);
PPC_FUNC_IMPL(__imp__sub_831411D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r3,180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r11,-30744(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -30744);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_831411EC"))) PPC_WEAK_FUNC(sub_831411EC);
PPC_FUNC_IMPL(__imp__sub_831411EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831411F0"))) PPC_WEAK_FUNC(sub_831411F0);
PPC_FUNC_IMPL(__imp__sub_831411F0) {
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r31,r11,-30736
	r31.s64 = r11.s64 + -30736;
	// addi r11,r31,44
	r11.s64 = r31.s64 + 44;
	// addi r10,r31,44
	ctx.r10.s64 = r31.s64 + 44;
	// addi r9,r31,44
	ctx.r9.s64 = r31.s64 + 44;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8314125c
	if (!cr6.eq) goto loc_8314125C;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,-30700(r11)
	PPC_STORE_U32(r11.u32 + -30700, ctx.r10.u32);
	// bl 0x83137798
	sub_83137798(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8314125c
	if (!cr0.eq) goto loc_8314125C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,15228
	ctx.r3.s64 = r11.s64 + 15228;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_8314125C:
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

__attribute__((alias("__imp__sub_83141270"))) PPC_WEAK_FUNC(sub_83141270);
PPC_FUNC_IMPL(__imp__sub_83141270) {
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r31,r11,-30704
	r31.s64 = r11.s64 + -30704;
	// addi r11,r31,12
	r11.s64 = r31.s64 + 12;
	// addi r10,r31,12
	ctx.r10.s64 = r31.s64 + 12;
	// addi r9,r31,12
	ctx.r9.s64 = r31.s64 + 12;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831412d0
	if (!cr6.eq) goto loc_831412D0;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,-30700(r11)
	PPC_STORE_U32(r11.u32 + -30700, ctx.r10.u32);
	// beq cr6,0x831412d0
	if (cr6.eq) goto loc_831412D0;
	// bl 0x83137878
	sub_83137878(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_831412D0:
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

__attribute__((alias("__imp__sub_831412E8"))) PPC_WEAK_FUNC(sub_831412E8);
PPC_FUNC_IMPL(__imp__sub_831412E8) {
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r3,-30704(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -30704);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83141314
	if (!cr0.lt) goto loc_83141314;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,15280
	ctx.r3.s64 = r11.s64 + 15280;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83141314:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141328"))) PPC_WEAK_FUNC(sub_83141328);
PPC_FUNC_IMPL(__imp__sub_83141328) {
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r3,-30704(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -30704);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83141354
	if (!cr0.lt) goto loc_83141354;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,15376
	ctx.r3.s64 = r11.s64 + 15376;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83141354:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141368"))) PPC_WEAK_FUNC(sub_83141368);
PPC_FUNC_IMPL(__imp__sub_83141368) {
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
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r30,r11,r31
	r30.u64 = r11.u64 + r31.u64;
	// ble cr6,0x8314146c
	if (!cr6.gt) goto loc_8314146C;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x8313b920
	sub_8313B920(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x8313ba70
	sub_8313BA70(ctx, base);
	// lwz r4,60(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_831413AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831413ac
	if (!cr6.eq) goto loc_831413AC;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// li r29,0
	r29.s64 = 0;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r11,r29
	r11.u64 = r29.u64;
	// rotlwi. r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x831413ec
	if (cr0.eq) goto loc_831413EC;
loc_831413D8:
	// lbzx r8,r11,r4
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + ctx.r4.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x831413d8
	if (cr6.lt) goto loc_831413D8;
loc_831413EC:
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x83141408
	if (cr6.eq) goto loc_83141408;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,15472
	ctx.r3.s64 = r11.s64 + 15472;
	// bl 0x83139740
	sub_83139740(ctx, base);
	// b 0x8314146c
	goto loc_8314146C;
loc_83141408:
	// lwa r11,76(r30)
	r11.s64 = int32_t(PPC_LOAD_U32(r30.u32 + 76));
	// lwz r6,72(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// rldicr r7,r11,11,52
	ctx.r7.u64 = __builtin_rotateleft64(r11.u64, 11) & 0xFFFFFFFFFFFFF800;
	// lwz r5,68(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x8313b838
	sub_8313B838(ctx, base);
	// lwz r4,76(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x8313b0b0
	sub_8313B0B0(ctx, base);
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r29,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r29.u32);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stb r29,2(r31)
	PPC_STORE_U8(r31.u32 + 2, r29.u8);
	// bl 0x8313b778
	sub_8313B778(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x8313afd8
	sub_8313AFD8(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x8313b8a0
	sub_8313B8A0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,2(r31)
	PPC_STORE_U8(r31.u32 + 2, r11.u8);
	// stw r11,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r11.u32);
loc_8314146C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83141478"))) PPC_WEAK_FUNC(sub_83141478);
PPC_FUNC_IMPL(__imp__sub_83141478) {
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
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831414ac
	if (!cr0.eq) goto loc_831414AC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,15536
	ctx.r3.s64 = r11.s64 + 15536;
	// bl 0x83139740
	sub_83139740(ctx, base);
	// b 0x83141500
	goto loc_83141500;
loc_831414AC:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r30,r11,r31
	r30.u64 = r11.u64 + r31.u64;
	// bl 0x8313af98
	sub_8313AF98(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x831414f4
	if (cr6.eq) goto loc_831414F4;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x831414e0
	if (cr6.eq) goto loc_831414E0;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x83141500
	if (!cr6.eq) goto loc_83141500;
	// li r11,3
	r11.s64 = 3;
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// b 0x83141500
	goto loc_83141500;
loc_831414E0:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
	// stw r10,80(r30)
	PPC_STORE_U32(r30.u32 + 80, ctx.r10.u32);
	// b 0x83141500
	goto loc_83141500;
loc_831414F4:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x8313b030
	sub_8313B030(ctx, base);
	// stw r3,84(r30)
	PPC_STORE_U32(r30.u32 + 84, ctx.r3.u32);
loc_83141500:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141518"))) PPC_WEAK_FUNC(sub_83141518);
PPC_FUNC_IMPL(__imp__sub_83141518) {
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
	// li r30,0
	r30.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831415c8
	if (cr6.eq) goto loc_831415C8;
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8314156c
	if (!cr6.eq) goto loc_8314156C;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r30,60(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// lwz r29,68(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// lwz r28,72(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// lwz r27,76(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 76);
loc_8314156C:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// srawi r9,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// bgt 0x831415a4
	if (cr0.gt) goto loc_831415A4;
	// bl 0x8313e0b8
	sub_8313E0B8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
loc_831415A4:
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x831415c8
	if (!cr6.eq) goto loc_831415C8;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313e168
	sub_8313E168(ctx, base);
loc_831415C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_831415D0"))) PPC_WEAK_FUNC(sub_831415D0);
PPC_FUNC_IMPL(__imp__sub_831415D0) {
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
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x83141664
	if (cr6.eq) goto loc_83141664;
	// lbz r11,1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x83141664
	if (!cr6.eq) goto loc_83141664;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83141664
	if (!cr6.gt) goto loc_83141664;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83141624
	if (!cr6.eq) goto loc_83141624;
	// bl 0x83141478
	sub_83141478(ctx, base);
loc_83141624:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83141644
	if (!cr6.eq) goto loc_83141644;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83141518
	sub_83141518(ctx, base);
loc_83141644:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83141664
	if (!cr6.eq) goto loc_83141664;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83141368
	sub_83141368(ctx, base);
loc_83141664:
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

__attribute__((alias("__imp__sub_83141678"))) PPC_WEAK_FUNC(sub_83141678);
PPC_FUNC_IMPL(__imp__sub_83141678) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r11,25916
	r28.s64 = r11.s64 + 25916;
	// ble cr6,0x831416fc
	if (!cr6.gt) goto loc_831416FC;
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 0);
loc_831416BC:
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// addi r8,r11,4
	ctx.r8.s64 = r11.s64 + 4;
loc_831416C8:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r7,r5,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r5.s64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x831416e8
	if (!cr0.eq) goto loc_831416E8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x831416c8
	if (!cr6.eq) goto loc_831416C8;
loc_831416E8:
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x831416fc
	if (cr0.eq) goto loc_831416FC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, r29.s32, xer);
	// blt cr6,0x831416bc
	if (cr6.lt) goto loc_831416BC;
loc_831416FC:
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, r29.s32, xer);
	// beq cr6,0x831418f4
	if (cr6.eq) goto loc_831418F4;
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lhz r11,80(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r10,r11
	ctx.r10.s64 = r11.s16;
	// rlwinm r11,r11,24,8,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bgt cr6,0x831418f4
	if (cr6.gt) goto loc_831418F4;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x83141788
	if (!cr6.gt) goto loc_83141788;
	// lwz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 4);
loc_83141748:
	// add r11,r8,r31
	r11.u64 = ctx.r8.u64 + r31.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
loc_83141754:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r7,r5,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r5.s64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x83141774
	if (!cr0.eq) goto loc_83141774;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x83141754
	if (!cr6.eq) goto loc_83141754;
loc_83141774:
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x83141788
	if (cr0.eq) goto loc_83141788;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r8,r29
	cr6.compare<int32_t>(ctx.r8.s32, r29.s32, xer);
	// blt cr6,0x83141748
	if (cr6.lt) goto loc_83141748;
loc_83141788:
	// cmpw cr6,r8,r29
	cr6.compare<int32_t>(ctx.r8.s32, r29.s32, xer);
	// beq cr6,0x831418f4
	if (cr6.eq) goto loc_831418F4;
	// lhz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// add r11,r8,r31
	r11.u64 = ctx.r8.u64 + r31.u64;
	// lhz r4,94(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// li r5,-1
	ctx.r5.s64 = -1;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r4,r4,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r3,7(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 7);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lbz r31,6(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// lbz r28,5(r11)
	r28.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// rlwimi r7,r10,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// rlwimi r6,r10,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
	// rotlwi r3,r3,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// rlwinm r8,r7,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// or r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 | r31.u64;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// lhz r6,82(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// sth r10,0(r25)
	PPC_STORE_U16(r25.u32 + 0, ctx.r10.u16);
	// rlwinm r10,r3,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stb r5,0(r24)
	PPC_STORE_U8(r24.u32 + 0, ctx.r5.u8);
	// or r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 | r28.u64;
	// rlwinm r6,r6,24,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// extsb r29,r9
	r29.s64 = ctx.r9.s8;
	// stw r8,0(r23)
	PPC_STORE_U32(r23.u32 + 0, ctx.r8.u32);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// lwz r8,284(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r6,0(r27)
	PPC_STORE_U8(r27.u32 + 0, ctx.r6.u8);
	// divw r10,r11,r29
	ctx.r10.s32 = r11.s32 / r29.s32;
	// stb r4,0(r30)
	PPC_STORE_U8(r30.u32 + 0, ctx.r4.u8);
	// stb r9,0(r26)
	PPC_STORE_U8(r26.u32 + 0, ctx.r9.u8);
	// lwz r9,276(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,16
	cr6.compare<int32_t>(ctx.r10.s32, 16, xer);
	// bne cr6,0x83141854
	if (!cr6.eq) goto loc_83141854;
	// lwz r11,292(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
	// b 0x831418b4
	goto loc_831418B4;
loc_83141854:
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// bne cr6,0x83141868
	if (!cr6.eq) goto loc_83141868;
	// lwz r11,292(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// sth r7,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r7.u16);
	// b 0x831418b4
	goto loc_831418B4;
loc_83141868:
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bne cr6,0x831418b4
	if (!cr6.eq) goto loc_831418B4;
	// lbz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U8(r27.u32 + 0);
	// li r7,4
	ctx.r7.s64 = 4;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r10,0(r26)
	PPC_STORE_U8(r26.u32 + 0, ctx.r10.u8);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lbz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U8(r27.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// lwz r11,292(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// stb r6,0(r30)
	PPC_STORE_U8(r30.u32 + 0, ctx.r6.u8);
	// sth r5,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r5.u16);
loc_831418B4:
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831418f4
	if (cr6.eq) goto loc_831418F4;
	// lbz r11,0(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831418f4
	if (cr6.eq) goto loc_831418F4;
	// lbz r11,0(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 0);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x831418f4
	if (!cr0.gt) goto loc_831418F4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bgt cr6,0x831418f4
	if (cr6.gt) goto loc_831418F4;
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// neg r3,r11
	ctx.r3.s64 = -r11.s64;
	// b 0x831418f8
	goto loc_831418F8;
loc_831418F4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_831418F8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_83141900"))) PPC_WEAK_FUNC(sub_83141900);
PPC_FUNC_IMPL(__imp__sub_83141900) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r27,1
	r27.s64 = 1;
	// addi r9,r31,24
	ctx.r9.s64 = r31.s64 + 24;
	// addi r11,r31,156
	r11.s64 = r31.s64 + 156;
	// addi r28,r31,16
	r28.s64 = r31.s64 + 16;
	// addi r30,r31,14
	r30.s64 = r31.s64 + 14;
	// addi r29,r31,15
	r29.s64 = r31.s64 + 15;
	// sth r27,2(r31)
	PPC_STORE_U16(r31.u32 + 2, r27.u16);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r10,r31,20
	ctx.r10.s64 = r31.s64 + 20;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r7,r31,13
	ctx.r7.s64 = r31.s64 + 13;
	// addi r6,r31,12
	ctx.r6.s64 = r31.s64 + 12;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// bl 0x83141678
	sub_83141678(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x831419d0
	if (cr0.lt) goto loc_831419D0;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// lbz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lwz r7,60(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// lwz r6,64(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// lwz r5,68(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lha r3,112(r1)
	ctx.r3.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 112));
	// sth r11,28(r31)
	PPC_STORE_U16(r31.u32 + 28, r11.u16);
	// sth r11,38(r31)
	PPC_STORE_U16(r31.u32 + 38, r11.u16);
	// sth r11,36(r31)
	PPC_STORE_U16(r31.u32 + 36, r11.u16);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// stw r8,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r8.u32);
	// stw r7,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r7.u32);
	// stw r6,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r6.u32);
	// stw r5,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r5.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
	// sth r27,152(r31)
	PPC_STORE_U16(r31.u32 + 152, r27.u16);
loc_831419D0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_831419D8"))) PPC_WEAK_FUNC(sub_831419D8);
PPC_FUNC_IMPL(__imp__sub_831419D8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r30,72
	r31.s64 = r30.s64 + 72;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83141b20
	if (!cr6.eq) goto loc_83141B20;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83141b20
	if (!cr0.eq) goto loc_83141B20;
	// lwz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// addi r5,r31,36
	ctx.r5.s64 = r31.s64 + 36;
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// addi r6,r31,40
	ctx.r6.s64 = r31.s64 + 40;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// ble cr6,0x83141a44
	if (!cr6.gt) goto loc_83141A44;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_83141A44:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// ble cr6,0x83141a54
	if (!cr6.gt) goto loc_83141A54;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_83141A54:
	// lbz r7,14(r30)
	ctx.r7.u64 = PPC_LOAD_U8(r30.u32 + 14);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bne cr6,0x83141acc
	if (!cr6.eq) goto loc_83141ACC;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ble cr6,0x83141b00
	if (!cr6.gt) goto loc_83141B00;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// subf r7,r9,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r9.s64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
loc_83141A90:
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// sthx r6,r7,r9
	PPC_STORE_U16(ctx.r7.u32 + ctx.r9.u32, ctx.r6.u16);
	// lhz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lbz r5,2(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// sth r6,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r6.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bne 0x83141a90
	if (!cr0.eq) goto loc_83141A90;
	// b 0x83141b00
	goto loc_83141B00;
loc_83141ACC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83141b00
	if (!cr6.gt) goto loc_83141B00;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// subf r8,r29,r7
	ctx.r8.s64 = ctx.r7.s64 - r29.s64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
loc_83141AE0:
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// sthx r7,r8,r10
	PPC_STORE_U16(ctx.r8.u32 + ctx.r10.u32, ctx.r7.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x83141ae0
	if (!cr0.eq) goto loc_83141AE0;
loc_83141B00:
	// lbz r10,14(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 14);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,144(r30)
	PPC_STORE_U32(r30.u32 + 144, r11.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,148(r30)
	PPC_STORE_U32(r30.u32 + 148, r11.u32);
loc_83141B20:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83141b4c
	if (!cr6.eq) goto loc_83141B4C;
	// lwz r5,144(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// lwz r4,148(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwz r11,128(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,3
	r11.s64 = 3;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_83141B4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83141B58"))) PPC_WEAK_FUNC(sub_83141B58);
PPC_FUNC_IMPL(__imp__sub_83141B58) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r30,72
	r31.s64 = r30.s64 + 72;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83141c9c
	if (!cr6.eq) goto loc_83141C9C;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83141c9c
	if (!cr0.eq) goto loc_83141C9C;
	// lwz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// addi r5,r31,36
	ctx.r5.s64 = r31.s64 + 36;
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// addi r6,r31,40
	ctx.r6.s64 = r31.s64 + 40;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// ble cr6,0x83141bc4
	if (!cr6.gt) goto loc_83141BC4;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_83141BC4:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// ble cr6,0x83141bd4
	if (!cr6.gt) goto loc_83141BD4;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_83141BD4:
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,14(r30)
	ctx.r7.u64 = PPC_LOAD_U8(r30.u32 + 14);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// bne cr6,0x83141c4c
	if (!cr6.eq) goto loc_83141C4C;
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// ble cr6,0x83141c80
	if (!cr6.gt) goto loc_83141C80;
	// subf r6,r29,r9
	ctx.r6.s64 = ctx.r9.s64 - r29.s64;
	// lis r9,0
	ctx.r9.s64 = 0;
	// subf r7,r29,r8
	ctx.r7.s64 = ctx.r8.s64 - r29.s64;
	// mr r11,r29
	r11.u64 = r29.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// ori r9,r9,65408
	ctx.r9.u64 = ctx.r9.u64 | 65408;
loc_83141C1C:
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// sthx r5,r7,r11
	PPC_STORE_U16(ctx.r7.u32 + r11.u32, ctx.r5.u16);
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// sthx r5,r6,r11
	PPC_STORE_U16(ctx.r6.u32 + r11.u32, ctx.r5.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// bne 0x83141c1c
	if (!cr0.eq) goto loc_83141C1C;
	// b 0x83141c80
	goto loc_83141C80;
loc_83141C4C:
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83141c80
	if (!cr6.gt) goto loc_83141C80;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r9,r9,65408
	ctx.r9.u64 = ctx.r9.u64 | 65408;
loc_83141C60:
	// lbzx r7,r11,r29
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// rlwinm r7,r7,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// sth r7,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r7.u16);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// blt cr6,0x83141c60
	if (cr6.lt) goto loc_83141C60;
loc_83141C80:
	// lbz r11,14(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 14);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,144(r30)
	PPC_STORE_U32(r30.u32 + 144, ctx.r10.u32);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// mullw r11,r11,r10
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// stw r11,148(r30)
	PPC_STORE_U32(r30.u32 + 148, r11.u32);
loc_83141C9C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83141cc8
	if (!cr6.eq) goto loc_83141CC8;
	// lwz r5,144(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// lwz r4,148(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwz r11,128(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,3
	r11.s64 = 3;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_83141CC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83141CD0"))) PPC_WEAK_FUNC(sub_83141CD0);
PPC_FUNC_IMPL(__imp__sub_83141CD0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r30,72
	r31.s64 = r30.s64 + 72;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83141e18
	if (!cr6.eq) goto loc_83141E18;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83141e18
	if (!cr0.eq) goto loc_83141E18;
	// lwz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// addi r5,r31,36
	ctx.r5.s64 = r31.s64 + 36;
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// addi r6,r31,40
	ctx.r6.s64 = r31.s64 + 40;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// ble cr6,0x83141d3c
	if (!cr6.gt) goto loc_83141D3C;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_83141D3C:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// ble cr6,0x83141d4c
	if (!cr6.gt) goto loc_83141D4C;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_83141D4C:
	// lbz r7,14(r30)
	ctx.r7.u64 = PPC_LOAD_U8(r30.u32 + 14);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bne cr6,0x83141dc4
	if (!cr6.eq) goto loc_83141DC4;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ble cr6,0x83141df8
	if (!cr6.gt) goto loc_83141DF8;
	// addi r10,r29,3
	ctx.r10.s64 = r29.s64 + 3;
	// subf r7,r9,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r9.s64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
loc_83141D88:
	// lbz r6,-1(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// lbz r5,-3(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + -3);
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// sthx r6,r7,r9
	PPC_STORE_U16(ctx.r7.u32 + ctx.r9.u32, ctx.r6.u16);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r5,-2(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + -2);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// sth r6,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r6.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bne 0x83141d88
	if (!cr0.eq) goto loc_83141D88;
	// b 0x83141df8
	goto loc_83141DF8;
loc_83141DC4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83141df8
	if (!cr6.gt) goto loc_83141DF8;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// subf r8,r29,r7
	ctx.r8.s64 = ctx.r7.s64 - r29.s64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
loc_83141DD8:
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// sthx r7,r8,r10
	PPC_STORE_U16(ctx.r8.u32 + ctx.r10.u32, ctx.r7.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x83141dd8
	if (!cr0.eq) goto loc_83141DD8;
loc_83141DF8:
	// lbz r10,14(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 14);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,144(r30)
	PPC_STORE_U32(r30.u32 + 144, r11.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,148(r30)
	PPC_STORE_U32(r30.u32 + 148, r11.u32);
loc_83141E18:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83141e44
	if (!cr6.eq) goto loc_83141E44;
	// lwz r5,144(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// lwz r4,148(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwz r11,128(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,3
	r11.s64 = 3;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_83141E44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83141E50"))) PPC_WEAK_FUNC(sub_83141E50);
PPC_FUNC_IMPL(__imp__sub_83141E50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// addi r10,r10,15576
	ctx.r10.s64 = ctx.r10.s64 + 15576;
loc_83141E60:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x83141e80
	if (!cr0.eq) goto loc_83141E80;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x83141e60
	if (!cr6.eq) goto loc_83141E60;
loc_83141E80:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x83141ec4
	if (!cr0.eq) goto loc_83141EC4;
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// addi r10,r10,15568
	ctx.r10.s64 = ctx.r10.s64 + 15568;
loc_83141E98:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x83141eb8
	if (!cr0.eq) goto loc_83141EB8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x83141e98
	if (!cr6.eq) goto loc_83141E98;
loc_83141EB8:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beqlr 
	if (cr0.eq) return;
loc_83141EC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141ED0"))) PPC_WEAK_FUNC(sub_83141ED0);
PPC_FUNC_IMPL(__imp__sub_83141ED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lha r11,156(r3)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 156));
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83141ee0
	if (!cr6.eq) goto loc_83141EE0;
	// b 0x83141cd0
	sub_83141CD0(ctx, base);
	return;
loc_83141EE0:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83141eec
	if (!cr6.eq) goto loc_83141EEC;
	// b 0x83141b58
	sub_83141B58(ctx, base);
	return;
loc_83141EEC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// b 0x831419d8
	sub_831419D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83141EF8"))) PPC_WEAK_FUNC(sub_83141EF8);
PPC_FUNC_IMPL(__imp__sub_83141EF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141F00"))) PPC_WEAK_FUNC(sub_83141F00);
PPC_FUNC_IMPL(__imp__sub_83141F00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addic. r4,r4,-3
	xer.ca = ctx.r4.u32 > 2;
	ctx.r4.s64 = ctx.r4.s64 + -3;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// ble 0x83141f58
	if (!cr0.gt) goto loc_83141F58;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r6,r11,15576
	ctx.r6.s64 = r11.s64 + 15576;
loc_83141F18:
	// add r11,r9,r3
	r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// addi r8,r11,4
	ctx.r8.s64 = r11.s64 + 4;
loc_83141F24:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r31,0(r10)
	r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r7,r31,r7
	ctx.r7.s64 = ctx.r7.s64 - r31.s64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x83141f44
	if (!cr0.eq) goto loc_83141F44;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x83141f24
	if (!cr6.eq) goto loc_83141F24;
loc_83141F44:
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x83141f6c
	if (cr0.eq) goto loc_83141F6C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// blt cr6,0x83141f18
	if (cr6.lt) goto loc_83141F18;
loc_83141F58:
	// li r11,0
	r11.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, r11.u16);
loc_83141F64:
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_83141F6C:
	// lis r11,32767
	r11.s64 = 2147418112;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// bge cr6,0x83141f58
	if (!cr6.lt) goto loc_83141F58;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r9,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r9.u16);
	// b 0x83141f64
	goto loc_83141F64;
}

__attribute__((alias("__imp__sub_83141F88"))) PPC_WEAK_FUNC(sub_83141F88);
PPC_FUNC_IMPL(__imp__sub_83141F88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31932
	r11.s64 = -2092695552;
	// li r5,1920
	ctx.r5.s64 = 1920;
	// addi r3,r11,-1344
	ctx.r3.s64 = r11.s64 + -1344;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x831b0ba0
	sub_831B0BA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83141FA0"))) PPC_WEAK_FUNC(sub_83141FA0);
PPC_FUNC_IMPL(__imp__sub_83141FA0) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,-1344
	r11.s64 = r11.s64 + -1344;
	// mr r30,r29
	r30.u64 = r29.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_83141FC0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83141fe0
	if (cr6.eq) goto loc_83141FE0;
	// addi r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 + 60;
	// addi r9,r11,1920
	ctx.r9.s64 = r11.s64 + 1920;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x83141fc0
	if (cr6.lt) goto loc_83141FC0;
loc_83141FE0:
	// cmpwi cr6,r30,32
	cr6.compare<int32_t>(r30.s32, 32, xer);
	// bne cr6,0x83141ff0
	if (!cr6.eq) goto loc_83141FF0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83142040
	goto loc_83142040;
loc_83141FF0:
	// mulli r10,r30,60
	ctx.r10.s64 = r30.s64 * 60;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + r11.u64;
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// lis r4,0
	ctx.r4.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r6,r31,50
	ctx.r6.s64 = r31.s64 + 50;
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// addi r5,r31,48
	ctx.r5.s64 = r31.s64 + 48;
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// ori r4,r4,44100
	ctx.r4.u64 = ctx.r4.u64 | 44100;
	// li r3,500
	ctx.r3.s64 = 500;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x8313e638
	sub_8313E638(ctx, base);
	// stw r29,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r29.u32);
	// stw r29,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83142040:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83142048"))) PPC_WEAK_FUNC(sub_83142048);
PPC_FUNC_IMPL(__imp__sub_83142048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r6,r11,50
	ctx.r6.s64 = r11.s64 + 50;
	// addi r5,r11,48
	ctx.r5.s64 = r11.s64 + 48;
	// b 0x8313e638
	sub_8313E638(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83142060"))) PPC_WEAK_FUNC(sub_83142060);
PPC_FUNC_IMPL(__imp__sub_83142060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lhz r11,0(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// sth r11,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, r11.u16);
	// lhz r11,0(r5)
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// sth r11,42(r3)
	PPC_STORE_U16(ctx.r3.u32 + 42, r11.u16);
	// lhz r11,2(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// sth r11,44(r3)
	PPC_STORE_U16(ctx.r3.u32 + 44, r11.u16);
	// lhz r11,2(r5)
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 2);
	// sth r11,46(r3)
	PPC_STORE_U16(ctx.r3.u32 + 46, r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142088"))) PPC_WEAK_FUNC(sub_83142088);
PPC_FUNC_IMPL(__imp__sub_83142088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lhz r11,40(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, r11.u16);
	// lhz r11,42(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 42);
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, r11.u16);
	// lhz r11,44(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 44);
	// sth r11,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, r11.u16);
	// lhz r11,46(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 46);
	// sth r11,2(r5)
	PPC_STORE_U16(ctx.r5.u32 + 2, r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831420B0"))) PPC_WEAK_FUNC(sub_831420B0);
PPC_FUNC_IMPL(__imp__sub_831420B0) {
	PPC_FUNC_PROLOGUE();
	// sth r4,52(r3)
	PPC_STORE_U16(ctx.r3.u32 + 52, ctx.r4.u16);
	// sth r5,54(r3)
	PPC_STORE_U16(ctx.r3.u32 + 54, ctx.r5.u16);
	// sth r6,56(r3)
	PPC_STORE_U16(ctx.r3.u32 + 56, ctx.r6.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831420C0"))) PPC_WEAK_FUNC(sub_831420C0);
PPC_FUNC_IMPL(__imp__sub_831420C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lhz r11,52(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 52);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, r11.u16);
	// lhz r11,54(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 54);
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, r11.u16);
	// lhz r11,56(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 56);
	// sth r11,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831420E0"))) PPC_WEAK_FUNC(sub_831420E0);
PPC_FUNC_IMPL(__imp__sub_831420E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,0
	r11.s64 = 0;
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x831b0ba0
	sub_831B0BA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831420FC"))) PPC_WEAK_FUNC(sub_831420FC);
PPC_FUNC_IMPL(__imp__sub_831420FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142100"))) PPC_WEAK_FUNC(sub_83142100);
PPC_FUNC_IMPL(__imp__sub_83142100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83142130
	if (!cr6.eq) goto loc_83142130;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r4,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r5.u32);
	// stw r6,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r6.u32);
	// stw r7,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r7.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// blr 
	return;
loc_83142130:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142138"))) PPC_WEAK_FUNC(sub_83142138);
PPC_FUNC_IMPL(__imp__sub_83142138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83142168
	if (!cr6.eq) goto loc_83142168;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r4,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r5.u32);
	// stw r6,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r6.u32);
	// stw r7,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r7.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// blr 
	return;
loc_83142168:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142170"))) PPC_WEAK_FUNC(sub_83142170);
PPC_FUNC_IMPL(__imp__sub_83142170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142190"))) PPC_WEAK_FUNC(sub_83142190);
PPC_FUNC_IMPL(__imp__sub_83142190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831421A8"))) PPC_WEAK_FUNC(sub_831421A8);
PPC_FUNC_IMPL(__imp__sub_831421A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831421C0"))) PPC_WEAK_FUNC(sub_831421C0);
PPC_FUNC_IMPL(__imp__sub_831421C0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x831421e4
	if (!cr6.eq) goto loc_831421E4;
	// li r11,2
	r11.s64 = 2;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_831421E4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83142284
	if (!cr6.eq) goto loc_83142284;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r6,r31,40
	ctx.r6.s64 = r31.s64 + 40;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lhz r11,56(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 56);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bne cr6,0x83142230
	if (!cr6.eq) goto loc_83142230;
	// addi r9,r31,52
	ctx.r9.s64 = r31.s64 + 52;
	// lhz r10,54(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 54);
	// lhz r8,50(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 50);
	// lhz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U16(r31.u32 + 48);
	// sth r11,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, r11.u16);
	// bl 0x831434e0
	sub_831434E0(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// b 0x8314227c
	goto loc_8314227C;
loc_83142230:
	// lhz r29,54(r31)
	r29.u64 = PPC_LOAD_U16(r31.u32 + 54);
	// addi r30,r31,52
	r30.s64 = r31.s64 + 52;
	// addi r8,r31,44
	ctx.r8.s64 = r31.s64 + 44;
	// lhz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 50);
	// lhz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 48);
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// sth r11,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, r11.u16);
	// sth r29,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, r29.u16);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x83143b98
	sub_83143B98(ctx, base);
	// srawi r11,r3,1
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	r11.s64 = ctx.r3.s32 >> 1;
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8314227c
	if (!cr6.eq) goto loc_8314227C;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// stw r11,-30688(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30688, r11.u32);
loc_8314227C:
	// li r11,3
	r11.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_83142284:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83142290"))) PPC_WEAK_FUNC(sub_83142290);
PPC_FUNC_IMPL(__imp__sub_83142290) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x831b0b28
	// lbz r10,3(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// lis r11,100
	r11.s64 = 6553600;
	// lbz r30,2(r3)
	r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r29,1(r3)
	r29.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lbz r28,0(r3)
	r28.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// ori r31,r11,29486
	r31.u64 = r11.u64 | 29486;
	// or r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 | r30.u64;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 | r29.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 | r28.u64;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// beq cr6,0x831422ec
	if (cr6.eq) goto loc_831422EC;
	// lis r31,25710
	r31.s64 = 1684930560;
	// ori r31,r31,29486
	r31.u64 = r31.u64 | 29486;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// beq cr6,0x831422ec
	if (cr6.eq) goto loc_831422EC;
loc_831422E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831424e4
	goto loc_831424E4;
loc_831422EC:
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// lbz r31,2(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r30,1(r11)
	r30.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r29,0(r11)
	r29.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// or r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 | r31.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 | r30.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 | r29.u64;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// rlwimi r31,r10,16,16,31
	r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (r31.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r30,r10,16,0,15
	r30.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (r30.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r31,24,16,31
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 24) & 0xFFFF;
	// rlwinm r31,r30,8,0,15
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFF0000;
	// or r30,r10,r31
	r30.u64 = ctx.r10.u64 | r31.u64;
	// cmpw cr6,r30,r4
	cr6.compare<int32_t>(r30.s32, ctx.r4.s32, xer);
	// bgt cr6,0x831422e4
	if (cr6.gt) goto loc_831422E4;
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r31,1(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r29,0(r11)
	r29.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r4,3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// or r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 | r31.u64;
	// lbz r31,2(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// rotlwi r4,r4,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// lbz r28,0(r11)
	r28.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 | r31.u64;
	// or r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 | r29.u64;
	// lbz r29,1(r11)
	r29.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// or r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 | r29.u64;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// rlwimi r31,r10,16,16,31
	r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (r31.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r29,r10,16,0,15
	r29.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (r29.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r31,24,16,31
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 24) & 0xFFFF;
	// rlwinm r31,r29,8,0,15
	r31.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 8) & 0xFFFF0000;
	// or r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 | r28.u64;
	// or r31,r10,r31
	r31.u64 = ctx.r10.u64 | r31.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// rlwimi r10,r4,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r29,r4,16,0,15
	r29.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0xFFFF0000) | (r29.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r10,24,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r4,r29,8,0,15
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 8) & 0xFFFF0000;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x831423f8
	if (cr6.eq) goto loc_831423F8;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// beq cr6,0x831423f0
	if (cr6.eq) goto loc_831423F0;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x831422e4
	if (!cr6.eq) goto loc_831422E4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x83142400
	goto loc_83142400;
loc_831423F0:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x831423fc
	goto loc_831423FC;
loc_831423F8:
	// li r10,2
	ctx.r10.s64 = 2;
loc_831423FC:
	// li r4,8
	ctx.r4.s64 = 8;
loc_83142400:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r29,0(r11)
	r29.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 | r29.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// srawi r4,r10,24
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 24;
	// rlwimi r7,r10,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// srawi r10,r10,8
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// rlwinm r7,r7,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r10,r10,0,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF00;
	// rlwimi r4,r7,8,0,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFFFFFF00) | (ctx.r4.u64 & 0xFFFFFFFF000000FF);
	// or r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 | ctx.r10.u64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 7);
	// lbz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r5,5(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// srawi r7,r11,24
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFF) != 0);
	ctx.r7.s64 = r11.s32 >> 24;
	// rlwimi r10,r11,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// rlwinm r10,r10,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// rlwimi r7,r10,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// srawi r10,r11,8
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = r11.s32 >> 8;
	// rlwinm r10,r10,0,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF00;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x831424b8
	if (!cr6.eq) goto loc_831424B8;
loc_831424B0:
	// divw r11,r31,r10
	r11.s32 = r31.s32 / ctx.r10.s32;
	// b 0x831424dc
	goto loc_831424DC;
loc_831424B8:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x831424b0
	if (cr6.eq) goto loc_831424B0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831424d8
	if (!cr6.eq) goto loc_831424D8;
	// srawi r11,r31,1
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	r11.s64 = r31.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// b 0x831424dc
	goto loc_831424DC;
loc_831424D8:
	// lis r11,32767
	r11.s64 = 2147418112;
loc_831424DC:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// add r3,r30,r3
	ctx.r3.u64 = r30.u64 + ctx.r3.u64;
loc_831424E4:
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831424E8"))) PPC_WEAK_FUNC(sub_831424E8);
PPC_FUNC_IMPL(__imp__sub_831424E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// addi r9,r9,15588
	ctx.r9.s64 = ctx.r9.s64 + 15588;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
loc_831424FC:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r7,r6,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x8314251c
	if (!cr0.eq) goto loc_8314251C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// bne cr6,0x831424fc
	if (!cr6.eq) goto loc_831424FC;
loc_8314251C:
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x8314255c
	if (cr0.eq) goto loc_8314255C;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// addi r10,r10,15584
	ctx.r10.s64 = ctx.r10.s64 + 15584;
loc_83142530:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x83142550
	if (!cr0.eq) goto loc_83142550;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x83142530
	if (!cr6.eq) goto loc_83142530;
loc_83142550:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr 
	if (!cr0.eq) return;
loc_8314255C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

