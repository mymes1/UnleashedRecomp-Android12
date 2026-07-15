#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83193230"))) PPC_WEAK_FUNC(sub_83193230);
PPC_FUNC_IMPL(__imp__sub_83193230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31930
	r11.s64 = -2092564480;
	// addi r11,r11,-23296
	r11.s64 = r11.s64 + -23296;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83193264"))) PPC_WEAK_FUNC(sub_83193264);
PPC_FUNC_IMPL(__imp__sub_83193264) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193268"))) PPC_WEAK_FUNC(sub_83193268);
PPC_FUNC_IMPL(__imp__sub_83193268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31930
	r11.s64 = -2092564480;
	// addi r11,r11,-23296
	r11.s64 = r11.s64 + -23296;
	// stw r3,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193278"))) PPC_WEAK_FUNC(sub_83193278);
PPC_FUNC_IMPL(__imp__sub_83193278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31930
	r11.s64 = -2092564480;
	// addi r11,r11,-23296
	r11.s64 = r11.s64 + -23296;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193288"))) PPC_WEAK_FUNC(sub_83193288);
PPC_FUNC_IMPL(__imp__sub_83193288) {
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
	// lis r11,-31930
	r11.s64 = -2092564480;
	// li r5,1288
	ctx.r5.s64 = 1288;
	// addi r31,r11,-23296
	r31.s64 = r11.s64 + -23296;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r11,8
	r11.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x83193268
	sub_83193268(ctx, base);
	// bl 0x831a1048
	sub_831A1048(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831932D8"))) PPC_WEAK_FUNC(sub_831932D8);
PPC_FUNC_IMPL(__imp__sub_831932D8) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x831930f0
	sub_831930F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8319332c
	if (cr6.eq) goto loc_8319332C;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x831931b8
	sub_831931B8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83193344
	if (cr6.eq) goto loc_83193344;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-12684
	ctx.r5.s64 = r11.s64 + -12684;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83193230
	sub_83193230(ctx, base);
loc_8319332C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83193344:
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83193130
	sub_83193130(ctx, base);
	// bl 0x83193d30
	sub_83193D30(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83193390
	if (!cr6.eq) goto loc_83193390;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-12716
	ctx.r5.s64 = r11.s64 + -12716;
	// bl 0x83193230
	sub_83193230(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831931d0
	sub_831931D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83193390:
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// bl 0x831a0fe8
	sub_831A0FE8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831933d4
	if (!cr6.eq) goto loc_831933D4;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-12748
	ctx.r5.s64 = r11.s64 + -12748;
	// bl 0x83193230
	sub_83193230(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831931d0
	sub_831931D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_831933D4:
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// lis r11,-31930
	r11.s64 = -2092564480;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,-23296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -23296);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,-23296(r11)
	PPC_STORE_U32(r11.u32 + -23296, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193400"))) PPC_WEAK_FUNC(sub_83193400);
PPC_FUNC_IMPL(__imp__sub_83193400) {
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
	// lis r31,-31935
	r31.s64 = -2092892160;
	// lwz r11,-8004(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -8004);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x83193454
	if (!cr6.lt) goto loc_83193454;
	// bl 0x83193078
	sub_83193078(ctx, base);
	// lis r11,-31935
	r11.s64 = -2092892160;
	// stw r3,-8008(r11)
	PPC_STORE_U32(r11.u32 + -8008, ctx.r3.u32);
	// bl 0x83193288
	sub_83193288(ctx, base);
	// bl 0x831a1060
	sub_831A1060(ctx, base);
	// bl 0x831940d0
	sub_831940D0(ctx, base);
	// bl 0x831a0fe0
	sub_831A0FE0(ctx, base);
	// lwz r11,-8004(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -8004);
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,-8004(r31)
	PPC_STORE_U32(r31.u32 + -8004, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,-8000(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8000, r11.u32);
loc_83193454:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193468"))) PPC_WEAK_FUNC(sub_83193468);
PPC_FUNC_IMPL(__imp__sub_83193468) {
	PPC_FUNC_PROLOGUE();
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193478"))) PPC_WEAK_FUNC(sub_83193478);
PPC_FUNC_IMPL(__imp__sub_83193478) {
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
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// addi r5,r9,-17232
	ctx.r5.s64 = ctx.r9.s64 + -17232;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r30,36(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r4,r9,-12640
	ctx.r4.s64 = ctx.r9.s64 + -12640;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// bl 0x8313dba8
	sub_8313DBA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne cr6,0x831934e0
	if (!cr6.eq) goto loc_831934E0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x831934e8
	goto loc_831934E8;
loc_831934E0:
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_831934E8:
	// bl 0x83193d88
	sub_83193D88(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
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

__attribute__((alias("__imp__sub_83193510"))) PPC_WEAK_FUNC(sub_83193510);
PPC_FUNC_IMPL(__imp__sub_83193510) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8319352c
	if (cr6.eq) goto loc_8319352C;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// blr 
	return;
loc_8319352C:
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193540"))) PPC_WEAK_FUNC(sub_83193540);
PPC_FUNC_IMPL(__imp__sub_83193540) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,76(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// b 0x83193da0
	sub_83193DA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83193550"))) PPC_WEAK_FUNC(sub_83193550);
PPC_FUNC_IMPL(__imp__sub_83193550) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193558"))) PPC_WEAK_FUNC(sub_83193558);
PPC_FUNC_IMPL(__imp__sub_83193558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r11,r11,r4
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// subf r10,r4,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r4.s64;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193580"))) PPC_WEAK_FUNC(sub_83193580);
PPC_FUNC_IMPL(__imp__sub_83193580) {
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
	// srawi r11,r5,1
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	r11.s64 = ctx.r5.s32 >> 1;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// srawi r10,r4,1
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 1;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r11.s64 = temp.s64;
	// addi r3,r8,4
	ctx.r3.s64 = ctx.r8.s64 + 4;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x83193558
	sub_83193558(ctx, base);
	// srawi r11,r6,1
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	r11.s64 = ctx.r6.s32 >> 1;
	// addi r3,r8,20
	ctx.r3.s64 = ctx.r8.s64 + 20;
	// addze r5,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r11,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	r11.s64 = ctx.r7.s32 >> 1;
	// addze r4,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r4.s64 = temp.s64;
	// bl 0x83193558
	sub_83193558(ctx, base);
	// addi r3,r8,36
	ctx.r3.s64 = ctx.r8.s64 + 36;
	// bl 0x83193558
	sub_83193558(ctx, base);
	// lwz r11,68(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	// addi r3,r8,68
	ctx.r3.s64 = ctx.r8.s64 + 68;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831935f4
	if (cr6.eq) goto loc_831935F4;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x83193558
	sub_83193558(ctx, base);
loc_831935F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193608"))) PPC_WEAK_FUNC(sub_83193608);
PPC_FUNC_IMPL(__imp__sub_83193608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-12632
	ctx.r3.s64 = r11.s64 + -12632;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193618"))) PPC_WEAK_FUNC(sub_83193618);
PPC_FUNC_IMPL(__imp__sub_83193618) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// lwz r11,-7992(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7992);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,-7992(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7992, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193638"))) PPC_WEAK_FUNC(sub_83193638);
PPC_FUNC_IMPL(__imp__sub_83193638) {
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
	// beq cr6,0x83193680
	if (cr6.eq) goto loc_83193680;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83193680
	if (cr6.lt) goto loc_83193680;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-5212
	ctx.r4.s64 = r11.s64 + -5212;
	// addi r3,r3,18
	ctx.r3.s64 = ctx.r3.s64 + 18;
	// bl 0x831b5880
	sub_831B5880(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83193680:
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

__attribute__((alias("__imp__sub_83193698"))) PPC_WEAK_FUNC(sub_83193698);
PPC_FUNC_IMPL(__imp__sub_83193698) {
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
	// beq cr6,0x831936e0
	if (cr6.eq) goto loc_831936E0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x831936e0
	if (cr6.lt) goto loc_831936E0;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-9296
	ctx.r4.s64 = r11.s64 + -9296;
	// addi r3,r3,19
	ctx.r3.s64 = ctx.r3.s64 + 19;
	// bl 0x831b5880
	sub_831B5880(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_831936E0:
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

__attribute__((alias("__imp__sub_831936F8"))) PPC_WEAK_FUNC(sub_831936F8);
PPC_FUNC_IMPL(__imp__sub_831936F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister temp{};
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// andi. r3,r11,35
	ctx.r3.u64 = r11.u64 & 35;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193708"))) PPC_WEAK_FUNC(sub_83193708);
PPC_FUNC_IMPL(__imp__sub_83193708) {
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
	// lis r8,-31935
	ctx.r8.s64 = -2092892160;
	// lwz r10,-7992(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7992);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bge cr6,0x83193738
	if (!cr6.lt) goto loc_83193738;
	// bl 0x83193608
	sub_83193608(ctx, base);
	// lis r9,-31935
	ctx.r9.s64 = -2092892160;
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// stw r3,-7996(r9)
	PPC_STORE_U32(ctx.r9.u32 + -7996, ctx.r3.u32);
	// stw r11,-7992(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7992, r11.u32);
loc_83193738:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193748"))) PPC_WEAK_FUNC(sub_83193748);
PPC_FUNC_IMPL(__imp__sub_83193748) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// beq cr6,0x83193814
	if (cr6.eq) goto loc_83193814;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x83193814
	if (!cr6.gt) goto loc_83193814;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r31,r11,-12576
	r31.s64 = r11.s64 + -12576;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r30,r11,9148
	r30.s64 = r11.s64 + 9148;
loc_8319378C:
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
loc_83193798:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r3,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x831937b8
	if (!cr0.eq) goto loc_831937B8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x83193798
	if (!cr6.eq) goto loc_83193798;
loc_831937B8:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x83193804
	if (!cr6.eq) goto loc_83193804;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
loc_831937CC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r3,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x831937ec
	if (!cr0.eq) goto loc_831937EC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x831937cc
	if (!cr6.eq) goto loc_831937CC;
loc_831937EC:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x83193804
	if (!cr6.eq) goto loc_83193804;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r7,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// bl 0x831936f8
	sub_831936F8(ctx, base);
	// stw r3,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
loc_83193804:
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8319378c
	if (!cr6.eq) goto loc_8319378C;
loc_83193814:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193830"))) PPC_WEAK_FUNC(sub_83193830);
PPC_FUNC_IMPL(__imp__sub_83193830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31930
	r11.s64 = -2092564480;
	// addi r10,r11,-23936
	ctx.r10.s64 = r11.s64 + -23936;
	// li r11,0
	r11.s64 = 0;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83193868
	if (!cr6.gt) goto loc_83193868;
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
loc_8319384C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r3,r3,76
	ctx.r3.s64 = ctx.r3.s64 + 76;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x8319384c
	if (cr6.lt) goto loc_8319384C;
loc_83193868:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193870"))) PPC_WEAK_FUNC(sub_83193870);
PPC_FUNC_IMPL(__imp__sub_83193870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	r11.s64 = 0;
	// lfs f0,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, r11.u32);
	// stfs f0,64(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193898"))) PPC_WEAK_FUNC(sub_83193898);
PPC_FUNC_IMPL(__imp__sub_83193898) {
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
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lis r11,-31930
	r11.s64 = -2092564480;
	// lwz r10,-23936(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -23936);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,-23936(r11)
	PPC_STORE_U32(r11.u32 + -23936, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831938C0"))) PPC_WEAK_FUNC(sub_831938C0);
PPC_FUNC_IMPL(__imp__sub_831938C0) {
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
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83193904
	if (!cr6.eq) goto loc_83193904;
	// li r11,0
	r11.s64 = 0;
	// li r29,1
	r29.s64 = 1;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r29,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_83193904:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,-17232
	r30.s64 = r11.s64 + -17232;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r4,r11,-12556
	ctx.r4.s64 = r11.s64 + -12556;
	// bl 0x8313dba8
	sub_8313DBA8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r29,1
	r29.s64 = 1;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-12564
	ctx.r4.s64 = r11.s64 + -12564;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// bl 0x8313dba8
	sub_8313DBA8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r29,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r29.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83193980"))) PPC_WEAK_FUNC(sub_83193980);
PPC_FUNC_IMPL(__imp__sub_83193980) {
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
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x831939e0
	if (!cr6.eq) goto loc_831939E0;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831939e0
	if (cr6.eq) goto loc_831939E0;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x8313dba8
	sub_8313DBA8(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x831939ec
	goto loc_831939EC;
loc_831939E0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_831939EC:
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

__attribute__((alias("__imp__sub_83193A08"))) PPC_WEAK_FUNC(sub_83193A08);
PPC_FUNC_IMPL(__imp__sub_83193A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32768
	r11.s64 = -2147483648;
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// ori r7,r9,65535
	ctx.r7.u64 = ctx.r9.u64 | 65535;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bne cr6,0x83193a24
	if (!cr6.eq) goto loc_83193A24;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
loc_83193A24:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x83193a30
	if (!cr6.eq) goto loc_83193A30;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_83193A30:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,9
	ctx.r8.s64 = 9;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_83193A40:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x83193a40
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83193A40;
	// addi r11,r6,36
	r11.s64 = ctx.r6.s64 + 36;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83193A58:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x83193a58
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83193A58;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bne cr6,0x83193a88
	if (!cr6.eq) goto loc_83193A88;
	// addi r11,r6,68
	r11.s64 = ctx.r6.s64 + 68;
	// li r9,207
	ctx.r9.s64 = 207;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83193A78:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x83193a78
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83193A78;
	// b 0x83193ab0
	goto loc_83193AB0;
loc_83193A88:
	// subf r8,r10,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r10.s64;
	// li r11,207
	r11.s64 = 207;
	// addi r9,r6,68
	ctx.r9.s64 = ctx.r6.s64 + 68;
	// divwu r8,r8,r11
	ctx.r8.u32 = ctx.r8.u32 / r11.u32;
loc_83193A98:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83193a98
	if (!cr6.eq) goto loc_83193A98;
loc_83193AB0:
	// addi r11,r6,896
	r11.s64 = ctx.r6.s64 + 896;
	// li r10,16
	ctx.r10.s64 = 16;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83193ABC:
	// stw r5,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r5.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x83193abc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83193ABC;
	// addi r11,r6,960
	r11.s64 = ctx.r6.s64 + 960;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83193AD8:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x83193ad8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83193AD8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193AE8"))) PPC_WEAK_FUNC(sub_83193AE8);
PPC_FUNC_IMPL(__imp__sub_83193AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r8,r6,1024
	ctx.r8.s64 = ctx.r6.s64 + 1024;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r31,r8,1024
	r31.s64 = ctx.r8.s64 + 1024;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// mr r11,r31
	r11.u64 = r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83193B08:
	// stb r7,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x83193b08
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83193B08;
	// lis r3,-32230
	ctx.r3.s64 = -2112225280;
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// subfic r7,r31,-16
	xer.ca = r31.u32 <= 4294967280;
	ctx.r7.s64 = -16 - r31.s64;
	// li r9,220
	ctx.r9.s64 = 220;
	// lfs f0,-13184(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -13184);
	f0.f64 = double(temp.f32);
loc_83193B28:
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + r11.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// std r4,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r4.u64);
	// lfd f13,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f13.u64);
	// lbz r4,-17(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + -17);
	// stb r4,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r4.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne cr6,0x83193b28
	if (!cr6.eq) goto loc_83193B28;
	// addi r11,r31,236
	r11.s64 = r31.s64 + 236;
	// li r7,255
	ctx.r7.s64 = 255;
	// li r9,20
	ctx.r9.s64 = 20;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83193B74:
	// stb r7,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x83193b74
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83193B74;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// ori r4,r9,65535
	ctx.r4.u64 = ctx.r9.u64 | 65535;
	// bne cr6,0x83193b98
	if (!cr6.eq) goto loc_83193B98;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
loc_83193B98:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x83193ba4
	if (!cr6.eq) goto loc_83193BA4;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_83193BA4:
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83193BB4:
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x83193bb4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83193BB4;
	// addi r11,r8,36
	r11.s64 = ctx.r8.s64 + 36;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83193BCC:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x83193bcc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83193BCC;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bne cr6,0x83193bfc
	if (!cr6.eq) goto loc_83193BFC;
	// addi r11,r8,68
	r11.s64 = ctx.r8.s64 + 68;
	// li r9,207
	ctx.r9.s64 = 207;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83193BEC:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x83193bec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83193BEC;
	// b 0x83193c24
	goto loc_83193C24;
loc_83193BFC:
	// subf r7,r10,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r10.s64;
	// li r11,207
	r11.s64 = 207;
	// addi r9,r8,68
	ctx.r9.s64 = ctx.r8.s64 + 68;
	// divwu r7,r7,r11
	ctx.r7.u32 = ctx.r7.u32 / r11.u32;
loc_83193C0C:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83193c0c
	if (!cr6.eq) goto loc_83193C0C;
loc_83193C24:
	// addi r11,r8,896
	r11.s64 = ctx.r8.s64 + 896;
	// li r10,16
	ctx.r10.s64 = 16;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83193C30:
	// stw r5,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r5.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x83193c30
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83193C30;
	// addi r11,r8,960
	r11.s64 = ctx.r8.s64 + 960;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83193C4C:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x83193c4c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83193C4C;
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// addi r10,r6,8
	ctx.r10.s64 = ctx.r6.s64 + 8;
	// li r9,64
	ctx.r9.s64 = 64;
loc_83193C64:
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lwzx r7,r7,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r7,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r7.u32);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwzx r7,r7,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r7,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r7.u32);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwzx r7,r7,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwzx r7,r7,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne cr6,0x83193c64
	if (!cr6.eq) goto loc_83193C64;
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193CC0"))) PPC_WEAK_FUNC(sub_83193CC0);
PPC_FUNC_IMPL(__imp__sub_83193CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31930
	r11.s64 = -2092564480;
	// addi r11,r11,-23936
	r11.s64 = r11.s64 + -23936;
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193CD0"))) PPC_WEAK_FUNC(sub_83193CD0);
PPC_FUNC_IMPL(__imp__sub_83193CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31930
	r11.s64 = -2092564480;
	// addi r11,r11,-23936
	r11.s64 = r11.s64 + -23936;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193CE0"))) PPC_WEAK_FUNC(sub_83193CE0);
PPC_FUNC_IMPL(__imp__sub_83193CE0) {
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
	// lis r11,-31930
	r11.s64 = -2092564480;
	// li r5,620
	ctx.r5.s64 = 620;
	// addi r31,r11,-23936
	r31.s64 = r11.s64 + -23936;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r11,8
	r11.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x83193cc0
	sub_83193CC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193D30"))) PPC_WEAK_FUNC(sub_83193D30);
PPC_FUNC_IMPL(__imp__sub_83193D30) {
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
	// bl 0x83193830
	sub_83193830(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83193d58
	if (!cr6.eq) goto loc_83193D58;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83193D58:
	// bl 0x83193870
	sub_83193870(ctx, base);
	// lis r11,-31930
	r11.s64 = -2092564480;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,-23936(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -23936);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,-23936(r11)
	PPC_STORE_U32(r11.u32 + -23936, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193D88"))) PPC_WEAK_FUNC(sub_83193D88);
PPC_FUNC_IMPL(__imp__sub_83193D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// b 0x831938c0
	sub_831938C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83193DA0"))) PPC_WEAK_FUNC(sub_83193DA0);
PPC_FUNC_IMPL(__imp__sub_83193DA0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r30,r11,-17232
	r30.s64 = r11.s64 + -17232;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// addi r4,r11,-12524
	ctx.r4.s64 = r11.s64 + -12524;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83193980
	sub_83193980(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83193e04
	if (!cr6.eq) goto loc_83193E04;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// li r11,0
	r11.s64 = 0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b74
	return;
loc_83193E04:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-12528
	ctx.r4.s64 = r11.s64 + -12528;
	// bl 0x831b3260
	sub_831B3260(ctx, base);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-12536
	ctx.r4.s64 = r11.s64 + -12536;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83193980
	sub_83193980(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83193e50
	if (!cr6.eq) goto loc_83193E50;
	// lis r11,32767
	r11.s64 = 2147418112;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b74
	return;
loc_83193E50:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mullw r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r27.s32);
	// addi r4,r9,-12548
	ctx.r4.s64 = ctx.r9.s64 + -12548;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x831b3260
	sub_831B3260(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83193E90"))) PPC_WEAK_FUNC(sub_83193E90);
PPC_FUNC_IMPL(__imp__sub_83193E90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// bl 0x83193278
	sub_83193278(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x83193ed4
	if (!cr6.eq) goto loc_83193ED4;
	// bl 0x83193ae8
	sub_83193AE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_83193ED4:
	// bl 0x83193a08
	sub_83193A08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83193EE0"))) PPC_WEAK_FUNC(sub_83193EE0);
PPC_FUNC_IMPL(__imp__sub_83193EE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lfs f13,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lfs f0,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	f0.f64 = double(temp.f32);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// bl 0x83193cd0
	sub_83193CD0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83193f3c
	if (!cr6.eq) goto loc_83193F3C;
	// li r11,256
	r11.s64 = 256;
loc_83193F0C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r8,r8,17,15,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0x1FFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// sth r8,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r8.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bne cr6,0x83193f0c
	if (!cr6.eq) goto loc_83193F0C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83193F3C:
	// fsub f11,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = f0.f64 - ctx.f13.f64;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// li r10,256
	ctx.r10.s64 = 256;
	// li r7,1
	ctx.r7.s64 = 1;
	// lfd f12,-3744(r8)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + -3744);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// fdiv f12,f12,f11
	ctx.f12.f64 = ctx.f12.f64 / ctx.f11.f64;
	// fmul f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 * f0.f64;
	// fmul f11,f12,f13
	ctx.f11.f64 = ctx.f12.f64 * ctx.f13.f64;
	// lfd f13,-10840(r8)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r8.u32 + -10840);
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// fmul f12,f12,f13
	ctx.f12.f64 = ctx.f12.f64 * ctx.f13.f64;
	// fmul f13,f11,f13
	ctx.f13.f64 = ctx.f11.f64 * ctx.f13.f64;
	// lfd f11,-12512(r8)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r8.u32 + -12512);
loc_83193F78:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83193f88
	if (!cr6.eq) goto loc_83193F88;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
loc_83193F88:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f10,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fmul f10,f10,f0
	ctx.f10.f64 = ctx.f10.f64 * f0.f64;
	// fmul f10,f10,f11
	ctx.f10.f64 = ctx.f10.f64 * ctx.f11.f64;
	// fdiv f10,f13,f10
	ctx.f10.f64 = ctx.f13.f64 / ctx.f10.f64;
	// fsub f10,f12,f10
	ctx.f10.f64 = ctx.f12.f64 - ctx.f10.f64;
	// fctidz f10,f10
	ctx.f10.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lhz r8,94(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// sth r8,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r8.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bne cr6,0x83193f78
	if (!cr6.eq) goto loc_83193F78;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193FE0"))) PPC_WEAK_FUNC(sub_83193FE0);
PPC_FUNC_IMPL(__imp__sub_83193FE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lfs f13,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	f0.f64 = double(temp.f32);
	// bl 0x83193cd0
	sub_83193CD0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// li r10,256
	ctx.r10.s64 = 256;
	// bne cr6,0x83194038
	if (!cr6.eq) goto loc_83194038;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// subf r9,r5,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r5.s64;
loc_8319400C:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r8,r8,1,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFF00;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne cr6,0x8319400c
	if (!cr6.eq) goto loc_8319400C;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83194038:
	// fsub f11,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = f0.f64 - ctx.f13.f64;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// subf r8,r4,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r4.s64;
	// li r7,1
	ctx.r7.s64 = 1;
	// lfd f12,-3744(r9)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r9.u32 + -3744);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// fdiv f12,f12,f11
	ctx.f12.f64 = ctx.f12.f64 / ctx.f11.f64;
	// fmul f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 * f0.f64;
	// fmul f11,f12,f13
	ctx.f11.f64 = ctx.f12.f64 * ctx.f13.f64;
	// lfd f13,-12504(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + -12504);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// fmul f12,f12,f13
	ctx.f12.f64 = ctx.f12.f64 * ctx.f13.f64;
	// fmul f13,f11,f13
	ctx.f13.f64 = ctx.f11.f64 * ctx.f13.f64;
	// lfd f11,-12512(r9)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r9.u32 + -12512);
loc_83194074:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83194084
	if (!cr6.eq) goto loc_83194084;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
loc_83194084:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fmul f10,f10,f0
	ctx.f10.f64 = ctx.f10.f64 * f0.f64;
	// fmul f10,f10,f11
	ctx.f10.f64 = ctx.f10.f64 * ctx.f11.f64;
	// fdiv f10,f13,f10
	ctx.f10.f64 = ctx.f13.f64 / ctx.f10.f64;
	// fsub f10,f12,f10
	ctx.f10.f64 = ctx.f12.f64 - ctx.f10.f64;
	// fctidz f10,f10
	ctx.f10.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfiwx f10,0,r6
	PPC_STORE_U32(ctx.r6.u32, ctx.f10.u32);
	// bne cr6,0x83194074
	if (!cr6.eq) goto loc_83194074;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831940D0"))) PPC_WEAK_FUNC(sub_831940D0);
PPC_FUNC_IMPL(__imp__sub_831940D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83193ce0
	sub_83193CE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831940D8"))) PPC_WEAK_FUNC(sub_831940D8);
PPC_FUNC_IMPL(__imp__sub_831940D8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r30,1024
	r29.s64 = r30.s64 + 1024;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83193e90
	sub_83193E90(ctx, base);
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83194158
	if (!cr6.eq) goto loc_83194158;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x8319414c
	if (!cr6.eq) goto loc_8319414C;
	// bl 0x83193ee0
	sub_83193EE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_8319414C:
	// bl 0x83193fe0
	sub_83193FE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_83194158:
	// lfs f2,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	ctx.f2.f64 = double(temp.f32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lfs f1,60(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83194178"))) PPC_WEAK_FUNC(sub_83194178);
PPC_FUNC_IMPL(__imp__sub_83194178) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83193da0
	sub_83193DA0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x831940d8
	sub_831940D8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831941D0"))) PPC_WEAK_FUNC(sub_831941D0);
PPC_FUNC_IMPL(__imp__sub_831941D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x831941f8
	if (!cr6.eq) goto loc_831941F8;
	// xor r11,r3,r4
	r11.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x831941f0
	if (cr6.lt) goto loc_831941F0;
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_831941F0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// blr 
	return;
loc_831941F8:
	// extsw r11,r3
	r11.s64 = ctx.r3.s32;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// extsw r9,r5
	ctx.r9.s64 = ctx.r5.s32;
	// mulld r11,r11,r10
	r11.s64 = r11.s64 * ctx.r10.s64;
	// divd r11,r11,r9
	r11.s64 = r11.s64 / ctx.r9.s64;
	// extsw r3,r11
	ctx.r3.s64 = r11.s32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194218"))) PPC_WEAK_FUNC(sub_83194218);
PPC_FUNC_IMPL(__imp__sub_83194218) {
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
	// lis r11,-31935
	r11.s64 = -2092892160;
	// addi r31,r11,-7988
	r31.s64 = r11.s64 + -7988;
	// addi r11,r31,36
	r11.s64 = r31.s64 + 36;
	// addi r10,r31,36
	ctx.r10.s64 = r31.s64 + 36;
	// addi r9,r31,36
	ctx.r9.s64 = r31.s64 + 36;
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
	// bne cr6,0x83194278
	if (!cr6.eq) goto loc_83194278;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83137798
	sub_83137798(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83194278
	if (!cr6.eq) goto loc_83194278;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,3937
	ctx.r4.u64 = ctx.r4.u64 | 3937;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
loc_83194278:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194290"))) PPC_WEAK_FUNC(sub_83194290);
PPC_FUNC_IMPL(__imp__sub_83194290) {
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
	// lis r11,-31935
	r11.s64 = -2092892160;
	// addi r31,r11,-7956
	r31.s64 = r11.s64 + -7956;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// addi r9,r31,4
	ctx.r9.s64 = r31.s64 + 4;
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
	// bne cr6,0x831942e4
	if (!cr6.eq) goto loc_831942E4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831942e4
	if (cr6.eq) goto loc_831942E4;
	// bl 0x83137878
	sub_83137878(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_831942E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831942F8"))) PPC_WEAK_FUNC(sub_831942F8);
PPC_FUNC_IMPL(__imp__sub_831942F8) {
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
	// lis r11,-31935
	r11.s64 = -2092892160;
	// lwz r3,-7956(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -7956);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x83194328
	if (!cr6.lt) goto loc_83194328;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,3938
	ctx.r4.u64 = ctx.r4.u64 | 3938;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
loc_83194328:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194338"))) PPC_WEAK_FUNC(sub_83194338);
PPC_FUNC_IMPL(__imp__sub_83194338) {
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
	// lis r11,-31935
	r11.s64 = -2092892160;
	// lwz r3,-7956(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -7956);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x83194368
	if (!cr6.lt) goto loc_83194368;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,3939
	ctx.r4.u64 = ctx.r4.u64 | 3939;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
loc_83194368:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194378"))) PPC_WEAK_FUNC(sub_83194378);
PPC_FUNC_IMPL(__imp__sub_83194378) {
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
	// bl 0x8318fcc8
	sub_8318FCC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831943bc
	if (cr6.eq) goto loc_831943BC;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,353
	ctx.r4.u64 = ctx.r4.u64 | 353;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_831943BC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,49
	ctx.r4.s64 = 49;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181e10
	sub_83181E10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831943E8"))) PPC_WEAK_FUNC(sub_831943E8);
PPC_FUNC_IMPL(__imp__sub_831943E8) {
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
	// li r4,49
	ctx.r4.s64 = 49;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194418"))) PPC_WEAK_FUNC(sub_83194418);
PPC_FUNC_IMPL(__imp__sub_83194418) {
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
	// li r4,49
	ctx.r4.s64 = 49;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83194454
	if (!cr6.eq) goto loc_83194454;
	// li r4,56
	ctx.r4.s64 = 56;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x83194458
	if (cr6.eq) goto loc_83194458;
loc_83194454:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83194458:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194470"))) PPC_WEAK_FUNC(sub_83194470);
PPC_FUNC_IMPL(__imp__sub_83194470) {
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
	// li r4,49
	ctx.r4.s64 = 49;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831944ac
	if (!cr6.eq) goto loc_831944AC;
	// li r4,57
	ctx.r4.s64 = 57;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x831944b0
	if (cr6.eq) goto loc_831944B0;
loc_831944AC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_831944B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831944C8"))) PPC_WEAK_FUNC(sub_831944C8);
PPC_FUNC_IMPL(__imp__sub_831944C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r31,r11,3464
	r31.s64 = r11.s64 + 3464;
	// bl 0x831942f8
	sub_831942F8(ctx, base);
	// lwz r11,360(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 360);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,356(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 356);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// srawi r9,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = r11.s32 >> 5;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r10,356(r31)
	PPC_STORE_U32(r31.u32 + 356, ctx.r10.u32);
	// subf r9,r9,r11
	ctx.r9.s64 = r11.s64 - ctx.r9.s64;
	// addi r9,r9,91
	ctx.r9.s64 = ctx.r9.s64 + 91;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + r31.u32, ctx.r10.u32);
	// stw r11,360(r31)
	PPC_STORE_U32(r31.u32 + 360, r11.u32);
	// bl 0x83194338
	sub_83194338(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194548"))) PPC_WEAK_FUNC(sub_83194548);
PPC_FUNC_IMPL(__imp__sub_83194548) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r31,r11,3464
	r31.s64 = r11.s64 + 3464;
	// bl 0x831942f8
	sub_831942F8(ctx, base);
	// lwz r11,504(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 504);
	// lwz r10,508(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// blt cr6,0x83194598
	if (cr6.lt) goto loc_83194598;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r28,0
	r28.s64 = 0;
	// bl 0x83194338
	sub_83194338(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_83194598:
	// srawi r10,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = r11.s32 >> 5;
	// stw r29,492(r31)
	PPC_STORE_U32(r31.u32 + 492, r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// li r28,1
	r28.s64 = 1;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,128
	r11.s64 = r11.s64 + 128;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, r30.u32);
	// lwz r10,504(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 504);
	// lwz r11,496(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 496);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,504(r31)
	PPC_STORE_U32(r31.u32 + 504, ctx.r10.u32);
	// stw r11,496(r31)
	PPC_STORE_U32(r31.u32 + 496, r11.u32);
	// bl 0x83194338
	sub_83194338(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831945E8"))) PPC_WEAK_FUNC(sub_831945E8);
PPC_FUNC_IMPL(__imp__sub_831945E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r31,r11,3464
	r31.s64 = r11.s64 + 3464;
	// bl 0x831942f8
	sub_831942F8(ctx, base);
	// lwz r11,504(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 504);
	// lwz r10,508(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// subf. r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bgt 0x8319463c
	if (cr0.gt) goto loc_8319463C;
	// li r11,-1
	r11.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r28,0
	r28.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x83194338
	sub_83194338(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8319463C:
	// lwz r11,492(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 492);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r28,1
	r28.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r11,508(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// srawi r10,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = r11.s32 >> 5;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,128
	r11.s64 = r11.s64 + 128;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,508(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,508(r31)
	PPC_STORE_U32(r31.u32 + 508, r11.u32);
	// bl 0x83194338
	sub_83194338(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83194690"))) PPC_WEAK_FUNC(sub_83194690);
PPC_FUNC_IMPL(__imp__sub_83194690) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r30,0
	r30.s64 = 0;
loc_831946AC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831946f0
	if (cr6.eq) goto loc_831946F0;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831946f0
	if (!cr6.eq) goto loc_831946F0;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpwi cr6,r30,15
	cr6.compare<int32_t>(r30.s32, 15, xer);
	// blt cr6,0x831946ac
	if (cr6.lt) goto loc_831946AC;
loc_831946F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831946F8"))) PPC_WEAK_FUNC(sub_831946F8);
PPC_FUNC_IMPL(__imp__sub_831946F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// li r11,8
	r11.s64 = 8;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194728"))) PPC_WEAK_FUNC(sub_83194728);
PPC_FUNC_IMPL(__imp__sub_83194728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r6,116
	r11.s64 = ctx.r6.s64 * 116;
	// add r10,r11,r3
	ctx.r10.u64 = r11.u64 + ctx.r3.u64;
	// rlwinm r11,r4,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// addi r11,r11,1491
	r11.s64 = r11.s64 + 1491;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r6.u32);
	// stw r4,5092(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5092, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194750"))) PPC_WEAK_FUNC(sub_83194750);
PPC_FUNC_IMPL(__imp__sub_83194750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r10,r4,116
	ctx.r10.s64 = ctx.r4.s64 * 116;
	// mulli r11,r5,68
	r11.s64 = ctx.r5.s64 * 68;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r5,5096(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5096, ctx.r5.u32);
	// stw r4,5960(r11)
	PPC_STORE_U32(r11.u32 + 5960, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194770"))) PPC_WEAK_FUNC(sub_83194770);
PPC_FUNC_IMPL(__imp__sub_83194770) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r11,r31,5944
	r11.s64 = r31.s64 + 5944;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// addi r30,r11,12
	r30.s64 = r11.s64 + 12;
loc_83194794:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831947c8
	if (cr6.eq) goto loc_831947C8;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831947d8
	if (!cr6.eq) goto loc_831947D8;
loc_831947C8:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,68
	r30.s64 = r30.s64 + 68;
	// cmpwi cr6,r29,9
	cr6.compare<int32_t>(r29.s32, 9, xer);
	// blt cr6,0x83194794
	if (cr6.lt) goto loc_83194794;
loc_831947D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831947E0"))) PPC_WEAK_FUNC(sub_831947E0);
PPC_FUNC_IMPL(__imp__sub_831947E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mulli r11,r11,68
	r11.s64 = r11.s64 * 68;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r11,5956(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 5956);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83194808
	if (!cr6.eq) goto loc_83194808;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83194808:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83194820"))) PPC_WEAK_FUNC(sub_83194820);
PPC_FUNC_IMPL(__imp__sub_83194820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,68
	r11.s64 = ctx.r4.s64 * 68;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r5,5944(r11)
	PPC_STORE_U32(r11.u32 + 5944, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194830"))) PPC_WEAK_FUNC(sub_83194830);
PPC_FUNC_IMPL(__imp__sub_83194830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,68
	r11.s64 = ctx.r4.s64 * 68;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r3,5944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 5944);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194840"))) PPC_WEAK_FUNC(sub_83194840);
PPC_FUNC_IMPL(__imp__sub_83194840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,68
	r11.s64 = ctx.r4.s64 * 68;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r5,5948(r11)
	PPC_STORE_U32(r11.u32 + 5948, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194850"))) PPC_WEAK_FUNC(sub_83194850);
PPC_FUNC_IMPL(__imp__sub_83194850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,68
	r11.s64 = ctx.r4.s64 * 68;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r3,5948(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 5948);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194860"))) PPC_WEAK_FUNC(sub_83194860);
PPC_FUNC_IMPL(__imp__sub_83194860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,68
	r11.s64 = ctx.r4.s64 * 68;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r11,5956(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 5956);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194880"))) PPC_WEAK_FUNC(sub_83194880);
PPC_FUNC_IMPL(__imp__sub_83194880) {
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
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83194690
	sub_83194690(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831948C0"))) PPC_WEAK_FUNC(sub_831948C0);
PPC_FUNC_IMPL(__imp__sub_831948C0) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x83194690
	sub_83194690(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831948C8"))) PPC_WEAK_FUNC(sub_831948C8);
PPC_FUNC_IMPL(__imp__sub_831948C8) {
	PPC_FUNC_PROLOGUE();
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x83194750
	sub_83194750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831948D8"))) PPC_WEAK_FUNC(sub_831948D8);
PPC_FUNC_IMPL(__imp__sub_831948D8) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x83194728
	sub_83194728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831948E8"))) PPC_WEAK_FUNC(sub_831948E8);
PPC_FUNC_IMPL(__imp__sub_831948E8) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x83194728
	sub_83194728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831948F8"))) PPC_WEAK_FUNC(sub_831948F8);
PPC_FUNC_IMPL(__imp__sub_831948F8) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x83194728
	sub_83194728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83194908"))) PPC_WEAK_FUNC(sub_83194908);
PPC_FUNC_IMPL(__imp__sub_83194908) {
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
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83194750
	sub_83194750(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x831948d8
	sub_831948D8(ctx, base);
	// lwz r11,16(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// li r4,3
	ctx.r4.s64 = 3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83194958
	if (cr6.eq) goto loc_83194958;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x83194750
	sub_83194750(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x831948d8
	sub_831948D8(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
loc_83194958:
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x83194750
	sub_83194750(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194970"))) PPC_WEAK_FUNC(sub_83194970);
PPC_FUNC_IMPL(__imp__sub_83194970) {
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
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83194750
	sub_83194750(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x831948d8
	sub_831948D8(ctx, base);
	// lwz r11,20(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// li r4,4
	ctx.r4.s64 = 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831949c0
	if (cr6.eq) goto loc_831949C0;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x83194750
	sub_83194750(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x831948d8
	sub_831948D8(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
loc_831949C0:
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x83194750
	sub_83194750(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831949D8"))) PPC_WEAK_FUNC(sub_831949D8);
PPC_FUNC_IMPL(__imp__sub_831949D8) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83194750
	sub_83194750(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83194a1c
	if (cr6.eq) goto loc_83194A1C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831948d8
	sub_831948D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83194908
	sub_83194908(ctx, base);
	// b 0x83194a2c
	goto loc_83194A2C;
loc_83194A1C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83181e10
	sub_83181E10(ctx, base);
	// stw r29,2992(r31)
	PPC_STORE_U32(r31.u32 + 2992, r29.u32);
loc_83194A2C:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83194a54
	if (cr6.eq) goto loc_83194A54;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831948e8
	sub_831948E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83194970
	sub_83194970(ctx, base);
	// b 0x83194a64
	goto loc_83194A64;
loc_83194A54:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x83181e10
	sub_83181E10(ctx, base);
	// stw r29,2996(r31)
	PPC_STORE_U32(r31.u32 + 2996, r29.u32);
loc_83194A64:
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83194a88
	if (cr6.eq) goto loc_83194A88;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831948f8
	sub_831948F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831948c8
	sub_831948C8(ctx, base);
loc_83194A88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83194A90"))) PPC_WEAK_FUNC(sub_83194A90);
PPC_FUNC_IMPL(__imp__sub_83194A90) {
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
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83194ae0
	if (cr6.eq) goto loc_83194AE0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831948d8
	sub_831948D8(ctx, base);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// bl 0x831949d8
	sub_831949D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83194AE0:
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83194b30
	if (cr6.eq) goto loc_83194B30;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831948d8
	sub_831948D8(ctx, base);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// bl 0x83194908
	sub_83194908(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x83181e10
	sub_83181E10(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,2996(r31)
	PPC_STORE_U32(r31.u32 + 2996, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83194B30:
	// lwz r11,12(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83194b80
	if (cr6.eq) goto loc_83194B80;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831948d8
	sub_831948D8(ctx, base);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// bl 0x83194970
	sub_83194970(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83181e10
	sub_83181E10(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,2992(r31)
	PPC_STORE_U32(r31.u32 + 2992, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83194B80:
	// lwz r11,32(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83194be4
	if (cr6.eq) goto loc_83194BE4;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831948d8
	sub_831948D8(ctx, base);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// bl 0x831948c8
	sub_831948C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x83181e10
	sub_83181E10(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181e10
	sub_83181E10(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,2992(r31)
	PPC_STORE_U32(r31.u32 + 2992, r11.u32);
	// stw r11,2996(r31)
	PPC_STORE_U32(r31.u32 + 2996, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83194BE4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194C00"))) PPC_WEAK_FUNC(sub_83194C00);
PPC_FUNC_IMPL(__imp__sub_83194C00) {
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
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
loc_83194C28:
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x831946f8
	sub_831946F8(ctx, base);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83194c28
	if (!cr6.eq) goto loc_83194C28;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83194a90
	sub_83194A90(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83194c80
	if (cr6.eq) goto loc_83194C80;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,770
	ctx.r4.u64 = ctx.r4.u64 | 770;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83194C80:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194C98"))) PPC_WEAK_FUNC(sub_83194C98);
PPC_FUNC_IMPL(__imp__sub_83194C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194CB0"))) PPC_WEAK_FUNC(sub_83194CB0);
PPC_FUNC_IMPL(__imp__sub_83194CB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83194cc0
	if (!cr6.eq) goto loc_83194CC0;
loc_83194CB8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83194CC0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x83194cb8
	if (cr6.eq) goto loc_83194CB8;
	// lis r11,-31935
	r11.s64 = -2092892160;
	// stw r3,-7944(r11)
	PPC_STORE_U32(r11.u32 + -7944, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194CE0"))) PPC_WEAK_FUNC(sub_83194CE0);
PPC_FUNC_IMPL(__imp__sub_83194CE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31930
	r11.s64 = -2092564480;
	// lwz r11,-23956(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -23956);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83194d18
	if (!cr6.gt) goto loc_83194D18;
loc_83194CFC:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r3,r3,256
	ctx.r3.s64 = ctx.r3.s64 + 256;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x83194cfc
	if (cr6.lt) goto loc_83194CFC;
loc_83194D18:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194D20"))) PPC_WEAK_FUNC(sub_83194D20);
PPC_FUNC_IMPL(__imp__sub_83194D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,-1
	r11.s64 = -1;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194D38"))) PPC_WEAK_FUNC(sub_83194D38);
PPC_FUNC_IMPL(__imp__sub_83194D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,-1
	r11.s64 = -1;
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
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194D60"))) PPC_WEAK_FUNC(sub_83194D60);
PPC_FUNC_IMPL(__imp__sub_83194D60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,-1
	r11.s64 = -1;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, r11.u64);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
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

__attribute__((alias("__imp__sub_83194D88"))) PPC_WEAK_FUNC(sub_83194D88);
PPC_FUNC_IMPL(__imp__sub_83194D88) {
	PPC_FUNC_PROLOGUE();
	// b 0x83194c98
	sub_83194C98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83194D90"))) PPC_WEAK_FUNC(sub_83194D90);
PPC_FUNC_IMPL(__imp__sub_83194D90) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83194db8
	if (!cr6.eq) goto loc_83194DB8;
	// lis r11,-31930
	r11.s64 = -2092564480;
	// lwz r3,-23956(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -23956);
	// b 0x83194dbc
	goto loc_83194DBC;
loc_83194DB8:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
loc_83194DBC:
	// bl 0x8319bd10
	sub_8319BD10(ctx, base);
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

__attribute__((alias("__imp__sub_83194DD8"))) PPC_WEAK_FUNC(sub_83194DD8);
PPC_FUNC_IMPL(__imp__sub_83194DD8) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83194dfc
	if (!cr6.eq) goto loc_83194DFC;
	// lis r11,-31930
	r11.s64 = -2092564480;
	// lwz r3,-23956(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -23956);
	// b 0x83194e30
	goto loc_83194E30;
loc_83194DFC:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83194cb0
	sub_83194CB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83194e2c
	if (cr6.eq) goto loc_83194E2C;
	// lis r4,-254
	ctx.r4.s64 = -16646144;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,257
	ctx.r4.u64 = ctx.r4.u64 | 257;
	// bl 0x83194d90
	sub_83194D90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83194E2C:
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
loc_83194E30:
	// bl 0x8318fcb8
	sub_8318FCB8(ctx, base);
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

__attribute__((alias("__imp__sub_83194E48"))) PPC_WEAK_FUNC(sub_83194E48);
PPC_FUNC_IMPL(__imp__sub_83194E48) {
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
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8319ba18
	sub_8319BA18(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x83194c98
	sub_83194C98(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// bl 0x83194d20
	sub_83194D20(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x83194d38
	sub_83194D38(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// bl 0x83194d38
	sub_83194D38(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x83194d38
	sub_83194D38(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x83194d38
	sub_83194D38(ctx, base);
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// bl 0x83194d60
	sub_83194D60(ctx, base);
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,25232
	ctx.r10.s64 = ctx.r10.s64 + 25232;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,208(r31)
	PPC_STORE_U32(r31.u32 + 208, r11.u32);
	// stw r10,212(r31)
	PPC_STORE_U32(r31.u32 + 212, ctx.r10.u32);
	// stw r11,216(r31)
	PPC_STORE_U32(r31.u32 + 216, r11.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r11.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(r31.u32 + 224, r11.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// stw r11,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194EF0"))) PPC_WEAK_FUNC(sub_83194EF0);
PPC_FUNC_IMPL(__imp__sub_83194EF0) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// bl 0x83194cb0
	sub_83194CB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x83194f2c
	if (cr6.eq) goto loc_83194F2C;
	// lis r4,-254
	ctx.r4.s64 = -16646144;
	// ori r4,r4,259
	ctx.r4.u64 = ctx.r4.u64 | 259;
	// bl 0x83194d90
	sub_83194D90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83194F2C:
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194F48"))) PPC_WEAK_FUNC(sub_83194F48);
PPC_FUNC_IMPL(__imp__sub_83194F48) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r30,-1
	r11.s64 = r30.s64 + -1;
	// lis r31,-31930
	r31.s64 = -2092564480;
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,272
	r11.s64 = r11.s64 + 272;
	// rlwinm r5,r11,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r3,-23956(r31)
	PPC_STORE_U32(r31.u32 + -23956, ctx.r3.u32);
	// bl 0x8319ba18
	sub_8319BA18(ctx, base);
	// lwz r3,-23956(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -23956);
	// bl 0x83194d88
	sub_83194D88(ctx, base);
	// lwz r11,-23956(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -23956);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r30.u32);
	// lwz r11,-23956(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -23956);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// ble cr6,0x83194fbc
	if (!cr6.gt) goto loc_83194FBC;
	// li r10,1
	ctx.r10.s64 = 1;
loc_83194FA8:
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,256
	r11.s64 = r11.s64 + 256;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83194fa8
	if (!cr6.eq) goto loc_83194FA8;
loc_83194FBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194FD8"))) PPC_WEAK_FUNC(sub_83194FD8);
PPC_FUNC_IMPL(__imp__sub_83194FD8) {
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
	// lis r11,-31930
	r11.s64 = -2092564480;
	// lwz r11,-23956(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -23956);
	// addi r31,r11,16
	r31.s64 = r11.s64 + 16;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x83195028
	if (!cr6.gt) goto loc_83195028;
loc_83195004:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x83195018
	if (cr6.eq) goto loc_83195018;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83194ef0
	sub_83194EF0(ctx, base);
loc_83195018:
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r31,r31,256
	r31.s64 = r31.s64 + 256;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83195004
	if (!cr6.eq) goto loc_83195004;
loc_83195028:
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
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

__attribute__((alias("__imp__sub_83195048"))) PPC_WEAK_FUNC(sub_83195048);
PPC_FUNC_IMPL(__imp__sub_83195048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// bl 0x83194ce0
	sub_83194CE0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83195070
	if (!cr6.eq) goto loc_83195070;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83195070:
	// bl 0x83194e48
	sub_83194E48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195088"))) PPC_WEAK_FUNC(sub_83195088);
PPC_FUNC_IMPL(__imp__sub_83195088) {
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
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// addi r11,r11,-12496
	r11.s64 = r11.s64 + -12496;
	// stw r11,-7948(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7948, r11.u32);
	// bl 0x83194f48
	sub_83194F48(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831950bc
	if (!cr6.eq) goto loc_831950BC;
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_831950BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831950D0"))) PPC_WEAK_FUNC(sub_831950D0);
PPC_FUNC_IMPL(__imp__sub_831950D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x83194cb0
	sub_83194CB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831950fc
	if (!cr6.eq) goto loc_831950FC;
	// stw r30,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r30.u32);
	// stw r29,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r29.u32);
loc_831950FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83195108"))) PPC_WEAK_FUNC(sub_83195108);
PPC_FUNC_IMPL(__imp__sub_83195108) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x83194cb0
	sub_83194CB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83195134
	if (!cr6.eq) goto loc_83195134;
	// stw r30,236(r31)
	PPC_STORE_U32(r31.u32 + 236, r30.u32);
	// stw r29,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r29.u32);
loc_83195134:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83195140"))) PPC_WEAK_FUNC(sub_83195140);
PPC_FUNC_IMPL(__imp__sub_83195140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x83194cb0
	sub_83194CB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8319516c
	if (!cr6.eq) goto loc_8319516C;
	// stw r30,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r30.u32);
	// stw r29,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r29.u32);
loc_8319516C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83195178"))) PPC_WEAK_FUNC(sub_83195178);
PPC_FUNC_IMPL(__imp__sub_83195178) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// bl 0x83194cb0
	sub_83194CB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831951c8
	if (cr6.eq) goto loc_831951C8;
	// lis r4,-254
	ctx.r4.s64 = -16646144;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,769
	ctx.r4.u64 = ctx.r4.u64 | 769;
	// bl 0x83194d90
	sub_83194D90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_831951C8:
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_831951F0"))) PPC_WEAK_FUNC(sub_831951F0);
PPC_FUNC_IMPL(__imp__sub_831951F0) {
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
	// addi r11,r4,4
	r11.s64 = ctx.r4.s64 + 4;
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - r11.s64;
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r10,4
	r11.s64 = ctx.r10.s64 + 4;
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r10,30
	cr6.compare<int32_t>(ctx.r10.s32, 30, xer);
	// slw r9,r8,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// blt cr6,0x8319525c
	if (cr6.lt) goto loc_8319525C;
	// addi r8,r10,-30
	ctx.r8.s64 = ctx.r10.s64 + -30;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x8319524c
	if (cr6.eq) goto loc_8319524C;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x83195264
	goto loc_83195264;
loc_8319524C:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x83195264
	goto loc_83195264;
loc_8319525C:
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_83195264:
	// rlwinm r30,r9,2,30,31
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3;
	// addi r9,r8,2
	ctx.r9.s64 = ctx.r8.s64 + 2;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// blt cr6,0x83195288
	if (cr6.lt) goto loc_83195288;
	// addi r9,r9,-32
	ctx.r9.s64 = ctx.r9.s64 + -32;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x8319528c
	goto loc_8319528C;
loc_83195288:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_8319528C:
	// cmpwi cr6,r9,29
	cr6.compare<int32_t>(ctx.r9.s32, 29, xer);
	// blt cr6,0x831952d4
	if (cr6.lt) goto loc_831952D4;
	// addi r9,r9,-29
	ctx.r9.s64 = ctx.r9.s64 + -29;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x831952c0
	if (cr6.eq) goto loc_831952C0;
	// subfic r8,r9,3
	xer.ca = ctx.r9.u32 <= 3;
	ctx.r8.s64 = 3 - ctx.r9.s64;
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r8.u8 & 0x3F));
	// or r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 | ctx.r10.u64;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r31,r8,3,29,31
	r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x7;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x831952e0
	goto loc_831952E0;
loc_831952C0:
	// rlwinm r31,r10,3,29,31
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x831952e0
	goto loc_831952E0;
loc_831952D4:
	// rlwinm r31,r10,3,29,31
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
loc_831952E0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// blt cr6,0x83195300
	if (cr6.lt) goto loc_83195300;
	// addi r9,r9,-32
	ctx.r9.s64 = ctx.r9.s64 + -32;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x83195304
	goto loc_83195304;
loc_83195300:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_83195304:
	// cmpwi cr6,r9,17
	cr6.compare<int32_t>(ctx.r9.s32, 17, xer);
	// blt cr6,0x8319534c
	if (cr6.lt) goto loc_8319534C;
	// addi r9,r9,-17
	ctx.r9.s64 = ctx.r9.s64 + -17;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83195338
	if (cr6.eq) goto loc_83195338;
	// subfic r8,r9,15
	xer.ca = ctx.r9.u32 <= 15;
	ctx.r8.s64 = 15 - ctx.r9.s64;
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r8.u8 & 0x3F));
	// or r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 | ctx.r10.u64;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r4,r8,15,17,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 15) & 0x7FFF;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x83195358
	goto loc_83195358;
loc_83195338:
	// rlwinm r4,r10,15,17,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7FFF;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x83195358
	goto loc_83195358;
loc_8319534C:
	// rlwinm r4,r10,15,17,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7FFF;
	// addi r9,r9,15
	ctx.r9.s64 = ctx.r9.s64 + 15;
	// rlwinm r10,r10,15,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFFFF8000;
loc_83195358:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// blt cr6,0x83195378
	if (cr6.lt) goto loc_83195378;
	// addi r9,r9,-32
	ctx.r9.s64 = ctx.r9.s64 + -32;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x8319537c
	goto loc_8319537C;
loc_83195378:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_8319537C:
	// cmpwi cr6,r9,17
	cr6.compare<int32_t>(ctx.r9.s32, 17, xer);
	// blt cr6,0x831953bc
	if (cr6.lt) goto loc_831953BC;
	// addi r9,r9,-17
	ctx.r9.s64 = ctx.r9.s64 + -17;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x831953ac
	if (cr6.eq) goto loc_831953AC;
	// subfic r8,r9,15
	xer.ca = ctx.r9.u32 <= 15;
	ctx.r8.s64 = 15 - ctx.r9.s64;
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r8.u8 & 0x3F));
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// slw r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x831953c4
	goto loc_831953C4;
loc_831953AC:
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x831953c4
	goto loc_831953C4;
loc_831953BC:
	// addi r9,r9,15
	ctx.r9.s64 = ctx.r9.s64 + 15;
	// rlwinm r8,r10,15,0,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFFFF8000;
loc_831953C4:
	// rlwinm r6,r10,15,17,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7FFF;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// blt cr6,0x831953e8
	if (cr6.lt) goto loc_831953E8;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// slw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x831953ec
	goto loc_831953EC;
loc_831953E8:
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
loc_831953EC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// blt cr6,0x83195408
	if (cr6.lt) goto loc_83195408;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// slw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// b 0x8319540c
	goto loc_8319540C;
loc_83195408:
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
loc_8319540C:
	// cmpwi cr6,r10,10
	cr6.compare<int32_t>(ctx.r10.s32, 10, xer);
	// blt cr6,0x83195434
	if (cr6.lt) goto loc_83195434;
	// addi r10,r10,-10
	ctx.r10.s64 = ctx.r10.s64 + -10;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83195434
	if (cr6.eq) goto loc_83195434;
	// subfic r10,r10,22
	xer.ca = ctx.r10.u32 <= 22;
	ctx.r10.s64 = 22 - ctx.r10.s64;
	// srw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r10.u8 & 0x3F));
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,22,10,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 22) & 0x3FFFFF;
	// b 0x83195438
	goto loc_83195438;
loc_83195434:
	// rlwinm r11,r9,22,10,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 22) & 0x3FFFFF;
loc_83195438:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// clrldi r9,r4,32
	ctx.r9.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// rldimi r10,r31,15,17
	ctx.r10.u64 = (__builtin_rotateleft64(r31.u64, 15) & 0x7FFFFFFF8000) | (ctx.r10.u64 & 0xFFFF800000007FFF);
	// clrldi r8,r6,32
	ctx.r8.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// cntlzw r9,r30
	ctx.r9.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rldicr r10,r10,15,48
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 15) & 0xFFFFFFFFFFFF8000;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// li r8,12
	ctx.r8.s64 = 12;
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// std r10,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r10.u64);
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195480"))) PPC_WEAK_FUNC(sub_83195480);
PPC_FUNC_IMPL(__imp__sub_83195480) {
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,4
	r11.s64 = ctx.r4.s64 + 4;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - r11.s64;
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// addi r29,r27,40
	r29.s64 = r27.s64 + 40;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r10,4
	r11.s64 = ctx.r10.s64 + 4;
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r10,16
	cr6.compare<int32_t>(ctx.r10.s32, 16, xer);
	// slw r9,r8,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// blt cr6,0x83195510
	if (cr6.lt) goto loc_83195510;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x831954f8
	if (cr6.eq) goto loc_831954F8;
	// subfic r8,r10,16
	xer.ca = ctx.r10.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r10.s64;
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r8.u8 & 0x3F));
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// slw r8,r11,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r9,16,16,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x83195520
	goto loc_83195520;
loc_831954F8:
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// stw r9,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x83195520
	goto loc_83195520;
loc_83195510:
	// rlwinm r6,r9,16,16,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// rlwinm r8,r9,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// stw r6,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r6.u32);
loc_83195520:
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// blt cr6,0x83195540
	if (cr6.lt) goto loc_83195540;
	// addi r9,r9,-32
	ctx.r9.s64 = ctx.r9.s64 + -32;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x83195544
	goto loc_83195544;
loc_83195540:
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
loc_83195544:
	// cmpwi cr6,r9,10
	cr6.compare<int32_t>(ctx.r9.s32, 10, xer);
	// blt cr6,0x83195594
	if (cr6.lt) goto loc_83195594;
	// addi r9,r9,-10
	ctx.r9.s64 = ctx.r9.s64 + -10;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8319557c
	if (cr6.eq) goto loc_8319557C;
	// subfic r8,r9,22
	xer.ca = ctx.r9.u32 <= 22;
	ctx.r8.s64 = 22 - ctx.r9.s64;
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r8.u8 & 0x3F));
	// or r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 | ctx.r10.u64;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r8,22,10,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 22) & 0x3FFFFF;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x831955a4
	goto loc_831955A4;
loc_8319557C:
	// rlwinm r8,r10,22,10,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x3FFFFF;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stw r8,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r8.u32);
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x831955a4
	goto loc_831955A4;
loc_83195594:
	// rlwinm r8,r10,22,10,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x3FFFFF;
	// addi r9,r9,22
	ctx.r9.s64 = ctx.r9.s64 + 22;
	// rlwinm r10,r10,22,0,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0xFFC00000;
	// stw r8,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r8.u32);
loc_831955A4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// blt cr6,0x831955c4
	if (cr6.lt) goto loc_831955C4;
	// addi r9,r9,-32
	ctx.r9.s64 = ctx.r9.s64 + -32;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x831955c8
	goto loc_831955C8;
loc_831955C4:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_831955C8:
	// cmpwi cr6,r9,26
	cr6.compare<int32_t>(ctx.r9.s32, 26, xer);
	// blt cr6,0x83195618
	if (cr6.lt) goto loc_83195618;
	// addi r9,r9,-26
	ctx.r9.s64 = ctx.r9.s64 + -26;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83195600
	if (cr6.eq) goto loc_83195600;
	// subfic r8,r9,6
	xer.ca = ctx.r9.u32 <= 6;
	ctx.r8.s64 = 6 - ctx.r9.s64;
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r8.u8 & 0x3F));
	// or r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 | ctx.r10.u64;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r8,6,26,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0x3F;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x83195628
	goto loc_83195628;
loc_83195600:
	// rlwinm r8,r10,6,26,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x3F;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stw r8,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r8.u32);
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x83195628
	goto loc_83195628;
loc_83195618:
	// rlwinm r8,r10,6,26,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x3F;
	// addi r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 + 6;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r8,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r8.u32);
loc_83195628:
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r9,31
	cr6.compare<int32_t>(ctx.r9.s32, 31, xer);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stw r8,16(r29)
	PPC_STORE_U32(r29.u32 + 16, ctx.r8.u32);
	// bne cr6,0x83195654
	if (!cr6.eq) goto loc_83195654;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x8319565c
	goto loc_8319565C;
loc_83195654:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_8319565C:
	// cntlzw r10,r8
	ctx.r10.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cmpwi cr6,r9,31
	cr6.compare<int32_t>(ctx.r9.s32, 31, xer);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r10,20(r29)
	PPC_STORE_U32(r29.u32 + 20, ctx.r10.u32);
	// bne cr6,0x83195688
	if (!cr6.eq) goto loc_83195688;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x83195690
	goto loc_83195690;
loc_83195688:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
loc_83195690:
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cmpwi cr6,r10,31
	cr6.compare<int32_t>(ctx.r10.s32, 31, xer);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stw r8,24(r29)
	PPC_STORE_U32(r29.u32 + 24, ctx.r8.u32);
	// bne cr6,0x831956bc
	if (!cr6.eq) goto loc_831956BC;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x831956c4
	goto loc_831956C4;
loc_831956BC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
loc_831956C4:
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cmpwi cr6,r10,31
	cr6.compare<int32_t>(ctx.r10.s32, 31, xer);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stw r8,28(r29)
	PPC_STORE_U32(r29.u32 + 28, ctx.r8.u32);
	// bne cr6,0x831956f0
	if (!cr6.eq) goto loc_831956F0;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x831956f8
	goto loc_831956F8;
loc_831956F0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
loc_831956F8:
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// blt cr6,0x83195718
	if (cr6.lt) goto loc_83195718;
	// addi r9,r9,-32
	ctx.r9.s64 = ctx.r9.s64 + -32;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x8319571c
	goto loc_8319571C;
loc_83195718:
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
loc_8319571C:
	// cmpwi cr6,r9,27
	cr6.compare<int32_t>(ctx.r9.s32, 27, xer);
	// blt cr6,0x8319576c
	if (cr6.lt) goto loc_8319576C;
	// addi r9,r9,-27
	ctx.r9.s64 = ctx.r9.s64 + -27;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83195754
	if (cr6.eq) goto loc_83195754;
	// subfic r8,r9,5
	xer.ca = ctx.r9.u32 <= 5;
	ctx.r8.s64 = 5 - ctx.r9.s64;
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r8.u8 & 0x3F));
	// or r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 | ctx.r10.u64;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r8,5,27,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0x1F;
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x8319577c
	goto loc_8319577C;
loc_83195754:
	// rlwinm r8,r10,5,27,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1F;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stw r8,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r8.u32);
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x8319577c
	goto loc_8319577C;
loc_8319576C:
	// rlwinm r8,r10,5,27,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1F;
	// addi r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 + 5;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r8,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r8.u32);
loc_8319577C:
	// cmpwi cr6,r9,24
	cr6.compare<int32_t>(ctx.r9.s32, 24, xer);
	// blt cr6,0x831957c4
	if (cr6.lt) goto loc_831957C4;
	// addi r9,r9,-24
	ctx.r9.s64 = ctx.r9.s64 + -24;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x831957b0
	if (cr6.eq) goto loc_831957B0;
	// subfic r8,r9,8
	xer.ca = ctx.r9.u32 <= 8;
	ctx.r8.s64 = 8 - ctx.r9.s64;
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r8.u8 & 0x3F));
	// or r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 | ctx.r10.u64;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r30,r8,8,24,31
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x831957d0
	goto loc_831957D0;
loc_831957B0:
	// rlwinm r30,r10,8,24,31
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x831957d0
	goto loc_831957D0;
loc_831957C4:
	// rlwinm r30,r10,8,24,31
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
loc_831957D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// bge cr6,0x831958c0
	if (!cr6.lt) goto loc_831958C0;
loc_831957E0:
	// cmpwi cr6,r9,24
	cr6.compare<int32_t>(ctx.r9.s32, 24, xer);
	// blt cr6,0x83195820
	if (cr6.lt) goto loc_83195820;
	// addi r9,r9,-24
	ctx.r9.s64 = ctx.r9.s64 + -24;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83195810
	if (cr6.eq) goto loc_83195810;
	// subfic r8,r9,8
	xer.ca = ctx.r9.u32 <= 8;
	ctx.r8.s64 = 8 - ctx.r9.s64;
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r8.u8 & 0x3F));
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// slw r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x83195828
	goto loc_83195828;
loc_83195810:
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x83195828
	goto loc_83195828;
loc_83195820:
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
loc_83195828:
	// rlwinm r5,r10,8,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// addi r10,r9,2
	ctx.r10.s64 = ctx.r9.s64 + 2;
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// blt cr6,0x8319584c
	if (cr6.lt) goto loc_8319584C;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// slw r8,r11,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x83195850
	goto loc_83195850;
loc_8319584C:
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_83195850:
	// cntlzw r9,r8
	ctx.r9.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cmpwi cr6,r10,31
	cr6.compare<int32_t>(ctx.r10.s32, 31, xer);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r6,r9,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bne cr6,0x83195974
	if (!cr6.eq) goto loc_83195974;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
loc_83195874:
	// rlwinm r8,r10,13,19,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1FFF;
	// addi r9,r9,13
	ctx.r9.s64 = ctx.r9.s64 + 13;
	// rlwinm r10,r10,13,0,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFFFE000;
loc_83195880:
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// addi r26,r1,97
	r26.s64 = ctx.r1.s64 + 97;
	// addi r25,r1,98
	r25.s64 = ctx.r1.s64 + 98;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stbx r5,r3,r31
	PPC_STORE_U8(ctx.r3.u32 + r31.u32, ctx.r5.u8);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stbx r6,r5,r26
	PPC_STORE_U8(ctx.r5.u32 + r26.u32, ctx.r6.u8);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// sthx r8,r6,r25
	PPC_STORE_U16(ctx.r6.u32 + r25.u32, ctx.r8.u16);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 1;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// blt cr6,0x831957e0
	if (cr6.lt) goto loc_831957E0;
loc_831958C0:
	// addi r11,r9,7
	r11.s64 = ctx.r9.s64 + 7;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// addi r31,r11,-8
	r31.s64 = r11.s64 + -8;
	// subf r11,r4,r31
	r11.s64 = r31.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// bl 0x83197908
	sub_83197908(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83195908
	if (!cr6.eq) goto loc_83195908;
	// addi r3,r31,1
	ctx.r3.s64 = r31.s64 + 1;
	// bl 0x83197908
	sub_83197908(ctx, base);
	// lis r11,4
	r11.s64 = 262144;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bne cr6,0x83195908
	if (!cr6.eq) goto loc_83195908;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_83195908:
	// lwz r11,228(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 228);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8319596c
	if (cr6.eq) goto loc_8319596C;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r8,r30,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 25) & 0x1;
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,232(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 232);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// stb r8,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r8.u8);
	// lwz r8,20(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// stb r9,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r9.u8);
	// lwz r9,28(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// stb r10,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r10.u8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stb r8,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r8.u8);
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// clrlwi r10,r30,25
	ctx.r10.u64 = r30.u32 & 0x7F;
	// stb r8,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r8.u8);
	// stb r10,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r10.u8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8319596C:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831b0b6c
	return;
loc_83195974:
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r9,19
	cr6.compare<int32_t>(ctx.r9.s32, 19, xer);
	// blt cr6,0x83195874
	if (cr6.lt) goto loc_83195874;
	// addi r9,r9,-19
	ctx.r9.s64 = ctx.r9.s64 + -19;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x831959b0
	if (cr6.eq) goto loc_831959B0;
	// subfic r8,r9,13
	xer.ca = ctx.r9.u32 <= 13;
	ctx.r8.s64 = 13 - ctx.r9.s64;
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r8.u8 & 0x3F));
	// or r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 | ctx.r10.u64;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r8,r8,13,19,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x1FFF;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x83195880
	goto loc_83195880;
loc_831959B0:
	// rlwinm r8,r10,13,19,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1FFF;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x83195880
	goto loc_83195880;
}

__attribute__((alias("__imp__sub_831959C8"))) PPC_WEAK_FUNC(sub_831959C8);
PPC_FUNC_IMPL(__imp__sub_831959C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x831b0b2c
	// addi r11,r4,3
	r11.s64 = ctx.r4.s64 + 3;
	// addi r30,r3,168
	r30.s64 = ctx.r3.s64 + 168;
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - r11.s64;
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r10,3
	r11.s64 = ctx.r10.s64 + 3;
	// addi r31,r9,4
	r31.s64 = ctx.r9.s64 + 4;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r10,24
	cr6.compare<int32_t>(ctx.r10.s32, 24, xer);
	// slw r9,r8,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// blt cr6,0x83195a3c
	if (cr6.lt) goto loc_83195A3C;
	// addi r10,r10,-24
	ctx.r10.s64 = ctx.r10.s64 + -24;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83195a2c
	if (cr6.eq) goto loc_83195A2C;
	// subfic r8,r10,8
	xer.ca = ctx.r10.u32 <= 8;
	ctx.r8.s64 = 8 - ctx.r10.s64;
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r8.u8 & 0x3F));
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// b 0x83195a44
	goto loc_83195A44;
loc_83195A2C:
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x83195a44
	goto loc_83195A44;
loc_83195A3C:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// rlwinm r7,r9,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
loc_83195A44:
	// rlwinm r3,r9,8,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// addi r8,r3,-224
	ctx.r8.s64 = ctx.r3.s64 + -224;
	// cmplwi cr6,r8,15
	cr6.compare<uint32_t>(ctx.r8.u32, 15, xer);
	// stw r3,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// bgt cr6,0x83195a60
	if (cr6.gt) goto loc_83195A60;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x83195ab0
	goto loc_83195AB0;
loc_83195A60:
	// addi r8,r3,-192
	ctx.r8.s64 = ctx.r3.s64 + -192;
	// cmplwi cr6,r8,31
	cr6.compare<uint32_t>(ctx.r8.u32, 31, xer);
	// bgt cr6,0x83195a74
	if (cr6.gt) goto loc_83195A74;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83195ab0
	goto loc_83195AB0;
loc_83195A74:
	// cmpwi cr6,r3,189
	cr6.compare<int32_t>(ctx.r3.s32, 189, xer);
	// bne cr6,0x83195a88
	if (!cr6.eq) goto loc_83195A88;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x83195ab0
	goto loc_83195AB0;
loc_83195A88:
	// cmpwi cr6,r3,191
	cr6.compare<int32_t>(ctx.r3.s32, 191, xer);
	// bne cr6,0x83195a9c
	if (!cr6.eq) goto loc_83195A9C;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,2
	ctx.r8.s64 = 2;
	// b 0x83195ab0
	goto loc_83195AB0;
loc_83195A9C:
	// cmpwi cr6,r3,190
	cr6.compare<int32_t>(ctx.r3.s32, 190, xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,3
	ctx.r9.s64 = 3;
	// beq cr6,0x83195ab0
	if (cr6.eq) goto loc_83195AB0;
	// li r9,4
	ctx.r9.s64 = 4;
loc_83195AB0:
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// stw r9,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r9.u32);
	// stw r8,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r8.u32);
	// bne cr6,0x83195b30
	if (!cr6.eq) goto loc_83195B30;
	// cmpwi cr6,r10,16
	cr6.compare<int32_t>(ctx.r10.s32, 16, xer);
	// blt cr6,0x83195b18
	if (cr6.lt) goto loc_83195B18;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83195afc
	if (cr6.eq) goto loc_83195AFC;
	// subfic r9,r10,16
	xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r10.s64;
	// li r29,6
	r29.s64 = 6;
	// srw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r9.u8 & 0x3F));
	// or r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 | ctx.r7.u64;
	// slw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r8,16,16,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x83195b64
	goto loc_83195B64;
loc_83195AFC:
	// rlwinm r8,r7,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// li r29,6
	r29.s64 = 6;
	// stw r8,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r8.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x83195b64
	goto loc_83195B64;
loc_83195B18:
	// rlwinm r8,r7,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// rlwinm r9,r7,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// li r29,6
	r29.s64 = 6;
	// stw r8,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r8.u32);
	// b 0x83195b64
	goto loc_83195B64;
loc_83195B30:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83195b50
	if (cr6.eq) goto loc_83195B50;
	// subfic r9,r10,32
	xer.ca = ctx.r10.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r10.s64;
	// srw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r9.u8 & 0x3F));
	// or r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stw r8,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r8.u32);
	// slw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// b 0x83195b58
	goto loc_83195B58;
loc_83195B50:
	// stw r7,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r7.u32);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
loc_83195B58:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r29,8
	r29.s64 = 8;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_83195B64:
	// cmpwi cr6,r3,191
	cr6.compare<int32_t>(ctx.r3.s32, 191, xer);
	// beq cr6,0x831961b0
	if (cr6.eq) goto loc_831961B0;
	// cmpwi cr6,r3,190
	cr6.compare<int32_t>(ctx.r3.s32, 190, xer);
	// beq cr6,0x831961b0
	if (cr6.eq) goto loc_831961B0;
loc_83195B74:
	// rlwinm r8,r9,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// cmpwi cr6,r10,24
	cr6.compare<int32_t>(ctx.r10.s32, 24, xer);
	// ble cr6,0x83195b8c
	if (!cr6.gt) goto loc_83195B8C;
	// subfic r7,r10,56
	xer.ca = ctx.r10.u32 <= 56;
	ctx.r7.s64 = 56 - ctx.r10.s64;
	// srw r7,r11,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r7.u8 & 0x3F));
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
loc_83195B8C:
	// cmplwi cr6,r8,255
	cr6.compare<uint32_t>(ctx.r8.u32, 255, xer);
	// bne cr6,0x83195bbc
	if (!cr6.eq) goto loc_83195BBC;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// blt cr6,0x83195bb4
	if (cr6.lt) goto loc_83195BB4;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// slw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x83195b74
	goto loc_83195B74;
loc_83195BB4:
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// b 0x83195b74
	goto loc_83195B74;
loc_83195BBC:
	// rlwinm r8,r9,2,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3;
	// cmpwi cr6,r10,30
	cr6.compare<int32_t>(ctx.r10.s32, 30, xer);
	// ble cr6,0x83195bd4
	if (!cr6.gt) goto loc_83195BD4;
	// subfic r7,r10,62
	xer.ca = ctx.r10.u32 <= 62;
	ctx.r7.s64 = 62 - ctx.r10.s64;
	// srw r7,r11,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r7.u8 & 0x3F));
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
loc_83195BD4:
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x83195c44
	if (!cr6.eq) goto loc_83195C44;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// blt cr6,0x83195bfc
	if (cr6.lt) goto loc_83195BFC;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// slw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x83195c00
	goto loc_83195C00;
loc_83195BFC:
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_83195C00:
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cmpwi cr6,r10,31
	cr6.compare<int32_t>(ctx.r10.s32, 31, xer);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bne cr6,0x83195c84
	if (!cr6.eq) goto loc_83195C84;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_83195C24:
	// rlwinm r8,r9,13,19,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x1FFF;
	// addi r10,r10,13
	ctx.r10.s64 = ctx.r10.s64 + 13;
	// rlwinm r9,r9,13,0,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0xFFFFE000;
loc_83195C30:
	// rlwinm r8,r8,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x83195c40
	if (cr6.eq) goto loc_83195C40;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
loc_83195C40:
	// stw r8,32(r30)
	PPC_STORE_U32(r30.u32 + 32, ctx.r8.u32);
loc_83195C44:
	// rlwinm r8,r9,4,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xF;
	// cmpwi cr6,r10,28
	cr6.compare<int32_t>(ctx.r10.s32, 28, xer);
	// ble cr6,0x83195c5c
	if (!cr6.gt) goto loc_83195C5C;
	// subfic r7,r10,60
	xer.ca = ctx.r10.u32 <= 60;
	ctx.r7.s64 = 60 - ctx.r10.s64;
	// srw r7,r11,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r7.u8 & 0x3F));
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
loc_83195C5C:
	// cmplwi cr6,r8,2
	cr6.compare<uint32_t>(ctx.r8.u32, 2, xer);
	// bne cr6,0x83195e3c
	if (!cr6.eq) goto loc_83195E3C;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r8,32
	cr6.compare<int32_t>(ctx.r8.s32, 32, xer);
	// blt cr6,0x83195cd4
	if (cr6.lt) goto loc_83195CD4;
	// addi r8,r8,-32
	ctx.r8.s64 = ctx.r8.s64 + -32;
	// slw r10,r11,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r8.u8 & 0x3F));
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x83195cd8
	goto loc_83195CD8;
loc_83195C84:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,19
	cr6.compare<int32_t>(ctx.r10.s32, 19, xer);
	// blt cr6,0x83195c24
	if (cr6.lt) goto loc_83195C24;
	// addi r10,r10,-19
	ctx.r10.s64 = ctx.r10.s64 + -19;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83195cc0
	if (cr6.eq) goto loc_83195CC0;
	// subfic r8,r10,13
	xer.ca = ctx.r10.u32 <= 13;
	ctx.r8.s64 = 13 - ctx.r10.s64;
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r8.u8 & 0x3F));
	// or r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 | ctx.r9.u64;
	// slw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r8,r8,13,19,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x1FFF;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x83195c30
	goto loc_83195C30;
loc_83195CC0:
	// rlwinm r8,r9,13,19,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x1FFF;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x83195c30
	goto loc_83195C30;
loc_83195CD4:
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
loc_83195CD8:
	// cmpwi cr6,r8,29
	cr6.compare<int32_t>(ctx.r8.s32, 29, xer);
	// blt cr6,0x83195d20
	if (cr6.lt) goto loc_83195D20;
	// addi r9,r8,-29
	ctx.r9.s64 = ctx.r8.s64 + -29;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83195d0c
	if (cr6.eq) goto loc_83195D0C;
	// subfic r8,r9,3
	xer.ca = ctx.r9.u32 <= 3;
	ctx.r8.s64 = 3 - ctx.r9.s64;
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r8.u8 & 0x3F));
	// or r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 | ctx.r10.u64;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r6,r8,3,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x7;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x83195d2c
	goto loc_83195D2C;
loc_83195D0C:
	// rlwinm r6,r10,3,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x83195d2c
	goto loc_83195D2C;
loc_83195D20:
	// rlwinm r6,r10,3,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7;
	// addi r9,r8,3
	ctx.r9.s64 = ctx.r8.s64 + 3;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
loc_83195D2C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// blt cr6,0x83195d4c
	if (cr6.lt) goto loc_83195D4C;
	// addi r9,r9,-32
	ctx.r9.s64 = ctx.r9.s64 + -32;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x83195d50
	goto loc_83195D50;
loc_83195D4C:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_83195D50:
	// cmpwi cr6,r9,17
	cr6.compare<int32_t>(ctx.r9.s32, 17, xer);
	// blt cr6,0x83195d90
	if (cr6.lt) goto loc_83195D90;
	// addi r9,r9,-17
	ctx.r9.s64 = ctx.r9.s64 + -17;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83195d80
	if (cr6.eq) goto loc_83195D80;
	// subfic r8,r9,15
	xer.ca = ctx.r9.u32 <= 15;
	ctx.r8.s64 = 15 - ctx.r9.s64;
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r8.u8 & 0x3F));
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// slw r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x83195d98
	goto loc_83195D98;
loc_83195D80:
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x83195d98
	goto loc_83195D98;
loc_83195D90:
	// addi r9,r9,15
	ctx.r9.s64 = ctx.r9.s64 + 15;
	// rlwinm r8,r10,15,0,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFFFF8000;
loc_83195D98:
	// rlwinm r7,r10,15,17,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7FFF;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// blt cr6,0x83195dbc
	if (cr6.lt) goto loc_83195DBC;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// slw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x83195dc0
	goto loc_83195DC0;
loc_83195DBC:
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
loc_83195DC0:
	// cmpwi cr6,r10,17
	cr6.compare<int32_t>(ctx.r10.s32, 17, xer);
	// blt cr6,0x83195df8
	if (cr6.lt) goto loc_83195DF8;
	// addi r10,r10,-17
	ctx.r10.s64 = ctx.r10.s64 + -17;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83195dec
	if (cr6.eq) goto loc_83195DEC;
	// subfic r8,r10,15
	xer.ca = ctx.r10.u32 <= 15;
	ctx.r8.s64 = 15 - ctx.r10.s64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// srw r11,r11,r8
	r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r8.u8 & 0x3F));
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// rlwinm r9,r11,15,17,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 15) & 0x7FFF;
	// b 0x83195e00
	goto loc_83195E00;
loc_83195DEC:
	// rlwinm r9,r9,15,17,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0x7FFF;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x83195e00
	goto loc_83195E00;
loc_83195DF8:
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// rlwinm r9,r9,15,17,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0x7FFF;
loc_83195E00:
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// blt cr6,0x83195e14
	if (cr6.lt) goto loc_83195E14;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_83195E14:
	// li r10,0
	ctx.r10.s64 = 0;
	// clrldi r8,r7,32
	ctx.r8.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rldimi r10,r6,15,17
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 15) & 0x7FFFFFFF8000) | (ctx.r10.u64 & 0xFFFF800000007FFF);
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// rldicr r10,r10,15,48
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 15) & 0xFFFFFFFFFFFF8000;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// std r8,8(r30)
	PPC_STORE_U64(r30.u32 + 8, ctx.r8.u64);
	// b 0x83196180
	goto loc_83196180;
loc_83195E3C:
	// cmplwi cr6,r8,3
	cr6.compare<uint32_t>(ctx.r8.u32, 3, xer);
	// bne cr6,0x83196164
	if (!cr6.eq) goto loc_83196164;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r8,32
	cr6.compare<int32_t>(ctx.r8.s32, 32, xer);
	// blt cr6,0x83195e64
	if (cr6.lt) goto loc_83195E64;
	// addi r8,r8,-32
	ctx.r8.s64 = ctx.r8.s64 + -32;
	// slw r10,r11,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r8.u8 & 0x3F));
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x83195e68
	goto loc_83195E68;
loc_83195E64:
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
loc_83195E68:
	// cmpwi cr6,r8,29
	cr6.compare<int32_t>(ctx.r8.s32, 29, xer);
	// blt cr6,0x83195eb0
	if (cr6.lt) goto loc_83195EB0;
	// addi r9,r8,-29
	ctx.r9.s64 = ctx.r8.s64 + -29;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83195e9c
	if (cr6.eq) goto loc_83195E9C;
	// subfic r8,r9,3
	xer.ca = ctx.r9.u32 <= 3;
	ctx.r8.s64 = 3 - ctx.r9.s64;
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r8.u8 & 0x3F));
	// or r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 | ctx.r10.u64;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r3,r8,3,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x7;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x83195ebc
	goto loc_83195EBC;
loc_83195E9C:
	// rlwinm r3,r10,3,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x83195ebc
	goto loc_83195EBC;
loc_83195EB0:
	// rlwinm r3,r10,3,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7;
	// addi r9,r8,3
	ctx.r9.s64 = ctx.r8.s64 + 3;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
loc_83195EBC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// blt cr6,0x83195edc
	if (cr6.lt) goto loc_83195EDC;
	// addi r9,r9,-32
	ctx.r9.s64 = ctx.r9.s64 + -32;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x83195ee0
	goto loc_83195EE0;
loc_83195EDC:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_83195EE0:
	// cmpwi cr6,r9,17
	cr6.compare<int32_t>(ctx.r9.s32, 17, xer);
	// blt cr6,0x83195f28
	if (cr6.lt) goto loc_83195F28;
	// addi r9,r9,-17
	ctx.r9.s64 = ctx.r9.s64 + -17;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83195f14
	if (cr6.eq) goto loc_83195F14;
	// subfic r8,r9,15
	xer.ca = ctx.r9.u32 <= 15;
	ctx.r8.s64 = 15 - ctx.r9.s64;
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r8.u8 & 0x3F));
	// or r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 | ctx.r10.u64;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r6,r8,15,17,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 15) & 0x7FFF;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x83195f34
	goto loc_83195F34;
loc_83195F14:
	// rlwinm r6,r10,15,17,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7FFF;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x83195f34
	goto loc_83195F34;
loc_83195F28:
	// rlwinm r6,r10,15,17,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7FFF;
	// addi r9,r9,15
	ctx.r9.s64 = ctx.r9.s64 + 15;
	// rlwinm r10,r10,15,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFFFF8000;
loc_83195F34:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// blt cr6,0x83195f54
	if (cr6.lt) goto loc_83195F54;
	// addi r9,r9,-32
	ctx.r9.s64 = ctx.r9.s64 + -32;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x83195f58
	goto loc_83195F58;
loc_83195F54:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_83195F58:
	// cmpwi cr6,r9,17
	cr6.compare<int32_t>(ctx.r9.s32, 17, xer);
	// blt cr6,0x83195f98
	if (cr6.lt) goto loc_83195F98;
	// addi r9,r9,-17
	ctx.r9.s64 = ctx.r9.s64 + -17;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83195f88
	if (cr6.eq) goto loc_83195F88;
	// subfic r8,r9,15
	xer.ca = ctx.r9.u32 <= 15;
	ctx.r8.s64 = 15 - ctx.r9.s64;
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r8.u8 & 0x3F));
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// slw r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x83195fa0
	goto loc_83195FA0;
loc_83195F88:
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x83195fa0
	goto loc_83195FA0;
loc_83195F98:
	// addi r9,r9,15
	ctx.r9.s64 = ctx.r9.s64 + 15;
	// rlwinm r8,r10,15,0,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFFFF8000;
loc_83195FA0:
	// rlwinm r7,r10,15,17,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7FFF;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// blt cr6,0x83195fc4
	if (cr6.lt) goto loc_83195FC4;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// slw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x83195fc8
	goto loc_83195FC8;
loc_83195FC4:
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
loc_83195FC8:
	// li r8,0
	ctx.r8.s64 = 0;
	// clrldi r6,r6,32
	ctx.r6.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// rldimi r8,r3,15,17
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r3.u64, 15) & 0x7FFFFFFF8000) | (ctx.r8.u64 & 0xFFFF800000007FFF);
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rldicr r8,r8,15,48
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 15) & 0xFFFFFFFFFFFF8000;
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// std r8,0(r30)
	PPC_STORE_U64(r30.u32 + 0, ctx.r8.u64);
	// blt cr6,0x83196008
	if (cr6.lt) goto loc_83196008;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// slw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x8319600c
	goto loc_8319600C;
loc_83196008:
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
loc_8319600C:
	// cmpwi cr6,r10,29
	cr6.compare<int32_t>(ctx.r10.s32, 29, xer);
	// blt cr6,0x8319604c
	if (cr6.lt) goto loc_8319604C;
	// addi r10,r10,-29
	ctx.r10.s64 = ctx.r10.s64 + -29;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8319603c
	if (cr6.eq) goto loc_8319603C;
	// subfic r8,r10,3
	xer.ca = ctx.r10.u32 <= 3;
	ctx.r8.s64 = 3 - ctx.r10.s64;
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r8.u8 & 0x3F));
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// slw r8,r11,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x83196054
	goto loc_83196054;
loc_8319603C:
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x83196054
	goto loc_83196054;
loc_8319604C:
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
loc_83196054:
	// rlwinm r6,r9,3,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x7;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// blt cr6,0x83196078
	if (cr6.lt) goto loc_83196078;
	// addi r9,r9,-32
	ctx.r9.s64 = ctx.r9.s64 + -32;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x8319607c
	goto loc_8319607C;
loc_83196078:
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
loc_8319607C:
	// cmpwi cr6,r9,17
	cr6.compare<int32_t>(ctx.r9.s32, 17, xer);
	// blt cr6,0x831960bc
	if (cr6.lt) goto loc_831960BC;
	// addi r9,r9,-17
	ctx.r9.s64 = ctx.r9.s64 + -17;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x831960ac
	if (cr6.eq) goto loc_831960AC;
	// subfic r8,r9,15
	xer.ca = ctx.r9.u32 <= 15;
	ctx.r8.s64 = 15 - ctx.r9.s64;
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r8.u8 & 0x3F));
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// slw r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x831960c4
	goto loc_831960C4;
loc_831960AC:
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x831960c4
	goto loc_831960C4;
loc_831960BC:
	// addi r9,r9,15
	ctx.r9.s64 = ctx.r9.s64 + 15;
	// rlwinm r8,r10,15,0,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFFFF8000;
loc_831960C4:
	// rlwinm r7,r10,15,17,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7FFF;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// blt cr6,0x831960e8
	if (cr6.lt) goto loc_831960E8;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// slw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x831960ec
	goto loc_831960EC;
loc_831960E8:
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
loc_831960EC:
	// cmpwi cr6,r10,17
	cr6.compare<int32_t>(ctx.r10.s32, 17, xer);
	// blt cr6,0x83196124
	if (cr6.lt) goto loc_83196124;
	// addi r10,r10,-17
	ctx.r10.s64 = ctx.r10.s64 + -17;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83196118
	if (cr6.eq) goto loc_83196118;
	// subfic r8,r10,15
	xer.ca = ctx.r10.u32 <= 15;
	ctx.r8.s64 = 15 - ctx.r10.s64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// srw r11,r11,r8
	r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r8.u8 & 0x3F));
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// rlwinm r9,r11,15,17,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 15) & 0x7FFF;
	// b 0x8319612c
	goto loc_8319612C;
loc_83196118:
	// rlwinm r9,r9,15,17,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0x7FFF;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x8319612c
	goto loc_8319612C;
loc_83196124:
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// rlwinm r9,r9,15,17,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0x7FFF;
loc_8319612C:
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// blt cr6,0x83196140
	if (cr6.lt) goto loc_83196140;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_83196140:
	// li r10,0
	ctx.r10.s64 = 0;
	// clrldi r8,r7,32
	ctx.r8.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rldimi r10,r6,15,17
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 15) & 0x7FFFFFFF8000) | (ctx.r10.u64 & 0xFFFF800000007FFF);
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rldicr r10,r10,15,48
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 15) & 0xFFFFFFFFFFFF8000;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// std r10,8(r30)
	PPC_STORE_U64(r30.u32 + 8, ctx.r10.u64);
	// b 0x83196184
	goto loc_83196184;
loc_83196164:
	// addi r11,r10,8
	r11.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// blt cr6,0x83196178
	if (cr6.lt) goto loc_83196178;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_83196178:
	// li r10,-1
	ctx.r10.s64 = -1;
	// std r10,8(r30)
	PPC_STORE_U64(r30.u32 + 8, ctx.r10.u64);
loc_83196180:
	// std r10,0(r30)
	PPC_STORE_U64(r30.u32 + 0, ctx.r10.u64);
loc_83196184:
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// b 0x831b0b7c
	return;
loc_831961B0:
	// stw r29,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r29.u32);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831961C0"))) PPC_WEAK_FUNC(sub_831961C0);
PPC_FUNC_IMPL(__imp__sub_831961C0) {
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// stw r27,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r27.u32);
	// bl 0x83197908
	sub_83197908(ctx, base);
	// lis r11,1
	r11.s64 = 65536;
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// beq cr6,0x83196274
	if (cr6.eq) goto loc_83196274;
	// lis r11,2
	r11.s64 = 131072;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// beq cr6,0x83196258
	if (cr6.eq) goto loc_83196258;
	// lis r11,4
	r11.s64 = 262144;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bne cr6,0x8319624c
	if (!cr6.eq) goto loc_8319624C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831959c8
	sub_831959C8(ctx, base);
	// lwz r11,244(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8319624c
	if (cr6.eq) goto loc_8319624C;
	// lwz r10,184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// ld r5,168(r31)
	ctx.r5.u64 = PPC_LOAD_U64(r31.u32 + 168);
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 248);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8319624C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_83196258:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83195480
	sub_83195480(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_83196274:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831951f0
	sub_831951F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83196290"))) PPC_WEAK_FUNC(sub_83196290);
PPC_FUNC_IMPL(__imp__sub_83196290) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// blt cr6,0x83196308
	if (cr6.lt) goto loc_83196308;
loc_831962B8:
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831961c0
	sub_831961C0(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// subf r31,r11,r31
	r31.s64 = r31.s64 - r11.s64;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// beq cr6,0x83196308
	if (cr6.eq) goto loc_83196308;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// bge cr6,0x831962b8
	if (!cr6.lt) goto loc_831962B8;
loc_83196308:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,14,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83196368
	if (cr6.eq) goto loc_83196368;
	// addi r11,r27,40
	r11.s64 = r27.s64 + 40;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83196330
	if (cr6.eq) goto loc_83196330;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x83196340
	goto loc_83196340;
loc_83196330:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_83196340:
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// addi r10,r10,72
	ctx.r10.s64 = ctx.r10.s64 + 72;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83196354:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83196354
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83196354;
loc_83196368:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83196378"))) PPC_WEAK_FUNC(sub_83196378);
PPC_FUNC_IMPL(__imp__sub_83196378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831963D8"))) PPC_WEAK_FUNC(sub_831963D8);
PPC_FUNC_IMPL(__imp__sub_831963D8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// subf. r4,r6,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// stw r4,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bgt 0x83196418
	if (cr0.gt) goto loc_83196418;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,1036
	ctx.r4.u64 = ctx.r4.u64 | 1036;
	// b 0x83196440
	goto loc_83196440;
loc_83196418:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r6,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r6.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// bl 0x8313d0e0
	sub_8313D0E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x83196444
	if (!cr6.eq) goto loc_83196444;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,1034
	ctx.r4.u64 = ctx.r4.u64 | 1034;
loc_83196440:
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
loc_83196444:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196458"))) PPC_WEAK_FUNC(sub_83196458);
PPC_FUNC_IMPL(__imp__sub_83196458) {
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
	// mulli r11,r4,116
	r11.s64 = ctx.r4.s64 * 116;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r11,r11,5016
	r11.s64 = r11.s64 + 5016;
	// addi r31,r11,16
	r31.s64 = r11.s64 + 16;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bne cr6,0x831964a8
	if (!cr6.eq) goto loc_831964A8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831964a8
	if (cr6.eq) goto loc_831964A8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_831964A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831964C0"))) PPC_WEAK_FUNC(sub_831964C0);
PPC_FUNC_IMPL(__imp__sub_831964C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r11,9
	r11.s64 = 9;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831964E8"))) PPC_WEAK_FUNC(sub_831964E8);
PPC_FUNC_IMPL(__imp__sub_831964E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196520"))) PPC_WEAK_FUNC(sub_83196520);
PPC_FUNC_IMPL(__imp__sub_83196520) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83196534
	if (!cr6.eq) goto loc_83196534;
loc_8319652C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83196534:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83196568
	if (!cr6.eq) goto loc_83196568;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8319652c
	if (cr6.eq) goto loc_8319652C;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8319652c
	if (!cr6.gt) goto loc_8319652C;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgtlr cr6
	if (cr6.gt) return;
loc_83196568:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196570"))) PPC_WEAK_FUNC(sub_83196570);
PPC_FUNC_IMPL(__imp__sub_83196570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// mulli r11,r4,116
	r11.s64 = ctx.r4.s64 * 116;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r11,r11,5032
	r11.s64 = r11.s64 + 5032;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831965A8"))) PPC_WEAK_FUNC(sub_831965A8);
PPC_FUNC_IMPL(__imp__sub_831965A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,116
	r11.s64 = ctx.r4.s64 * 116;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,5032
	r11.s64 = r11.s64 + 5032;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831965E0"))) PPC_WEAK_FUNC(sub_831965E0);
PPC_FUNC_IMPL(__imp__sub_831965E0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// bge cr6,0x83196684
	if (!cr6.lt) goto loc_83196684;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
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
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83196690
	goto loc_83196690;
loc_83196684:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_83196690:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_831966B8"))) PPC_WEAK_FUNC(sub_831966B8);
PPC_FUNC_IMPL(__imp__sub_831966B8) {
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
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cntlzw r10,r30
	ctx.r10.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196728"))) PPC_WEAK_FUNC(sub_83196728);
PPC_FUNC_IMPL(__imp__sub_83196728) {
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
	// mulli r11,r4,116
	r11.s64 = ctx.r4.s64 * 116;
	// add r31,r11,r3
	r31.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x8318fdd8
	sub_8318FDD8(ctx, base);
	// lwz r11,5056(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 5056);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,5060(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 5060);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// bl 0x8318fde8
	sub_8318FDE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83196770"))) PPC_WEAK_FUNC(sub_83196770);
PPC_FUNC_IMPL(__imp__sub_83196770) {
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
	// mulli r11,r4,116
	r11.s64 = ctx.r4.s64 * 116;
	// add r31,r11,r3
	r31.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x8318fdd8
	sub_8318FDD8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,5056(r31)
	PPC_STORE_U32(r31.u32 + 5056, r30.u32);
	// stw r29,5060(r31)
	PPC_STORE_U32(r31.u32 + 5060, r29.u32);
	// bl 0x8318fde8
	sub_8318FDE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831967B0"))) PPC_WEAK_FUNC(sub_831967B0);
PPC_FUNC_IMPL(__imp__sub_831967B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,116
	r11.s64 = ctx.r4.s64 * 116;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r3,5044(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 5044);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831967C0"))) PPC_WEAK_FUNC(sub_831967C0);
PPC_FUNC_IMPL(__imp__sub_831967C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,116
	r11.s64 = ctx.r4.s64 * 116;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r3,5068(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 5068);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831967D0"))) PPC_WEAK_FUNC(sub_831967D0);
PPC_FUNC_IMPL(__imp__sub_831967D0) {
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
	// mulli r11,r4,116
	r11.s64 = ctx.r4.s64 * 116;
	// add r31,r11,r3
	r31.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8318fdd8
	sub_8318FDD8(ctx, base);
	// lwz r30,5064(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 5064);
	// lwz r29,5068(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 5068);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x83196824
	if (!cr6.eq) goto loc_83196824;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x83196830
	if (cr6.eq) goto loc_83196830;
	// lwz r3,5036(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 5036);
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
	// add r30,r3,r29
	r30.u64 = ctx.r3.u64 + r29.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
loc_83196824:
	// bge cr6,0x83196830
	if (!cr6.lt) goto loc_83196830;
	// lis r30,32767
	r30.s64 = 2147418112;
	// ori r30,r30,65535
	r30.u64 = r30.u64 | 65535;
loc_83196830:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8318fde8
	sub_8318FDE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83196848"))) PPC_WEAK_FUNC(sub_83196848);
PPC_FUNC_IMPL(__imp__sub_83196848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mulli r11,r4,116
	r11.s64 = ctx.r4.s64 * 116;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,5020(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 5020);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83196870
	if (!cr6.eq) goto loc_83196870;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,1025
	ctx.r4.u64 = ctx.r4.u64 | 1025;
	// b 0x8318fee0
	sub_8318FEE0(ctx, base);
	return;
loc_83196870:
	// lwz r11,5036(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 5036);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196880"))) PPC_WEAK_FUNC(sub_83196880);
PPC_FUNC_IMPL(__imp__sub_83196880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mulli r11,r4,116
	r11.s64 = ctx.r4.s64 * 116;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r11,r11,5032
	r11.s64 = r11.s64 + 5032;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r10,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831968A8"))) PPC_WEAK_FUNC(sub_831968A8);
PPC_FUNC_IMPL(__imp__sub_831968A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mulli r11,r4,116
	r11.s64 = ctx.r4.s64 * 116;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r10,5020(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 5020);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x831968d0
	if (!cr6.eq) goto loc_831968D0;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r4,5092(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 5092);
	// li r5,11
	ctx.r5.s64 = 11;
	// b 0x831947e0
	sub_831947E0(ctx, base);
	return;
loc_831968D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831968D8"))) PPC_WEAK_FUNC(sub_831968D8);
PPC_FUNC_IMPL(__imp__sub_831968D8) {
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
	// mulli r11,r4,116
	r11.s64 = ctx.r4.s64 * 116;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,5020(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 5020);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8319691c
	if (!cr6.eq) goto loc_8319691C;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r4,5092(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 5092);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831947e0
	sub_831947E0(ctx, base);
loc_8319691C:
	// li r11,1
	r11.s64 = 1;
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196938"))) PPC_WEAK_FUNC(sub_83196938);
PPC_FUNC_IMPL(__imp__sub_83196938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mulli r11,r4,116
	r11.s64 = ctx.r4.s64 * 116;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r5,5024(r11)
	PPC_STORE_U32(r11.u32 + 5024, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196950"))) PPC_WEAK_FUNC(sub_83196950);
PPC_FUNC_IMPL(__imp__sub_83196950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// bne cr6,0x83196960
	if (!cr6.eq) goto loc_83196960;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83196960:
	// mulli r11,r4,116
	r11.s64 = ctx.r4.s64 * 116;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r3,5024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 5024);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196970"))) PPC_WEAK_FUNC(sub_83196970);
PPC_FUNC_IMPL(__imp__sub_83196970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mulli r11,r4,116
	r11.s64 = ctx.r4.s64 * 116;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r5,5028(r11)
	PPC_STORE_U32(r11.u32 + 5028, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196988"))) PPC_WEAK_FUNC(sub_83196988);
PPC_FUNC_IMPL(__imp__sub_83196988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// bne cr6,0x83196998
	if (!cr6.eq) goto loc_83196998;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83196998:
	// mulli r11,r4,116
	r11.s64 = ctx.r4.s64 * 116;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r3,5028(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 5028);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831969A8"))) PPC_WEAK_FUNC(sub_831969A8);
PPC_FUNC_IMPL(__imp__sub_831969A8) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8313d0e0
	sub_8313D0E0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31935
	r11.s64 = -2092892160;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r30,r11,-7940
	r30.s64 = r11.s64 + -7940;
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8313c358
	sub_8313C358(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
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

__attribute__((alias("__imp__sub_83196A50"))) PPC_WEAK_FUNC(sub_83196A50);
PPC_FUNC_IMPL(__imp__sub_83196A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31935
	r11.s64 = -2092892160;
	// lwz r11,-7936(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -7936);
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196A90"))) PPC_WEAK_FUNC(sub_83196A90);
PPC_FUNC_IMPL(__imp__sub_83196A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31935
	r11.s64 = -2092892160;
	// lwz r11,-7940(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -7940);
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196AD0"))) PPC_WEAK_FUNC(sub_83196AD0);
PPC_FUNC_IMPL(__imp__sub_83196AD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rotlwi r11,r3,0
	r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x83196ae4
	if (cr6.lt) goto loc_83196AE4;
	// li r11,0
	r11.s64 = 0;
loc_83196AE4:
	// rldicr r10,r3,0,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 0) & 0xFFFFFFFF00000000;
	// rldicr r11,r11,32,31
	r11.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFF00000000;
	// clrldi r9,r4,32
	ctx.r9.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// or r3,r11,r9
	ctx.r3.u64 = r11.u64 | ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196B00"))) PPC_WEAK_FUNC(sub_83196B00);
PPC_FUNC_IMPL(__imp__sub_83196B00) {
	PPC_FUNC_PROLOGUE();
	// b 0x831969a8
	sub_831969A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83196B08"))) PPC_WEAK_FUNC(sub_83196B08);
PPC_FUNC_IMPL(__imp__sub_83196B08) {
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
	// bl 0x83196458
	sub_83196458(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83196458
	sub_83196458(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83196458
	sub_83196458(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196B50"))) PPC_WEAK_FUNC(sub_83196B50);
PPC_FUNC_IMPL(__imp__sub_83196B50) {
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
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r7,116
	r11.s64 = ctx.r7.s64 * 116;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// add r3,r11,r4
	ctx.r3.u64 = r11.u64 + ctx.r4.u64;
	// lwzx r11,r8,r6
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// xori r5,r11,1
	ctx.r5.u64 = r11.u64 ^ 1;
	// bl 0x831964c0
	sub_831964C0(ctx, base);
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwzx r8,r8,r6
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r8,8124(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8124);
	// stw r8,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r8.u32);
	// lwz r8,8120(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8120);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x83196be8
	if (!cr6.gt) goto loc_83196BE8;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_83196BCC:
	// lwz r7,16(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwx r10,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// addi r8,r8,136
	ctx.r8.s64 = ctx.r8.s64 + 136;
	// lwz r7,8120(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8120);
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x83196bcc
	if (cr6.lt) goto loc_83196BCC;
loc_83196BE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196C00"))) PPC_WEAK_FUNC(sub_83196C00);
PPC_FUNC_IMPL(__imp__sub_83196C00) {
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
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r6,116
	r11.s64 = ctx.r6.s64 * 116;
	// add r3,r11,r3
	ctx.r3.u64 = r11.u64 + ctx.r3.u64;
	// lwzx r11,r9,r8
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = r11.u64 ^ 1;
	// bl 0x831964c0
	sub_831964C0(ctx, base);
	// lwzx r10,r9,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196C88"))) PPC_WEAK_FUNC(sub_83196C88);
PPC_FUNC_IMPL(__imp__sub_83196C88) {
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
	// mulli r11,r6,116
	r11.s64 = ctx.r6.s64 * 116;
	// add r3,r11,r3
	ctx.r3.u64 = r11.u64 + ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x831964c0
	sub_831964C0(ctx, base);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x831964e8
	sub_831964E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196CC0"))) PPC_WEAK_FUNC(sub_83196CC0);
PPC_FUNC_IMPL(__imp__sub_83196CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x8318fdd8
	sub_8318FDD8(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83196CF8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83196cf8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83196CF8;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x8303cd30
	sub_8303CD30(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// bl 0x8318fde8
	sub_8318FDE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83196D30"))) PPC_WEAK_FUNC(sub_83196D30);
PPC_FUNC_IMPL(__imp__sub_83196D30) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mulli r11,r11,116
	r11.s64 = r11.s64 * 116;
	// add r10,r11,r3
	ctx.r10.u64 = r11.u64 + ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
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
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lwz r11,5020(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5020);
	// lwz r3,5036(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5036);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83196db8
	if (cr6.eq) goto loc_83196DB8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83196db8
	if (cr6.eq) goto loc_83196DB8;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x831965e0
	sub_831965E0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
loc_83196DB8:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_83196DD0"))) PPC_WEAK_FUNC(sub_83196DD0);
PPC_FUNC_IMPL(__imp__sub_83196DD0) {
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
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x831965e0
	sub_831965E0(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83196e18
	if (cr6.lt) goto loc_83196E18;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83196e40
	if (cr6.lt) goto loc_83196E40;
loc_83196E18:
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83196e34
	if (cr6.lt) goto loc_83196E34;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83196e40
	if (cr6.lt) goto loc_83196E40;
loc_83196E34:
	// li r11,0
	r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
loc_83196E40:
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

__attribute__((alias("__imp__sub_83196E58"))) PPC_WEAK_FUNC(sub_83196E58);
PPC_FUNC_IMPL(__imp__sub_83196E58) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x83196a50
	sub_83196A50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x83196eb0
	if (cr6.eq) goto loc_83196EB0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8313d058
	sub_8313D058(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x8313d058
	sub_8313D058(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83196EB0:
	// bl 0x83196a90
	sub_83196A90(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83196ef8
	if (cr6.eq) goto loc_83196EF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313c2d8
	sub_8313C2D8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83196EF8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83196F10"))) PPC_WEAK_FUNC(sub_83196F10);
PPC_FUNC_IMPL(__imp__sub_83196F10) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r11,116
	r11.s64 = r11.s64 * 116;
	// lwzx r5,r10,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// add r31,r11,r3
	r31.u64 = r11.u64 + ctx.r3.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r28,r31,16
	r28.s64 = r31.s64 + 16;
	// bne cr6,0x83196f48
	if (!cr6.eq) goto loc_83196F48;
	// li r30,0
	r30.s64 = 0;
	// li r29,4
	r29.s64 = 4;
	// b 0x83196f84
	goto loc_83196F84;
loc_83196F48:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwzx r4,r10,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r30,1
	r30.s64 = 1;
	// li r29,5
	r29.s64 = 5;
	// bl 0x831963d8
	sub_831963D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83196f98
	if (!cr6.eq) goto loc_83196F98;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83196cc0
	sub_83196CC0(ctx, base);
	// addi r3,r28,40
	ctx.r3.s64 = r28.s64 + 40;
	// bl 0x8318fc60
	sub_8318FC60(ctx, base);
loc_83196F84:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831964c0
	sub_831964C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83196F98:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83196FA0"))) PPC_WEAK_FUNC(sub_83196FA0);
PPC_FUNC_IMPL(__imp__sub_83196FA0) {
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
	// mulli r11,r5,116
	r11.s64 = ctx.r5.s64 * 116;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r5,r11,5016
	ctx.r5.s64 = r11.s64 + 5016;
	// addi r31,r5,16
	r31.s64 = ctx.r5.s64 + 16;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x83196fec
	if (cr6.eq) goto loc_83196FEC;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,1033
	ctx.r4.u64 = ctx.r4.u64 | 1033;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83196FEC:
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r6,r11,1
	ctx.r6.u64 = r11.u64 ^ 1;
	// bl 0x83196cc0
	sub_83196CC0(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x83197350
	sub_83197350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197028"))) PPC_WEAK_FUNC(sub_83197028);
PPC_FUNC_IMPL(__imp__sub_83197028) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x83196d30
	sub_83196D30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83197030"))) PPC_WEAK_FUNC(sub_83197030);
PPC_FUNC_IMPL(__imp__sub_83197030) {
	PPC_FUNC_PROLOGUE();
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x83196d30
	sub_83196D30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83197038"))) PPC_WEAK_FUNC(sub_83197038);
PPC_FUNC_IMPL(__imp__sub_83197038) {
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
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mulli r11,r26,116
	r11.s64 = r26.s64 * 116;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// addi r11,r11,5016
	r11.s64 = r11.s64 + 5016;
	// li r24,0
	r24.s64 = 0;
	// addi r28,r11,16
	r28.s64 = r11.s64 + 16;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// lwz r30,4(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// beq cr6,0x83197134
	if (cr6.eq) goto loc_83197134;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83197134
	if (cr6.eq) goto loc_83197134;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83197134
	if (cr6.eq) goto loc_83197134;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831966b8
	sub_831966B8(ctx, base);
	// cmpw cr6,r3,r31
	cr6.compare<int32_t>(ctx.r3.s32, r31.s32, xer);
	// bge cr6,0x831970cc
	if (!cr6.lt) goto loc_831970CC;
	// subf r27,r3,r31
	r27.s64 = r31.s64 - ctx.r3.s64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x831966b8
	sub_831966B8(ctx, base);
	// cmpw cr6,r3,r27
	cr6.compare<int32_t>(ctx.r3.s32, r27.s32, xer);
	// bge cr6,0x831970cc
	if (!cr6.lt) goto loc_831970CC;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// ori r4,r4,1035
	ctx.r4.u64 = ctx.r4.u64 | 1035;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
loc_831970CC:
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// bne cr6,0x8319710c
	if (!cr6.eq) goto loc_8319710C;
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(r26.s32, 1, xer);
	// bne cr6,0x831970e4
	if (!cr6.eq) goto loc_831970E4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83196dd0
	sub_83196DD0(ctx, base);
loc_831970E4:
	// lwz r11,36(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x83197120
	if (cr6.lt) goto loc_83197120;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r11,36(r28)
	PPC_STORE_U32(r28.u32 + 36, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r11,68(r25)
	PPC_STORE_U32(r25.u32 + 68, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
loc_8319710C:
	// lwz r11,32(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x83197120
	if (cr6.lt) goto loc_83197120;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// stw r11,32(r28)
	PPC_STORE_U32(r28.u32 + 32, r11.u32);
loc_83197120:
	// li r11,1
	r11.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r11,68(r25)
	PPC_STORE_U32(r25.u32 + 68, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
loc_83197134:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_83197140"))) PPC_WEAK_FUNC(sub_83197140);
PPC_FUNC_IMPL(__imp__sub_83197140) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83197030
	sub_83197030(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197170"))) PPC_WEAK_FUNC(sub_83197170);
PPC_FUNC_IMPL(__imp__sub_83197170) {
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
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r9,8
	r31.s64 = ctx.r9.s64 + 8;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x83196378
	sub_83196378(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,40(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// divw r9,r11,r10
	ctx.r9.s32 = r11.s32 / ctx.r10.s32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r7,r10,r11
	ctx.r7.s64 = r11.s64 - ctx.r10.s64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83196f10
	sub_83196F10(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8319727c
	if (!cr6.eq) goto loc_8319727C;
	// li r7,2048
	ctx.r7.s64 = 2048;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83196f10
	sub_83196F10(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8319727c
	if (!cr6.eq) goto loc_8319727C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83196f10
	sub_83196F10(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8319727c
	if (!cr6.eq) goto loc_8319727C;
	// li r7,3
	ctx.r7.s64 = 3;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83196b50
	sub_83196B50(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83196c00
	sub_83196C00(ctx, base);
	// li r7,5
	ctx.r7.s64 = 5;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83196b50
	sub_83196B50(ctx, base);
	// li r6,6
	ctx.r6.s64 = 6;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83196c00
	sub_83196C00(ctx, base);
	// li r6,7
	ctx.r6.s64 = 7;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83196c88
	sub_83196C88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8319727C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83197288"))) PPC_WEAK_FUNC(sub_83197288);
PPC_FUNC_IMPL(__imp__sub_83197288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83196520
	sub_83196520(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x831972c8
	if (cr6.eq) goto loc_831972C8;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,1032
	ctx.r4.u64 = ctx.r4.u64 | 1032;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// b 0x83197320
	goto loc_83197320;
loc_831972C8:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83194860
	sub_83194860(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831972e0
	if (cr6.eq) goto loc_831972E0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x83197314
	goto loc_83197314;
loc_831972E0:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83194860
	sub_83194860(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831972fc
	if (cr6.eq) goto loc_831972FC;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x83197314
	goto loc_83197314;
loc_831972FC:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83194860
	sub_83194860(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r5,r11,0,30,30
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
loc_83197314:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83196fa0
	sub_83196FA0(ctx, base);
loc_83197320:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197338"))) PPC_WEAK_FUNC(sub_83197338);
PPC_FUNC_IMPL(__imp__sub_83197338) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x83197038
	sub_83197038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83197340"))) PPC_WEAK_FUNC(sub_83197340);
PPC_FUNC_IMPL(__imp__sub_83197340) {
	PPC_FUNC_PROLOGUE();
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x83197038
	sub_83197038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83197348"))) PPC_WEAK_FUNC(sub_83197348);
PPC_FUNC_IMPL(__imp__sub_83197348) {
	PPC_FUNC_PROLOGUE();
	// b 0x831b0ed0
	sub_831B0ED0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83197350"))) PPC_WEAK_FUNC(sub_83197350);
PPC_FUNC_IMPL(__imp__sub_83197350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197368"))) PPC_WEAK_FUNC(sub_83197368);
PPC_FUNC_IMPL(__imp__sub_83197368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,7
	ctx.r10.s64 = r11.s64 + 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r30,r10,0,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r29,r11,r5
	r29.u64 = r11.u64 + ctx.r5.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// srawi r11,r29,4
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	r11.s64 = r29.s32 >> 4;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// addze r10,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r10.s64 = temp.s64;
	// li r11,0
	r11.s64 = 0;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831973C8"))) PPC_WEAK_FUNC(sub_831973C8);
PPC_FUNC_IMPL(__imp__sub_831973C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x831973e8
	if (!cr6.eq) goto loc_831973E8;
	// li r11,1
	r11.s64 = 1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// blr 
	return;
loc_831973E8:
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ld r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// ld r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// blt cr6,0x83197420
	if (cr6.lt) goto loc_83197420;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
loc_83197420:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// bge cr6,0x83197440
	if (!cr6.lt) goto loc_83197440;
	// li r11,0
	r11.s64 = 0;
loc_83197440:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197450"))) PPC_WEAK_FUNC(sub_83197450);
PPC_FUNC_IMPL(__imp__sub_83197450) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x831b0b28
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// add r31,r5,r6
	r31.u64 = ctx.r5.u64 + ctx.r6.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r28,8(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x83197500
	if (!cr6.gt) goto loc_83197500;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r29,r7,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
loc_83197484:
	// add r11,r9,r30
	r11.u64 = ctx.r9.u64 + r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bgt cr6,0x831974a8
	if (cr6.gt) goto loc_831974A8;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bgt cr6,0x831974cc
	if (cr6.gt) goto loc_831974CC;
	// b 0x831974c4
	goto loc_831974C4;
loc_831974A8:
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bgt cr6,0x831974b8
	if (cr6.gt) goto loc_831974B8;
	// cmplw cr6,r4,r31
	cr6.compare<uint32_t>(ctx.r4.u32, r31.u32, xer);
	// blt cr6,0x83197504
	if (cr6.lt) goto loc_83197504;
loc_831974B8:
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// bgt cr6,0x831974cc
	if (cr6.gt) goto loc_831974CC;
	// subf r11,r6,r11
	r11.s64 = r11.s64 - ctx.r6.s64;
loc_831974C4:
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// blt cr6,0x83197504
	if (cr6.lt) goto loc_83197504;
loc_831974CC:
	// addi r11,r8,1
	r11.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// bge cr6,0x831974e4
	if (!cr6.lt) goto loc_831974E4;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// b 0x831974f4
	goto loc_831974F4;
loc_831974E4:
	// subf r11,r29,r9
	r11.s64 = ctx.r9.s64 - r29.s64;
	// subf r10,r7,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r7.s64;
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
loc_831974F4:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r3,r28
	cr6.compare<int32_t>(ctx.r3.s32, r28.s32, xer);
	// blt cr6,0x83197484
	if (cr6.lt) goto loc_83197484;
loc_83197500:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83197504:
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83197508"))) PPC_WEAK_FUNC(sub_83197508);
PPC_FUNC_IMPL(__imp__sub_83197508) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mulli r11,r4,116
	r11.s64 = ctx.r4.s64 * 116;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r10,5072(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 5072);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83197530
	if (cr6.eq) goto loc_83197530;
	// lwz r10,5080(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 5080);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,5076(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 5076);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
loc_83197530:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197538"))) PPC_WEAK_FUNC(sub_83197538);
PPC_FUNC_IMPL(__imp__sub_83197538) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83197594
	if (cr6.eq) goto loc_83197594;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x83197594
	if (!cr6.gt) goto loc_83197594;
	// bl 0x8318fcc8
	sub_8318FCC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83197584
	if (cr6.eq) goto loc_83197584;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,357
	ctx.r4.u64 = ctx.r4.u64 | 357;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83197584:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,5188
	ctx.r3.s64 = r30.s64 + 5188;
	// bl 0x83197368
	sub_83197368(ctx, base);
loc_83197594:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831975A0"))) PPC_WEAK_FUNC(sub_831975A0);
PPC_FUNC_IMPL(__imp__sub_831975A0) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// cmpdi cr6,r10,0
	cr6.compare<int64_t>(ctx.r10.s64, 0, xer);
	// blt cr6,0x8319761c
	if (cr6.lt) goto loc_8319761C;
	// mulli r11,r11,116
	r11.s64 = r11.s64 * 116;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,5072
	ctx.r3.s64 = r11.s64 + 5072;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8319761c
	if (cr6.eq) goto loc_8319761C;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x831973c8
	sub_831973C8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8319761c
	if (!cr6.eq) goto loc_8319761C;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,1057
	ctx.r4.u64 = ctx.r4.u64 | 1057;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8319761C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197638"))) PPC_WEAK_FUNC(sub_83197638);
PPC_FUNC_IMPL(__imp__sub_83197638) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x831976b0
	if (cr6.eq) goto loc_831976B0;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x83197450
	sub_83197450(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831976b0
	if (cr6.eq) goto loc_831976B0;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r10,r11,r3
	ctx.r10.u64 = r11.u64 + ctx.r3.u64;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x83197688
	if (cr6.lt) goto loc_83197688;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// add r10,r11,r3
	ctx.r10.u64 = r11.u64 + ctx.r3.u64;
loc_83197688:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r10,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// subf r9,r3,r29
	ctx.r9.s64 = r29.s64 - ctx.r3.s64;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r10,0(r30)
	PPC_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// ld r11,8(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// std r11,8(r30)
	PPC_STORE_U64(r30.u32 + 8, r11.u64);
loc_831976B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831976B8"))) PPC_WEAK_FUNC(sub_831976B8);
PPC_FUNC_IMPL(__imp__sub_831976B8) {
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
	// mulli r11,r4,116
	r11.s64 = ctx.r4.s64 * 116;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r11,r11,5032
	r11.s64 = r11.s64 + 5032;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// std r9,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r9.u64);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83197710
	if (cr6.eq) goto loc_83197710;
	// add r11,r7,r6
	r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x83197708
	if (cr6.lt) goto loc_83197708;
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
loc_83197708:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83197638
	sub_83197638(ctx, base);
loc_83197710:
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

__attribute__((alias("__imp__sub_83197728"))) PPC_WEAK_FUNC(sub_83197728);
PPC_FUNC_IMPL(__imp__sub_83197728) {
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
	// bl 0x83194cb0
	sub_83194CB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x83197764
	if (cr6.eq) goto loc_83197764;
	// lis r4,-254
	ctx.r4.s64 = -16646144;
	// ori r4,r4,513
	ctx.r4.u64 = ctx.r4.u64 | 513;
	// bl 0x83194d90
	sub_83194D90(ctx, base);
	// b 0x83197778
	goto loc_83197778;
loc_83197764:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r10,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// ld r11,8(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
loc_83197778:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197790"))) PPC_WEAK_FUNC(sub_83197790);
PPC_FUNC_IMPL(__imp__sub_83197790) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x83194cb0
	sub_83194CB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831977cc
	if (cr6.eq) goto loc_831977CC;
	// lis r4,-254
	ctx.r4.s64 = -16646144;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,514
	ctx.r4.u64 = ctx.r4.u64 | 514;
	// bl 0x83194d90
	sub_83194D90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_831977CC:
	// rlwinm r11,r29,5,0,26
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r11,72
	r11.s64 = r11.s64 + 72;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_831977E4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x831977e4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831977E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83197808"))) PPC_WEAK_FUNC(sub_83197808);
PPC_FUNC_IMPL(__imp__sub_83197808) {
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
	// bl 0x83194cb0
	sub_83194CB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83197844
	if (cr6.eq) goto loc_83197844;
	// lis r4,-254
	ctx.r4.s64 = -16646144;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,514
	ctx.r4.u64 = ctx.r4.u64 | 514;
	// bl 0x83194d90
	sub_83194D90(ctx, base);
	// b 0x8319786c
	goto loc_8319786C;
loc_83197844:
	// addi r11,r31,40
	r11.s64 = r31.s64 + 40;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83197854:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83197854
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83197854;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8319786C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197888"))) PPC_WEAK_FUNC(sub_83197888);
PPC_FUNC_IMPL(__imp__sub_83197888) {
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
	// bl 0x83194cb0
	sub_83194CB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831978c4
	if (cr6.eq) goto loc_831978C4;
	// lis r4,-254
	ctx.r4.s64 = -16646144;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,515
	ctx.r4.u64 = ctx.r4.u64 | 515;
	// bl 0x83194d90
	sub_83194D90(ctx, base);
	// b 0x831978ec
	goto loc_831978EC;
loc_831978C4:
	// addi r11,r31,168
	r11.s64 = r31.s64 + 168;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_831978D4:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x831978d4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831978D4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_831978EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197908"))) PPC_WEAK_FUNC(sub_83197908);
PPC_FUNC_IMPL(__imp__sub_83197908) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83197970
	if (!cr6.eq) goto loc_83197970;
	// lbz r11,1(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83197970
	if (!cr6.eq) goto loc_83197970;
	// lbz r11,2(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x83197970
	if (!cr6.eq) goto loc_83197970;
	// lbz r11,3(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// cmpwi cr6,r11,185
	cr6.compare<int32_t>(r11.s32, 185, xer);
	// beq cr6,0x83197968
	if (cr6.eq) goto loc_83197968;
	// cmpwi cr6,r11,186
	cr6.compare<int32_t>(r11.s32, 186, xer);
	// beq cr6,0x83197960
	if (cr6.eq) goto loc_83197960;
	// cmpwi cr6,r11,187
	cr6.compare<int32_t>(r11.s32, 187, xer);
	// beq cr6,0x83197958
	if (cr6.eq) goto loc_83197958;
	// cmplwi cr6,r11,188
	cr6.compare<uint32_t>(r11.u32, 188, xer);
	// blt cr6,0x83197970
	if (cr6.lt) goto loc_83197970;
	// lis r3,4
	ctx.r3.s64 = 262144;
	// blr 
	return;
loc_83197958:
	// lis r3,2
	ctx.r3.s64 = 131072;
	// blr 
	return;
loc_83197960:
	// lis r3,1
	ctx.r3.s64 = 65536;
	// blr 
	return;
loc_83197968:
	// lis r3,8
	ctx.r3.s64 = 524288;
	// blr 
	return;
loc_83197970:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197978"))) PPC_WEAK_FUNC(sub_83197978);
PPC_FUNC_IMPL(__imp__sub_83197978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31935
	r11.s64 = -2092892160;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r4,r11,-7928
	ctx.r4.s64 = r11.s64 + -7928;
	// b 0x83191778
	sub_83191778(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83197988"))) PPC_WEAK_FUNC(sub_83197988);
PPC_FUNC_IMPL(__imp__sub_83197988) {
	PPC_FUNC_PROLOGUE();
	// b 0x831917e0
	sub_831917E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83197990"))) PPC_WEAK_FUNC(sub_83197990);
PPC_FUNC_IMPL(__imp__sub_83197990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831979B0"))) PPC_WEAK_FUNC(sub_831979B0);
PPC_FUNC_IMPL(__imp__sub_831979B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831979C8"))) PPC_WEAK_FUNC(sub_831979C8);
PPC_FUNC_IMPL(__imp__sub_831979C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r11,2(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 | r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831979F8"))) PPC_WEAK_FUNC(sub_831979F8);
PPC_FUNC_IMPL(__imp__sub_831979F8) {
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
	// bl 0x83191808
	sub_83191808(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83197a2c
	if (!cr6.eq) goto loc_83197A2C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83197A2C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831918b8
	sub_831918B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83197a48
	if (!cr6.eq) goto loc_83197A48;
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_83197A48:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831910d0
	sub_831910D0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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

__attribute__((alias("__imp__sub_83197A68"))) PPC_WEAK_FUNC(sub_83197A68);
PPC_FUNC_IMPL(__imp__sub_83197A68) {
	PPC_FUNC_PROLOGUE();
	// li r5,2196
	ctx.r5.s64 = 2196;
	// b 0x831b0ed0
	sub_831B0ED0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83197A70"))) PPC_WEAK_FUNC(sub_83197A70);
PPC_FUNC_IMPL(__imp__sub_83197A70) {
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
	// lwz r11,7720(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 7720);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83197aa8
	if (!cr6.eq) goto loc_83197AA8;
loc_83197A90:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83197AA8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83182b40
	sub_83182B40(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x83197a90
	if (cr6.gt) goto loc_83197A90;
	// lwz r11,7720(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 7720);
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197AD8"))) PPC_WEAK_FUNC(sub_83197AD8);
PPC_FUNC_IMPL(__imp__sub_83197AD8) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpw cr6,r4,r30
	cr6.compare<int32_t>(ctx.r4.s32, r30.s32, xer);
	// bgt cr6,0x83197b28
	if (cr6.gt) goto loc_83197B28;
loc_83197AF8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// clrlwi r4,r31,24
	ctx.r4.u64 = r31.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83191108
	sub_83191108(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83197b1c
	if (cr6.eq) goto loc_83197B1C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83197b34
	if (!cr6.eq) goto loc_83197B34;
loc_83197B1C:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// ble cr6,0x83197af8
	if (!cr6.gt) goto loc_83197AF8;
loc_83197B28:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_83197B34:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83197B40"))) PPC_WEAK_FUNC(sub_83197B40);
PPC_FUNC_IMPL(__imp__sub_83197B40) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// beq cr6,0x83197b6c
	if (cr6.eq) goto loc_83197B6C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83197B6C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197B80"))) PPC_WEAK_FUNC(sub_83197B80);
PPC_FUNC_IMPL(__imp__sub_83197B80) {
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
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// beq cr6,0x83197bb0
	if (cr6.eq) goto loc_83197BB0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83197BB0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197BC0"))) PPC_WEAK_FUNC(sub_83197BC0);
PPC_FUNC_IMPL(__imp__sub_83197BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,160(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// stw r11,2356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2356, r11.u32);
	// lwz r11,164(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// stw r11,2360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2360, r11.u32);
	// lwz r11,168(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// stw r11,2364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2364, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197BE0"))) PPC_WEAK_FUNC(sub_83197BE0);
PPC_FUNC_IMPL(__imp__sub_83197BE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,124(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83197bf4
	if (!cr6.eq) goto loc_83197BF4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83197BF4:
	// lwz r11,128(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mulli r11,r11,100
	r11.s64 = r11.s64 * 100;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197C08"))) PPC_WEAK_FUNC(sub_83197C08);
PPC_FUNC_IMPL(__imp__sub_83197C08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r11,r3,124
	r11.s64 = ctx.r3.s64 + 124;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 112);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,116(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197C30"))) PPC_WEAK_FUNC(sub_83197C30);
PPC_FUNC_IMPL(__imp__sub_83197C30) {
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
	// bl 0x831979c8
	sub_831979C8(ctx, base);
	// addi r11,r3,-447
	r11.s64 = ctx.r3.s64 + -447;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197C60"))) PPC_WEAK_FUNC(sub_83197C60);
PPC_FUNC_IMPL(__imp__sub_83197C60) {
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
	// bl 0x83197a70
	sub_83197A70(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83197c88
	if (cr6.eq) goto loc_83197C88;
	// addi r4,r31,124
	ctx.r4.s64 = r31.s64 + 124;
	// bl 0x83197a68
	sub_83197A68(ctx, base);
loc_83197C88:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197CA0"))) PPC_WEAK_FUNC(sub_83197CA0);
PPC_FUNC_IMPL(__imp__sub_83197CA0) {
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
	// lis r11,-31975
	r11.s64 = -2095513600;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r11,4480
	ctx.r4.s64 = r11.s64 + 4480;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x83197b40
	sub_83197B40(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31975
	r11.s64 = -2095513600;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,4520
	ctx.r4.s64 = r11.s64 + 4520;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// bl 0x83197b40
	sub_83197B40(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31975
	r11.s64 = -2095513600;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,4560
	ctx.r4.s64 = r11.s64 + 4560;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x83197b40
	sub_83197B40(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// bne cr6,0x83197d0c
	if (!cr6.eq) goto loc_83197D0C;
	// li r11,2
	r11.s64 = 2;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
loc_83197D0C:
	// lis r11,-31975
	r11.s64 = -2095513600;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,4600
	ctx.r4.s64 = r11.s64 + 4600;
	// bl 0x83197b40
	sub_83197B40(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197D38"))) PPC_WEAK_FUNC(sub_83197D38);
PPC_FUNC_IMPL(__imp__sub_83197D38) {
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
	// lis r11,-31975
	r11.s64 = -2095513600;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,4640
	ctx.r4.s64 = r11.s64 + 4640;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83197b40
	sub_83197B40(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31975
	r11.s64 = -2095513600;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,4680
	ctx.r4.s64 = r11.s64 + 4680;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// bl 0x83197b40
	sub_83197B40(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31975
	r11.s64 = -2095513600;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,4720
	ctx.r4.s64 = r11.s64 + 4720;
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// bl 0x83197b40
	sub_83197B40(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31975
	r11.s64 = -2095513600;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,4760
	ctx.r4.s64 = r11.s64 + 4760;
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// bl 0x83197b40
	sub_83197B40(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31975
	r11.s64 = -2095513600;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,4840
	ctx.r4.s64 = r11.s64 + 4840;
	// stw r10,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// bl 0x83197b40
	sub_83197B40(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31975
	r11.s64 = -2095513600;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,4880
	ctx.r4.s64 = r11.s64 + 4880;
	// stw r10,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// bl 0x83197b40
	sub_83197B40(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31975
	r11.s64 = -2095513600;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,4920
	ctx.r4.s64 = r11.s64 + 4920;
	// stw r10,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// bl 0x83197b40
	sub_83197B40(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197E10"))) PPC_WEAK_FUNC(sub_83197E10);
PPC_FUNC_IMPL(__imp__sub_83197E10) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x83197e94
	if (cr6.eq) goto loc_83197E94;
	// lis r11,-31975
	r11.s64 = -2095513600;
	// addi r5,r11,5000
	ctx.r5.s64 = r11.s64 + 5000;
	// bl 0x83197b80
	sub_83197B80(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31975
	r11.s64 = -2095513600;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r11,5040
	ctx.r5.s64 = r11.s64 + 5040;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// bl 0x83197b80
	sub_83197B80(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31975
	r11.s64 = -2095513600;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r11,5080
	ctx.r5.s64 = r11.s64 + 5080;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// bl 0x83197b80
	sub_83197B80(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31975
	r11.s64 = -2095513600;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r11,5120
	ctx.r5.s64 = r11.s64 + 5120;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r10.u32);
	// bl 0x83197b80
	sub_83197B80(ctx, base);
	// stw r3,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r3.u32);
loc_83197E94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83197EA0"))) PPC_WEAK_FUNC(sub_83197EA0);
PPC_FUNC_IMPL(__imp__sub_83197EA0) {
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
	// lis r11,-31975
	r11.s64 = -2095513600;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r5,r11,5160
	ctx.r5.s64 = r11.s64 + 5160;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x83197b80
	sub_83197B80(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31975
	r11.s64 = -2095513600;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r11,5200
	ctx.r5.s64 = r11.s64 + 5200;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x83197b80
	sub_83197B80(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r28,r31,12
	r28.s64 = r31.s64 + 12;
	// addi r27,r31,8
	r27.s64 = r31.s64 + 8;
	// clrlwi r26,r29,24
	r26.u64 = r29.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x83191478
	sub_83191478(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83197f1c
	if (!cr6.eq) goto loc_83197F1C;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_83197F1C:
	// lis r11,-31975
	r11.s64 = -2095513600;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r11,5280
	ctx.r5.s64 = r11.s64 + 5280;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83197b80
	sub_83197B80(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x83191130
	sub_83191130(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83197f5c
	if (!cr6.eq) goto loc_83197F5C;
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x83197f60
	goto loc_83197F60;
loc_83197F5C:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83197F60:
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r11,r10,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// beq cr6,0x83198038
	if (cr6.eq) goto loc_83198038;
	// lis r11,-31975
	r11.s64 = -2095513600;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r11,5320
	ctx.r5.s64 = r11.s64 + 5320;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83197b80
	sub_83197B80(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31975
	r11.s64 = -2095513600;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r11,5360
	ctx.r5.s64 = r11.s64 + 5360;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// bl 0x83197b80
	sub_83197B80(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31975
	r11.s64 = -2095513600;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r11,5400
	ctx.r5.s64 = r11.s64 + 5400;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// bl 0x83197b80
	sub_83197B80(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31975
	r11.s64 = -2095513600;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r11,5440
	ctx.r5.s64 = r11.s64 + 5440;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// bl 0x83197b80
	sub_83197B80(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31975
	r11.s64 = -2095513600;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r11,5480
	ctx.r5.s64 = r11.s64 + 5480;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// bl 0x83197b80
	sub_83197B80(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31975
	r11.s64 = -2095513600;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r11,5520
	ctx.r5.s64 = r11.s64 + 5520;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// bl 0x83197b80
	sub_83197B80(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31975
	r11.s64 = -2095513600;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r11,5560
	ctx.r5.s64 = r11.s64 + 5560;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// bl 0x83197b80
	sub_83197B80(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_83198038:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83198040"))) PPC_WEAK_FUNC(sub_83198040);
PPC_FUNC_IMPL(__imp__sub_83198040) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x831918b8
	sub_831918B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8319818c
	if (cr6.eq) goto loc_8319818C;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8319818c
	if (cr6.eq) goto loc_8319818C;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83191158
	sub_83191158(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8319809c
	if (!cr6.eq) goto loc_8319809C;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	r11.s64 = 0;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// b 0x831980a4
	goto loc_831980A4;
loc_8319809C:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_831980A4:
	// mulli r9,r10,100
	ctx.r9.s64 = ctx.r10.s64 * 100;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r29,r9,r11
	r29.u64 = ctx.r9.u64 + r11.u64;
	// bl 0x831912c0
	sub_831912C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831980d4
	if (!cr6.eq) goto loc_831980D4;
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x831980d8
	goto loc_831980D8;
loc_831980D4:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_831980D8:
	// cmpwi cr6,r29,110
	cr6.compare<int32_t>(r29.s32, 110, xer);
	// bge cr6,0x831980e8
	if (!cr6.lt) goto loc_831980E8;
	// neg r11,r11
	r11.s64 = -r11.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_831980E8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83197ca0
	sub_83197CA0(ctx, base);
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83197d38
	sub_83197D38(ctx, base);
	// li r5,189
	ctx.r5.s64 = 189;
	// li r4,189
	ctx.r4.s64 = 189;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83197ad8
	sub_83197AD8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,191
	ctx.r5.s64 = 191;
	// li r4,191
	ctx.r4.s64 = 191;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// bl 0x83197ad8
	sub_83197AD8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,223
	ctx.r5.s64 = 223;
	// li r4,192
	ctx.r4.s64 = 192;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// bl 0x83197ad8
	sub_83197AD8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,239
	ctx.r5.s64 = 239;
	// li r4,224
	ctx.r4.s64 = 224;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// bl 0x83197ad8
	sub_83197AD8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// addi r5,r31,76
	ctx.r5.s64 = r31.s64 + 76;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// bl 0x83197e10
	sub_83197E10(ctx, base);
	// addi r5,r31,92
	ctx.r5.s64 = r31.s64 + 92;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83197ea0
	sub_83197EA0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8319818C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83198198"))) PPC_WEAK_FUNC(sub_83198198);
PPC_FUNC_IMPL(__imp__sub_83198198) {
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
	// addi r3,r31,148
	ctx.r3.s64 = r31.s64 + 148;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// bl 0x83191808
	sub_83191808(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x831981d8
	if (!cr6.eq) goto loc_831981D8;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,562
	ctx.r4.u64 = ctx.r4.u64 | 562;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// b 0x831981ec
	goto loc_831981EC;
loc_831981D8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83198040
	sub_83198040(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831910d0
	sub_831910D0(ctx, base);
loc_831981EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198208"))) PPC_WEAK_FUNC(sub_83198208);
PPC_FUNC_IMPL(__imp__sub_83198208) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,3372(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 3372);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83198238
	if (cr6.eq) goto loc_83198238;
	// lwz r3,3376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 3376);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83198238:
	// addi r30,r31,124
	r30.s64 = r31.s64 + 124;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83198254
	if (cr6.eq) goto loc_83198254;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_83198254:
	// cmpwi cr6,r29,2048
	cr6.compare<int32_t>(r29.s32, 2048, xer);
	// blt cr6,0x83198260
	if (cr6.lt) goto loc_83198260;
	// li r29,2048
	r29.s64 = 2048;
loc_83198260:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r30,148
	ctx.r3.s64 = r30.s64 + 148;
	// bl 0x83197348
	sub_83197348(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,144(r30)
	PPC_STORE_U32(r30.u32 + 144, r29.u32);
	// bl 0x83198198
	sub_83198198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83197bc0
	sub_83197BC0(ctx, base);
	// bl 0x83197c60
	sub_83197C60(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83198298"))) PPC_WEAK_FUNC(sub_83198298);
PPC_FUNC_IMPL(__imp__sub_83198298) {
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
	// bl 0x83197a70
	sub_83197A70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831982dc
	if (cr6.eq) goto loc_831982DC;
	// addi r30,r31,124
	r30.s64 = r31.s64 + 124;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83197a68
	sub_83197A68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83198198
	sub_83198198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83197bc0
	sub_83197BC0(ctx, base);
loc_831982DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831982F8"))) PPC_WEAK_FUNC(sub_831982F8);
PPC_FUNC_IMPL(__imp__sub_831982F8) {
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
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// beq cr6,0x83198328
	if (cr6.eq) goto loc_83198328;
loc_8319831C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_83198328:
	// addi r8,r5,-6
	ctx.r8.s64 = ctx.r5.s64 + -6;
	// addi r7,r6,6
	ctx.r7.s64 = ctx.r6.s64 + 6;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x83197c30
	sub_83197C30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83198358
	if (!cr6.eq) goto loc_83198358;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x83197c30
	sub_83197C30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8319831c
	if (cr6.eq) goto loc_8319831C;
loc_83198358:
	// addi r31,r8,-12
	r31.s64 = ctx.r8.s64 + -12;
	// addi r30,r7,12
	r30.s64 = ctx.r7.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831979f8
	sub_831979F8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8319831c
	if (cr6.eq) goto loc_8319831C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83198208
	sub_83198208(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83198398"))) PPC_WEAK_FUNC(sub_83198398);
PPC_FUNC_IMPL(__imp__sub_83198398) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// extsw r11,r4
	r11.s64 = ctx.r4.s32;
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// extsw r8,r6
	ctx.r8.s64 = ctx.r6.s32;
	// mulld r11,r11,r10
	r11.s64 = r11.s64 * ctx.r10.s64;
	// mulld r10,r9,r8
	ctx.r10.s64 = ctx.r9.s64 * ctx.r8.s64;
	// cmpd cr6,r10,r11
	cr6.compare<int64_t>(ctx.r10.s64, r11.s64, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// blelr cr6
	if (!cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831983C8"))) PPC_WEAK_FUNC(sub_831983C8);
PPC_FUNC_IMPL(__imp__sub_831983C8) {
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
	// bl 0x82e71e58
	sub_82E71E58(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83198400
	if (cr6.eq) goto loc_83198400;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,65283
	ctx.r4.u64 = ctx.r4.u64 | 65283;
	// bl 0x8319bd48
	sub_8319BD48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83198400:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r3,r11,-12256
	ctx.r3.s64 = r11.s64 + -12256;
	// li r4,5424
	ctx.r4.s64 = 5424;
	// bl 0x831a1078
	sub_831A1078(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8319842c
	if (cr6.eq) goto loc_8319842C;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// ori r4,r4,65287
	ctx.r4.u64 = ctx.r4.u64 | 65287;
	// bl 0x8319bd48
	sub_8319BD48(ctx, base);
loc_8319842C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198440"))) PPC_WEAK_FUNC(sub_83198440);
PPC_FUNC_IMPL(__imp__sub_83198440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31935
	r11.s64 = -2092892160;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,480
	ctx.r8.s64 = r11.s64 + 480;
	// li r10,384
	ctx.r10.s64 = 384;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83198458:
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x83198458
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83198458;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r8,384
	r11.s64 = ctx.r8.s64 + 384;
loc_8319846C:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,256
	cr6.compare<int32_t>(ctx.r10.s32, 256, xer);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// blt cr6,0x8319846c
	if (cr6.lt) goto loc_8319846C;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r10,384
	ctx.r10.s64 = 384;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83198490:
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x83198490
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83198490;
	// lis r10,-31930
	ctx.r10.s64 = -2092564480;
	// addi r11,r8,384
	r11.s64 = ctx.r8.s64 + 384;
	// stw r11,-23960(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23960, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831984B0"))) PPC_WEAK_FUNC(sub_831984B0);
PPC_FUNC_IMPL(__imp__sub_831984B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31935
	r11.s64 = -2092892160;
	// addi r11,r11,1504
	r11.s64 = r11.s64 + 1504;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r10,r11,4744
	ctx.r10.s64 = r11.s64 + 4744;
	// divwu r11,r9,r8
	r11.u32 = ctx.r9.u32 / ctx.r8.u32;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r9,r9,33024
	ctx.r9.u64 = ctx.r9.u64 | 33024;
loc_831984E8:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831984e8
	if (!cr6.eq) goto loc_831984E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198500"))) PPC_WEAK_FUNC(sub_83198500);
PPC_FUNC_IMPL(__imp__sub_83198500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r3,2816
	r11.s64 = ctx.r3.s64 + 2816;
	// lwz r10,4416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4416);
	// addi r9,r3,256
	ctx.r9.s64 = ctx.r3.s64 + 256;
	// stw r3,4628(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4628, ctx.r3.u32);
	// addi r4,r11,384
	ctx.r4.s64 = r11.s64 + 384;
	// addi r8,r3,384
	ctx.r8.s64 = ctx.r3.s64 + 384;
	// addi r7,r3,512
	ctx.r7.s64 = ctx.r3.s64 + 512;
	// addi r6,r3,640
	ctx.r6.s64 = ctx.r3.s64 + 640;
	// stw r10,4624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4624, ctx.r10.u32);
	// addi r5,r3,128
	ctx.r5.s64 = ctx.r3.s64 + 128;
	// stw r11,4632(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4632, r11.u32);
	// stw r4,4636(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4636, ctx.r4.u32);
	// stw r9,5260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5260, ctx.r9.u32);
	// stw r8,5264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5264, ctx.r8.u32);
	// stw r7,5268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5268, ctx.r7.u32);
	// stw r6,5272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5272, ctx.r6.u32);
	// stw r3,5276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5276, ctx.r3.u32);
	// stw r5,5280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5280, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198550"))) PPC_WEAK_FUNC(sub_83198550);
PPC_FUNC_IMPL(__imp__sub_83198550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, r11.u32);
	// stw r11,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, r11.u32);
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, r11.u32);
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, r11.u32);
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, r11.u32);
	// stw r11,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, r11.u32);
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, r11.u32);
	// stw r11,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, r11.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, r11.u32);
	// stw r11,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, r11.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r7,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r7.u32);
	// stw r8,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r8.u32);
	// stw r8,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r8.u32);
	// stw r8,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r8.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// sth r10,80(r3)
	PPC_STORE_U16(ctx.r3.u32 + 80, ctx.r10.u16);
	// sth r10,82(r3)
	PPC_STORE_U16(ctx.r3.u32 + 82, ctx.r10.u16);
	// stb r10,85(r3)
	PPC_STORE_U8(ctx.r3.u32 + 85, ctx.r10.u8);
	// stb r10,86(r3)
	PPC_STORE_U8(ctx.r3.u32 + 86, ctx.r10.u8);
	// stb r10,87(r3)
	PPC_STORE_U8(ctx.r3.u32 + 87, ctx.r10.u8);
	// stb r8,89(r3)
	PPC_STORE_U8(ctx.r3.u32 + 89, ctx.r8.u8);
	// stb r9,93(r3)
	PPC_STORE_U8(ctx.r3.u32 + 93, ctx.r9.u8);
	// stb r10,94(r3)
	PPC_STORE_U8(ctx.r3.u32 + 94, ctx.r10.u8);
	// stb r10,95(r3)
	PPC_STORE_U8(ctx.r3.u32 + 95, ctx.r10.u8);
	// stb r10,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r10.u8);
	// stb r9,98(r3)
	PPC_STORE_U8(ctx.r3.u32 + 98, ctx.r9.u8);
	// stb r9,99(r3)
	PPC_STORE_U8(ctx.r3.u32 + 99, ctx.r9.u8);
	// stb r9,100(r3)
	PPC_STORE_U8(ctx.r3.u32 + 100, ctx.r9.u8);
	// lwz r11,-60(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lwz r11,-56(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r11,-52(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -52);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// lwz r11,-48(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// lwz r11,-44(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -44);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// lwz r11,-40(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// lwz r11,-36(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -36);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// lwz r11,-32(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// lwz r11,-28(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// lwz r11,-24(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// lwz r11,-20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// lwz r11,-16(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// lwz r11,-12(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, r11.u32);
	// stb r11,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, r11.u8);
	// stb r11,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, r11.u8);
	// stb r11,90(r3)
	PPC_STORE_U8(ctx.r3.u32 + 90, r11.u8);
	// stb r11,91(r3)
	PPC_STORE_U8(ctx.r3.u32 + 91, r11.u8);
	// stb r11,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, r11.u8);
	// stb r11,97(r3)
	PPC_STORE_U8(ctx.r3.u32 + 97, r11.u8);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198680"))) PPC_WEAK_FUNC(sub_83198680);
PPC_FUNC_IMPL(__imp__sub_83198680) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31935
	r11.s64 = -2092892160;
	// addi r10,r11,1504
	ctx.r10.s64 = r11.s64 + 1504;
	// li r11,0
	r11.s64 = 0;
	// lwz r3,88(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r10,84(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x831986c0
	if (!cr6.gt) goto loc_831986C0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r9,r9,33024
	ctx.r9.u64 = ctx.r9.u64 | 33024;
loc_831986A4:
	// lwz r8,4744(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4744);
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r11,6
	r11.s64 = r11.s64 + 6;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x831986a4
	if (cr6.lt) goto loc_831986A4;
loc_831986C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831986C8"))) PPC_WEAK_FUNC(sub_831986C8);
PPC_FUNC_IMPL(__imp__sub_831986C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r3,2816
	r11.s64 = ctx.r3.s64 + 2816;
	// addi r10,r3,768
	ctx.r10.s64 = ctx.r3.s64 + 768;
	// addi r9,r3,5260
	ctx.r9.s64 = ctx.r3.s64 + 5260;
	// stw r11,4544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4544, r11.u32);
	// stw r10,4516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4516, ctx.r10.u32);
	// stw r9,4520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4520, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831986E8"))) PPC_WEAK_FUNC(sub_831986E8);
PPC_FUNC_IMPL(__imp__sub_831986E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4496(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4496);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r11,4500(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4500);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198700"))) PPC_WEAK_FUNC(sub_83198700);
PPC_FUNC_IMPL(__imp__sub_83198700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31935
	r11.s64 = -2092892160;
	// addi r10,r11,1504
	ctx.r10.s64 = r11.s64 + 1504;
	// lwz r11,88(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r10,84(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r9,6
	ctx.r9.s64 = 6;
	// divwu r10,r10,r9
	ctx.r10.u32 = ctx.r10.u32 / ctx.r9.u32;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r9,r9,33024
	ctx.r9.u64 = ctx.r9.u64 | 33024;
loc_83198730:
	// lwz r8,4744(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4744);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83198748
	if (!cr6.eq) goto loc_83198748;
	// addi r8,r3,1188
	ctx.r8.s64 = ctx.r3.s64 + 1188;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + r11.u32, ctx.r4.u32);
loc_83198748:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83198730
	if (!cr6.eq) goto loc_83198730;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198760"))) PPC_WEAK_FUNC(sub_83198760);
PPC_FUNC_IMPL(__imp__sub_83198760) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4816, ctx.r4.u32);
	// stw r6,4824(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4824, ctx.r6.u32);
	// stw r5,4820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4820, ctx.r5.u32);
	// b 0x82ea81c0
	sub_82EA81C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83198770"))) PPC_WEAK_FUNC(sub_83198770);
PPC_FUNC_IMPL(__imp__sub_83198770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83198780
	if (!cr6.eq) goto loc_83198780;
loc_83198778:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83198780:
	// lwz r11,4744(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4744);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83198778
	if (!cr6.eq) goto loc_83198778;
	// lis r11,-31935
	r11.s64 = -2092892160;
	// stw r3,472(r11)
	PPC_STORE_U32(r11.u32 + 472, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831987A0"))) PPC_WEAK_FUNC(sub_831987A0);
PPC_FUNC_IMPL(__imp__sub_831987A0) {
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
	// bl 0x83198440
	sub_83198440(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831987dc
	if (cr6.eq) goto loc_831987DC;
	// lis r11,-31935
	r11.s64 = -2092892160;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r11,480
	ctx.r4.s64 = r11.s64 + 480;
	// bl 0x831a2e48
	sub_831A2E48(ctx, base);
	// lis r10,-31930
	ctx.r10.s64 = -2092564480;
	// addi r11,r31,384
	r11.s64 = r31.s64 + 384;
	// stw r11,-23960(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23960, r11.u32);
loc_831987DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831987F0"))) PPC_WEAK_FUNC(sub_831987F0);
PPC_FUNC_IMPL(__imp__sub_831987F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-31930
	ctx.r10.s64 = -2092564480;
	// lis r11,-31935
	r11.s64 = -2092892160;
	// addi r11,r11,1504
	r11.s64 = r11.s64 + 1504;
	// lwz r10,-24312(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24312);
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// stw r10,4368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4368, ctx.r10.u32);
	// lis r10,-31930
	ctx.r10.s64 = -2092564480;
	// addi r9,r11,4608
	ctx.r9.s64 = r11.s64 + 4608;
	// lwz r10,-24328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24328);
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// stw r10,4372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4372, ctx.r10.u32);
	// lis r10,-31930
	ctx.r10.s64 = -2092564480;
	// lwz r10,-24352(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24352);
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// stw r10,4376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4376, ctx.r10.u32);
	// lis r10,-31930
	ctx.r10.s64 = -2092564480;
	// lwz r10,-24316(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24316);
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// stw r10,4380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4380, ctx.r10.u32);
	// lis r10,-31930
	ctx.r10.s64 = -2092564480;
	// lwz r10,-24396(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24396);
	// stw r10,4384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4384, ctx.r10.u32);
	// lis r10,-31930
	ctx.r10.s64 = -2092564480;
	// lwz r10,-24392(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24392);
	// stw r10,4388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4388, ctx.r10.u32);
	// lis r10,-31930
	ctx.r10.s64 = -2092564480;
	// lwz r10,-24320(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24320);
	// stw r9,4412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4412, ctx.r9.u32);
	// stw r10,4392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4392, ctx.r10.u32);
	// addi r10,r11,4576
	ctx.r10.s64 = r11.s64 + 4576;
	// addi r11,r11,4352
	r11.s64 = r11.s64 + 4352;
	// stw r10,4408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4408, ctx.r10.u32);
	// stw r11,4400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4400, r11.u32);
	// lis r11,-31930
	r11.s64 = -2092564480;
	// lwz r11,-23960(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -23960);
	// stw r11,4416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4416, r11.u32);
	// b 0x83198500
	sub_83198500(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83198888"))) PPC_WEAK_FUNC(sub_83198888);
PPC_FUNC_IMPL(__imp__sub_83198888) {
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
	// addi r11,r4,127
	r11.s64 = ctx.r4.s64 + 127;
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// rlwinm r29,r11,0,0,24
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r5,r10,11,2,20
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x3FFFF800;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8319ba18
	sub_8319BA18(ctx, base);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r11,-12336
	ctx.r4.s64 = r11.s64 + -12336;
	// lis r11,-31935
	r11.s64 = -2092892160;
	// addi r31,r11,1504
	r31.s64 = r11.s64 + 1504;
	// mulli r11,r30,5504
	r11.s64 = r30.s64 * 5504;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r28,r11,r29
	r28.u64 = r11.u64 + r29.u64;
	// bl 0x83197348
	sub_83197348(ctx, base);
	// addi r11,r28,1056
	r11.s64 = r28.s64 + 1056;
	// stw r28,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r28.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831988F8"))) PPC_WEAK_FUNC(sub_831988F8);
PPC_FUNC_IMPL(__imp__sub_831988F8) {
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
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// bl 0x831a2f60
	sub_831A2F60(ctx, base);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198920"))) PPC_WEAK_FUNC(sub_83198920);
PPC_FUNC_IMPL(__imp__sub_83198920) {
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
	// addi r3,r31,4472
	ctx.r3.s64 = r31.s64 + 4472;
	// bl 0x831a3918
	sub_831A3918(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831986c8
	sub_831986C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198958"))) PPC_WEAK_FUNC(sub_83198958);
PPC_FUNC_IMPL(__imp__sub_83198958) {
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
	// bl 0x83198770
	sub_83198770(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8319899c
	if (cr6.eq) goto loc_8319899C;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,513
	ctx.r4.u64 = ctx.r4.u64 | 513;
	// bl 0x8319bd48
	sub_8319BD48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8319899C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831a2fa8
	sub_831A2FA8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4744(r31)
	PPC_STORE_U32(r31.u32 + 4744, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831989D0"))) PPC_WEAK_FUNC(sub_831989D0);
PPC_FUNC_IMPL(__imp__sub_831989D0) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x83198a04
	if (!cr6.eq) goto loc_83198A04;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x83198700
	sub_83198700(ctx, base);
	// lis r11,-31935
	r11.s64 = -2092892160;
	// addi r11,r11,1504
	r11.s64 = r11.s64 + 1504;
	// b 0x83198a38
	goto loc_83198A38;
loc_83198A04:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x83198770
	sub_83198770(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83198a34
	if (cr6.eq) goto loc_83198A34;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,514
	ctx.r4.u64 = ctx.r4.u64 | 514;
	// bl 0x8319bd48
	sub_8319BD48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83198A34:
	// addi r11,r6,4752
	r11.s64 = ctx.r6.s64 + 4752;
loc_83198A38:
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r5.u32);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
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

__attribute__((alias("__imp__sub_83198A60"))) PPC_WEAK_FUNC(sub_83198A60);
PPC_FUNC_IMPL(__imp__sub_83198A60) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83198a84
	if (!cr6.eq) goto loc_83198A84;
	// lis r11,-31935
	r11.s64 = -2092892160;
	// addi r11,r11,1504
	r11.s64 = r11.s64 + 1504;
	// b 0x83198ab8
	goto loc_83198AB8;
loc_83198A84:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83198770
	sub_83198770(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83198ab4
	if (cr6.eq) goto loc_83198AB4;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,528
	ctx.r4.u64 = ctx.r4.u64 | 528;
	// bl 0x8319bd48
	sub_8319BD48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83198AB4:
	// addi r11,r10,4752
	r11.s64 = ctx.r10.s64 + 4752;
loc_83198AB8:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198AD8"))) PPC_WEAK_FUNC(sub_83198AD8);
PPC_FUNC_IMPL(__imp__sub_83198AD8) {
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
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r31,r10,1504
	r31.s64 = ctx.r10.s64 + 1504;
	// addi r11,r11,-12416
	r11.s64 = r11.s64 + -12416;
	// addi r10,r31,-1028
	ctx.r10.s64 = r31.s64 + -1028;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// bl 0x831983c8
	sub_831983C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83198b28
	if (cr6.eq) goto loc_83198B28;
	// lis r10,-253
	ctx.r10.s64 = -16580608;
	// ori r3,r10,65285
	ctx.r3.u64 = ctx.r10.u64 | 65285;
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x83198b88
	if (cr6.eq) goto loc_83198B88;
loc_83198B24:
	// b 0x83198b24
	goto loc_83198B24;
loc_83198B28:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83198888
	sub_83198888(ctx, base);
	// lwz r31,80(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x8319bd38
	sub_8319BD38(ctx, base);
	// bl 0x8319b058
	sub_8319B058(ctx, base);
	// bl 0x83198cb8
	sub_83198CB8(ctx, base);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// bl 0x831a2f58
	sub_831A2F58(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r31,4656
	ctx.r3.s64 = r31.s64 + 4656;
	// bl 0x831a2df0
	sub_831A2DF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831a3f48
	sub_831A3F48(ctx, base);
	// bl 0x831a37f8
	sub_831A37F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831a3a50
	sub_831A3A50(ctx, base);
	// addi r3,r31,6112
	ctx.r3.s64 = r31.s64 + 6112;
	// bl 0x831987a0
	sub_831987A0(ctx, base);
	// bl 0x831984b0
	sub_831984B0(ctx, base);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83198B88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83198B90"))) PPC_WEAK_FUNC(sub_83198B90);
PPC_FUNC_IMPL(__imp__sub_83198B90) {
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
	// bl 0x831987f0
	sub_831987F0(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// lis r11,-31935
	r11.s64 = -2092892160;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r11,1504
	ctx.r4.s64 = r11.s64 + 1504;
	// addi r3,r31,4752
	ctx.r3.s64 = r31.s64 + 4752;
	// stw r30,4748(r31)
	PPC_STORE_U32(r31.u32 + 4748, r30.u32);
	// bl 0x83197348
	sub_83197348(ctx, base);
	// lis r11,32767
	r11.s64 = 2147418112;
	// addi r3,r31,4956
	ctx.r3.s64 = r31.s64 + 4956;
	// stw r30,4820(r31)
	PPC_STORE_U32(r31.u32 + 4820, r30.u32);
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// stw r30,4824(r31)
	PPC_STORE_U32(r31.u32 + 4824, r30.u32);
	// stw r11,4816(r31)
	PPC_STORE_U32(r31.u32 + 4816, r11.u32);
	// bl 0x8318fc60
	sub_8318FC60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831a4040
	sub_831A4040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83198920
	sub_83198920(ctx, base);
	// addi r3,r31,4828
	ctx.r3.s64 = r31.s64 + 4828;
	// bl 0x83198550
	sub_83198550(ctx, base);
	// stw r30,5284(r31)
	PPC_STORE_U32(r31.u32 + 5284, r30.u32);
	// stw r30,5288(r31)
	PPC_STORE_U32(r31.u32 + 5288, r30.u32);
	// mr r29,r30
	r29.u64 = r30.u64;
	// stw r30,5244(r31)
	PPC_STORE_U32(r31.u32 + 5244, r30.u32);
	// stw r30,5248(r31)
	PPC_STORE_U32(r31.u32 + 5248, r30.u32);
	// stw r30,5252(r31)
	PPC_STORE_U32(r31.u32 + 5252, r30.u32);
	// stw r30,5256(r31)
	PPC_STORE_U32(r31.u32 + 5256, r30.u32);
	// stw r30,5304(r31)
	PPC_STORE_U32(r31.u32 + 5304, r30.u32);
loc_83198C14:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83198e08
	sub_83198E08(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// blt cr6,0x83198c14
	if (cr6.lt) goto loc_83198C14;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83198e30
	sub_83198E30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,5416(r31)
	PPC_STORE_U32(r31.u32 + 5416, r30.u32);
	// bl 0x831a2f68
	sub_831A2F68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e71e58
	sub_82E71E58(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,5332(r31)
	PPC_STORE_U32(r31.u32 + 5332, r11.u32);
	// stw r10,4744(r31)
	PPC_STORE_U32(r31.u32 + 4744, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83198C78"))) PPC_WEAK_FUNC(sub_83198C78);
PPC_FUNC_IMPL(__imp__sub_83198C78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// bl 0x83198680
	sub_83198680(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83198ca0
	if (!cr6.eq) goto loc_83198CA0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83198CA0:
	// bl 0x83198b90
	sub_83198B90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198CB8"))) PPC_WEAK_FUNC(sub_83198CB8);
PPC_FUNC_IMPL(__imp__sub_83198CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-31935
	r11.s64 = -2092892160;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r31,r11,1600
	r31.s64 = r11.s64 + 1600;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r31,160
	r11.s64 = r31.s64 + 160;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83198CDC:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x83198cdc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83198CDC;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,10
	ctx.r10.s64 = 10;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83198D08:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x83198d08
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83198D08;
	// addi r11,r31,120
	r11.s64 = r31.s64 + 120;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,10
	ctx.r10.s64 = 10;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83198D24:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x83198d24
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83198D24;
	// addi r11,r31,200
	r11.s64 = r31.s64 + 200;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,10
	ctx.r10.s64 = 10;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83198D40:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x83198d40
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83198D40;
	// lis r11,-31963
	r11.s64 = -2094727168;
	// lis r25,-31963
	r25.s64 = -2094727168;
	// addi r11,r11,-11832
	r11.s64 = r11.s64 + -11832;
	// lis r26,-31963
	r26.s64 = -2094727168;
	// lis r27,-31963
	r27.s64 = -2094727168;
	// lis r28,-31963
	r28.s64 = -2094727168;
	// lis r29,-31963
	r29.s64 = -2094727168;
	// stw r11,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r11.u32);
	// addi r11,r25,-11832
	r11.s64 = r25.s64 + -11832;
	// lis r30,-31963
	r30.s64 = -2094727168;
	// lis r3,-31963
	ctx.r3.s64 = -2094727168;
	// lis r4,-31963
	ctx.r4.s64 = -2094727168;
	// lis r5,-31963
	ctx.r5.s64 = -2094727168;
	// stw r11,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r11.u32);
	// addi r11,r26,-11536
	r11.s64 = r26.s64 + -11536;
	// lis r6,-31963
	ctx.r6.s64 = -2094727168;
	// lis r7,-31963
	ctx.r7.s64 = -2094727168;
	// lis r8,-31963
	ctx.r8.s64 = -2094727168;
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// addi r11,r27,-12392
	r11.s64 = r27.s64 + -12392;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r11,r28,-12392
	r11.s64 = r28.s64 + -12392;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r11,r29,-12392
	r11.s64 = r29.s64 + -12392;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// addi r11,r30,-12392
	r11.s64 = r30.s64 + -12392;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r11,r3,-12392
	r11.s64 = ctx.r3.s64 + -12392;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// addi r11,r4,-12392
	r11.s64 = ctx.r4.s64 + -12392;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// addi r11,r5,-12392
	r11.s64 = ctx.r5.s64 + -12392;
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// addi r11,r6,-12392
	r11.s64 = ctx.r6.s64 + -12392;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// addi r11,r7,-11336
	r11.s64 = ctx.r7.s64 + -11336;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r11,r8,-11336
	r11.s64 = ctx.r8.s64 + -11336;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r11,r9,-11048
	r11.s64 = ctx.r9.s64 + -11048;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// addi r11,r10,-10760
	r11.s64 = ctx.r10.s64 + -10760;
	// stw r11,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83198E08"))) PPC_WEAK_FUNC(sub_83198E08);
PPC_FUNC_IMPL(__imp__sub_83198E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,445
	r11.s64 = ctx.r4.s64 + 445;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r5,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r5.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r6.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198E30"))) PPC_WEAK_FUNC(sub_83198E30);
PPC_FUNC_IMPL(__imp__sub_83198E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r4,5388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5388, ctx.r4.u32);
	// stw r5,5392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5392, ctx.r5.u32);
	// stw r11,5396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5396, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198E48"))) PPC_WEAK_FUNC(sub_83198E48);
PPC_FUNC_IMPL(__imp__sub_83198E48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83198e58
	if (cr6.eq) goto loc_83198E58;
	// lwz r11,5388(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5388);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_83198E58:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,5396(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5396);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198E70"))) PPC_WEAK_FUNC(sub_83198E70);
PPC_FUNC_IMPL(__imp__sub_83198E70) {
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
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
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
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bge cr6,0x83198edc
	if (!cr6.lt) goto loc_83198EDC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83198ee4
	goto loc_83198EE4;
loc_83198EDC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8319b0b8
	sub_8319B0B8(ctx, base);
loc_83198EE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198F00"))) PPC_WEAK_FUNC(sub_83198F00);
PPC_FUNC_IMPL(__imp__sub_83198F00) {
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
	// lwz r3,5244(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 5244);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83198f90
	if (!cr6.eq) goto loc_83198F90;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8319b168
	sub_8319B168(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83198f8c
	if (cr6.eq) goto loc_83198F8C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,-1
	ctx.r5.s64 = -1;
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x8319b168
	sub_8319B168(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83198f8c
	if (cr6.eq) goto loc_83198F8C;
	// bl 0x8319b0b8
	sub_8319B0B8(ctx, base);
	// rlwinm r11,r3,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83198f7c
	if (cr6.eq) goto loc_83198F7C;
	// li r11,2
	r11.s64 = 2;
	// b 0x83198f88
	goto loc_83198F88;
loc_83198F7C:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83198f8c
	if (cr6.eq) goto loc_83198F8C;
	// li r11,1
	r11.s64 = 1;
loc_83198F88:
	// stw r11,5244(r30)
	PPC_STORE_U32(r30.u32 + 5244, r11.u32);
loc_83198F8C:
	// lwz r3,5244(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 5244);
loc_83198F90:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198FA8"))) PPC_WEAK_FUNC(sub_83198FA8);
PPC_FUNC_IMPL(__imp__sub_83198FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31930
	r11.s64 = -2092564480;
	// addi r11,r11,-24432
	r11.s64 = r11.s64 + -24432;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,4396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4396, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198FC0"))) PPC_WEAK_FUNC(sub_83198FC0);
PPC_FUNC_IMPL(__imp__sub_83198FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31930
	r11.s64 = -2092564480;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r11,r11,-24416
	r11.s64 = r11.s64 + -24416;
	// addi r3,r3,2304
	ctx.r3.s64 = ctx.r3.s64 + 2304;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x831a2e48
	sub_831A2E48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83198FD8"))) PPC_WEAK_FUNC(sub_83198FD8);
PPC_FUNC_IMPL(__imp__sub_83198FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// addi r11,r3,2560
	r11.s64 = ctx.r3.s64 + 2560;
	// lis r9,16256
	ctx.r9.s64 = 1065353216;
	// li r10,64
	ctx.r10.s64 = 64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83198FE8:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x83198fe8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83198FE8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198FF8"))) PPC_WEAK_FUNC(sub_83198FF8);
PPC_FUNC_IMPL(__imp__sub_83198FF8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,2
	r11.s64 = 2;
	// li r28,0
	r28.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r29,r31,5292
	r29.s64 = r31.s64 + 5292;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// stw r11,5336(r31)
	PPC_STORE_U32(r31.u32 + 5336, r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4876(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4876);
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// stw r11,4876(r31)
	PPC_STORE_U32(r31.u32 + 4876, r11.u32);
	// stw r28,5404(r31)
	PPC_STORE_U32(r31.u32 + 5404, r28.u32);
	// stw r28,5408(r31)
	PPC_STORE_U32(r31.u32 + 5408, r28.u32);
	// stw r28,4932(r31)
	PPC_STORE_U32(r31.u32 + 4932, r28.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,5292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 5292);
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// beq cr6,0x83199080
	if (cr6.eq) goto loc_83199080;
	// slw r9,r9,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
loc_83199080:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// blt cr6,0x831990d0
	if (cr6.lt) goto loc_831990D0;
	// addi r11,r11,-7
	r11.s64 = r11.s64 + -7;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x831990bc
	if (cr6.eq) goto loc_831990BC;
	// subfic r10,r11,25
	xer.ca = r11.u32 <= 25;
	ctx.r10.s64 = 25 - r11.s64;
	// srw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// slw r9,r8,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r11.u8 & 0x3F));
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x831990dc
	goto loc_831990DC;
loc_831990BC:
	// rlwinm r10,r9,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x831990dc
	goto loc_831990DC;
loc_831990D0:
	// rlwinm r10,r9,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// addi r11,r11,25
	r11.s64 = r11.s64 + 25;
	// rlwinm r9,r9,25,0,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0xFE000000;
loc_831990DC:
	// clrlwi r6,r10,26
	ctx.r6.u64 = ctx.r10.u32 & 0x3F;
	// cntlzw r5,r9
	ctx.r5.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r10,r10,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// stw r6,4872(r31)
	PPC_STORE_U32(r31.u32 + 4872, ctx.r6.u32);
	// rlwinm r6,r5,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// clrlwi r5,r10,26
	ctx.r5.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// stw r5,4868(r31)
	PPC_STORE_U32(r31.u32 + 4868, ctx.r5.u32);
	// clrlwi r5,r10,26
	ctx.r5.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r10,r10,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// stw r5,4864(r31)
	PPC_STORE_U32(r31.u32 + 4864, ctx.r5.u32);
	// clrlwi r5,r10,27
	ctx.r5.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r10,r10,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// stw r5,4860(r31)
	PPC_STORE_U32(r31.u32 + 4860, ctx.r5.u32);
	// stw r10,4856(r31)
	PPC_STORE_U32(r31.u32 + 4856, ctx.r10.u32);
	// stw r6,5076(r31)
	PPC_STORE_U32(r31.u32 + 5076, ctx.r6.u32);
	// bne cr6,0x83199138
	if (!cr6.eq) goto loc_83199138;
	// mr r11,r28
	r11.u64 = r28.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x83199140
	goto loc_83199140;
loc_83199138:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
loc_83199140:
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r10,5080(r31)
	PPC_STORE_U32(r31.u32 + 5080, ctx.r10.u32);
	// bne cr6,0x83199164
	if (!cr6.eq) goto loc_83199164;
	// mr r11,r28
	r11.u64 = r28.u64;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x83199168
	goto loc_83199168;
loc_83199164:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_83199168:
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = r11.s64 + -8;
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
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
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831991D8"))) PPC_WEAK_FUNC(sub_831991D8);
PPC_FUNC_IMPL(__imp__sub_831991D8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,3
	r11.s64 = 3;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r31,5292
	r28.s64 = r31.s64 + 5292;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// addi r30,r31,4828
	r30.s64 = r31.s64 + 4828;
	// stw r11,5336(r31)
	PPC_STORE_U32(r31.u32 + 5336, r11.u32);
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,5292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 5292);
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// beq cr6,0x83199248
	if (cr6.eq) goto loc_83199248;
	// slw r9,r9,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
loc_83199248:
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(r11.s32, 22, xer);
	// addi r29,r10,4
	r29.s64 = ctx.r10.s64 + 4;
	// blt cr6,0x831992a0
	if (cr6.lt) goto loc_831992A0;
	// addi r10,r11,-22
	ctx.r10.s64 = r11.s64 + -22;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83199288
	if (cr6.eq) goto loc_83199288;
	// subfic r11,r10,10
	xer.ca = ctx.r10.u32 <= 10;
	r11.s64 = 10 - ctx.r10.s64;
	// srw r11,r5,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (r11.u8 & 0x3F));
	// or r9,r11,r9
	ctx.r9.u64 = r11.u64 | ctx.r9.u64;
	// rlwinm r9,r9,10,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x3FF;
	// stw r9,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r9.u32);
	// slw r11,r5,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// b 0x831992b0
	goto loc_831992B0;
loc_83199288:
	// rlwinm r9,r9,10,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x3FF;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// stw r9,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r9.u32);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// b 0x831992b0
	goto loc_831992B0;
loc_831992A0:
	// rlwinm r8,r9,10,22,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x3FF;
	// addi r10,r11,10
	ctx.r10.s64 = r11.s64 + 10;
	// rlwinm r11,r9,10,0,21
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0xFFFFFC00;
	// stw r8,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r8.u32);
loc_831992B0:
	// cmpwi cr6,r10,29
	cr6.compare<int32_t>(ctx.r10.s32, 29, xer);
	// blt cr6,0x831992f8
	if (cr6.lt) goto loc_831992F8;
	// addi r10,r10,-29
	ctx.r10.s64 = ctx.r10.s64 + -29;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x831992e4
	if (cr6.eq) goto loc_831992E4;
	// subfic r9,r10,3
	xer.ca = ctx.r10.u32 <= 3;
	ctx.r9.s64 = 3 - ctx.r10.s64;
	// srw r9,r5,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r9.u8 & 0x3F));
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | r11.u64;
	// slw r11,r5,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r9,r9,3,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x7;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// b 0x83199304
	goto loc_83199304;
loc_831992E4:
	// rlwinm r9,r11,3,29,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0x7;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// b 0x83199304
	goto loc_83199304;
loc_831992F8:
	// rlwinm r9,r11,3,29,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0x7;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_83199304:
	// cmpwi cr6,r10,16
	cr6.compare<int32_t>(ctx.r10.s32, 16, xer);
	// stw r9,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r9.u32);
	// blt cr6,0x83199358
	if (cr6.lt) goto loc_83199358;
	// addi r8,r10,-16
	ctx.r8.s64 = ctx.r10.s64 + -16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x83199340
	if (cr6.eq) goto loc_83199340;
	// subfic r10,r8,16
	xer.ca = ctx.r8.u32 <= 16;
	ctx.r10.s64 = 16 - ctx.r8.s64;
	// slw r7,r5,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r8.u8 & 0x3F));
	// srw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r10.u8 & 0x3F));
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// rlwinm r11,r11,16,16,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// stw r11,5084(r31)
	PPC_STORE_U32(r31.u32 + 5084, r11.u32);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// b 0x83199368
	goto loc_83199368;
loc_83199340:
	// rlwinm r11,r11,16,16,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// stw r11,5084(r31)
	PPC_STORE_U32(r31.u32 + 5084, r11.u32);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// b 0x83199368
	goto loc_83199368;
loc_83199358:
	// rlwinm r9,r11,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// rlwinm r7,r11,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF0000;
	// stw r9,5084(r31)
	PPC_STORE_U32(r31.u32 + 5084, ctx.r9.u32);
loc_83199368:
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// beq cr6,0x8319939c
	if (cr6.eq) goto loc_8319939C;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// beq cr6,0x8319939c
	if (cr6.eq) goto loc_8319939C;
	// lwz r11,5408(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 5408);
	// lwz r10,5404(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 5404);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// addis r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -65536;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | r11.u64;
	// stw r11,5408(r31)
	PPC_STORE_U32(r31.u32 + 5408, r11.u32);
	// b 0x831993b4
	goto loc_831993B4;
loc_8319939C:
	// lwz r11,5404(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 5404);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r10,5408(r31)
	PPC_STORE_U32(r31.u32 + 5408, ctx.r10.u32);
	// rlwinm r10,r11,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF0000;
	// stw r11,5404(r31)
	PPC_STORE_U32(r31.u32 + 5404, r11.u32);
loc_831993B4:
	// stw r10,104(r30)
	PPC_STORE_U32(r30.u32 + 104, ctx.r10.u32);
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// beq cr6,0x831993c8
	if (cr6.eq) goto loc_831993C8;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// bne cr6,0x8319946c
	if (!cr6.eq) goto loc_8319946C;
loc_831993C8:
	// cntlzw r11,r7
	r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cmpwi cr6,r8,31
	cr6.compare<int32_t>(ctx.r8.s32, 31, xer);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r11,5136(r31)
	PPC_STORE_U32(r31.u32 + 5136, r11.u32);
	// bne cr6,0x83199544
	if (!cr6.eq) goto loc_83199544;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
loc_831993F0:
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_831993F8:
	// rlwinm r9,r11,3,29,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0x7;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r11,r9,-1
	r11.s64 = ctx.r9.s64 + -1;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// subfic r10,r11,27
	xer.ca = r11.u32 <= 27;
	ctx.r10.s64 = 27 - r11.s64;
	// stw r11,5140(r31)
	PPC_STORE_U32(r31.u32 + 5140, r11.u32);
	// stw r10,5144(r31)
	PPC_STORE_U32(r31.u32 + 5144, ctx.r10.u32);
	// slw r9,r6,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (r11.u8 & 0x3F));
	// stw r9,5148(r31)
	PPC_STORE_U32(r31.u32 + 5148, ctx.r9.u32);
	// bne cr6,0x8319946c
	if (!cr6.eq) goto loc_8319946C;
	// cntlzw r11,r7
	r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cmpwi cr6,r8,31
	cr6.compare<int32_t>(ctx.r8.s32, 31, xer);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r11,5172(r31)
	PPC_STORE_U32(r31.u32 + 5172, r11.u32);
	// bne cr6,0x8319958c
	if (!cr6.eq) goto loc_8319958C;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
loc_83199448:
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_83199450:
	// rlwinm r9,r11,3,29,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0x7;
	// addi r11,r9,-1
	r11.s64 = ctx.r9.s64 + -1;
	// subfic r10,r11,27
	xer.ca = r11.u32 <= 27;
	ctx.r10.s64 = 27 - r11.s64;
	// stw r11,5176(r31)
	PPC_STORE_U32(r31.u32 + 5176, r11.u32);
	// stw r10,5180(r31)
	PPC_STORE_U32(r31.u32 + 5180, ctx.r10.u32);
	// slw r9,r6,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (r11.u8 & 0x3F));
	// stw r9,5184(r31)
	PPC_STORE_U32(r31.u32 + 5184, ctx.r9.u32);
loc_8319946C:
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lwz r11,4776(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4776);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,-12248
	ctx.r9.s64 = ctx.r10.s64 + -12248;
	// lwz r10,4768(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4768);
	// addi r11,r11,-3
	r11.s64 = r11.s64 + -3;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// lwzx r9,r3,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// lis r11,-31935
	r11.s64 = -2092892160;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// addi r11,r11,1600
	r11.s64 = r11.s64 + 1600;
	// stw r9,5088(r31)
	PPC_STORE_U32(r31.u32 + 5088, ctx.r9.u32);
	// add r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,160
	r30.s64 = r11.s64 + 160;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r3,r11,120
	ctx.r3.s64 = r11.s64 + 120;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r11,80
	r26.s64 = r11.s64 + 80;
	// lwzx r6,r10,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// addi r25,r11,200
	r25.s64 = r11.s64 + 200;
	// stw r6,5092(r31)
	PPC_STORE_U32(r31.u32 + 5092, ctx.r6.u32);
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r11,5104(r31)
	PPC_STORE_U32(r31.u32 + 5104, r11.u32);
	// lwzx r11,r10,r3
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stw r11,5112(r31)
	PPC_STORE_U32(r31.u32 + 5112, r11.u32);
	// lwzx r11,r10,r26
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r26.u32);
	// stw r11,5116(r31)
	PPC_STORE_U32(r31.u32 + 5116, r11.u32);
	// lwzx r11,r10,r25
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r25.u32);
	// lwz r10,5116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 5116);
	// stw r11,5120(r31)
	PPC_STORE_U32(r31.u32 + 5120, r11.u32);
	// stw r10,5108(r31)
	PPC_STORE_U32(r31.u32 + 5108, ctx.r10.u32);
	// bge cr6,0x831995f8
	if (!cr6.lt) goto loc_831995F8;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r11,r8,7
	r11.s64 = ctx.r8.s64 + 7;
	// lwz r6,5296(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 5296);
loc_8319951C:
	// addi r8,r8,9
	ctx.r8.s64 = ctx.r8.s64 + 9;
	// addi r11,r11,9
	r11.s64 = r11.s64 + 9;
	// cmpwi cr6,r8,32
	cr6.compare<int32_t>(ctx.r8.s32, 32, xer);
	// blt cr6,0x831995d4
	if (cr6.lt) goto loc_831995D4;
	// addi r8,r8,-32
	ctx.r8.s64 = ctx.r8.s64 + -32;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// slw r7,r5,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r8.u8 & 0x3F));
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// b 0x831995d8
	goto loc_831995D8;
loc_83199544:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// rlwinm r11,r7,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,29
	cr6.compare<int32_t>(ctx.r10.s32, 29, xer);
	// blt cr6,0x831993f0
	if (cr6.lt) goto loc_831993F0;
	// addi r8,r10,-29
	ctx.r8.s64 = ctx.r10.s64 + -29;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x8319957c
	if (cr6.eq) goto loc_8319957C;
	// subfic r10,r8,3
	xer.ca = ctx.r8.u32 <= 3;
	ctx.r10.s64 = 3 - ctx.r8.s64;
	// slw r7,r5,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r8.u8 & 0x3F));
	// srw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r10.u8 & 0x3F));
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// b 0x831993f8
	goto loc_831993F8;
loc_8319957C:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// b 0x831993f8
	goto loc_831993F8;
loc_8319958C:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// rlwinm r11,r7,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,29
	cr6.compare<int32_t>(ctx.r10.s32, 29, xer);
	// blt cr6,0x83199448
	if (cr6.lt) goto loc_83199448;
	// addi r8,r10,-29
	ctx.r8.s64 = ctx.r10.s64 + -29;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x831995c4
	if (cr6.eq) goto loc_831995C4;
	// subfic r10,r8,3
	xer.ca = ctx.r8.u32 <= 3;
	ctx.r10.s64 = 3 - ctx.r8.s64;
	// slw r7,r5,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r8.u8 & 0x3F));
	// srw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r10.u8 & 0x3F));
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// b 0x83199450
	goto loc_83199450;
loc_831995C4:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// b 0x83199450
	goto loc_83199450;
loc_831995D4:
	// rlwinm r7,r7,9,0,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 9) & 0xFFFFFE00;
loc_831995D8:
	// srawi r10,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	ctx.r10.s64 = r11.s32 >> 3;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// cmpw cr6,r6,r10
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, xer);
	// ble cr6,0x83199678
	if (!cr6.gt) goto loc_83199678;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// blt cr6,0x8319951c
	if (cr6.lt) goto loc_8319951C;
loc_831995F8:
	// addi r11,r8,1
	r11.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// blt cr6,0x8319960c
	if (cr6.lt) goto loc_8319960C;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
loc_8319960C:
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = r11.s64 + -8;
	// bl 0x8313daa0
	sub_8313DAA0(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
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
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
loc_83199678:
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83199688"))) PPC_WEAK_FUNC(sub_83199688);
PPC_FUNC_IMPL(__imp__sub_83199688) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r5,-4
	r26.s64 = ctx.r5.s64 + -4;
	// li r23,0
	r23.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r4,4
	r30.s64 = ctx.r4.s64 + 4;
	// mr r31,r23
	r31.u64 = r23.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x8319976c
	if (!cr6.gt) goto loc_8319976C;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r24,3
	r24.s64 = 3;
	// addi r25,r11,-12220
	r25.s64 = r11.s64 + -12220;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r27,r11,-12228
	r27.s64 = r11.s64 + -12228;
loc_831996C4:
	// add r28,r31,r30
	r28.u64 = r31.u64 + r30.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831b5880
	sub_831B5880(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83199700
	if (!cr6.eq) goto loc_83199700;
	// add r11,r31,r30
	r11.u64 = r31.u64 + r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x831b5100
	sub_831B5100(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831996fc
	if (!cr6.eq) goto loc_831996FC;
	// stw r23,5304(r29)
	PPC_STORE_U32(r29.u32 + 5304, r23.u32);
	// b 0x83199700
	goto loc_83199700;
loc_831996FC:
	// stw r24,5304(r29)
	PPC_STORE_U32(r29.u32 + 5304, r24.u32);
loc_83199700:
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831b5880
	sub_831B5880(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83199750
	if (!cr6.eq) goto loc_83199750;
	// add r11,r31,r30
	r11.u64 = r31.u64 + r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x831b5100
	sub_831B5100(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// add r11,r31,r30
	r11.u64 = r31.u64 + r30.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// stw r10,5248(r29)
	PPC_STORE_U32(r29.u32 + 5248, ctx.r10.u32);
	// bl 0x831b5100
	sub_831B5100(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// add r11,r31,r30
	r11.u64 = r31.u64 + r30.u64;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// stw r10,5252(r29)
	PPC_STORE_U32(r29.u32 + 5252, ctx.r10.u32);
	// bl 0x831b5100
	sub_831B5100(ctx, base);
	// stw r3,5256(r29)
	PPC_STORE_U32(r29.u32 + 5256, ctx.r3.u32);
loc_83199750:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8319b0b8
	sub_8319B0B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8319976c
	if (!cr6.eq) goto loc_8319976C;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r26
	cr6.compare<int32_t>(r31.s32, r26.s32, xer);
	// blt cr6,0x831996c4
	if (cr6.lt) goto loc_831996C4;
loc_8319976C:
	// lwz r11,5248(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 5248);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bne cr6,0x8319977c
	if (!cr6.eq) goto loc_8319977C;
	// li r23,-1
	r23.s64 = -1;
loc_8319977C:
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// beq cr6,0x8319978c
	if (cr6.eq) goto loc_8319978C;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_8319978C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_83199798"))) PPC_WEAK_FUNC(sub_83199798);
PPC_FUNC_IMPL(__imp__sub_83199798) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r29,r10,65535
	r29.u64 = ctx.r10.u64 | 65535;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// blt cr6,0x8319986c
	if (cr6.lt) goto loc_8319986C;
loc_831997D8:
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8319b168
	sub_8319B168(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83199894
	if (!cr6.eq) goto loc_83199894;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-3
	ctx.r4.s64 = r11.s64 + -3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8313daa0
	sub_8313DAA0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
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
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// bge cr6,0x831997d8
	if (!cr6.lt) goto loc_831997D8;
loc_8319986C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
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
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_83199894:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8319b0b8
	sub_8319B0B8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// subf r4,r11,r30
	ctx.r4.s64 = r30.s64 - r11.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8313daa0
	sub_8313DAA0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
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
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83199900"))) PPC_WEAK_FUNC(sub_83199900);
PPC_FUNC_IMPL(__imp__sub_83199900) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// ori r29,r10,65535
	r29.u64 = ctx.r10.u64 | 65535;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// blt cr6,0x831999d8
	if (cr6.lt) goto loc_831999D8;
loc_83199944:
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8319b168
	sub_8319B168(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83199a04
	if (!cr6.eq) goto loc_83199A04;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-3
	ctx.r4.s64 = r11.s64 + -3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8313daa0
	sub_8313DAA0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
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
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// bge cr6,0x83199944
	if (!cr6.lt) goto loc_83199944;
loc_831999D8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
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
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
loc_83199A04:
	// lbz r11,3(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 3);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// bl 0x8319b0b8
	sub_8319B0B8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// subf r4,r11,r30
	ctx.r4.s64 = r30.s64 - r11.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8313daa0
	sub_8313DAA0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
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
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83199A78"))) PPC_WEAK_FUNC(sub_83199A78);
PPC_FUNC_IMPL(__imp__sub_83199A78) {
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
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cntlzw r10,r30
	ctx.r10.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199AE8"))) PPC_WEAK_FUNC(sub_83199AE8);
PPC_FUNC_IMPL(__imp__sub_83199AE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x83199a78
	sub_83199A78(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// blt cr6,0x83199b18
	if (cr6.lt) goto loc_83199B18;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_83199B18:
	// subf r5,r31,r30
	ctx.r5.s64 = r30.s64 - r31.s64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83199a78
	sub_83199A78(ctx, base);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83199B38"))) PPC_WEAK_FUNC(sub_83199B38);
PPC_FUNC_IMPL(__imp__sub_83199B38) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r11,1
	r11.s64 = 1;
	// li r27,0
	r27.s64 = 0;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// stw r11,5336(r28)
	PPC_STORE_U32(r28.u32 + 5336, r11.u32);
	// stw r27,5248(r28)
	PPC_STORE_U32(r28.u32 + 5248, r27.u32);
	// stw r27,5304(r28)
	PPC_STORE_U32(r28.u32 + 5304, r27.u32);
	// bl 0x83198fa8
	sub_83198FA8(ctx, base);
	// addi r25,r28,4828
	r25.s64 = r28.s64 + 4828;
	// addi r23,r28,5292
	r23.s64 = r28.s64 + 5292;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 52);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,52(r25)
	PPC_STORE_U32(r25.u32 + 52, r11.u32);
	// stw r27,5404(r28)
	PPC_STORE_U32(r28.u32 + 5404, r27.u32);
	// stw r27,5408(r28)
	PPC_STORE_U32(r28.u32 + 5408, r27.u32);
	// stw r27,104(r25)
	PPC_STORE_U32(r25.u32 + 104, r27.u32);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,5292(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 5292);
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r10,4
	r11.s64 = ctx.r10.s64 + 4;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r11,4
	ctx.r8.s64 = r11.s64 + 4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// slw r11,r9,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// bne cr6,0x83199bd8
	if (!cr6.eq) goto loc_83199BD8;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_83199BD8:
	// lwz r31,0(r8)
	r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r10,20
	cr6.compare<int32_t>(ctx.r10.s32, 20, xer);
	// addi r26,r8,4
	r26.s64 = ctx.r8.s64 + 4;
	// blt cr6,0x83199c30
	if (cr6.lt) goto loc_83199C30;
	// addi r10,r10,-20
	ctx.r10.s64 = ctx.r10.s64 + -20;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83199c18
	if (cr6.eq) goto loc_83199C18;
	// subfic r9,r10,12
	xer.ca = ctx.r10.u32 <= 12;
	ctx.r9.s64 = 12 - ctx.r10.s64;
	// srw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | r11.u64;
	// slw r11,r31,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r9,r9,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// stw r9,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r9.u32);
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x83199c40
	goto loc_83199C40;
loc_83199C18:
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// mr r11,r31
	r11.u64 = r31.u64;
	// stw r9,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r9.u32);
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x83199c40
	goto loc_83199C40;
loc_83199C30:
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// rlwinm r11,r11,12,0,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFFFF000;
	// stw r9,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r9.u32);
loc_83199C40:
	// cmpwi cr6,r10,20
	cr6.compare<int32_t>(ctx.r10.s32, 20, xer);
	// blt cr6,0x83199c90
	if (cr6.lt) goto loc_83199C90;
	// addi r10,r10,-20
	ctx.r10.s64 = ctx.r10.s64 + -20;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83199c78
	if (cr6.eq) goto loc_83199C78;
	// subfic r9,r10,12
	xer.ca = ctx.r10.u32 <= 12;
	ctx.r9.s64 = 12 - ctx.r10.s64;
	// srw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | r11.u64;
	// slw r11,r31,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r9,r9,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// stw r9,4(r25)
	PPC_STORE_U32(r25.u32 + 4, ctx.r9.u32);
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x83199ca0
	goto loc_83199CA0;
loc_83199C78:
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// mr r11,r31
	r11.u64 = r31.u64;
	// stw r9,4(r25)
	PPC_STORE_U32(r25.u32 + 4, ctx.r9.u32);
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x83199ca0
	goto loc_83199CA0;
loc_83199C90:
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// rlwinm r11,r11,12,0,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFFFF000;
	// stw r9,4(r25)
	PPC_STORE_U32(r25.u32 + 4, ctx.r9.u32);
loc_83199CA0:
	// cmpwi cr6,r10,28
	cr6.compare<int32_t>(ctx.r10.s32, 28, xer);
	// blt cr6,0x83199cf0
	if (cr6.lt) goto loc_83199CF0;
	// addi r10,r10,-28
	ctx.r10.s64 = ctx.r10.s64 + -28;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83199cd8
	if (cr6.eq) goto loc_83199CD8;
	// subfic r9,r10,4
	xer.ca = ctx.r10.u32 <= 4;
	ctx.r9.s64 = 4 - ctx.r10.s64;
	// srw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | r11.u64;
	// slw r11,r31,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r9,r9,4,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xF;
	// stw r9,5060(r28)
	PPC_STORE_U32(r28.u32 + 5060, ctx.r9.u32);
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x83199d00
	goto loc_83199D00;
loc_83199CD8:
	// rlwinm r9,r11,4,28,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xF;
	// mr r11,r31
	r11.u64 = r31.u64;
	// stw r9,5060(r28)
	PPC_STORE_U32(r28.u32 + 5060, ctx.r9.u32);
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x83199d00
	goto loc_83199D00;
loc_83199CF0:
	// rlwinm r9,r11,4,28,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xF;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r9,5060(r28)
	PPC_STORE_U32(r28.u32 + 5060, ctx.r9.u32);
loc_83199D00:
	// cmpwi cr6,r10,28
	cr6.compare<int32_t>(ctx.r10.s32, 28, xer);
	// blt cr6,0x83199d48
	if (cr6.lt) goto loc_83199D48;
	// addi r10,r10,-28
	ctx.r10.s64 = ctx.r10.s64 + -28;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83199d34
	if (cr6.eq) goto loc_83199D34;
	// subfic r9,r10,4
	xer.ca = ctx.r10.u32 <= 4;
	ctx.r9.s64 = 4 - ctx.r10.s64;
	// srw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | r11.u64;
	// slw r11,r31,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r9,r9,4,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xF;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x83199d54
	goto loc_83199D54;
loc_83199D34:
	// rlwinm r9,r11,4,28,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xF;
	// mr r11,r31
	r11.u64 = r31.u64;
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x83199d54
	goto loc_83199D54;
loc_83199D48:
	// rlwinm r9,r11,4,28,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xF;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
loc_83199D54:
	// cmpwi cr6,r10,14
	cr6.compare<int32_t>(ctx.r10.s32, 14, xer);
	// stw r9,16(r25)
	PPC_STORE_U32(r25.u32 + 16, ctx.r9.u32);
	// blt cr6,0x83199da8
	if (cr6.lt) goto loc_83199DA8;
	// addi r10,r10,-14
	ctx.r10.s64 = ctx.r10.s64 + -14;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83199d90
	if (cr6.eq) goto loc_83199D90;
	// subfic r9,r10,18
	xer.ca = ctx.r10.u32 <= 18;
	ctx.r9.s64 = 18 - ctx.r10.s64;
	// srw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | r11.u64;
	// slw r11,r31,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r9,r9,18,14,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x3FFFF;
	// stw r9,5064(r28)
	PPC_STORE_U32(r28.u32 + 5064, ctx.r9.u32);
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x83199db8
	goto loc_83199DB8;
loc_83199D90:
	// rlwinm r9,r11,18,14,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x3FFFF;
	// mr r11,r31
	r11.u64 = r31.u64;
	// stw r9,5064(r28)
	PPC_STORE_U32(r28.u32 + 5064, ctx.r9.u32);
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x83199db8
	goto loc_83199DB8;
loc_83199DA8:
	// rlwinm r9,r11,18,14,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x3FFFF;
	// addi r10,r10,18
	ctx.r10.s64 = ctx.r10.s64 + 18;
	// rlwinm r11,r11,18,0,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0xFFFC0000;
	// stw r9,5064(r28)
	PPC_STORE_U32(r28.u32 + 5064, ctx.r9.u32);
loc_83199DB8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// blt cr6,0x83199dd8
	if (cr6.lt) goto loc_83199DD8;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// slw r11,r31,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x83199ddc
	goto loc_83199DDC;
loc_83199DD8:
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_83199DDC:
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// blt cr6,0x83199e2c
	if (cr6.lt) goto loc_83199E2C;
	// addi r10,r10,-22
	ctx.r10.s64 = ctx.r10.s64 + -22;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83199e14
	if (cr6.eq) goto loc_83199E14;
	// subfic r9,r10,10
	xer.ca = ctx.r10.u32 <= 10;
	ctx.r9.s64 = 10 - ctx.r10.s64;
	// srw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | r11.u64;
	// slw r11,r31,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r9,r9,10,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x3FF;
	// stw r9,5068(r28)
	PPC_STORE_U32(r28.u32 + 5068, ctx.r9.u32);
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x83199e3c
	goto loc_83199E3C;
loc_83199E14:
	// rlwinm r9,r11,10,22,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x3FF;
	// mr r11,r31
	r11.u64 = r31.u64;
	// stw r9,5068(r28)
	PPC_STORE_U32(r28.u32 + 5068, ctx.r9.u32);
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x83199e3c
	goto loc_83199E3C;
loc_83199E2C:
	// rlwinm r9,r11,10,22,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x3FF;
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// rlwinm r11,r11,10,0,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0xFFFFFC00;
	// stw r9,5068(r28)
	PPC_STORE_U32(r28.u32 + 5068, ctx.r9.u32);
loc_83199E3C:
	// cntlzw r9,r11
	ctx.r9.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cmpwi cr6,r10,31
	cr6.compare<int32_t>(ctx.r10.s32, 31, xer);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r9,5072(r28)
	PPC_STORE_U32(r28.u32 + 5072, ctx.r9.u32);
	// bne cr6,0x83199e68
	if (!cr6.eq) goto loc_83199E68;
	// mr r11,r31
	r11.u64 = r31.u64;
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x83199e70
	goto loc_83199E70;
loc_83199E68:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_83199E70:
	// cntlzw r9,r11
	ctx.r9.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cmpwi cr6,r10,31
	cr6.compare<int32_t>(ctx.r10.s32, 31, xer);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bne cr6,0x83199e98
	if (!cr6.eq) goto loc_83199E98;
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r29,r27
	r29.u64 = r27.u64;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x83199ea0
	goto loc_83199EA0;
loc_83199E98:
	// addi r29,r10,1
	r29.s64 = ctx.r10.s64 + 1;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_83199EA0:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lfs f31,-7096(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -7096);
	f31.f64 = double(temp.f32);
	// beq cr6,0x8319a300
	if (cr6.eq) goto loc_8319A300;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
loc_83199EB4:
	// cmpwi cr6,r29,24
	cr6.compare<int32_t>(r29.s32, 24, xer);
	// blt cr6,0x83199efc
	if (cr6.lt) goto loc_83199EFC;
	// addi r11,r29,-24
	r11.s64 = r29.s64 + -24;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83199ee8
	if (cr6.eq) goto loc_83199EE8;
	// subfic r10,r11,8
	xer.ca = r11.u32 <= 8;
	ctx.r10.s64 = 8 - r11.s64;
	// srw r10,r31,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r10.u8 & 0x3F));
	// or r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 | r30.u64;
	// rlwinm r9,r9,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// slw r10,r31,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (r31.u32 << (r11.u8 & 0x3F));
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x83199f08
	goto loc_83199F08;
loc_83199EE8:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r9,r30,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFF;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x83199f08
	goto loc_83199F08;
loc_83199EFC:
	// rlwinm r9,r30,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFF;
	// addi r11,r29,8
	r11.s64 = r29.s64 + 8;
	// rlwinm r10,r30,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
loc_83199F08:
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r7,4396(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 4396);
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(r11.s32, 24, xer);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lbzx r9,r7,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// addi r9,r9,576
	ctx.r9.s64 = ctx.r9.s64 + 576;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfsx f0,r9,r28
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + r28.u32, temp.u32);
	// blt cr6,0x83199f80
	if (cr6.lt) goto loc_83199F80;
	// addi r11,r11,-24
	r11.s64 = r11.s64 + -24;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83199f6c
	if (cr6.eq) goto loc_83199F6C;
	// subfic r9,r11,8
	xer.ca = r11.u32 <= 8;
	ctx.r9.s64 = 8 - r11.s64;
	// srw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// slw r10,r31,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (r31.u32 << (r11.u8 & 0x3F));
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r9,r9,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x83199f8c
	goto loc_83199F8C;
loc_83199F6C:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x83199f8c
	goto loc_83199F8C;
loc_83199F80:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
loc_83199F8C:
	// clrldi r7,r9,32
	ctx.r7.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r9,4396(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4396);
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(r11.s32, 24, xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lbz r9,1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// addi r9,r9,576
	ctx.r9.s64 = ctx.r9.s64 + 576;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfsx f0,r9,r28
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + r28.u32, temp.u32);
	// blt cr6,0x8319a008
	if (cr6.lt) goto loc_8319A008;
	// addi r11,r11,-24
	r11.s64 = r11.s64 + -24;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83199ff4
	if (cr6.eq) goto loc_83199FF4;
	// subfic r9,r11,8
	xer.ca = r11.u32 <= 8;
	ctx.r9.s64 = 8 - r11.s64;
	// srw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// slw r10,r31,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (r31.u32 << (r11.u8 & 0x3F));
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r9,r9,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x8319a014
	goto loc_8319A014;
loc_83199FF4:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x8319a014
	goto loc_8319A014;
loc_8319A008:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
loc_8319A014:
	// clrldi r7,r9,32
	ctx.r7.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r9,4396(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4396);
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(r11.s32, 24, xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lbz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// addi r9,r9,576
	ctx.r9.s64 = ctx.r9.s64 + 576;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfsx f0,r9,r28
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + r28.u32, temp.u32);
	// blt cr6,0x8319a090
	if (cr6.lt) goto loc_8319A090;
	// addi r11,r11,-24
	r11.s64 = r11.s64 + -24;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8319a07c
	if (cr6.eq) goto loc_8319A07C;
	// subfic r9,r11,8
	xer.ca = r11.u32 <= 8;
	ctx.r9.s64 = 8 - r11.s64;
	// srw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// slw r10,r31,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (r31.u32 << (r11.u8 & 0x3F));
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r9,r9,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x8319a09c
	goto loc_8319A09C;
loc_8319A07C:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x8319a09c
	goto loc_8319A09C;
loc_8319A090:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
loc_8319A09C:
	// clrldi r7,r9,32
	ctx.r7.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r9,4396(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4396);
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(r11.s32, 24, xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lbz r9,3(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// addi r9,r9,576
	ctx.r9.s64 = ctx.r9.s64 + 576;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfsx f0,r9,r28
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + r28.u32, temp.u32);
	// blt cr6,0x8319a118
	if (cr6.lt) goto loc_8319A118;
	// addi r11,r11,-24
	r11.s64 = r11.s64 + -24;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8319a104
	if (cr6.eq) goto loc_8319A104;
	// subfic r9,r11,8
	xer.ca = r11.u32 <= 8;
	ctx.r9.s64 = 8 - r11.s64;
	// srw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// slw r10,r31,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (r31.u32 << (r11.u8 & 0x3F));
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r9,r9,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x8319a124
	goto loc_8319A124;
loc_8319A104:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x8319a124
	goto loc_8319A124;
loc_8319A118:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
loc_8319A124:
	// clrldi r7,r9,32
	ctx.r7.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r9,4396(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4396);
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(r11.s32, 24, xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lbz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// addi r9,r9,576
	ctx.r9.s64 = ctx.r9.s64 + 576;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfsx f0,r9,r28
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + r28.u32, temp.u32);
	// blt cr6,0x8319a1a0
	if (cr6.lt) goto loc_8319A1A0;
	// addi r11,r11,-24
	r11.s64 = r11.s64 + -24;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8319a18c
	if (cr6.eq) goto loc_8319A18C;
	// subfic r9,r11,8
	xer.ca = r11.u32 <= 8;
	ctx.r9.s64 = 8 - r11.s64;
	// srw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// slw r10,r31,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (r31.u32 << (r11.u8 & 0x3F));
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r9,r9,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x8319a1ac
	goto loc_8319A1AC;
loc_8319A18C:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x8319a1ac
	goto loc_8319A1AC;
loc_8319A1A0:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
loc_8319A1AC:
	// clrldi r7,r9,32
	ctx.r7.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r9,4396(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4396);
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(r11.s32, 24, xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// std r7,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lbz r9,5(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// addi r9,r9,576
	ctx.r9.s64 = ctx.r9.s64 + 576;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfsx f0,r9,r28
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + r28.u32, temp.u32);
	// blt cr6,0x8319a228
	if (cr6.lt) goto loc_8319A228;
	// addi r11,r11,-24
	r11.s64 = r11.s64 + -24;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8319a214
	if (cr6.eq) goto loc_8319A214;
	// subfic r9,r11,8
	xer.ca = r11.u32 <= 8;
	ctx.r9.s64 = 8 - r11.s64;
	// srw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// slw r10,r31,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (r31.u32 << (r11.u8 & 0x3F));
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r9,r9,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x8319a234
	goto loc_8319A234;
loc_8319A214:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x8319a234
	goto loc_8319A234;
loc_8319A228:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
loc_8319A234:
	// clrldi r7,r9,32
	ctx.r7.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r9,4396(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4396);
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(r11.s32, 24, xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// std r7,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r7.u64);
	// lbz r9,6(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// addi r9,r9,576
	ctx.r9.s64 = ctx.r9.s64 + 576;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfsx f0,r9,r28
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + r28.u32, temp.u32);
	// blt cr6,0x8319a2b0
	if (cr6.lt) goto loc_8319A2B0;
	// addi r29,r11,-24
	r29.s64 = r11.s64 + -24;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x8319a29c
	if (cr6.eq) goto loc_8319A29C;
	// subfic r11,r29,8
	xer.ca = r29.u32 <= 8;
	r11.s64 = 8 - r29.s64;
	// slw r30,r31,r29
	r30.u64 = r29.u8 & 0x20 ? 0 : (r31.u32 << (r29.u8 & 0x3F));
	// srw r11,r31,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r31.u32 >> (r11.u8 & 0x3F));
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rlwinm r9,r11,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFF;
	// b 0x8319a2bc
	goto loc_8319A2BC;
loc_8319A29C:
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x8319a2bc
	goto loc_8319A2BC;
loc_8319A2B0:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// addi r29,r11,8
	r29.s64 = r11.s64 + 8;
	// rlwinm r30,r10,8,0,23
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
loc_8319A2BC:
	// clrldi r10,r9,32
	ctx.r10.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r11,4396(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4396);
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// std r10,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// cmpwi cr6,r8,64
	cr6.compare<int32_t>(ctx.r8.s32, 64, xer);
	// lbz r11,7(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 7);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// addi r11,r11,576
	r11.s64 = r11.s64 + 576;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfsx f0,r11,r28
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + r28.u32, temp.u32);
	// blt cr6,0x83199eb4
	if (cr6.lt) goto loc_83199EB4;
	// b 0x8319a308
	goto loc_8319A308;
loc_8319A300:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83198fc0
	sub_83198FC0(ctx, base);
loc_8319A308:
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// cmpwi cr6,r29,31
	cr6.compare<int32_t>(r29.s32, 31, xer);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bne cr6,0x8319a330
	if (!cr6.eq) goto loc_8319A330;
	// mr r11,r31
	r11.u64 = r31.u64;
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x8319a338
	goto loc_8319A338;
loc_8319A330:
	// addi r8,r29,1
	ctx.r8.s64 = r29.s64 + 1;
	// rlwinm r11,r30,1,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
loc_8319A338:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8319a778
	if (cr6.eq) goto loc_8319A778;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
loc_8319A344:
	// cmpwi cr6,r8,24
	cr6.compare<int32_t>(ctx.r8.s32, 24, xer);
	// blt cr6,0x8319a384
	if (cr6.lt) goto loc_8319A384;
	// addi r10,r8,-24
	ctx.r10.s64 = ctx.r8.s64 + -24;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8319a374
	if (cr6.eq) goto loc_8319A374;
	// subfic r9,r10,8
	xer.ca = ctx.r10.u32 <= 8;
	ctx.r9.s64 = 8 - ctx.r10.s64;
	// srw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// slw r9,r31,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x8319a38c
	goto loc_8319A38C;
loc_8319A374:
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x8319a38c
	goto loc_8319A38C;
loc_8319A384:
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
loc_8319A38C:
	// rlwinm r7,r11,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFF;
	// lwz r8,4396(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 4396);
	// cmpwi cr6,r10,24
	cr6.compare<int32_t>(ctx.r10.s32, 24, xer);
	// clrldi r11,r7,32
	r11.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, r11.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lbzx r11,r8,r6
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// addi r11,r11,640
	r11.s64 = r11.s64 + 640;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfsx f0,r11,r28
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + r28.u32, temp.u32);
	// blt cr6,0x8319a400
	if (cr6.lt) goto loc_8319A400;
	// addi r11,r10,-24
	r11.s64 = ctx.r10.s64 + -24;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8319a3f0
	if (cr6.eq) goto loc_8319A3F0;
	// subfic r10,r11,8
	xer.ca = r11.u32 <= 8;
	ctx.r10.s64 = 8 - r11.s64;
	// srw r10,r31,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r10.u8 & 0x3F));
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// slw r10,r31,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (r31.u32 << (r11.u8 & 0x3F));
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x8319a408
	goto loc_8319A408;
loc_8319A3F0:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x8319a408
	goto loc_8319A408;
loc_8319A400:
	// addi r11,r10,8
	r11.s64 = ctx.r10.s64 + 8;
	// rlwinm r10,r9,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
loc_8319A408:
	// rlwinm r8,r9,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// lwz r9,4396(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4396);
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(r11.s32, 24, xer);
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// lbz r9,1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// addi r9,r9,640
	ctx.r9.s64 = ctx.r9.s64 + 640;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfsx f0,r9,r28
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + r28.u32, temp.u32);
	// blt cr6,0x8319a488
	if (cr6.lt) goto loc_8319A488;
	// addi r11,r11,-24
	r11.s64 = r11.s64 + -24;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8319a474
	if (cr6.eq) goto loc_8319A474;
	// subfic r9,r11,8
	xer.ca = r11.u32 <= 8;
	ctx.r9.s64 = 8 - r11.s64;
	// srw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// slw r10,r31,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (r31.u32 << (r11.u8 & 0x3F));
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r9,r9,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x8319a494
	goto loc_8319A494;
loc_8319A474:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x8319a494
	goto loc_8319A494;
loc_8319A488:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
loc_8319A494:
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r9,4396(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4396);
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(r11.s32, 24, xer);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// std r8,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r8.u64);
	// lbz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// addi r9,r9,640
	ctx.r9.s64 = ctx.r9.s64 + 640;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfsx f0,r9,r28
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + r28.u32, temp.u32);
	// blt cr6,0x8319a510
	if (cr6.lt) goto loc_8319A510;
	// addi r11,r11,-24
	r11.s64 = r11.s64 + -24;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8319a4fc
	if (cr6.eq) goto loc_8319A4FC;
	// subfic r9,r11,8
	xer.ca = r11.u32 <= 8;
	ctx.r9.s64 = 8 - r11.s64;
	// srw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// slw r10,r31,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (r31.u32 << (r11.u8 & 0x3F));
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r9,r9,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x8319a51c
	goto loc_8319A51C;
loc_8319A4FC:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x8319a51c
	goto loc_8319A51C;
loc_8319A510:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
loc_8319A51C:
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r9,4396(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4396);
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(r11.s32, 24, xer);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lbz r9,3(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// addi r9,r9,640
	ctx.r9.s64 = ctx.r9.s64 + 640;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfsx f0,r9,r28
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + r28.u32, temp.u32);
	// blt cr6,0x8319a598
	if (cr6.lt) goto loc_8319A598;
	// addi r11,r11,-24
	r11.s64 = r11.s64 + -24;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8319a584
	if (cr6.eq) goto loc_8319A584;
	// subfic r9,r11,8
	xer.ca = r11.u32 <= 8;
	ctx.r9.s64 = 8 - r11.s64;
	// srw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// slw r10,r31,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (r31.u32 << (r11.u8 & 0x3F));
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r9,r9,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x8319a5a4
	goto loc_8319A5A4;
loc_8319A584:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x8319a5a4
	goto loc_8319A5A4;
loc_8319A598:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
loc_8319A5A4:
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r9,4396(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4396);
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(r11.s32, 24, xer);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lbz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// addi r9,r9,640
	ctx.r9.s64 = ctx.r9.s64 + 640;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfsx f0,r9,r28
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + r28.u32, temp.u32);
	// blt cr6,0x8319a620
	if (cr6.lt) goto loc_8319A620;
	// addi r11,r11,-24
	r11.s64 = r11.s64 + -24;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8319a60c
	if (cr6.eq) goto loc_8319A60C;
	// subfic r9,r11,8
	xer.ca = r11.u32 <= 8;
	ctx.r9.s64 = 8 - r11.s64;
	// srw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// slw r10,r31,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (r31.u32 << (r11.u8 & 0x3F));
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r9,r9,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x8319a62c
	goto loc_8319A62C;
loc_8319A60C:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x8319a62c
	goto loc_8319A62C;
loc_8319A620:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
loc_8319A62C:
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r9,4396(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4396);
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(r11.s32, 24, xer);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lbz r9,5(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// addi r9,r9,640
	ctx.r9.s64 = ctx.r9.s64 + 640;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfsx f0,r9,r28
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + r28.u32, temp.u32);
	// blt cr6,0x8319a6a8
	if (cr6.lt) goto loc_8319A6A8;
	// addi r11,r11,-24
	r11.s64 = r11.s64 + -24;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8319a694
	if (cr6.eq) goto loc_8319A694;
	// subfic r9,r11,8
	xer.ca = r11.u32 <= 8;
	ctx.r9.s64 = 8 - r11.s64;
	// srw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// slw r10,r31,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (r31.u32 << (r11.u8 & 0x3F));
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r9,r9,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x8319a6b4
	goto loc_8319A6B4;
loc_8319A694:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x8319a6b4
	goto loc_8319A6B4;
loc_8319A6A8:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
loc_8319A6B4:
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r9,4396(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4396);
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(r11.s32, 24, xer);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lbz r9,6(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// addi r9,r9,640
	ctx.r9.s64 = ctx.r9.s64 + 640;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfsx f0,r9,r28
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + r28.u32, temp.u32);
	// blt cr6,0x8319a728
	if (cr6.lt) goto loc_8319A728;
	// addi r8,r11,-24
	ctx.r8.s64 = r11.s64 + -24;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x8319a718
	if (cr6.eq) goto loc_8319A718;
	// subfic r11,r8,8
	xer.ca = ctx.r8.u32 <= 8;
	r11.s64 = 8 - ctx.r8.s64;
	// srw r11,r31,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r31.u32 >> (r11.u8 & 0x3F));
	// or r10,r11,r10
	ctx.r10.u64 = r11.u64 | ctx.r10.u64;
	// slw r11,r31,r8
	r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r8.u8 & 0x3F));
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x8319a730
	goto loc_8319A730;
loc_8319A718:
	// mr r11,r31
	r11.u64 = r31.u64;
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x8319a730
	goto loc_8319A730;
loc_8319A728:
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// rlwinm r11,r10,8,0,23
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
loc_8319A730:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// lwz r10,4396(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4396);
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// cmpwi cr6,r6,64
	cr6.compare<int32_t>(ctx.r6.s32, 64, xer);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lbz r10,7(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r10,r10,640
	ctx.r10.s64 = ctx.r10.s64 + 640;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfsx f0,r10,r28
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + r28.u32, temp.u32);
	// blt cr6,0x8319a344
	if (cr6.lt) goto loc_8319A344;
	// b 0x8319a780
	goto loc_8319A780;
loc_8319A778:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83198fd8
	sub_83198FD8(ctx, base);
loc_8319A780:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r9,r8,7
	ctx.r9.s64 = ctx.r8.s64 + 7;
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// addi r8,r11,15
	ctx.r8.s64 = r11.s64 + 15;
	// srawi r11,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	r11.s64 = ctx.r10.s32 >> 4;
	// srawi r10,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 4;
	// srawi r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// stw r11,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r11.u32);
	// stw r10,12(r25)
	PPC_STORE_U32(r25.u32 + 12, ctx.r10.u32);
	// lwz r11,5064(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 5064);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r10,5220(r28)
	PPC_STORE_U32(r28.u32 + 5220, ctx.r10.u32);
	// stw r11,72(r25)
	PPC_STORE_U32(r25.u32 + 72, r11.u32);
	// lwz r11,5068(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 5068);
	// stw r11,76(r25)
	PPC_STORE_U32(r25.u32 + 76, r11.u32);
	// lwz r11,5060(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 5060);
	// stb r11,89(r25)
	PPC_STORE_U8(r25.u32 + 89, r11.u8);
	// lwz r11,5072(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 5072);
	// stb r11,90(r25)
	PPC_STORE_U8(r25.u32 + 90, r11.u8);
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// subf r11,r11,r8
	r11.s64 = ctx.r8.s64 - r11.s64;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = r11.s64 + -8;
	// bl 0x8313daa0
	sub_8313DAA0(ctx, base);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_8319A840"))) PPC_WEAK_FUNC(sub_8319A840);
PPC_FUNC_IMPL(__imp__sub_8319A840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// addi r30,r29,5292
	r30.s64 = r29.s64 + 5292;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,5292(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 5292);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// subf r8,r10,r11
	ctx.r8.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r10,8
	r11.s64 = ctx.r10.s64 + 8;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// srawi r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// bl 0x8313daa0
	sub_8313DAA0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
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
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83199798
	sub_83199798(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8319A908"))) PPC_WEAK_FUNC(sub_8319A908);
PPC_FUNC_IMPL(__imp__sub_8319A908) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r5,-3
	r31.s64 = ctx.r5.s64 + -3;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r26,0
	r26.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// lwz r28,5336(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 5336);
	// li r30,4
	r30.s64 = 4;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// ble cr6,0x8319a954
	if (!cr6.gt) goto loc_8319A954;
loc_8319A938:
	// add r3,r30,r27
	ctx.r3.u64 = r30.u64 + r27.u64;
	// bl 0x8319b0b8
	sub_8319B0B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8319a954
	if (!cr6.eq) goto loc_8319A954;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r31
	cr6.compare<int32_t>(r30.s32, r31.s32, xer);
	// blt cr6,0x8319a938
	if (cr6.lt) goto loc_8319A938;
loc_8319A954:
	// cmpw cr6,r30,r31
	cr6.compare<int32_t>(r30.s32, r31.s32, xer);
	// bne cr6,0x8319a960
	if (!cr6.eq) goto loc_8319A960;
	// li r25,-1
	r25.s64 = -1;
loc_8319A960:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(r28.s32, 1, xer);
	// bne cr6,0x8319a97c
	if (!cr6.eq) goto loc_8319A97C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83199688
	sub_83199688(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_8319A97C:
	// addi r11,r28,445
	r11.s64 = r28.s64 + 445;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r29
	r31.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8319aa6c
	if (cr6.eq) goto loc_8319AA6C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
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
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x8319aa40
	if (!cr6.lt) goto loc_8319AA40;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r5,r11,r30
	ctx.r5.s64 = r30.s64 - r11.s64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r4,r11,r27
	ctx.r4.u64 = r11.u64 + r27.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
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
loc_8319AA40:
	// rlwinm r11,r28,1,0,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lwz r10,5344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 5344);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8319aa6c
	if (cr6.eq) goto loc_8319AA6C;
	// lwz r3,5348(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 5348);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8319AA6C:
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(r28.s32, 3, xer);
	// bne cr6,0x8319aa9c
	if (!cr6.eq) goto loc_8319AA9C;
	// lwz r3,5388(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 5388);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8319aa9c
	if (cr6.eq) goto loc_8319AA9C;
	// lwz r5,5392(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 5392);
	// cmpw cr6,r30,r5
	cr6.compare<int32_t>(r30.s32, ctx.r5.s32, xer);
	// bge cr6,0x8319aa90
	if (!cr6.lt) goto loc_8319AA90;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
loc_8319AA90:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r5,5396(r29)
	PPC_STORE_U32(r29.u32 + 5396, ctx.r5.u32);
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
loc_8319AA9C:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bne cr6,0x8319aaac
	if (!cr6.eq) goto loc_8319AAAC;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_8319AAAC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_8319AAB8"))) PPC_WEAK_FUNC(sub_8319AAB8);
PPC_FUNC_IMPL(__imp__sub_8319AAB8) {
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
	// lwz r9,5284(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5284);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r10,4756(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4756);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r11,r3,4956
	r11.s64 = ctx.r3.s64 + 4956;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8319ab20
	if (cr6.eq) goto loc_8319AB20;
	// lwz r9,5288(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5288);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r8,5284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5284, ctx.r8.u32);
	// stw r9,5288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5288, ctx.r9.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// bne cr6,0x8319ab14
	if (!cr6.eq) goto loc_8319AB14;
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8319AB14:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r9.u32);
loc_8319AB20:
	// cntlzw r11,r10
	r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r30,r11,-3
	r30.s64 = r11.s64 + -3;
	// bl 0x83199798
	sub_83199798(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8319ab80
	if (cr6.eq) goto loc_8319AB80;
loc_8319AB3C:
	// and r11,r3,r29
	r11.u64 = ctx.r3.u64 & r29.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8319ab7c
	if (!cr6.eq) goto loc_8319AB7C;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83199a78
	sub_83199A78(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x8319ab80
	if (!cr6.eq) goto loc_8319AB80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83199798
	sub_83199798(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8319ab3c
	if (!cr6.eq) goto loc_8319AB3C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8319AB7C:
	// li r30,0
	r30.s64 = 0;
loc_8319AB80:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8319AB90"))) PPC_WEAK_FUNC(sub_8319AB90);
PPC_FUNC_IMPL(__imp__sub_8319AB90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// addi r29,r30,5292
	r29.s64 = r30.s64 + 5292;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,5292(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 5292);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,5296(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 5296);
	// rlwinm r11,r4,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - r11.s64;
	// addi r28,r11,8
	r28.s64 = r11.s64 + 8;
	// rlwinm r27,r10,3,0,28
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8319a908
	sub_8319A908(ctx, base);
	// addi r11,r27,7
	r11.s64 = r27.s64 + 7;
	// lwz r10,5292(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 5292);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// bl 0x8313daa0
	sub_8313DAA0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
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
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83199798
	sub_83199798(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8319AC68"))) PPC_WEAK_FUNC(sub_8319AC68);
PPC_FUNC_IMPL(__imp__sub_8319AC68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r24{};
	PPCRegister r25{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x83198770
	sub_83198770(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8319aca0
	if (cr6.eq) goto loc_8319ACA0;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,524
	ctx.r4.u64 = ctx.r4.u64 | 524;
	// bl 0x8319bd48
	sub_8319BD48(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
loc_8319ACA0:
	// li r29,0
	r29.s64 = 0;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r29,5396(r30)
	PPC_STORE_U32(r30.u32 + 5396, r29.u32);
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
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
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x83198f00
	sub_83198F00(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne cr6,0x8319ad20
	if (!cr6.eq) goto loc_8319AD20;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831a1070
	sub_831A1070(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
loc_8319AD20:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8319aab8
	sub_8319AAB8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x8319aef8
	if (!cr6.eq) goto loc_8319AEF8;
loc_8319AD38:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83198e70
	sub_83198E70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8319af10
	if (cr6.eq) goto loc_8319AF10;
	// clrlwi r11,r3,30
	r11.u64 = ctx.r3.u32 & 0x3;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8319af10
	if (!cr6.eq) goto loc_8319AF10;
	// rlwinm r11,r3,0,24,24
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8319af0c
	if (!cr6.eq) goto loc_8319AF0C;
	// addi r11,r3,-4
	r11.s64 = ctx.r3.s64 + -4;
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(r11.u32, 60, xer);
	// bgt cr6,0x8319aedc
	if (cr6.gt) goto loc_8319AEDC;
	// lis r12,-31974
	r12.s64 = -2095448064;
	// addi r12,r12,-21112
	r12.s64 = r12.s64 + -21112;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_8319AEA4;
	case 1:
		goto loc_8319AEDC;
	case 2:
		goto loc_8319AEDC;
	case 3:
		goto loc_8319AEDC;
	case 4:
		goto loc_8319AE90;
	case 5:
		goto loc_8319AEDC;
	case 6:
		goto loc_8319AEDC;
	case 7:
		goto loc_8319AEDC;
	case 8:
		goto loc_8319AEDC;
	case 9:
		goto loc_8319AEDC;
	case 10:
		goto loc_8319AEDC;
	case 11:
		goto loc_8319AEDC;
	case 12:
		goto loc_8319AEB8;
	case 13:
		goto loc_8319AEDC;
	case 14:
		goto loc_8319AEDC;
	case 15:
		goto loc_8319AEDC;
	case 16:
		goto loc_8319AEDC;
	case 17:
		goto loc_8319AEDC;
	case 18:
		goto loc_8319AEDC;
	case 19:
		goto loc_8319AEDC;
	case 20:
		goto loc_8319AEDC;
	case 21:
		goto loc_8319AEDC;
	case 22:
		goto loc_8319AEDC;
	case 23:
		goto loc_8319AEDC;
	case 24:
		goto loc_8319AEDC;
	case 25:
		goto loc_8319AEDC;
	case 26:
		goto loc_8319AEDC;
	case 27:
		goto loc_8319AEDC;
	case 28:
		goto loc_8319AECC;
	case 29:
		goto loc_8319AEDC;
	case 30:
		goto loc_8319AEDC;
	case 31:
		goto loc_8319AEDC;
	case 32:
		goto loc_8319AEDC;
	case 33:
		goto loc_8319AEDC;
	case 34:
		goto loc_8319AEDC;
	case 35:
		goto loc_8319AEDC;
	case 36:
		goto loc_8319AEDC;
	case 37:
		goto loc_8319AEDC;
	case 38:
		goto loc_8319AEDC;
	case 39:
		goto loc_8319AEDC;
	case 40:
		goto loc_8319AEDC;
	case 41:
		goto loc_8319AEDC;
	case 42:
		goto loc_8319AEDC;
	case 43:
		goto loc_8319AEDC;
	case 44:
		goto loc_8319AEDC;
	case 45:
		goto loc_8319AEDC;
	case 46:
		goto loc_8319AEDC;
	case 47:
		goto loc_8319AEDC;
	case 48:
		goto loc_8319AEDC;
	case 49:
		goto loc_8319AEDC;
	case 50:
		goto loc_8319AEDC;
	case 51:
		goto loc_8319AEDC;
	case 52:
		goto loc_8319AEDC;
	case 53:
		goto loc_8319AEDC;
	case 54:
		goto loc_8319AEDC;
	case 55:
		goto loc_8319AEDC;
	case 56:
		goto loc_8319AEDC;
	case 57:
		goto loc_8319AEDC;
	case 58:
		goto loc_8319AEDC;
	case 59:
		goto loc_8319AEDC;
	case 60:
		goto loc_8319AE7C;
	default:
		__builtin_unreachable();
	}
	// lwz r24,-20828(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20828);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20848(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20848);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20808(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20808);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20788(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20788);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20772(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20772);
	// lwz r24,-20868(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + -20868);
loc_8319AE7C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r29,64
	r29.s64 = 64;
	// bl 0x83199b38
	sub_83199B38(ctx, base);
	// b 0x8319aedc
	goto loc_8319AEDC;
loc_8319AE90:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r29,8
	r29.s64 = 8;
	// bl 0x83198ff8
	sub_83198FF8(ctx, base);
	// b 0x8319aedc
	goto loc_8319AEDC;
loc_8319AEA4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r29,4
	r29.s64 = 4;
	// bl 0x831991d8
	sub_831991D8(ctx, base);
	// b 0x8319aedc
	goto loc_8319AEDC;
loc_8319AEB8:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8319a840
	sub_8319A840(ctx, base);
	// b 0x8319aedc
	goto loc_8319AEDC;
loc_8319AECC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8319ab90
	sub_8319AB90(ctx, base);
loc_8319AEDC:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8319aab8
	sub_8319AAB8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x8319ad38
	if (cr6.eq) goto loc_8319AD38;
loc_8319AEF8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8319bd48
	sub_8319BD48(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
loc_8319AF0C:
	// li r28,-2
	r28.s64 = -2;
loc_8319AF10:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8319AF20"))) PPC_WEAK_FUNC(sub_8319AF20);
PPC_FUNC_IMPL(__imp__sub_8319AF20) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8313c358
	sub_8313C358(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8319af5c
	if (!cr6.eq) goto loc_8319AF5C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8319AF5C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8319ac68
	sub_8319AC68(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8319AFB8"))) PPC_WEAK_FUNC(sub_8319AFB8);
PPC_FUNC_IMPL(__imp__sub_8319AFB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r10,0
	ctx.r10.s64 = 0;
loc_8319AFBC:
	// ori r11,r10,256
	r11.u64 = ctx.r10.u64 | 256;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// bne cr6,0x8319afd0
	if (!cr6.eq) goto loc_8319AFD0;
	// li r11,4
	r11.s64 = 4;
	// b 0x8319b040
	goto loc_8319B040;
loc_8319AFD0:
	// cmplwi cr6,r11,257
	cr6.compare<uint32_t>(r11.u32, 257, xer);
	// bne cr6,0x8319afe0
	if (!cr6.eq) goto loc_8319AFE0;
	// li r11,3
	r11.s64 = 3;
	// b 0x8319b040
	goto loc_8319B040;
loc_8319AFE0:
	// addi r9,r11,-258
	ctx.r9.s64 = r11.s64 + -258;
	// cmplwi cr6,r9,173
	cr6.compare<uint32_t>(ctx.r9.u32, 173, xer);
	// bgt cr6,0x8319aff4
	if (cr6.gt) goto loc_8319AFF4;
	// li r11,1
	r11.s64 = 1;
	// b 0x8319b040
	goto loc_8319B040;
loc_8319AFF4:
	// cmplwi cr6,r11,434
	cr6.compare<uint32_t>(r11.u32, 434, xer);
	// bne cr6,0x8319b004
	if (!cr6.eq) goto loc_8319B004;
	// li r11,32
	r11.s64 = 32;
	// b 0x8319b040
	goto loc_8319B040;
loc_8319B004:
	// cmplwi cr6,r11,435
	cr6.compare<uint32_t>(r11.u32, 435, xer);
	// bne cr6,0x8319b014
	if (!cr6.eq) goto loc_8319B014;
	// li r11,64
	r11.s64 = 64;
	// b 0x8319b040
	goto loc_8319B040;
loc_8319B014:
	// cmplwi cr6,r11,437
	cr6.compare<uint32_t>(r11.u32, 437, xer);
	// bne cr6,0x8319b024
	if (!cr6.eq) goto loc_8319B024;
	// li r11,16
	r11.s64 = 16;
	// b 0x8319b040
	goto loc_8319B040;
loc_8319B024:
	// cmplwi cr6,r11,439
	cr6.compare<uint32_t>(r11.u32, 439, xer);
	// bne cr6,0x8319b034
	if (!cr6.eq) goto loc_8319B034;
	// li r11,128
	r11.s64 = 128;
	// b 0x8319b040
	goto loc_8319B040;
loc_8319B034:
	// addi r11,r11,-440
	r11.s64 = r11.s64 + -440;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,30,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x8;
loc_8319B040:
	// stbx r11,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,256
	cr6.compare<int32_t>(ctx.r10.s32, 256, xer);
	// blt cr6,0x8319afbc
	if (cr6.lt) goto loc_8319AFBC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B058"))) PPC_WEAK_FUNC(sub_8319B058);
PPC_FUNC_IMPL(__imp__sub_8319B058) {
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8319afb8
	sub_8319AFB8(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r8,r11,256
	ctx.r8.s64 = r11.s64 + 256;
	// addi r10,r10,-12208
	ctx.r10.s64 = ctx.r10.s64 + -12208;
loc_8319B07C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8319b09c
	if (!cr0.eq) goto loc_8319B09C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x8319b07c
	if (!cr6.eq) goto loc_8319B07C;
loc_8319B09C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8319b0a8
	if (cr6.eq) goto loc_8319B0A8;
loc_8319B0A4:
	// b 0x8319b0a4
	goto loc_8319B0A4;
loc_8319B0A8:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B0B8"))) PPC_WEAK_FUNC(sub_8319B0B8);
PPC_FUNC_IMPL(__imp__sub_8319B0B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// rotlwi r11,r11,8
	r11.u64 = __builtin_rotateleft32(r11.u32, 8);
	// lbz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8319b0e4
	if (cr6.eq) goto loc_8319B0E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8319B0E4:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lbz r10,3(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// addi r11,r11,-12208
	r11.s64 = r11.s64 + -12208;
	// lbzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B0F8"))) PPC_WEAK_FUNC(sub_8319B0F8);
PPC_FUNC_IMPL(__imp__sub_8319B0F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r10,-256
	ctx.r10.s64 = -256;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x8319b154
	if (!cr6.gt) goto loc_8319B154;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r6,r11,-12208
	ctx.r6.s64 = r11.s64 + -12208;
	// lis r7,256
	ctx.r7.s64 = 16777216;
loc_8319B11C:
	// lbz r11,0(r9)
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bne cr6,0x8319b144
	if (!cr6.eq) goto loc_8319B144;
	// rlwinm r11,r11,8,24,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFF;
	// lbzx r11,r11,r6
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r6.u32);
	// and r11,r11,r5
	r11.u64 = r11.u64 & ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8319b15c
	if (!cr6.eq) goto loc_8319B15C;
loc_8319B144:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r8,r4
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, xer);
	// blt cr6,0x8319b11c
	if (cr6.lt) goto loc_8319B11C;
loc_8319B154:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8319B15C:
	// subf r3,r8,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r8.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B168"))) PPC_WEAK_FUNC(sub_8319B168);
PPC_FUNC_IMPL(__imp__sub_8319B168) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r9,-256
	ctx.r9.s64 = -256;
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x8319b1bc
	if (!cr6.gt) goto loc_8319B1BC;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r7,r10,-12208
	ctx.r7.s64 = ctx.r10.s64 + -12208;
loc_8319B180:
	// lbzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r3.u32);
	// add r8,r11,r3
	ctx.r8.u64 = r11.u64 + ctx.r3.u64;
	// li r6,128
	ctx.r6.s64 = 128;
	// dcbt r6,r8
	// cmplwi cr6,r9,256
	cr6.compare<uint32_t>(ctx.r9.u32, 256, xer);
	// bne cr6,0x8319b1a8
	if (!cr6.eq) goto loc_8319B1A8;
	// lbzx r8,r10,r7
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// and r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 & ctx.r5.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x8319b1c4
	if (!cr6.eq) goto loc_8319B1C4;
loc_8319B1A8:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// blt cr6,0x8319b180
	if (cr6.lt) goto loc_8319B180;
loc_8319B1BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8319B1C4:
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,-3
	ctx.r3.s64 = r11.s64 + -3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B1D0"))) PPC_WEAK_FUNC(sub_8319B1D0);
PPC_FUNC_IMPL(__imp__sub_8319B1D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpdi cr6,r5,0
	cr6.compare<int64_t>(ctx.r5.s64, 0, xer);
	// bne cr6,0x8319b1fc
	if (!cr6.eq) goto loc_8319B1FC;
	// xor r11,r3,r4
	r11.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// blt cr6,0x8319b1f0
	if (cr6.lt) goto loc_8319B1F0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// clrldi r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 & 0x7FFFFFFFFFFFFFFF;
	// blr 
	return;
loc_8319B1F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// rldicr r3,r3,63,63
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// blr 
	return;
loc_8319B1FC:
	// li r11,1
	r11.s64 = 1;
	// cmpdi cr6,r3,0
	cr6.compare<int64_t>(ctx.r3.s64, 0, xer);
	// bge cr6,0x8319b210
	if (!cr6.lt) goto loc_8319B210;
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
	// li r11,-1
	r11.s64 = -1;
loc_8319B210:
	// cmpdi cr6,r4,0
	cr6.compare<int64_t>(ctx.r4.s64, 0, xer);
	// bge cr6,0x8319b220
	if (!cr6.lt) goto loc_8319B220;
	// neg r4,r4
	ctx.r4.s64 = -ctx.r4.s64;
	// neg r11,r11
	r11.s64 = -r11.s64;
loc_8319B220:
	// cmpdi cr6,r5,0
	cr6.compare<int64_t>(ctx.r5.s64, 0, xer);
	// bge cr6,0x8319b230
	if (!cr6.lt) goto loc_8319B230;
	// neg r5,r5
	ctx.r5.s64 = -ctx.r5.s64;
	// neg r11,r11
	r11.s64 = -r11.s64;
loc_8319B230:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// rldicl r11,r5,1,63
	r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 1) & 0x1;
	// mulld r10,r3,r4
	ctx.r10.s64 = ctx.r3.s64 * ctx.r4.s64;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// sradi r11,r11,1
	xer.ca = (r11.s64 < 0) & ((r11.u64 & 0x1) != 0);
	r11.s64 = r11.s64 >> 1;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// divd r3,r11,r5
	ctx.r3.s64 = r11.s64 / ctx.r5.s64;
	// bgelr cr6
	if (!cr6.lt) return;
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B258"))) PPC_WEAK_FUNC(sub_8319B258);
PPC_FUNC_IMPL(__imp__sub_8319B258) {
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
	// bl 0x83198770
	sub_83198770(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8319b294
	if (cr6.eq) goto loc_8319B294;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,524
	ctx.r4.u64 = ctx.r4.u64 | 524;
	// bl 0x8319bd48
	sub_8319BD48(ctx, base);
	// b 0x8319b2a8
	goto loc_8319B2A8;
loc_8319B294:
	// addi r4,r31,4828
	ctx.r4.s64 = r31.s64 + 4828;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8319B2A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B2C0"))) PPC_WEAK_FUNC(sub_8319B2C0);
PPC_FUNC_IMPL(__imp__sub_8319B2C0) {
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
	// bl 0x83198770
	sub_83198770(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8319b2fc
	if (cr6.eq) goto loc_8319B2FC;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// ori r4,r4,525
	ctx.r4.u64 = ctx.r4.u64 | 525;
	// bl 0x8319bd48
	sub_8319BD48(ctx, base);
	// b 0x8319b304
	goto loc_8319B304;
loc_8319B2FC:
	// lwz r11,5064(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 5064);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_8319B304:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B320"))) PPC_WEAK_FUNC(sub_8319B320);
PPC_FUNC_IMPL(__imp__sub_8319B320) {
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
	// bl 0x83198770
	sub_83198770(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8319b360
	if (cr6.eq) goto loc_8319B360;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,527
	ctx.r4.u64 = ctx.r4.u64 | 527;
	// bl 0x8319bd48
	sub_8319BD48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8319B360:
	// lwz r11,5068(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 5068);
	// lis r10,3
	ctx.r10.s64 = 196608;
	// rlwinm r11,r11,11,0,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 11) & 0xFFFFF800;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,5084(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 5084);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r11,5064(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 5064);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8319b39c
	if (!cr6.eq) goto loc_8319B39C;
	// li r11,-1
	r11.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8319B39C:
	// lwz r10,5084(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 5084);
	// li r9,1800
	ctx.r9.s64 = 1800;
	// li r3,0
	ctx.r3.s64 = 0;
	// mullw r11,r10,r11
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8319B3C0"))) PPC_WEAK_FUNC(sub_8319B3C0);
PPC_FUNC_IMPL(__imp__sub_8319B3C0) {
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
	// bl 0x83198770
	sub_83198770(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8319b3fc
	if (cr6.eq) goto loc_8319B3FC;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// ori r4,r4,526
	ctx.r4.u64 = ctx.r4.u64 | 526;
	// bl 0x8319bd48
	sub_8319BD48(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8319B3FC:
	// lwz r11,5076(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 5076);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,5080(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 5080);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8319B418"))) PPC_WEAK_FUNC(sub_8319B418);
PPC_FUNC_IMPL(__imp__sub_8319B418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r11,r3,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - r11.s64;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r9,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// slw r10,r8,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r11.u8 & 0x3F));
	// beq cr6,0x8319b450
	if (cr6.eq) goto loc_8319B450;
	// subfic r8,r11,32
	xer.ca = r11.u32 <= 32;
	ctx.r8.s64 = 32 - r11.s64;
	// srw r8,r9,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// slw r9,r9,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
loc_8319B450:
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r10,257
	cr6.compare<uint32_t>(ctx.r10.u32, 257, xer);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bne cr6,0x8319b6bc
	if (!cr6.eq) goto loc_8319B6BC;
	// cmpwi cr6,r11,27
	cr6.compare<int32_t>(r11.s32, 27, xer);
	// blt cr6,0x8319b488
	if (cr6.lt) goto loc_8319B488;
	// addi r11,r11,-27
	r11.s64 = r11.s64 + -27;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// slw r10,r7,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r11.u8 & 0x3F));
	// bne cr6,0x8319b47c
	if (!cr6.eq) goto loc_8319B47C;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8319B47C:
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// b 0x8319b490
	goto loc_8319B490;
loc_8319B488:
	// addi r11,r11,5
	r11.s64 = r11.s64 + 5;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
loc_8319B490:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bne cr6,0x8319b4b8
	if (!cr6.eq) goto loc_8319B4B8;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// b 0x8319b4c0
	goto loc_8319B4C0;
loc_8319B4B8:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_8319B4C0:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8319b6bc
	if (!cr6.eq) goto loc_8319B6BC;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bne cr6,0x8319b4f0
	if (!cr6.eq) goto loc_8319B4F0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// b 0x8319b4f8
	goto loc_8319B4F8;
loc_8319B4F0:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_8319B4F8:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8319b6bc
	if (cr6.eq) goto loc_8319B6BC;
	// rlwinm r10,r9,6,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3F;
	// cmpwi cr6,r11,26
	cr6.compare<int32_t>(r11.s32, 26, xer);
	// ble cr6,0x8319b518
	if (!cr6.gt) goto loc_8319B518;
	// subfic r8,r11,58
	xer.ca = r11.u32 <= 58;
	ctx.r8.s64 = 58 - r11.s64;
	// srw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r8.u8 & 0x3F));
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
loc_8319B518:
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// beq cr6,0x8319b558
	if (cr6.eq) goto loc_8319B558;
	// cmplwi cr6,r10,21
	cr6.compare<uint32_t>(ctx.r10.u32, 21, xer);
	// ble cr6,0x8319b6bc
	if (!cr6.gt) goto loc_8319B6BC;
	// cmplwi cr6,r10,23
	cr6.compare<uint32_t>(ctx.r10.u32, 23, xer);
	// bgt cr6,0x8319b6bc
	if (cr6.gt) goto loc_8319B6BC;
	// addi r11,r11,5
	r11.s64 = r11.s64 + 5;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// blt cr6,0x8319b550
	if (cr6.lt) goto loc_8319B550;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// slw r9,r7,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r11.u8 & 0x3F));
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// b 0x8319b57c
	goto loc_8319B57C;
loc_8319B550:
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// b 0x8319b57c
	goto loc_8319B57C;
loc_8319B558:
	// addi r11,r11,6
	r11.s64 = r11.s64 + 6;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// blt cr6,0x8319b578
	if (cr6.lt) goto loc_8319B578;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// slw r9,r7,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r11.u8 & 0x3F));
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// b 0x8319b57c
	goto loc_8319B57C;
loc_8319B578:
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
loc_8319B57C:
	// addi r8,r5,-1
	ctx.r8.s64 = ctx.r5.s64 + -1;
loc_8319B580:
	// rlwinm r10,r9,11,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x7FF;
	// cmpwi cr6,r11,21
	cr6.compare<int32_t>(r11.s32, 21, xer);
	// ble cr6,0x8319b598
	if (!cr6.gt) goto loc_8319B598;
	// subfic r5,r11,53
	xer.ca = r11.u32 <= 53;
	ctx.r5.s64 = 53 - r11.s64;
	// srw r5,r7,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r5.u8 & 0x3F));
	// or r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 | ctx.r10.u64;
loc_8319B598:
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bne cr6,0x8319b5d0
	if (!cr6.eq) goto loc_8319B5D0;
	// addi r11,r11,11
	r11.s64 = r11.s64 + 11;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// blt cr6,0x8319b5c0
	if (cr6.lt) goto loc_8319B5C0;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// slw r9,r7,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r11.u8 & 0x3F));
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// b 0x8319b5c4
	goto loc_8319B5C4;
loc_8319B5C0:
	// rlwinm r9,r9,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0xFFFFF800;
loc_8319B5C4:
	// addi r8,r8,-33
	ctx.r8.s64 = ctx.r8.s64 + -33;
	// cmpwi cr6,r8,33
	cr6.compare<int32_t>(ctx.r8.s32, 33, xer);
	// bgt cr6,0x8319b580
	if (cr6.gt) goto loc_8319B580;
loc_8319B5D0:
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// bgt cr6,0x8319b6bc
	if (cr6.gt) goto loc_8319B6BC;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-11952
	ctx.r10.s64 = ctx.r10.s64 + -11952;
	// lhzx r5,r8,r10
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// subfic r8,r10,32
	xer.ca = ctx.r10.u32 <= 32;
	ctx.r8.s64 = 32 - ctx.r10.s64;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// blt cr6,0x8319b638
	if (cr6.lt) goto loc_8319B638;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8319b628
	if (cr6.eq) goto loc_8319B628;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srw r10,r7,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// slw r10,r7,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r11.u8 & 0x3F));
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// b 0x8319b63c
	goto loc_8319B63C;
loc_8319B628:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// b 0x8319b63c
	goto loc_8319B63C;
loc_8319B638:
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
loc_8319B63C:
	// srw r8,r9,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x8319b6bc
	if (!cr6.eq) goto loc_8319B6BC;
	// rlwinm r10,r10,6,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x3F;
	// cmpwi cr6,r11,26
	cr6.compare<int32_t>(r11.s32, 26, xer);
	// ble cr6,0x8319b668
	if (!cr6.gt) goto loc_8319B668;
	// subfic r9,r11,58
	xer.ca = r11.u32 <= 58;
	ctx.r9.s64 = 58 - r11.s64;
	// srw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r9.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_8319B668:
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// beq cr6,0x8319b688
	if (cr6.eq) goto loc_8319B688;
	// cmplwi cr6,r10,21
	cr6.compare<uint32_t>(ctx.r10.u32, 21, xer);
	// ble cr6,0x8319b6bc
	if (!cr6.gt) goto loc_8319B6BC;
	// cmplwi cr6,r10,23
	cr6.compare<uint32_t>(ctx.r10.u32, 23, xer);
	// bgt cr6,0x8319b6bc
	if (cr6.gt) goto loc_8319B6BC;
	// addi r11,r11,5
	r11.s64 = r11.s64 + 5;
	// b 0x8319b68c
	goto loc_8319B68C;
loc_8319B688:
	// addi r11,r11,6
	r11.s64 = r11.s64 + 6;
loc_8319B68C:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// blt cr6,0x8319b69c
	if (cr6.lt) goto loc_8319B69C;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
loc_8319B69C:
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// blelr cr6
	if (!cr6.gt) return;
loc_8319B6BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B6C8"))) PPC_WEAK_FUNC(sub_8319B6C8);
PPC_FUNC_IMPL(__imp__sub_8319B6C8) {
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
	// rlwinm r11,r30,0,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r9,r11,r30
	ctx.r9.s64 = r30.s64 - r11.s64;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r9,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// slw r10,r8,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r11.u8 & 0x3F));
	// beq cr6,0x8319b714
	if (cr6.eq) goto loc_8319B714;
	// subfic r8,r11,32
	xer.ca = r11.u32 <= 32;
	ctx.r8.s64 = 32 - r11.s64;
	// srw r8,r9,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// slw r9,r9,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
loc_8319B714:
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r10,257
	cr6.compare<uint32_t>(ctx.r10.u32, 257, xer);
	// addi r4,r6,4
	ctx.r4.s64 = ctx.r6.s64 + 4;
	// bne cr6,0x8319b974
	if (!cr6.eq) goto loc_8319B974;
	// cmpwi cr6,r11,27
	cr6.compare<int32_t>(r11.s32, 27, xer);
	// blt cr6,0x8319b74c
	if (cr6.lt) goto loc_8319B74C;
	// addi r11,r11,-27
	r11.s64 = r11.s64 + -27;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// slw r10,r7,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r11.u8 & 0x3F));
	// bne cr6,0x8319b740
	if (!cr6.eq) goto loc_8319B740;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8319B740:
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// b 0x8319b754
	goto loc_8319B754;
loc_8319B74C:
	// addi r11,r11,5
	r11.s64 = r11.s64 + 5;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
loc_8319B754:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bne cr6,0x8319b77c
	if (!cr6.eq) goto loc_8319B77C;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// b 0x8319b784
	goto loc_8319B784;
loc_8319B77C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_8319B784:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8319b974
	if (!cr6.eq) goto loc_8319B974;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bne cr6,0x8319b7b4
	if (!cr6.eq) goto loc_8319B7B4;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// b 0x8319b7bc
	goto loc_8319B7BC;
loc_8319B7B4:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_8319B7BC:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8319b974
	if (cr6.eq) goto loc_8319B974;
	// rlwinm r10,r9,5,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0x1F;
	// cmpwi cr6,r11,27
	cr6.compare<int32_t>(r11.s32, 27, xer);
	// ble cr6,0x8319b7dc
	if (!cr6.gt) goto loc_8319B7DC;
	// subfic r8,r11,59
	xer.ca = r11.u32 <= 59;
	ctx.r8.s64 = 59 - r11.s64;
	// srw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r8.u8 & 0x3F));
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
loc_8319B7DC:
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// bne cr6,0x8319b974
	if (!cr6.eq) goto loc_8319B974;
	// addi r11,r11,5
	r11.s64 = r11.s64 + 5;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// blt cr6,0x8319b804
	if (cr6.lt) goto loc_8319B804;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// slw r8,r7,r11
	ctx.r8.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r11.u8 & 0x3F));
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// b 0x8319b808
	goto loc_8319B808;
loc_8319B804:
	// rlwinm r8,r9,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
loc_8319B808:
	// addi r9,r5,-1
	ctx.r9.s64 = ctx.r5.s64 + -1;
loc_8319B80C:
	// rlwinm r10,r8,11,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 11) & 0x7FF;
	// cmpwi cr6,r11,21
	cr6.compare<int32_t>(r11.s32, 21, xer);
	// ble cr6,0x8319b824
	if (!cr6.gt) goto loc_8319B824;
	// subfic r6,r11,53
	xer.ca = r11.u32 <= 53;
	ctx.r6.s64 = 53 - r11.s64;
	// srw r6,r7,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r6.u8 & 0x3F));
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
loc_8319B824:
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bne cr6,0x8319b85c
	if (!cr6.eq) goto loc_8319B85C;
	// addi r11,r11,11
	r11.s64 = r11.s64 + 11;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// blt cr6,0x8319b84c
	if (cr6.lt) goto loc_8319B84C;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// slw r8,r7,r11
	ctx.r8.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r11.u8 & 0x3F));
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// b 0x8319b850
	goto loc_8319B850;
loc_8319B84C:
	// rlwinm r8,r8,11,0,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 11) & 0xFFFFF800;
loc_8319B850:
	// addi r9,r9,-33
	ctx.r9.s64 = ctx.r9.s64 + -33;
	// cmpwi cr6,r9,33
	cr6.compare<int32_t>(ctx.r9.s32, 33, xer);
	// bgt cr6,0x8319b80c
	if (cr6.gt) goto loc_8319B80C;
loc_8319B85C:
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// bgt cr6,0x8319b974
	if (cr6.gt) goto loc_8319B974;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-11952
	ctx.r10.s64 = ctx.r10.s64 + -11952;
	// lhzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// subfic r9,r10,32
	xer.ca = ctx.r10.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r10.s64;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// blt cr6,0x8319b8c4
	if (cr6.lt) goto loc_8319B8C4;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8319b8b4
	if (cr6.eq) goto loc_8319B8B4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srw r10,r7,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// or r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 | ctx.r8.u64;
	// slw r10,r7,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r11.u8 & 0x3F));
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// b 0x8319b8c8
	goto loc_8319B8C8;
loc_8319B8B4:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// b 0x8319b8c8
	goto loc_8319B8C8;
loc_8319B8C4:
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
loc_8319B8C8:
	// srw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x8319b974
	if (!cr6.eq) goto loc_8319B974;
	// rlwinm r10,r10,5,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1F;
	// cmpwi cr6,r11,27
	cr6.compare<int32_t>(r11.s32, 27, xer);
	// ble cr6,0x8319b8f4
	if (!cr6.gt) goto loc_8319B8F4;
	// subfic r9,r11,59
	xer.ca = r11.u32 <= 59;
	ctx.r9.s64 = 59 - r11.s64;
	// srw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r9.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_8319B8F4:
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// bne cr6,0x8319b974
	if (!cr6.eq) goto loc_8319B974;
	// addi r11,r11,5
	r11.s64 = r11.s64 + 5;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// blt cr6,0x8319b910
	if (cr6.lt) goto loc_8319B910;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
loc_8319B910:
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = r11.s64 + -8;
	// subf r11,r30,r3
	r11.s64 = ctx.r3.s64 - r30.s64;
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// bgt cr6,0x8319b974
	if (cr6.gt) goto loc_8319B974;
	// li r5,204
	ctx.r5.s64 = 204;
	// subf r4,r11,r29
	ctx.r4.s64 = r29.s64 - r11.s64;
	// bl 0x8319b168
	sub_8319B168(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8319b974
	if (cr6.eq) goto loc_8319B974;
loc_8319B944:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8319b0b8
	sub_8319B0B8(ctx, base);
	// rlwinm r11,r3,0,29,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8319b980
	if (cr6.eq) goto loc_8319B980;
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// lbz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 6);
	// rlwinm r11,r11,1,29,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x6;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x8319b98c
	if (cr6.eq) goto loc_8319B98C;
loc_8319B974:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8319B980:
	// rlwinm r11,r3,0,25,25
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8319b9b8
	if (cr6.eq) goto loc_8319B9B8;
loc_8319B98C:
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// addi r3,r31,1
	ctx.r3.s64 = r31.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// li r5,204
	ctx.r5.s64 = 204;
	// subf r4,r11,r29
	ctx.r4.s64 = r29.s64 - r11.s64;
	// bl 0x8319b168
	sub_8319B168(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8319b944
	if (!cr6.eq) goto loc_8319B944;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8319B9B8:
	// rlwinm r11,r3,0,24,24
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8319b9e0
	if (cr6.eq) goto loc_8319B9E0;
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// ble cr6,0x8319ba0c
	if (!cr6.gt) goto loc_8319BA0C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8319B9E0:
	// rlwinm r11,r3,0,28,28
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8319b974
	if (cr6.eq) goto loc_8319B974;
	// lbz r11,7(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 7);
	// rlwinm r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8319b974
	if (cr6.eq) goto loc_8319B974;
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// bgt cr6,0x8319b974
	if (cr6.gt) goto loc_8319B974;
loc_8319BA0C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8319BA18"))) PPC_WEAK_FUNC(sub_8319BA18);
PPC_FUNC_IMPL(__imp__sub_8319BA18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi r10,r5,28
	ctx.r10.u64 = ctx.r5.u32 & 0xF;
	// rlwinm r11,r5,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// beq cr6,0x8319ba40
	if (cr6.eq) goto loc_8319BA40;
loc_8319BA2C:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// bne cr6,0x8319ba2c
	if (!cr6.eq) goto loc_8319BA2C;
loc_8319BA40:
	// rlwinm r10,r5,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_8319BA4C:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// bne cr6,0x8319ba4c
	if (!cr6.eq) goto loc_8319BA4C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BAE0"))) PPC_WEAK_FUNC(sub_8319BAE0);
PPC_FUNC_IMPL(__imp__sub_8319BAE0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x83198770
	sub_83198770(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8319bb1c
	if (cr6.eq) goto loc_8319BB1C;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,521
	ctx.r4.u64 = ctx.r4.u64 | 521;
	// bl 0x8319bd48
	sub_8319BD48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_8319BB1C:
	// lwz r11,5244(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 5244);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8319bb40
	if (!cr6.eq) goto loc_8319BB40;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831a1070
	sub_831A1070(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_8319BB40:
	// addi r3,r31,4976
	ctx.r3.s64 = r31.s64 + 4976;
	// lwz r29,4968(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 4968);
	// li r5,68
	ctx.r5.s64 = 68;
	// lwz r28,4972(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 4972);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831a3698
	sub_831A3698(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831a3fd8
	sub_831A3FD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831a4020
	sub_831A4020(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831a3a80
	sub_831A3A80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831a3e40
	sub_831A3E40(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831a32d8
	sub_831A32D8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// addi r4,r31,4828
	ctx.r4.s64 = r31.s64 + 4828;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r11,4968(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4968);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// lwz r11,4972(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4972);
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// stw r11,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r11.u32);
	// lhz r11,5040(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 5040);
	// sth r11,64(r30)
	PPC_STORE_U16(r30.u32 + 64, r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8319BBD8"))) PPC_WEAK_FUNC(sub_8319BBD8);
PPC_FUNC_IMPL(__imp__sub_8319BBD8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x83198770
	sub_83198770(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8319bc10
	if (cr6.eq) goto loc_8319BC10;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,522
	ctx.r4.u64 = ctx.r4.u64 | 522;
	// bl 0x8319bd48
	sub_8319BD48(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8319BC10:
	// lis r30,-253
	r30.s64 = -16580608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r30,r30,773
	r30.u64 = r30.u64 | 773;
	// bl 0x83199798
	sub_83199798(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8319bc74
	if (cr6.eq) goto loc_8319BC74;
loc_8319BC28:
	// andi. r11,r3,204
	r11.u64 = ctx.r3.u64 & 204;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8319bc70
	if (!cr6.eq) goto loc_8319BC70;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83199a78
	sub_83199A78(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x8319bc74
	if (!cr6.eq) goto loc_8319BC74;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83199798
	sub_83199798(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8319bc28
	if (!cr6.eq) goto loc_8319BC28;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8319bd48
	sub_8319BD48(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8319BC70:
	// li r30,0
	r30.s64 = 0;
loc_8319BC74:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8319bd48
	sub_8319BD48(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8319BC88"))) PPC_WEAK_FUNC(sub_8319BC88);
PPC_FUNC_IMPL(__imp__sub_8319BC88) {
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
	// bl 0x83198770
	sub_83198770(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8319bccc
	if (cr6.eq) goto loc_8319BCCC;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,529
	ctx.r4.u64 = ctx.r4.u64 | 529;
	// bl 0x8319bd48
	sub_8319BD48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8319BCCC:
	// li r11,1
	r11.s64 = 1;
	// lwz r10,5244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 5244);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// stw r11,5416(r31)
	PPC_STORE_U32(r31.u32 + 5416, r11.u32);
	// bne cr6,0x8319bce8
	if (!cr6.eq) goto loc_8319BCE8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
loc_8319BCE8:
	// lwz r3,5420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 5420);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8319bcf8
	if (cr6.eq) goto loc_8319BCF8;
	// bl 0x831a4168
	sub_831A4168(ctx, base);
loc_8319BCF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BD10"))) PPC_WEAK_FUNC(sub_8319BD10);
PPC_FUNC_IMPL(__imp__sub_8319BD10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8319BD34"))) PPC_WEAK_FUNC(sub_8319BD34);
PPC_FUNC_IMPL(__imp__sub_8319BD34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BD38"))) PPC_WEAK_FUNC(sub_8319BD38);
PPC_FUNC_IMPL(__imp__sub_8319BD38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31935
	r11.s64 = -2092892160;
	// addi r3,r11,1840
	ctx.r3.s64 = r11.s64 + 1840;
	// b 0x8318fc60
	sub_8318FC60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319BD48"))) PPC_WEAK_FUNC(sub_8319BD48);
PPC_FUNC_IMPL(__imp__sub_8319BD48) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8319bd70
	if (!cr6.eq) goto loc_8319BD70;
	// lis r11,-31935
	r11.s64 = -2092892160;
	// addi r3,r11,1840
	ctx.r3.s64 = r11.s64 + 1840;
	// b 0x8319bd74
	goto loc_8319BD74;
loc_8319BD70:
	// addi r3,r3,4956
	ctx.r3.s64 = ctx.r3.s64 + 4956;
loc_8319BD74:
	// bl 0x8319bd10
	sub_8319BD10(ctx, base);
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

__attribute__((alias("__imp__sub_8319BD90"))) PPC_WEAK_FUNC(sub_8319BD90);
PPC_FUNC_IMPL(__imp__sub_8319BD90) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8319bdc8
	if (!cr6.eq) goto loc_8319BDC8;
	// lis r11,-31935
	r11.s64 = -2092892160;
	// addi r11,r11,1840
	r11.s64 = r11.s64 + 1840;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8319BDC8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83198770
	sub_83198770(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8319bdf0
	if (cr6.eq) goto loc_8319BDF0;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,515
	ctx.r4.u64 = ctx.r4.u64 | 515;
	// bl 0x8319bd48
	sub_8319BD48(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8319BDF0:
	// addi r11,r31,4956
	r11.s64 = r31.s64 + 4956;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8319BE08"))) PPC_WEAK_FUNC(sub_8319BE08);
PPC_FUNC_IMPL(__imp__sub_8319BE08) {
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
	// bl 0x8319c690
	sub_8319C690(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8319be4c
	if (!cr6.eq) goto loc_8319BE4C;
	// bl 0x8319c6b8
	sub_8319C6B8(ctx, base);
	// lis r11,-31935
	r11.s64 = -2092892160;
	// std r3,1864(r11)
	PPC_STORE_U64(r11.u32 + 1864, ctx.r3.u64);
	// bl 0x8319c600
	sub_8319C600(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8319BE4C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8319be98
	if (cr6.eq) goto loc_8319BE98;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8319be98
	if (cr6.eq) goto loc_8319BE98;
	// lwz r11,4204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8319be98
	if (cr6.eq) goto loc_8319BE98;
	// lwz r3,4224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4224);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,1864(r10)
	PPC_STORE_U64(ctx.r10.u32 + 1864, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8319bebc
	goto loc_8319BEBC;
loc_8319BE98:
	// lis r11,-31930
	r11.s64 = -2092564480;
	// lis r9,-31935
	ctx.r9.s64 = -2092892160;
	// addi r11,r11,-21984
	r11.s64 = r11.s64 + -21984;
	// lwz r10,444(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 444);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,1864(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1864, ctx.r10.u64);
	// lwz r10,432(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// lwz r11,448(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 448);
	// mullw r11,r10,r11
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
loc_8319BEBC:
	// extsw r3,r11
	ctx.r3.s64 = r11.s32;
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

__attribute__((alias("__imp__sub_8319BED8"))) PPC_WEAK_FUNC(sub_8319BED8);
PPC_FUNC_IMPL(__imp__sub_8319BED8) {
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
	// lis r31,-31935
	r31.s64 = -2092892160;
	// ld r11,1864(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 1864);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// bne cr6,0x8319bf14
	if (!cr6.eq) goto loc_8319BF14;
	// bl 0x8319be08
	sub_8319BE08(ctx, base);
	// ld r3,1864(r31)
	ctx.r3.u64 = PPC_LOAD_U64(r31.u32 + 1864);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8319BF14:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BF30"))) PPC_WEAK_FUNC(sub_8319BF30);
PPC_FUNC_IMPL(__imp__sub_8319BF30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r11,0
	r11.s64 = 0;
	// clrldi r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 & 0x7FFFFFFFFFFFFFFF;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// std r10,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BF50"))) PPC_WEAK_FUNC(sub_8319BF50);
PPC_FUNC_IMPL(__imp__sub_8319BF50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ld r11,8(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmpd cr6,r4,r11
	cr6.compare<int64_t>(ctx.r4.s64, r11.s64, xer);
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// blt cr6,0x8319bf70
	if (cr6.lt) goto loc_8319BF70;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8319BF70:
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// std r10,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// cmpd cr6,r4,r11
	cr6.compare<int64_t>(ctx.r4.s64, r11.s64, xer);
	// ble cr6,0x8319bf84
	if (!cr6.gt) goto loc_8319BF84;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_8319BF84:
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BF98"))) PPC_WEAK_FUNC(sub_8319BF98);
PPC_FUNC_IMPL(__imp__sub_8319BF98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,-3
	ctx.r10.s64 = -3;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

