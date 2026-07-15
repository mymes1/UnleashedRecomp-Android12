#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8316D6A8"))) PPC_WEAK_FUNC(sub_8316D6A8);
PPC_FUNC_IMPL(__imp__sub_8316D6A8) {
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
	// lis r11,-32230
	r11.s64 = -2112225280;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,-32508
	r11.s64 = r11.s64 + -32508;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x8316d6d8
	if (cr0.eq) goto loc_8316D6D8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83168618
	sub_83168618(ctx, base);
loc_8316D6D8:
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

__attribute__((alias("__imp__sub_8316D6F0"))) PPC_WEAK_FUNC(sub_8316D6F0);
PPC_FUNC_IMPL(__imp__sub_8316D6F0) {
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
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8316d72c
	if (cr6.eq) goto loc_8316D72C;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-31672
	r11.s64 = r11.s64 + -31672;
	// addi r10,r10,-31864
	ctx.r10.s64 = ctx.r10.s64 + -31864;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r10,852(r31)
	PPC_STORE_U32(r31.u32 + 852, ctx.r10.u32);
loc_8316D72C:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// addi r11,r11,-31676
	r11.s64 = r11.s64 + -31676;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r10,r10,-31768
	ctx.r10.s64 = ctx.r10.s64 + -31768;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r3,r31,556
	ctx.r3.s64 = r31.s64 + 556;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// addi r11,r11,-836
	r11.s64 = r11.s64 + -836;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// bl 0x83172468
	sub_83172468(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,260
	ctx.r5.s64 = 260;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,296
	ctx.r3.s64 = r31.s64 + 296;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// stw r30,828(r31)
	PPC_STORE_U32(r31.u32 + 828, r30.u32);
	// stw r30,832(r31)
	PPC_STORE_U32(r31.u32 + 832, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,836(r31)
	PPC_STORE_U32(r31.u32 + 836, r30.u32);
	// stw r30,840(r31)
	PPC_STORE_U32(r31.u32 + 840, r30.u32);
	// stw r30,844(r31)
	PPC_STORE_U32(r31.u32 + 844, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316D7F0"))) PPC_WEAK_FUNC(sub_8316D7F0);
PPC_FUNC_IMPL(__imp__sub_8316D7F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// addi r10,r10,-31676
	ctx.r10.s64 = ctx.r10.s64 + -31676;
	// addi r8,r8,-31768
	ctx.r8.s64 = ctx.r8.s64 + -31768;
	// lwz r9,-836(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -836);
	// addi r3,r11,-296
	ctx.r3.s64 = r11.s64 + -296;
	// stw r10,-852(r11)
	PPC_STORE_U32(r11.u32 + -852, ctx.r10.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r8,-836(r10)
	PPC_STORE_U32(ctx.r10.u32 + -836, ctx.r8.u32);
	// lwz r10,-836(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -836);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r10,-836
	ctx.r10.s64 = ctx.r10.s64 + -836;
	// stw r10,-840(r11)
	PPC_STORE_U32(r11.u32 + -840, ctx.r10.u32);
	// b 0x82ea81c0
	sub_82EA81C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316D838"))) PPC_WEAK_FUNC(sub_8316D838);
PPC_FUNC_IMPL(__imp__sub_8316D838) {
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
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x831683b8
	sub_831683B8(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r3,r11,-29624
	ctx.r3.s64 = r11.s64 + -29624;
	// bl 0x83175578
	sub_83175578(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-29504
	ctx.r3.s64 = r11.s64 + -29504;
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x83172ac8
	sub_83172AC8(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,-29508(r11)
	PPC_STORE_U32(r11.u32 + -29508, ctx.r3.u32);
	// beq 0x8316d894
	if (cr0.eq) goto loc_8316D894;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8316d8ac
	if (cr6.eq) goto loc_8316D8AC;
loc_8316D894:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-31664
	ctx.r4.s64 = r11.s64 + -31664;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8316D8AC:
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

__attribute__((alias("__imp__sub_8316D8C0"))) PPC_WEAK_FUNC(sub_8316D8C0);
PPC_FUNC_IMPL(__imp__sub_8316D8C0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// lis r30,-31941
	r30.s64 = -2093285376;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r28,r11,-29936
	r28.s64 = r11.s64 + -29936;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,-29508(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -29508);
	// bl 0x83172a88
	sub_83172A88(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r27,r11,-29624
	r27.s64 = r11.s64 + -29624;
	// beq 0x8316d954
	if (cr0.eq) goto loc_8316D954;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-31632
	ctx.r4.s64 = r11.s64 + -31632;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_8316D90C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,-29508(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -29508);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r29,4(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x83172c18
	sub_83172C18(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r31,-4
	r11.s64 = r31.s64 + -4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8316d90c
	if (!cr6.eq) goto loc_8316D90C;
loc_8316D954:
	// lwz r3,-29508(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -29508);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316d970
	if (cr6.eq) goto loc_8316D970;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83172a18
	sub_83172A18(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,-29508(r30)
	PPC_STORE_U32(r30.u32 + -29508, r11.u32);
loc_8316D970:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831755f0
	sub_831755F0(ctx, base);
	// bl 0x83167fb0
	sub_83167FB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8316D988"))) PPC_WEAK_FUNC(sub_8316D988);
PPC_FUNC_IMPL(__imp__sub_8316D988) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r27,r11,-29624
	r27.s64 = r11.s64 + -29624;
	// addi r29,r10,-29936
	r29.s64 = ctx.r10.s64 + -29936;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316da0c
	if (cr6.eq) goto loc_8316DA0C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83172a88
	sub_83172A88(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8316da0c
	if (cr0.eq) goto loc_8316DA0C;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-31472
	ctx.r4.s64 = r11.s64 + -31472;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_8316D9D4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r28,4(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x83172c18
	sub_83172C18(ctx, base);
	// lwz r11,-4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// addi r3,r30,-4
	ctx.r3.s64 = r30.s64 + -4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x8316d9d4
	if (!cr6.eq) goto loc_8316D9D4;
loc_8316DA0C:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316da64
	if (cr6.eq) goto loc_8316DA64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83172a88
	sub_83172A88(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8316da64
	if (cr0.eq) goto loc_8316DA64;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-31552
	ctx.r4.s64 = r11.s64 + -31552;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_8316DA38:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r28,4(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// bl 0x83172c18
	sub_83172C18(ctx, base);
	// addi r3,r30,-4
	ctx.r3.s64 = r30.s64 + -4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x831759c0
	sub_831759C0(ctx, base);
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x8316da38
	if (!cr6.eq) goto loc_8316DA38;
loc_8316DA64:
	// lis r11,-31941
	r11.s64 = -2093285376;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// lwz r3,-29508(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -29508);
	// bl 0x83172c18
	sub_83172C18(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316da94
	if (cr6.eq) goto loc_8316DA94;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83172a18
	sub_83172A18(ctx, base);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
loc_8316DA94:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316daac
	if (cr6.eq) goto loc_8316DAAC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83172a18
	sub_83172A18(ctx, base);
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
loc_8316DAAC:
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 844);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316dad0
	if (cr6.eq) goto loc_8316DAD0;
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
	// stw r30,844(r31)
	PPC_STORE_U32(r31.u32 + 844, r30.u32);
loc_8316DAD0:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316daf4
	if (cr6.eq) goto loc_8316DAF4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
loc_8316DAF4:
	// lwz r3,840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 840);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316db0c
	if (cr6.eq) goto loc_8316DB0C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x83175638
	sub_83175638(ctx, base);
	// stw r30,840(r31)
	PPC_STORE_U32(r31.u32 + 840, r30.u32);
loc_8316DB0C:
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 832);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316db30
	if (cr6.eq) goto loc_8316DB30;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,832(r31)
	PPC_STORE_U32(r31.u32 + 832, r30.u32);
loc_8316DB30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8316DB38"))) PPC_WEAK_FUNC(sub_8316DB38);
PPC_FUNC_IMPL(__imp__sub_8316DB38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,-836(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -836);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,-836
	ctx.r3.s64 = r11.s64 + -836;
	// lwz r11,-836(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -836);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8316DB70"))) PPC_WEAK_FUNC(sub_8316DB70);
PPC_FUNC_IMPL(__imp__sub_8316DB70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,-836(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -836);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,-836
	ctx.r3.s64 = r11.s64 + -836;
	// lwz r11,-836(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -836);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8316DBA8"))) PPC_WEAK_FUNC(sub_8316DBA8);
PPC_FUNC_IMPL(__imp__sub_8316DBA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,-836(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -836);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,-836
	ctx.r3.s64 = r11.s64 + -836;
	// lwz r11,-836(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -836);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8316DBD8"))) PPC_WEAK_FUNC(sub_8316DBD8);
PPC_FUNC_IMPL(__imp__sub_8316DBD8) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 844);
	// bl 0x831765e0
	sub_831765E0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316dc30
	if (!cr6.eq) goto loc_8316DC30;
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 844);
	// bl 0x83176b98
	sub_83176B98(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8316dc30
	if (cr6.eq) goto loc_8316DC30;
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 844);
	// bl 0x83176b80
	sub_83176B80(ctx, base);
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// b 0x8316dc34
	goto loc_8316DC34;
loc_8316DC30:
	// li r3,3
	ctx.r3.s64 = 3;
loc_8316DC34:
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

__attribute__((alias("__imp__sub_8316DC48"))) PPC_WEAK_FUNC(sub_8316DC48);
PPC_FUNC_IMPL(__imp__sub_8316DC48) {
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
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r4,r10,-29624
	ctx.r4.s64 = ctx.r10.s64 + -29624;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x8316dc94
	if (cr6.eq) goto loc_8316DC94;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8316dc9c
	goto loc_8316DC9C;
loc_8316DC94:
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 844);
	// bl 0x83176cd0
	sub_83176CD0(ctx, base);
loc_8316DC9C:
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

__attribute__((alias("__imp__sub_8316DCB0"))) PPC_WEAK_FUNC(sub_8316DCB0);
PPC_FUNC_IMPL(__imp__sub_8316DCB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,840(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 840);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316DCB8"))) PPC_WEAK_FUNC(sub_8316DCB8);
PPC_FUNC_IMPL(__imp__sub_8316DCB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// addi r3,r3,-556
	ctx.r3.s64 = ctx.r3.s64 + -556;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316DCC8"))) PPC_WEAK_FUNC(sub_8316DCC8);
PPC_FUNC_IMPL(__imp__sub_8316DCC8) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8316dd24
	if (cr6.eq) goto loc_8316DD24;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-31392
	ctx.r4.s64 = r11.s64 + -31392;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316dd24
	if (!cr6.eq) goto loc_8316DD24;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
loc_8316DD24:
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

__attribute__((alias("__imp__sub_8316DD38"))) PPC_WEAK_FUNC(sub_8316DD38);
PPC_FUNC_IMPL(__imp__sub_8316DD38) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8316dd94
	if (cr6.eq) goto loc_8316DD94;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-31344
	ctx.r4.s64 = r11.s64 + -31344;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316dd94
	if (!cr6.eq) goto loc_8316DD94;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
loc_8316DD94:
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

__attribute__((alias("__imp__sub_8316DDA8"))) PPC_WEAK_FUNC(sub_8316DDA8);
PPC_FUNC_IMPL(__imp__sub_8316DDA8) {
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
	// addi r31,r3,-852
	r31.s64 = ctx.r3.s64 + -852;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8316dcc8
	sub_8316DCC8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831759c0
	sub_831759C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316dd38
	sub_8316DD38(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8316DDE8"))) PPC_WEAK_FUNC(sub_8316DDE8);
PPC_FUNC_IMPL(__imp__sub_8316DDE8) {
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
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,-836(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -836);
	// addi r4,r10,-29624
	ctx.r4.s64 = ctx.r10.s64 + -29624;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-836
	ctx.r3.s64 = r11.s64 + -836;
	// lwz r11,-836(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -836);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x8316de44
	if (cr6.eq) goto loc_8316DE44;
loc_8316DE34:
	// li r11,-1
	r11.s64 = -1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x8316de64
	goto loc_8316DE64;
loc_8316DE44:
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -8);
	// bl 0x83176c58
	sub_83176C58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8316de34
	if (cr0.eq) goto loc_8316DE34;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83176cd8
	sub_83176CD8(ctx, base);
loc_8316DE64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8316DE70"))) PPC_WEAK_FUNC(sub_8316DE70);
PPC_FUNC_IMPL(__imp__sub_8316DE70) {
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
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,-836(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -836);
	// addi r4,r10,-29624
	ctx.r4.s64 = ctx.r10.s64 + -29624;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-836
	ctx.r3.s64 = r11.s64 + -836;
	// lwz r11,-836(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -836);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x8316decc
	if (cr6.eq) goto loc_8316DECC;
loc_8316DEBC:
	// li r11,-1
	r11.s64 = -1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x8316deec
	goto loc_8316DEEC;
loc_8316DECC:
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -8);
	// bl 0x83176c58
	sub_83176C58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8316debc
	if (cr0.eq) goto loc_8316DEBC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83176cf0
	sub_83176CF0(ctx, base);
loc_8316DEEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8316DEF8"))) PPC_WEAK_FUNC(sub_8316DEF8);
PPC_FUNC_IMPL(__imp__sub_8316DEF8) {
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
	// lwz r3,844(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 844);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83176fc8
	sub_83176FC8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8316df38
	if (!cr6.eq) goto loc_8316DF38;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// std r9,8(r31)
	PPC_STORE_U64(r31.u32 + 8, ctx.r9.u64);
	// b 0x8316df48
	goto loc_8316DF48;
loc_8316DF38:
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
loc_8316DF48:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_8316DF60"))) PPC_WEAK_FUNC(sub_8316DF60);
PPC_FUNC_IMPL(__imp__sub_8316DF60) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,844(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 844);
	// b 0x83176c98
	sub_83176C98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316DF68"))) PPC_WEAK_FUNC(sub_8316DF68);
PPC_FUNC_IMPL(__imp__sub_8316DF68) {
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
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,-31280
	ctx.r5.s64 = r11.s64 + -31280;
	// li r3,312
	ctx.r3.s64 = 312;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8316dfa4
	if (cr0.eq) goto loc_8316DFA4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831763f8
	sub_831763F8(ctx, base);
	// b 0x8316dfa8
	goto loc_8316DFA8;
loc_8316DFA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8316DFA8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8316dfc4
	if (!cr6.eq) goto loc_8316DFC4;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,-31296
	ctx.r4.s64 = r11.s64 + -31296;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8316DFC4:
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

__attribute__((alias("__imp__sub_8316DFD8"))) PPC_WEAK_FUNC(sub_8316DFD8);
PPC_FUNC_IMPL(__imp__sub_8316DFD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8316dde8
	sub_8316DDE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316DFE8"))) PPC_WEAK_FUNC(sub_8316DFE8);
PPC_FUNC_IMPL(__imp__sub_8316DFE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8316dba8
	sub_8316DBA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316DFF8"))) PPC_WEAK_FUNC(sub_8316DFF8);
PPC_FUNC_IMPL(__imp__sub_8316DFF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8316dda8
	sub_8316DDA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316E008"))) PPC_WEAK_FUNC(sub_8316E008);
PPC_FUNC_IMPL(__imp__sub_8316E008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8316db70
	sub_8316DB70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316E018"))) PPC_WEAK_FUNC(sub_8316E018);
PPC_FUNC_IMPL(__imp__sub_8316E018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8316dcb8
	sub_8316DCB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316E028"))) PPC_WEAK_FUNC(sub_8316E028);
PPC_FUNC_IMPL(__imp__sub_8316E028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8316de70
	sub_8316DE70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316E038"))) PPC_WEAK_FUNC(sub_8316E038);
PPC_FUNC_IMPL(__imp__sub_8316E038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8316eaa0
	sub_8316EAA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316E048"))) PPC_WEAK_FUNC(sub_8316E048);
PPC_FUNC_IMPL(__imp__sub_8316E048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8316db38
	sub_8316DB38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316E058"))) PPC_WEAK_FUNC(sub_8316E058);
PPC_FUNC_IMPL(__imp__sub_8316E058) {
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
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,-29512(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29512);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,-29512(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29512, r11.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8316e0a4
	if (!cr6.eq) goto loc_8316E0A4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8316d838
	sub_8316D838(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8316e0a4
	if (cr6.eq) goto loc_8316E0A4;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8316E0A4:
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

__attribute__((alias("__imp__sub_8316E0B8"))) PPC_WEAK_FUNC(sub_8316E0B8);
PPC_FUNC_IMPL(__imp__sub_8316E0B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,-29512(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29512);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,-29512(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29512, r11.u32);
	// bnelr 
	if (!cr0.eq) return;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r3,r11,-29624
	ctx.r3.s64 = r11.s64 + -29624;
	// b 0x8316d8c0
	sub_8316D8C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316E0E0"))) PPC_WEAK_FUNC(sub_8316E0E0);
PPC_FUNC_IMPL(__imp__sub_8316E0E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E0E8"))) PPC_WEAK_FUNC(sub_8316E0E8);
PPC_FUNC_IMPL(__imp__sub_8316E0E8) {
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
	// li r11,0
	r11.s64 = 0;
	// addi r31,r3,-852
	r31.s64 = ctx.r3.s64 + -852;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316d988
	sub_8316D988(ctx, base);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x8316e138
	if (cr0.eq) goto loc_8316E138;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8316E138:
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

__attribute__((alias("__imp__sub_8316E150"))) PPC_WEAK_FUNC(sub_8316E150);
PPC_FUNC_IMPL(__imp__sub_8316E150) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8316e27c
	if (cr0.eq) goto loc_8316E27C;
	// stw r3,844(r31)
	PPC_STORE_U32(r31.u32 + 844, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831753d8
	sub_831753D8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,840(r31)
	PPC_STORE_U32(r31.u32 + 840, ctx.r3.u32);
	// bne 0x8316e1b0
	if (!cr0.eq) goto loc_8316E1B0;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-31120
	ctx.r4.s64 = r11.s64 + -31120;
	// b 0x8316e274
	goto loc_8316E274;
loc_8316E1B0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x831686d0
	sub_831686D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// beq 0x8316e26c
	if (cr0.eq) goto loc_8316E26C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316e26c
	if (!cr6.eq) goto loc_8316E26C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x83172ac8
	sub_83172AC8(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8316e260
	if (cr0.eq) goto loc_8316E260;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316e260
	if (!cr6.eq) goto loc_8316E260;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r31,200
	ctx.r3.s64 = r31.s64 + 200;
	// bl 0x83172ac8
	sub_83172AC8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8316e254
	if (cr0.eq) goto loc_8316E254;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316e254
	if (!cr6.eq) goto loc_8316E254;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r3,840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 840);
	// bl 0x83157968
	sub_83157968(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// addi r5,r10,-29936
	ctx.r5.s64 = ctx.r10.s64 + -29936;
	// lwz r3,-29508(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -29508);
	// bl 0x83172bd0
	sub_83172BD0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8316e288
	goto loc_8316E288;
loc_8316E254:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-31172
	ctx.r4.s64 = r11.s64 + -31172;
	// b 0x8316e274
	goto loc_8316E274;
loc_8316E260:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-31216
	ctx.r4.s64 = r11.s64 + -31216;
	// b 0x8316e274
	goto loc_8316E274;
loc_8316E26C:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-31268
	ctx.r4.s64 = r11.s64 + -31268;
loc_8316E274:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_8316E27C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316d988
	sub_8316D988(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8316E288:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E2A0"))) PPC_WEAK_FUNC(sub_8316E2A0);
PPC_FUNC_IMPL(__imp__sub_8316E2A0) {
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
	// addi r30,r31,-852
	r30.s64 = r31.s64 + -852;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8316dcc8
	sub_8316DCC8(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r11,-29624
	ctx.r5.s64 = r11.s64 + -29624;
	// addi r3,r31,-296
	ctx.r3.s64 = r31.s64 + -296;
	// bl 0x831724c0
	sub_831724C0(ctx, base);
	// lwz r10,-760(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + -760);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,-760(r31)
	PPC_STORE_U32(r31.u32 + -760, r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// bl 0x8316dd38
	sub_8316DD38(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8316E2F8"))) PPC_WEAK_FUNC(sub_8316E2F8);
PPC_FUNC_IMPL(__imp__sub_8316E2F8) {
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
	// addi r30,r31,-852
	r30.s64 = r31.s64 + -852;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8316dcc8
	sub_8316DCC8(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r3,r31,-296
	ctx.r3.s64 = r31.s64 + -296;
	// addi r4,r11,-29624
	ctx.r4.s64 = r11.s64 + -29624;
	// bl 0x831725f0
	sub_831725F0(ctx, base);
	// lwz r11,-760(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -760);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r10,-760(r31)
	PPC_STORE_U32(r31.u32 + -760, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// bl 0x8316dd38
	sub_8316DD38(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8316E350"))) PPC_WEAK_FUNC(sub_8316E350);
PPC_FUNC_IMPL(__imp__sub_8316E350) {
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
	// bl 0x8316dcc8
	sub_8316DCC8(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r3,r31,556
	ctx.r3.s64 = r31.s64 + 556;
	// addi r7,r11,-29624
	ctx.r7.s64 = r11.s64 + -29624;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83172858
	sub_83172858(ctx, base);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// bl 0x8316dd38
	sub_8316DD38(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8316E3B0"))) PPC_WEAK_FUNC(sub_8316E3B0);
PPC_FUNC_IMPL(__imp__sub_8316E3B0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8316dcc8
	sub_8316DCC8(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,-29936
	ctx.r5.s64 = r11.s64 + -29936;
	// bl 0x83172bd0
	sub_83172BD0(ctx, base);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// bl 0x8316dd38
	sub_8316DD38(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8316E400"))) PPC_WEAK_FUNC(sub_8316E400);
PPC_FUNC_IMPL(__imp__sub_8316E400) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8316dcc8
	sub_8316DCC8(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,-29936
	ctx.r5.s64 = r11.s64 + -29936;
	// bl 0x83172bd0
	sub_83172BD0(ctx, base);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// bl 0x8316dd38
	sub_8316DD38(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8316E450"))) PPC_WEAK_FUNC(sub_8316E450);
PPC_FUNC_IMPL(__imp__sub_8316E450) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8316dcc8
	sub_8316DCC8(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,-29936
	ctx.r5.s64 = r11.s64 + -29936;
	// bl 0x83172c18
	sub_83172C18(ctx, base);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// bl 0x8316dd38
	sub_8316DD38(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8316E4A0"))) PPC_WEAK_FUNC(sub_8316E4A0);
PPC_FUNC_IMPL(__imp__sub_8316E4A0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8316dcc8
	sub_8316DCC8(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,-29936
	ctx.r5.s64 = r11.s64 + -29936;
	// bl 0x83172c18
	sub_83172C18(ctx, base);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// bl 0x8316dd38
	sub_8316DD38(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8316E4F0"))) PPC_WEAK_FUNC(sub_8316E4F0);
PPC_FUNC_IMPL(__imp__sub_8316E4F0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8316e51c
	if (cr6.eq) goto loc_8316E51C;
	// stw r4,828(r31)
	PPC_STORE_U32(r31.u32 + 828, ctx.r4.u32);
	// b 0x8316e558
	goto loc_8316E558;
loc_8316E51C:
	// lwz r11,832(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 832);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8316e530
	if (cr6.eq) goto loc_8316E530;
	// stw r11,828(r31)
	PPC_STORE_U32(r31.u32 + 828, r11.u32);
	// b 0x8316e558
	goto loc_8316E558;
loc_8316E530:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8316d180
	sub_8316D180(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,832(r31)
	PPC_STORE_U32(r31.u32 + 832, ctx.r3.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316e5a4
	if (!cr6.eq) goto loc_8316E5A4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316e5a4
	if (cr6.eq) goto loc_8316E5A4;
	// stw r3,828(r31)
	PPC_STORE_U32(r31.u32 + 828, ctx.r3.u32);
loc_8316E558:
	// addi r30,r31,296
	r30.s64 = r31.s64 + 296;
	// mr r11,r29
	r11.u64 = r29.u64;
	// subf r10,r29,r30
	ctx.r10.s64 = r30.s64 - r29.s64;
loc_8316E564:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x8316e564
	if (!cr0.eq) goto loc_8316E564;
	// rotlwi r7,r27,0
	ctx.r7.u64 = __builtin_rotateleft32(r27.u32, 0);
	// lwz r4,828(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 828);
	// rotlwi r6,r28,0
	ctx.r6.u64 = __builtin_rotateleft32(r28.u32, 0);
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 844);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x83176e80
	sub_83176E80(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8316e5c8
	if (!cr0.eq) goto loc_8316E5C8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r30)
	PPC_STORE_U8(r30.u32 + 0, ctx.r10.u8);
	// b 0x8316e5b4
	goto loc_8316E5B4;
loc_8316E5A4:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-31072
	ctx.r4.s64 = r11.s64 + -31072;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_8316E5B4:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316e5c8
	if (!cr6.eq) goto loc_8316E5C8;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
loc_8316E5C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8316E5D0"))) PPC_WEAK_FUNC(sub_8316E5D0);
PPC_FUNC_IMPL(__imp__sub_8316E5D0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,-852
	r31.s64 = r30.s64 + -852;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316dcc8
	sub_8316DCC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316dbd8
	sub_8316DBD8(ctx, base);
	// lwz r11,-760(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -760);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r10,-760(r30)
	PPC_STORE_U32(r30.u32 + -760, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// bl 0x8316dd38
	sub_8316DD38(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8316E620"))) PPC_WEAK_FUNC(sub_8316E620);
PPC_FUNC_IMPL(__imp__sub_8316E620) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r4,r10,-29624
	ctx.r4.s64 = ctx.r10.s64 + -29624;
	// std r11,8(r30)
	PPC_STORE_U64(r30.u32 + 8, r11.u64);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r11,52(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x8316e6a0
	if (!cr6.eq) goto loc_8316E6A0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 844);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83176bb0
	sub_83176BB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8316e6a0
	if (!cr6.eq) goto loc_8316E6A0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// std r10,8(r30)
	PPC_STORE_U64(r30.u32 + 8, ctx.r10.u64);
	// b 0x8316e6a4
	goto loc_8316E6A4;
loc_8316E6A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8316E6A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8316E6B0"))) PPC_WEAK_FUNC(sub_8316E6B0);
PPC_FUNC_IMPL(__imp__sub_8316E6B0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8316e700
	if (!cr6.eq) goto loc_8316E700;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-31024
	ctx.r4.s64 = r11.s64 + -31024;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316e6f4
	if (!cr6.eq) goto loc_8316E6F4;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
loc_8316E6F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8316E6F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_8316E700:
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// std r11,8(r30)
	PPC_STORE_U64(r30.u32 + 8, r11.u64);
	// addi r4,r10,-29624
	ctx.r4.s64 = ctx.r10.s64 + -29624;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r11,52(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x8316e6f4
	if (!cr6.eq) goto loc_8316E6F4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 844);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83176fc8
	sub_83176FC8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8316e6f4
	if (!cr6.eq) goto loc_8316E6F4;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// std r10,8(r30)
	PPC_STORE_U64(r30.u32 + 8, ctx.r10.u64);
	// b 0x8316e6f8
	goto loc_8316E6F8;
}

__attribute__((alias("__imp__sub_8316E768"))) PPC_WEAK_FUNC(sub_8316E768);
PPC_FUNC_IMPL(__imp__sub_8316E768) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8316e7b8
	if (!cr6.eq) goto loc_8316E7B8;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-30992
	ctx.r4.s64 = r11.s64 + -30992;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316e7ac
	if (!cr6.eq) goto loc_8316E7AC;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r11.u32);
loc_8316E7AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8316E7B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
loc_8316E7B8:
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r4,r10,-29624
	ctx.r4.s64 = ctx.r10.s64 + -29624;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r11,52(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x8316e7ac
	if (!cr6.eq) goto loc_8316E7AC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,844(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 844);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83177050
	sub_83177050(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8316e7ac
	if (!cr6.eq) goto loc_8316E7AC;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// std r8,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r8.u64);
	// b 0x8316e7b0
	goto loc_8316E7B0;
}

__attribute__((alias("__imp__sub_8316E838"))) PPC_WEAK_FUNC(sub_8316E838);
PPC_FUNC_IMPL(__imp__sub_8316E838) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,-852
	r31.s64 = r30.s64 + -852;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316dcc8
	sub_8316DCC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316dc48
	sub_8316DC48(ctx, base);
	// lwz r11,-760(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -760);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r10,-760(r30)
	PPC_STORE_U32(r30.u32 + -760, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// bl 0x8316dd38
	sub_8316DD38(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8316E888"))) PPC_WEAK_FUNC(sub_8316E888);
PPC_FUNC_IMPL(__imp__sub_8316E888) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r5,844(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 844);
	// bl 0x831757e0
	sub_831757E0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8316e8c0
	if (!cr0.eq) goto loc_8316E8C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8316e964
	goto loc_8316E964;
loc_8316E8C0:
	// lis r11,-31941
	r11.s64 = -2093285376;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r30,r11,-29624
	r30.s64 = r11.s64 + -29624;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83175a88
	sub_83175A88(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x8316e950
	if (!cr6.eq) goto loc_8316E950;
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 844);
	// bl 0x83176c58
	sub_83176C58(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8316e950
	if (!cr6.eq) goto loc_8316E950;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 844);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83176da8
	sub_83176DA8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83175ac8
	sub_83175AC8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x83175b08
	sub_83175B08(ctx, base);
loc_8316E950:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316e400
	sub_8316E400(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8316E964:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8316E970"))) PPC_WEAK_FUNC(sub_8316E970);
PPC_FUNC_IMPL(__imp__sub_8316E970) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// li r5,259
	ctx.r5.s64 = 259;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r30.u8);
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// li r6,260
	ctx.r6.s64 = 260;
	// addi r7,r11,-29624
	ctx.r7.s64 = r11.s64 + -29624;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8316e350
	sub_8316E350(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,844(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 844);
	// bl 0x83176bb0
	sub_83176BB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8316e9f0
	if (!cr6.eq) goto loc_8316E9F0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// std r9,8(r31)
	PPC_STORE_U64(r31.u32 + 8, ctx.r9.u64);
	// b 0x8316ea00
	goto loc_8316EA00;
loc_8316E9F0:
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// std r30,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r30.u64);
loc_8316EA00:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8316EA08"))) PPC_WEAK_FUNC(sub_8316EA08);
PPC_FUNC_IMPL(__imp__sub_8316EA08) {
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
	// bl 0x8316dcc8
	sub_8316DCC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8316def8
	sub_8316DEF8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316dd38
	sub_8316DD38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8316EA50"))) PPC_WEAK_FUNC(sub_8316EA50);
PPC_FUNC_IMPL(__imp__sub_8316EA50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8316e838
	sub_8316E838(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316EA60"))) PPC_WEAK_FUNC(sub_8316EA60);
PPC_FUNC_IMPL(__imp__sub_8316EA60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8316e2f8
	sub_8316E2F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316EA70"))) PPC_WEAK_FUNC(sub_8316EA70);
PPC_FUNC_IMPL(__imp__sub_8316EA70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8316e5d0
	sub_8316E5D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316EA80"))) PPC_WEAK_FUNC(sub_8316EA80);
PPC_FUNC_IMPL(__imp__sub_8316EA80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8316e2a0
	sub_8316E2A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316EA90"))) PPC_WEAK_FUNC(sub_8316EA90);
PPC_FUNC_IMPL(__imp__sub_8316EA90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8316e0e8
	sub_8316E0E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316EAA0"))) PPC_WEAK_FUNC(sub_8316EAA0);
PPC_FUNC_IMPL(__imp__sub_8316EAA0) {
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
	// addi r31,r3,-852
	r31.s64 = ctx.r3.s64 + -852;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r31,852
	ctx.r3.s64 = r31.s64 + 852;
	// bl 0x8316d7f0
	sub_8316D7F0(ctx, base);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,-32508
	r11.s64 = r11.s64 + -32508;
	// stw r11,852(r31)
	PPC_STORE_U32(r31.u32 + 852, r11.u32);
	// beq 0x8316eae4
	if (cr0.eq) goto loc_8316EAE4;
	// li r4,856
	ctx.r4.s64 = 856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83168618
	sub_83168618(ctx, base);
loc_8316EAE4:
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

__attribute__((alias("__imp__sub_8316EB00"))) PPC_WEAK_FUNC(sub_8316EB00);
PPC_FUNC_IMPL(__imp__sub_8316EB00) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// bne cr6,0x8316eb34
	if (!cr6.eq) goto loc_8316EB34;
	// li r11,-2
	r11.s64 = -2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x8316ebd4
	goto loc_8316EBD4;
loc_8316EB34:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,-30948
	ctx.r5.s64 = r11.s64 + -30948;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,856
	ctx.r3.s64 = 856;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8316eb60
	if (cr0.eq) goto loc_8316EB60;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8316d6f0
	sub_8316D6F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8316EB60:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8316eb8c
	if (!cr6.eq) goto loc_8316EB8C;
	// li r11,-3
	r11.s64 = -3;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r10,-30960
	ctx.r4.s64 = ctx.r10.s64 + -30960;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
loc_8316EB84:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8316ebd4
	goto loc_8316EBD4;
loc_8316EB8C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316e150
	sub_8316E150(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8316ebd0
	if (!cr0.eq) goto loc_8316EBD0;
	// li r11,-1
	r11.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8316eb84
	goto loc_8316EB84;
loc_8316EBD0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8316EBD4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8316EBE0"))) PPC_WEAK_FUNC(sub_8316EBE0);
PPC_FUNC_IMPL(__imp__sub_8316EBE0) {
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
	// lwz r11,828(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 828);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8316ec20
	if (!cr6.eq) goto loc_8316EC20;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-30840
	ctx.r4.s64 = r11.s64 + -30840;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316ecd8
	if (!cr6.eq) goto loc_8316ECD8;
	// li r11,-1
	r11.s64 = -1;
	// b 0x8316ecd4
	goto loc_8316ECD4;
loc_8316EC20:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x83177670
	sub_83177670(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8316ecb4
	if (cr0.eq) goto loc_8316ECB4;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316ecb4
	if (!cr6.eq) goto loc_8316ECB4;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r29,r11,-29624
	r29.s64 = r11.s64 + -29624;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x83178130
	sub_83178130(ctx, base);
	// lwz r3,828(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 828);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x8316eca8
	if (cr0.eq) goto loc_8316ECA8;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316eca8
	if (!cr6.eq) goto loc_8316ECA8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83178170
	sub_83178170(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316e3b0
	sub_8316E3B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8316ecdc
	goto loc_8316ECDC;
loc_8316ECA8:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-30880
	ctx.r4.s64 = r11.s64 + -30880;
	// b 0x8316ecbc
	goto loc_8316ECBC;
loc_8316ECB4:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-30924
	ctx.r4.s64 = r11.s64 + -30924;
loc_8316ECBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316ecd8
	if (!cr6.eq) goto loc_8316ECD8;
	// li r11,-3
	r11.s64 = -3;
loc_8316ECD4:
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
loc_8316ECD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8316ECDC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8316ECE8"))) PPC_WEAK_FUNC(sub_8316ECE8);
PPC_FUNC_IMPL(__imp__sub_8316ECE8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,-852
	r31.s64 = r30.s64 + -852;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316dcc8
	sub_8316DCC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8316def8
	sub_8316DEF8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316dd38
	sub_8316DD38(ctx, base);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x8316ed60
	if (!cr6.eq) goto loc_8316ED60;
	// li r11,-1
	r11.s64 = -1;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// clrlwi r6,r29,16
	ctx.r6.u64 = r29.u32 & 0xFFFF;
	// addi r4,r10,-30760
	ctx.r4.s64 = ctx.r10.s64 + -30760;
	// addi r5,r30,-556
	ctx.r5.s64 = r30.s64 + -556;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831684d0
	sub_831684D0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8316ed64
	goto loc_8316ED64;
loc_8316ED60:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8316ED64:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8316ED70"))) PPC_WEAK_FUNC(sub_8316ED70);
PPC_FUNC_IMPL(__imp__sub_8316ED70) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,-852
	r31.s64 = r30.s64 + -852;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316dcc8
	sub_8316DCC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8316def8
	sub_8316DEF8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316dd38
	sub_8316DD38(ctx, base);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x8316ede8
	if (!cr6.eq) goto loc_8316EDE8;
	// li r11,-1
	r11.s64 = -1;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// clrlwi r6,r29,16
	ctx.r6.u64 = r29.u32 & 0xFFFF;
	// addi r4,r10,-30688
	ctx.r4.s64 = ctx.r10.s64 + -30688;
	// addi r5,r30,-556
	ctx.r5.s64 = r30.s64 + -556;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831684d0
	sub_831684D0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8316edec
	goto loc_8316EDEC;
loc_8316EDE8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8316EDEC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8316EDF8"))) PPC_WEAK_FUNC(sub_8316EDF8);
PPC_FUNC_IMPL(__imp__sub_8316EDF8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,-852
	r31.s64 = r30.s64 + -852;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// bl 0x8316dcc8
	sub_8316DCC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8316e4f0
	sub_8316E4F0(ctx, base);
	// lwz r10,-760(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -760);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-760(r30)
	PPC_STORE_U32(r30.u32 + -760, r11.u32);
	// stw r10,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// bl 0x8316dd38
	sub_8316DD38(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_8316EE60"))) PPC_WEAK_FUNC(sub_8316EE60);
PPC_FUNC_IMPL(__imp__sub_8316EE60) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,-852
	r31.s64 = r30.s64 + -852;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x8316dcc8
	sub_8316DCC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8316e620
	sub_8316E620(ctx, base);
	// lwz r11,-760(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -760);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r10,-760(r30)
	PPC_STORE_U32(r30.u32 + -760, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// bl 0x8316dd38
	sub_8316DD38(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8316EEC0"))) PPC_WEAK_FUNC(sub_8316EEC0);
PPC_FUNC_IMPL(__imp__sub_8316EEC0) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,-852
	r31.s64 = r30.s64 + -852;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x8316dcc8
	sub_8316DCC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8316e6b0
	sub_8316E6B0(ctx, base);
	// lwz r11,-760(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -760);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r10,-760(r30)
	PPC_STORE_U32(r30.u32 + -760, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// bl 0x8316dd38
	sub_8316DD38(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8316EF20"))) PPC_WEAK_FUNC(sub_8316EF20);
PPC_FUNC_IMPL(__imp__sub_8316EF20) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,-852
	r31.s64 = r30.s64 + -852;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x8316dcc8
	sub_8316DCC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8316e768
	sub_8316E768(ctx, base);
	// lwz r11,-760(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -760);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r10,-760(r30)
	PPC_STORE_U32(r30.u32 + -760, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// bl 0x8316dd38
	sub_8316DD38(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8316EF80"))) PPC_WEAK_FUNC(sub_8316EF80);
PPC_FUNC_IMPL(__imp__sub_8316EF80) {
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
	// addi r31,r3,-852
	r31.s64 = ctx.r3.s64 + -852;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x8316dcc8
	sub_8316DCC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8316e888
	sub_8316E888(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316dd38
	sub_8316DD38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8316EFD0"))) PPC_WEAK_FUNC(sub_8316EFD0);
PPC_FUNC_IMPL(__imp__sub_8316EFD0) {
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
	// bl 0x8316dcc8
	sub_8316DCC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8316e970
	sub_8316E970(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316dd38
	sub_8316DD38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8316F018"))) PPC_WEAK_FUNC(sub_8316F018);
PPC_FUNC_IMPL(__imp__sub_8316F018) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x8316eb00
	sub_8316EB00(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8316f064
	if (cr0.eq) goto loc_8316F064;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316f064
	if (!cr6.eq) goto loc_8316F064;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// b 0x8316f070
	goto loc_8316F070;
loc_8316F064:
	// li r11,-1
	r11.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8316F070:
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

__attribute__((alias("__imp__sub_8316F088"))) PPC_WEAK_FUNC(sub_8316F088);
PPC_FUNC_IMPL(__imp__sub_8316F088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8316ece8
	sub_8316ECE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316F098"))) PPC_WEAK_FUNC(sub_8316F098);
PPC_FUNC_IMPL(__imp__sub_8316F098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8316ef20
	sub_8316EF20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316F0A8"))) PPC_WEAK_FUNC(sub_8316F0A8);
PPC_FUNC_IMPL(__imp__sub_8316F0A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8316ee60
	sub_8316EE60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316F0B8"))) PPC_WEAK_FUNC(sub_8316F0B8);
PPC_FUNC_IMPL(__imp__sub_8316F0B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8316edf8
	sub_8316EDF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316F0C8"))) PPC_WEAK_FUNC(sub_8316F0C8);
PPC_FUNC_IMPL(__imp__sub_8316F0C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8316ed70
	sub_8316ED70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316F0D8"))) PPC_WEAK_FUNC(sub_8316F0D8);
PPC_FUNC_IMPL(__imp__sub_8316F0D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8316eec0
	sub_8316EEC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316F0E8"))) PPC_WEAK_FUNC(sub_8316F0E8);
PPC_FUNC_IMPL(__imp__sub_8316F0E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8316ef80
	sub_8316EF80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316F0F8"))) PPC_WEAK_FUNC(sub_8316F0F8);
PPC_FUNC_IMPL(__imp__sub_8316F0F8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,-852
	r31.s64 = r30.s64 + -852;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316dcc8
	sub_8316DCC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316ebe0
	sub_8316EBE0(ctx, base);
	// lwz r11,-760(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -760);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r10,-760(r30)
	PPC_STORE_U32(r30.u32 + -760, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// bl 0x8316dd38
	sub_8316DD38(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8316F148"))) PPC_WEAK_FUNC(sub_8316F148);
PPC_FUNC_IMPL(__imp__sub_8316F148) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,-852
	r31.s64 = r30.s64 + -852;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316dcc8
	sub_8316DCC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8316e970
	sub_8316E970(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316dd38
	sub_8316DD38(ctx, base);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x8316f1c0
	if (!cr6.eq) goto loc_8316F1C0;
	// li r11,-1
	r11.s64 = -1;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r4,r10,-30616
	ctx.r4.s64 = ctx.r10.s64 + -30616;
	// addi r5,r30,-556
	ctx.r5.s64 = r30.s64 + -556;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831684d0
	sub_831684D0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8316f1c4
	goto loc_8316F1C4;
loc_8316F1C0:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8316F1C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8316F1D0"))) PPC_WEAK_FUNC(sub_8316F1D0);
PPC_FUNC_IMPL(__imp__sub_8316F1D0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,-852
	r31.s64 = r30.s64 + -852;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316dcc8
	sub_8316DCC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8316e970
	sub_8316E970(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316dd38
	sub_8316DD38(ctx, base);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x8316f248
	if (!cr6.eq) goto loc_8316F248;
	// li r11,-1
	r11.s64 = -1;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r4,r10,-30544
	ctx.r4.s64 = ctx.r10.s64 + -30544;
	// addi r5,r30,-556
	ctx.r5.s64 = r30.s64 + -556;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831684d0
	sub_831684D0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8316f24c
	goto loc_8316F24C;
loc_8316F248:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8316F24C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8316F258"))) PPC_WEAK_FUNC(sub_8316F258);
PPC_FUNC_IMPL(__imp__sub_8316F258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8316f0f8
	sub_8316F0F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316F268"))) PPC_WEAK_FUNC(sub_8316F268);
PPC_FUNC_IMPL(__imp__sub_8316F268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8316f1d0
	sub_8316F1D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316F278"))) PPC_WEAK_FUNC(sub_8316F278);
PPC_FUNC_IMPL(__imp__sub_8316F278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8316f148
	sub_8316F148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316F288"))) PPC_WEAK_FUNC(sub_8316F288);
PPC_FUNC_IMPL(__imp__sub_8316F288) {
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
	// lis r11,-32230
	r11.s64 = -2112225280;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,-30476
	r11.s64 = r11.s64 + -30476;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x8316f2b8
	if (cr0.eq) goto loc_8316F2B8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83168618
	sub_83168618(ctx, base);
loc_8316F2B8:
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

__attribute__((alias("__imp__sub_8316F2D0"))) PPC_WEAK_FUNC(sub_8316F2D0);
PPC_FUNC_IMPL(__imp__sub_8316F2D0) {
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
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x831683b8
	sub_831683B8(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-29400
	ctx.r3.s64 = r11.s64 + -29400;
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x83172ac8
	sub_83172AC8(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,-29404(r11)
	PPC_STORE_U32(r11.u32 + -29404, ctx.r3.u32);
	// beq 0x8316f320
	if (cr0.eq) goto loc_8316F320;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8316f338
	if (cr6.eq) goto loc_8316F338;
loc_8316F320:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-32424
	ctx.r4.s64 = r11.s64 + -32424;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8316F338:
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

__attribute__((alias("__imp__sub_8316F350"))) PPC_WEAK_FUNC(sub_8316F350);
PPC_FUNC_IMPL(__imp__sub_8316F350) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// lis r30,-31941
	r30.s64 = -2093285376;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r28,r11,-29936
	r28.s64 = r11.s64 + -29936;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,-29404(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -29404);
	// bl 0x83172a88
	sub_83172A88(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8316f3c4
	if (cr0.eq) goto loc_8316F3C4;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r27,r11,-29624
	r27.s64 = r11.s64 + -29624;
loc_8316F38C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,-29404(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -29404);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r29,4(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x83172c18
	sub_83172C18(ctx, base);
	// lwz r11,-4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8316f38c
	if (!cr6.eq) goto loc_8316F38C;
loc_8316F3C4:
	// lwz r3,-29404(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -29404);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316f3e0
	if (cr6.eq) goto loc_8316F3E0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83172a18
	sub_83172A18(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,-29404(r30)
	PPC_STORE_U32(r30.u32 + -29404, r11.u32);
loc_8316F3E0:
	// bl 0x83167fb0
	sub_83167FB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8316F3F0"))) PPC_WEAK_FUNC(sub_8316F3F0);
PPC_FUNC_IMPL(__imp__sub_8316F3F0) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r31,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r31.u32);
	// addi r5,r11,-30300
	ctx.r5.s64 = r11.s64 + -30300;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8316f488
	if (cr0.eq) goto loc_8316F488;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// addi r11,r11,-30420
	r11.s64 = r11.s64 + -30420;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r31.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// std r9,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r9.u64);
	// std r31,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, r31.u64);
	// std r31,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, r31.u64);
	// std r31,56(r3)
	PPC_STORE_U64(ctx.r3.u32 + 56, r31.u64);
	// stw r31,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, r31.u32);
	// stw r31,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, r31.u32);
	// stw r31,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r31.u32);
	// stw r31,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, r31.u32);
	// stw r31,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r31.u32);
	// stw r31,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, r31.u32);
	// b 0x8316f48c
	goto loc_8316F48C;
loc_8316F488:
	// mr r30,r31
	r30.u64 = r31.u64;
loc_8316F48C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8316f4ac
	if (!cr6.eq) goto loc_8316F4AC;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,-30312
	ctx.r4.s64 = r11.s64 + -30312;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// b 0x8316f534
	goto loc_8316F534;
loc_8316F4AC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83168890
	sub_83168890(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8316f500
	if (cr0.eq) goto loc_8316F500;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316f500
	if (!cr6.eq) goto loc_8316F500;
	// stw r31,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r31.u32);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// stw r31,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r31.u32);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// stw r31,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r31.u32);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// stw r31,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r31.u32);
	// addi r5,r10,-29936
	ctx.r5.s64 = ctx.r10.s64 + -29936;
	// lwz r3,-29404(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -29404);
	// bl 0x83172bd0
	sub_83172BD0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8316f538
	goto loc_8316F538;
loc_8316F500:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-30364
	ctx.r4.s64 = r11.s64 + -30364;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r10,-29624
	ctx.r4.s64 = ctx.r10.s64 + -29624;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8316F534:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8316F538:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8316F540"))) PPC_WEAK_FUNC(sub_8316F540);
PPC_FUNC_IMPL(__imp__sub_8316F540) {
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
	// li r29,0
	r29.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r29,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r29.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// bne cr6,0x8316f568
	if (!cr6.eq) goto loc_8316F568;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_8316F568:
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r30,r11,-29936
	r30.s64 = r11.s64 + -29936;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,-29404(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29404);
	// bl 0x83172c18
	sub_83172C18(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316f5a8
	if (cr6.eq) goto loc_8316F5A8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r4,r10,-29624
	ctx.r4.s64 = ctx.r10.s64 + -29624;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r29.u32);
loc_8316F5A8:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316f5cc
	if (cr6.eq) goto loc_8316F5CC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
loc_8316F5CC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8316F5F0"))) PPC_WEAK_FUNC(sub_8316F5F0);
PPC_FUNC_IMPL(__imp__sub_8316F5F0) {
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
	// lis r30,-32230
	r30.s64 = -2112225280;
	// li r28,0
	r28.s64 = 0;
	// addi r29,r30,-30280
	r29.s64 = r30.s64 + -30280;
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r28.u32);
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// lwz r30,-30280(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + -30280);
	// addi r5,r3,88
	ctx.r5.s64 = ctx.r3.s64 + 88;
	// stw r30,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, r30.u32);
	// addi r8,r3,102
	ctx.r8.s64 = ctx.r3.s64 + 102;
	// lhz r30,4(r29)
	r30.u64 = PPC_LOAD_U16(r29.u32 + 4);
	// li r10,9
	ctx.r10.s64 = 9;
	// sth r30,92(r3)
	PPC_STORE_U16(ctx.r3.u32 + 92, r30.u16);
	// lbz r30,6(r29)
	r30.u64 = PPC_LOAD_U8(r29.u32 + 6);
	// li r29,10
	r29.s64 = 10;
	// stb r30,94(r3)
	PPC_STORE_U8(ctx.r3.u32 + 94, r30.u8);
loc_8316F63C:
	// divwu r30,r11,r29
	r30.u32 = r11.u32 / r29.u32;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mulli r30,r30,10
	r30.s64 = r30.s64 * 10;
	// subf r30,r30,r11
	r30.s64 = r11.s64 - r30.s64;
	// divwu r11,r11,r29
	r11.u32 = r11.u32 / r29.u32;
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// stb r30,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r30.u8);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// bne 0x8316f63c
	if (!cr0.eq) goto loc_8316F63C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpdi cr6,r7,-1
	cr6.compare<int64_t>(ctx.r7.s64, -1, xer);
	// stb r28,103(r3)
	PPC_STORE_U8(ctx.r3.u32 + 103, r28.u8);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// bne cr6,0x8316f690
	if (!cr6.eq) goto loc_8316F690;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// addi r8,r10,-29624
	ctx.r8.s64 = ctx.r10.s64 + -29624;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8316f6a4
	goto loc_8316F6A4;
loc_8316F690:
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// addi r10,r10,-29624
	ctx.r10.s64 = ctx.r10.s64 + -29624;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8316F6A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8316F6B0"))) PPC_WEAK_FUNC(sub_8316F6B0);
PPC_FUNC_IMPL(__imp__sub_8316F6B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8316F6D8"))) PPC_WEAK_FUNC(sub_8316F6D8);
PPC_FUNC_IMPL(__imp__sub_8316F6D8) {
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
	// li r11,0
	r11.s64 = 0;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x8316f704
	if (cr6.eq) goto loc_8316F704;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_8316F704:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8316f718
	if (!cr6.eq) goto loc_8316F718;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x8316f774
	goto loc_8316F774;
loc_8316F718:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r30,r11,-29624
	r30.s64 = r11.s64 + -29624;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,40(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8316f754
	if (cr0.eq) goto loc_8316F754;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8316F754:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
loc_8316F774:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F790"))) PPC_WEAK_FUNC(sub_8316F790);
PPC_FUNC_IMPL(__imp__sub_8316F790) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8316f7ec
	if (cr6.eq) goto loc_8316F7EC;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-30272
	ctx.r4.s64 = r11.s64 + -30272;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316f7ec
	if (!cr6.eq) goto loc_8316F7EC;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_8316F7EC:
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

__attribute__((alias("__imp__sub_8316F800"))) PPC_WEAK_FUNC(sub_8316F800);
PPC_FUNC_IMPL(__imp__sub_8316F800) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8316f85c
	if (cr6.eq) goto loc_8316F85C;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-30224
	ctx.r4.s64 = r11.s64 + -30224;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316f85c
	if (!cr6.eq) goto loc_8316F85C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_8316F85C:
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

__attribute__((alias("__imp__sub_8316F870"))) PPC_WEAK_FUNC(sub_8316F870);
PPC_FUNC_IMPL(__imp__sub_8316F870) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x8316f3f0
	sub_8316F3F0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8316f8a8
	if (cr0.eq) goto loc_8316F8A8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8316f8b0
	if (cr6.eq) goto loc_8316F8B0;
loc_8316F8A8:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8316F8B0:
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

__attribute__((alias("__imp__sub_8316F8C8"))) PPC_WEAK_FUNC(sub_8316F8C8);
PPC_FUNC_IMPL(__imp__sub_8316F8C8) {
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
	// lis r11,-32230
	r11.s64 = -2112225280;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,-30476
	r11.s64 = r11.s64 + -30476;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x8316f8f8
	if (cr0.eq) goto loc_8316F8F8;
	// li r4,104
	ctx.r4.s64 = 104;
	// bl 0x83168618
	sub_83168618(ctx, base);
loc_8316F8F8:
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

__attribute__((alias("__imp__sub_8316F910"))) PPC_WEAK_FUNC(sub_8316F910);
PPC_FUNC_IMPL(__imp__sub_8316F910) {
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
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,-29408(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29408);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,-29408(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29408, r11.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8316f95c
	if (!cr6.eq) goto loc_8316F95C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8316f2d0
	sub_8316F2D0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8316f95c
	if (cr6.eq) goto loc_8316F95C;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8316F95C:
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

__attribute__((alias("__imp__sub_8316F970"))) PPC_WEAK_FUNC(sub_8316F970);
PPC_FUNC_IMPL(__imp__sub_8316F970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,-29408(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29408);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,-29408(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29408, r11.u32);
	// bnelr 
	if (!cr0.eq) return;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r3,r11,-29624
	ctx.r3.s64 = r11.s64 + -29624;
	// b 0x8316f350
	sub_8316F350(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316F998"))) PPC_WEAK_FUNC(sub_8316F998);
PPC_FUNC_IMPL(__imp__sub_8316F998) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F9A0"))) PPC_WEAK_FUNC(sub_8316F9A0);
PPC_FUNC_IMPL(__imp__sub_8316F9A0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8316f790
	sub_8316F790(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// bl 0x8316f800
	sub_8316F800(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8316F9E0"))) PPC_WEAK_FUNC(sub_8316F9E0);
PPC_FUNC_IMPL(__imp__sub_8316F9E0) {
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
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// stw r4,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r4.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316fa34
	if (cr6.eq) goto loc_8316FA34;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8316fa34
	if (cr6.eq) goto loc_8316FA34;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8316fa34
	if (!cr6.eq) goto loc_8316FA34;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_8316FA34:
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

__attribute__((alias("__imp__sub_8316FA48"))) PPC_WEAK_FUNC(sub_8316FA48);
PPC_FUNC_IMPL(__imp__sub_8316FA48) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8316f790
	sub_8316F790(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// ld r29,32(r31)
	r29.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// bl 0x8316f800
	sub_8316F800(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8316FA88"))) PPC_WEAK_FUNC(sub_8316FA88);
PPC_FUNC_IMPL(__imp__sub_8316FA88) {
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
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// std r4,32(r31)
	PPC_STORE_U64(r31.u32 + 32, ctx.r4.u64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316fadc
	if (cr6.eq) goto loc_8316FADC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8316fadc
	if (cr6.eq) goto loc_8316FADC;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8316fadc
	if (!cr6.eq) goto loc_8316FADC;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_8316FADC:
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

__attribute__((alias("__imp__sub_8316FAF0"))) PPC_WEAK_FUNC(sub_8316FAF0);
PPC_FUNC_IMPL(__imp__sub_8316FAF0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8316fe10
	if (cr6.eq) goto loc_8316FE10;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8316fe10
	if (cr6.eq) goto loc_8316FE10;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x8316fe10
	if (cr6.eq) goto loc_8316FE10;
	// cmpdi cr6,r26,0
	cr6.compare<int64_t>(r26.s64, 0, xer);
	// blt cr6,0x8316fe04
	if (cr6.lt) goto loc_8316FE04;
	// cmpdi cr6,r25,0
	cr6.compare<int64_t>(r25.s64, 0, xer);
	// blt cr6,0x8316fe04
	if (cr6.lt) goto loc_8316FE04;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r23,-1
	r23.s64 = -1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8316fb70
	if (!cr6.eq) goto loc_8316FB70;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-29824
	ctx.r4.s64 = r11.s64 + -29824;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316fb70
	if (!cr6.eq) goto loc_8316FB70;
	// stw r23,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r23.u32);
loc_8316FB70:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// li r30,0
	r30.s64 = 0;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// stw r29,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r29.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// std r30,40(r31)
	PPC_STORE_U64(r31.u32 + 40, r30.u64);
	// addi r29,r11,-29624
	r29.s64 = r11.s64 + -29624;
	// stw r30,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r30.u32);
	// beq cr6,0x8316fbb0
	if (cr6.eq) goto loc_8316FBB0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
loc_8316FBB0:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8316fde0
	if (cr0.eq) goto loc_8316FDE0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316fde0
	if (!cr6.eq) goto loc_8316FDE0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// ld r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8316fc7c
	if (cr6.eq) goto loc_8316FC7C;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,-29880
	ctx.r4.s64 = r11.s64 + -29880;
loc_8316FC48:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
loc_8316FC50:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316fc60
	if (!cr6.eq) goto loc_8316FC60;
	// stw r23,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r23.u32);
loc_8316FC60:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8316fe34
	goto loc_8316FE34;
loc_8316FC7C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8316fcb8
	if (cr6.eq) goto loc_8316FCB8;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// rotlwi r5,r26,0
	ctx.r5.u64 = __builtin_rotateleft32(r26.u32, 0);
	// addi r4,r11,-29932
	ctx.r4.s64 = r11.s64 + -29932;
	// b 0x8316fc48
	goto loc_8316FC48;
loc_8316FCB8:
	// cmpdi cr6,r27,0
	cr6.compare<int64_t>(r27.s64, 0, xer);
	// bge cr6,0x8316fcc8
	if (!cr6.lt) goto loc_8316FCC8;
	// mr r28,r25
	r28.u64 = r25.u64;
	// b 0x8316fd54
	goto loc_8316FD54;
loc_8316FCC8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r28,r27
	r28.u64 = r27.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// ld r11,88(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpd cr6,r11,r27
	cr6.compare<int64_t>(r11.s64, r27.s64, xer);
	// bge cr6,0x8316fd54
	if (!cr6.lt) goto loc_8316FD54;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8316FD54:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8316fd90
	if (cr6.eq) goto loc_8316FD90;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// rotlwi r5,r28,0
	ctx.r5.u64 = __builtin_rotateleft32(r28.u32, 0);
	// addi r4,r11,-29992
	ctx.r4.s64 = r11.s64 + -29992;
	// b 0x8316fc48
	goto loc_8316FC48;
loc_8316FD90:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8316fdc8
	if (cr6.eq) goto loc_8316FDC8;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-30040
	ctx.r4.s64 = r11.s64 + -30040;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// b 0x8316fc50
	goto loc_8316FC50;
loc_8316FDC8:
	// li r11,1
	r11.s64 = 1;
	// std r27,48(r31)
	PPC_STORE_U64(r31.u32 + 48, r27.u64);
	// std r25,56(r31)
	PPC_STORE_U64(r31.u32 + 56, r25.u64);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// b 0x8316fe34
	goto loc_8316FE34;
loc_8316FDE0:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-30096
	ctx.r4.s64 = r11.s64 + -30096;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316fe34
	if (!cr6.eq) goto loc_8316FE34;
	// stw r23,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r23.u32);
	// b 0x8316fe34
	goto loc_8316FE34;
loc_8316FE04:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-30140
	ctx.r4.s64 = r11.s64 + -30140;
	// b 0x8316fe18
	goto loc_8316FE18;
loc_8316FE10:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-30176
	ctx.r4.s64 = r11.s64 + -30176;
loc_8316FE18:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316fe34
	if (!cr6.eq) goto loc_8316FE34;
	// li r11,-2
	r11.s64 = -2;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_8316FE34:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_8316FE40"))) PPC_WEAK_FUNC(sub_8316FE40);
PPC_FUNC_IMPL(__imp__sub_8316FE40) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r25,r26
	r25.u64 = r26.u64;
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8316ffe8
	if (cr6.eq) goto loc_8316FFE8;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8316ffe8
	if (!cr6.eq) goto loc_8316FFE8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r30,r10,-29624
	r30.s64 = ctx.r10.s64 + -29624;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,52(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,56(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,60(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,92(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// std r3,40(r31)
	PPC_STORE_U64(r31.u32 + 40, ctx.r3.u64);
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// beq cr6,0x8316ffe4
	if (cr6.eq) goto loc_8316FFE4;
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(r28.s32, 1, xer);
	// beq cr6,0x8316ffe4
	if (cr6.eq) goto loc_8316FFE4;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// beq cr6,0x8316ffe4
	if (cr6.eq) goto loc_8316FFE4;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// bne cr6,0x8316ff30
	if (!cr6.eq) goto loc_8316FF30;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_8316FF30:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316ff54
	if (cr6.eq) goto loc_8316FF54;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r26,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r26.u32);
loc_8316FF54:
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8316ff6c
	if (cr6.eq) goto loc_8316FF6C;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// b 0x8316ffe8
	goto loc_8316FFE8;
loc_8316FF6C:
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// beq cr6,0x8316ffc8
	if (cr6.eq) goto loc_8316FFC8;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(r28.s32, 4, xer);
	// beq cr6,0x8316ffc8
	if (cr6.eq) goto loc_8316FFC8;
	// cmpwi cr6,r27,4
	cr6.compare<int32_t>(r27.s32, 4, xer);
	// beq cr6,0x8316ffc8
	if (cr6.eq) goto loc_8316FFC8;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(r27.s32, 2, xer);
	// bne cr6,0x8316ffe4
	if (!cr6.eq) goto loc_8316FFE4;
	// ld r11,48(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 48);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// bge cr6,0x8316ffd8
	if (!cr6.lt) goto loc_8316FFD8;
	// ld r11,56(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 56);
	// cmpd cr6,r11,r25
	cr6.compare<int64_t>(r11.s64, r25.s64, xer);
	// bge cr6,0x8316ffd8
	if (!cr6.lt) goto loc_8316FFD8;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-29744
	ctx.r4.s64 = r11.s64 + -29744;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316ffc8
	if (!cr6.eq) goto loc_8316FFC8;
	// li r11,-2
	r11.s64 = -2;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_8316FFC8:
	// li r11,3
	r11.s64 = 3;
	// li r3,3
	ctx.r3.s64 = 3;
loc_8316FFD0:
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x8316ffe8
	goto loc_8316FFE8;
loc_8316FFD8:
	// li r11,2
	r11.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8316ffd0
	goto loc_8316FFD0;
loc_8316FFE4:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_8316FFE8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_8316FFF0"))) PPC_WEAK_FUNC(sub_8316FFF0);
PPC_FUNC_IMPL(__imp__sub_8316FFF0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8316f790
	sub_8316F790(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lwz r29,84(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// bl 0x8316f800
	sub_8316F800(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83170030"))) PPC_WEAK_FUNC(sub_83170030);
PPC_FUNC_IMPL(__imp__sub_83170030) {
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
	// bl 0x8316f790
	sub_8316F790(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316f6d8
	sub_8316F6D8(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// bl 0x8316f800
	sub_8316F800(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170088"))) PPC_WEAK_FUNC(sub_83170088);
PPC_FUNC_IMPL(__imp__sub_83170088) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x8316f790
	sub_8316F790(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x831700b4
	if (cr6.eq) goto loc_831700B4;
	// ld r30,40(r31)
	r30.u64 = PPC_LOAD_U64(r31.u32 + 40);
loc_831700B4:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// bl 0x8316f800
	sub_8316F800(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831700D8"))) PPC_WEAK_FUNC(sub_831700D8);
PPC_FUNC_IMPL(__imp__sub_831700D8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8316f790
	sub_8316F790(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8316f9e0
	sub_8316F9E0(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// bl 0x8316f800
	sub_8316F800(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83170120"))) PPC_WEAK_FUNC(sub_83170120);
PPC_FUNC_IMPL(__imp__sub_83170120) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8316f790
	sub_8316F790(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8316fa88
	sub_8316FA88(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// bl 0x8316f800
	sub_8316F800(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83170168"))) PPC_WEAK_FUNC(sub_83170168);
PPC_FUNC_IMPL(__imp__sub_83170168) {
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
	// cmpdi cr6,r7,0
	cr6.compare<int64_t>(ctx.r7.s64, 0, xer);
	// bge cr6,0x831701ac
	if (!cr6.lt) goto loc_831701AC;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-29620
	ctx.r4.s64 = r11.s64 + -29620;
loc_8317018C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831701c8
	if (!cr6.eq) goto loc_831701C8;
	// li r11,-2
	r11.s64 = -2;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// b 0x831701c8
	goto loc_831701C8;
loc_831701AC:
	// cmpd cr6,r7,r9
	cr6.compare<int64_t>(ctx.r7.s64, ctx.r9.s64, xer);
	// ble cr6,0x831701c0
	if (!cr6.gt) goto loc_831701C0;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-29684
	ctx.r4.s64 = r11.s64 + -29684;
	// b 0x8317018c
	goto loc_8317018C;
loc_831701C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316faf0
	sub_8316FAF0(ctx, base);
loc_831701C8:
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

__attribute__((alias("__imp__sub_831701E0"))) PPC_WEAK_FUNC(sub_831701E0);
PPC_FUNC_IMPL(__imp__sub_831701E0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8316f790
	sub_8316F790(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8316fe40
	sub_8316FE40(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x8316f800
	sub_8316F800(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83170228"))) PPC_WEAK_FUNC(sub_83170228);
PPC_FUNC_IMPL(__imp__sub_83170228) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x8316f790
	sub_8316F790(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8316faf0
	sub_8316FAF0(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// bl 0x8316f800
	sub_8316F800(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83170290"))) PPC_WEAK_FUNC(sub_83170290);
PPC_FUNC_IMPL(__imp__sub_83170290) {
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
	// bl 0x8316f790
	sub_8316F790(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
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
	// bl 0x83170168
	sub_83170168(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r10,0(r24)
	PPC_STORE_U32(r24.u32 + 0, ctx.r10.u32);
	// bl 0x8316f800
	sub_8316F800(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_83170300"))) PPC_WEAK_FUNC(sub_83170300);
PPC_FUNC_IMPL(__imp__sub_83170300) {
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
	// lis r11,-32230
	r11.s64 = -2112225280;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,-29576
	r11.s64 = r11.s64 + -29576;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x8317032c
	if (cr0.eq) goto loc_8317032C;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_8317032C:
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

__attribute__((alias("__imp__sub_83170348"))) PPC_WEAK_FUNC(sub_83170348);
PPC_FUNC_IMPL(__imp__sub_83170348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// lwz r11,592(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 592);
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x83170380
	if (cr6.lt) goto loc_83170380;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83170418
	goto loc_83170418;
loc_83170380:
	// lwz r11,588(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 588);
	// li r5,255
	ctx.r5.s64 = 255;
	// mulli r11,r11,288
	r11.s64 = r11.s64 * 288;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r11,588(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 588);
	// mulli r11,r11,288
	r11.s64 = r11.s64 * 288;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// bl 0x831b4fa0
	sub_831B4FA0(ctx, base);
	// lwz r11,588(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 588);
	// li r10,0
	ctx.r10.s64 = 0;
	// mulli r11,r11,288
	r11.s64 = r11.s64 * 288;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,267(r11)
	PPC_STORE_U8(r11.u32 + 267, ctx.r10.u8);
	// lwz r11,588(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 588);
	// mulli r11,r11,288
	r11.s64 = r11.s64 * 288;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// std r30,272(r11)
	PPC_STORE_U64(r11.u32 + 272, r30.u64);
	// lwz r11,588(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 588);
	// mulli r11,r11,288
	r11.s64 = r11.s64 * 288;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// std r29,280(r11)
	PPC_STORE_U64(r11.u32 + 280, r29.u64);
	// lwz r11,588(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 588);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mulli r11,r11,288
	r11.s64 = r11.s64 * 288;
	// stwx r28,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, r28.u32);
	// lwz r11,592(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 592);
	// lwz r10,588(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 588);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r9,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// stw r11,592(r31)
	PPC_STORE_U32(r31.u32 + 592, r11.u32);
	// rlwinm r11,r9,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,588(r31)
	PPC_STORE_U32(r31.u32 + 588, r11.u32);
loc_83170418:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83170420"))) PPC_WEAK_FUNC(sub_83170420);
PPC_FUNC_IMPL(__imp__sub_83170420) {
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
	// lwz r11,592(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 592);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83170450
	if (!cr6.eq) goto loc_83170450;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831704c0
	goto loc_831704C0;
loc_83170450:
	// lwz r11,584(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 584);
	// li r5,255
	ctx.r5.s64 = 255;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// mulli r11,r11,288
	r11.s64 = r11.s64 * 288;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,584(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 584);
	// mulli r11,r11,288
	r11.s64 = r11.s64 * 288;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r4,r11,12
	ctx.r4.s64 = r11.s64 + 12;
	// bl 0x831b4fa0
	sub_831B4FA0(ctx, base);
	// lwz r11,584(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 584);
	// li r3,1
	ctx.r3.s64 = 1;
	// mulli r11,r11,288
	r11.s64 = r11.s64 * 288;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// ld r11,272(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 272);
	// std r11,264(r30)
	PPC_STORE_U64(r30.u32 + 264, r11.u64);
	// lwz r11,584(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 584);
	// mulli r11,r11,288
	r11.s64 = r11.s64 * 288;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// ld r11,280(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 280);
	// std r11,272(r30)
	PPC_STORE_U64(r30.u32 + 272, r11.u64);
	// lwz r11,584(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 584);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mulli r11,r11,288
	r11.s64 = r11.s64 * 288;
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// stw r11,280(r30)
	PPC_STORE_U32(r30.u32 + 280, r11.u32);
loc_831704C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831704D8"))) PPC_WEAK_FUNC(sub_831704D8);
PPC_FUNC_IMPL(__imp__sub_831704D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// bl 0x83170420
	sub_83170420(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83170520
	if (!cr6.eq) goto loc_83170520;
	// lwz r10,584(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 584);
	// lwz r11,592(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 592);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// srawi r9,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// stw r11,592(r31)
	PPC_STORE_U32(r31.u32 + 592, r11.u32);
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	r11.s64 = temp.s64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,584(r31)
	PPC_STORE_U32(r31.u32 + 584, r11.u32);
loc_83170520:
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

__attribute__((alias("__imp__sub_83170538"))) PPC_WEAK_FUNC(sub_83170538);
PPC_FUNC_IMPL(__imp__sub_83170538) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8317055c
	if (cr6.eq) goto loc_8317055C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_8317055C:
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwa r10,20(r3)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 20));
	// ld r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 56);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r10,56(r11)
	PPC_STORE_U64(r11.u32 + 56, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170590"))) PPC_WEAK_FUNC(sub_83170590);
PPC_FUNC_IMPL(__imp__sub_83170590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x831705b8
	goto loc_831705B8;
loc_831705B4:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_831705B8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831705b4
	if (!cr6.eq) goto loc_831705B4;
	// lwz r10,68(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831705E8"))) PPC_WEAK_FUNC(sub_831705E8);
PPC_FUNC_IMPL(__imp__sub_831705E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83170600
	if (!cr6.eq) goto loc_83170600;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-29544
	ctx.r4.s64 = r11.s64 + -29544;
	// b 0x831684b0
	sub_831684B0(ctx, base);
	return;
loc_83170600:
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8317061c
	if (!cr6.eq) goto loc_8317061C;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
loc_83170618:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8317061C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83170618
	if (!cr6.eq) goto loc_83170618;
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170638"))) PPC_WEAK_FUNC(sub_83170638);
PPC_FUNC_IMPL(__imp__sub_83170638) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// rlwinm r4,r27,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r6,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// addi r5,r11,-29440
	ctx.r5.s64 = r11.s64 + -29440;
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// bl 0x83167fd8
	sub_83167FD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// bne 0x831706a0
	if (!cr0.eq) goto loc_831706A0;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-29456
	ctx.r4.s64 = r11.s64 + -29456;
loc_8317068C:
	// li r5,-3
	ctx.r5.s64 = -3;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831707d8
	goto loc_831707D8;
loc_831706A0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r6,32
	ctx.r6.s64 = 32;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r5,r9,-29468
	ctx.r5.s64 = ctx.r9.s64 + -29468;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mullw r4,r11,r8
	ctx.r4.s64 = int64_t(r11.s32) * int64_t(ctx.r8.s32);
	// bl 0x83167fd8
	sub_83167FD8(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831706e0
	if (!cr0.eq) goto loc_831706E0;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-29484
	ctx.r4.s64 = r11.s64 + -29484;
	// b 0x8317068c
	goto loc_8317068C;
loc_831706E0:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r28,0
	r28.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// ble cr6,0x831707c4
	if (!cr6.gt) goto loc_831707C4;
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_83170704:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r9,r30,r8
	ctx.r9.u64 = r30.u64 + ctx.r8.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// subf r3,r10,r11
	ctx.r3.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmpw cr6,r29,r27
	cr6.compare<int32_t>(r29.s32, r27.s32, xer);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// std r10,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r10.u64);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// stw r28,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r28.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bne cr6,0x831707a4
	if (!cr6.eq) goto loc_831707A4;
	// stwx r28,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, r28.u32);
	// b 0x831707b0
	goto loc_831707B0;
loc_831707A4:
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// addi r10,r11,32
	ctx.r10.s64 = r11.s64 + 32;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_831707B0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x83170704
	if (cr6.lt) goto loc_83170704;
loc_831707C4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r28,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
loc_831707D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_831707E0"))) PPC_WEAK_FUNC(sub_831707E0);
PPC_FUNC_IMPL(__imp__sub_831707E0) {
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
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83170808
	if (cr6.eq) goto loc_83170808;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x83168100
	sub_83168100(ctx, base);
loc_83170808:
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8317081c
	if (cr6.eq) goto loc_8317081C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x83168100
	sub_83168100(ctx, base);
loc_8317081C:
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83168618
	sub_83168618(ctx, base);
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

__attribute__((alias("__imp__sub_83170840"))) PPC_WEAK_FUNC(sub_83170840);
PPC_FUNC_IMPL(__imp__sub_83170840) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8317087c
	if (cr6.eq) goto loc_8317087C;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29408
	ctx.r4.s64 = r11.s64 + -29408;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
loc_8317087C:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// addi r10,r10,-29416
	ctx.r10.s64 = ctx.r10.s64 + -29416;
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
loc_83170890:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x831708b0
	if (!cr0.eq) goto loc_831708B0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x83170890
	if (!cr6.eq) goto loc_83170890;
loc_831708B0:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x831708cc
	if (cr0.eq) goto loc_831708CC;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29428
	ctx.r4.s64 = r11.s64 + -29428;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
loc_831708CC:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r31,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831708F0"))) PPC_WEAK_FUNC(sub_831708F0);
PPC_FUNC_IMPL(__imp__sub_831708F0) {
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
	// stwu r1,-1184(r1)
	ea = -1184 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// lwz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lfs f30,2240(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2240);
	f30.f64 = double(temp.f32);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83170944
	if (cr0.eq) goto loc_83170944;
loc_83170928:
	// lfs f0,28(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// beq cr6,0x83170938
	if (cr6.eq) goto loc_83170938;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_83170938:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83170928
	if (!cr6.eq) goto loc_83170928;
loc_83170944:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x83170b68
	if (!cr6.gt) goto loc_83170B68;
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = f30.f64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// ble cr6,0x83170a24
	if (!cr6.gt) goto loc_83170A24;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x83170990
	if (cr0.eq) goto loc_83170990;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83170984:
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83170984
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83170984;
loc_83170990:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x831709a8
	goto loc_831709A8;
loc_83170998:
	// lfs f13,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	cr6.compare(ctx.f13.f64, f30.f64);
	// bne cr6,0x831709b0
	if (!cr6.eq) goto loc_831709B0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_831709A8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83170998
	if (!cr6.eq) goto loc_83170998;
loc_831709B0:
	// addi r7,r1,608
	ctx.r7.s64 = ctx.r1.s64 + 608;
	// lfs f13,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stwx r11,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bne 0x831709a8
	if (!cr0.eq) goto loc_831709A8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83170a24
	if (!cr6.gt) goto loc_83170A24;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	r11.s64 = 0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lfs f13,2244(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
loc_831709EC:
	// addi r8,r1,608
	ctx.r8.s64 = ctx.r1.s64 + 608;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwzx r8,r11,r8
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// lfs f13,28(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r6,r8,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r8.s64;
	// stwx r8,r11,r7
	PPC_STORE_U32(r11.u32 + ctx.r7.u32, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x831709ec
	if (!cr0.eq) goto loc_831709EC;
loc_83170A24:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// lfs f31,-16564(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16564);
	f31.f64 = double(temp.f32);
	// ble cr6,0x83170ac8
	if (!cr6.gt) goto loc_83170AC8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lfs f12,29232(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 29232);
	ctx.f12.f64 = double(temp.f32);
loc_83170A3C:
	// fmr f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f12.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83170aac
	if (!cr6.gt) goto loc_83170AAC;
	// lwz r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// li r11,0
	r11.s64 = 0;
loc_83170A58:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// lwzx r5,r11,r5
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r5.u32);
	// lwzx r4,r11,r4
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r4.u32);
	// mullw r5,r5,r7
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// lfs f0,28(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// extsw r5,r5
	ctx.r5.s64 = ctx.r5.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fdivs f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 / f0.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x83170a9c
	if (!cr6.lt) goto loc_83170A9C;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
loc_83170A9C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x83170a58
	if (cr6.lt) goto loc_83170A58;
loc_83170AAC:
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r8.u32);
	// bgt 0x83170a3c
	if (cr0.gt) goto loc_83170A3C;
loc_83170AC8:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83170b68
	if (!cr6.gt) goto loc_83170B68;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r31,0
	r31.s64 = 0;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// addi r29,r11,-29396
	r29.s64 = r11.s64 + -29396;
loc_83170AE0:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x83170b00
	if (cr6.gt) goto loc_83170B00;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// b 0x83170b5c
	goto loc_83170B5C;
loc_83170B00:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x83170b4c
	if (cr6.lt) goto loc_83170B4C;
	// addi r9,r1,608
	ctx.r9.s64 = ctx.r1.s64 + 608;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// srawi r8,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// lwzx r11,r31,r9
	r11.u64 = PPC_LOAD_U32(r31.u32 + ctx.r9.u32);
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	r11.s64 = temp.s64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
	// b 0x83170b50
	goto loc_83170B50;
loc_83170B4C:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = f30.f64;
loc_83170B50:
	// addi r11,r1,608
	r11.s64 = ctx.r1.s64 + 608;
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// stfs f0,80(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 80, temp.u32);
loc_83170B5C:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x83170ae0
	if (!cr0.eq) goto loc_83170AE0;
loc_83170B68:
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83170B78"))) PPC_WEAK_FUNC(sub_83170B78);
PPC_FUNC_IMPL(__imp__sub_83170B78) {
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
	// lwz r3,-29296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -29296);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83170ba4
	if (cr6.eq) goto loc_83170BA4;
	// bl 0x831707e0
	sub_831707E0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,-29296(r31)
	PPC_STORE_U32(r31.u32 + -29296, r11.u32);
loc_83170BA4:
	// bl 0x83167fb0
	sub_83167FB0(ctx, base);
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

__attribute__((alias("__imp__sub_83170BC0"))) PPC_WEAK_FUNC(sub_83170BC0);
PPC_FUNC_IMPL(__imp__sub_83170BC0) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,-15316
	r11.s64 = r11.s64 + -15316;
	// addi r3,r31,624
	ctx.r3.s64 = r31.s64 + 624;
	// stw r4,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r5,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r5.u32);
	// li r5,288
	ctx.r5.s64 = 288;
	// stw r30,592(r31)
	PPC_STORE_U32(r31.u32 + 592, r30.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r30,596(r31)
	PPC_STORE_U32(r31.u32 + 596, r30.u32);
	// stw r30,600(r31)
	PPC_STORE_U32(r31.u32 + 600, r30.u32);
	// stw r30,608(r31)
	PPC_STORE_U32(r31.u32 + 608, r30.u32);
	// stw r30,612(r31)
	PPC_STORE_U32(r31.u32 + 612, r30.u32);
	// stw r30,616(r31)
	PPC_STORE_U32(r31.u32 + 616, r30.u32);
	// stw r30,620(r31)
	PPC_STORE_U32(r31.u32 + 620, r30.u32);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// stw r30,912(r31)
	PPC_STORE_U32(r31.u32 + 912, r30.u32);
	// stw r30,916(r31)
	PPC_STORE_U32(r31.u32 + 916, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,920(r31)
	PPC_STORE_U32(r31.u32 + 920, r30.u32);
	// lwz r11,-29296(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -29296);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,924(r31)
	PPC_STORE_U32(r31.u32 + 924, r11.u32);
	// stw r30,928(r31)
	PPC_STORE_U32(r31.u32 + 928, r30.u32);
	// stw r30,932(r31)
	PPC_STORE_U32(r31.u32 + 932, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170C60"))) PPC_WEAK_FUNC(sub_83170C60);
PPC_FUNC_IMPL(__imp__sub_83170C60) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x83170348
	sub_83170348(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83170C68"))) PPC_WEAK_FUNC(sub_83170C68);
PPC_FUNC_IMPL(__imp__sub_83170C68) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,612(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 612);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170C70"))) PPC_WEAK_FUNC(sub_83170C70);
PPC_FUNC_IMPL(__imp__sub_83170C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,616(r3)
	PPC_STORE_U32(ctx.r3.u32 + 616, r11.u32);
	// stw r10,612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 612, ctx.r10.u32);
	// stw r11,932(r3)
	PPC_STORE_U32(ctx.r3.u32 + 932, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170C88"))) PPC_WEAK_FUNC(sub_83170C88);
PPC_FUNC_IMPL(__imp__sub_83170C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stw r11,928(r3)
	PPC_STORE_U32(ctx.r3.u32 + 928, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170C98"))) PPC_WEAK_FUNC(sub_83170C98);
PPC_FUNC_IMPL(__imp__sub_83170C98) {
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83170cd8
	if (cr6.eq) goto loc_83170CD8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r4,r10,-29624
	ctx.r4.s64 = ctx.r10.s64 + -29624;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_83170CD8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
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

__attribute__((alias("__imp__sub_83170D08"))) PPC_WEAK_FUNC(sub_83170D08);
PPC_FUNC_IMPL(__imp__sub_83170D08) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83170d40
	if (cr6.eq) goto loc_83170D40;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-29284
	ctx.r4.s64 = r11.s64 + -29284;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_83170D38:
	// li r11,5
	r11.s64 = 5;
	// b 0x83170dbc
	goto loc_83170DBC;
loc_83170D40:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r30,r11,-29624
	r30.s64 = r11.s64 + -29624;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// bne 0x83170d84
	if (!cr0.eq) goto loc_83170D84;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,-29300
	ctx.r4.s64 = r11.s64 + -29300;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// b 0x83170d38
	goto loc_83170D38;
loc_83170D84:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
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
	// li r11,1
	r11.s64 = 1;
loc_83170DBC:
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83170DC8"))) PPC_WEAK_FUNC(sub_83170DC8);
PPC_FUNC_IMPL(__imp__sub_83170DC8) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83170e88
	if (!cr6.gt) goto loc_83170E88;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x83170e30
	if (!cr6.gt) goto loc_83170E30;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x83170e88
	if (!cr6.eq) goto loc_83170E88;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83170e28
	if (cr6.eq) goto loc_83170E28;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r4,r10,-29624
	ctx.r4.s64 = ctx.r10.s64 + -29624;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
loc_83170E28:
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x83170e88
	goto loc_83170E88;
loc_83170E30:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r30,r11,-29624
	r30.s64 = r11.s64 + -29624;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_83170E88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170EA0"))) PPC_WEAK_FUNC(sub_83170EA0);
PPC_FUNC_IMPL(__imp__sub_83170EA0) {
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
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x83170ed8
	if (cr6.eq) goto loc_83170ED8;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-29248
	ctx.r4.s64 = r11.s64 + -29248;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r11,5
	r11.s64 = 5;
	// b 0x83170ef8
	goto loc_83170EF8;
loc_83170ED8:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r6,r11,-29624
	ctx.r6.s64 = r11.s64 + -29624;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,3
	r11.s64 = 3;
loc_83170EF8:
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_83170F10"))) PPC_WEAK_FUNC(sub_83170F10);
PPC_FUNC_IMPL(__imp__sub_83170F10) {
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
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x83170f4c
	if (cr6.eq) goto loc_83170F4C;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-29216
	ctx.r4.s64 = r11.s64 + -29216;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r11,5
	r11.s64 = 5;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x83170f6c
	goto loc_83170F6C;
loc_83170F4C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-29624
	ctx.r6.s64 = r11.s64 + -29624;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83170F6C:
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

__attribute__((alias("__imp__sub_83170F80"))) PPC_WEAK_FUNC(sub_83170F80);
PPC_FUNC_IMPL(__imp__sub_83170F80) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x83171090
	if (cr6.eq) goto loc_83171090;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x83171030
	if (cr6.eq) goto loc_83171030;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x831710e8
	if (!cr6.eq) goto loc_831710E8;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r30,r11,-29624
	r30.s64 = r11.s64 + -29624;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83171024
	if (cr0.eq) goto loc_83171024;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83170ff4
	if (cr6.eq) goto loc_83170FF4;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x83171018
	if (cr6.eq) goto loc_83171018;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x831710e8
	if (!cr6.eq) goto loc_831710E8;
loc_83170FF4:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x831710e4
	goto loc_831710E4;
loc_83171018:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-28956
	ctx.r4.s64 = r11.s64 + -28956;
	// b 0x831710d8
	goto loc_831710D8;
loc_83171024:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-29000
	ctx.r4.s64 = r11.s64 + -29000;
	// b 0x831710d8
	goto loc_831710D8;
loc_83171030:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r4,r11,-29624
	ctx.r4.s64 = r11.s64 + -29624;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83171084
	if (cr0.eq) goto loc_83171084;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x8317107c
	if (cr6.eq) goto loc_8317107C;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x83171070
	if (cr6.eq) goto loc_83171070;
loc_83171064:
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x831710e8
	if (!cr6.eq) goto loc_831710E8;
	// b 0x831710e0
	goto loc_831710E0;
loc_83171070:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-29048
	ctx.r4.s64 = r11.s64 + -29048;
	// b 0x831710d8
	goto loc_831710D8;
loc_8317107C:
	// li r11,2
	r11.s64 = 2;
	// b 0x831710e4
	goto loc_831710E4;
loc_83171084:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-29092
	ctx.r4.s64 = r11.s64 + -29092;
	// b 0x831710d8
	goto loc_831710D8;
loc_83171090:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r4,r11,-29624
	ctx.r4.s64 = r11.s64 + -29624;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831710d0
	if (cr0.eq) goto loc_831710D0;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x8317107c
	if (cr6.eq) goto loc_8317107C;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x83171064
	if (!cr6.eq) goto loc_83171064;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-29140
	ctx.r4.s64 = r11.s64 + -29140;
	// b 0x831710d8
	goto loc_831710D8;
loc_831710D0:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-29184
	ctx.r4.s64 = r11.s64 + -29184;
loc_831710D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_831710E0:
	// li r11,5
	r11.s64 = 5;
loc_831710E4:
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_831710E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171100"))) PPC_WEAK_FUNC(sub_83171100);
PPC_FUNC_IMPL(__imp__sub_83171100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x83171118
	goto loc_83171118;
loc_8317110C:
	// lwa r10,20(r11)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 20));
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
loc_83171118:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8317110c
	if (!cr6.eq) goto loc_8317110C;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83171138
	goto loc_83171138;
loc_8317112C:
	// lwa r10,20(r11)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 20));
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_83171138:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8317112c
	if (!cr6.eq) goto loc_8317112C;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x83171158
	goto loc_83171158;
loc_8317114C:
	// lwa r8,20(r11)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 20));
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_83171158:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8317114c
	if (!cr6.eq) goto loc_8317114C;
	// add r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// bne cr6,0x8317117c
	if (!cr6.eq) goto loc_8317117C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// b 0x831711b4
	goto loc_831711B4;
loc_8317117C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	f0.f64 = double(temp.f32);
	// lfs f13,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x831711ac
	if (cr6.eq) goto loc_831711AC;
	// rldicr r11,r11,3,60
	r11.u64 = __builtin_rotateleft64(r11.u64, 3) & 0xFFFFFFFFFFFFFFF8;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
	// b 0x831711b4
	goto loc_831711B4;
loc_831711AC:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lfs f0,29232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 29232);
	f0.f64 = double(temp.f32);
loc_831711B4:
	// stfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831711C0"))) PPC_WEAK_FUNC(sub_831711C0);
PPC_FUNC_IMPL(__imp__sub_831711C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x831711d8
	goto loc_831711D8;
loc_831711CC:
	// lwa r9,20(r11)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 20));
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_831711D8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831711cc
	if (!cr6.eq) goto loc_831711CC;
	// ld r11,56(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 56);
	// ld r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// ld r8,48(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmpd cr6,r11,r8
	cr6.compare<int64_t>(r11.s64, ctx.r8.s64, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171208"))) PPC_WEAK_FUNC(sub_83171208);
PPC_FUNC_IMPL(__imp__sub_83171208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x83171220
	goto loc_83171220;
loc_83171214:
	// lwa r9,20(r11)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 20));
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_83171220:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83171214
	if (!cr6.eq) goto loc_83171214;
	// ld r11,56(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 56);
	// ld r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// ld r8,48(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpd cr6,r11,r8
	cr6.compare<int64_t>(r11.s64, ctx.r8.s64, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171250"))) PPC_WEAK_FUNC(sub_83171250);
PPC_FUNC_IMPL(__imp__sub_83171250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x83171268
	goto loc_83171268;
loc_8317125C:
	// lwa r10,20(r11)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 20));
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
loc_83171268:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8317125c
	if (!cr6.eq) goto loc_8317125C;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x83171288
	goto loc_83171288;
loc_8317127C:
	// lwa r10,20(r11)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 20));
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
loc_83171288:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8317127c
	if (!cr6.eq) goto loc_8317127C;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x831712a8
	goto loc_831712A8;
loc_8317129C:
	// lwa r10,20(r11)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 20));
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_831712A8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8317129c
	if (!cr6.eq) goto loc_8317129C;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x831712c8
	goto loc_831712C8;
loc_831712BC:
	// lwa r8,20(r11)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 20));
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_831712C8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831712bc
	if (!cr6.eq) goto loc_831712BC;
	// add r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// bne cr6,0x831712f0
	if (!cr6.eq) goto loc_831712F0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_831712F0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	f0.f64 = double(temp.f32);
	// lfs f13,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x83171320
	if (cr6.eq) goto loc_83171320;
	// rldicr r11,r11,3,60
	r11.u64 = __builtin_rotateleft64(r11.u64, 3) & 0xFFFFFFFFFFFFFFF8;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / f0.f64));
	// blr 
	return;
loc_83171320:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lfs f1,29232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 29232);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171330"))) PPC_WEAK_FUNC(sub_83171330);
PPC_FUNC_IMPL(__imp__sub_83171330) {
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
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8317135c
	if (!cr6.eq) goto loc_8317135C;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x83171370
	goto loc_83171370;
loc_83171358:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8317135C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83171358
	if (!cr6.eq) goto loc_83171358;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_83171370:
	// li r30,0
	r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r30.u32);
	// bl 0x83170538
	sub_83170538(ctx, base);
	// li r29,-1
	r29.s64 = -1;
	// b 0x831713a4
	goto loc_831713A4;
loc_8317138C:
	// std r29,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, r29.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x83170840
	sub_83170840(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83170538
	sub_83170538(ctx, base);
loc_831713A4:
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8317138c
	if (!cr0.eq) goto loc_8317138C;
loc_831713AC:
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831713d4
	if (cr6.eq) goto loc_831713D4;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r30,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r30.u32);
	// std r29,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, r29.u64);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x83170840
	sub_83170840(ctx, base);
	// b 0x831713ac
	goto loc_831713AC;
loc_831713D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831713E0"))) PPC_WEAK_FUNC(sub_831713E0);
PPC_FUNC_IMPL(__imp__sub_831713E0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,-28896
	ctx.r5.s64 = r11.s64 + -28896;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x83171430
	if (!cr0.eq) goto loc_83171430;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,-28908
	ctx.r4.s64 = r11.s64 + -28908;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// b 0x8317145c
	goto loc_8317145C;
loc_83171430:
	// addi r11,r29,64
	r11.s64 = r29.s64 + 64;
	// li r7,32
	ctx.r7.s64 = 32;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// divw r5,r28,r11
	ctx.r5.s32 = r28.s32 / r11.s32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83170638
	sub_83170638(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x83171460
	if (!cr0.eq) goto loc_83171460;
	// bl 0x831707e0
	sub_831707E0(ctx, base);
loc_8317145C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83171460:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83171468"))) PPC_WEAK_FUNC(sub_83171468);
PPC_FUNC_IMPL(__imp__sub_83171468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83171494
	if (cr6.eq) goto loc_83171494;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// b 0x831714ec
	goto loc_831714EC;
loc_83171494:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f12,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f12.f64 = double(temp.f32);
	// beq cr6,0x831714ec
	if (cr6.eq) goto loc_831714EC;
loc_831714AC:
	// bl 0x83171100
	sub_83171100(ctx, base);
	// fcmpu cr6,f12,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f1.f64);
	// bge cr6,0x831714c4
	if (!cr6.lt) goto loc_831714C4;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// bl 0x83171100
	sub_83171100(ctx, base);
	// fmr f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f1.f64;
loc_831714C4:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831714ac
	if (!cr6.eq) goto loc_831714AC;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x831714ec
	if (cr6.eq) goto loc_831714EC;
	// cmplw cr6,r6,r4
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, xer);
	// beq cr6,0x831714ec
	if (cr6.eq) goto loc_831714EC;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x83170590
	sub_83170590(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_831714EC:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171500"))) PPC_WEAK_FUNC(sub_83171500);
PPC_FUNC_IMPL(__imp__sub_83171500) {
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
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8317159c
	if (cr6.eq) goto loc_8317159C;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x83171538
	if (!cr6.eq) goto loc_83171538;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// b 0x8317156c
	goto loc_8317156C;
loc_83171538:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83171570
	if (cr6.eq) goto loc_83171570;
loc_83171544:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// beq cr6,0x83171564
	if (cr6.eq) goto loc_83171564;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x83171544
	if (!cr6.eq) goto loc_83171544;
	// b 0x83171570
	goto loc_83171570;
loc_83171564:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8317156C:
	// li r9,1
	ctx.r9.s64 = 1;
loc_83171570:
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// bne cr6,0x83171594
	if (!cr6.eq) goto loc_83171594;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28876
	ctx.r4.s64 = r11.s64 + -28876;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
loc_83171594:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831708f0
	sub_831708F0(ctx, base);
loc_8317159C:
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

__attribute__((alias("__imp__sub_831715B0"))) PPC_WEAK_FUNC(sub_831715B0);
PPC_FUNC_IMPL(__imp__sub_831715B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// lwz r11,-29292(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29292);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,-29292(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29292, r11.u32);
	// bnelr 
	if (!cr0.eq) return;
	// b 0x83170b78
	sub_83170B78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831715C8"))) PPC_WEAK_FUNC(sub_831715C8);
PPC_FUNC_IMPL(__imp__sub_831715C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831715D0"))) PPC_WEAK_FUNC(sub_831715D0);
PPC_FUNC_IMPL(__imp__sub_831715D0) {
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
	// li r30,0
	r30.s64 = 0;
	// stw r30,612(r31)
	PPC_STORE_U32(r31.u32 + 612, r30.u32);
	// stw r30,920(r31)
	PPC_STORE_U32(r31.u32 + 920, r30.u32);
	// stw r30,928(r31)
	PPC_STORE_U32(r31.u32 + 928, r30.u32);
	// stw r30,600(r31)
	PPC_STORE_U32(r31.u32 + 600, r30.u32);
	// stw r30,592(r31)
	PPC_STORE_U32(r31.u32 + 592, r30.u32);
	// stw r30,596(r31)
	PPC_STORE_U32(r31.u32 + 596, r30.u32);
	// lwz r11,616(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 616);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x8317161c
	if (!cr6.eq) goto loc_8317161C;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r11,-29288(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29288, r11.u32);
loc_8317161C:
	// stw r30,616(r31)
	PPC_STORE_U32(r31.u32 + 616, r30.u32);
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 608);
	// bl 0x83171330
	sub_83171330(ctx, base);
	// stw r30,932(r31)
	PPC_STORE_U32(r31.u32 + 932, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171648"))) PPC_WEAK_FUNC(sub_83171648);
PPC_FUNC_IMPL(__imp__sub_83171648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,608(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 608);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stfs f1,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// b 0x831708f0
	sub_831708F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83171658"))) PPC_WEAK_FUNC(sub_83171658);
PPC_FUNC_IMPL(__imp__sub_83171658) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,608(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 608);
	// b 0x83171100
	sub_83171100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83171660"))) PPC_WEAK_FUNC(sub_83171660);
PPC_FUNC_IMPL(__imp__sub_83171660) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83171818
	if (cr6.eq) goto loc_83171818;
	// lwz r11,912(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 912);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x83171818
	if (cr6.eq) goto loc_83171818;
	// lwz r11,612(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 612);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83171818
	if (!cr6.eq) goto loc_83171818;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8316a598
	sub_8316A598(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83171754
	if (cr6.eq) goto loc_83171754;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r29,r11,-28864
	r29.s64 = r11.s64 + -28864;
loc_831716B0:
	// lwz r11,608(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 608);
	// lwz r31,24(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831716cc
	if (!cr6.eq) goto loc_831716CC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_831716CC:
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// ble cr6,0x831716e8
	if (!cr6.gt) goto loc_831716E8;
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// b 0x8317173c
	goto loc_8317173C;
loc_831716E8:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8316a538
	sub_8316A538(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x8316a528
	sub_8316A528(ctx, base);
	// lwz r11,608(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 608);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8317173c
	if (cr6.eq) goto loc_8317173C;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lwz r11,608(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 608);
	// std r10,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r10.u64);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x83170840
	sub_83170840(ctx, base);
loc_8317173C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x8316a598
	sub_8316A598(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831716b0
	if (!cr6.eq) goto loc_831716B0;
loc_83171754:
	// lwz r3,608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 608);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x831717c4
	if (cr0.eq) goto loc_831717C4;
loc_8317176C:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8317176c
	if (!cr6.eq) goto loc_8317176C;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// blt cr6,0x831717c4
	if (cr6.lt) goto loc_831717C4;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x831717a0
	if (cr0.eq) goto loc_831717A0;
loc_8317178C:
	// lwa r9,20(r11)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 20));
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8317178c
	if (!cr6.eq) goto loc_8317178C;
loc_831717A0:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lfs f13,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,10128(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 10128);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// ld r11,88(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpd cr6,r10,r11
	cr6.compare<int64_t>(ctx.r10.s64, r11.s64, xer);
	// bge cr6,0x83171818
	if (!cr6.lt) goto loc_83171818;
loc_831717C4:
	// bl 0x83170538
	sub_83170538(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x83171818
	if (cr0.eq) goto loc_83171818;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x8316a5a8
	sub_8316A5A8(ctx, base);
	// lwz r10,608(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 608);
	// lwz r11,24(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83171808
	if (!cr6.eq) goto loc_83171808;
	// stw r31,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, r31.u32);
	// b 0x83171818
	goto loc_83171818;
loc_83171804:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_83171808:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83171804
	if (!cr6.eq) goto loc_83171804;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
loc_83171818:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83171828"))) PPC_WEAK_FUNC(sub_83171828);
PPC_FUNC_IMPL(__imp__sub_83171828) {
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
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r11,-28788
	ctx.r6.s64 = r11.s64 + -28788;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x831685b0
	sub_831685B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83171884
	if (cr0.eq) goto loc_83171884;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,-29332
	ctx.r10.s64 = ctx.r10.s64 + -29332;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// b 0x83171888
	goto loc_83171888;
loc_83171884:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83171888:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831718a4
	if (!cr6.eq) goto loc_831718A4;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,-28800
	ctx.r4.s64 = r11.s64 + -28800;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_831718A4:
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

__attribute__((alias("__imp__sub_831718B8"))) PPC_WEAK_FUNC(sub_831718B8);
PPC_FUNC_IMPL(__imp__sub_831718B8) {
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
	// lis r11,-32230
	r11.s64 = -2112225280;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,-29576
	r11.s64 = r11.s64 + -29576;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x831718e8
	if (cr0.eq) goto loc_831718E8;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x83168618
	sub_83168618(ctx, base);
loc_831718E8:
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

__attribute__((alias("__imp__sub_83171900"))) PPC_WEAK_FUNC(sub_83171900);
PPC_FUNC_IMPL(__imp__sub_83171900) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,-28764
	ctx.r5.s64 = r11.s64 + -28764;
	// li r3,88
	ctx.r3.s64 = 88;
	// lwz r28,0(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83171950
	if (!cr6.eq) goto loc_83171950;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,26436
	ctx.r4.s64 = r11.s64 + 26436;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831719b4
	goto loc_831719B4;
loc_83171950:
	// li r30,0
	r30.s64 = 0;
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r31,28(r29)
	PPC_STORE_U32(r29.u32 + 28, r31.u32);
	// bl 0x831708f0
	sub_831708F0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// std r30,40(r31)
	PPC_STORE_U64(r31.u32 + 40, r30.u64);
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// std r30,48(r31)
	PPC_STORE_U64(r31.u32 + 48, r30.u64);
	// std r30,56(r31)
	PPC_STORE_U64(r31.u32 + 56, r30.u64);
	// stw r30,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
loc_831719B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831719C0"))) PPC_WEAK_FUNC(sub_831719C0);
PPC_FUNC_IMPL(__imp__sub_831719C0) {
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
	// bl 0x83171330
	sub_83171330(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x83171500
	sub_83171500(ctx, base);
	// li r4,88
	ctx.r4.s64 = 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83168618
	sub_83168618(ctx, base);
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

__attribute__((alias("__imp__sub_83171A08"))) PPC_WEAK_FUNC(sub_83171A08);
PPC_FUNC_IMPL(__imp__sub_83171A08) {
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
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x83171468
	sub_83171468(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83171a38
	if (!cr0.eq) goto loc_83171A38;
loc_83171A30:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83171adc
	goto loc_83171ADC;
loc_83171A38:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83171a50
	goto loc_83171A50;
loc_83171A44:
	// lwa r10,20(r11)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 20));
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_83171A50:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83171a44
	if (!cr6.eq) goto loc_83171A44;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x83171a70
	goto loc_83171A70;
loc_83171A64:
	// lwa r8,20(r11)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 20));
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_83171A70:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83171a64
	if (!cr6.eq) goto loc_83171A64;
	// ld r11,56(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 56);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, r11.u64);
	// extsw r9,r11
	ctx.r9.s64 = r11.s32;
	// ld r11,48(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 48);
	// ld r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// subf. r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83171ac0
	if (!cr0.eq) goto loc_83171AC0;
	// li r11,-1
	r11.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, r11.u64);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x83170840
	sub_83170840(ctx, base);
	// b 0x83171a30
	goto loc_83171A30;
loc_83171AC0:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x83171ad0
	if (!cr6.lt) goto loc_83171AD0;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_83171AD0:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r10.u32);
loc_83171ADC:
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

__attribute__((alias("__imp__sub_83171AF0"))) PPC_WEAK_FUNC(sub_83171AF0);
PPC_FUNC_IMPL(__imp__sub_83171AF0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x831683b8
	sub_831683B8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831713e0
	sub_831713E0(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,-29296(r11)
	PPC_STORE_U32(r11.u32 + -29296, ctx.r3.u32);
	// bne 0x83171b48
	if (!cr0.eq) goto loc_83171B48;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-28748
	ctx.r4.s64 = r11.s64 + -28748;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// bl 0x83170b78
	sub_83170B78(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83171b5c
	goto loc_83171B5C;
loc_83171B48:
	// lis r11,-31977
	r11.s64 = -2095644672;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r11,r11,6184
	r11.s64 = r11.s64 + 6184;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-29304(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29304, r11.u32);
loc_83171B5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83171B68"))) PPC_WEAK_FUNC(sub_83171B68);
PPC_FUNC_IMPL(__imp__sub_83171B68) {
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
	// li r30,0
	r30.s64 = 0;
	// lwz r3,620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 620);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83171ba4
	if (cr6.eq) goto loc_83171BA4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,620(r31)
	PPC_STORE_U32(r31.u32 + 620, r30.u32);
loc_83171BA4:
	// lwz r4,916(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 916);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83171bbc
	if (cr6.eq) goto loc_83171BBC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// stw r30,916(r31)
	PPC_STORE_U32(r31.u32 + 916, r30.u32);
loc_83171BBC:
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 608);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83171bd0
	if (cr6.eq) goto loc_83171BD0;
	// bl 0x831719c0
	sub_831719C0(ctx, base);
	// stw r30,608(r31)
	PPC_STORE_U32(r31.u32 + 608, r30.u32);
loc_83171BD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171BE8"))) PPC_WEAK_FUNC(sub_83171BE8);
PPC_FUNC_IMPL(__imp__sub_83171BE8) {
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
	// lwz r11,612(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 612);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83171c70
	if (cr6.eq) goto loc_83171C70;
	// lwz r3,620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 620);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 620);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83171c68
	if (cr0.eq) goto loc_83171C68;
	// lwz r11,932(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 932);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83171c60
	if (!cr6.eq) goto loc_83171C60;
	// lwz r3,620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 620);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r11,932(r31)
	PPC_STORE_U32(r31.u32 + 932, r11.u32);
loc_83171C60:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83171c74
	goto loc_83171C74;
loc_83171C68:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831715d0
	sub_831715D0(ctx, base);
loc_83171C70:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83171C74:
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

__attribute__((alias("__imp__sub_83171C88"))) PPC_WEAK_FUNC(sub_83171C88);
PPC_FUNC_IMPL(__imp__sub_83171C88) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r27,r26
	r27.u64 = r26.u64;
	// lwz r11,912(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 912);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83171cb8
	if (!cr6.eq) goto loc_83171CB8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83172048
	goto loc_83172048;
loc_83171CB8:
	// lwz r3,620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 620);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,612(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 612);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83172044
	if (!cr6.eq) goto loc_83172044;
	// lwz r3,620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 620);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bne cr6,0x83171d04
	if (!cr6.eq) goto loc_83171D04;
loc_83171CF4:
	// li r11,3
	r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,612(r31)
	PPC_STORE_U32(r31.u32 + 612, r11.u32);
	// b 0x83172048
	goto loc_83172048;
loc_83171D04:
	// lwz r7,616(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 616);
	// li r23,2
	r23.s64 = 2;
	// cmpwi cr6,r7,5
	cr6.compare<int32_t>(ctx.r7.s32, 5, xer);
	// bne cr6,0x83171d34
	if (!cr6.eq) goto loc_83171D34;
	// lwz r11,928(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 928);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83171d34
	if (!cr6.eq) goto loc_83171D34;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 608);
	// bl 0x83171208
	sub_83171208(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83171d34
	if (!cr6.eq) goto loc_83171D34;
	// stw r23,612(r31)
	PPC_STORE_U32(r31.u32 + 612, r23.u32);
loc_83171D34:
	// lwz r11,932(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 932);
	// lis r25,-31941
	r25.s64 = -2093285376;
	// li r24,1
	r24.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83171fcc
	if (!cr6.eq) goto loc_83171FCC;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x83171d58
	if (cr6.eq) goto loc_83171D58;
	// cmpwi cr6,r7,5
	cr6.compare<int32_t>(ctx.r7.s32, 5, xer);
	// bne cr6,0x83171e34
	if (!cr6.eq) goto loc_83171E34;
loc_83171D58:
	// lwz r3,620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 620);
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83171d7c
	if (cr0.eq) goto loc_83171D7C;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_83171D7C:
	// addi r30,r31,624
	r30.s64 = r31.s64 + 624;
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83170420
	sub_83170420(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83171e34
	if (!cr6.eq) goto loc_83171E34;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// bne cr6,0x83171e34
	if (!cr6.eq) goto loc_83171E34;
	// lwz r11,608(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 608);
	// ld r9,896(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 896);
	// ld r10,888(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 888);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83171e34
	if (!cr6.eq) goto loc_83171E34;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r5,r31,628
	ctx.r5.s64 = r31.s64 + 628;
	// std r10,40(r11)
	PPC_STORE_U64(r11.u32 + 40, ctx.r10.u64);
	// std r9,48(r11)
	PPC_STORE_U64(r11.u32 + 48, ctx.r9.u64);
	// stw r5,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r5.u32);
	// std r10,56(r11)
	PPC_STORE_U64(r11.u32 + 56, ctx.r10.u64);
	// stw r8,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r8.u32);
	// stw r26,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r26.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83171df8
	if (!cr6.eq) goto loc_83171DF8;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-28696
	ctx.r4.s64 = r11.s64 + -28696;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// b 0x83171cf4
	goto loc_83171CF4;
loc_83171DF8:
	// lwz r3,620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 620);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,608(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 608);
	// stw r26,68(r11)
	PPC_STORE_U32(r11.u32 + 68, r26.u32);
	// stw r24,616(r31)
	PPC_STORE_U32(r31.u32 + 616, r24.u32);
	// lwz r11,904(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 904);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83171e30
	if (!cr6.eq) goto loc_83171E30;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831704d8
	sub_831704D8(ctx, base);
loc_83171E30:
	// mr r27,r24
	r27.u64 = r24.u64;
loc_83171E34:
	// lwz r11,616(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 616);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83171e60
	if (!cr6.eq) goto loc_83171E60;
	// lwz r3,620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 620);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83171e60
	if (!cr6.eq) goto loc_83171E60;
	// stw r23,616(r31)
	PPC_STORE_U32(r31.u32 + 616, r23.u32);
loc_83171E60:
	// lwz r11,616(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 616);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83171ec0
	if (!cr6.eq) goto loc_83171EC0;
	// lwz r7,608(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 608);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x831711c0
	sub_831711C0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83171ec0
	if (!cr6.eq) goto loc_83171EC0;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x83171100
	sub_83171100(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f0,-31000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31000);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x83171ebc
	if (cr6.gt) goto loc_83171EBC;
	// lwz r11,608(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 608);
	// stw r24,68(r11)
	PPC_STORE_U32(r11.u32 + 68, r24.u32);
	// lwz r3,620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 620);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,5
	r11.s64 = 5;
	// stw r11,616(r31)
	PPC_STORE_U32(r31.u32 + 616, r11.u32);
loc_83171EBC:
	// mr r27,r24
	r27.u64 = r24.u64;
loc_83171EC0:
	// lwz r11,616(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 616);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83171fcc
	if (!cr6.eq) goto loc_83171FCC;
	// lwz r11,-29288(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -29288);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83171fcc
	if (!cr6.eq) goto loc_83171FCC;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 608);
	// mr r30,r26
	r30.u64 = r26.u64;
	// lfs f31,80(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	f31.f64 = double(temp.f32);
	// b 0x83171f6c
	goto loc_83171F6C;
loc_83171EE8:
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 608);
	// bl 0x83171a08
	sub_83171A08(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x83171f78
	if (cr0.eq) goto loc_83171F78;
	// lwz r11,920(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 920);
	// lwz r10,916(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 916);
	// lwz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// addi r11,r11,31
	r11.s64 = r11.s64 + 31;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// srawi r10,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = r11.s32 >> 5;
	// lwz r11,916(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 916);
	// lwz r9,920(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 920);
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r10.u64);
	// lwz r11,920(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 920);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83171f48
	if (!cr6.eq) goto loc_83171F48;
	// ld r30,8(r4)
	r30.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
loc_83171F48:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 608);
	// stw r11,920(r31)
	PPC_STORE_U32(r31.u32 + 920, r11.u32);
	// bl 0x831705e8
	sub_831705E8(ctx, base);
	// lwz r11,920(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 920);
	// lwz r10,924(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 924);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x83171f78
	if (!cr6.lt) goto loc_83171F78;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 608);
loc_83171F6C:
	// bl 0x83171250
	sub_83171250(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x83171ee8
	if (!cr6.gt) goto loc_83171EE8;
loc_83171F78:
	// lwz r11,920(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 920);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83171fcc
	if (cr6.eq) goto loc_83171FCC;
	// mr r11,r24
	r11.u64 = r24.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,-29288(r25)
	PPC_STORE_U32(r25.u32 + -29288, r11.u32);
	// lwz r3,620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 620);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 620);
	// lwz r5,920(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 920);
	// lwz r4,916(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 916);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,4
	r11.s64 = 4;
	// mr r27,r24
	r27.u64 = r24.u64;
	// stw r11,616(r31)
	PPC_STORE_U32(r31.u32 + 616, r11.u32);
loc_83171FCC:
	// lwz r11,616(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 616);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x83172044
	if (!cr6.eq) goto loc_83172044;
	// lwz r3,620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 620);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83172044
	if (!cr6.eq) goto loc_83172044;
	// lwz r11,608(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 608);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83172014
	if (!cr6.eq) goto loc_83172014;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// b 0x83172028
	goto loc_83172028;
loc_83172010:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_83172014:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83172010
	if (!cr6.eq) goto loc_83172010;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_83172028:
	// stw r26,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r26.u32);
	// mr r27,r24
	r27.u64 = r24.u64;
	// stw r26,64(r11)
	PPC_STORE_U32(r11.u32 + 64, r26.u32);
	// mr r11,r26
	r11.u64 = r26.u64;
	// stw r26,920(r31)
	PPC_STORE_U32(r31.u32 + 920, r26.u32);
	// stw r23,616(r31)
	PPC_STORE_U32(r31.u32 + 616, r23.u32);
	// stw r11,-29288(r25)
	PPC_STORE_U32(r25.u32 + -29288, r11.u32);
loc_83172044:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_83172048:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_83172058"))) PPC_WEAK_FUNC(sub_83172058);
PPC_FUNC_IMPL(__imp__sub_83172058) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// lwz r31,28(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x831720a4
	if (cr0.eq) goto loc_831720A4;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,2240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f0.f64 = double(temp.f32);
loc_83172088:
	// lfs f13,28(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x83172098
	if (cr6.eq) goto loc_83172098;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_83172098:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83172088
	if (!cr6.eq) goto loc_83172088;
loc_831720A4:
	// extsw r11,r11
	r11.s64 = r11.s32;
	// lfs f0,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 32);
	f0.f64 = double(temp.f32);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f0,f13
	f31.f64 = double(float(f0.f64 * ctx.f13.f64));
	// beq 0x83172134
	if (cr0.eq) goto loc_83172134;
loc_831720C8:
	// lwz r30,72(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 72);
loc_831720CC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83171660
	sub_83171660(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831720cc
	if (!cr0.eq) goto loc_831720CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83171100
	sub_83171100(ctx, base);
	// lwz r11,616(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 616);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	f0.f64 = double(temp.f32);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bne cr6,0x83172118
	if (!cr6.eq) goto loc_83172118;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x83172118
	if (!cr6.gt) goto loc_83172118;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83172118
	if (!cr6.eq) goto loc_83172118;
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
loc_83172118:
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// bge cr6,0x83172128
	if (!cr6.lt) goto loc_83172128;
	// li r11,1
	r11.s64 = 1;
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
loc_83172128:
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831720c8
	if (!cr6.eq) goto loc_831720C8;
loc_83172134:
	// lwz r31,28(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// b 0x83172154
	goto loc_83172154;
loc_8317213C:
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83172150
	if (!cr6.eq) goto loc_83172150;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// bl 0x83171c88
	sub_83171C88(ctx, base);
loc_83172150:
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_83172154:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8317213c
	if (!cr6.eq) goto loc_8317213C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83172170"))) PPC_WEAK_FUNC(sub_83172170);
PPC_FUNC_IMPL(__imp__sub_83172170) {
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
	// lis r31,-31941
	r31.s64 = -2093285376;
	// lwz r11,-29292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -29292);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,-29292(r31)
	PPC_STORE_U32(r31.u32 + -29292, r11.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x831721a0
	if (cr6.eq) goto loc_831721A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831721b4
	goto loc_831721B4;
loc_831721A0:
	// bl 0x83171af0
	sub_83171AF0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831721b4
	if (!cr0.eq) goto loc_831721B4;
	// li r11,0
	r11.s64 = 0;
	// stw r11,-29292(r31)
	PPC_STORE_U32(r31.u32 + -29292, r11.u32);
loc_831721B4:
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

__attribute__((alias("__imp__sub_831721C8"))) PPC_WEAK_FUNC(sub_831721C8);
PPC_FUNC_IMPL(__imp__sub_831721C8) {
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
	// bl 0x83171b68
	sub_83171B68(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83172200
	if (cr6.eq) goto loc_83172200;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r4,936
	ctx.r4.s64 = 936;
	// addi r11,r11,-15316
	r11.s64 = r11.s64 + -15316;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x83168618
	sub_83168618(ctx, base);
loc_83172200:
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

__attribute__((alias("__imp__sub_83172218"))) PPC_WEAK_FUNC(sub_83172218);
PPC_FUNC_IMPL(__imp__sub_83172218) {
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-29296(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -29296);
	// bl 0x83171900
	sub_83171900(ctx, base);
	// stw r3,608(r31)
	PPC_STORE_U32(r31.u32 + 608, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83172264
	if (!cr0.eq) goto loc_83172264;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-28572
	ctx.r4.s64 = r11.s64 + -28572;
loc_8317224C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_83172254:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83171b68
	sub_83171B68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831722f8
	goto loc_831722F8;
loc_83172264:
	// stw r31,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r31.u32);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r10,924(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 924);
	// addi r5,r11,-28588
	ctx.r5.s64 = r11.s64 + -28588;
	// li r6,4
	ctx.r6.s64 = 4;
	// rlwinm r4,r10,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x83168098
	sub_83168098(ctx, base);
	// stw r3,916(r31)
	PPC_STORE_U32(r31.u32 + 916, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831722a8
	if (!cr0.eq) goto loc_831722A8;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,-28600
	ctx.r4.s64 = r11.s64 + -28600;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// b 0x83172254
	goto loc_83172254;
loc_831722A8:
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r10,-29304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -29304);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831722dc
	if (cr6.eq) goto loc_831722DC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// lwz r11,-29304(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -29304);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-29300(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29300);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,620(r31)
	PPC_STORE_U32(r31.u32 + 620, ctx.r3.u32);
loc_831722DC:
	// lwz r11,620(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 620);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831722f4
	if (!cr6.eq) goto loc_831722F4;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-28644
	ctx.r4.s64 = r11.s64 + -28644;
	// b 0x8317224c
	goto loc_8317224C;
loc_831722F4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_831722F8:
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

__attribute__((alias("__imp__sub_83172310"))) PPC_WEAK_FUNC(sub_83172310);
PPC_FUNC_IMPL(__imp__sub_83172310) {
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
	// stw r11,912(r31)
	PPC_STORE_U32(r31.u32 + 912, r11.u32);
	// bl 0x83171be8
	sub_83171BE8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83172344
	if (cr0.eq) goto loc_83172344;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831721c8
	sub_831721C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83172344:
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

__attribute__((alias("__imp__sub_83172358"))) PPC_WEAK_FUNC(sub_83172358);
PPC_FUNC_IMPL(__imp__sub_83172358) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r3,-29296(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -29296);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8317236c
	if (!cr6.eq) goto loc_8317236C;
	// blr 
	return;
loc_8317236C:
	// b 0x83172058
	sub_83172058(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172370"))) PPC_WEAK_FUNC(sub_83172370);
PPC_FUNC_IMPL(__imp__sub_83172370) {
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,-29296(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -29296);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831723b0
	if (!cr6.eq) goto loc_831723B0;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-28484
	ctx.r4.s64 = r11.s64 + -28484;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// b 0x8317244c
	goto loc_8317244C;
loc_831723B0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x831723d0
	if (!cr6.eq) goto loc_831723D0;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-28496
	ctx.r4.s64 = r11.s64 + -28496;
loc_831723C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// b 0x8317244c
	goto loc_8317244C;
loc_831723D0:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r11,-28512
	ctx.r6.s64 = r11.s64 + -28512;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,936
	ctx.r3.s64 = 936;
	// bl 0x831685b0
	sub_831685B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83172408
	if (cr0.eq) goto loc_83172408;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x83170bc0
	sub_83170BC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8317240c
	goto loc_8317240C;
loc_83172408:
	// li r31,0
	r31.s64 = 0;
loc_8317240C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83172424
	if (!cr6.eq) goto loc_83172424;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,-28524
	ctx.r4.s64 = r11.s64 + -28524;
	// b 0x831723c4
	goto loc_831723C4;
loc_83172424:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83172218
	sub_83172218(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x83172450
	if (!cr0.eq) goto loc_83172450;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r4,936
	ctx.r4.s64 = 936;
	// addi r11,r11,-15316
	r11.s64 = r11.s64 + -15316;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x83168618
	sub_83168618(ctx, base);
loc_8317244C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83172450:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172468"))) PPC_WEAK_FUNC(sub_83172468);
PPC_FUNC_IMPL(__imp__sub_83172468) {
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
	// li r30,0
	r30.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// li r5,260
	ctx.r5.s64 = 260;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// stw r30,264(r31)
	PPC_STORE_U32(r31.u32 + 264, r30.u32);
	// stw r30,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r30.u32);
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

__attribute__((alias("__imp__sub_831724C0"))) PPC_WEAK_FUNC(sub_831724C0);
PPC_FUNC_IMPL(__imp__sub_831724C0) {
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
	// li r29,0
	r29.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// mr r27,r29
	r27.u64 = r29.u64;
	// stw r29,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r29.u32);
	// bne cr6,0x83172504
	if (!cr6.eq) goto loc_83172504;
loc_831724E8:
	// li r5,260
	ctx.r5.s64 = 260;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// stw r29,264(r30)
	PPC_STORE_U32(r30.u32 + 264, r29.u32);
	// stw r29,268(r30)
	PPC_STORE_U32(r30.u32 + 268, r29.u32);
	// b 0x831725e8
	goto loc_831725E8;
loc_83172504:
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_83172508:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83172508
	if (!cr6.eq) goto loc_83172508;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi. r31,r11,0
	r31.u64 = __builtin_rotateleft32(r11.u32, 0);
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// ble 0x831724e8
	if (!cr0.gt) goto loc_831724E8;
	// add r11,r31,r4
	r11.u64 = r31.u64 + ctx.r4.u64;
	// lbz r11,-1(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,92
	cr6.compare<int32_t>(r11.s32, 92, xer);
	// beq cr6,0x8317254c
	if (cr6.eq) goto loc_8317254C;
	// cmpwi cr6,r11,47
	cr6.compare<int32_t>(r11.s32, 47, xer);
	// beq cr6,0x8317254c
	if (cr6.eq) goto loc_8317254C;
	// li r27,1
	r27.s64 = 1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_8317254C:
	// cmpwi cr6,r31,260
	cr6.compare<int32_t>(r31.s32, 260, xer);
	// ble cr6,0x83172570
	if (!cr6.gt) goto loc_83172570;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-28440
	ctx.r4.s64 = r11.s64 + -28440;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x831725e8
	goto loc_831725E8;
loc_83172570:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r28,r30,4
	r28.s64 = r30.s64 + 4;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,27928
	ctx.r4.s64 = r11.s64 + 27928;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831b1630
	sub_831B1630(ctx, base);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x831725a0
	if (cr6.eq) goto loc_831725A0;
	// add r11,r31,r30
	r11.u64 = r31.u64 + r30.u64;
	// li r10,92
	ctx.r10.s64 = 92;
	// stb r10,3(r11)
	PPC_STORE_U8(r11.u32 + 3, ctx.r10.u8);
	// stb r29,4(r11)
	PPC_STORE_U8(r11.u32 + 4, r29.u8);
loc_831725A0:
	// stw r31,264(r30)
	PPC_STORE_U32(r30.u32 + 264, r31.u32);
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// stw r29,268(r30)
	PPC_STORE_U32(r30.u32 + 268, r29.u32);
	// ble cr6,0x831725e8
	if (!cr6.gt) goto loc_831725E8;
loc_831725B4:
	// lbzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + r11.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,58
	cr6.compare<int32_t>(ctx.r10.s32, 58, xer);
	// beq cr6,0x831725e4
	if (cr6.eq) goto loc_831725E4;
	// cmpwi cr6,r10,92
	cr6.compare<int32_t>(ctx.r10.s32, 92, xer);
	// beq cr6,0x831725e8
	if (cr6.eq) goto loc_831725E8;
	// cmpwi cr6,r10,47
	cr6.compare<int32_t>(ctx.r10.s32, 47, xer);
	// beq cr6,0x831725e8
	if (cr6.eq) goto loc_831725E8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// blt cr6,0x831725b4
	if (cr6.lt) goto loc_831725B4;
	// b 0x831725e8
	goto loc_831725E8;
loc_831725E4:
	// stw r11,268(r30)
	PPC_STORE_U32(r30.u32 + 268, r11.u32);
loc_831725E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_831725F0"))) PPC_WEAK_FUNC(sub_831725F0);
PPC_FUNC_IMPL(__imp__sub_831725F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172600"))) PPC_WEAK_FUNC(sub_83172600);
PPC_FUNC_IMPL(__imp__sub_83172600) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x83172610
	if (!cr6.eq) goto loc_83172610;
loc_83172608:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83172610:
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,92
	cr6.compare<int32_t>(r11.s32, 92, xer);
	// beq cr6,0x8317269c
	if (cr6.eq) goto loc_8317269C;
	// cmpwi cr6,r11,47
	cr6.compare<int32_t>(r11.s32, 47, xer);
	// beq cr6,0x8317269c
	if (cr6.eq) goto loc_8317269C;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	r11.s64 = 1;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// ble cr6,0x83172608
	if (!cr6.gt) goto loc_83172608;
loc_83172638:
	// lbzx r10,r11,r4
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r4.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,92
	cr6.compare<int32_t>(ctx.r10.s32, 92, xer);
	// beq cr6,0x83172650
	if (cr6.eq) goto loc_83172650;
	// cmpwi cr6,r10,47
	cr6.compare<int32_t>(ctx.r10.s32, 47, xer);
	// bne cr6,0x83172654
	if (!cr6.eq) goto loc_83172654;
loc_83172650:
	// li r9,1
	ctx.r9.s64 = 1;
loc_83172654:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x83172664
	if (!cr6.eq) goto loc_83172664;
	// cmpwi cr6,r10,58
	cr6.compare<int32_t>(ctx.r10.s32, 58, xer);
	// beq cr6,0x8317268c
	if (cr6.eq) goto loc_8317268C;
loc_83172664:
	// add r8,r11,r4
	ctx.r8.u64 = r11.u64 + ctx.r4.u64;
	// lbz r8,-1(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + -1);
	// cmplwi cr6,r8,46
	cr6.compare<uint32_t>(ctx.r8.u32, 46, xer);
	// bne cr6,0x8317267c
	if (!cr6.eq) goto loc_8317267C;
	// cmpwi cr6,r10,47
	cr6.compare<int32_t>(ctx.r10.s32, 47, xer);
	// beq cr6,0x83172694
	if (cr6.eq) goto loc_83172694;
loc_8317267C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(r11.s32, ctx.r5.s32, xer);
	// blt cr6,0x83172638
	if (cr6.lt) goto loc_83172638;
	// b 0x83172608
	goto loc_83172608;
loc_8317268C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83172694:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_8317269C:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831726A8"))) PPC_WEAK_FUNC(sub_831726A8);
PPC_FUNC_IMPL(__imp__sub_831726A8) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// cmpw cr6,r5,r7
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, xer);
	// ble cr6,0x831726e4
	if (!cr6.gt) goto loc_831726E4;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-28404
	ctx.r4.s64 = r11.s64 + -28404;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x831726fc
	goto loc_831726FC;
loc_831726E4:
	// subf r10,r11,r6
	ctx.r10.s64 = ctx.r6.s64 - r11.s64;
loc_831726E8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x831726e8
	if (!cr0.eq) goto loc_831726E8;
loc_831726FC:
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

__attribute__((alias("__imp__sub_83172710"))) PPC_WEAK_FUNC(sub_83172710);
PPC_FUNC_IMPL(__imp__sub_83172710) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// lwz r11,268(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// add r10,r11,r5
	ctx.r10.u64 = r11.u64 + ctx.r5.u64;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// ble cr6,0x83172758
	if (!cr6.gt) goto loc_83172758;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-28344
	ctx.r4.s64 = r11.s64 + -28344;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x831727b0
	goto loc_831727B0;
loc_83172758:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83172780
	if (!cr6.gt) goto loc_83172780;
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b4fa0
	sub_831B4FA0(ctx, base);
	// lwz r11,268(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// stb r10,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r10.u8);
loc_83172780:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_83172784:
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83172784
	if (!cr6.eq) goto loc_83172784;
	// addi r11,r30,-1
	r11.s64 = r30.s64 + -1;
loc_83172798:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne cr6,0x83172798
	if (!cr6.eq) goto loc_83172798;
loc_831727B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831727B8"))) PPC_WEAK_FUNC(sub_831727B8);
PPC_FUNC_IMPL(__imp__sub_831727B8) {
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
	// lwz r11,264(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// ble cr6,0x831727fc
	if (!cr6.gt) goto loc_831727FC;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-28284
	ctx.r4.s64 = r11.s64 + -28284;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x83172844
	goto loc_83172844;
loc_831727FC:
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// subf r9,r11,r6
	ctx.r9.s64 = ctx.r6.s64 - r11.s64;
loc_83172804:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x83172804
	if (!cr0.eq) goto loc_83172804;
loc_83172818:
	// lbz r11,0(r6)
	r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83172818
	if (!cr6.eq) goto loc_83172818;
	// addi r11,r6,-1
	r11.s64 = ctx.r6.s64 + -1;
loc_8317282C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne cr6,0x8317282c
	if (!cr6.eq) goto loc_8317282C;
loc_83172844:
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

__attribute__((alias("__imp__sub_83172858"))) PPC_WEAK_FUNC(sub_83172858);
PPC_FUNC_IMPL(__imp__sub_83172858) {
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
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// beq cr6,0x83172918
	if (cr6.eq) goto loc_83172918;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83172918
	if (cr6.eq) goto loc_83172918;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
loc_83172890:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83172890
	if (!cr6.eq) goto loc_83172890;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi. r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bge 0x831728c8
	if (!cr0.lt) goto loc_831728C8;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-28188
	ctx.r4.s64 = r11.s64 + -28188;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// b 0x8317292c
	goto loc_8317292C;
loc_831728C8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83172600
	sub_83172600(ctx, base);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// beq cr6,0x83172900
	if (cr6.eq) goto loc_83172900;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x831728f8
	if (cr6.eq) goto loc_831728F8;
	// bl 0x831727b8
	sub_831727B8(ctx, base);
	// b 0x83172908
	goto loc_83172908;
loc_831728F8:
	// bl 0x83172710
	sub_83172710(ctx, base);
	// b 0x83172908
	goto loc_83172908;
loc_83172900:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831726a8
	sub_831726A8(ctx, base);
loc_83172908:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83172930
	if (cr6.eq) goto loc_83172930;
	// b 0x8317292c
	goto loc_8317292C;
loc_83172918:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-28224
	ctx.r4.s64 = r11.s64 + -28224;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r11,-2
	r11.s64 = -2;
loc_8317292C:
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_83172930:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83172938"))) PPC_WEAK_FUNC(sub_83172938);
PPC_FUNC_IMPL(__imp__sub_83172938) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83172994
	if (cr6.eq) goto loc_83172994;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-28148
	ctx.r4.s64 = r11.s64 + -28148;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83172994
	if (!cr6.eq) goto loc_83172994;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
loc_83172994:
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

__attribute__((alias("__imp__sub_831729A8"))) PPC_WEAK_FUNC(sub_831729A8);
PPC_FUNC_IMPL(__imp__sub_831729A8) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83172a04
	if (cr6.eq) goto loc_83172A04;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-28100
	ctx.r4.s64 = r11.s64 + -28100;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83172a04
	if (!cr6.eq) goto loc_83172A04;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
loc_83172A04:
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

__attribute__((alias("__imp__sub_83172A18"))) PPC_WEAK_FUNC(sub_83172A18);
PPC_FUNC_IMPL(__imp__sub_83172A18) {
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
	// li r30,0
	r30.s64 = 0;
	// stw r30,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r30.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83172a60
	if (cr6.eq) goto loc_83172A60;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r4,r10,-29936
	ctx.r4.s64 = ctx.r10.s64 + -29936;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
loc_83172A60:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172A88"))) PPC_WEAK_FUNC(sub_83172A88);
PPC_FUNC_IMPL(__imp__sub_83172A88) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x83172938
	sub_83172938(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// bl 0x831729a8
	sub_831729A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83172AC8"))) PPC_WEAK_FUNC(sub_83172AC8);
PPC_FUNC_IMPL(__imp__sub_83172AC8) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
	// bne cr6,0x83172b04
	if (!cr6.eq) goto loc_83172B04;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-27960
	ctx.r4.s64 = r11.s64 + -27960;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r11,-2
	r11.s64 = -2;
loc_83172AFC:
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x83172bc4
	goto loc_83172BC4;
loc_83172B04:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x831686a0
	sub_831686A0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x83172b48
	if (cr0.eq) goto loc_83172B48;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// b 0x83172b4c
	goto loc_83172B4C;
loc_83172B48:
	// mr r31,r30
	r31.u64 = r30.u64;
loc_83172B4C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83172b6c
	if (!cr6.eq) goto loc_83172B6C;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-28000
	ctx.r4.s64 = r11.s64 + -28000;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r11,-3
	r11.s64 = -3;
	// b 0x83172afc
	goto loc_83172AFC;
loc_83172B6C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x831686d0
	sub_831686D0(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83172b9c
	if (cr0.eq) goto loc_83172B9C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83172b9c
	if (!cr6.eq) goto loc_83172B9C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x83172bc8
	goto loc_83172BC8;
loc_83172B9C:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-28052
	ctx.r4.s64 = r11.s64 + -28052;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-29936
	ctx.r4.s64 = ctx.r10.s64 + -29936;
	// bl 0x83172a18
	sub_83172A18(ctx, base);
loc_83172BC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83172BC8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83172BD0"))) PPC_WEAK_FUNC(sub_83172BD0);
PPC_FUNC_IMPL(__imp__sub_83172BD0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x83172938
	sub_83172938(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83153d40
	sub_83153D40(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// bl 0x831729a8
	sub_831729A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83172C18"))) PPC_WEAK_FUNC(sub_83172C18);
PPC_FUNC_IMPL(__imp__sub_83172C18) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x83172938
	sub_83172938(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83148a80
	sub_83148A80(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// bl 0x831729a8
	sub_831729A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83172C60"))) PPC_WEAK_FUNC(sub_83172C60);
PPC_FUNC_IMPL(__imp__sub_83172C60) {
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
	// lis r11,-32230
	r11.s64 = -2112225280;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,-27920
	r11.s64 = r11.s64 + -27920;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x83172c90
	if (cr0.eq) goto loc_83172C90;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83168618
	sub_83168618(ctx, base);
loc_83172C90:
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

__attribute__((alias("__imp__sub_83172CA8"))) PPC_WEAK_FUNC(sub_83172CA8);
PPC_FUNC_IMPL(__imp__sub_83172CA8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// mr r31,r27
	r31.u64 = r27.u64;
	// addi r30,r9,-25156
	r30.s64 = ctx.r9.s64 + -25156;
	// addi r28,r10,-29624
	r28.s64 = ctx.r10.s64 + -29624;
	// addi r29,r11,-25172
	r29.s64 = r11.s64 + -25172;
loc_83172CD8:
	// lwzx r3,r31,r29
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r29.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83172d08
	if (cr6.eq) goto loc_83172D08;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwzx r4,r31,r30
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// add r11,r31,r30
	r11.u64 = r31.u64 + r30.u64;
	// bl 0x83178378
	sub_83178378(ctx, base);
	// stwx r27,r31,r30
	PPC_STORE_U32(r31.u32 + r30.u32, r27.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r31,r29
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r29.u32);
	// bl 0x83178568
	sub_83178568(ctx, base);
	// stwx r27,r31,r29
	PPC_STORE_U32(r31.u32 + r29.u32, r27.u32);
loc_83172D08:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpwi cr6,r31,16
	cr6.compare<int32_t>(r31.s32, 16, xer);
	// blt cr6,0x83172cd8
	if (cr6.lt) goto loc_83172CD8;
	// lis r31,-31941
	r31.s64 = -2093285376;
	// lwz r3,-25176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -25176);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83172d30
	if (cr6.eq) goto loc_83172D30;
	// bl 0x83168240
	sub_83168240(ctx, base);
	// mr r11,r27
	r11.u64 = r27.u64;
	// stw r11,-25176(r31)
	PPC_STORE_U32(r31.u32 + -25176, r11.u32);
loc_83172D30:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83178d08
	sub_83178D08(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83178520
	sub_83178520(ctx, base);
	// bl 0x83167fb0
	sub_83167FB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83172D50"))) PPC_WEAK_FUNC(sub_83172D50);
PPC_FUNC_IMPL(__imp__sub_83172D50) {
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
	// lwz r3,584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 584);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83172d84
	if (cr6.eq) goto loc_83172D84;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// addi r5,r11,-29624
	ctx.r5.s64 = r11.s64 + -29624;
	// bl 0x8316d4e8
	sub_8316D4E8(ctx, base);
loc_83172D84:
	// lwz r3,592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 592);
	// li r30,0
	r30.s64 = 0;
	// stw r30,668(r31)
	PPC_STORE_U32(r31.u32 + 668, r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83172db4
	if (cr6.eq) goto loc_83172DB4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r4,r10,-29936
	ctx.r4.s64 = ctx.r10.s64 + -29936;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,592(r31)
	PPC_STORE_U32(r31.u32 + 592, r30.u32);
loc_83172DB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172DD0"))) PPC_WEAK_FUNC(sub_83172DD0);
PPC_FUNC_IMPL(__imp__sub_83172DD0) {
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
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-27816
	ctx.r4.s64 = r11.s64 + -27816;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
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

__attribute__((alias("__imp__sub_83172E10"))) PPC_WEAK_FUNC(sub_83172E10);
PPC_FUNC_IMPL(__imp__sub_83172E10) {
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
	// lwz r11,324(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83172e50
	if (!cr6.eq) goto loc_83172E50;
	// lwz r11,704(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 704);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// addi r10,r10,-25172
	ctx.r10.s64 = ctx.r10.s64 + -25172;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r9,-29624
	ctx.r4.s64 = ctx.r9.s64 + -29624;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x83178918
	sub_83178918(ctx, base);
loc_83172E50:
	// lwz r3,324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 324);
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

__attribute__((alias("__imp__sub_83172E68"))) PPC_WEAK_FUNC(sub_83172E68);
PPC_FUNC_IMPL(__imp__sub_83172E68) {
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
	// lwz r11,328(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 328);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83172ea8
	if (!cr6.eq) goto loc_83172EA8;
	// lwz r11,704(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 704);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// addi r10,r10,-25172
	ctx.r10.s64 = ctx.r10.s64 + -25172;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r9,-29624
	ctx.r4.s64 = ctx.r9.s64 + -29624;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x83178918
	sub_83178918(ctx, base);
loc_83172EA8:
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 328);
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

__attribute__((alias("__imp__sub_83172EC0"))) PPC_WEAK_FUNC(sub_83172EC0);
PPC_FUNC_IMPL(__imp__sub_83172EC0) {
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
	// lwz r11,496(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 496);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83172f00
	if (!cr6.eq) goto loc_83172F00;
	// lwz r11,704(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 704);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// addi r10,r10,-25172
	ctx.r10.s64 = ctx.r10.s64 + -25172;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r9,-29624
	ctx.r4.s64 = ctx.r9.s64 + -29624;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x83178918
	sub_83178918(ctx, base);
loc_83172F00:
	// lwz r3,496(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 496);
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

__attribute__((alias("__imp__sub_83172F18"))) PPC_WEAK_FUNC(sub_83172F18);
PPC_FUNC_IMPL(__imp__sub_83172F18) {
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lis r28,-31946
	r28.s64 = -2093613056;
	// addi r26,r11,-25172
	r26.s64 = r11.s64 + -25172;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// mr r27,r26
	r27.u64 = r26.u64;
	// lis r29,-31946
	r29.s64 = -2093613056;
	// addi r30,r11,-29624
	r30.s64 = r11.s64 + -29624;
loc_83172F40:
	// lwz r31,0(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83172f6c
	if (cr6.eq) goto loc_83172F6C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,-15044(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + -15044);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831784a8
	sub_831784A8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,-15040(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + -15040);
	// bl 0x831784d0
	sub_831784D0(ctx, base);
loc_83172F6C:
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// addi r11,r26,16
	r11.s64 = r26.s64 + 16;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x83172f40
	if (cr6.lt) goto loc_83172F40;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83172F88"))) PPC_WEAK_FUNC(sub_83172F88);
PPC_FUNC_IMPL(__imp__sub_83172F88) {
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
	// lwz r30,376(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	// addi r31,r3,352
	r31.s64 = ctx.r3.s64 + 352;
	// lwz r7,392(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// lwz r6,388(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// lwz r5,384(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	// lwz r4,380(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x83172fd4
	if (!cr0.eq) goto loc_83172FD4;
	// li r11,0
	r11.s64 = 0;
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// b 0x83173030
	goto loc_83173030;
loc_83172FD4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// std r3,48(r31)
	PPC_STORE_U64(r31.u32 + 48, ctx.r3.u64);
	// cmpdi cr6,r3,0
	cr6.compare<int64_t>(ctx.r3.s64, 0, xer);
	// bge cr6,0x83173020
	if (!cr6.lt) goto loc_83173020;
	// li r11,0
	r11.s64 = 0;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83173030
	goto loc_83173030;
loc_83173020:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r10.u32);
loc_83173030:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83173038"))) PPC_WEAK_FUNC(sub_83173038);
PPC_FUNC_IMPL(__imp__sub_83173038) {
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
	// addi r31,r3,416
	r31.s64 = ctx.r3.s64 + 416;
	// lwz r3,440(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 440);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8317306c
	if (!cr6.eq) goto loc_8317306C;
	// li r11,0
	r11.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// b 0x831730a8
	goto loc_831730A8;
loc_8317306C:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83173084
	if (cr6.eq) goto loc_83173084;
	// li r11,1
	r11.s64 = 1;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// b 0x8317309c
	goto loc_8317309C;
loc_83173084:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r3.u32);
loc_8317309C:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_831730A8:
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

__attribute__((alias("__imp__sub_831730C0"))) PPC_WEAK_FUNC(sub_831730C0);
PPC_FUNC_IMPL(__imp__sub_831730C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,704(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 704);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// lwz r9,580(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 580);
	// addi r4,r3,464
	ctx.r4.s64 = ctx.r3.s64 + 464;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-25172
	ctx.r10.s64 = ctx.r10.s64 + -25172;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bne cr6,0x831730f4
	if (!cr6.eq) goto loc_831730F4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r11,4
	r11.s64 = 4;
	// std r10,96(r4)
	PPC_STORE_U64(ctx.r4.u32 + 96, ctx.r10.u64);
	// b 0x8317316c
	goto loc_8317316C;
loc_831730F4:
	// lwz r7,112(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x83173118
	if (!cr6.eq) goto loc_83173118;
	// lwz r11,108(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83173118
	if (!cr6.eq) goto loc_83173118;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r5,r11,-29624
	ctx.r5.s64 = r11.s64 + -29624;
	// b 0x83178670
	sub_83178670(ctx, base);
	return;
loc_83173118:
	// ld r11,88(r4)
	r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// ld r9,96(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 96);
	// lwz r8,52(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// lwz r6,48(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// addi r11,r8,1
	r11.s64 = ctx.r8.s64 + 1;
	// std r10,88(r4)
	PPC_STORE_U64(ctx.r4.u32 + 88, ctx.r10.u64);
	// std r9,96(r4)
	PPC_STORE_U64(ctx.r4.u32 + 96, ctx.r9.u64);
	// stw r11,52(r4)
	PPC_STORE_U32(ctx.r4.u32 + 52, r11.u32);
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(r11.s32, ctx.r6.s32, xer);
	// std r10,56(r4)
	PPC_STORE_U64(ctx.r4.u32 + 56, ctx.r10.u64);
	// bge cr6,0x8317315c
	if (!cr6.lt) goto loc_8317315C;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// stw r10,112(r4)
	PPC_STORE_U32(ctx.r4.u32 + 112, ctx.r10.u32);
	// addi r5,r11,-29624
	ctx.r5.s64 = r11.s64 + -29624;
	// b 0x83178670
	sub_83178670(ctx, base);
	return;
loc_8317315C:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// li r11,2
	r11.s64 = 2;
	// bne cr6,0x8317316c
	if (!cr6.eq) goto loc_8317316C;
	// li r11,3
	r11.s64 = 3;
loc_8317316C:
	// stw r11,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173178"))) PPC_WEAK_FUNC(sub_83173178);
PPC_FUNC_IMPL(__imp__sub_83173178) {
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
	// bl 0x83172e10
	sub_83172E10(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x831731a0
	if (cr6.eq) goto loc_831731A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831731b8
	goto loc_831731B8;
loc_831731A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83172e68
	sub_83172E68(ctx, base);
	// addi r11,r3,-2
	r11.s64 = ctx.r3.s64 + -2;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_831731B8:
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

__attribute__((alias("__imp__sub_831731D0"))) PPC_WEAK_FUNC(sub_831731D0);
PPC_FUNC_IMPL(__imp__sub_831731D0) {
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
	// bl 0x83172e10
	sub_83172E10(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x831731f8
	if (!cr6.eq) goto loc_831731F8;
loc_831731F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83173220
	goto loc_83173220;
loc_831731F8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83172e68
	sub_83172E68(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x831731f0
	if (cr6.eq) goto loc_831731F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83172ec0
	sub_83172EC0(ctx, base);
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_83173220:
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

__attribute__((alias("__imp__sub_83173238"))) PPC_WEAK_FUNC(sub_83173238);
PPC_FUNC_IMPL(__imp__sub_83173238) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 592);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83173294
	if (cr6.eq) goto loc_83173294;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-27748
	ctx.r4.s64 = r11.s64 + -27748;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r11,660(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83173294
	if (!cr6.eq) goto loc_83173294;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,660(r31)
	PPC_STORE_U32(r31.u32 + 660, r11.u32);
loc_83173294:
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

__attribute__((alias("__imp__sub_831732A8"))) PPC_WEAK_FUNC(sub_831732A8);
PPC_FUNC_IMPL(__imp__sub_831732A8) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 592);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83173304
	if (cr6.eq) goto loc_83173304;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-27700
	ctx.r4.s64 = r11.s64 + -27700;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r11,660(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83173304
	if (!cr6.eq) goto loc_83173304;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,660(r31)
	PPC_STORE_U32(r31.u32 + 660, r11.u32);
loc_83173304:
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

__attribute__((alias("__imp__sub_83173318"))) PPC_WEAK_FUNC(sub_83173318);
PPC_FUNC_IMPL(__imp__sub_83173318) {
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
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,-27648
	r11.s64 = r11.s64 + -27648;
	// addi r3,r31,596
	ctx.r3.s64 = r31.s64 + 596;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r30,584(r31)
	PPC_STORE_U32(r31.u32 + 584, r30.u32);
	// stw r30,588(r31)
	PPC_STORE_U32(r31.u32 + 588, r30.u32);
	// stw r30,592(r31)
	PPC_STORE_U32(r31.u32 + 592, r30.u32);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r11,8
	r11.s64 = 8;
	// stw r30,660(r31)
	PPC_STORE_U32(r31.u32 + 660, r30.u32);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// stw r11,664(r31)
	PPC_STORE_U32(r31.u32 + 664, r11.u32);
	// li r5,260
	ctx.r5.s64 = 260;
	// std r10,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// addi r3,r31,672
	ctx.r3.s64 = r31.s64 + 672;
	// stw r30,740(r31)
	PPC_STORE_U32(r31.u32 + 740, r30.u32);
	// li r5,68
	ctx.r5.s64 = 68;
	// stw r11,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r30,668(r31)
	PPC_STORE_U32(r31.u32 + 668, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,744(r31)
	PPC_STORE_U32(r31.u32 + 744, r30.u32);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// addi r3,r31,336
	ctx.r3.s64 = r31.s64 + 336;
	// stw r30,320(r31)
	PPC_STORE_U32(r31.u32 + 320, r30.u32);
	// clrldi r11,r11,1
	r11.u64 = r11.u64 & 0x7FFFFFFFFFFFFFFF;
	// std r30,752(r31)
	PPC_STORE_U64(r31.u32 + 752, r30.u64);
	// li r5,16
	ctx.r5.s64 = 16;
	// std r30,760(r31)
	PPC_STORE_U64(r31.u32 + 760, r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,768(r31)
	PPC_STORE_U64(r31.u32 + 768, r30.u64);
	// std r11,776(r31)
	PPC_STORE_U64(r31.u32 + 776, r11.u64);
	// stw r30,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r30.u32);
	// stw r30,328(r31)
	PPC_STORE_U32(r31.u32 + 328, r30.u32);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// addi r3,r31,352
	ctx.r3.s64 = r31.s64 + 352;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// addi r3,r31,464
	ctx.r3.s64 = r31.s64 + 464;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
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

__attribute__((alias("__imp__sub_83173440"))) PPC_WEAK_FUNC(sub_83173440);
PPC_FUNC_IMPL(__imp__sub_83173440) {
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
	// lis r11,-32230
	r11.s64 = -2112225280;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,-27920
	r11.s64 = r11.s64 + -27920;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x83173470
	if (cr0.eq) goto loc_83173470;
	// li r4,784
	ctx.r4.s64 = 784;
	// bl 0x83168618
	sub_83168618(ctx, base);
loc_83173470:
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

__attribute__((alias("__imp__sub_83173488"))) PPC_WEAK_FUNC(sub_83173488);
PPC_FUNC_IMPL(__imp__sub_83173488) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31941
	r11.s64 = -2093285376;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,-29280
	ctx.r7.s64 = r11.s64 + -29280;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
loc_83173498:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x83173498
	if (!cr0.eq) goto loc_83173498;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r3,r11,-29624
	ctx.r3.s64 = r11.s64 + -29624;
	// b 0x83172ca8
	sub_83172CA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831734CC"))) PPC_WEAK_FUNC(sub_831734CC);
PPC_FUNC_IMPL(__imp__sub_831734CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831734D0"))) PPC_WEAK_FUNC(sub_831734D0);
PPC_FUNC_IMPL(__imp__sub_831734D0) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r31,596
	ctx.r3.s64 = r31.s64 + 596;
	// bl 0x831686d0
	sub_831686D0(ctx, base);
	// stw r3,592(r31)
	PPC_STORE_U32(r31.u32 + 592, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8317355c
	if (cr0.eq) goto loc_8317355C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8317355c
	if (!cr6.eq) goto loc_8317355C;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-29276(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -29276);
	// stw r10,-29624(r9)
	PPC_STORE_U32(ctx.r9.u32 + -29624, ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83173538
	if (!cr0.eq) goto loc_83173538;
	// bl 0x83179490
	sub_83179490(ctx, base);
loc_83173538:
	// stw r3,668(r31)
	PPC_STORE_U32(r31.u32 + 668, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83173550
	if (!cr6.eq) goto loc_83173550;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-27488
	ctx.r4.s64 = r11.s64 + -27488;
	// b 0x83173564
	goto loc_83173564;
loc_83173550:
	// stw r30,588(r31)
	PPC_STORE_U32(r31.u32 + 588, r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83173578
	goto loc_83173578;
loc_8317355C:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-27540
	ctx.r4.s64 = r11.s64 + -27540;
loc_83173564:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83172d50
	sub_83172D50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83173578:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173590"))) PPC_WEAK_FUNC(sub_83173590);
PPC_FUNC_IMPL(__imp__sub_83173590) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x83173238
	sub_83173238(ctx, base);
	// lwz r10,660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// li r11,0
	r11.s64 = 0;
	// stw r30,584(r31)
	PPC_STORE_U32(r31.u32 + 584, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,660(r31)
	PPC_STORE_U32(r31.u32 + 660, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// bl 0x831732a8
	sub_831732A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831735D0"))) PPC_WEAK_FUNC(sub_831735D0);
PPC_FUNC_IMPL(__imp__sub_831735D0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x83173238
	sub_83173238(ctx, base);
	// lwz r10,660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,660(r31)
	PPC_STORE_U32(r31.u32 + 660, r11.u32);
	// lwz r29,664(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 664);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// bl 0x831732a8
	sub_831732A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83173610"))) PPC_WEAK_FUNC(sub_83173610);
PPC_FUNC_IMPL(__imp__sub_83173610) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x83173238
	sub_83173238(ctx, base);
	// lwz r10,660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// li r11,0
	r11.s64 = 0;
	// stw r30,664(r31)
	PPC_STORE_U32(r31.u32 + 664, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,660(r31)
	PPC_STORE_U32(r31.u32 + 660, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// bl 0x831732a8
	sub_831732A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83173650"))) PPC_WEAK_FUNC(sub_83173650);
PPC_FUNC_IMPL(__imp__sub_83173650) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x83173238
	sub_83173238(ctx, base);
	// lwz r10,660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,660(r31)
	PPC_STORE_U32(r31.u32 + 660, r11.u32);
	// ld r29,16(r31)
	r29.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// bl 0x831732a8
	sub_831732A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83173690"))) PPC_WEAK_FUNC(sub_83173690);
PPC_FUNC_IMPL(__imp__sub_83173690) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x83173238
	sub_83173238(ctx, base);
	// lwz r10,660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// li r11,0
	r11.s64 = 0;
	// std r30,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r30.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,660(r31)
	PPC_STORE_U32(r31.u32 + 660, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// bl 0x831732a8
	sub_831732A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831736D0"))) PPC_WEAK_FUNC(sub_831736D0);
PPC_FUNC_IMPL(__imp__sub_831736D0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// bl 0x831731d0
	sub_831731D0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83173704
	if (!cr0.eq) goto loc_83173704;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-27256
	ctx.r4.s64 = r11.s64 + -27256;
	// b 0x83173948
	goto loc_83173948;
loc_83173704:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83172e10
	sub_83172E10(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83173940
	if (cr6.eq) goto loc_83173940;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83173738
	if (!cr6.eq) goto loc_83173738;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83172e68
	sub_83172E68(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83173738
	if (cr6.eq) goto loc_83173738;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-27320
	ctx.r4.s64 = r11.s64 + -27320;
	// b 0x83173948
	goto loc_83173948;
loc_83173738:
	// lwz r3,584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 584);
	// li r29,0
	r29.s64 = 0;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r27,668(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 668);
	// addi r30,r31,24
	r30.s64 = r31.s64 + 24;
	// stb r29,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r29.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r26,r11,-29624
	r26.s64 = r11.s64 + -29624;
	// beq cr6,0x83173774
	if (cr6.eq) goto loc_83173774;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,260
	ctx.r6.s64 = 260;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8316d3d8
	sub_8316D3D8(ctx, base);
	// b 0x831737a8
	goto loc_831737A8;
loc_83173774:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8317377C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8317377c
	if (!cr6.eq) goto loc_8317377C;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_83173790:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne cr6,0x83173790
	if (!cr6.eq) goto loc_83173790;
loc_831737A8:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831737d8
	if (!cr0.eq) goto loc_831737D8;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-27364
	ctx.r4.s64 = r11.s64 + -27364;
	// b 0x83173948
	goto loc_83173948;
loc_831737D8:
	// addi r3,r31,672
	ctx.r3.s64 = r31.s64 + 672;
	// std r29,752(r31)
	PPC_STORE_U64(r31.u32 + 752, r29.u64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r29,760(r31)
	PPC_STORE_U64(r31.u32 + 760, r29.u64);
	// li r5,68
	ctx.r5.s64 = 68;
	// stw r29,328(r31)
	PPC_STORE_U32(r31.u32 + 328, r29.u32);
	// stw r25,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r25.u32);
	// addi r27,r31,752
	r27.s64 = r31.s64 + 752;
	// stw r24,740(r31)
	PPC_STORE_U32(r31.u32 + 740, r24.u32);
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
loc_83173804:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83173804
	if (!cr6.eq) goto loc_83173804;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi. r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x83173848
	if (!cr0.gt) goto loc_83173848;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_83173828:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,47
	cr6.compare<uint32_t>(ctx.r9.u32, 47, xer);
	// bne cr6,0x8317383c
	if (!cr6.eq) goto loc_8317383C;
	// li r9,92
	ctx.r9.s64 = 92;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
loc_8317383C:
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x83173828
	if (!cr0.eq) goto loc_83173828;
loc_83173848:
	// addi r29,r31,744
	r29.s64 = r31.s64 + 744;
	// lwz r5,740(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 740);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// lwz r4,284(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 284);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83178eb8
	sub_83178EB8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq 0x831738c8
	if (cr0.eq) goto loc_831738C8;
	// addi r28,r31,288
	r28.s64 = r31.s64 + 288;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// stw r30,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r30.u32);
	// lwz r11,284(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 284);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r11,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,740(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 740);
	// stw r11,304(r31)
	PPC_STORE_U32(r31.u32 + 304, r11.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r11,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r11.u32);
	// ld r11,0(r27)
	r11.u64 = PPC_LOAD_U64(r27.u32 + 0);
	// std r11,312(r31)
	PPC_STORE_U64(r31.u32 + 312, r11.u64);
	// bl 0x83178dc8
	sub_83178DC8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,320(r31)
	PPC_STORE_U32(r31.u32 + 320, r11.u32);
	// stw r10,324(r31)
	PPC_STORE_U32(r31.u32 + 324, ctx.r10.u32);
	// b 0x83173964
	goto loc_83173964;
loc_831738C8:
	// lwz r11,704(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 704);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r28,r31,352
	r28.s64 = r31.s64 + 352;
	// addi r10,r10,-25172
	ctx.r10.s64 = ctx.r10.s64 + -25172;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwzx r27,r11,r10
	r27.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lwz r10,668(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 668);
	// li r11,1
	r11.s64 = 1;
	// stw r30,384(r31)
	PPC_STORE_U32(r31.u32 + 384, r30.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r10,376(r31)
	PPC_STORE_U32(r31.u32 + 376, ctx.r10.u32);
	// lwz r10,284(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 284);
	// stw r10,388(r31)
	PPC_STORE_U32(r31.u32 + 388, ctx.r10.u32);
	// lwz r10,740(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 740);
	// stw r10,392(r31)
	PPC_STORE_U32(r31.u32 + 392, ctx.r10.u32);
	// stw r29,408(r31)
	PPC_STORE_U32(r31.u32 + 408, r29.u32);
	// lwz r10,588(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 588);
	// stw r10,380(r31)
	PPC_STORE_U32(r31.u32 + 380, ctx.r10.u32);
	// lwz r10,664(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 664);
	// stw r10,360(r31)
	PPC_STORE_U32(r31.u32 + 360, ctx.r10.u32);
	// stw r11,364(r31)
	PPC_STORE_U32(r31.u32 + 364, r11.u32);
	// stw r31,372(r31)
	PPC_STORE_U32(r31.u32 + 372, r31.u32);
	// stw r11,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r11.u32);
	// bl 0x83178980
	sub_83178980(ctx, base);
	// b 0x83173964
	goto loc_83173964;
loc_83173940:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-27448
	ctx.r4.s64 = r11.s64 + -27448;
loc_83173948:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r11,660(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83173964
	if (!cr6.eq) goto loc_83173964;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,660(r31)
	PPC_STORE_U32(r31.u32 + 660, r11.u32);
loc_83173964:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_83173970"))) PPC_WEAK_FUNC(sub_83173970);
PPC_FUNC_IMPL(__imp__sub_83173970) {
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
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x8317399c
	if (!cr6.eq) goto loc_8317399C;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-26636
	ctx.r4.s64 = r11.s64 + -26636;
	// b 0x83173bc8
	goto loc_83173BC8;
loc_8317399C:
	// cmpdi cr6,r28,0
	cr6.compare<int64_t>(r28.s64, 0, xer);
	// bge cr6,0x831739b0
	if (!cr6.lt) goto loc_831739B0;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-26668
	ctx.r4.s64 = r11.s64 + -26668;
	// b 0x83173bc8
	goto loc_83173BC8;
loc_831739B0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83172e10
	sub_83172E10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831739cc
	if (!cr0.eq) goto loc_831739CC;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-26732
	ctx.r4.s64 = r11.s64 + -26732;
	// b 0x83173bc8
	goto loc_83173BC8;
loc_831739CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83172e68
	sub_83172E68(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83173bc0
	if (cr6.eq) goto loc_83173BC0;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83173bc0
	if (cr6.eq) goto loc_83173BC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83172ec0
	sub_83172EC0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83173a08
	if (!cr6.eq) goto loc_83173A08;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-26816
	ctx.r4.s64 = r11.s64 + -26816;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// b 0x83173be4
	goto loc_83173BE4;
loc_83173A08:
	// lwz r11,732(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 732);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83173bb4
	if (cr6.eq) goto loc_83173BB4;
	// lwz r10,720(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 720);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83173bb4
	if (cr6.eq) goto loc_83173BB4;
	// lwz r10,708(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 708);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83173a38
	if (!cr6.eq) goto loc_83173A38;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-26864
	ctx.r4.s64 = r11.s64 + -26864;
	// b 0x83173bc8
	goto loc_83173BC8;
loc_83173A38:
	// divw r10,r26,r11
	ctx.r10.s32 = r26.s32 / r11.s32;
	// mullw r11,r10,r11
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// subf. r11,r11,r26
	r11.s64 = r26.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83173a58
	if (cr0.eq) goto loc_83173A58;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-26928
	ctx.r4.s64 = r11.s64 + -26928;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_83173A58:
	// lwa r11,720(r31)
	r11.s64 = int32_t(PPC_LOAD_U32(r31.u32 + 720));
	// divd r10,r28,r11
	ctx.r10.s64 = r28.s64 / r11.s64;
	// mulld r11,r10,r11
	r11.s64 = ctx.r10.s64 * r11.s64;
	// subf r11,r11,r28
	r11.s64 = r28.s64 - r11.s64;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// beq cr6,0x83173a80
	if (cr6.eq) goto loc_83173A80;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-27008
	ctx.r4.s64 = r11.s64 + -27008;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_83173A80:
	// lwz r11,704(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 704);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r30,r31,464
	r30.s64 = r31.s64 + 464;
	// addi r10,r10,-25172
	ctx.r10.s64 = ctx.r10.s64 + -25172;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r27,r11,r10
	r27.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83172e10
	sub_83172E10(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x83173ba8
	if (cr6.eq) goto loc_83173BA8;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x83173ba8
	if (cr6.eq) goto loc_83173BA8;
	// ld r11,768(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 768);
	// ld r10,760(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 760);
	// lwa r9,728(r31)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(r31.u32 + 728));
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + r11.u64;
	// divd r11,r29,r9
	r11.s64 = r29.s64 / ctx.r9.s64;
	// mulld r11,r11,r9
	r11.s64 = r11.s64 * ctx.r9.s64;
	// subf r11,r11,r29
	r11.s64 = r29.s64 - r11.s64;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// beq cr6,0x83173af4
	if (cr6.eq) goto loc_83173AF4;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-27052
	ctx.r4.s64 = r11.s64 + -27052;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_83173AF4:
	// ld r10,776(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 776);
	// ld r11,768(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 768);
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - r29.s64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmpd cr6,r28,r9
	cr6.compare<int64_t>(r28.s64, ctx.r9.s64, xer);
	// bge cr6,0x83173b10
	if (!cr6.lt) goto loc_83173B10;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
loc_83173B10:
	// cmpdi cr6,r9,0
	cr6.compare<int64_t>(ctx.r9.s64, 0, xer);
	// bgt cr6,0x83173b20
	if (cr6.gt) goto loc_83173B20;
	// li r11,2
	r11.s64 = 2;
	// b 0x83173bac
	goto loc_83173BAC;
loc_83173B20:
	// lwz r8,668(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 668);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r9,344(r31)
	PPC_STORE_U64(r31.u32 + 344, ctx.r9.u64);
	// addi r11,r31,336
	r11.s64 = r31.s64 + 336;
	// stw r26,336(r31)
	PPC_STORE_U32(r31.u32 + 336, r26.u32);
	// addi r9,r31,672
	ctx.r9.s64 = r31.s64 + 672;
	// addi r7,r31,744
	ctx.r7.s64 = r31.s64 + 744;
	// addi r6,r31,752
	ctx.r6.s64 = r31.s64 + 752;
	// stw r8,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r8.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// lwz r5,588(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 588);
	// lis r3,-31941
	ctx.r3.s64 = -2093285376;
	// stw r5,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r5.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r11.u32);
	// addi r5,r3,-29624
	ctx.r5.s64 = ctx.r3.s64 + -29624;
	// stw r9,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r9.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r7,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r7.u32);
	// stw r10,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r10.u32);
	// std r29,64(r30)
	PPC_STORE_U64(r30.u32 + 64, r29.u64);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// std r11,72(r30)
	PPC_STORE_U64(r30.u32 + 72, r11.u64);
	// stw r6,104(r30)
	PPC_STORE_U32(r30.u32 + 104, ctx.r6.u32);
	// lwz r11,664(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 664);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r8,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r8.u32);
	// stw r31,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r31.u32);
	// ld r11,760(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 760);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// std r11,760(r31)
	PPC_STORE_U64(r31.u32 + 760, r11.u64);
	// stw r10,32(r30)
	PPC_STORE_U32(r30.u32 + 32, ctx.r10.u32);
	// bl 0x83178980
	sub_83178980(ctx, base);
	// b 0x83173be4
	goto loc_83173BE4;
loc_83173BA8:
	// li r11,4
	r11.s64 = 4;
loc_83173BAC:
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
	// b 0x83173be4
	goto loc_83173BE4;
loc_83173BB4:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-27112
	ctx.r4.s64 = r11.s64 + -27112;
	// b 0x83173bc8
	goto loc_83173BC8;
loc_83173BC0:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-27176
	ctx.r4.s64 = r11.s64 + -27176;
loc_83173BC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r11,660(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83173be4
	if (!cr6.eq) goto loc_83173BE4;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,660(r31)
	PPC_STORE_U32(r31.u32 + 660, r11.u32);
loc_83173BE4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83173BF0"))) PPC_WEAK_FUNC(sub_83173BF0);
PPC_FUNC_IMPL(__imp__sub_83173BF0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x83173c1c
	if (!cr6.eq) goto loc_83173C1C;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-25980
	ctx.r4.s64 = r11.s64 + -25980;
	// b 0x83173ea0
	goto loc_83173EA0;
loc_83173C1C:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// bge cr6,0x83173c30
	if (!cr6.lt) goto loc_83173C30;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-26020
	ctx.r4.s64 = r11.s64 + -26020;
	// b 0x83173ea0
	goto loc_83173EA0;
loc_83173C30:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83172e10
	sub_83172E10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83173c4c
	if (!cr0.eq) goto loc_83173C4C;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-26084
	ctx.r4.s64 = r11.s64 + -26084;
	// b 0x83173ea0
	goto loc_83173EA0;
loc_83173C4C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83172e68
	sub_83172E68(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83173e98
	if (cr6.eq) goto loc_83173E98;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83173e98
	if (cr6.eq) goto loc_83173E98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83172ec0
	sub_83172EC0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83173c88
	if (!cr6.eq) goto loc_83173C88;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-26168
	ctx.r4.s64 = r11.s64 + -26168;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// b 0x83173ebc
	goto loc_83173EBC;
loc_83173C88:
	// lwz r11,732(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 732);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83173e8c
	if (cr6.eq) goto loc_83173E8C;
	// lwz r11,720(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 720);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83173e8c
	if (cr6.eq) goto loc_83173E8C;
	// lwz r11,708(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 708);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83173cb8
	if (!cr6.eq) goto loc_83173CB8;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-26216
	ctx.r4.s64 = r11.s64 + -26216;
	// b 0x83173ea0
	goto loc_83173EA0;
loc_83173CB8:
	// li r27,0
	r27.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// ble cr6,0x83173d4c
	if (!cr6.gt) goto loc_83173D4C;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// mr r29,r23
	r29.u64 = r23.u64;
	// addi r26,r11,-26296
	r26.s64 = r11.s64 + -26296;
	// addi r25,r10,-26364
	r25.s64 = ctx.r10.s64 + -26364;
loc_83173CDC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// ld r30,8(r29)
	r30.u64 = PPC_LOAD_U64(r29.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83173dec
	if (cr6.eq) goto loc_83173DEC;
	// cmpdi cr6,r30,0
	cr6.compare<int64_t>(r30.s64, 0, xer);
	// blt cr6,0x83173df8
	if (cr6.lt) goto loc_83173DF8;
	// lwz r10,732(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 732);
	// divw r9,r11,r10
	ctx.r9.s32 = r11.s32 / ctx.r10.s32;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf. r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83173d14
	if (cr0.eq) goto loc_83173D14;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_83173D14:
	// lwa r11,720(r31)
	r11.s64 = int32_t(PPC_LOAD_U32(r31.u32 + 720));
	// divd r10,r30,r11
	ctx.r10.s64 = r30.s64 / r11.s64;
	// mulld r11,r10,r11
	r11.s64 = ctx.r10.s64 * r11.s64;
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// beq cr6,0x83173d38
	if (cr6.eq) goto loc_83173D38;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_83173D38:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// add r27,r30,r27
	r27.u64 = r30.u64 + r27.u64;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// cmpw cr6,r28,r24
	cr6.compare<int32_t>(r28.s32, r24.s32, xer);
	// blt cr6,0x83173cdc
	if (cr6.lt) goto loc_83173CDC;
loc_83173D4C:
	// lwz r11,704(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 704);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r30,r31,464
	r30.s64 = r31.s64 + 464;
	// addi r10,r10,-25172
	ctx.r10.s64 = ctx.r10.s64 + -25172;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r28,r11,r10
	r28.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83172e10
	sub_83172E10(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x83173e80
	if (cr6.eq) goto loc_83173E80;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x83173e80
	if (cr6.eq) goto loc_83173E80;
	// ld r11,768(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 768);
	// ld r10,760(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 760);
	// lwa r9,728(r31)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(r31.u32 + 728));
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + r11.u64;
	// divd r11,r29,r9
	r11.s64 = r29.s64 / ctx.r9.s64;
	// mulld r11,r11,r9
	r11.s64 = r11.s64 * ctx.r9.s64;
	// subf r11,r11,r29
	r11.s64 = r29.s64 - r11.s64;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// beq cr6,0x83173dc0
	if (cr6.eq) goto loc_83173DC0;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-26408
	ctx.r4.s64 = r11.s64 + -26408;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_83173DC0:
	// ld r10,776(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 776);
	// ld r11,768(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 768);
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - r29.s64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmpd cr6,r27,r11
	cr6.compare<int64_t>(r27.s64, r11.s64, xer);
	// bge cr6,0x83173ddc
	if (!cr6.lt) goto loc_83173DDC;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_83173DDC:
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// bgt cr6,0x83173e04
	if (cr6.gt) goto loc_83173E04;
	// li r11,2
	r11.s64 = 2;
	// b 0x83173e84
	goto loc_83173E84;
loc_83173DEC:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-26444
	ctx.r4.s64 = r11.s64 + -26444;
	// b 0x83173ea0
	goto loc_83173EA0;
loc_83173DF8:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-26476
	ctx.r4.s64 = r11.s64 + -26476;
	// b 0x83173ea0
	goto loc_83173EA0;
loc_83173E04:
	// lwz r11,668(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 668);
	// addi r10,r31,672
	ctx.r10.s64 = r31.s64 + 672;
	// addi r9,r31,744
	ctx.r9.s64 = r31.s64 + 744;
	// addi r8,r31,752
	ctx.r8.s64 = r31.s64 + 752;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r5,588(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 588);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r5,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r5.u32);
	// addi r5,r11,-29624
	ctx.r5.s64 = r11.s64 + -29624;
	// stw r10,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r9,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r9.u32);
	// stw r23,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r23.u32);
	// stw r24,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r24.u32);
	// std r29,64(r30)
	PPC_STORE_U64(r30.u32 + 64, r29.u64);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// std r11,72(r30)
	PPC_STORE_U64(r30.u32 + 72, r11.u64);
	// stw r8,104(r30)
	PPC_STORE_U32(r30.u32 + 104, ctx.r8.u32);
	// lwz r11,664(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 664);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r7,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r7.u32);
	// stw r31,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r31.u32);
	// ld r11,760(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 760);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// std r11,760(r31)
	PPC_STORE_U64(r31.u32 + 760, r11.u64);
	// stw r6,32(r30)
	PPC_STORE_U32(r30.u32 + 32, ctx.r6.u32);
	// bl 0x83178980
	sub_83178980(ctx, base);
	// b 0x83173ebc
	goto loc_83173EBC;
loc_83173E80:
	// li r11,4
	r11.s64 = 4;
loc_83173E84:
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
	// b 0x83173ebc
	goto loc_83173EBC;
loc_83173E8C:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-26536
	ctx.r4.s64 = r11.s64 + -26536;
	// b 0x83173ea0
	goto loc_83173EA0;
loc_83173E98:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-26600
	ctx.r4.s64 = r11.s64 + -26600;
loc_83173EA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r11,660(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83173ebc
	if (!cr6.eq) goto loc_83173EBC;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,660(r31)
	PPC_STORE_U32(r31.u32 + 660, r11.u32);
loc_83173EBC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_83173EC8"))) PPC_WEAK_FUNC(sub_83173EC8);
PPC_FUNC_IMPL(__imp__sub_83173EC8) {
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
	// bl 0x83172e10
	sub_83172E10(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83173ef0
	if (cr6.eq) goto loc_83173EF0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83173f24
	goto loc_83173F24;
loc_83173EF0:
	// lwz r11,704(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 704);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// addi r10,r10,-25172
	ctx.r10.s64 = ctx.r10.s64 + -25172;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r9,-29624
	ctx.r5.s64 = ctx.r9.s64 + -29624;
	// addi r4,r31,352
	ctx.r4.s64 = r31.s64 + 352;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x83178a18
	sub_83178A18(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83173f24
	if (cr0.eq) goto loc_83173F24;
	// li r11,3
	r11.s64 = 3;
	// stw r11,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r11.u32);
loc_83173F24:
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

__attribute__((alias("__imp__sub_83173F38"))) PPC_WEAK_FUNC(sub_83173F38);
PPC_FUNC_IMPL(__imp__sub_83173F38) {
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
	// bl 0x83172e68
	sub_83172E68(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83173f60
	if (cr6.eq) goto loc_83173F60;
loc_83173F58:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83173fa0
	goto loc_83173FA0;
loc_83173F60:
	// lwz r11,452(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 452);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83173f58
	if (!cr6.eq) goto loc_83173F58;
	// lwz r11,704(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 704);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// addi r10,r10,-25172
	ctx.r10.s64 = ctx.r10.s64 + -25172;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r9,-29624
	ctx.r5.s64 = ctx.r9.s64 + -29624;
	// addi r4,r31,416
	ctx.r4.s64 = r31.s64 + 416;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x83178a18
	sub_83178A18(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83173fa0
	if (cr0.eq) goto loc_83173FA0;
	// li r11,3
	r11.s64 = 3;
	// stw r11,328(r31)
	PPC_STORE_U32(r31.u32 + 328, r11.u32);
loc_83173FA0:
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

__attribute__((alias("__imp__sub_83173FB8"))) PPC_WEAK_FUNC(sub_83173FB8);
PPC_FUNC_IMPL(__imp__sub_83173FB8) {
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
	// bl 0x83172ec0
	sub_83172EC0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83174020
	if (!cr6.eq) goto loc_83174020;
	// lwz r11,704(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 704);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// addi r10,r10,-25172
	ctx.r10.s64 = ctx.r10.s64 + -25172;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,464
	r31.s64 = r31.s64 + 464;
	// addi r5,r9,-29624
	ctx.r5.s64 = ctx.r9.s64 + -29624;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x83178a18
	sub_83178A18(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83174018
	if (cr0.eq) goto loc_83174018;
	// li r11,3
	r11.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// b 0x83174024
	goto loc_83174024;
loc_83174018:
	// li r11,1
	r11.s64 = 1;
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
loc_83174020:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83174024:
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

__attribute__((alias("__imp__sub_83174038"))) PPC_WEAK_FUNC(sub_83174038);
PPC_FUNC_IMPL(__imp__sub_83174038) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x83173238
	sub_83173238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83172e10
	sub_83172E10(ctx, base);
	// lwz r11,660(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r10,660(r31)
	PPC_STORE_U32(r31.u32 + 660, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x831732a8
	sub_831732A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83174080"))) PPC_WEAK_FUNC(sub_83174080);
PPC_FUNC_IMPL(__imp__sub_83174080) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x83173238
	sub_83173238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83172e68
	sub_83172E68(ctx, base);
	// lwz r11,660(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r10,660(r31)
	PPC_STORE_U32(r31.u32 + 660, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x831732a8
	sub_831732A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831740C8"))) PPC_WEAK_FUNC(sub_831740C8);
PPC_FUNC_IMPL(__imp__sub_831740C8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x83173238
	sub_83173238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83172ec0
	sub_83172EC0(ctx, base);
	// lwz r11,660(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r10,660(r31)
	PPC_STORE_U32(r31.u32 + 660, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x831732a8
	sub_831732A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83174110"))) PPC_WEAK_FUNC(sub_83174110);
PPC_FUNC_IMPL(__imp__sub_83174110) {
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
	// bl 0x83173238
	sub_83173238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831732a8
	sub_831732A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83173038
	sub_83173038(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83173238
	sub_83173238(ctx, base);
	// lwz r11,456(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 456);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r11,4
	r11.s64 = 4;
	// beq cr6,0x83174154
	if (cr6.eq) goto loc_83174154;
	// li r11,2
	r11.s64 = 2;
loc_83174154:
	// stw r11,328(r31)
	PPC_STORE_U32(r31.u32 + 328, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831732a8
	sub_831732A8(ctx, base);
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

__attribute__((alias("__imp__sub_83174178"))) PPC_WEAK_FUNC(sub_83174178);
PPC_FUNC_IMPL(__imp__sub_83174178) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,516(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// li r15,1
	r15.s64 = 1;
	// lwz r6,568(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// li r14,0
	r14.s64 = 0;
	// lwz r10,508(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ld r8,544(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 544);
	// addi r31,r3,464
	r31.s64 = ctx.r3.s64 + 464;
	// ld r7,528(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 528);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r11,500(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 500);
	// mr r16,r14
	r16.u64 = r14.u64;
	// lwz r5,504(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r15,580(r3)
	PPC_STORE_U32(ctx.r3.u32 + 580, r15.u32);
	// ld r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// subf r27,r9,r8
	r27.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpdi cr6,r27,0
	cr6.compare<int64_t>(r27.s64, 0, xer);
	// ld r17,8(r10)
	r17.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lwz r21,488(r3)
	r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 488);
	// lwz r18,492(r3)
	r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// lwz r20,0(r5)
	r20.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// ld r23,536(r3)
	r23.u64 = PPC_LOAD_U64(ctx.r3.u32 + 536);
	// lwz r26,48(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// lwz r6,60(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// ble cr6,0x831743e4
	if (!cr6.gt) goto loc_831743E4;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// ld r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// divd r5,r9,r10
	ctx.r5.s64 = ctx.r9.s64 / ctx.r10.s64;
	// subf r22,r7,r17
	r22.s64 = r17.s64 - ctx.r7.s64;
	// mulld r19,r5,r10
	r19.s64 = ctx.r5.s64 * ctx.r10.s64;
	// subf r25,r19,r9
	r25.s64 = ctx.r9.s64 - r19.s64;
	// cmpdi cr6,r22,0
	cr6.compare<int64_t>(r22.s64, 0, xer);
	// ble cr6,0x831743e4
	if (!cr6.gt) goto loc_831743E4;
	// ld r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 56);
	// rotlwi r11,r6,0
	r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// neg r7,r11
	ctx.r7.s64 = -r11.s64;
	// add r24,r10,r8
	r24.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r11,r24
	r11.u64 = r11.u64 + r24.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// and r29,r11,r7
	r29.u64 = r11.u64 & ctx.r7.u64;
	// cmpw cr6,r24,r29
	cr6.compare<int32_t>(r24.s32, r29.s32, xer);
	// beq cr6,0x8317424c
	if (cr6.eq) goto loc_8317424C;
	// subf r11,r24,r29
	r11.s64 = r29.s64 - r24.s64;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// subf r9,r11,r22
	ctx.r9.s64 = r22.s64 - r11.s64;
loc_8317424C:
	// extsw r30,r26
	r30.s64 = r26.s32;
	// divd r11,r9,r30
	r11.s64 = ctx.r9.s64 / r30.s64;
	// mulld r28,r11,r30
	r28.s64 = r11.s64 * r30.s64;
	// subf r11,r25,r28
	r11.s64 = r28.s64 - r25.s64;
	// cmpd cr6,r11,r30
	cr6.compare<int64_t>(r11.s64, r30.s64, xer);
	// bge cr6,0x831742b0
	if (!cr6.lt) goto loc_831742B0;
	// addi r11,r26,-1
	r11.s64 = r26.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// divd r11,r11,r30
	r11.s64 = r11.s64 / r30.s64;
	// mulld r28,r11,r30
	r28.s64 = r11.s64 * r30.s64;
	// extsw r4,r28
	ctx.r4.s64 = r28.s32;
	// bl 0x83168038
	sub_83168038(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x831742ac
	if (!cr0.eq) goto loc_831742AC;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-25944
	ctx.r4.s64 = r11.s64 + -25944;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_831742A4:
	// stw r14,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r14.u32);
	// b 0x831743e8
	goto loc_831743E8;
loc_831742AC:
	// mr r16,r15
	r16.u64 = r15.u64;
loc_831742B0:
	// add r11,r25,r27
	r11.u64 = r25.u64 + r27.u64;
	// cmpd cr6,r11,r28
	cr6.compare<int64_t>(r11.s64, r28.s64, xer);
	// bge cr6,0x831742c0
	if (!cr6.lt) goto loc_831742C0;
	// mr r28,r11
	r28.u64 = r11.u64;
loc_831742C0:
	// addi r11,r26,-1
	r11.s64 = r26.s64 + -1;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// divd r11,r11,r30
	r11.s64 = r11.s64 / r30.s64;
	// mulld r30,r11,r30
	r30.s64 = r11.s64 * r30.s64;
	// cmpd cr6,r30,r23
	cr6.compare<int64_t>(r30.s64, r23.s64, xer);
	// blt cr6,0x831742e0
	if (cr6.lt) goto loc_831742E0;
	// mr r30,r23
	r30.u64 = r23.u64;
loc_831742E0:
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpdi cr6,r27,0
	cr6.compare<int64_t>(r27.s64, 0, xer);
	// bge cr6,0x83174328
	if (!cr6.lt) goto loc_83174328;
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(r16.s32, 0, xer);
	// beq cr6,0x831742a4
	if (cr6.eq) goto loc_831742A4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x83168100
	sub_83168100(ctx, base);
	// b 0x831742a4
	goto loc_831742A4;
loc_83174328:
	// cmpd cr6,r30,r27
	cr6.compare<int64_t>(r30.s64, r27.s64, xer);
	// ble cr6,0x83174348
	if (!cr6.gt) goto loc_83174348;
	// rotlwi r11,r27,0
	r11.u64 = __builtin_rotateleft32(r27.u32, 0);
	// rotlwi r10,r30,0
	ctx.r10.u64 = __builtin_rotateleft32(r30.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - r11.s64;
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_83174348:
	// subf r28,r25,r27
	r28.s64 = r27.s64 - r25.s64;
	// cmplw cr6,r24,r29
	cr6.compare<uint32_t>(r24.u32, r29.u32, xer);
	// bne cr6,0x8317435c
	if (!cr6.eq) goto loc_8317435C;
	// cmpdi cr6,r25,0
	cr6.compare<int64_t>(r25.s64, 0, xer);
	// ble cr6,0x83174394
	if (!cr6.gt) goto loc_83174394;
loc_8317435C:
	// cmpd cr6,r22,r28
	cr6.compare<int64_t>(r22.s64, r28.s64, xer);
	// bge cr6,0x83174368
	if (!cr6.lt) goto loc_83174368;
	// mr r28,r22
	r28.u64 = r22.u64;
loc_83174368:
	// mr r11,r14
	r11.u64 = r14.u64;
	// cmpdi cr6,r28,0
	cr6.compare<int64_t>(r28.s64, 0, xer);
	// ble cr6,0x83174394
	if (!cr6.gt) goto loc_83174394;
	// extsw r9,r25
	ctx.r9.s64 = r25.s32;
loc_83174378:
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpd cr6,r11,r28
	cr6.compare<int64_t>(r11.s64, r28.s64, xer);
	// lbzx r8,r8,r29
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + r29.u32);
	// stbx r8,r10,r24
	PPC_STORE_U8(ctx.r10.u32 + r24.u32, ctx.r8.u8);
	// blt cr6,0x83174378
	if (cr6.lt) goto loc_83174378;
loc_83174394:
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(r16.s32, 0, xer);
	// beq cr6,0x831743a8
	if (cr6.eq) goto loc_831743A8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x83168100
	sub_83168100(ctx, base);
loc_831743A8:
	// ld r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 56);
	// ld r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// subf r9,r25,r10
	ctx.r9.s64 = ctx.r10.s64 - r25.s64;
	// ld r11,88(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// subf r10,r25,r8
	ctx.r10.s64 = ctx.r8.s64 - r25.s64;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// std r11,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r11.u64);
	// std r9,56(r31)
	PPC_STORE_U64(r31.u32 + 56, ctx.r9.u64);
	// cmpd cr6,r11,r17
	cr6.compare<int64_t>(r11.s64, r17.s64, xer);
	// std r10,80(r31)
	PPC_STORE_U64(r31.u32 + 80, ctx.r10.u64);
	// bge cr6,0x831743e4
	if (!cr6.lt) goto loc_831743E4;
	// cmpd cr6,r30,r27
	cr6.compare<int64_t>(r30.s64, r27.s64, xer);
	// beq cr6,0x831743e8
	if (cr6.eq) goto loc_831743E8;
loc_831743E4:
	// stw r15,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r15.u32);
loc_831743E8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_831743F0"))) PPC_WEAK_FUNC(sub_831743F0);
PPC_FUNC_IMPL(__imp__sub_831743F0) {
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
	// lwz r11,412(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 412);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83174420
	if (!cr6.eq) goto loc_83174420;
	// li r11,4
	r11.s64 = 4;
	// stw r11,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r11.u32);
	// b 0x83174494
	goto loc_83174494;
loc_83174420:
	// li r11,2
	r11.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r11.u32);
	// ld r11,400(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 400);
	// std r11,752(r31)
	PPC_STORE_U64(r31.u32 + 752, r11.u64);
	// bl 0x83172e68
	sub_83172E68(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83174494
	if (cr6.eq) goto loc_83174494;
	// addi r30,r31,288
	r30.s64 = r31.s64 + 288;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// stw r11,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r10,-29624
	ctx.r4.s64 = ctx.r10.s64 + -29624;
	// lwz r11,284(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 284);
	// stw r11,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r11.u32);
	// lwz r11,740(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 740);
	// stw r11,304(r31)
	PPC_STORE_U32(r31.u32 + 304, r11.u32);
	// lwz r11,744(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 744);
	// stw r11,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r11.u32);
	// ld r11,752(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 752);
	// std r11,312(r31)
	PPC_STORE_U64(r31.u32 + 312, r11.u64);
	// bl 0x83178dc8
	sub_83178DC8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,320(r31)
	PPC_STORE_U32(r31.u32 + 320, r11.u32);
loc_83174494:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831744B0"))) PPC_WEAK_FUNC(sub_831744B0);
PPC_FUNC_IMPL(__imp__sub_831744B0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x83173238
	sub_83173238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83173178
	sub_83173178(ctx, base);
	// lwz r11,660(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r10,660(r31)
	PPC_STORE_U32(r31.u32 + 660, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x831732a8
	sub_831732A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831744F8"))) PPC_WEAK_FUNC(sub_831744F8);
PPC_FUNC_IMPL(__imp__sub_831744F8) {
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
	// bl 0x83172e10
	sub_83172E10(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83174544
	if (cr6.eq) goto loc_83174544;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-25864
	ctx.r4.s64 = r11.s64 + -25864;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r11,660(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8317453c
	if (!cr6.eq) goto loc_8317453C;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,660(r31)
	PPC_STORE_U32(r31.u32 + 660, r11.u32);
loc_8317453C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83174564
	goto loc_83174564;
loc_83174544:
	// ld r9,768(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 768);
	// ld r10,776(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 776);
	// ld r11,752(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 752);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpd cr6,r10,r11
	cr6.compare<int64_t>(ctx.r10.s64, r11.s64, xer);
	// bge cr6,0x83174560
	if (!cr6.lt) goto loc_83174560;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_83174560:
	// subf r3,r9,r11
	ctx.r3.s64 = r11.s64 - ctx.r9.s64;
loc_83174564:
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

__attribute__((alias("__imp__sub_83174578"))) PPC_WEAK_FUNC(sub_83174578);
PPC_FUNC_IMPL(__imp__sub_83174578) {
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
	// bl 0x83172e10
	sub_83172E10(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x831745c4
	if (cr6.eq) goto loc_831745C4;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-25792
	ctx.r4.s64 = r11.s64 + -25792;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r11,660(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831745bc
	if (!cr6.eq) goto loc_831745BC;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,660(r31)
	PPC_STORE_U32(r31.u32 + 660, r11.u32);
loc_831745BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831745c8
	goto loc_831745C8;
loc_831745C4:
	// lwz r3,744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 744);
loc_831745C8:
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

__attribute__((alias("__imp__sub_831745E0"))) PPC_WEAK_FUNC(sub_831745E0);
PPC_FUNC_IMPL(__imp__sub_831745E0) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(r31.s32, 2, xer);
	// ld r29,760(r28)
	r29.u64 = PPC_LOAD_U64(r28.u32 + 760);
	// bne cr6,0x83174644
	if (!cr6.eq) goto loc_83174644;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831744f8
	sub_831744F8(ctx, base);
	// cmpdi cr6,r3,0
	cr6.compare<int64_t>(ctx.r3.s64, 0, xer);
	// bge cr6,0x83174644
	if (!cr6.lt) goto loc_83174644;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-25720
	ctx.r4.s64 = r11.s64 + -25720;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r11,660(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 660);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8317463c
	if (!cr6.eq) goto loc_8317463C;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,660(r28)
	PPC_STORE_U32(r28.u32 + 660, r11.u32);
loc_8317463C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8317467c
	goto loc_8317467C;
loc_83174644:
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(r31.u32, 1, xer);
	// blt cr6,0x83174668
	if (cr6.lt) goto loc_83174668;
	// beq cr6,0x83174660
	if (cr6.eq) goto loc_83174660;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(r31.u32, 3, xer);
	// bge cr6,0x83174674
	if (!cr6.lt) goto loc_83174674;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
	// b 0x8317466c
	goto loc_8317466C;
loc_83174660:
	// add r3,r29,r30
	ctx.r3.u64 = r29.u64 + r30.u64;
	// b 0x8317466c
	goto loc_8317466C;
loc_83174668:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8317466C:
	// cmpdi cr6,r3,0
	cr6.compare<int64_t>(ctx.r3.s64, 0, xer);
	// bge cr6,0x83174678
	if (!cr6.lt) goto loc_83174678;
loc_83174674:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83174678:
	// std r3,760(r28)
	PPC_STORE_U64(r28.u32 + 760, ctx.r3.u64);
loc_8317467C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83174688"))) PPC_WEAK_FUNC(sub_83174688);
PPC_FUNC_IMPL(__imp__sub_83174688) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x83173238
	sub_83173238(ctx, base);
	// lwz r10,660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,660(r31)
	PPC_STORE_U32(r31.u32 + 660, r11.u32);
	// ld r29,760(r31)
	r29.u64 = PPC_LOAD_U64(r31.u32 + 760);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// bl 0x831732a8
	sub_831732A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831746C8"))) PPC_WEAK_FUNC(sub_831746C8);
PPC_FUNC_IMPL(__imp__sub_831746C8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x83173238
	sub_83173238(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x831746f8
	if (cr6.eq) goto loc_831746F8;
	// ld r11,768(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 768);
	// std r11,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r11.u64);
loc_831746F8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83174708
	if (cr6.eq) goto loc_83174708;
	// ld r11,776(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 776);
	// std r11,0(r29)
	PPC_STORE_U64(r29.u32 + 0, r11.u64);
loc_83174708:
	// lwz r11,660(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,660(r31)
	PPC_STORE_U32(r31.u32 + 660, ctx.r10.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// bl 0x831732a8
	sub_831732A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83174728"))) PPC_WEAK_FUNC(sub_83174728);
PPC_FUNC_IMPL(__imp__sub_83174728) {
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
	// cmpdi cr6,r4,0
	cr6.compare<int64_t>(ctx.r4.s64, 0, xer);
	// blt cr6,0x83174780
	if (cr6.lt) goto loc_83174780;
	// cmpdi cr6,r5,0
	cr6.compare<int64_t>(ctx.r5.s64, 0, xer);
	// blt cr6,0x83174780
	if (cr6.lt) goto loc_83174780;
	// add r11,r4,r5
	r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// cmpd cr6,r11,r4
	cr6.compare<int64_t>(r11.s64, ctx.r4.s64, xer);
	// blt cr6,0x83174774
	if (cr6.lt) goto loc_83174774;
	// cmpd cr6,r11,r5
	cr6.compare<int64_t>(r11.s64, ctx.r5.s64, xer);
	// blt cr6,0x83174774
	if (cr6.lt) goto loc_83174774;
	// li r11,0
	r11.s64 = 0;
	// std r4,768(r31)
	PPC_STORE_U64(r31.u32 + 768, ctx.r4.u64);
	// std r5,776(r31)
	PPC_STORE_U64(r31.u32 + 776, ctx.r5.u64);
	// std r11,760(r31)
	PPC_STORE_U64(r31.u32 + 760, r11.u64);
	// b 0x831747a4
	goto loc_831747A4;
loc_83174774:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-25596
	ctx.r4.s64 = r11.s64 + -25596;
	// b 0x83174788
	goto loc_83174788;
loc_83174780:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-25648
	ctx.r4.s64 = r11.s64 + -25648;
loc_83174788:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r11,660(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831747a4
	if (!cr6.eq) goto loc_831747A4;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,660(r31)
	PPC_STORE_U32(r31.u32 + 660, r11.u32);
loc_831747A4:
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

__attribute__((alias("__imp__sub_831747B8"))) PPC_WEAK_FUNC(sub_831747B8);
PPC_FUNC_IMPL(__imp__sub_831747B8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x83173238
	sub_83173238(ctx, base);
	// ld r11,552(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 552);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r10,560(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 560);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,660(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 660);
	// stw r9,660(r30)
	PPC_STORE_U32(r30.u32 + 660, ctx.r9.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// bl 0x831732a8
	sub_831732A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83174800"))) PPC_WEAK_FUNC(sub_83174800);
PPC_FUNC_IMPL(__imp__sub_83174800) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x83173238
	sub_83173238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831731d0
	sub_831731D0(ctx, base);
	// lwz r11,660(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r10,660(r31)
	PPC_STORE_U32(r31.u32 + 660, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x831732a8
	sub_831732A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83174848"))) PPC_WEAK_FUNC(sub_83174848);
PPC_FUNC_IMPL(__imp__sub_83174848) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r30,r11,-29624
	r30.s64 = r11.s64 + -29624;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,40(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// b 0x8317488c
	goto loc_8317488C;
loc_8317487C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82bd42f0
	sub_82BD42F0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
loc_8317488C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8317487c
	if (cr0.eq) goto loc_8317487C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83174908"))) PPC_WEAK_FUNC(sub_83174908);
PPC_FUNC_IMPL(__imp__sub_83174908) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8317497c
	if (cr6.eq) goto loc_8317497C;
loc_8317494C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_83174950:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83174968:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8317494c
	if (!cr6.eq) goto loc_8317494C;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82bd42f0
	sub_82BD42F0(ctx, base);
loc_8317497C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83174968
	if (cr6.eq) goto loc_83174968;
	// b 0x83174950
	goto loc_83174950;
}

__attribute__((alias("__imp__sub_831749A0"))) PPC_WEAK_FUNC(sub_831749A0);
PPC_FUNC_IMPL(__imp__sub_831749A0) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// bne cr6,0x831749e0
	if (!cr6.eq) goto loc_831749E0;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-25496
	ctx.r4.s64 = r11.s64 + -25496;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r11,-2
	r11.s64 = -2;
loc_831749D8:
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x83174a5c
	goto loc_83174A5C;
loc_831749E0:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,-25516
	ctx.r5.s64 = r11.s64 + -25516;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,784
	ctx.r3.s64 = 784;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83174a08
	if (cr0.eq) goto loc_83174A08;
	// bl 0x83173318
	sub_83173318(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_83174A08:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83174a28
	if (!cr6.eq) goto loc_83174A28;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-25556
	ctx.r4.s64 = r11.s64 + -25556;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r11,-3
	r11.s64 = -3;
	// b 0x831749d8
	goto loc_831749D8;
loc_83174A28:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831734d0
	sub_831734D0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x83174a60
	if (!cr0.eq) goto loc_83174A60;
	// li r11,-1
	r11.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83174A5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83174A60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83174A68"))) PPC_WEAK_FUNC(sub_83174A68);
PPC_FUNC_IMPL(__imp__sub_83174A68) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r30,r11,-29624
	r30.s64 = r11.s64 + -29624;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,104(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83174ad0
	if (cr0.eq) goto loc_83174AD0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83174908
	sub_83174908(ctx, base);
loc_83174AD0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83172d50
	sub_83172D50(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r11
	ctr.u64 = r11.u64;
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

__attribute__((alias("__imp__sub_83174B08"))) PPC_WEAK_FUNC(sub_83174B08);
PPC_FUNC_IMPL(__imp__sub_83174B08) {
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
	// bl 0x83173238
	sub_83173238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831736d0
	sub_831736D0(ctx, base);
	// lwz r10,660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,660(r31)
	PPC_STORE_U32(r31.u32 + 660, r11.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// bl 0x831732a8
	sub_831732A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83174B60"))) PPC_WEAK_FUNC(sub_83174B60);
PPC_FUNC_IMPL(__imp__sub_83174B60) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83172e10
	sub_83172E10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83174b88
	if (!cr0.eq) goto loc_83174B88;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-25368
	ctx.r4.s64 = r11.s64 + -25368;
	// b 0x83174cdc
	goto loc_83174CDC;
loc_83174B88:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83172e68
	sub_83172E68(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83174cd4
	if (cr6.eq) goto loc_83174CD4;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83174cd4
	if (cr6.eq) goto loc_83174CD4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83172e10
	sub_83172E10(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x83174cc8
	if (cr6.eq) goto loc_83174CC8;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x83174cc8
	if (cr6.eq) goto loc_83174CC8;
	// lwz r11,704(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 704);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r30,r31,416
	r30.s64 = r31.s64 + 416;
	// addi r10,r10,-25172
	ctx.r10.s64 = ctx.r10.s64 + -25172;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r27,r11,r10
	r27.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r29,r31,744
	r29.s64 = r31.s64 + 744;
	// addi r28,r11,-29624
	r28.s64 = r11.s64 + -29624;
	// li r26,1
	r26.s64 = 1;
	// lwz r11,668(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 668);
	// stw r29,448(r31)
	PPC_STORE_U32(r31.u32 + 448, r29.u32);
	// stw r11,440(r31)
	PPC_STORE_U32(r31.u32 + 440, r11.u32);
	// lwz r11,588(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 588);
	// stw r11,444(r31)
	PPC_STORE_U32(r31.u32 + 444, r11.u32);
	// lwz r11,320(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 320);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83174c60
	if (cr6.eq) goto loc_83174C60;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// bl 0x83178e38
	sub_83178E38(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x83178f80
	sub_83178F80(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83174c34
	if (cr0.eq) goto loc_83174C34;
	// stw r26,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r26.u32);
loc_83174C34:
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,320(r31)
	PPC_STORE_U32(r31.u32 + 320, r11.u32);
	// bl 0x83172ec0
	sub_83172EC0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83174c60
	if (cr6.eq) goto loc_83174C60;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83174c60
	if (cr6.eq) goto loc_83174C60;
	// li r11,2
	r11.s64 = 2;
	// b 0x83174ccc
	goto loc_83174CCC;
loc_83174C60:
	// lwz r11,664(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 664);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r31,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r31.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bl 0x83172ec0
	sub_83172EC0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83173178
	sub_83173178(ctx, base);
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// beq cr6,0x83174cb0
	if (cr6.eq) goto loc_83174CB0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83174cb0
	if (cr6.eq) goto loc_83174CB0;
	// lwz r11,740(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 740);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83174cb0
	if (!cr6.eq) goto loc_83174CB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83174110
	sub_83174110(ctx, base);
	// b 0x83174cf8
	goto loc_83174CF8;
loc_83174CB0:
	// stw r26,328(r31)
	PPC_STORE_U32(r31.u32 + 328, r26.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83178980
	sub_83178980(ctx, base);
	// b 0x83174cf8
	goto loc_83174CF8;
loc_83174CC8:
	// li r11,4
	r11.s64 = 4;
loc_83174CCC:
	// stw r11,328(r31)
	PPC_STORE_U32(r31.u32 + 328, r11.u32);
	// b 0x83174cf8
	goto loc_83174CF8;
loc_83174CD4:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-25456
	ctx.r4.s64 = r11.s64 + -25456;
loc_83174CDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r11,660(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83174cf8
	if (!cr6.eq) goto loc_83174CF8;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,660(r31)
	PPC_STORE_U32(r31.u32 + 660, r11.u32);
loc_83174CF8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83174D00"))) PPC_WEAK_FUNC(sub_83174D00);
PPC_FUNC_IMPL(__imp__sub_83174D00) {
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
	// bl 0x83173238
	sub_83173238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83173970
	sub_83173970(ctx, base);
	// lwz r10,660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,660(r31)
	PPC_STORE_U32(r31.u32 + 660, r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// bl 0x831732a8
	sub_831732A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83174D50"))) PPC_WEAK_FUNC(sub_83174D50);
PPC_FUNC_IMPL(__imp__sub_83174D50) {
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
	// bl 0x83173238
	sub_83173238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83173bf0
	sub_83173BF0(ctx, base);
	// lwz r10,660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,660(r31)
	PPC_STORE_U32(r31.u32 + 660, r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// bl 0x831732a8
	sub_831732A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83174DA0"))) PPC_WEAK_FUNC(sub_83174DA0);
PPC_FUNC_IMPL(__imp__sub_83174DA0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x83173238
	sub_83173238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83173ec8
	sub_83173EC8(ctx, base);
	// lwz r11,660(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r10,660(r31)
	PPC_STORE_U32(r31.u32 + 660, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x831732a8
	sub_831732A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83174DE8"))) PPC_WEAK_FUNC(sub_83174DE8);
PPC_FUNC_IMPL(__imp__sub_83174DE8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x83173238
	sub_83173238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83173f38
	sub_83173F38(ctx, base);
	// lwz r11,660(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r10,660(r31)
	PPC_STORE_U32(r31.u32 + 660, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x831732a8
	sub_831732A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83174E30"))) PPC_WEAK_FUNC(sub_83174E30);
PPC_FUNC_IMPL(__imp__sub_83174E30) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x83173238
	sub_83173238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83173fb8
	sub_83173FB8(ctx, base);
	// lwz r11,660(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r10,660(r31)
	PPC_STORE_U32(r31.u32 + 660, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x831732a8
	sub_831732A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83174E78"))) PPC_WEAK_FUNC(sub_83174E78);
PPC_FUNC_IMPL(__imp__sub_83174E78) {
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
	// bl 0x83173238
	sub_83173238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831732a8
	sub_831732A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83172f88
	sub_83172F88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83173238
	sub_83173238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831743f0
	sub_831743F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831732a8
	sub_831732A8(ctx, base);
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

__attribute__((alias("__imp__sub_83174ED0"))) PPC_WEAK_FUNC(sub_83174ED0);
PPC_FUNC_IMPL(__imp__sub_83174ED0) {
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
	// bl 0x83173238
	sub_83173238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831732a8
	sub_831732A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83174178
	sub_83174178(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83173238
	sub_83173238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831730c0
	sub_831730C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831732a8
	sub_831732A8(ctx, base);
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

__attribute__((alias("__imp__sub_83174F28"))) PPC_WEAK_FUNC(sub_83174F28);
PPC_FUNC_IMPL(__imp__sub_83174F28) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x83173238
	sub_83173238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831744f8
	sub_831744F8(ctx, base);
	// lwz r11,660(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r10,660(r31)
	PPC_STORE_U32(r31.u32 + 660, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x831732a8
	sub_831732A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83174F70"))) PPC_WEAK_FUNC(sub_83174F70);
PPC_FUNC_IMPL(__imp__sub_83174F70) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x83173238
	sub_83173238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83174578
	sub_83174578(ctx, base);
	// lwz r11,660(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r10,660(r31)
	PPC_STORE_U32(r31.u32 + 660, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x831732a8
	sub_831732A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83174FB8"))) PPC_WEAK_FUNC(sub_83174FB8);
PPC_FUNC_IMPL(__imp__sub_83174FB8) {
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
	// bl 0x83173238
	sub_83173238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831745e0
	sub_831745E0(ctx, base);
	// lwz r11,660(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r10,660(r31)
	PPC_STORE_U32(r31.u32 + 660, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// bl 0x831732a8
	sub_831732A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83175010"))) PPC_WEAK_FUNC(sub_83175010);
PPC_FUNC_IMPL(__imp__sub_83175010) {
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
	// bl 0x83173238
	sub_83173238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83174728
	sub_83174728(ctx, base);
	// lwz r10,660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,660(r31)
	PPC_STORE_U32(r31.u32 + 660, r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// bl 0x831732a8
	sub_831732A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83175060"))) PPC_WEAK_FUNC(sub_83175060);
PPC_FUNC_IMPL(__imp__sub_83175060) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x83174b08
	sub_83174B08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83175070"))) PPC_WEAK_FUNC(sub_83175070);
PPC_FUNC_IMPL(__imp__sub_83175070) {
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
	// bl 0x83173238
	sub_83173238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83174b60
	sub_83174B60(ctx, base);
	// lwz r10,660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,660(r31)
	PPC_STORE_U32(r31.u32 + 660, r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// bl 0x831732a8
	sub_831732A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831750C8"))) PPC_WEAK_FUNC(sub_831750C8);
PPC_FUNC_IMPL(__imp__sub_831750C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r3,20(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x831750f0
	if (cr6.eq) goto loc_831750F0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x831750ec
	if (cr6.eq) goto loc_831750EC;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// b 0x83174ed0
	sub_83174ED0(ctx, base);
	return;
loc_831750EC:
	// b 0x83174110
	sub_83174110(ctx, base);
	return;
loc_831750F0:
	// b 0x83174e78
	sub_83174E78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831750F4"))) PPC_WEAK_FUNC(sub_831750F4);
PPC_FUNC_IMPL(__imp__sub_831750F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831750F8"))) PPC_WEAK_FUNC(sub_831750F8);
PPC_FUNC_IMPL(__imp__sub_831750F8) {
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// bl 0x831683b8
	sub_831683B8(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r30,r11,-29624
	r30.s64 = r11.s64 + -29624;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831784f8
	sub_831784F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83178c90
	sub_83178C90(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// addi r3,r11,-29272
	ctx.r3.s64 = r11.s64 + -29272;
	// bl 0x83168160
	sub_83168160(ctx, base);
	// lis r29,-31941
	r29.s64 = -2093285376;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,-25176(r29)
	PPC_STORE_U32(r29.u32 + -25176, ctx.r3.u32);
	// bne 0x83175168
	if (!cr0.eq) goto loc_83175168;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-25264
	ctx.r4.s64 = r11.s64 + -25264;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// b 0x831751cc
	goto loc_831751CC;
loc_83175168:
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// li r31,0
	r31.s64 = 0;
	// addi r28,r10,-25156
	r28.s64 = ctx.r10.s64 + -25156;
	// addi r27,r11,-25172
	r27.s64 = r11.s64 + -25172;
	// b 0x83175184
	goto loc_83175184;
loc_83175180:
	// lwz r3,-25176(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -25176);
loc_83175184:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83178790
	sub_83178790(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stwx r3,r31,r27
	PPC_STORE_U32(r31.u32 + r27.u32, ctx.r3.u32);
	// beq 0x831751d4
	if (cr0.eq) goto loc_831751D4;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831751d4
	if (!cr6.eq) goto loc_831751D4;
	// lis r11,-31977
	r11.s64 = -2095644672;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,20680
	ctx.r4.s64 = r11.s64 + 20680;
	// bl 0x831782d0
	sub_831782D0(ctx, base);
	// stwx r3,r31,r28
	PPC_STORE_U32(r31.u32 + r28.u32, ctx.r3.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpwi cr6,r31,16
	cr6.compare<int32_t>(r31.s32, 16, xer);
	// blt cr6,0x83175180
	if (cr6.lt) goto loc_83175180;
	// bl 0x83172f18
	sub_83172F18(ctx, base);
loc_831751CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
loc_831751D4:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-25304
	ctx.r4.s64 = r11.s64 + -25304;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r3,-25176(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -25176);
	// bl 0x83168240
	sub_83168240(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,-25176(r29)
	PPC_STORE_U32(r29.u32 + -25176, r11.u32);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x831751cc
	goto loc_831751CC;
}

__attribute__((alias("__imp__sub_83175200"))) PPC_WEAK_FUNC(sub_83175200);
PPC_FUNC_IMPL(__imp__sub_83175200) {
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,-29280
	ctx.r7.s64 = r11.s64 + -29280;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
loc_83175224:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x83175224
	if (!cr0.eq) goto loc_83175224;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83175264
	if (!cr6.eq) goto loc_83175264;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831750f8
	sub_831750F8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83175264
	if (cr6.eq) goto loc_83175264;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_83175264:
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

__attribute__((alias("__imp__sub_83175278"))) PPC_WEAK_FUNC(sub_83175278);
PPC_FUNC_IMPL(__imp__sub_83175278) {
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
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x831683b8
	sub_831683B8(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r11,-25128
	ctx.r3.s64 = r11.s64 + -25128;
	// bl 0x83168160
	sub_83168160(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,-25132(r11)
	PPC_STORE_U32(r11.u32 + -25132, ctx.r3.u32);
	// bne 0x831752c8
	if (!cr0.eq) goto loc_831752C8;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-25176
	ctx.r4.s64 = r11.s64 + -25176;
	// b 0x83175330
	goto loc_83175330;
loc_831752C8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8320e508
	sub_8320E508(ctx, base);
	// lis r31,-31941
	r31.s64 = -2093285376;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,-24104(r31)
	PPC_STORE_U32(r31.u32 + -24104, ctx.r3.u32);
	// beq 0x83175328
	if (cr0.eq) goto loc_83175328;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83175328
	if (!cr6.eq) goto loc_83175328;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// li r4,-15
	ctx.r4.s64 = -15;
	// addi r5,r10,-29936
	ctx.r5.s64 = ctx.r10.s64 + -29936;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -24104);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83175340
	goto loc_83175340;
loc_83175328:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-25224
	ctx.r4.s64 = r11.s64 + -25224;
loc_83175330:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_83175340:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175358"))) PPC_WEAK_FUNC(sub_83175358);
PPC_FUNC_IMPL(__imp__sub_83175358) {
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
	// lis r31,-31941
	r31.s64 = -2093285376;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r3,-24104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -24104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831753a0
	if (cr6.eq) goto loc_831753A0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r4,r10,-29936
	ctx.r4.s64 = ctx.r10.s64 + -29936;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,-24104(r31)
	PPC_STORE_U32(r31.u32 + -24104, r11.u32);
loc_831753A0:
	// lis r31,-31941
	r31.s64 = -2093285376;
	// lwz r3,-25132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -25132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831753bc
	if (cr6.eq) goto loc_831753BC;
	// bl 0x83168240
	sub_83168240(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,-25132(r31)
	PPC_STORE_U32(r31.u32 + -25132, r11.u32);
loc_831753BC:
	// bl 0x83167fb0
	sub_83167FB0(ctx, base);
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

__attribute__((alias("__imp__sub_831753D8"))) PPC_WEAK_FUNC(sub_831753D8);
PPC_FUNC_IMPL(__imp__sub_831753D8) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r5,r11,-25100
	ctx.r5.s64 = r11.s64 + -25100;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83175438
	if (cr0.eq) goto loc_83175438;
	// li r11,-1
	r11.s64 = -1;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// std r31,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r31.u64);
	// stw r31,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r31.u32);
	// b 0x8317543c
	goto loc_8317543C;
loc_83175438:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8317543C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83175460
	if (!cr6.eq) goto loc_83175460;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-25136
	ctx.r4.s64 = r11.s64 + -25136;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r11,-3
	r11.s64 = -3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x83175464
	goto loc_83175464;
loc_83175460:
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
loc_83175464:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83175470"))) PPC_WEAK_FUNC(sub_83175470);
PPC_FUNC_IMPL(__imp__sub_83175470) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8320e770
	sub_8320E770(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// bne 0x831754a4
	if (!cr0.eq) goto loc_831754A4;
	// li r11,1
	r11.s64 = 1;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// b 0x831754e8
	goto loc_831754E8;
loc_831754A4:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// std r3,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r3.u64);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
loc_831754E8:
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

__attribute__((alias("__imp__sub_83175500"))) PPC_WEAK_FUNC(sub_83175500);
PPC_FUNC_IMPL(__imp__sub_83175500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r11,-24104(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -24104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83175564
	if (cr6.eq) goto loc_83175564;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x83175564
	if (cr6.eq) goto loc_83175564;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r5,r9,-29936
	ctx.r5.s64 = ctx.r9.s64 + -29936;
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// b 0x83175568
	goto loc_83175568;
loc_83175564:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83175568:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175578"))) PPC_WEAK_FUNC(sub_83175578);
PPC_FUNC_IMPL(__imp__sub_83175578) {
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,-25136
	ctx.r7.s64 = r11.s64 + -25136;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
loc_8317559C:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8317559c
	if (!cr0.eq) goto loc_8317559C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x831755dc
	if (!cr6.eq) goto loc_831755DC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83175278
	sub_83175278(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x831755dc
	if (cr6.eq) goto loc_831755DC;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_831755DC:
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

__attribute__((alias("__imp__sub_831755F0"))) PPC_WEAK_FUNC(sub_831755F0);
PPC_FUNC_IMPL(__imp__sub_831755F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31941
	r11.s64 = -2093285376;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,-25136
	ctx.r7.s64 = r11.s64 + -25136;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
loc_83175600:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x83175600
	if (!cr0.eq) goto loc_83175600;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r3,r11,-29624
	ctx.r3.s64 = r11.s64 + -29624;
	// b 0x83175358
	sub_83175358(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83175634"))) PPC_WEAK_FUNC(sub_83175634);
PPC_FUNC_IMPL(__imp__sub_83175634) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175638"))) PPC_WEAK_FUNC(sub_83175638);
PPC_FUNC_IMPL(__imp__sub_83175638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// li r4,48
	ctx.r4.s64 = 48;
	// b 0x83168618
	sub_83168618(ctx, base);
	return;
}

