#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8314E4C0"))) PPC_WEAK_FUNC(sub_8314E4C0);
PPC_FUNC_IMPL(__imp__sub_8314E4C0) {
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
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x8314e510
	if (!cr6.eq) goto loc_8314E510;
	// li r11,-1
	r11.s64 = -1;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,23396
	ctx.r4.s64 = ctx.r10.s64 + 23396;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8314E510:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314e534
	if (cr6.eq) goto loc_8314E534;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8314E534:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314e560
	if (cr6.eq) goto loc_8314E560;
	// li r11,-1
	r11.s64 = -1;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,23356
	ctx.r4.s64 = ctx.r10.s64 + 23356;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8314E560:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314ced8
	sub_8314CED8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8314e598
	if (!cr6.eq) goto loc_8314E598;
	// li r11,-1
	r11.s64 = -1;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// addi r4,r10,23316
	ctx.r4.s64 = ctx.r10.s64 + 23316;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8314E598:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r11,21580
	ctx.r5.s64 = r11.s64 + 21580;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83167fd8
	sub_83167FD8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8314e5dc
	if (!cr6.eq) goto loc_8314E5DC;
	// li r11,-3
	r11.s64 = -3;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r10,23300
	ctx.r4.s64 = ctx.r10.s64 + 23300;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8314E5DC:
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bl 0x8314e0a8
	sub_8314E0A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8314e638
	if (!cr6.eq) goto loc_8314E638;
	// li r11,-1
	r11.s64 = -1;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// addi r4,r10,23260
	ctx.r4.s64 = ctx.r10.s64 + 23260;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8314E638:
	// li r11,2
	r11.s64 = 2;
	// stw r11,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8314E648"))) PPC_WEAK_FUNC(sub_8314E648);
PPC_FUNC_IMPL(__imp__sub_8314E648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r20{};
	PPCRegister r24{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
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
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x8314e760
	if (!cr6.eq) goto loc_8314E760;
	// lwz r3,320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 320);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r4,r11,-29624
	ctx.r4.s64 = r11.s64 + -29624;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bgt cr6,0x8314e748
	if (cr6.gt) goto loc_8314E748;
	// lis r12,-31979
	r12.s64 = -2095775744;
	// addi r12,r12,-6476
	r12.s64 = r12.s64 + -6476;
	// rlwinm r0,r3,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_8314E6C4;
	case 1:
		goto loc_8314E760;
	case 2:
		goto loc_8314E6EC;
	case 3:
		goto loc_8314E73C;
	default:
		__builtin_unreachable();
	}
	// lwz r24,-6460(r20)
	r24.u64 = PPC_LOAD_U32(r20.u32 + -6460);
	// lwz r24,-6304(r20)
	r24.u64 = PPC_LOAD_U32(r20.u32 + -6304);
	// lwz r24,-6420(r20)
	r24.u64 = PPC_LOAD_U32(r20.u32 + -6420);
	// lwz r24,-6340(r20)
	r24.u64 = PPC_LOAD_U32(r20.u32 + -6340);
loc_8314E6C4:
	// li r11,-1
	r11.s64 = -1;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,23548
	ctx.r4.s64 = ctx.r10.s64 + 23548;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r9,324(r31)
	PPC_STORE_U32(r31.u32 + 324, ctx.r9.u32);
	// b 0x8314e760
	goto loc_8314E760;
loc_8314E6EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314e0a8
	sub_8314E0A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8314e730
	if (!cr6.eq) goto loc_8314E730;
	// li r11,-1
	r11.s64 = -1;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r4,r10,23508
	ctx.r4.s64 = ctx.r10.s64 + 23508;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r7,324(r31)
	PPC_STORE_U32(r31.u32 + 324, ctx.r7.u32);
loc_8314E730:
	// li r11,2
	r11.s64 = 2;
	// stw r11,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r11.u32);
	// b 0x8314e760
	goto loc_8314E760;
loc_8314E73C:
	// li r11,3
	r11.s64 = 3;
	// stw r11,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r11.u32);
	// b 0x8314e760
	goto loc_8314E760;
loc_8314E748:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,23444
	ctx.r4.s64 = r11.s64 + 23444;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,324(r31)
	PPC_STORE_U32(r31.u32 + 324, ctx.r10.u32);
loc_8314E760:
	// lwz r3,324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314E780"))) PPC_WEAK_FUNC(sub_8314E780);
PPC_FUNC_IMPL(__imp__sub_8314E780) {
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8314e7cc
	if (cr6.eq) goto loc_8314E7CC;
	// li r11,-1
	r11.s64 = -1;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,23644
	ctx.r4.s64 = ctx.r10.s64 + 23644;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// b 0x8314e838
	goto loc_8314E838;
loc_8314E7CC:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314e7f4
	if (cr6.eq) goto loc_8314E7F4;
	// li r11,-1
	r11.s64 = -1;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,23604
	ctx.r4.s64 = ctx.r10.s64 + 23604;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// b 0x8314e838
	goto loc_8314E838;
loc_8314E7F4:
	// stw r4,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r5,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r5.u32);
	// bl 0x8314e0a8
	sub_8314E0A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8314e838
	if (!cr6.eq) goto loc_8314E838;
	// li r11,-1
	r11.s64 = -1;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r4,r10,23564
	ctx.r4.s64 = ctx.r10.s64 + 23564;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8314E838:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314E850"))) PPC_WEAK_FUNC(sub_8314E850);
PPC_FUNC_IMPL(__imp__sub_8314E850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-1056(r1)
	ea = -1056 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// li r31,0
	r31.s64 = 0;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// stw r31,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r31.u32);
	// addi r11,r1,224
	r11.s64 = ctx.r1.s64 + 224;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314E894:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314e894
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314E894;
	// addi r11,r1,256
	r11.s64 = ctx.r1.s64 + 256;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314E8B0:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314e8b0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314E8B0;
	// addi r11,r1,296
	r11.s64 = ctx.r1.s64 + 296;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314E8CC:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314e8cc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314E8CC;
	// addi r11,r1,328
	r11.s64 = ctx.r1.s64 + 328;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314E8E8:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314e8e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314E8E8;
	// addi r11,r1,364
	r11.s64 = ctx.r1.s64 + 364;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314E904:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314e904
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314E904;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8314deb8
	sub_8314DEB8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8314e938
	if (!cr6.eq) goto loc_8314E938;
	// li r11,-1
	r11.s64 = -1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// addi r1,r1,1056
	ctx.r1.s64 = ctx.r1.s64 + 1056;
	// b 0x831b0b60
	return;
loc_8314E938:
	// lwz r27,96(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83156c68
	sub_83156C68(ctx, base);
	// clrlwi r26,r3,16
	r26.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8314e9fc
	if (cr6.eq) goto loc_8314E9FC;
	// rlwinm r11,r28,7,0,24
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 7) & 0xFFFFFF80;
	// add r29,r11,r24
	r29.u64 = r11.u64 + r24.u64;
loc_8314E95C:
	// addi r5,r1,560
	ctx.r5.s64 = ctx.r1.s64 + 560;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83156cf0
	sub_83156CF0(ctx, base);
	// addi r5,r1,832
	ctx.r5.s64 = ctx.r1.s64 + 832;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x83156ba0
	sub_83156BA0(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8314e9d0
	if (cr6.eq) goto loc_8314E9D0;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
loc_8314E98C:
	// addi r10,r1,432
	ctx.r10.s64 = ctx.r1.s64 + 432;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_8314E994:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x8314e9b8
	if (cr6.eq) goto loc_8314E9B8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8314e994
	if (cr6.eq) goto loc_8314E994;
loc_8314E9B8:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8314e9d0
	if (cr6.eq) goto loc_8314E9D0;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// cmplw cr6,r7,r28
	cr6.compare<uint32_t>(ctx.r7.u32, r28.u32, xer);
	// blt cr6,0x8314e98c
	if (cr6.lt) goto loc_8314E98C;
loc_8314E9D0:
	// cmplw cr6,r7,r28
	cr6.compare<uint32_t>(ctx.r7.u32, r28.u32, xer);
	// bne cr6,0x8314e9f0
	if (!cr6.eq) goto loc_8314E9F0;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831b4fa0
	sub_831B4FA0(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,128
	r29.s64 = r29.s64 + 128;
loc_8314E9F0:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(r30.u32, r26.u32, xer);
	// blt cr6,0x8314e95c
	if (cr6.lt) goto loc_8314E95C;
loc_8314E9FC:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8314ea94
	if (!cr6.eq) goto loc_8314EA94;
	// lwz r29,92(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r30,r31
	r30.u64 = r31.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8314ea44
	if (cr6.eq) goto loc_8314EA44;
loc_8314EA24:
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// bne cr6,0x8314ea30
	if (!cr6.eq) goto loc_8314EA30;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_8314EA30:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8314ea24
	if (!cr6.eq) goto loc_8314EA24;
loc_8314EA44:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8314ea94
	if (cr6.eq) goto loc_8314EA94;
loc_8314EA4C:
	// addi r5,r1,688
	ctx.r5.s64 = ctx.r1.s64 + 688;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8314ba98
	sub_8314BA98(ctx, base);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x8314ea4c
	if (cr6.lt) goto loc_8314EA4C;
loc_8314EA94:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,1056
	ctx.r1.s64 = ctx.r1.s64 + 1056;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_8314EAA0"))) PPC_WEAK_FUNC(sub_8314EAA0);
PPC_FUNC_IMPL(__imp__sub_8314EAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r10,r11,17844
	ctx.r10.s64 = r11.s64 + 17844;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314EAB0"))) PPC_WEAK_FUNC(sub_8314EAB0);
PPC_FUNC_IMPL(__imp__sub_8314EAB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314eacc
	if (cr6.eq) goto loc_8314EACC;
loc_8314EABC:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8314eabc
	if (!cr6.eq) goto loc_8314EABC;
loc_8314EACC:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314eadc
	if (cr6.eq) goto loc_8314EADC;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
loc_8314EADC:
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314EAE8"))) PPC_WEAK_FUNC(sub_8314EAE8);
PPC_FUNC_IMPL(__imp__sub_8314EAE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314eb04
	if (cr6.eq) goto loc_8314EB04;
loc_8314EAF4:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8314eaf4
	if (!cr6.eq) goto loc_8314EAF4;
loc_8314EB04:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bne cr6,0x8314eb1c
	if (!cr6.eq) goto loc_8314EB1C;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// blr 
	return;
loc_8314EB1C:
	// addi r11,r10,4
	r11.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beq cr6,0x8314eb40
	if (cr6.eq) goto loc_8314EB40;
loc_8314EB2C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r10,4
	r11.s64 = ctx.r10.s64 + 4;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// bne cr6,0x8314eb2c
	if (!cr6.eq) goto loc_8314EB2C;
loc_8314EB40:
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314EB50"))) PPC_WEAK_FUNC(sub_8314EB50);
PPC_FUNC_IMPL(__imp__sub_8314EB50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314eb6c
	if (cr6.eq) goto loc_8314EB6C;
loc_8314EB5C:
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8314eb5c
	if (!cr6.eq) goto loc_8314EB5C;
loc_8314EB6C:
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314eb7c
	if (cr6.eq) goto loc_8314EB7C;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
loc_8314EB7C:
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314EB88"))) PPC_WEAK_FUNC(sub_8314EB88);
PPC_FUNC_IMPL(__imp__sub_8314EB88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314eba4
	if (cr6.eq) goto loc_8314EBA4;
loc_8314EB94:
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8314eb94
	if (!cr6.eq) goto loc_8314EB94;
loc_8314EBA4:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bne cr6,0x8314ebbc
	if (!cr6.eq) goto loc_8314EBBC;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// blr 
	return;
loc_8314EBBC:
	// addi r11,r10,8
	r11.s64 = ctx.r10.s64 + 8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beq cr6,0x8314ebe0
	if (cr6.eq) goto loc_8314EBE0;
loc_8314EBCC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r10,8
	r11.s64 = ctx.r10.s64 + 8;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// bne cr6,0x8314ebcc
	if (!cr6.eq) goto loc_8314EBCC;
loc_8314EBE0:
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314EBF0"))) PPC_WEAK_FUNC(sub_8314EBF0);
PPC_FUNC_IMPL(__imp__sub_8314EBF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314ec18
	if (cr6.eq) goto loc_8314EC18;
loc_8314EC08:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8314ec08
	if (!cr6.eq) goto loc_8314EC08;
loc_8314EC18:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_8314EC20:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8314ec20
	if (!cr6.eq) goto loc_8314EC20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314EC38"))) PPC_WEAK_FUNC(sub_8314EC38);
PPC_FUNC_IMPL(__imp__sub_8314EC38) {
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
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8314ec64
	if (!cr6.eq) goto loc_8314EC64;
loc_8314EC5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8314ecdc
	goto loc_8314ECDC;
loc_8314EC64:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r5,r11,23692
	ctx.r5.s64 = r11.s64 + 23692;
	// bl 0x83143c50
	sub_83143C50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8314ec5c
	if (cr6.eq) goto loc_8314EC5C;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314ec98
	if (cr6.eq) goto loc_8314EC98;
	// bl 0x8314eb50
	sub_8314EB50(ctx, base);
	// b 0x8314ecb0
	goto loc_8314ECB0;
loc_8314EC98:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314eca8
	if (cr6.eq) goto loc_8314ECA8;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
loc_8314ECA8:
	// stw r4,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// stw r31,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r31.u32);
loc_8314ECB0:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314ecc4
	if (cr6.eq) goto loc_8314ECC4;
	// bl 0x8314eab0
	sub_8314EAB0(ctx, base);
	// b 0x8314ecd8
	goto loc_8314ECD8;
loc_8314ECC4:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314ecd4
	if (cr6.eq) goto loc_8314ECD4;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
loc_8314ECD4:
	// stw r4,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r4.u32);
loc_8314ECD8:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_8314ECDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314ECF8"))) PPC_WEAK_FUNC(sub_8314ECF8);
PPC_FUNC_IMPL(__imp__sub_8314ECF8) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8314ed34
	if (cr6.eq) goto loc_8314ED34;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8314eb88
	sub_8314EB88(ctx, base);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8314ed28
	if (cr6.eq) goto loc_8314ED28;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x8314eae8
	sub_8314EAE8(ctx, base);
loc_8314ED28:
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x83168618
	sub_83168618(ctx, base);
loc_8314ED34:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314ED48"))) PPC_WEAK_FUNC(sub_8314ED48);
PPC_FUNC_IMPL(__imp__sub_8314ED48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r11,-30664(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -30664);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314ED60"))) PPC_WEAK_FUNC(sub_8314ED60);
PPC_FUNC_IMPL(__imp__sub_8314ED60) {
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
	PPCRegister f31{};
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
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r11,r26,1
	r11.s64 = r26.s64 + 1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r28,1
	r28.s64 = 1;
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(r26.u32, 1, xer);
	// lfd f0,-3744(r10)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -3744);
	// lfd f13,-8872(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + -8872);
	// stfd f0,0(r31)
	PPC_STORE_U64(r31.u32 + 0, f0.u64);
	// stfd f13,8(r31)
	PPC_STORE_U64(r31.u32 + 8, ctx.f13.u64);
	// blt cr6,0x8314ee20
	if (cr6.lt) goto loc_8314EE20;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r27,r31,16
	r27.s64 = r31.s64 + 16;
	// lfd f31,-19272(r11)
	f31.u64 = PPC_LOAD_U64(r11.u32 + -19272);
loc_8314EDC0:
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8314ee0c
	if (cr6.eq) goto loc_8314EE0C;
	// mr r31,r27
	r31.u64 = r27.u64;
loc_8314EDD0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83159c30
	sub_83159C30(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,-16
	ctx.r4.s64 = r31.s64 + -16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83159b90
	sub_83159B90(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83159b58
	sub_83159B58(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,-16
	r31.s64 = r31.s64 + -16;
	// bne 0x8314edd0
	if (!cr0.eq) goto loc_8314EDD0;
loc_8314EE0C:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(r28.u32, r26.u32, xer);
	// ble cr6,0x8314edc0
	if (!cr6.gt) goto loc_8314EDC0;
loc_8314EE20:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8314EE30"))) PPC_WEAK_FUNC(sub_8314EE30);
PPC_FUNC_IMPL(__imp__sub_8314EE30) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(r31.u32, 8, xer);
	// ble cr6,0x8314ee68
	if (!cr6.gt) goto loc_8314EE68;
loc_8314EE5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831b0b70
	return;
loc_8314EE68:
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// addi r10,r28,1
	ctx.r10.s64 = r28.s64 + 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfd f0,-3744(r9)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + -3744);
	// stfd f0,0(r30)
	PPC_STORE_U64(r30.u32 + 0, f0.u64);
	// bl 0x8314ed60
	sub_8314ED60(ctx, base);
	// addi r8,r31,1
	ctx.r8.s64 = r31.s64 + 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,4
	cr6.compare<int32_t>(ctx.r8.s32, 4, xer);
	// blt cr6,0x8314ef08
	if (cr6.lt) goto loc_8314EF08;
	// addi r10,r31,1
	ctx.r10.s64 = r31.s64 + 1;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r30,16
	ctx.r10.s64 = r30.s64 + 16;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_8314EED0:
	// lfd f0,-16(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -16);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// lfd f13,0(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// lfd f12,16(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// lfd f11,32(r11)
	ctx.f11.u64 = PPC_LOAD_U64(r11.u32 + 32);
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
	// stfd f0,-16(r10)
	PPC_STORE_U64(ctx.r10.u32 + -16, f0.u64);
	// stfd f13,-8(r10)
	PPC_STORE_U64(ctx.r10.u32 + -8, ctx.f13.u64);
	// stfd f12,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.f12.u64);
	// stfd f11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.f11.u64);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// bne 0x8314eed0
	if (!cr0.eq) goto loc_8314EED0;
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, xer);
	// bgt cr6,0x8314ef3c
	if (cr6.gt) goto loc_8314EF3C;
loc_8314EF08:
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r9,r31
	r11.s64 = r31.s64 - ctx.r9.s64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + r30.u64;
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_8314EF24:
	// lfd f0,0(r10)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stfd f0,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, f0.u64);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bne 0x8314ef24
	if (!cr0.eq) goto loc_8314EF24;
loc_8314EF3C:
	// cmplwi cr6,r28,8
	cr6.compare<uint32_t>(r28.u32, 8, xer);
	// bgt cr6,0x8314ee5c
	if (cr6.gt) goto loc_8314EE5C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8314ed60
	sub_8314ED60(ctx, base);
	// addi r11,r28,1
	r11.s64 = r28.s64 + 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x8314efb0
	if (cr6.lt) goto loc_8314EFB0;
	// addi r10,r28,1
	ctx.r10.s64 = r28.s64 + 1;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r27,16
	ctx.r10.s64 = r27.s64 + 16;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_8314EF78:
	// lfd f0,-16(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -16);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// lfd f13,0(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// lfd f12,16(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// lfd f11,32(r11)
	ctx.f11.u64 = PPC_LOAD_U64(r11.u32 + 32);
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
	// stfd f0,-16(r10)
	PPC_STORE_U64(ctx.r10.u32 + -16, f0.u64);
	// stfd f13,-8(r10)
	PPC_STORE_U64(ctx.r10.u32 + -8, ctx.f13.u64);
	// stfd f12,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.f12.u64);
	// stfd f11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.f11.u64);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// bne 0x8314ef78
	if (!cr0.eq) goto loc_8314EF78;
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, r28.u32, xer);
	// bgt cr6,0x8314efe4
	if (cr6.gt) goto loc_8314EFE4;
loc_8314EFB0:
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r9,r28
	r11.s64 = r28.s64 - ctx.r9.s64;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r9,r7,r27
	ctx.r9.u64 = ctx.r7.u64 + r27.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_8314EFCC:
	// lfd f0,0(r10)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stfd f0,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, f0.u64);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bne 0x8314efcc
	if (!cr0.eq) goto loc_8314EFCC;
loc_8314EFE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8314EFF0"))) PPC_WEAK_FUNC(sub_8314EFF0);
PPC_FUNC_IMPL(__imp__sub_8314EFF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// addi r12,r1,-80
	r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831b1438
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// add r10,r26,r27
	ctx.r10.u64 = r26.u64 + r27.u64;
	// lfd f28,-3744(r11)
	ctx.fpscr.disableFlushMode();
	f28.u64 = PPC_LOAD_U64(r11.u32 + -3744);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// fdiv f31,f28,f2
	f31.f64 = f28.f64 / ctx.f2.f64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// ble cr6,0x8314f044
	if (!cr6.gt) goto loc_8314F044;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// addi r12,r1,-80
	r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831b1484
	// b 0x831b0b64
	return;
loc_8314F044:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfd f1,96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f1.u64);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stfd f31,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, f31.u64);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// lfd f30,-8872(r11)
	f30.u64 = PPC_LOAD_U64(r11.u32 + -8872);
	// lfd f29,-18480(r10)
	f29.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18480);
	// stfd f30,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, f30.u64);
	// stfd f30,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, f30.u64);
	// beq cr6,0x8314f108
	if (cr6.eq) goto loc_8314F108;
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// subf r28,r4,r11
	r28.s64 = r11.s64 - ctx.r4.s64;
	// subf r25,r4,r24
	r25.s64 = r24.s64 - ctx.r4.s64;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_8314F080:
	// lfd f0,8(r30)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fmul f13,f0,f31
	ctx.f13.f64 = f0.f64 * f31.f64;
	// lfd f12,0(r30)
	ctx.f12.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// fnmsub f11,f12,f31,f29
	ctx.f11.f64 = -(ctx.f12.f64 * f31.f64 - f29.f64);
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// bl 0x83159bd0
	sub_83159BD0(ctx, base);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// add r10,r28,r30
	ctx.r10.u64 = r28.u64 + r30.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// stdx r9,r28,r30
	PPC_STORE_U64(r28.u32 + r30.u32, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// bl 0x83159b90
	sub_83159B90(ctx, base);
	// lfd f9,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfd f8,8(r30)
	ctx.f8.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// fmadd f7,f9,f31,f29
	ctx.f7.f64 = ctx.f9.f64 * f31.f64 + f29.f64;
	// fmul f6,f8,f31
	ctx.f6.f64 = ctx.f8.f64 * f31.f64;
	// stfd f7,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f7.u64);
	// stfd f6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f6.u64);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// add r3,r25,r30
	ctx.r3.u64 = r25.u64 + r30.u64;
	// bl 0x83159bd0
	sub_83159BD0(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// bne 0x8314f080
	if (!cr0.eq) goto loc_8314F080;
loc_8314F108:
	// lwz r25,620(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8314f1ac
	if (cr6.eq) goto loc_8314F1AC;
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// subf r28,r31,r25
	r28.s64 = r25.s64 - r31.s64;
	// subf r29,r31,r11
	r29.s64 = r11.s64 - r31.s64;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_8314F124:
	// lfd f0,8(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// fmul f13,f0,f31
	ctx.f13.f64 = f0.f64 * f31.f64;
	// lfd f12,0(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// fnmsub f11,f12,f31,f29
	ctx.f11.f64 = -(ctx.f12.f64 * f31.f64 - f29.f64);
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// bl 0x83159bd0
	sub_83159BD0(ctx, base);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// add r10,r29,r31
	ctx.r10.u64 = r29.u64 + r31.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// stdx r9,r29,r31
	PPC_STORE_U64(r29.u32 + r31.u32, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// bl 0x83159b90
	sub_83159B90(ctx, base);
	// lfd f9,0(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfd f8,8(r31)
	ctx.f8.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// fmadd f7,f9,f31,f29
	ctx.f7.f64 = ctx.f9.f64 * f31.f64 + f29.f64;
	// fmul f6,f8,f31
	ctx.f6.f64 = ctx.f8.f64 * f31.f64;
	// stfd f7,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f7.u64);
	// stfd f6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f6.u64);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// add r3,r28,r31
	ctx.r3.u64 = r28.u64 + r31.u64;
	// bl 0x83159bd0
	sub_83159BD0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x8314f124
	if (!cr0.eq) goto loc_8314F124;
loc_8314F1AC:
	// lwz r5,612(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r6,628(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// stfd f0,0(r23)
	PPC_STORE_U64(r23.u32 + 0, f0.u64);
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(r26.u32, r27.u32, xer);
	// stw r26,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r26.u32);
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r27.u32);
	// ble cr6,0x8314f234
	if (!cr6.gt) goto loc_8314F234;
	// subf. r7,r27,r26
	ctx.r7.s64 = r26.s64 - r27.s64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x8314f214
	if (cr0.eq) goto loc_8314F214;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// rlwinm r11,r27,4,0,27
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r1,168
	ctx.r8.s64 = ctx.r1.s64 + 168;
	// subf r9,r25,r10
	ctx.r9.s64 = ctx.r10.s64 - r25.s64;
	// lfd f0,-19272(r5)
	f0.u64 = PPC_LOAD_U64(ctx.r5.u32 + -19272);
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// subf r8,r25,r8
	ctx.r8.s64 = ctx.r8.s64 - r25.s64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8314F1F8:
	// stfd f0,0(r11)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r11.u32 + 0, f0.u64);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stfd f30,8(r11)
	PPC_STORE_U64(r11.u32 + 8, f30.u64);
	// stfdx f28,r9,r11
	PPC_STORE_U64(ctx.r9.u32 + r11.u32, f28.u64);
	// stfdx f30,r8,r11
	PPC_STORE_U64(ctx.r8.u32 + r11.u32, f30.u64);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bne 0x8314f1f8
	if (!cr0.eq) goto loc_8314F1F8;
loc_8314F214:
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// addi r12,r1,-80
	r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831b1484
	// b 0x831b0b64
	return;
loc_8314F234:
	// bge cr6,0x8314f28c
	if (!cr6.lt) goto loc_8314F28C;
	// subf. r7,r26,r27
	ctx.r7.s64 = r27.s64 - r26.s64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x8314f280
	if (cr0.eq) goto loc_8314F280;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// rlwinm r11,r26,4,0,27
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r1,168
	ctx.r8.s64 = ctx.r1.s64 + 168;
	// subf r9,r24,r10
	ctx.r9.s64 = ctx.r10.s64 - r24.s64;
	// lfd f0,-19272(r6)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r6.u32 + -19272);
	// add r11,r11,r24
	r11.u64 = r11.u64 + r24.u64;
	// subf r8,r24,r8
	ctx.r8.s64 = ctx.r8.s64 - r24.s64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8314F264:
	// stfd f0,0(r11)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r11.u32 + 0, f0.u64);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stfd f30,8(r11)
	PPC_STORE_U64(r11.u32 + 8, f30.u64);
	// stfdx f28,r9,r11
	PPC_STORE_U64(ctx.r9.u32 + r11.u32, f28.u64);
	// stfdx f30,r8,r11
	PPC_STORE_U64(ctx.r8.u32 + r11.u32, f30.u64);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bne 0x8314f264
	if (!cr0.eq) goto loc_8314F264;
loc_8314F280:
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
loc_8314F28C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// addi r12,r1,-80
	r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831b1484
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_8314F2A0"))) PPC_WEAK_FUNC(sub_8314F2A0);
PPC_FUNC_IMPL(__imp__sub_8314F2A0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// li r3,2
	ctx.r3.s64 = 2;
	// lfd f0,-18712(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -18712);
	// fmul f11,f1,f0
	ctx.f11.f64 = ctx.f1.f64 * f0.f64;
	// lfd f13,-17960(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -17960);
	// fmul f10,f2,f0
	ctx.f10.f64 = ctx.f2.f64 * f0.f64;
	// lfd f12,-8872(r4)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r4.u32 + -8872);
	// fmul f9,f10,f11
	ctx.f9.f64 = ctx.f10.f64 * ctx.f11.f64;
	// fsub f0,f10,f11
	f0.f64 = ctx.f10.f64 - ctx.f11.f64;
	// stfd f0,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, f0.u64);
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// fsqrt f8,f9
	ctx.f8.f64 = sqrt(ctx.f9.f64);
	// fmul f7,f8,f8
	ctx.f7.f64 = ctx.f8.f64 * ctx.f8.f64;
	// fmul f6,f7,f13
	ctx.f6.f64 = ctx.f7.f64 * ctx.f13.f64;
	// fmsub f13,f0,f0,f6
	ctx.f13.f64 = f0.f64 * f0.f64 - ctx.f6.f64;
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x8314f330
	if (!cr6.gt) goto loc_8314F330;
	// fsqrt f11,f13
	ctx.f11.f64 = sqrt(ctx.f13.f64);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stfd f12,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.f12.u64);
	// stfd f12,24(r6)
	PPC_STORE_U64(ctx.r6.u32 + 24, ctx.f12.u64);
	// lfd f13,-6088(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + -6088);
	// li r11,1
	r11.s64 = 1;
	// fneg f10,f0
	ctx.f10.u64 = f0.u64 ^ 0x8000000000000000;
	// fsub f9,f11,f0
	ctx.f9.f64 = ctx.f11.f64 - f0.f64;
	// fsub f8,f10,f11
	ctx.f8.f64 = ctx.f10.f64 - ctx.f11.f64;
	// fmul f7,f9,f13
	ctx.f7.f64 = ctx.f9.f64 * ctx.f13.f64;
	// stfd f7,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.f7.u64);
	// fmul f6,f8,f13
	ctx.f6.f64 = ctx.f8.f64 * ctx.f13.f64;
	// stfd f6,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, ctx.f6.u64);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stfd f12,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.f12.u64);
	// stfd f12,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.f12.u64);
	// blr 
	return;
loc_8314F330:
	// fneg f10,f13
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfd f11,-30736(r11)
	ctx.f11.u64 = PPC_LOAD_U64(r11.u32 + -30736);
	// li r11,1
	r11.s64 = 1;
	// lfd f13,-6088(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -6088);
	// fmul f9,f0,f11
	ctx.f9.f64 = f0.f64 * ctx.f11.f64;
	// stfd f9,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.f9.u64);
	// stfd f9,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, ctx.f9.u64);
	// fsqrts f8,f10
	ctx.f8.f64 = double(float(sqrt(ctx.f10.f64)));
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fmul f6,f8,f13
	ctx.f6.f64 = ctx.f8.f64 * ctx.f13.f64;
	// stfd f6,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.f6.u64);
	// fmul f5,f7,f13
	ctx.f5.f64 = ctx.f7.f64 * ctx.f13.f64;
	// stfd f5,24(r6)
	PPC_STORE_U64(ctx.r6.u32 + 24, ctx.f5.u64);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stfd f12,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.f12.u64);
	// stfd f12,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.f12.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314F380"))) PPC_WEAK_FUNC(sub_8314F380);
PPC_FUNC_IMPL(__imp__sub_8314F380) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831b142c
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// fmr f27,f2
	f27.f64 = ctx.f2.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f26,f3
	f26.f64 = ctx.f3.f64;
	// addi r9,r10,17860
	ctx.r9.s64 = ctx.r10.s64 + 17860;
	// li r30,0
	r30.s64 = 0;
	// li r5,128
	ctx.r5.s64 = 128;
	// lfd f30,-3744(r11)
	f30.u64 = PPC_LOAD_U64(r11.u32 + -3744);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfd f30,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, f30.u64);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r30,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, r30.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// fdiv f25,f30,f29
	ctx.fpscr.disableFlushMode();
	f25.f64 = f30.f64 / f29.f64;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lfd f31,-19256(r8)
	f31.u64 = PPC_LOAD_U64(ctx.r8.u32 + -19256);
	// fmul f0,f25,f27
	f0.f64 = f25.f64 * f27.f64;
	// fmul f1,f0,f31
	ctx.f1.f64 = f0.f64 * f31.f64;
	// bl 0x831b4448
	sub_831B4448(ctx, base);
	// fmul f13,f25,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f25.f64 * f31.f64;
	// fmul f12,f25,f26
	ctx.f12.f64 = f25.f64 * f26.f64;
	// fdiv f28,f1,f13
	f28.f64 = ctx.f1.f64 / ctx.f13.f64;
	// fmul f1,f12,f31
	ctx.f1.f64 = ctx.f12.f64 * f31.f64;
	// bl 0x831b4448
	sub_831B4448(ctx, base);
	// fmul f11,f25,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = f25.f64 * f31.f64;
	// fcmpu cr6,f27,f26
	cr6.compare(f27.f64, f26.f64);
	// fdiv f2,f1,f11
	ctx.f2.f64 = ctx.f1.f64 / ctx.f11.f64;
	// bne cr6,0x8314f44c
	if (!cr6.eq) goto loc_8314F44C;
	// li r11,3
	r11.s64 = 3;
	// stfd f30,296(r31)
	PPC_STORE_U64(r31.u32 + 296, f30.u64);
	// stfd f30,384(r31)
	PPC_STORE_U64(r31.u32 + 384, f30.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,304(r31)
	PPC_STORE_U32(r31.u32 + 304, r11.u32);
	// stw r11,376(r31)
	PPC_STORE_U32(r31.u32 + 376, r11.u32);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831b1478
	// b 0x831b0b7c
	return;
loc_8314F44C:
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// addi r8,r1,136
	ctx.r8.s64 = ctx.r1.s64 + 136;
	// addi r7,r1,264
	ctx.r7.s64 = ctx.r1.s64 + 264;
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// bl 0x8314f2a0
	sub_8314F2A0(ctx, base);
	// addi r30,r31,168
	r30.s64 = r31.s64 + 168;
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f29.f64;
	// addi r8,r31,160
	ctx.r8.s64 = r31.s64 + 160;
	// addi r29,r31,32
	r29.s64 = r31.s64 + 32;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r9,r31,16
	ctx.r9.s64 = r31.s64 + 16;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lfd f1,120(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// lwz r5,264(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// bl 0x8314eff0
	sub_8314EFF0(ctx, base);
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// lfd f0,16(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stfd f0,296(r31)
	PPC_STORE_U64(r31.u32 + 296, f0.u64);
	// addi r11,r4,1
	r11.s64 = ctx.r4.s64 + 1;
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// stw r11,304(r31)
	PPC_STORE_U32(r31.u32 + 304, r11.u32);
	// addi r8,r31,384
	ctx.r8.s64 = r31.s64 + 384;
	// stw r10,376(r31)
	PPC_STORE_U32(r31.u32 + 376, ctx.r10.u32);
	// addi r7,r31,312
	ctx.r7.s64 = r31.s64 + 312;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8314ee30
	sub_8314EE30(ctx, base);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r3,r8,1
	ctx.r3.u64 = ctx.r8.u64 ^ 1;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831b1478
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8314F4F8"))) PPC_WEAK_FUNC(sub_8314F4F8);
PPC_FUNC_IMPL(__imp__sub_8314F4F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// bl 0x831b0b14
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4400(r1)
	ea = -4400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// li r9,128
	ctx.r9.s64 = 128;
	// li r26,0
	r26.s64 = 0;
	// li r23,8
	r23.s64 = 8;
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r26.u32);
	// lfs f0,-9876(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9876);
	f0.f64 = double(temp.f32);
	// stw r23,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r23.u32);
	// stfs f0,172(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// mr r11,r26
	r11.u64 = r26.u64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
loc_8314F53C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r10,r10,516
	ctx.r10.s64 = ctx.r10.s64 + 516;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x8314f53c
	if (cr6.lt) goto loc_8314F53C;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314f6ec
	if (cr6.eq) goto loc_8314F6EC;
	// addi r31,r11,-4
	r31.s64 = r11.s64 + -4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8314f6ec
	if (cr6.eq) goto loc_8314F6EC;
	// li r24,1
	r24.s64 = 1;
loc_8314F574:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r25,r11,-4
	r25.s64 = r11.s64 + -4;
	// bne cr6,0x8314f588
	if (!cr6.eq) goto loc_8314F588;
	// mr r25,r26
	r25.u64 = r26.u64;
loc_8314F588:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8314f6e0
	if (cr6.eq) goto loc_8314F6E0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83159c50
	sub_83159C50(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r29,r28
	r29.u64 = r28.u64;
	// subf r27,r28,r11
	r27.s64 = r11.s64 - r28.s64;
loc_8314F5C4:
	// lwz r11,160(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8314f5d8
	if (!cr6.lt) goto loc_8314F5D8;
	// lwzx r4,r27,r29
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
loc_8314F5D8:
	// lwz r11,64(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 64);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8314f5f0
	if (cr6.lt) goto loc_8314F5F0;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// b 0x8314f5f8
	goto loc_8314F5F8;
loc_8314F5F0:
	// lwz r10,72(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 72);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
loc_8314F5F8:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8314f6d0
	if (cr6.eq) goto loc_8314F6D0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314f6d0
	if (cr6.eq) goto loc_8314F6D0;
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// lbzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8314f6d0
	if (cr6.eq) goto loc_8314F6D0;
	// add r31,r30,r28
	r31.u64 = r30.u64 + r28.u64;
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8314f634
	if (!cr6.eq) goto loc_8314F634;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// b 0x8314f6cc
	goto loc_8314F6CC;
loc_8314F634:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x8314f6a0
	if (cr6.lt) goto loc_8314F6A0;
	// addi r11,r10,-4
	r11.s64 = ctx.r10.s64 + -4;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8314F650:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + f0.f64));
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// lfs f5,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// stfs f6,8(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f4,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfs f3,12(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bne 0x8314f650
	if (!cr0.eq) goto loc_8314F650;
loc_8314F6A0:
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x8314f6cc
	if (!cr6.lt) goto loc_8314F6CC;
	// subf r11,r9,r10
	r11.s64 = ctx.r10.s64 - ctx.r9.s64;
loc_8314F6AC:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bne 0x8314f6ac
	if (!cr0.eq) goto loc_8314F6AC;
loc_8314F6CC:
	// stb r24,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r24.u8);
loc_8314F6D0:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r30,8
	cr6.compare<uint32_t>(r30.u32, 8, xer);
	// blt cr6,0x8314f5c4
	if (cr6.lt) goto loc_8314F5C4;
loc_8314F6E0:
	// mr r31,r25
	r31.u64 = r25.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x8314f574
	if (!cr6.eq) goto loc_8314F574;
loc_8314F6EC:
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r11,r26
	r11.u64 = r26.u64;
	// stw r23,68(r28)
	PPC_STORE_U32(r28.u32 + 68, r23.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8314f71c
	if (cr6.eq) goto loc_8314F71C;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
loc_8314F704:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r26,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r26.u32);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8314f704
	if (cr6.lt) goto loc_8314F704;
loc_8314F71C:
	// addi r1,r1,4400
	ctx.r1.s64 = ctx.r1.s64 + 4400;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_8314F728"))) PPC_WEAK_FUNC(sub_8314F728);
PPC_FUNC_IMPL(__imp__sub_8314F728) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,23736
	ctx.r5.s64 = r11.s64 + 23736;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314f798
	if (cr6.eq) goto loc_8314F798;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r31.u32);
	// addi r9,r10,23716
	ctx.r9.s64 = ctx.r10.s64 + 23716;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r31,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r31.u32);
	// stw r29,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8314F798:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,23724
	ctx.r4.s64 = r11.s64 + 23724;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8314F7B8"))) PPC_WEAK_FUNC(sub_8314F7B8);
PPC_FUNC_IMPL(__imp__sub_8314F7B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,96
	ctx.r5.s64 = 96;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x831b0ed0
	sub_831B0ED0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314F7D0"))) PPC_WEAK_FUNC(sub_8314F7D0);
PPC_FUNC_IMPL(__imp__sub_8314F7D0) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r10,r11,23716
	ctx.r10.s64 = r11.s64 + 23716;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x8314eaa0
	sub_8314EAA0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8314f818
	if (cr6.eq) goto loc_8314F818;
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8314F818:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314F830"))) PPC_WEAK_FUNC(sub_8314F830);
PPC_FUNC_IMPL(__imp__sub_8314F830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r7,r9,23744
	ctx.r7.s64 = ctx.r9.s64 + 23744;
	// addi r10,r3,36
	ctx.r10.s64 = ctx.r3.s64 + 36;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// li r31,128
	r31.s64 = 128;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// lfs f0,-9876(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -9876);
	f0.f64 = double(temp.f32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// addi r8,r10,96
	ctx.r8.s64 = ctx.r10.s64 + 96;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// stfs f0,112(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stw r6,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r6.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, r11.u32);
	// stw r31,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, r31.u32);
loc_8314F894:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// lwz r6,64(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// addi r8,r8,516
	ctx.r8.s64 = ctx.r8.s64 + 516;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// blt cr6,0x8314f894
	if (cr6.lt) goto loc_8314F894;
	// addi r10,r3,8388
	ctx.r10.s64 = ctx.r3.s64 + 8388;
	// stfs f0,8464(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8464, temp.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,8456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8456, r11.u32);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// stw r31,8460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8460, r31.u32);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r6,8452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8452, ctx.r6.u32);
	// addi r8,r10,96
	ctx.r8.s64 = ctx.r10.s64 + 96;
loc_8314F8D4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// lwz r5,64(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// addi r8,r8,516
	ctx.r8.s64 = ctx.r8.s64 + 516;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// blt cr6,0x8314f8d4
	if (cr6.lt) goto loc_8314F8D4;
	// addi r10,r3,12612
	ctx.r10.s64 = ctx.r3.s64 + 12612;
	// stfs f0,12688(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12688, temp.u32);
	// stw r11,12680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12680, r11.u32);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// stw r31,12684(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12684, r31.u32);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r6,12676(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12676, ctx.r6.u32);
	// addi r8,r10,96
	ctx.r8.s64 = ctx.r10.s64 + 96;
loc_8314F910:
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,516
	ctx.r8.s64 = ctx.r8.s64 + 516;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lwz r6,64(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// blt cr6,0x8314f910
	if (cr6.lt) goto loc_8314F910;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,16836(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16836, r11.u32);
	// stw r11,16840(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16840, r11.u32);
	// stw r11,16844(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16844, r11.u32);
	// stw r11,16848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16848, r11.u32);
	// stw r10,16852(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16852, ctx.r10.u32);
	// stw r11,16856(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16856, r11.u32);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314F950"))) PPC_WEAK_FUNC(sub_8314F950);
PPC_FUNC_IMPL(__imp__sub_8314F950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,23744
	ctx.r9.s64 = ctx.r10.s64 + 23744;
	// addi r7,r3,12612
	ctx.r7.s64 = ctx.r3.s64 + 12612;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r8,12676(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12676);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// ble cr6,0x8314f990
	if (!cr6.gt) goto loc_8314F990;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_8314F978:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// lwz r8,64(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x8314f978
	if (cr6.lt) goto loc_8314F978;
loc_8314F990:
	// stw r11,64(r7)
	PPC_STORE_U32(ctx.r7.u32 + 64, r11.u32);
	// addi r8,r3,8388
	ctx.r8.s64 = ctx.r3.s64 + 8388;
	// lwz r9,8452(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8452);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ble cr6,0x8314f9c4
	if (!cr6.gt) goto loc_8314F9C4;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8314F9AC:
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r7,64(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x8314f9ac
	if (cr6.lt) goto loc_8314F9AC;
loc_8314F9C4:
	// stw r11,64(r8)
	PPC_STORE_U32(ctx.r8.u32 + 64, r11.u32);
	// addi r7,r3,36
	ctx.r7.s64 = ctx.r3.s64 + 36;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ble cr6,0x8314f9f8
	if (!cr6.gt) goto loc_8314F9F8;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_8314F9E0:
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r8,64(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x8314f9e0
	if (cr6.lt) goto loc_8314F9E0;
loc_8314F9F8:
	// stw r11,64(r7)
	PPC_STORE_U32(ctx.r7.u32 + 64, r11.u32);
	// b 0x8314eaa0
	sub_8314EAA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314FA00"))) PPC_WEAK_FUNC(sub_8314FA00);
PPC_FUNC_IMPL(__imp__sub_8314FA00) {
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
	// lwz r11,16848(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16848);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314fa24
	if (cr6.eq) goto loc_8314FA24;
loc_8314FA20:
	// b 0x8314fa20
	goto loc_8314FA20;
loc_8314FA24:
	// stw r4,16848(r31)
	PPC_STORE_U32(r31.u32 + 16848, ctx.r4.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,16836(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16836);
	// bl 0x8314eab0
	sub_8314EAB0(ctx, base);
	// lwz r4,16840(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16840);
	// lwz r3,16848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16848);
	// bl 0x8314eb50
	sub_8314EB50(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314FA58"))) PPC_WEAK_FUNC(sub_8314FA58);
PPC_FUNC_IMPL(__imp__sub_8314FA58) {
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
	// lwz r4,16840(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16840);
	// lwz r3,16848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16848);
	// bl 0x8314eb88
	sub_8314EB88(ctx, base);
	// lwz r4,16836(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16836);
	// lwz r3,16848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16848);
	// bl 0x8314eae8
	sub_8314EAE8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,16848(r31)
	PPC_STORE_U32(r31.u32 + 16848, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314FAA0"))) PPC_WEAK_FUNC(sub_8314FAA0);
PPC_FUNC_IMPL(__imp__sub_8314FAA0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,16852(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16852, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314FAA8"))) PPC_WEAK_FUNC(sub_8314FAA8);
PPC_FUNC_IMPL(__imp__sub_8314FAA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16852(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16852);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314FAB0"))) PPC_WEAK_FUNC(sub_8314FAB0);
PPC_FUNC_IMPL(__imp__sub_8314FAB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8528(r1)
	ea = -8528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r24,0
	r24.s64 = 0;
	// li r8,128
	ctx.r8.s64 = 128;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r24.u32);
	// lfs f0,-9876(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9876);
	f0.f64 = double(temp.f32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stfs f0,156(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// mr r11,r24
	r11.u64 = r24.u64;
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
loc_8314FAFC:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r10,r10,516
	ctx.r10.s64 = ctx.r10.s64 + 516;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x8314fafc
	if (cr6.lt) goto loc_8314FAFC;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314fb3c
	if (cr6.eq) goto loc_8314FB3C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8314FB3C:
	// addi r22,r25,80
	r22.s64 = r25.s64 + 80;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r31,r22
	r31.u64 = r22.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
	// subf r28,r25,r11
	r28.s64 = r11.s64 - r25.s64;
	// subfic r29,r25,-80
	xer.ca = r25.u32 <= 4294967216;
	r29.s64 = -80 - r25.s64;
	// li r23,1
	r23.s64 = 1;
loc_8314FB58:
	// lbzx r11,r28,r31
	r11.u64 = PPC_LOAD_U8(r28.u32 + r31.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8314fbbc
	if (!cr6.eq) goto loc_8314FBBC;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// add r11,r29,r31
	r11.u64 = r29.u64 + r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8314fb7c
	if (!cr6.lt) goto loc_8314FB7C;
	// lwzx r4,r28,r30
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + r30.u32);
loc_8314FB7C:
	// lwz r10,64(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 64);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8314fb94
	if (cr6.lt) goto loc_8314FB94;
	// mr r11,r24
	r11.u64 = r24.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// b 0x8314fb9c
	goto loc_8314FB9C;
loc_8314FB94:
	// lwz r11,72(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 72);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_8314FB9C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8314fbbc
	if (cr6.eq) goto loc_8314FBBC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314fbbc
	if (cr6.eq) goto loc_8314FBBC;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// stb r23,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r23.u8);
	// b 0x8314fbc0
	goto loc_8314FBC0;
loc_8314FBBC:
	// stb r24,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r24.u8);
loc_8314FBC0:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// add r11,r29,r31
	r11.u64 = r29.u64 + r31.u64;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// blt cr6,0x8314fb58
	if (cr6.lt) goto loc_8314FB58;
	// li r29,8
	r29.s64 = 8;
	// stw r29,68(r25)
	PPC_STORE_U32(r25.u32 + 68, r29.u32);
	// lwz r11,16852(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16852);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8314fc1c
	if (!cr6.eq) goto loc_8314FC1C;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r11,r24
	r11.u64 = r24.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8314fe6c
	if (cr6.eq) goto loc_8314FE6C;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8314FBFC:
	// stw r24,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r24.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8314fbfc
	if (cr6.lt) goto loc_8314FBFC;
	// addi r1,r1,8528
	ctx.r1.s64 = ctx.r1.s64 + 8528;
	// b 0x831b0b60
	return;
loc_8314FC1C:
	// subfic r28,r26,-8467
	xer.ca = r26.u32 <= 4294958829;
	r28.s64 = -8467 - r26.s64;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// addi r31,r26,8468
	r31.s64 = r26.s64 + 8468;
	// mr r30,r24
	r30.u64 = r24.u64;
	// subfic r27,r26,-8468
	xer.ca = r26.u32 <= 4294958828;
	r27.s64 = -8468 - r26.s64;
loc_8314FC30:
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// lbzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8314fca0
	if (cr6.eq) goto loc_8314FCA0;
	// lwz r10,8452(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8452);
	// add r8,r27,r31
	ctx.r8.u64 = r27.u64 + r31.u64;
	// addi r11,r26,8388
	r11.s64 = r26.s64 + 8388;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// blt cr6,0x8314fc60
	if (cr6.lt) goto loc_8314FC60;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// b 0x8314fc68
	goto loc_8314FC68;
loc_8314FC60:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
loc_8314FC68:
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x8314fca0
	if (!cr6.lt) goto loc_8314FCA0;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8314fca0
	if (cr6.eq) goto loc_8314FCA0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314fca0
	if (cr6.eq) goto loc_8314FCA0;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// add r9,r28,r31
	ctx.r9.u64 = r28.u64 + r31.u64;
	// stb r23,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r23.u8);
	// b 0x8314fca4
	goto loc_8314FCA4;
loc_8314FCA0:
	// stb r24,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r24.u8);
loc_8314FCA4:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// add r11,r27,r31
	r11.u64 = r27.u64 + r31.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// blt cr6,0x8314fc30
	if (cr6.lt) goto loc_8314FC30;
	// lwz r11,16848(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16848);
	// stw r9,8456(r26)
	PPC_STORE_U32(r26.u32 + 8456, ctx.r9.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314fcf4
	if (cr6.eq) goto loc_8314FCF4;
	// lwz r11,16840(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16840);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314fcfc
	if (cr6.eq) goto loc_8314FCFC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r26,12612
	ctx.r4.s64 = r26.s64 + 12612;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8314fcfc
	goto loc_8314FCFC;
loc_8314FCF4:
	// addi r3,r26,12612
	ctx.r3.s64 = r26.s64 + 12612;
	// bl 0x83144dc0
	sub_83144DC0(ctx, base);
loc_8314FCFC:
	// lwz r11,68(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 68);
	// lwz r10,12680(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 12680);
	// mr r28,r11
	r28.u64 = r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8314fd14
	if (cr6.gt) goto loc_8314FD14;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
loc_8314FD14:
	// mr r31,r24
	r31.u64 = r24.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8314fe40
	if (cr6.eq) goto loc_8314FE40;
	// addi r29,r26,12612
	r29.s64 = r26.s64 + 12612;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_8314FD28:
	// lwz r11,64(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x8314fd3c
	if (!cr6.lt) goto loc_8314FD3C;
	// lwzx r4,r30,r29
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r29.u32);
loc_8314FD3C:
	// lwz r11,64(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 64);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x8314fd54
	if (cr6.lt) goto loc_8314FD54;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// b 0x8314fd5c
	goto loc_8314FD5C;
loc_8314FD54:
	// lwz r10,72(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 72);
	// lwzx r3,r30,r25
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r25.u32);
loc_8314FD5C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8314fe30
	if (cr6.eq) goto loc_8314FE30;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314fe30
	if (cr6.eq) goto loc_8314FE30;
	// add r11,r31,r26
	r11.u64 = r31.u64 + r26.u64;
	// lbz r9,12692(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 12692);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8314fe30
	if (cr6.eq) goto loc_8314FE30;
	// lbzx r11,r22,r31
	r11.u64 = PPC_LOAD_U8(r22.u32 + r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8314fd94
	if (!cr6.eq) goto loc_8314FD94;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// b 0x8314fe2c
	goto loc_8314FE2C;
loc_8314FD94:
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x8314fe00
	if (cr6.lt) goto loc_8314FE00;
	// addi r11,r10,-4
	r11.s64 = ctx.r10.s64 + -4;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8314FDB0:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + f0.f64));
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f7,4(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f6,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f10
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// lfs f9,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// stfs f5,8(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f4,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f9
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// stfs f3,12(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bne 0x8314fdb0
	if (!cr0.eq) goto loc_8314FDB0;
loc_8314FE00:
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x8314fe2c
	if (!cr6.lt) goto loc_8314FE2C;
	// subf r11,r9,r10
	r11.s64 = ctx.r10.s64 - ctx.r9.s64;
loc_8314FE0C:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bne 0x8314fe0c
	if (!cr0.eq) goto loc_8314FE0C;
loc_8314FE2C:
	// stbx r23,r22,r31
	PPC_STORE_U8(r22.u32 + r31.u32, r23.u8);
loc_8314FE30:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// blt cr6,0x8314fd28
	if (cr6.lt) goto loc_8314FD28;
loc_8314FE40:
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r11,r24
	r11.u64 = r24.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8314fe6c
	if (cr6.eq) goto loc_8314FE6C;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8314FE54:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r24,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r24.u32);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8314fe54
	if (cr6.lt) goto loc_8314FE54;
loc_8314FE6C:
	// addi r1,r1,8528
	ctx.r1.s64 = ctx.r1.s64 + 8528;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_8314FE78"))) PPC_WEAK_FUNC(sub_8314FE78);
PPC_FUNC_IMPL(__imp__sub_8314FE78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4384(r1)
	ea = -4384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// li r9,128
	ctx.r9.s64 = 128;
	// li r26,0
	r26.s64 = 0;
	// li r24,8
	r24.s64 = 8;
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r26.u32);
	// lfs f0,-9876(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9876);
	f0.f64 = double(temp.f32);
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r24.u32);
	// stfs f0,156(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// mr r11,r26
	r11.u64 = r26.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
loc_8314FEBC:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r10,r10,516
	ctx.r10.s64 = ctx.r10.s64 + 516;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x8314febc
	if (cr6.lt) goto loc_8314FEBC;
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314FEE8:
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x8314fee8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314FEE8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,16856(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16856);
	// bl 0x8314f4f8
	sub_8314F4F8(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r29,r28
	r29.u64 = r28.u64;
	// subf r27,r28,r11
	r27.s64 = r11.s64 - r28.s64;
	// li r25,1
	r25.s64 = 1;
loc_8314FF14:
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8314ff28
	if (!cr6.lt) goto loc_8314FF28;
	// lwzx r4,r27,r29
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
loc_8314FF28:
	// lwz r11,64(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 64);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8314ff40
	if (cr6.lt) goto loc_8314FF40;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// b 0x8314ff48
	goto loc_8314FF48;
loc_8314FF40:
	// lwz r10,72(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 72);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
loc_8314FF48:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83150020
	if (cr6.eq) goto loc_83150020;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83150020
	if (cr6.eq) goto loc_83150020;
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// lbzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83150020
	if (cr6.eq) goto loc_83150020;
	// add r31,r30,r28
	r31.u64 = r30.u64 + r28.u64;
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8314ff84
	if (!cr6.eq) goto loc_8314FF84;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// b 0x8315001c
	goto loc_8315001C;
loc_8314FF84:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x8314fff0
	if (cr6.lt) goto loc_8314FFF0;
	// addi r11,r10,-4
	r11.s64 = ctx.r10.s64 + -4;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8314FFA0:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 + ctx.f13.f64));
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// lfs f5,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// stfs f6,8(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f4,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfs f3,12(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bne 0x8314ffa0
	if (!cr0.eq) goto loc_8314FFA0;
loc_8314FFF0:
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x8315001c
	if (!cr6.lt) goto loc_8315001C;
	// subf r11,r9,r10
	r11.s64 = ctx.r10.s64 - ctx.r9.s64;
loc_8314FFFC:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bne 0x8314fffc
	if (!cr0.eq) goto loc_8314FFFC;
loc_8315001C:
	// stb r25,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r25.u8);
loc_83150020:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r30,8
	cr6.compare<uint32_t>(r30.u32, 8, xer);
	// blt cr6,0x8314ff14
	if (cr6.lt) goto loc_8314FF14;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r11,r26
	r11.u64 = r26.u64;
	// stw r24,68(r28)
	PPC_STORE_U32(r28.u32 + 68, r24.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83150060
	if (cr6.eq) goto loc_83150060;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_83150048:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r26,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r26.u32);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83150048
	if (cr6.lt) goto loc_83150048;
loc_83150060:
	// addi r1,r1,4384
	ctx.r1.s64 = ctx.r1.s64 + 4384;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_83150068"))) PPC_WEAK_FUNC(sub_83150068);
PPC_FUNC_IMPL(__imp__sub_83150068) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,23764
	ctx.r5.s64 = r11.s64 + 23764;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831500c0
	if (cr6.eq) goto loc_831500C0;
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_831500C0:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,23752
	ctx.r4.s64 = r11.s64 + 23752;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
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

__attribute__((alias("__imp__sub_831500F0"))) PPC_WEAK_FUNC(sub_831500F0);
PPC_FUNC_IMPL(__imp__sub_831500F0) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r30,r28,4
	r30.s64 = r28.s64 + 4;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831501b4
	if (cr6.eq) goto loc_831501B4;
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831501b4
	if (cr6.eq) goto loc_831501B4;
	// li r29,0
	r29.s64 = 0;
loc_83150120:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,-4
	r31.s64 = r11.s64 + -4;
	// bne cr6,0x83150134
	if (!cr6.eq) goto loc_83150134;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_83150134:
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831501c8
	if (cr0.eq) goto loc_831501C8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x83150150
	if (!cr6.eq) goto loc_83150150;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_83150150:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x83150164
	if (!cr6.eq) goto loc_83150164;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
loc_83150164:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83150178
	if (cr6.eq) goto loc_83150178;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_83150178:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8315018c
	if (cr6.eq) goto loc_8315018C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_8315018C:
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83150120
	if (!cr6.eq) goto loc_83150120;
loc_831501B4:
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_831501C8:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,19544
	ctx.r4.s64 = r11.s64 + 19544;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_831501D8:
	// b 0x831501d8
	goto loc_831501D8;
}

__attribute__((alias("__imp__sub_831501E0"))) PPC_WEAK_FUNC(sub_831501E0);
PPC_FUNC_IMPL(__imp__sub_831501E0) {
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
	// lwz r3,16840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16840);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83150214
	if (cr6.eq) goto loc_83150214;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// stw r30,16840(r31)
	PPC_STORE_U32(r31.u32 + 16840, r30.u32);
loc_83150214:
	// lwz r3,16844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16844);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83150238
	if (cr6.eq) goto loc_83150238;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,16844(r31)
	PPC_STORE_U32(r31.u32 + 16844, r30.u32);
loc_83150238:
	// lwz r3,16836(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16836);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83150250
	if (cr6.eq) goto loc_83150250;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// stw r30,16836(r31)
	PPC_STORE_U32(r31.u32 + 16836, r30.u32);
loc_83150250:
	// lwz r3,16856(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16856);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83150264
	if (cr6.eq) goto loc_83150264;
	// bl 0x831500f0
	sub_831500F0(ctx, base);
	// stw r30,16856(r31)
	PPC_STORE_U32(r31.u32 + 16856, r30.u32);
loc_83150264:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
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

__attribute__((alias("__imp__sub_83150298"))) PPC_WEAK_FUNC(sub_83150298);
PPC_FUNC_IMPL(__imp__sub_83150298) {
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
	// bl 0x8314f950
	sub_8314F950(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831502d4
	if (cr6.eq) goto loc_831502D4;
	// li r4,16860
	ctx.r4.s64 = 16860;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_831502D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831502F0"))) PPC_WEAK_FUNC(sub_831502F0);
PPC_FUNC_IMPL(__imp__sub_831502F0) {
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
	// bl 0x8314fab0
	sub_8314FAB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314fe78
	sub_8314FE78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150338"))) PPC_WEAK_FUNC(sub_83150338);
PPC_FUNC_IMPL(__imp__sub_83150338) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,23832
	ctx.r5.s64 = r11.s64 + 23832;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,16860
	ctx.r3.s64 = 16860;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315038c
	if (cr6.eq) goto loc_8315038C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8314f830
	sub_8314F830(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831503a4
	if (!cr6.eq) goto loc_831503A4;
loc_8315038C:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,23820
	ctx.r4.s64 = r11.s64 + 23820;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// b 0x83150434
	goto loc_83150434;
loc_831503A4:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r5,r11,23804
	ctx.r5.s64 = r11.s64 + 23804;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83143c50
	sub_83143C50(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,16836(r31)
	PPC_STORE_U32(r31.u32 + 16836, ctx.r3.u32);
	// bne cr6,0x831503cc
	if (!cr6.eq) goto loc_831503CC;
loc_831503C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x83150430
	goto loc_83150430;
loc_831503CC:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r5,r31,8388
	ctx.r5.s64 = r31.s64 + 8388;
	// addi r4,r11,23792
	ctx.r4.s64 = r11.s64 + 23792;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8314f728
	sub_8314F728(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r11,16844(r31)
	PPC_STORE_U32(r31.u32 + 16844, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831503c4
	if (cr6.eq) goto loc_831503C4;
	// lwz r10,16836(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16836);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r5,r9,23776
	ctx.r5.s64 = ctx.r9.s64 + 23776;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// bl 0x83143c50
	sub_83143C50(ctx, base);
	// stw r3,16840(r31)
	PPC_STORE_U32(r31.u32 + 16840, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831503c4
	if (cr6.eq) goto loc_831503C4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83150068
	sub_83150068(ctx, base);
	// stw r3,16856(r31)
	PPC_STORE_U32(r31.u32 + 16856, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x83150438
	if (!cr6.eq) goto loc_83150438;
loc_83150430:
	// bl 0x831501e0
	sub_831501E0(ctx, base);
loc_83150434:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83150438:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150450"))) PPC_WEAK_FUNC(sub_83150450);
PPC_FUNC_IMPL(__imp__sub_83150450) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,23856
	ctx.r9.s64 = r11.s64 + 23856;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83150488
	if (cr6.eq) goto loc_83150488;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83150488:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831504A0"))) PPC_WEAK_FUNC(sub_831504A0);
PPC_FUNC_IMPL(__imp__sub_831504A0) {
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
	// bl 0x8315a148
	sub_8315A148(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8316a2b0
	sub_8316A2B0(ctx, base);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831504E0"))) PPC_WEAK_FUNC(sub_831504E0);
PPC_FUNC_IMPL(__imp__sub_831504E0) {
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
	// lwz r11,188(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x8315a1c0
	sub_8315A1C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150528"))) PPC_WEAK_FUNC(sub_83150528);
PPC_FUNC_IMPL(__imp__sub_83150528) {
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
	// li r28,0
	r28.s64 = 0;
	// mr r29,r28
	r29.u64 = r28.u64;
	// lwz r31,16(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 16);
loc_83150544:
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// addi r10,r11,6
	ctx.r10.s64 = r11.s64 + 6;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ble cr6,0x831505b4
	if (!cr6.gt) goto loc_831505B4;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwzx r7,r10,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// bl 0x83169dc8
	sub_83169DC8(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// ble cr6,0x831505f0
	if (!cr6.gt) goto loc_831505F0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8315dee8
	sub_8315DEE8(ctx, base);
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + r31.u32, r28.u32);
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// addi r9,r11,6
	ctx.r9.s64 = r11.s64 + 6;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + r31.u32, r28.u32);
loc_831505B4:
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// addi r10,r11,2
	ctx.r10.s64 = r11.s64 + 2;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x831505f0
	if (cr6.eq) goto loc_831505F0;
	// stw r11,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r11.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(r29.u32, 4, xer);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// blt cr6,0x83150544
	if (cr6.lt) goto loc_83150544;
loc_831505F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831505F8"))) PPC_WEAK_FUNC(sub_831505F8);
PPC_FUNC_IMPL(__imp__sub_831505F8) {
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
	// li r29,0
	r29.s64 = 0;
	// lwz r31,16(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 16);
loc_83150610:
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8316a518
	sub_8316A518(ctx, base);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x831506e0
	if (cr6.eq) goto loc_831506E0;
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r11,10
	ctx.r9.s64 = r11.s64 + 10;
	// addi r10,r11,14
	ctx.r10.s64 = r11.s64 + 14;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r5,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + r31.u32);
	// lwzx r8,r10,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// bne cr6,0x83150670
	if (!cr6.eq) goto loc_83150670;
	// rotlwi r11,r8,0
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// stwx r11,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + r31.u32, r11.u32);
	// b 0x831506d4
	goto loc_831506D4;
loc_83150670:
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bge cr6,0x831506d4
	if (!cr6.lt) goto loc_831506D4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// addi r10,r11,10
	ctx.r10.s64 = r11.s64 + 10;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831506c4
	if (!cr6.eq) goto loc_831506C4;
	// stw r11,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r11.u32);
	// stwx r7,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r7.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// addi r9,r11,14
	ctx.r9.s64 = r11.s64 + 14;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + r31.u32, ctx.r10.u32);
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// stw r7,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r7.u32);
	// b 0x831506d4
	goto loc_831506D4;
loc_831506C4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8316a528
	sub_8316A528(ctx, base);
loc_831506D4:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(r29.u32, 4, xer);
	// blt cr6,0x83150610
	if (cr6.lt) goto loc_83150610;
loc_831506E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831506E8"))) PPC_WEAK_FUNC(sub_831506E8);
PPC_FUNC_IMPL(__imp__sub_831506E8) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
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

__attribute__((alias("__imp__sub_83150738"))) PPC_WEAK_FUNC(sub_83150738);
PPC_FUNC_IMPL(__imp__sub_83150738) {
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
	// li r28,0
	r28.s64 = 0;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831507ac
	if (cr6.eq) goto loc_831507AC;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x831507ac
	if (!cr6.gt) goto loc_831507AC;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_8315076C:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83150798
	if (cr6.eq) goto loc_83150798;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stwx r28,r30,r9
	PPC_STORE_U32(r30.u32 + ctx.r9.u32, r28.u32);
loc_83150798:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x8315076c
	if (cr6.lt) goto loc_8315076C;
loc_831507AC:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831507c0
	if (cr6.eq) goto loc_831507C0;
	// bl 0x83168240
	sub_83168240(ctx, base);
	// stw r28,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r28.u32);
loc_831507C0:
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831507d8
	if (cr6.eq) goto loc_831507D8;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// stw r28,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r28.u32);
loc_831507D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831507E0"))) PPC_WEAK_FUNC(sub_831507E0);
PPC_FUNC_IMPL(__imp__sub_831507E0) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x83168650
	sub_83168650(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r3,100
	ctx.r10.s64 = ctx.r3.s64 + 100;
	// mullw r11,r10,r11
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// add r3,r11,r3
	ctx.r3.u64 = r11.u64 + ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150820"))) PPC_WEAK_FUNC(sub_83150820);
PPC_FUNC_IMPL(__imp__sub_83150820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150830"))) PPC_WEAK_FUNC(sub_83150830);
PPC_FUNC_IMPL(__imp__sub_83150830) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150838"))) PPC_WEAK_FUNC(sub_83150838);
PPC_FUNC_IMPL(__imp__sub_83150838) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83159cd8
	sub_83159CD8(ctx, base);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r29,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r29.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r28,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r28.u32);
	// addi r9,r10,23864
	ctx.r9.s64 = ctx.r10.s64 + 23864;
	// stw r27,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r27.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// stb r11,72(r31)
	PPC_STORE_U8(r31.u32 + 72, r11.u8);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r8,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r8.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_831508D0"))) PPC_WEAK_FUNC(sub_831508D0);
PPC_FUNC_IMPL(__imp__sub_831508D0) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r10,r11,23864
	ctx.r10.s64 = r11.s64 + 23864;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x83159d08
	sub_83159D08(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83150918
	if (cr6.eq) goto loc_83150918;
	// li r4,100
	ctx.r4.s64 = 100;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83150918:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150930"))) PPC_WEAK_FUNC(sub_83150930);
PPC_FUNC_IMPL(__imp__sub_83150930) {
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
	// bl 0x83159f50
	sub_83159F50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83150964
	if (!cr6.eq) goto loc_83150964;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83150964:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// stw r10,72(r9)
	PPC_STORE_U32(ctx.r9.u32 + 72, ctx.r10.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r10,76(r8)
	PPC_STORE_U32(ctx.r8.u32 + 76, ctx.r10.u32);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
	// stb r11,72(r31)
	PPC_STORE_U8(r31.u32 + 72, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831509A8"))) PPC_WEAK_FUNC(sub_831509A8);
PPC_FUNC_IMPL(__imp__sub_831509A8) {
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
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831509fc
	if (cr6.eq) goto loc_831509FC;
	// lbz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 72);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r30,r8,1
	r30.u64 = ctx.r8.u64 ^ 1;
	// bl 0x8315bc40
	sub_8315BC40(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// beq cr6,0x831509fc
	if (cr6.eq) goto loc_831509FC;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x8315bc38
	sub_8315BC38(ctx, base);
loc_831509FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150A18"))) PPC_WEAK_FUNC(sub_83150A18);
PPC_FUNC_IMPL(__imp__sub_83150A18) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,23856
	ctx.r9.s64 = r11.s64 + 23856;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83150a50
	if (cr6.eq) goto loc_83150A50;
	// li r4,52
	ctx.r4.s64 = 52;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83150A50:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150A68"))) PPC_WEAK_FUNC(sub_83150A68);
PPC_FUNC_IMPL(__imp__sub_83150A68) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83150adc
	if (cr6.eq) goto loc_83150ADC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r9,23984
	ctx.r5.s64 = ctx.r9.s64 + 23984;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83167fd8
	sub_83167FD8(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83150ae8
	if (!cr6.eq) goto loc_83150AE8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,23968
	ctx.r4.s64 = r11.s64 + 23968;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
loc_83150AD4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83150738
	sub_83150738(ctx, base);
loc_83150ADC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_83150AE8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831681d0
	sub_831681D0(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83150ad4
	if (cr6.eq) goto loc_83150AD4;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x83150b60
	if (!cr6.gt) goto loc_83150B60;
	// li r30,0
	r30.s64 = 0;
loc_83150B10:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stwx r3,r30,r9
	PPC_STORE_U32(r30.u32 + ctx.r9.u32, ctx.r3.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwzx r7,r30,r8
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83150ad4
	if (cr6.eq) goto loc_83150AD4;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,12
	r28.s64 = r28.s64 + 12;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x83150b10
	if (cr6.lt) goto loc_83150B10;
loc_83150B60:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83150B70"))) PPC_WEAK_FUNC(sub_83150B70);
PPC_FUNC_IMPL(__imp__sub_83150B70) {
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
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83150bb4
	if (!cr6.eq) goto loc_83150BB4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,23996
	ctx.r4.s64 = r11.s64 + 23996;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83150BB4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bne cr6,0x83150bc8
	if (!cr6.eq) goto loc_83150BC8;
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_83150BC8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bne cr6,0x83150bdc
	if (!cr6.eq) goto loc_83150BDC;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_83150BDC:
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r30,4(r5)
	r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83150bf4
	if (cr6.eq) goto loc_83150BF4;
	// rotlwi r10,r30,0
	ctx.r10.u64 = __builtin_rotateleft32(r30.u32, 0);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_83150BF4:
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83150c08
	if (cr6.eq) goto loc_83150C08;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_83150C08:
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83150C30"))) PPC_WEAK_FUNC(sub_83150C30);
PPC_FUNC_IMPL(__imp__sub_83150C30) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,24052
	ctx.r5.s64 = r11.s64 + 24052;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,100
	ctx.r3.s64 = 100;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83150ca4
	if (cr6.eq) goto loc_83150CA4;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x83150838
	sub_83150838(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83150cc4
	if (!cr6.eq) goto loc_83150CC4;
loc_83150CA4:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,24040
	ctx.r4.s64 = r11.s64 + 24040;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
loc_83150CC4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83150d04
	if (!cr6.eq) goto loc_83150D04;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
loc_83150D04:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83150D10"))) PPC_WEAK_FUNC(sub_83150D10);
PPC_FUNC_IMPL(__imp__sub_83150D10) {
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
	// li r28,0
	r28.s64 = 0;
	// addi r29,r31,80
	r29.s64 = r31.s64 + 80;
	// lwz r30,80(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83150d5c
	if (cr6.eq) goto loc_83150D5C;
loc_83150D34:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x8315d100
	sub_8315D100(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83150b70
	sub_83150B70(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83150d34
	if (!cr6.eq) goto loc_83150D34;
loc_83150D5C:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83150d74
	if (cr6.eq) goto loc_83150D74;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8315d100
	sub_8315D100(ctx, base);
	// stw r28,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r28.u32);
loc_83150D74:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83150d94
	if (cr6.eq) goto loc_83150D94;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r28.u32);
loc_83150D94:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83150da8
	if (cr6.eq) goto loc_83150DA8;
	// bl 0x8316a4e8
	sub_8316A4E8(ctx, base);
	// stw r28,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r28.u32);
loc_83150DA8:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83150dbc
	if (cr6.eq) goto loc_83150DBC;
	// bl 0x83168240
	sub_83168240(ctx, base);
	// stw r28,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r28.u32);
loc_83150DBC:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r11,1
	r11.s64 = 1;
	// stw r28,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r28.u32);
	// stw r28,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r28.u32);
	// stw r11,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, r11.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,76(r9)
	PPC_STORE_U32(ctx.r9.u32 + 76, r11.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r28,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r28.u32);
	// stb r28,72(r31)
	PPC_STORE_U8(r31.u32 + 72, r28.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83150DF0"))) PPC_WEAK_FUNC(sub_83150DF0);
PPC_FUNC_IMPL(__imp__sub_83150DF0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83150fc0
	if (cr6.eq) goto loc_83150FC0;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r30,20(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83150e30
	if (cr6.eq) goto loc_83150E30;
	// lbz r11,72(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 72);
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// b 0x83150e44
	goto loc_83150E44;
loc_83150E30:
	// rlwinm r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83150e48
	if (cr6.eq) goto loc_83150E48;
	// lbz r11,72(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 72);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_83150E44:
	// stb r10,72(r31)
	PPC_STORE_U8(r31.u32 + 72, ctx.r10.u8);
loc_83150E48:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831509a8
	sub_831509A8(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x8315bc58
	sub_8315BC58(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lfs f1,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x8315be38
	sub_8315BE38(ctx, base);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lfs f6,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,36(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,32(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,28(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// bl 0x8315bcd8
	sub_8315BCD8(ctx, base);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,76(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 76);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// bl 0x8315c9f0
	sub_8315C9F0(ctx, base);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f1,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// bl 0x8315c9f0
	sub_8315C9F0(ctx, base);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// li r4,2
	ctx.r4.s64 = 2;
	// lfs f1,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// bl 0x8315c9f0
	sub_8315C9F0(ctx, base);
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// li r4,3
	ctx.r4.s64 = 3;
	// lfs f1,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// bl 0x8315c9f0
	sub_8315C9F0(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// li r4,4
	ctx.r4.s64 = 4;
	// lfs f1,92(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x8315c9f0
	sub_8315C9F0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// li r4,5
	ctx.r4.s64 = 5;
	// lfs f1,96(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x8315c9f0
	sub_8315C9F0(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// li r4,6
	ctx.r4.s64 = 6;
	// lfs f1,100(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x8315c9f0
	sub_8315C9F0(ctx, base);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// li r4,7
	ctx.r4.s64 = 7;
	// lfs f1,104(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// bl 0x8315c9f0
	sub_8315C9F0(ctx, base);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lfs f2,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,48(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// bl 0x8315bd88
	sub_8315BD88(ctx, base);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// bl 0x8315c9c8
	sub_8315C9C8(ctx, base);
	// li r27,0
	r27.s64 = 0;
	// addi r28,r30,108
	r28.s64 = r30.s64 + 108;
loc_83150F60:
	// li r29,0
	r29.s64 = 0;
loc_83150F64:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x8315be20
	sub_8315BE20(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplwi cr6,r29,8
	cr6.compare<uint32_t>(r29.u32, 8, xer);
	// blt cr6,0x83150f64
	if (cr6.lt) goto loc_83150F64;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmplwi cr6,r27,8
	cr6.compare<uint32_t>(r27.u32, 8, xer);
	// blt cr6,0x83150f60
	if (cr6.lt) goto loc_83150F60;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,364(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 364);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x8315ca28
	sub_8315CA28(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f1,368(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 368);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x8315ca28
	sub_8315CA28(ctx, base);
loc_83150FC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83150FC8"))) PPC_WEAK_FUNC(sub_83150FC8);
PPC_FUNC_IMPL(__imp__sub_83150FC8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,24084
	ctx.r5.s64 = r11.s64 + 24084;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,52
	ctx.r3.s64 = 52;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8315108c
	if (cr6.eq) goto loc_8315108C;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// addi r9,r10,23896
	ctx.r9.s64 = ctx.r10.s64 + 23896;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// stw r27,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r27.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r8,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r8.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831510ac
	if (!cr6.eq) goto loc_831510AC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
loc_8315108C:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,24072
	ctx.r4.s64 = r11.s64 + 24072;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
loc_831510AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_831510B8"))) PPC_WEAK_FUNC(sub_831510B8);
PPC_FUNC_IMPL(__imp__sub_831510B8) {
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
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r5,r10,24124
	ctx.r5.s64 = ctx.r10.s64 + 24124;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83167fd8
	sub_83167FD8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// bne cr6,0x83151118
	if (!cr6.eq) goto loc_83151118;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,24112
	ctx.r4.s64 = r11.s64 + 24112;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83151118:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8315114c
	if (!cr6.gt) goto loc_8315114C;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_83151130:
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x83151130
	if (cr6.lt) goto loc_83151130;
loc_8315114C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83150a68
	sub_83150A68(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83151184
	if (!cr6.eq) goto loc_83151184;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83151184:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83151190"))) PPC_WEAK_FUNC(sub_83151190);
PPC_FUNC_IMPL(__imp__sub_83151190) {
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
	// addi r29,r30,32
	r29.s64 = r30.s64 + 32;
	// lwz r31,32(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831511d4
	if (cr6.eq) goto loc_831511D4;
loc_831511B0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8315d228
	sub_8315D228(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83150b70
	sub_83150B70(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831511b0
	if (!cr6.eq) goto loc_831511B0;
loc_831511D4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83150738
	sub_83150738(ctx, base);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831511f8
	if (cr6.eq) goto loc_831511F8;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
loc_831511F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83151200"))) PPC_WEAK_FUNC(sub_83151200);
PPC_FUNC_IMPL(__imp__sub_83151200) {
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
	// lwz r31,32(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83151240
	if (cr6.eq) goto loc_83151240;
loc_83151224:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8315cf68
	sub_8315CF68(ctx, base);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// beq cr6,0x8315125c
	if (cr6.eq) goto loc_8315125C;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83151224
	if (!cr6.eq) goto loc_83151224;
loc_83151240:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83151244:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8315125C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// b 0x83151244
	goto loc_83151244;
}

__attribute__((alias("__imp__sub_83151268"))) PPC_WEAK_FUNC(sub_83151268);
PPC_FUNC_IMPL(__imp__sub_83151268) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x83150c30
	sub_83150C30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83151288"))) PPC_WEAK_FUNC(sub_83151288);
PPC_FUNC_IMPL(__imp__sub_83151288) {
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
	// addi r29,r30,80
	r29.s64 = r30.s64 + 80;
	// lwz r31,80(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831512d0
	if (cr6.eq) goto loc_831512D0;
loc_831512A8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8315d100
	sub_8315D100(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83150b70
	sub_83150B70(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831512a8
	if (!cr6.eq) goto loc_831512A8;
loc_831512D0:
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831512ec
	if (cr6.eq) goto loc_831512EC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8315d100
	sub_8315D100(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r11.u32);
loc_831512EC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83159d48
	sub_83159D48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83151300"))) PPC_WEAK_FUNC(sub_83151300);
PPC_FUNC_IMPL(__imp__sub_83151300) {
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
	// lwz r11,80(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// addi r30,r3,80
	r30.s64 = ctx.r3.s64 + 80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315133c
	if (cr6.eq) goto loc_8315133C;
loc_83151324:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// beq cr6,0x8315137c
	if (cr6.eq) goto loc_8315137C;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83151324
	if (!cr6.eq) goto loc_83151324;
loc_8315133C:
	// li r31,0
	r31.s64 = 0;
loc_83151340:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83151364
	if (cr6.eq) goto loc_83151364;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8315d100
	sub_8315D100(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83150b70
	sub_83150B70(ctx, base);
loc_83151364:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8315137C:
	// mr r31,r11
	r31.u64 = r11.u64;
	// b 0x83151340
	goto loc_83151340;
}

__attribute__((alias("__imp__sub_83151388"))) PPC_WEAK_FUNC(sub_83151388);
PPC_FUNC_IMPL(__imp__sub_83151388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,20(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x83159de8
	sub_83159DE8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x831681d0
	sub_831681D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// bne cr6,0x831513e8
	if (!cr6.eq) goto loc_831513E8;
loc_831513CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_831513D0:
	// bl 0x83150d10
	sub_83150D10(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_831513E8:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8316a4b0
	sub_8316A4B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// beq cr6,0x831513cc
	if (cr6.eq) goto loc_831513CC;
	// lwz r4,408(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 408);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8315143c
	if (cr6.eq) goto loc_8315143C;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x83151200
	sub_83151200(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831513cc
	if (cr6.eq) goto loc_831513CC;
	// stw r3,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8315d3f8
	sub_8315D3F8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831513cc
	if (cr6.eq) goto loc_831513CC;
	// lbz r11,72(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 72);
	// ori r10,r11,2
	ctx.r10.u64 = r11.u64 | 2;
	// stb r10,72(r31)
	PPC_STORE_U8(r31.u32 + 72, ctx.r10.u8);
loc_8315143C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r8,400(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 400);
	// addi r10,r31,56
	ctx.r10.s64 = r31.s64 + 56;
	// lwz r29,396(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 396);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x831513d0
	if (cr6.eq) goto loc_831513D0;
	// bl 0x83150df0
	sub_83150DF0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x8315bb90
	sub_8315BB90(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831514B0"))) PPC_WEAK_FUNC(sub_831514B0);
PPC_FUNC_IMPL(__imp__sub_831514B0) {
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
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r9,r10,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x831514ec
	if (cr6.eq) goto loc_831514EC;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831514ec
	if (cr6.eq) goto loc_831514EC;
	// bl 0x83150d10
	sub_83150D10(ctx, base);
loc_831514EC:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8315150c
	if (cr6.eq) goto loc_8315150C;
	// lbz r11,72(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 72);
	// ori r9,r11,1
	ctx.r9.u64 = r11.u64 | 1;
	// b 0x83151520
	goto loc_83151520;
loc_8315150C:
	// rlwinm r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83151524
	if (cr6.eq) goto loc_83151524;
	// lbz r11,72(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 72);
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_83151520:
	// stb r9,72(r31)
	PPC_STORE_U8(r31.u32 + 72, ctx.r9.u8);
loc_83151524:
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r30,1
	r30.s64 = 1;
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83151560
	if (cr6.eq) goto loc_83151560;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83151554
	if (cr6.eq) goto loc_83151554;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83150d10
	sub_83150D10(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
loc_83151554:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83151388
	sub_83151388(ctx, base);
	// b 0x831515e4
	goto loc_831515E4;
loc_83151560:
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831515a4
	if (cr6.eq) goto loc_831515A4;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831515e4
	if (cr6.eq) goto loc_831515E4;
	// lbz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 72);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83151598
	if (cr6.eq) goto loc_83151598;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83150d10
	sub_83150D10(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// b 0x831515e4
	goto loc_831515E4;
loc_83151598:
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x8315bc08
	sub_8315BC08(ctx, base);
	// b 0x831515e4
	goto loc_831515E4;
loc_831515A4:
	// rlwinm r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831515e4
	if (cr6.eq) goto loc_831515E4;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831515e4
	if (cr6.eq) goto loc_831515E4;
	// lbz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 72);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831515dc
	if (cr6.eq) goto loc_831515DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83150d10
	sub_83150D10(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// b 0x831515e4
	goto loc_831515E4;
loc_831515DC:
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x8315bc20
	sub_8315BC20(ctx, base);
loc_831515E4:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83151628
	if (cr6.eq) goto loc_83151628;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8315160c
	if (!cr6.eq) goto loc_8315160C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83150d10
	sub_83150D10(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
loc_8315160C:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83151628
	if (cr6.eq) goto loc_83151628;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83150df0
	sub_83150DF0(ctx, base);
loc_83151628:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83151670
	if (cr6.eq) goto loc_83151670;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83150528
	sub_83150528(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831505f8
	sub_831505F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x8315def8
	sub_8315DEF8(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r3,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r10,80(r11)
	PPC_STORE_U32(r11.u32 + 80, ctx.r10.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// bl 0x8315be40
	sub_8315BE40(ctx, base);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r3,84(r8)
	PPC_STORE_U32(ctx.r8.u32 + 84, ctx.r3.u32);
loc_83151670:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x83151694
	if (!cr6.eq) goto loc_83151694;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x83151694
	if (!cr6.gt) goto loc_83151694;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_83151694:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x831516e4
	if (!cr6.eq) goto loc_831516E4;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831516e4
	if (cr6.eq) goto loc_831516E4;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831516c8
	if (cr6.eq) goto loc_831516C8;
	// bl 0x8315cf60
	sub_8315CF60(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x831516e4
	if (!cr6.eq) goto loc_831516E4;
loc_831516C8:
	// lbz r11,72(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 72);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// clrlwi r8,r11,24
	ctx.r8.u64 = r11.u32 & 0xFF;
	// rlwinm r8,r8,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stb r8,72(r31)
	PPC_STORE_U8(r31.u32 + 72, ctx.r8.u8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_831516E4:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83151720
	if (cr6.eq) goto loc_83151720;
	// lbz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 72);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r30,r8,1
	r30.u64 = ctx.r8.u64 ^ 1;
	// bl 0x8315bc40
	sub_8315BC40(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// beq cr6,0x83151720
	if (cr6.eq) goto loc_83151720;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x8315bc38
	sub_8315BC38(ctx, base);
loc_83151720:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151748"))) PPC_WEAK_FUNC(sub_83151748);
PPC_FUNC_IMPL(__imp__sub_83151748) {
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
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// bl 0x8315d280
	sub_8315D280(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151780"))) PPC_WEAK_FUNC(sub_83151780);
PPC_FUNC_IMPL(__imp__sub_83151780) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8315d330
	sub_8315D330(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x831517c8
	if (!cr6.eq) goto loc_831517C8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,24156
	ctx.r4.s64 = r11.s64 + 24156;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_831517C8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x8315d280
	sub_8315D280(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831517f0
	if (!cr6.eq) goto loc_831517F0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8315d228
	sub_8315D228(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_831517F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83151800"))) PPC_WEAK_FUNC(sub_83151800);
PPC_FUNC_IMPL(__imp__sub_83151800) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8315d550
	sub_8315D550(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x83151848
	if (!cr6.eq) goto loc_83151848;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,24196
	ctx.r4.s64 = r11.s64 + 24196;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_83151848:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x8315d280
	sub_8315D280(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83151870
	if (!cr6.eq) goto loc_83151870;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8315d228
	sub_8315D228(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_83151870:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83151880"))) PPC_WEAK_FUNC(sub_83151880);
PPC_FUNC_IMPL(__imp__sub_83151880) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8315190c
	if (cr6.lt) goto loc_8315190C;
	// beq cr6,0x831518e4
	if (cr6.eq) goto loc_831518E4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x83151918
	if (!cr6.lt) goto loc_83151918;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x83151200
	sub_83151200(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831518cc
	if (cr6.eq) goto loc_831518CC;
	// bl 0x8315cf50
	sub_8315CF50(ctx, base);
	// b 0x83151918
	goto loc_83151918;
loc_831518CC:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,24236
	ctx.r4.s64 = r11.s64 + 24236;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// b 0x83151918
	goto loc_83151918;
loc_831518E4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x83151200
	sub_83151200(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83151914
	if (cr6.eq) goto loc_83151914;
	// bl 0x83151800
	sub_83151800(ctx, base);
	// b 0x83151918
	goto loc_83151918;
loc_8315190C:
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_83151914:
	// bl 0x83151780
	sub_83151780(ctx, base);
loc_83151918:
	// li r11,1
	r11.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151938"))) PPC_WEAK_FUNC(sub_83151938);
PPC_FUNC_IMPL(__imp__sub_83151938) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x831519ec
	if (cr6.eq) goto loc_831519EC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x831519ec
	if (cr6.eq) goto loc_831519EC;
loc_83151984:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x831519ec
	if (cr6.eq) goto loc_831519EC;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x831519c0
	if (cr6.eq) goto loc_831519C0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83151880
	sub_83151880(ctx, base);
loc_831519C0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83151984
	if (!cr6.eq) goto loc_83151984;
loc_831519EC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// mr r30,r27
	r30.u64 = r27.u64;
	// ble cr6,0x83151b14
	if (!cr6.gt) goto loc_83151B14;
	// mr r28,r27
	r28.u64 = r27.u64;
loc_83151A18:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwzx r29,r28,r9
	r29.u64 = PPC_LOAD_U32(r28.u32 + ctx.r9.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,16(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// clrlwi r4,r5,25
	ctx.r4.u64 = ctx.r5.u32 & 0x7F;
	// rlwinm r4,r4,0,31,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83151a7c
	if (cr6.eq) goto loc_83151A7C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83151A7C:
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83151aa0
	if (cr6.eq) goto loc_83151AA0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83151AA0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831514b0
	sub_831514B0(ctx, base);
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83151acc
	if (cr6.eq) goto loc_83151ACC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83151ACC:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r27,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r27.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,56(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r30,r6
	cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, xer);
	// blt cr6,0x83151a18
	if (cr6.lt) goto loc_83151A18;
loc_83151B14:
	// addi r30,r31,32
	r30.s64 = r31.s64 + 32;
	// lwz r31,32(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83151b68
	if (cr6.eq) goto loc_83151B68;
loc_83151B24:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8315d1b0
	sub_8315D1B0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8315cfc0
	sub_8315CFC0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83151b5c
	if (!cr6.eq) goto loc_83151B5C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8315d228
	sub_8315D228(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83150b70
	sub_83150B70(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83151b60
	goto loc_83151B60;
loc_83151B5C:
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_83151B60:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83151b24
	if (!cr6.eq) goto loc_83151B24;
loc_83151B68:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83151B70"))) PPC_WEAK_FUNC(sub_83151B70);
PPC_FUNC_IMPL(__imp__sub_83151B70) {
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
	// bl 0x8314ed48
	sub_8314ED48(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83151bb0
	if (!cr6.eq) goto loc_83151BB0;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83151bb0
	if (cr6.eq) goto loc_83151BB0;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// stw r30,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r30.u32);
loc_83151BB0:
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83151bc8
	if (cr6.eq) goto loc_83151BC8;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
loc_83151BC8:
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83151be0
	if (cr6.eq) goto loc_83151BE0;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
loc_83151BE0:
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83151bf8
	if (cr6.eq) goto loc_83151BF8;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
loc_83151BF8:
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83151c10
	if (cr6.eq) goto loc_83151C10;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
loc_83151C10:
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83151c28
	if (cr6.eq) goto loc_83151C28;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
loc_83151C28:
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83151c40
	if (cr6.eq) goto loc_83151C40;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
loc_83151C40:
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83151c58
	if (cr6.eq) goto loc_83151C58;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
loc_83151C58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151C70"))) PPC_WEAK_FUNC(sub_83151C70);
PPC_FUNC_IMPL(__imp__sub_83151C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x83151c94
	if (!cr6.eq) goto loc_83151C94;
	// li r11,0
	r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83151C84:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bdnz 0x83151c84
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83151C84;
	// blr 
	return;
loc_83151C94:
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// bne cr6,0x83151ccc
	if (!cr6.eq) goto loc_83151CCC;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,8
	r11.s64 = 8;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, r11.u32);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, r11.u32);
	// stw r9,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r9.u32);
	// stw r10,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r10.u32);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// blr 
	return;
loc_83151CCC:
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bne cr6,0x83151d08
	if (!cr6.eq) goto loc_83151D08;
	// li r11,8
	r11.s64 = 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, r11.u32);
	// stw r8,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r8.u32);
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, r11.u32);
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, r11.u32);
	// blr 
	return;
loc_83151D08:
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bne cr6,0x83151d48
	if (!cr6.eq) goto loc_83151D48;
	// li r11,8
	r11.s64 = 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, r11.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// stw r7,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r7.u32);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, r11.u32);
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, r11.u32);
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, r11.u32);
	// blr 
	return;
loc_83151D48:
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// bne cr6,0x83151d8c
	if (!cr6.eq) goto loc_83151D8C;
	// li r11,8
	r11.s64 = 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, r11.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// stw r7,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r7.u32);
	// stw r6,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r6.u32);
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, r11.u32);
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, r11.u32);
	// blr 
	return;
loc_83151D8C:
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// bne cr6,0x83151dd4
	if (!cr6.eq) goto loc_83151DD4;
	// li r11,8
	r11.s64 = 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, r11.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r7,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r7.u32);
	// stw r6,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r6.u32);
	// stw r5,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r5.u32);
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, r11.u32);
	// blr 
	return;
loc_83151DD4:
	// cmplwi cr6,r3,7
	cr6.compare<uint32_t>(ctx.r3.u32, 7, xer);
	// bne cr6,0x83151de4
	if (!cr6.eq) goto loc_83151DE4;
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x83151df0
	goto loc_83151DF0;
loc_83151DE4:
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r3,7
	ctx.r3.s64 = 7;
loc_83151DF0:
	// li r5,6
	ctx.r5.s64 = 6;
	// stw r3,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r3.u32);
	// li r6,5
	ctx.r6.s64 = 5;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r5,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r5.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r6,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r7,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r7.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r8,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151E30"))) PPC_WEAK_FUNC(sub_83151E30);
PPC_FUNC_IMPL(__imp__sub_83151E30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83151e60
	if (cr6.eq) goto loc_83151E60;
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
loc_83151E44:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83151e60
	if (cr6.eq) goto loc_83151E60;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83151e44
	if (cr6.lt) goto loc_83151E44;
loc_83151E60:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x83151e70
	if (!cr6.eq) goto loc_83151E70;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83151E70:
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// stwx r4,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151E88"))) PPC_WEAK_FUNC(sub_83151E88);
PPC_FUNC_IMPL(__imp__sub_83151E88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x83151e98
	if (!cr6.lt) goto loc_83151E98;
loc_83151E90:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83151E98:
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// bge cr6,0x83151e90
	if (!cr6.lt) goto loc_83151E90;
	// lwz r11,80(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151EC0"))) PPC_WEAK_FUNC(sub_83151EC0);
PPC_FUNC_IMPL(__imp__sub_83151EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// rlwinm r11,r4,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r9,96(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// stfsx f0,r9,r11
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, temp.u32);
	// stfsx f1,r10,r11
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151EE8"))) PPC_WEAK_FUNC(sub_83151EE8);
PPC_FUNC_IMPL(__imp__sub_83151EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// rlwinm r11,r4,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r8,96(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// stfsx f1,r8,r9
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151F08"))) PPC_WEAK_FUNC(sub_83151F08);
PPC_FUNC_IMPL(__imp__sub_83151F08) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x83151f1c
	if (!cr6.lt) goto loc_83151F1C;
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
loc_83151F1C:
	// rlwinm r11,r4,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// add r8,r11,r5
	ctx.r8.u64 = r11.u64 + ctx.r5.u64;
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// stfsx f0,r9,r11
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, temp.u32);
	// stfsx f1,r10,r11
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151F40"))) PPC_WEAK_FUNC(sub_83151F40);
PPC_FUNC_IMPL(__imp__sub_83151F40) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x83151f54
	if (!cr6.lt) goto loc_83151F54;
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
loc_83151F54:
	// rlwinm r11,r4,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// add r8,r11,r5
	ctx.r8.u64 = r11.u64 + ctx.r5.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r10,r7
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, temp.u32);
	// stfsx f1,r9,r7
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151F78"))) PPC_WEAK_FUNC(sub_83151F78);
PPC_FUNC_IMPL(__imp__sub_83151F78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x8314ed48
	sub_8314ED48(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83151fc4
	if (!cr6.eq) goto loc_83151FC4;
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// add r9,r11,r29
	ctx.r9.u64 = r11.u64 + r29.u64;
	// rlwinm r11,r9,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r28
	ctx.r8.u64 = r11.u64 + r28.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f31,r7,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, temp.u32);
loc_83151FC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83151FD0"))) PPC_WEAK_FUNC(sub_83151FD0);
PPC_FUNC_IMPL(__imp__sub_83151FD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bne cr6,0x83152094
	if (!cr6.eq) goto loc_83152094;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r6,-1
	r11.s64 = ctx.r6.s64 + -1;
	// addi r10,r5,12
	ctx.r10.s64 = ctx.r5.s64 + 12;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r4,4
	r11.s64 = ctx.r4.s64 + 4;
	// subf r8,r4,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r4.s64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_83152000:
	// lfs f0,-12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	f0.f64 = double(temp.f32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f12,-4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f7,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// stfs f6,4(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f4,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// lfs f2,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f1,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f2
	f0.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f10,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,16(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// lfs f9,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// lfs f7,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// lfs f6,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// stfs f5,24(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// bne 0x83152000
	if (!cr0.eq) goto loc_83152000;
	// blr 
	return;
loc_83152094:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r6,-1
	r11.s64 = ctx.r6.s64 + -1;
	// addi r10,r5,12
	ctx.r10.s64 = ctx.r5.s64 + 12;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r4,4
	r11.s64 = ctx.r4.s64 + 4;
	// subf r8,r4,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r4.s64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_831520B4:
	// lfs f0,-12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	f0.f64 = double(temp.f32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f0,f1,f13
	ctx.f12.f64 = double(float(f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f12,-4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r11,r8
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f10,f1,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64 + ctx.f11.f64));
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f2,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f0,f2,f1,f8
	f0.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 + ctx.f8.f64));
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f13,f1,f7
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f7.f64));
	// lfs f6,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f11,f1,f6
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 + ctx.f6.f64));
	// lfs f5,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f9,f1,f5
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f5.f64));
	// lfs f4,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// stfs f8,16(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// lfs f7,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f7,f1,f4
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f1.f64 + ctx.f4.f64));
	// stfs f6,20(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// lfs f3,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// lfs f5,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f5,f1,f3
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f1.f64 + ctx.f3.f64));
	// stfs f4,24(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// bne 0x831520b4
	if (!cr0.eq) goto loc_831520B4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83152148"))) PPC_WEAK_FUNC(sub_83152148);
PPC_FUNC_IMPL(__imp__sub_83152148) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831b1438
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x831522e4
	if (cr6.eq) goto loc_831522E4;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r5,12
	ctx.r9.s64 = ctx.r5.s64 + 12;
	// addi r11,r4,4
	r11.s64 = ctx.r4.s64 + 4;
	// subf r8,r4,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r4.s64;
loc_83152170:
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// lfs f0,-12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	f0.f64 = double(temp.f32);
	// clrldi r5,r10,32
	ctx.r5.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// clrldi r4,r7,32
	ctx.r4.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// std r5,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r5.u64);
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// std r4,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r4.u64);
	// clrldi r5,r3,32
	ctx.r5.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lfd f10,-104(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// clrldi r3,r7,32
	ctx.r3.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// lfd f11,-112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// addi r4,r10,3
	ctx.r4.s64 = ctx.r10.s64 + 3;
	// std r5,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r5.u64);
	// std r3,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r3.u64);
	// addi r3,r10,-2
	ctx.r3.s64 = ctx.r10.s64 + -2;
	// clrldi r5,r4,32
	ctx.r5.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// lfd f7,-96(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// lfd f6,-88(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// std r5,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r5.u64);
	// clrldi r5,r3,32
	ctx.r5.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// clrldi r4,r7,32
	ctx.r4.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// lfd f5,-80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// std r5,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r5.u64);
	// lfd f28,-64(r1)
	f28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// std r4,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r4.u64);
	// lfd f4,-72(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// lfs f3,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// lfs f31,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	f31.f64 = double(temp.f32);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// lfs f30,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	f30.f64 = double(temp.f32);
	// addi r7,r10,5
	ctx.r7.s64 = ctx.r10.s64 + 5;
	// lfs f29,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	f29.f64 = double(temp.f32);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// fcfid f28,f28
	f28.f64 = double(f28.s64);
	// clrldi r4,r7,32
	ctx.r4.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// fcfid f4,f4
	ctx.f4.f64 = double(ctx.f4.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmadds f11,f11,f1,f2
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 + ctx.f2.f64));
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// frsp f28,f28
	f28.f64 = double(float(f28.f64));
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// fmadds f10,f10,f1,f2
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f1.f64 + ctx.f2.f64));
	// fmadds f7,f7,f1,f2
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f1.f64 + ctx.f2.f64));
	// fmadds f5,f5,f1,f2
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f1.f64 + ctx.f2.f64));
	// fmadds f28,f28,f1,f2
	f28.f64 = double(float(f28.f64 * ctx.f1.f64 + ctx.f2.f64));
	// fmadds f4,f4,f1,f2
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f1.f64 + ctx.f2.f64));
	// fmadds f0,f28,f0,f13
	f0.f64 = double(float(f28.f64 * f0.f64 + ctx.f13.f64));
	// stfs f0,-4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// fmadds f13,f6,f1,f2
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f1.f64 + ctx.f2.f64));
	// lfsx f6,r11,r8
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f0,f11,f6,f12
	f0.f64 = double(float(ctx.f11.f64 * ctx.f6.f64 + ctx.f12.f64));
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f12,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f10,f12,f9
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f10,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f7,f10,f8
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f8.f64));
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f8,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f13,f8,f3
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f3.f64));
	// stfs f7,12(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lfs f6,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + f31.f64));
	// stfs f5,16(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// lfs f3,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f0,f4,f3,f30
	f0.f64 = double(float(ctx.f4.f64 * ctx.f3.f64 + f30.f64));
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// lfs f13,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// std r4,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r4.u64);
	// lfd f12,-56(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// addi r3,r10,-2
	ctx.r3.s64 = ctx.r10.s64 + -2;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// cmplw cr6,r3,r6
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, xer);
	// fmadds f9,f10,f1,f2
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64 + ctx.f2.f64));
	// fmadds f8,f9,f13,f29
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + f29.f64));
	// stfs f8,24(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// blt cr6,0x83152170
	if (cr6.lt) goto loc_83152170;
loc_831522E4:
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831b1484
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831522F8"))) PPC_WEAK_FUNC(sub_831522F8);
PPC_FUNC_IMPL(__imp__sub_831522F8) {
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
	// bl 0x83151b70
	sub_83151B70(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83152330
	if (cr6.eq) goto loc_83152330;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83152330:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83152348"))) PPC_WEAK_FUNC(sub_83152348);
PPC_FUNC_IMPL(__imp__sub_83152348) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r10,r11,24276
	ctx.r10.s64 = r11.s64 + 24276;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x8314eaa0
	sub_8314EAA0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83152390
	if (cr6.eq) goto loc_83152390;
	// li r4,108
	ctx.r4.s64 = 108;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83152390:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831523A8"))) PPC_WEAK_FUNC(sub_831523A8);
PPC_FUNC_IMPL(__imp__sub_831523A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r10,24524
	ctx.r5.s64 = ctx.r10.s64 + 24524;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83167fd8
	sub_83167FD8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r3.u32);
	// bne cr6,0x83152414
	if (!cr6.eq) goto loc_83152414;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,24512
	ctx.r4.s64 = r11.s64 + 24512;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83151b70
	sub_83151B70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831529b0
	goto loc_831529B0;
loc_83152414:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lfs f30,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f30.f64 = double(temp.f32);
	// ble cr6,0x83152450
	if (!cr6.gt) goto loc_83152450;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_83152434:
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfsx f30,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, temp.u32);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x83152434
	if (cr6.lt) goto loc_83152434;
loc_83152450:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r5,r10,24500
	ctx.r5.s64 = ctx.r10.s64 + 24500;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83167fd8
	sub_83167FD8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// bne cr6,0x8315249c
	if (!cr6.eq) goto loc_8315249C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,24488
	ctx.r4.s64 = r11.s64 + 24488;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83151b70
	sub_83151B70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831529b0
	goto loc_831529B0;
loc_8315249C:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x831524cc
	if (!cr6.gt) goto loc_831524CC;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_831524B0:
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r30,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, r30.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x831524b0
	if (cr6.lt) goto loc_831524B0;
loc_831524CC:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r5,r11,24472
	ctx.r5.s64 = r11.s64 + 24472;
	// bl 0x83167fd8
	sub_83167FD8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// bne cr6,0x83152514
	if (!cr6.eq) goto loc_83152514;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,24460
	ctx.r4.s64 = r11.s64 + 24460;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83151b70
	sub_83151B70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831529b0
	goto loc_831529B0;
loc_83152514:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x8315253c
	if (!cr6.gt) goto loc_8315253C;
loc_83152524:
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stbx r30,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, r30.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83152524
	if (cr6.lt) goto loc_83152524;
loc_8315253C:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r5,r10,24440
	ctx.r5.s64 = ctx.r10.s64 + 24440;
	// rlwinm r4,r11,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x83167fd8
	sub_83167FD8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// bne cr6,0x83152588
	if (!cr6.eq) goto loc_83152588;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,24428
	ctx.r4.s64 = r11.s64 + 24428;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83151b70
	sub_83151B70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831529b0
	goto loc_831529B0;
loc_83152588:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f31,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// ble cr6,0x83152630
	if (!cr6.gt) goto loc_83152630;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r11,12
	r11.s64 = 12;
loc_831525A8:
	// lwz r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// addi r9,r11,-12
	ctx.r9.s64 = r11.s64 + -12;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stfsx f31,r9,r7
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, temp.u32);
	// lwz r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// add r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stfs f31,4(r6)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// add r5,r11,r9
	ctx.r5.u64 = r11.u64 + ctx.r9.u64;
	// stfs f31,-4(r5)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + -4, temp.u32);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stfsx f31,r11,r4
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + ctx.r4.u32, temp.u32);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// add r3,r11,r9
	ctx.r3.u64 = r11.u64 + ctx.r9.u64;
	// stfs f31,4(r3)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// stfs f31,8(r9)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// stfs f31,12(r7)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// add r6,r11,r9
	ctx.r6.u64 = r11.u64 + ctx.r9.u64;
	// stfs f31,16(r6)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stfsx f30,r10,r5
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stfs f30,4(r4)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// blt cr6,0x831525a8
	if (cr6.lt) goto loc_831525A8;
loc_83152630:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r5,r10,24408
	ctx.r5.s64 = ctx.r10.s64 + 24408;
	// rlwinm r4,r11,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x83167fd8
	sub_83167FD8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// bne cr6,0x8315267c
	if (!cr6.eq) goto loc_8315267C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,24396
	ctx.r4.s64 = r11.s64 + 24396;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83151b70
	sub_83151B70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831529b0
	goto loc_831529B0;
loc_8315267C:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x83152700
	if (!cr6.gt) goto loc_83152700;
	// li r11,12
	r11.s64 = 12;
loc_83152690:
	// lwz r8,92(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// addi r9,r11,-12
	ctx.r9.s64 = r11.s64 + -12;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfsx f31,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, temp.u32);
	// lwz r8,92(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stfs f31,4(r7)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + r11.u64;
	// stfs f31,-4(r6)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + -4, temp.u32);
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// stfsx f31,r5,r11
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + r11.u32, temp.u32);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + r11.u64;
	// stfs f31,4(r4)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + r11.u64;
	// stfs f31,8(r3)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// stfs f31,12(r9)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + r11.u64;
	// stfs f31,16(r8)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x83152690
	if (cr6.lt) goto loc_83152690;
loc_83152700:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r5,r10,24372
	ctx.r5.s64 = ctx.r10.s64 + 24372;
	// rlwinm r4,r11,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x83167fd8
	sub_83167FD8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// bne cr6,0x8315274c
	if (!cr6.eq) goto loc_8315274C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,24360
	ctx.r4.s64 = r11.s64 + 24360;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83151b70
	sub_83151B70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831529b0
	goto loc_831529B0;
loc_8315274C:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x831527ec
	if (!cr6.gt) goto loc_831527EC;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r11,12
	r11.s64 = 12;
loc_83152764:
	// lwz r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// addi r9,r11,-12
	ctx.r9.s64 = r11.s64 + -12;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stfsx f31,r9,r7
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, temp.u32);
	// lwz r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// add r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stfs f31,4(r6)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// add r5,r11,r9
	ctx.r5.u64 = r11.u64 + ctx.r9.u64;
	// stfs f31,-4(r5)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + -4, temp.u32);
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// stfsx f31,r11,r4
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + ctx.r4.u32, temp.u32);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// add r3,r11,r9
	ctx.r3.u64 = r11.u64 + ctx.r9.u64;
	// stfs f31,4(r3)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// stfs f31,8(r9)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// stfs f31,12(r7)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// add r6,r11,r9
	ctx.r6.u64 = r11.u64 + ctx.r9.u64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// stfs f31,16(r6)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// stfsx f30,r10,r5
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stfs f30,4(r4)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// blt cr6,0x83152764
	if (cr6.lt) goto loc_83152764;
loc_831527EC:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r5,r10,24336
	ctx.r5.s64 = ctx.r10.s64 + 24336;
	// rlwinm r4,r11,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x83167fd8
	sub_83167FD8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// bne cr6,0x83152838
	if (!cr6.eq) goto loc_83152838;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,24324
	ctx.r4.s64 = r11.s64 + 24324;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83151b70
	sub_83151B70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831529b0
	goto loc_831529B0;
loc_83152838:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x831528bc
	if (!cr6.gt) goto loc_831528BC;
	// li r11,12
	r11.s64 = 12;
loc_8315284C:
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r9,r11,-12
	ctx.r9.s64 = r11.s64 + -12;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfsx f31,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stfs f31,4(r7)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// add r6,r11,r9
	ctx.r6.u64 = r11.u64 + ctx.r9.u64;
	// stfs f31,-4(r6)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + -4, temp.u32);
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stfsx f31,r11,r5
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + ctx.r5.u32, temp.u32);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// add r4,r11,r9
	ctx.r4.u64 = r11.u64 + ctx.r9.u64;
	// stfs f31,4(r4)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// add r3,r11,r9
	ctx.r3.u64 = r11.u64 + ctx.r9.u64;
	// stfs f31,8(r3)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// stfs f31,12(r9)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// add r8,r11,r9
	ctx.r8.u64 = r11.u64 + ctx.r9.u64;
	// stfs f31,16(r8)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x8315284c
	if (cr6.lt) goto loc_8315284C;
loc_831528BC:
	// bl 0x8314ed48
	sub_8314ED48(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x831529a4
	if (!cr6.eq) goto loc_831529A4;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r5,r10,24296
	ctx.r5.s64 = ctx.r10.s64 + 24296;
	// rlwinm r4,r11,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// bl 0x83167fd8
	sub_83167FD8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// bne cr6,0x83152914
	if (!cr6.eq) goto loc_83152914;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,24284
	ctx.r4.s64 = r11.s64 + 24284;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83151b70
	sub_83151B70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831529b0
	goto loc_831529B0;
loc_83152914:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x831529a4
	if (!cr6.gt) goto loc_831529A4;
	// li r11,12
	r11.s64 = 12;
loc_83152928:
	// li r10,8
	ctx.r10.s64 = 8;
loc_8315292C:
	// lwz r8,104(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// addi r9,r11,-12
	ctx.r9.s64 = r11.s64 + -12;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stfsx f31,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// lwz r8,104(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stfs f31,4(r6)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// add r5,r11,r9
	ctx.r5.u64 = r11.u64 + ctx.r9.u64;
	// stfs f31,-4(r5)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + -4, temp.u32);
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// stfsx f31,r11,r4
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + ctx.r4.u32, temp.u32);
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// add r3,r11,r9
	ctx.r3.u64 = r11.u64 + ctx.r9.u64;
	// stfs f31,4(r3)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// stfs f31,8(r9)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// add r8,r11,r9
	ctx.r8.u64 = r11.u64 + ctx.r9.u64;
	// stfs f31,12(r8)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// add r6,r11,r9
	ctx.r6.u64 = r11.u64 + ctx.r9.u64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// stfs f31,16(r6)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// bne 0x8315292c
	if (!cr0.eq) goto loc_8315292C;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// blt cr6,0x83152928
	if (cr6.lt) goto loc_83152928;
loc_831529A4:
	// li r11,1
	r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
loc_831529B0:
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

__attribute__((alias("__imp__sub_831529D0"))) PPC_WEAK_FUNC(sub_831529D0);
PPC_FUNC_IMPL(__imp__sub_831529D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// bl 0x831b0b0c
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4464(r1)
	ea = -4464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// li r9,128
	ctx.r9.s64 = 128;
	// li r23,0
	r23.s64 = 0;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r9,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r23,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r23.u32);
	// lfs f0,-9876(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9876);
	f0.f64 = double(temp.f32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stfs f0,204(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// mr r11,r23
	r11.u64 = r23.u64;
	// stw r8,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r8.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
loc_83152A20:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r10,r10,516
	ctx.r10.s64 = ctx.r10.s64 + 516;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x83152a20
	if (cr6.lt) goto loc_83152A20;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83144dc0
	sub_83144DC0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r24,r23
	r24.u64 = r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x83152efc
	if (!cr6.gt) goto loc_83152EFC;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// mr r22,r23
	r22.u64 = r23.u64;
	// mr r21,r23
	r21.u64 = r23.u64;
	// li r25,1
	r25.s64 = 1;
	// lfs f31,24296(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24296);
	f31.f64 = double(temp.f32);
	// lfs f30,24544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24544);
	f30.f64 = double(temp.f32);
loc_83152A70:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwzx r10,r21,r11
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83152ee4
	if (cr6.eq) goto loc_83152EE4;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwzx r3,r21,r11
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83152ee4
	if (cr6.eq) goto loc_83152EE4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83151c70
	sub_83151C70(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// mr r30,r23
	r30.u64 = r23.u64;
	// mr r27,r29
	r27.u64 = r29.u64;
	// mr r28,r22
	r28.u64 = r22.u64;
	// subf r26,r29,r11
	r26.s64 = r11.s64 - r29.s64;
loc_83152AC4:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lfsx f0,r11,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + r28.u32);
	f0.f64 = double(temp.f32);
	// lfsx f13,r28,r10
	temp.u32 = PPC_LOAD_U32(r28.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x83152ba4
	if (cr6.eq) goto loc_83152BA4;
	// lwzx r11,r26,r27
	r11.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83152c40
	if (cr6.eq) goto loc_83152C40;
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83152b04
	if (cr6.lt) goto loc_83152B04;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// b 0x83152b10
	goto loc_83152B10;
loc_83152B04:
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
loc_83152B10:
	// lwz r11,64(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x83152b28
	if (cr6.lt) goto loc_83152B28;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// b 0x83152b30
	goto loc_83152B30;
loc_83152B28:
	// lwz r6,72(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_83152B30:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83152b90
	if (cr6.eq) goto loc_83152B90;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83152b90
	if (cr6.eq) goto loc_83152B90;
	// lwz r9,200(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r7,76(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfsx f11,r28,r10
	temp.u32 = PPC_LOAD_U32(r28.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// lbzx r11,r8,r24
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + r24.u32);
	// fsubs f9,f0,f11
	ctx.f9.f64 = double(float(f0.f64 - ctx.f11.f64));
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 2);
	// lfsx f8,r10,r7
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f2,f8,f11
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fdivs f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// fmuls f1,f7,f8
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// bl 0x83152148
	sub_83152148(ctx, base);
	// add r9,r30,r29
	ctx.r9.u64 = r30.u64 + r29.u64;
	// stb r25,80(r9)
	PPC_STORE_U8(ctx.r9.u32 + 80, r25.u8);
loc_83152B90:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lfsx f0,r11,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + r28.u32);
	f0.f64 = double(temp.f32);
	// stfsx f0,r28,r10
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + ctx.r10.u32, temp.u32);
	// b 0x83152c40
	goto loc_83152C40;
loc_83152BA4:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lbzx r9,r11,r24
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + r24.u32);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lfsx f13,r8,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fcmpu cr6,f1,f30
	cr6.compare(ctx.f1.f64, f30.f64);
	// ble cr6,0x83152bcc
	if (!cr6.gt) goto loc_83152BCC;
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, f31.f64);
	// blt cr6,0x83152c40
	if (cr6.lt) goto loc_83152C40;
loc_83152BCC:
	// lwzx r11,r26,r27
	r11.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lwz r9,192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// blt cr6,0x83152bec
	if (cr6.lt) goto loc_83152BEC;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// b 0x83152bf8
	goto loc_83152BF8;
loc_83152BEC:
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lwzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
loc_83152BF8:
	// lwz r11,64(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x83152c10
	if (cr6.lt) goto loc_83152C10;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// b 0x83152c18
	goto loc_83152C18;
loc_83152C10:
	// lwz r6,72(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_83152C18:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83152c40
	if (cr6.eq) goto loc_83152C40;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83152c40
	if (cr6.eq) goto loc_83152C40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83152c40
	if (cr6.eq) goto loc_83152C40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83151fd0
	sub_83151FD0(ctx, base);
	// add r11,r30,r29
	r11.u64 = r30.u64 + r29.u64;
	// stb r25,80(r11)
	PPC_STORE_U8(r11.u32 + 80, r25.u8);
loc_83152C40:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplwi cr6,r30,8
	cr6.compare<uint32_t>(r30.u32, 8, xer);
	// blt cr6,0x83152ac4
	if (cr6.lt) goto loc_83152AC4;
	// bl 0x8314ed48
	sub_8314ED48(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83152d24
	if (!cr6.eq) goto loc_83152D24;
	// mr r27,r23
	r27.u64 = r23.u64;
	// rlwinm r28,r24,6,0,25
	r28.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r26,r1,128
	r26.s64 = ctx.r1.s64 + 128;
loc_83152C6C:
	// addi r11,r1,208
	r11.s64 = ctx.r1.s64 + 208;
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, xer);
	// lbzx r11,r27,r11
	r11.u64 = PPC_LOAD_U8(r27.u32 + r11.u32);
	// bge cr6,0x83152d10
	if (!cr6.lt) goto loc_83152D10;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83152d10
	if (cr6.eq) goto loc_83152D10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83152d10
	if (cr6.eq) goto loc_83152D10;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_83152C9C:
	// lwz r11,64(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, r11.u32, xer);
	// bge cr6,0x83152d00
	if (!cr6.lt) goto loc_83152D00;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r6,72(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83152d00
	if (cr6.eq) goto loc_83152D00;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// add r10,r28,r7
	ctx.r10.u64 = r28.u64 + ctx.r7.u64;
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,104(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lbzx r11,r11,r24
	r11.u64 = PPC_LOAD_U8(r11.u32 + r24.u32);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 2);
	// lfsx f0,r3,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	f0.f64 = double(temp.f32);
	// lfsx f13,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fcmpu cr6,f1,f30
	cr6.compare(ctx.f1.f64, f30.f64);
	// ble cr6,0x83152cf0
	if (!cr6.gt) goto loc_83152CF0;
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, f31.f64);
	// blt cr6,0x83152d00
	if (cr6.lt) goto loc_83152D00;
loc_83152CF0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83151fd0
	sub_83151FD0(ctx, base);
	// add r11,r7,r29
	r11.u64 = ctx.r7.u64 + r29.u64;
	// stb r25,80(r11)
	PPC_STORE_U8(r11.u32 + 80, r25.u8);
loc_83152D00:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r7,8
	cr6.compare<uint32_t>(ctx.r7.u32, 8, xer);
	// blt cr6,0x83152c9c
	if (cr6.lt) goto loc_83152C9C;
loc_83152D10:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmplwi cr6,r27,8
	cr6.compare<uint32_t>(r27.u32, 8, xer);
	// blt cr6,0x83152c6c
	if (cr6.lt) goto loc_83152C6C;
loc_83152D24:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83152D34:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x83152d34
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83152D34;
	// mr r30,r23
	r30.u64 = r23.u64;
	// addi r26,r1,96
	r26.s64 = ctx.r1.s64 + 96;
	// mr r28,r22
	r28.u64 = r22.u64;
	// addi r27,r29,32
	r27.s64 = r29.s64 + 32;
loc_83152D50:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lfsx f0,r11,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + r28.u32);
	f0.f64 = double(temp.f32);
	// lfsx f13,r28,r10
	temp.u32 = PPC_LOAD_U32(r28.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x83152e34
	if (cr6.eq) goto loc_83152E34;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83152ecc
	if (cr6.eq) goto loc_83152ECC;
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83152d90
	if (cr6.lt) goto loc_83152D90;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// b 0x83152d9c
	goto loc_83152D9C;
loc_83152D90:
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
loc_83152D9C:
	// lwz r11,64(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// addi r10,r30,8
	ctx.r10.s64 = r30.s64 + 8;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x83152db8
	if (cr6.lt) goto loc_83152DB8;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// b 0x83152dc0
	goto loc_83152DC0;
loc_83152DB8:
	// lwz r6,72(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_83152DC0:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83152e20
	if (cr6.eq) goto loc_83152E20;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83152e20
	if (cr6.eq) goto loc_83152E20;
	// lwz r9,200(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r7,76(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfsx f11,r28,r10
	temp.u32 = PPC_LOAD_U32(r28.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// lbzx r11,r8,r24
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + r24.u32);
	// fsubs f9,f0,f11
	ctx.f9.f64 = double(float(f0.f64 - ctx.f11.f64));
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 2);
	// lfsx f8,r10,r7
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f2,f8,f11
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fdivs f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// fmuls f1,f7,f8
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// bl 0x83152148
	sub_83152148(ctx, base);
	// add r9,r30,r29
	ctx.r9.u64 = r30.u64 + r29.u64;
	// stb r25,88(r9)
	PPC_STORE_U8(ctx.r9.u32 + 88, r25.u8);
loc_83152E20:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lfsx f0,r11,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + r28.u32);
	f0.f64 = double(temp.f32);
	// stfsx f0,r28,r10
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + ctx.r10.u32, temp.u32);
	// b 0x83152ecc
	goto loc_83152ECC;
loc_83152E34:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lbzx r9,r11,r24
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + r24.u32);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lfsx f13,r8,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, f31.f64);
	// blt cr6,0x83152ecc
	if (cr6.lt) goto loc_83152ECC;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lwz r9,192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// blt cr6,0x83152e74
	if (cr6.lt) goto loc_83152E74;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// b 0x83152e80
	goto loc_83152E80;
loc_83152E74:
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lwzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
loc_83152E80:
	// lwz r11,64(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// addi r9,r30,8
	ctx.r9.s64 = r30.s64 + 8;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// blt cr6,0x83152e9c
	if (cr6.lt) goto loc_83152E9C;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// b 0x83152ea4
	goto loc_83152EA4;
loc_83152E9C:
	// lwz r6,72(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_83152EA4:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83152ecc
	if (cr6.eq) goto loc_83152ECC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83152ecc
	if (cr6.eq) goto loc_83152ECC;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83152ecc
	if (cr6.eq) goto loc_83152ECC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83151fd0
	sub_83151FD0(ctx, base);
	// add r11,r30,r29
	r11.u64 = r30.u64 + r29.u64;
	// stb r25,88(r11)
	PPC_STORE_U8(r11.u32 + 88, r25.u8);
loc_83152ECC:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplwi cr6,r30,8
	cr6.compare<uint32_t>(r30.u32, 8, xer);
	// blt cr6,0x83152d50
	if (cr6.lt) goto loc_83152D50;
loc_83152EE4:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// addi r22,r22,32
	r22.s64 = r22.s64 + 32;
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// blt cr6,0x83152a70
	if (cr6.lt) goto loc_83152A70;
loc_83152EFC:
	// lwz r10,64(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// mr r11,r23
	r11.u64 = r23.u64;
	// lwz r9,192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,68(r29)
	PPC_STORE_U32(r29.u32 + 68, ctx.r10.u32);
	// beq cr6,0x83152f30
	if (cr6.eq) goto loc_83152F30;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
loc_83152F18:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r23,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r23.u32);
	// lwz r9,192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83152f18
	if (cr6.lt) goto loc_83152F18;
loc_83152F30:
	// addi r1,r1,4464
	ctx.r1.s64 = ctx.r1.s64 + 4464;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_83152F40"))) PPC_WEAK_FUNC(sub_83152F40);
PPC_FUNC_IMPL(__imp__sub_83152F40) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,18220
	ctx.r5.s64 = r11.s64 + 18220;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83153014
	if (cr6.eq) goto loc_83153014;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// addi r8,r9,24276
	ctx.r8.s64 = ctx.r9.s64 + 24276;
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r10,r31,44
	ctx.r10.s64 = r31.s64 + 44;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stw r28,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r28.u32);
	// stw r27,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r27.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83152FD4:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83152fd4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83152FD4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831523a8
	sub_831523A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83153034
	if (!cr6.eq) goto loc_83153034;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_83153014:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,24548
	ctx.r4.s64 = r11.s64 + 24548;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_83153034:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83153040"))) PPC_WEAK_FUNC(sub_83153040);
PPC_FUNC_IMPL(__imp__sub_83153040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ble cr6,0x83153084
	if (!cr6.gt) goto loc_83153084;
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_83153068:
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x83153068
	if (cr6.lt) goto loc_83153068;
loc_83153084:
	// lwz r11,80(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r11.u32);
	// lwz r9,80(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// addi r11,r3,84
	r11.s64 = ctx.r3.s64 + 84;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_831530A4:
	// lfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	f0.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r8,80(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x831530a4
	if (cr6.lt) goto loc_831530A4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831530C8"))) PPC_WEAK_FUNC(sub_831530C8);
PPC_FUNC_IMPL(__imp__sub_831530C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r21{};
	PPCRegister r24{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r9,r3,64
	ctx.r9.s64 = ctx.r3.s64 + 64;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r8,-1
	ctx.r8.s64 = -1;
	// lfs f0,2244(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2244);
	f0.f64 = double(temp.f32);
loc_831530E0:
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// stfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne 0x831530e0
	if (!cr0.eq) goto loc_831530E0;
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// lfs f0,-31000(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -31000);
	f0.f64 = double(temp.f32);
	// li r8,3
	ctx.r8.s64 = 3;
loc_83153118:
	// cmplwi cr6,r9,7
	cr6.compare<uint32_t>(ctx.r9.u32, 7, xer);
	// bgt cr6,0x83153310
	if (cr6.gt) goto loc_83153310;
	// lis r12,-31979
	r12.s64 = -2095775744;
	// addi r12,r12,12600
	r12.s64 = r12.s64 + 12600;
	// rlwinm r0,r9,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_83153158;
	case 1:
		goto loc_83153158;
	case 2:
		goto loc_8315317C;
	case 3:
		goto loc_831531B4;
	case 4:
		goto loc_831531EC;
	case 5:
		goto loc_83153220;
	case 6:
		goto loc_83153254;
	case 7:
		goto loc_831532B4;
	default:
		__builtin_unreachable();
	}
	// lwz r24,12632(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 12632);
	// lwz r24,12632(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 12632);
	// lwz r24,12668(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 12668);
	// lwz r24,12724(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 12724);
	// lwz r24,12780(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 12780);
	// lwz r24,12832(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 12832);
	// lwz r24,12884(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 12884);
	// lwz r24,12980(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 12980);
loc_83153158:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83153310
	if (!cr6.eq) goto loc_83153310;
	// addi r6,r9,16
	ctx.r6.s64 = ctx.r9.s64 + 16;
	// rlwinm r5,r9,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r5,r3
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, r11.u32);
	// lfs f13,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r6,r3
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, temp.u32);
	// b 0x83153310
	goto loc_83153310;
loc_8315317C:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8315319c
	if (!cr6.eq) goto loc_8315319C;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// lfs f13,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f11,72(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// b 0x83153310
	goto loc_83153310;
loc_8315319C:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x83153310
	if (!cr6.eq) goto loc_83153310;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// lfs f13,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,72(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// b 0x83153310
	goto loc_83153310;
loc_831531B4:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x831531d4
	if (!cr6.eq) goto loc_831531D4;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// lfs f13,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f11,76(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// b 0x83153310
	goto loc_83153310;
loc_831531D4:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x83153310
	if (!cr6.eq) goto loc_83153310;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// lfs f13,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,76(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// b 0x83153310
	goto loc_83153310;
loc_831531EC:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// bne cr6,0x83153210
	if (!cr6.eq) goto loc_83153210;
	// lfs f13,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,108(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f10,80(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// b 0x83153310
	goto loc_83153310;
loc_83153210:
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// lfs f13,108(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// b 0x83153310
	goto loc_83153310;
loc_83153220:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// bne cr6,0x83153244
	if (!cr6.eq) goto loc_83153244;
	// lfs f13,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f10,84(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// b 0x83153310
	goto loc_83153310;
loc_83153244:
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// lfs f13,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// b 0x83153310
	goto loc_83153310;
loc_83153254:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8315327c
	if (!cr6.eq) goto loc_8315327C;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// lfs f10,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f9,88(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// b 0x83153310
	goto loc_83153310;
loc_8315327C:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8315329c
	if (!cr6.eq) goto loc_8315329C;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// lfs f13,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f11,88(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// b 0x83153310
	goto loc_83153310;
loc_8315329C:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bne cr6,0x83153310
	if (!cr6.eq) goto loc_83153310;
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// lfs f13,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// b 0x83153310
	goto loc_83153310;
loc_831532B4:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x831532dc
	if (!cr6.eq) goto loc_831532DC;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// lfs f12,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f13,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f9,92(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// b 0x83153310
	goto loc_83153310;
loc_831532DC:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x831532fc
	if (!cr6.eq) goto loc_831532FC;
	// stw r10,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// lfs f13,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f11,92(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// b 0x83153310
	goto loc_83153310;
loc_831532FC:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bne cr6,0x83153310
	if (!cr6.eq) goto loc_83153310;
	// stw r8,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// lfs f13,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,92(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
loc_83153310:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r9,8
	cr6.compare<uint32_t>(ctx.r9.u32, 8, xer);
	// blt cr6,0x83153118
	if (cr6.lt) goto loc_83153118;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83153320"))) PPC_WEAK_FUNC(sub_83153320);
PPC_FUNC_IMPL(__imp__sub_83153320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r21{};
	PPCRegister r24{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r4,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r4.u32);
	// beq cr6,0x83153444
	if (cr6.eq) goto loc_83153444;
	// addi r29,r4,-1
	r29.s64 = ctx.r4.s64 + -1;
	// li r28,3
	r28.s64 = 3;
	// cmplwi cr6,r29,5
	cr6.compare<uint32_t>(r29.u32, 5, xer);
	// bgt cr6,0x831533ac
	if (cr6.gt) goto loc_831533AC;
	// lis r12,-31979
	r12.s64 = -2095775744;
	// addi r12,r12,13156
	r12.s64 = r12.s64 + 13156;
	// rlwinm r0,r29,2,0,29
	r0.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r29.u64) {
	case 0:
		goto loc_8315337C;
	case 1:
		goto loc_8315337C;
	case 2:
		goto loc_8315338C;
	case 3:
		goto loc_8315338C;
	case 4:
		goto loc_8315339C;
	case 5:
		goto loc_8315339C;
	default:
		__builtin_unreachable();
	}
	// lwz r24,13180(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 13180);
	// lwz r24,13180(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 13180);
	// lwz r24,13196(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 13196);
	// lwz r24,13196(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 13196);
	// lwz r24,13212(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 13212);
	// lwz r24,13212(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 13212);
loc_8315337C:
	// li r11,1
	r11.s64 = 1;
	// li r28,0
	r28.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// b 0x831533c4
	goto loc_831533C4;
loc_8315338C:
	// li r11,2
	r11.s64 = 2;
	// li r28,0
	r28.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// b 0x831533c4
	goto loc_831533C4;
loc_8315339C:
	// li r11,2
	r11.s64 = 2;
	// li r28,1
	r28.s64 = 1;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// b 0x831533c4
	goto loc_831533C4;
loc_831533AC:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,24696
	ctx.r4.s64 = r11.s64 + 24696;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
loc_831533C4:
	// lis r30,-32231
	r30.s64 = -2112290816;
	// cmplwi cr6,r29,5
	cr6.compare<uint32_t>(r29.u32, 5, xer);
	// lfs f0,24564(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24564);
	f0.f64 = double(temp.f32);
	// stfs f0,1316(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1316, temp.u32);
	// stfs f0,1320(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1320, temp.u32);
	// stfs f0,1324(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1324, temp.u32);
	// stfs f0,1328(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1328, temp.u32);
	// bgt cr6,0x83153420
	if (cr6.gt) goto loc_83153420;
	// lis r12,-31979
	r12.s64 = -2095775744;
	// addi r12,r12,13308
	r12.s64 = r12.s64 + 13308;
	// rlwinm r0,r29,2,0,29
	r0.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r29.u64) {
	case 0:
		goto loc_83153414;
	case 1:
		goto loc_83153430;
	case 2:
		goto loc_83153414;
	case 3:
		goto loc_83153430;
	case 4:
		goto loc_83153414;
	case 5:
		goto loc_83153430;
	default:
		__builtin_unreachable();
	}
	// lwz r24,13332(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 13332);
	// lwz r24,13360(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 13360);
	// lwz r24,13332(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 13332);
	// lwz r24,13360(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 13360);
	// lwz r24,13332(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 13332);
	// lwz r24,13360(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 13360);
loc_83153414:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// b 0x83153434
	goto loc_83153434;
loc_83153420:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,24664
	ctx.r4.s64 = r11.s64 + 24664;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_83153430:
	// lfs f0,24564(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24564);
	f0.f64 = double(temp.f32);
loc_83153434:
	// stfs f0,1332(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1332, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,1220
	ctx.r3.s64 = r31.s64 + 1220;
	// bl 0x831530c8
	sub_831530C8(ctx, base);
loc_83153444:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83153450"))) PPC_WEAK_FUNC(sub_83153450);
PPC_FUNC_IMPL(__imp__sub_83153450) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b10
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83153488
	if (cr6.eq) goto loc_83153488;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83153488:
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x831539d0
	if (cr6.eq) goto loc_831539D0;
	// lwz r25,68(r30)
	r25.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// li r28,0
	r28.s64 = 0;
	// li r24,1
	r24.s64 = 1;
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x83153944
	if (cr6.eq) goto loc_83153944;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r27,r30,80
	r27.s64 = r30.s64 + 80;
	// li r26,-1
	r26.s64 = -1;
	// lfs f31,2240(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f31.f64 = double(temp.f32);
	// addi r23,r11,24580
	r23.s64 = r11.s64 + 24580;
	// addi r22,r10,24616
	r22.s64 = ctx.r10.s64 + 24616;
loc_831534CC:
	// lbzx r11,r27,r31
	r11.u64 = PPC_LOAD_U8(r27.u32 + r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83153938
	if (cr6.eq) goto loc_83153938;
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(r31.u32, 8, xer);
	// blt cr6,0x831534e8
	if (cr6.lt) goto loc_831534E8;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// b 0x83153930
	goto loc_83153930;
loc_831534E8:
	// rlwinm r11,r31,3,0,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lwz r10,1220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1220);
	// subf r9,r10,r26
	ctx.r9.s64 = r26.s64 - ctx.r10.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 ^ 1;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x83153938
	if (cr6.eq) goto loc_83153938;
	// addi r11,r31,321
	r11.s64 = r31.s64 + 321;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bne cr6,0x83153528
	if (!cr6.eq) goto loc_83153528;
	// stbx r28,r27,r31
	PPC_STORE_U8(r27.u32 + r31.u32, r28.u8);
	// b 0x83153938
	goto loc_83153938;
loc_83153528:
	// cmplwi cr6,r31,5
	cr6.compare<uint32_t>(r31.u32, 5, xer);
	// bne cr6,0x83153758
	if (!cr6.eq) goto loc_83153758;
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// ble cr6,0x83153794
	if (!cr6.gt) goto loc_83153794;
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r7,72(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83153794
	if (cr6.eq) goto loc_83153794;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// cmpwi cr6,r7,4
	cr6.compare<int32_t>(ctx.r7.s32, 4, xer);
	// blt cr6,0x831536dc
	if (cr6.lt) goto loc_831536DC;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// addi r11,r29,776
	r11.s64 = r29.s64 + 776;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// addi r10,r6,8
	ctx.r10.s64 = ctx.r6.s64 + 8;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_83153570:
	// lfs f13,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f12,84(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f10,124(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 124);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,92(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,120(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,88(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// stfs f11,120(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 120, temp.u32);
	// lfs f2,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f9,f10,f11
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f11.f64));
	// stfs f8,124(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 124, temp.u32);
	// stfs f4,56(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r11.u32 + 56, temp.u32);
	// fmadds f13,f8,f7,f1
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f1.f64));
	// fnmsubs f12,f6,f5,f13
	ctx.f12.f64 = double(float(-(ctx.f6.f64 * ctx.f5.f64 - ctx.f13.f64)));
	// fnmsubs f11,f4,f3,f12
	ctx.f11.f64 = double(float(-(ctx.f4.f64 * ctx.f3.f64 - ctx.f12.f64)));
	// stfs f11,52(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 52, temp.u32);
	// lfs f10,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f2,f11
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// stfs f9,-8(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// lfs f8,84(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,92(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,88(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,124(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 124);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,124(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 124, temp.u32);
	// fmuls f11,f10,f8
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// stfs f3,56(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r11.u32 + 56, temp.u32);
	// stfs f11,120(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 120, temp.u32);
	// fmadds f10,f7,f1,f11
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f1.f64 + ctx.f11.f64));
	// fmadds f9,f12,f6,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f10.f64));
	// fnmsubs f8,f5,f4,f9
	ctx.f8.f64 = double(float(-(ctx.f5.f64 * ctx.f4.f64 - ctx.f9.f64)));
	// fnmsubs f7,f3,f2,f8
	ctx.f7.f64 = double(float(-(ctx.f3.f64 * ctx.f2.f64 - ctx.f8.f64)));
	// stfs f7,52(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 52, temp.u32);
	// lfs f6,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f13,f7
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// stfs f5,-4(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// lfs f4,84(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,92(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 92);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,88(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,124(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 124);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,120(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,124(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 124, temp.u32);
	// fmuls f7,f6,f4
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// stfs f7,120(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 120, temp.u32);
	// stfs f12,56(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 56, temp.u32);
	// fmadds f6,f3,f10,f7
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fmadds f5,f8,f2,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f2.f64 + ctx.f6.f64));
	// fnmsubs f4,f1,f13,f5
	ctx.f4.f64 = double(float(-(ctx.f1.f64 * ctx.f13.f64 - ctx.f5.f64)));
	// fnmsubs f3,f12,f11,f4
	ctx.f3.f64 = double(float(-(ctx.f12.f64 * ctx.f11.f64 - ctx.f4.f64)));
	// stfs f3,52(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r11.u32 + 52, temp.u32);
	// lfs f2,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f9,f3
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// stfs f1,0(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f13,124(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,92(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,120(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,88(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,84(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f2,f7
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// fmadds f5,f12,f13,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f6.f64));
	// stfs f11,124(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 124, temp.u32);
	// stfs f6,120(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 120, temp.u32);
	// fmadds f4,f11,f10,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fnmsubs f3,f9,f8,f4
	ctx.f3.f64 = double(float(-(ctx.f9.f64 * ctx.f8.f64 - ctx.f4.f64)));
	// lfs f2,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fnmsubs f13,f2,f1,f3
	ctx.f13.f64 = double(float(-(ctx.f2.f64 * ctx.f1.f64 - ctx.f3.f64)));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f2,56(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + 56, temp.u32);
	// stfs f13,52(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 52, temp.u32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f11,4(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x83153570
	if (!cr0.eq) goto loc_83153570;
loc_831536DC:
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bge cr6,0x83153758
	if (!cr6.lt) goto loc_83153758;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r29,776
	r11.s64 = r29.s64 + 776;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// subf r9,r8,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r8.s64;
loc_831536F4:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f12,84(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f10,124(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 124);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,92(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,120(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,88(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// stfs f11,120(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 120, temp.u32);
	// lfs f2,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f9,f10,f11
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f11.f64));
	// stfs f8,124(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 124, temp.u32);
	// stfs f4,56(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r11.u32 + 56, temp.u32);
	// fmadds f13,f8,f7,f1
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f1.f64));
	// fnmsubs f12,f6,f5,f13
	ctx.f12.f64 = double(float(-(ctx.f6.f64 * ctx.f5.f64 - ctx.f13.f64)));
	// fnmsubs f11,f4,f3,f12
	ctx.f11.f64 = double(float(-(ctx.f4.f64 * ctx.f3.f64 - ctx.f12.f64)));
	// stfs f11,52(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 52, temp.u32);
	// fmuls f10,f2,f11
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// stfs f10,0(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x831536f4
	if (!cr0.eq) goto loc_831536F4;
loc_83153758:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// bge cr6,0x8315392c
	if (!cr6.lt) goto loc_8315392C;
loc_83153764:
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// addi r11,r11,305
	r11.s64 = r11.s64 + 305;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// beq cr6,0x83153938
	if (cr6.eq) goto loc_83153938;
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x8315379c
	if (cr6.lt) goto loc_8315379C;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// b 0x831537a4
	goto loc_831537A4;
loc_83153794:
	// stb r28,5(r27)
	PPC_STORE_U8(r27.u32 + 5, r28.u8);
	// b 0x83153938
	goto loc_83153938;
loc_8315379C:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
loc_831537A4:
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, r11.u32, xer);
	// blt cr6,0x831537b8
	if (cr6.lt) goto loc_831537B8;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r11,r28
	r11.u64 = r28.u64;
	// b 0x831537c4
	goto loc_831537C4;
loc_831537B8:
	// rlwinm r11,r6,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,72(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
loc_831537C4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8315391c
	if (cr6.eq) goto loc_8315391C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315391c
	if (cr6.eq) goto loc_8315391C;
	// lbzx r9,r27,r6
	ctx.r9.u64 = PPC_LOAD_U8(r27.u32 + ctx.r6.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83153884
	if (cr6.eq) goto loc_83153884;
	// cmplw cr6,r31,r6
	cr6.compare<uint32_t>(r31.u32, ctx.r6.u32, xer);
	// beq cr6,0x83153884
	if (cr6.eq) goto loc_83153884;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// cmpwi cr6,r8,4
	cr6.compare<int32_t>(ctx.r8.s32, 4, xer);
	// blt cr6,0x83153854
	if (cr6.lt) goto loc_83153854;
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_83153804:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f13,f0,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f12.f64));
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f9,f0,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * f0.f64 + ctx.f10.f64));
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f6,f0,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * f0.f64 + ctx.f7.f64));
	// lfs f4,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// stfs f5,8(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f3,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f3,f0,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 * f0.f64 + ctx.f4.f64));
	// stfs f2,12(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bne 0x83153804
	if (!cr0.eq) goto loc_83153804;
loc_83153854:
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bge cr6,0x83153908
	if (!cr6.lt) goto loc_83153908;
	// subf r9,r7,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r7.s64;
loc_83153860:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmadds f11,f13,f0,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f12.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x83153860
	if (!cr0.eq) goto loc_83153860;
	// b 0x83153908
	goto loc_83153908;
loc_83153884:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// cmpwi cr6,r8,4
	cr6.compare<int32_t>(ctx.r8.s32, 4, xer);
	// blt cr6,0x831538e0
	if (cr6.lt) goto loc_831538E0;
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_831538A0:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * f0.f64));
	// stfs f8,8(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f7,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * f0.f64));
	// stfs f6,12(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bne 0x831538a0
	if (!cr0.eq) goto loc_831538A0;
loc_831538E0:
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bge cr6,0x83153908
	if (!cr6.lt) goto loc_83153908;
	// subf r9,r7,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r7.s64;
loc_831538EC:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x831538ec
	if (!cr0.eq) goto loc_831538EC;
loc_83153908:
	// cmplw cr6,r31,r6
	cr6.compare<uint32_t>(r31.u32, ctx.r6.u32, xer);
	// stbx r24,r27,r6
	PPC_STORE_U8(r27.u32 + ctx.r6.u32, r24.u8);
	// beq cr6,0x8315391c
	if (cr6.eq) goto loc_8315391C;
	// add r11,r31,r30
	r11.u64 = r31.u64 + r30.u64;
	// stb r28,80(r11)
	PPC_STORE_U8(r11.u32 + 80, r28.u8);
loc_8315391C:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// blt cr6,0x83153764
	if (cr6.lt) goto loc_83153764;
	// b 0x83153938
	goto loc_83153938;
loc_8315392C:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
loc_83153930:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_83153938:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r25
	cr6.compare<uint32_t>(r31.u32, r25.u32, xer);
	// blt cr6,0x831534cc
	if (cr6.lt) goto loc_831534CC;
loc_83153944:
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// blt cr6,0x831539c8
	if (cr6.lt) goto loc_831539C8;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bgt cr6,0x831539c8
	if (cr6.gt) goto loc_831539C8;
	// lbz r11,80(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 80);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x831539c4
	if (!cr6.eq) goto loc_831539C4;
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83153978
	if (cr6.eq) goto loc_83153978;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_83153978:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bgt cr6,0x8315398c
	if (cr6.gt) goto loc_8315398C;
	// mr r11,r28
	r11.u64 = r28.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x83153994
	goto loc_83153994;
loc_8315398C:
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
loc_83153994:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831539c4
	if (cr6.eq) goto loc_831539C4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831539c4
	if (cr6.eq) goto loc_831539C4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// stb r24,81(r30)
	PPC_STORE_U8(r30.u32 + 81, r24.u8);
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// stw r11,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831b0b60
	return;
loc_831539C4:
	// stb r28,81(r30)
	PPC_STORE_U8(r30.u32 + 81, r28.u8);
loc_831539C8:
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// stw r11,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r11.u32);
loc_831539D0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_831539E0"))) PPC_WEAK_FUNC(sub_831539E0);
PPC_FUNC_IMPL(__imp__sub_831539E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r21{};
	PPCRegister r24{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r9,r3,64
	ctx.r9.s64 = ctx.r3.s64 + 64;
	// li r10,8
	ctx.r10.s64 = 8;
	// lfs f0,24564(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24564);
	f0.f64 = double(temp.f32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stfs f0,96(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,104(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,108(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f0,112(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lfs f0,2244(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2244);
	f0.f64 = double(temp.f32);
loc_83153A14:
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// stfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne 0x83153a14
	if (!cr0.eq) goto loc_83153A14;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	r11.s64 = 1;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_83153A3C:
	// cmplwi cr6,r9,7
	cr6.compare<uint32_t>(ctx.r9.u32, 7, xer);
	// bgt cr6,0x83153aa0
	if (cr6.gt) goto loc_83153AA0;
	// lis r12,-31979
	r12.s64 = -2095775744;
	// addi r12,r12,14940
	r12.s64 = r12.s64 + 14940;
	// rlwinm r0,r9,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_83153AA0;
	case 1:
		goto loc_83153AA0;
	case 2:
		goto loc_83153AA0;
	case 3:
		goto loc_83153AA0;
	case 4:
		goto loc_83153A7C;
	case 5:
		goto loc_83153A90;
	case 6:
		goto loc_83153AA0;
	case 7:
		goto loc_83153AA0;
	default:
		__builtin_unreachable();
	}
	// lwz r24,15008(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 15008);
	// lwz r24,15008(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 15008);
	// lwz r24,15008(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 15008);
	// lwz r24,15008(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 15008);
	// lwz r24,14972(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 14972);
	// lwz r24,14992(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 14992);
	// lwz r24,15008(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 15008);
	// lwz r24,15008(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 15008);
loc_83153A7C:
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// lfs f0,108(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// b 0x83153aa0
	goto loc_83153AA0;
loc_83153A90:
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// lfs f0,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
loc_83153AA0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r9,8
	cr6.compare<uint32_t>(ctx.r9.u32, 8, xer);
	// blt cr6,0x83153a3c
	if (cr6.lt) goto loc_83153A3C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83153AB0"))) PPC_WEAK_FUNC(sub_83153AB0);
PPC_FUNC_IMPL(__imp__sub_83153AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,24656
	ctx.r10.s64 = r11.s64 + 24656;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// addi r28,r29,36
	r28.s64 = r29.s64 + 36;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r5,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r5.u32);
	// stw r4,24(r29)
	PPC_STORE_U32(r29.u32 + 24, ctx.r4.u32);
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r8,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r8.u32);
	// mr r11,r28
	r11.u64 = r28.u64;
	// stw r8,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r8.u32);
	// addi r7,r10,17860
	ctx.r7.s64 = ctx.r10.s64 + 17860;
	// stw r8,16(r29)
	PPC_STORE_U32(r29.u32 + 16, ctx.r8.u32);
	// stw r8,20(r29)
	PPC_STORE_U32(r29.u32 + 20, ctx.r8.u32);
	// stw r8,28(r29)
	PPC_STORE_U32(r29.u32 + 28, ctx.r8.u32);
	// stw r9,32(r29)
	PPC_STORE_U32(r29.u32 + 32, ctx.r9.u32);
loc_83153B08:
	// stw r8,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r8.u32);
	// addi r10,r11,16
	ctx.r10.s64 = r11.s64 + 16;
	// stw r8,80(r11)
	PPC_STORE_U32(r11.u32 + 80, ctx.r8.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83153B1C:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83153b1c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83153B1C;
	// addi r10,r11,48
	ctx.r10.s64 = r11.s64 + 48;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83153B30:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83153b30
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83153B30;
	// addi r10,r11,84
	ctx.r10.s64 = r11.s64 + 84;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83153B44:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83153b44
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83153B44;
	// addi r10,r11,116
	ctx.r10.s64 = r11.s64 + 116;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83153B58:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83153b58
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83153B58;
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r11,r11,148
	r11.s64 = r11.s64 + 148;
	// bge 0x83153b08
	if (!cr0.lt) goto loc_83153B08;
	// addi r3,r29,1220
	ctx.r3.s64 = r29.s64 + 1220;
	// bl 0x831539e0
	sub_831539E0(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f3,24576(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24576);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,24568(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24568);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831442b0
	sub_831442B0(ctx, base);
	// addi r30,r29,184
	r30.s64 = r29.s64 + 184;
	// li r31,7
	r31.s64 = 7;
loc_83153BA0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83153040
	sub_83153040(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,148
	r30.s64 = r30.s64 + 148;
	// bne 0x83153ba0
	if (!cr0.eq) goto loc_83153BA0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83153BC8"))) PPC_WEAK_FUNC(sub_83153BC8);
PPC_FUNC_IMPL(__imp__sub_83153BC8) {
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
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r9,r10,24656
	ctx.r9.s64 = ctx.r10.s64 + 24656;
	// addi r11,r31,1220
	r11.s64 = r31.s64 + 1220;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r9,r9,17860
	ctx.r9.s64 = ctx.r9.s64 + 17860;
loc_83153C00:
	// addi r11,r11,-148
	r11.s64 = r11.s64 + -148;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bge 0x83153c00
	if (!cr0.lt) goto loc_83153C00;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314eaa0
	sub_8314EAA0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83153c34
	if (cr6.eq) goto loc_83153C34;
	// li r4,1336
	ctx.r4.s64 = 1336;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83153C34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83153C50"))) PPC_WEAK_FUNC(sub_83153C50);
PPC_FUNC_IMPL(__imp__sub_83153C50) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,24740
	ctx.r5.s64 = r11.s64 + 24740;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,1336
	ctx.r3.s64 = 1336;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83153ca0
	if (cr6.eq) goto loc_83153CA0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x83153ab0
	sub_83153AB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83153cb8
	if (!cr6.eq) goto loc_83153CB8;
loc_83153CA0:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,24728
	ctx.r4.s64 = r11.s64 + 24728;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83153CB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83153CD0"))) PPC_WEAK_FUNC(sub_83153CD0);
PPC_FUNC_IMPL(__imp__sub_83153CD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// extsw r8,r4
	ctx.r8.s64 = ctx.r4.s32;
loc_83153CEC:
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// bne cr6,0x83153d00
	if (!cr6.eq) goto loc_83153D00;
	// li r11,0
	r11.s64 = 0;
loc_83153D00:
	// ld r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// std r9,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r9.u64);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// bne cr6,0x83153cec
	if (!cr6.eq) goto loc_83153CEC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83153D20"))) PPC_WEAK_FUNC(sub_83153D20);
PPC_FUNC_IMPL(__imp__sub_83153D20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83153d34
	if (cr6.eq) goto loc_83153D34;
	// ld r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// blr 
	return;
loc_83153D34:
	// ld r3,0(0)
	ctx.r3.u64 = PPC_LOAD_U64(0);
	// li r11,0
	r11.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83153D40"))) PPC_WEAK_FUNC(sub_83153D40);
PPC_FUNC_IMPL(__imp__sub_83153D40) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83153da8
	if (cr6.eq) goto loc_83153DA8;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83153d94
	if (!cr6.eq) goto loc_83153D94;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83153d94
	if (!cr6.eq) goto loc_83153D94;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r4.u32);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83153D94:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,24760
	ctx.r4.s64 = r11.s64 + 24760;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_83153DA4:
	// b 0x83153da4
	goto loc_83153DA4;
loc_83153DA8:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83153dcc
	if (cr6.eq) goto loc_83153DCC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,24796
	ctx.r4.s64 = r11.s64 + 24796;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_83153DC8:
	// b 0x83153dc8
	goto loc_83153DC8;
loc_83153DCC:
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83153DE0"))) PPC_WEAK_FUNC(sub_83153DE0);
PPC_FUNC_IMPL(__imp__sub_83153DE0) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,24836
	ctx.r5.s64 = r11.s64 + 24836;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83153e3c
	if (cr6.eq) goto loc_83153E3C;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,26352
	ctx.r9.s64 = ctx.r10.s64 + 26352;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83153E3C:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,24824
	ctx.r4.s64 = r11.s64 + 24824;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
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

__attribute__((alias("__imp__sub_83153E68"))) PPC_WEAK_FUNC(sub_83153E68);
PPC_FUNC_IMPL(__imp__sub_83153E68) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r30,r28,4
	r30.s64 = r28.s64 + 4;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83153f28
	if (cr6.eq) goto loc_83153F28;
	// addi r3,r11,-8
	ctx.r3.s64 = r11.s64 + -8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83153f28
	if (cr6.eq) goto loc_83153F28;
	// li r29,0
	r29.s64 = 0;
loc_83153E98:
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,-8
	r31.s64 = r11.s64 + -8;
	// bne cr6,0x83153eac
	if (!cr6.eq) goto loc_83153EAC;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_83153EAC:
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83153f48
	if (cr0.eq) goto loc_83153F48;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x83153ec8
	if (!cr6.eq) goto loc_83153EC8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_83153EC8:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x83153edc
	if (!cr6.eq) goto loc_83153EDC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
loc_83153EDC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83153ef0
	if (cr6.eq) goto loc_83153EF0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_83153EF0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83153f04
	if (cr6.eq) goto loc_83153F04;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_83153F04:
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83153e98
	if (!cr6.eq) goto loc_83153E98;
loc_83153F28:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_83153F48:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,19544
	ctx.r4.s64 = r11.s64 + 19544;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_83153F58:
	// b 0x83153f58
	goto loc_83153F58;
}

__attribute__((alias("__imp__sub_83153F60"))) PPC_WEAK_FUNC(sub_83153F60);
PPC_FUNC_IMPL(__imp__sub_83153F60) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,24788
	ctx.r9.s64 = r11.s64 + 24788;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83153f98
	if (cr6.eq) goto loc_83153F98;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83153F98:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83153FB0"))) PPC_WEAK_FUNC(sub_83153FB0);
PPC_FUNC_IMPL(__imp__sub_83153FB0) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,24860
	ctx.r5.s64 = r11.s64 + 24860;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8315402c
	if (cr6.eq) goto loc_8315402C;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,24788
	ctx.r9.s64 = ctx.r10.s64 + 24788;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// bl 0x83153de0
	sub_83153DE0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83154020
	if (cr6.eq) goto loc_83154020;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83153d40
	sub_83153D40(ctx, base);
loc_83154020:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8315402C:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,24848
	ctx.r4.s64 = r11.s64 + 24848;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83154050"))) PPC_WEAK_FUNC(sub_83154050);
PPC_FUNC_IMPL(__imp__sub_83154050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f13,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lfs f12,152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f11,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r3,28
	r11.s64 = ctx.r3.s64 + 28;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// lfs f10,148(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// and r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 & ctx.r9.u64;
	// lfs f8,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f6,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// lfsx f1,r5,r8
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f3,f13,f1
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// stfs f10,152(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stfs f3,148(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stfs f6,84(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// fmadds f2,f11,f12,f3
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f3.f64));
	// fmadds f13,f9,f10,f2
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f2.f64));
	// fnmsubs f12,f7,f8,f13
	ctx.f12.f64 = double(float(-(ctx.f7.f64 * ctx.f8.f64 - ctx.f13.f64)));
	// fnmsubs f11,f5,f6,f12
	ctx.f11.f64 = double(float(-(ctx.f5.f64 * ctx.f6.f64 - ctx.f12.f64)));
	// stfs f11,80(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lfs f10,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// fmuls f9,f4,f10
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// and r9,r11,r4
	ctx.r9.u64 = r11.u64 & ctx.r4.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// fadds f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 + f0.f64));
	// stfsx f7,r8,r10
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83154100"))) PPC_WEAK_FUNC(sub_83154100);
PPC_FUNC_IMPL(__imp__sub_83154100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831b1424
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// lwz r11,1788(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1788);
	// lfs f13,1800(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1800);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,1784(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 1784);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// lfs f0,26592(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26592);
	f0.f64 = double(temp.f32);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// lwz r7,1792(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 1792);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lwz r6,1776(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 1776);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// and r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 & ctx.r7.u64;
	// and r10,r4,r7
	ctx.r10.u64 = ctx.r4.u64 & ctx.r7.u64;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r31,1612
	r11.s64 = r31.s64 + 1612;
	// addi r11,r31,1644
	r11.s64 = r31.s64 + 1644;
	// addi r11,r31,1676
	r11.s64 = r31.s64 + 1676;
	// addi r11,r31,1772
	r11.s64 = r31.s64 + 1772;
	// lfsx f11,r9,r6
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	ctx.f11.f64 = double(temp.f32);
	// stw r5,1788(r31)
	PPC_STORE_U32(r31.u32 + 1788, ctx.r5.u32);
	// fmuls f10,f12,f1
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfsx f10,r3,r6
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r6.u32, temp.u32);
	// lwz r8,1624(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 1624);
	// lfs f9,1636(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1636);
	ctx.f9.f64 = double(temp.f32);
	// lwz r7,1632(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 1632);
	// lwz r6,1616(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 1616);
	// lwz r11,1628(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1628);
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// subf r10,r8,r11
	ctx.r10.s64 = r11.s64 - ctx.r8.s64;
	// and r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 & ctx.r7.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// and r10,r3,r7
	ctx.r10.u64 = ctx.r3.u64 & ctx.r7.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f8,r9,r6
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	ctx.f8.f64 = double(temp.f32);
	// stw r4,1628(r31)
	PPC_STORE_U32(r31.u32 + 1628, ctx.r4.u32);
	// fmadds f7,f9,f8,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f11.f64));
	// stfsx f7,r11,r6
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + ctx.r6.u32, temp.u32);
	// lfs f4,1636(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1636);
	ctx.f4.f64 = double(temp.f32);
	// lwz r8,1656(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 1656);
	// lfs f6,1640(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1640);
	ctx.f6.f64 = double(temp.f32);
	// lwz r7,1664(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 1664);
	// lwz r6,1648(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 1648);
	// lfs f5,1668(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1668);
	ctx.f5.f64 = double(temp.f32);
	// lwz r11,1660(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1660);
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// fmuls f3,f4,f11
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// subf r10,r8,r11
	ctx.r10.s64 = r11.s64 - ctx.r8.s64;
	// and r3,r5,r7
	ctx.r3.u64 = ctx.r5.u64 & ctx.r7.u64;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// and r11,r4,r7
	r11.u64 = ctx.r4.u64 & ctx.r7.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fmsubs f2,f6,f8,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f8.f64 - ctx.f3.f64));
	// lfsx f1,r9,r6
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	ctx.f1.f64 = double(temp.f32);
	// stw r3,1660(r31)
	PPC_STORE_U32(r31.u32 + 1660, ctx.r3.u32);
	// fmadds f0,f5,f1,f2
	f0.f64 = double(float(ctx.f5.f64 * ctx.f1.f64 + ctx.f2.f64));
	// stfsx f0,r10,r6
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, temp.u32);
	// lwz r11,1692(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1692);
	// lfs f13,1672(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1672);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,1688(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 1688);
	// lfs f12,1668(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1668);
	ctx.f12.f64 = double(temp.f32);
	// lwz r7,1696(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 1696);
	// fmuls f11,f12,f2
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// lwz r6,1680(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 1680);
	// subf r10,r8,r11
	ctx.r10.s64 = r11.s64 - ctx.r8.s64;
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// lfs f10,1700(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1700);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// fmsubs f9,f13,f1,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 - ctx.f11.f64));
	// and r3,r5,r7
	ctx.r3.u64 = ctx.r5.u64 & ctx.r7.u64;
	// and r11,r4,r7
	r11.u64 = ctx.r4.u64 & ctx.r7.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f8,r9,r6
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	ctx.f8.f64 = double(temp.f32);
	// stw r3,1692(r31)
	PPC_STORE_U32(r31.u32 + 1692, ctx.r3.u32);
	// fmadds f7,f10,f8,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 + ctx.f9.f64));
	// stfsx f7,r10,r6
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, temp.u32);
	// lwz r8,1720(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 1720);
	// lfs f4,1700(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1700);
	ctx.f4.f64 = double(temp.f32);
	// lwz r7,1728(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 1728);
	// lfs f6,1704(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1704);
	ctx.f6.f64 = double(temp.f32);
	// lwz r6,1712(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 1712);
	// lfs f5,1732(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1732);
	ctx.f5.f64 = double(temp.f32);
	// lwz r11,1724(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1724);
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// fmuls f3,f4,f9
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// subf r10,r8,r11
	ctx.r10.s64 = r11.s64 - ctx.r8.s64;
	// addi r11,r31,1708
	r11.s64 = r31.s64 + 1708;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// and r10,r5,r7
	ctx.r10.u64 = ctx.r5.u64 & ctx.r7.u64;
	// and r9,r4,r7
	ctx.r9.u64 = ctx.r4.u64 & ctx.r7.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r31,1740
	r11.s64 = r31.s64 + 1740;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// fmsubs f2,f6,f8,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f8.f64 - ctx.f3.f64));
	// lfsx f1,r7,r6
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f1.f64 = double(temp.f32);
	// stw r10,1724(r31)
	PPC_STORE_U32(r31.u32 + 1724, ctx.r10.u32);
	// fmadds f0,f5,f1,f2
	f0.f64 = double(float(ctx.f5.f64 * ctx.f1.f64 + ctx.f2.f64));
	// stfsx f0,r8,r6
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, temp.u32);
	// lwz r11,1756(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1756);
	// lfs f13,1736(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1736);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,1752(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 1752);
	// lfs f9,1764(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1764);
	ctx.f9.f64 = double(temp.f32);
	// lwz r5,1760(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 1760);
	// lfs f12,1732(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1732);
	ctx.f12.f64 = double(temp.f32);
	// lwz r4,1744(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 1744);
	// fmuls f11,f12,f2
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// subf r10,r6,r11
	ctx.r10.s64 = r11.s64 - ctx.r6.s64;
	// fmsubs f10,f13,f1,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 - ctx.f11.f64));
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and r9,r11,r5
	ctx.r9.u64 = r11.u64 & ctx.r5.u64;
	// and r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 & ctx.r5.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f8,r6,r4
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	ctx.f8.f64 = double(temp.f32);
	// stw r9,1756(r31)
	PPC_STORE_U32(r31.u32 + 1756, ctx.r9.u32);
	// fmadds f7,f9,f8,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f10.f64));
	// stfsx f7,r7,r4
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r4.u32, temp.u32);
	// lfs f5,1764(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1764);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f10
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// lfs f6,1768(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1768);
	ctx.f6.f64 = double(temp.f32);
	// fmsubs f31,f6,f8,f4
	f31.f64 = double(float(ctx.f6.f64 * ctx.f8.f64 - ctx.f4.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x83154050
	sub_83154050(ctx, base);
	// addi r3,r31,204
	ctx.r3.s64 = r31.s64 + 204;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x83154050
	sub_83154050(ctx, base);
	// addi r3,r31,380
	ctx.r3.s64 = r31.s64 + 380;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x83154050
	sub_83154050(ctx, base);
	// addi r3,r31,556
	ctx.r3.s64 = r31.s64 + 556;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x83154050
	sub_83154050(ctx, base);
	// addi r3,r31,732
	ctx.r3.s64 = r31.s64 + 732;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x83154050
	sub_83154050(ctx, base);
	// addi r3,r31,908
	ctx.r3.s64 = r31.s64 + 908;
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	f26.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x83154050
	sub_83154050(ctx, base);
	// addi r3,r31,1084
	ctx.r3.s64 = r31.s64 + 1084;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	f25.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x83154050
	sub_83154050(ctx, base);
	// addi r3,r31,1260
	ctx.r3.s64 = r31.s64 + 1260;
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	f24.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x83154050
	sub_83154050(ctx, base);
	// addi r3,r31,1436
	ctx.r3.s64 = r31.s64 + 1436;
	// fmr f23,f1
	ctx.fpscr.disableFlushMode();
	f23.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x83154050
	sub_83154050(ctx, base);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r4,-32231
	ctx.r4.s64 = -2112290816;
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,-26592(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -26592);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lfs f0,24892(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24892);
	f0.f64 = double(temp.f32);
	// fmuls f3,f29,f13
	ctx.f3.f64 = double(float(f29.f64 * ctx.f13.f64));
	// fmuls f2,f29,f0
	ctx.f2.f64 = double(float(f29.f64 * f0.f64));
	// lfs f11,-30432(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -30432);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,-11908(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -11908);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// lfs f10,-11912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11912);
	ctx.f10.f64 = double(temp.f32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfs f9,24888(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24888);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24884(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24884);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,13492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 13492);
	ctx.f7.f64 = double(temp.f32);
	// fmsubs f6,f30,f11,f3
	ctx.f6.f64 = double(float(f30.f64 * ctx.f11.f64 - ctx.f3.f64));
	// fmadds f5,f24,f12,f2
	ctx.f5.f64 = double(float(f24.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fadds f4,f6,f28
	ctx.f4.f64 = double(float(ctx.f6.f64 + f28.f64));
	// fmadds f3,f1,f10,f5
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fnmsubs f2,f27,f0,f4
	ctx.f2.f64 = double(float(-(f27.f64 * f0.f64 - ctx.f4.f64)));
	// fmadds f0,f25,f9,f3
	f0.f64 = double(float(f25.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fmadds f12,f25,f12,f2
	ctx.f12.f64 = double(float(f25.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fmadds f6,f27,f13,f0
	ctx.f6.f64 = double(float(f27.f64 * ctx.f13.f64 + f0.f64));
	// fmadds f5,f23,f10,f12
	ctx.f5.f64 = double(float(f23.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f4,f26,f11,f6
	ctx.f4.f64 = double(float(f26.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fmadds f3,f24,f9,f5
	ctx.f3.f64 = double(float(f24.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f2,f23,f8,f4
	ctx.f2.f64 = double(float(f23.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f1,f1,f8,f3
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fmadds f0,f30,f7,f2
	f0.f64 = double(float(f30.f64 * ctx.f7.f64 + ctx.f2.f64));
	// fmadds f13,f26,f7,f1
	ctx.f13.f64 = double(float(f26.f64 * ctx.f7.f64 + ctx.f1.f64));
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// fadds f12,f0,f28
	ctx.f12.f64 = double(float(f0.f64 + f28.f64));
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f11,0(r28)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f9,0(r27)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831b1470
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83154460"))) PPC_WEAK_FUNC(sub_83154460);
PPC_FUNC_IMPL(__imp__sub_83154460) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83159ca8
	sub_83159CA8(ctx, base);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,24908
	ctx.r9.s64 = ctx.r10.s64 + 24908;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831544C8"))) PPC_WEAK_FUNC(sub_831544C8);
PPC_FUNC_IMPL(__imp__sub_831544C8) {
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
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r10,72(r7)
	PPC_STORE_U32(ctx.r7.u32 + 72, ctx.r10.u32);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r10,76(r6)
	PPC_STORE_U32(ctx.r6.u32 + 76, ctx.r10.u32);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,80(r5)
	PPC_STORE_U32(ctx.r5.u32 + 80, r11.u32);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,84(r4)
	PPC_STORE_U32(ctx.r4.u32 + 84, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83154548"))) PPC_WEAK_FUNC(sub_83154548);
PPC_FUNC_IMPL(__imp__sub_83154548) {
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
	// li r29,0
	r29.s64 = 0;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r31,16(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 16);
loc_83154564:
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// addi r10,r11,14
	ctx.r10.s64 = r11.s64 + 14;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ble cr6,0x831545c0
	if (!cr6.gt) goto loc_831545C0;
	// addi r11,r11,10
	r11.s64 = r11.s64 + 10;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwzx r5,r10,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// bl 0x8316a638
	sub_8316A638(ctx, base);
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// addi r7,r11,10
	ctx.r7.s64 = r11.s64 + 10;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + r31.u32, r29.u32);
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// addi r5,r11,14
	ctx.r5.s64 = r11.s64 + 14;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + r31.u32, r29.u32);
loc_831545C0:
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// addi r10,r11,10
	ctx.r10.s64 = r11.s64 + 10;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x831545fc
	if (cr6.eq) goto loc_831545FC;
	// stw r11,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r11.u32);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r28,4
	cr6.compare<uint32_t>(r28.u32, 4, xer);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// blt cr6,0x83154564
	if (cr6.lt) goto loc_83154564;
loc_831545FC:
	// li r28,-1
	r28.s64 = -1;
loc_83154600:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8316a518
	sub_8316A518(ctx, base);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x831546cc
	if (cr6.eq) goto loc_831546CC;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// addi r10,r11,6
	ctx.r10.s64 = r11.s64 + 6;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r5,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + r31.u32);
	// lwzx r8,r10,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// bne cr6,0x8315465c
	if (!cr6.eq) goto loc_8315465C;
	// rotlwi r11,r8,0
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// stwx r11,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + r31.u32, r11.u32);
	// b 0x831546c0
	goto loc_831546C0;
loc_8315465C:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bge cr6,0x831546c0
	if (!cr6.lt) goto loc_831546C0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// addi r10,r11,2
	ctx.r10.s64 = r11.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831546b0
	if (!cr6.eq) goto loc_831546B0;
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// stwx r7,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r7.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// addi r11,r11,6
	r11.s64 = r11.s64 + 6;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + r31.u32, ctx.r10.u32);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r8.u32);
	// b 0x831546c0
	goto loc_831546C0;
loc_831546B0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8316a528
	sub_8316A528(ctx, base);
loc_831546C0:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(r29.u32, 4, xer);
	// blt cr6,0x83154600
	if (cr6.lt) goto loc_83154600;
loc_831546CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831546D8"))) PPC_WEAK_FUNC(sub_831546D8);
PPC_FUNC_IMPL(__imp__sub_831546D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831546E8"))) PPC_WEAK_FUNC(sub_831546E8);
PPC_FUNC_IMPL(__imp__sub_831546E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831546F8"))) PPC_WEAK_FUNC(sub_831546F8);
PPC_FUNC_IMPL(__imp__sub_831546F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83154708"))) PPC_WEAK_FUNC(sub_83154708);
PPC_FUNC_IMPL(__imp__sub_83154708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,36(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// lwz r11,32(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// lwz r9,28(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,24(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83154730"))) PPC_WEAK_FUNC(sub_83154730);
PPC_FUNC_IMPL(__imp__sub_83154730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stfs f1,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83154748"))) PPC_WEAK_FUNC(sub_83154748);
PPC_FUNC_IMPL(__imp__sub_83154748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83154758"))) PPC_WEAK_FUNC(sub_83154758);
PPC_FUNC_IMPL(__imp__sub_83154758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83154768"))) PPC_WEAK_FUNC(sub_83154768);
PPC_FUNC_IMPL(__imp__sub_83154768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stfs f1,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83154778"))) PPC_WEAK_FUNC(sub_83154778);
PPC_FUNC_IMPL(__imp__sub_83154778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stfs f1,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stfs f2,24(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stfs f3,28(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stfs f4,32(r8)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r8.u32 + 32, temp.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stfs f5,36(r7)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r7.u32 + 36, temp.u32);
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stfs f6,40(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831547B0"))) PPC_WEAK_FUNC(sub_831547B0);
PPC_FUNC_IMPL(__imp__sub_831547B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// addi r11,r4,19
	r11.s64 = ctx.r4.s64 + 19;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831547C8"))) PPC_WEAK_FUNC(sub_831547C8);
PPC_FUNC_IMPL(__imp__sub_831547C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// rlwinm r11,r4,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// addi r11,r11,27
	r11.s64 = r11.s64 + 27;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831547E8"))) PPC_WEAK_FUNC(sub_831547E8);
PPC_FUNC_IMPL(__imp__sub_831547E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// addi r11,r4,91
	r11.s64 = ctx.r4.s64 + 91;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83154800"))) PPC_WEAK_FUNC(sub_83154800);
PPC_FUNC_IMPL(__imp__sub_83154800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stfs f1,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 48, temp.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stfs f2,56(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 56, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83154818"))) PPC_WEAK_FUNC(sub_83154818);
PPC_FUNC_IMPL(__imp__sub_83154818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r4,396(r11)
	PPC_STORE_U32(r11.u32 + 396, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83154828"))) PPC_WEAK_FUNC(sub_83154828);
PPC_FUNC_IMPL(__imp__sub_83154828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r4,400(r11)
	PPC_STORE_U32(r11.u32 + 400, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83154838"))) PPC_WEAK_FUNC(sub_83154838);
PPC_FUNC_IMPL(__imp__sub_83154838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r4,404(r11)
	PPC_STORE_U32(r11.u32 + 404, ctx.r4.u32);
	// stw r4,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83154848"))) PPC_WEAK_FUNC(sub_83154848);
PPC_FUNC_IMPL(__imp__sub_83154848) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83154850"))) PPC_WEAK_FUNC(sub_83154850);
PPC_FUNC_IMPL(__imp__sub_83154850) {
	PPC_FUNC_PROLOGUE();
	// stw r4,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83154858"))) PPC_WEAK_FUNC(sub_83154858);
PPC_FUNC_IMPL(__imp__sub_83154858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r4,408(r11)
	PPC_STORE_U32(r11.u32 + 408, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83154868"))) PPC_WEAK_FUNC(sub_83154868);
PPC_FUNC_IMPL(__imp__sub_83154868) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
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

__attribute__((alias("__imp__sub_831548B8"))) PPC_WEAK_FUNC(sub_831548B8);
PPC_FUNC_IMPL(__imp__sub_831548B8) {
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
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r10,24944
	ctx.r5.s64 = ctx.r10.s64 + 24944;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83167fd8
	sub_83167FD8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// bne cr6,0x83154920
	if (!cr6.eq) goto loc_83154920;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,24932
	ctx.r4.s64 = r11.s64 + 24932;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
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
loc_83154920:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x83154954
	if (!cr6.gt) goto loc_83154954;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_83154938:
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x83154938
	if (cr6.lt) goto loc_83154938;
loc_83154954:
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
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x83154994
	if (cr6.eq) goto loc_83154994;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831549b8
	if (!cr6.eq) goto loc_831549B8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83154994:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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
loc_831549B8:
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

__attribute__((alias("__imp__sub_831549D0"))) PPC_WEAK_FUNC(sub_831549D0);
PPC_FUNC_IMPL(__imp__sub_831549D0) {
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
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,24968
	ctx.r9.s64 = ctx.r10.s64 + 24968;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r5,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r5.u32);
	// stw r6,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r4,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r4.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r8,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r8.u32);
	// bl 0x8315ed50
	sub_8315ED50(ctx, base);
	// stw r3,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_83154A58"))) PPC_WEAK_FUNC(sub_83154A58);
PPC_FUNC_IMPL(__imp__sub_83154A58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83154A60"))) PPC_WEAK_FUNC(sub_83154A60);
PPC_FUNC_IMPL(__imp__sub_83154A60) {
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
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83154ad8
	if (cr6.eq) goto loc_83154AD8;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x83154ad8
	if (!cr6.gt) goto loc_83154AD8;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_83154A94:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83154ac4
	if (cr6.eq) goto loc_83154AC4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stwx r28,r30,r8
	PPC_STORE_U32(r30.u32 + ctx.r8.u32, r28.u32);
loc_83154AC4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x83154a94
	if (cr6.lt) goto loc_83154A94;
loc_83154AD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83154AE0"))) PPC_WEAK_FUNC(sub_83154AE0);
PPC_FUNC_IMPL(__imp__sub_83154AE0) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x83168650
	sub_83168650(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x83168650
	sub_83168650(ctx, base);
	// addi r29,r3,68
	r29.s64 = ctx.r3.s64 + 68;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x83159d18
	sub_83159D18(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r9,r3,r29
	ctx.r9.u64 = ctx.r3.u64 + r29.u64;
	// rlwinm r11,r30,1,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83154B30"))) PPC_WEAK_FUNC(sub_83154B30);
PPC_FUNC_IMPL(__imp__sub_83154B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83154B4C"))) PPC_WEAK_FUNC(sub_83154B4C);
PPC_FUNC_IMPL(__imp__sub_83154B4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83154B50"))) PPC_WEAK_FUNC(sub_83154B50);
PPC_FUNC_IMPL(__imp__sub_83154B50) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// addi r5,r9,25032
	ctx.r5.s64 = ctx.r9.s64 + 25032;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83167fd8
	sub_83167FD8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// bne cr6,0x83154bc0
	if (!cr6.eq) goto loc_83154BC0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,25020
	ctx.r4.s64 = r11.s64 + 25020;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_83154BC0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x83154c04
	if (!cr6.gt) goto loc_83154C04;
	// li r29,0
	r29.s64 = 0;
	// li r30,0
	r30.s64 = 0;
loc_83154BD8:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + r11.u64;
	// lwzx r3,r29,r10
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + ctx.r10.u32);
	// bl 0x83159db8
	sub_83159DB8(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r28,r9
	cr6.compare<uint32_t>(r28.u32, ctx.r9.u32, xer);
	// blt cr6,0x83154bd8
	if (cr6.lt) goto loc_83154BD8;
loc_83154C04:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83154C10"))) PPC_WEAK_FUNC(sub_83154C10);
PPC_FUNC_IMPL(__imp__sub_83154C10) {
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
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83154c40
	if (cr6.eq) goto loc_83154C40;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
loc_83154C40:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83154C58"))) PPC_WEAK_FUNC(sub_83154C58);
PPC_FUNC_IMPL(__imp__sub_83154C58) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x831504a0
	sub_831504A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83154C68"))) PPC_WEAK_FUNC(sub_83154C68);
PPC_FUNC_IMPL(__imp__sub_83154C68) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,25056
	ctx.r5.s64 = r11.s64 + 25056;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83154cbc
	if (cr6.eq) goto loc_83154CBC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x83154460
	sub_83154460(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83154cd8
	if (!cr6.eq) goto loc_83154CD8;
loc_83154CBC:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,25044
	ctx.r4.s64 = r11.s64 + 25044;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83154d18
	goto loc_83154D18;
loc_83154CD8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83154d14
	if (!cr6.eq) goto loc_83154D14;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83154d18
	goto loc_83154D18;
loc_83154D14:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83154D18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83154D30"))) PPC_WEAK_FUNC(sub_83154D30);
PPC_FUNC_IMPL(__imp__sub_83154D30) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r10,r11,24908
	ctx.r10.s64 = r11.s64 + 24908;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x83159d08
	sub_83159D08(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83154d78
	if (cr6.eq) goto loc_83154D78;
	// li r4,68
	ctx.r4.s64 = 68;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83154D78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83154D90"))) PPC_WEAK_FUNC(sub_83154D90);
PPC_FUNC_IMPL(__imp__sub_83154D90) {
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
	// bl 0x83159f50
	sub_83159F50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83154dc4
	if (!cr6.eq) goto loc_83154DC4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83154DC4:
	// li r5,96
	ctx.r5.s64 = 96;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r10,72(r7)
	PPC_STORE_U32(ctx.r7.u32 + 72, ctx.r10.u32);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r10,76(r6)
	PPC_STORE_U32(ctx.r6.u32 + 76, ctx.r10.u32);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,80(r5)
	PPC_STORE_U32(ctx.r5.u32 + 80, r11.u32);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,84(r4)
	PPC_STORE_U32(ctx.r4.u32 + 84, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83154E38"))) PPC_WEAK_FUNC(sub_83154E38);
PPC_FUNC_IMPL(__imp__sub_83154E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r9,r10,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r7,r8,0,31,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// ori r5,r6,1
	ctx.r5.u64 = ctx.r6.u64 | 1;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83154E70"))) PPC_WEAK_FUNC(sub_83154E70);
PPC_FUNC_IMPL(__imp__sub_83154E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r7,r8,0,30,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// ori r5,r6,2
	ctx.r5.u64 = ctx.r6.u64 | 2;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83154EA8"))) PPC_WEAK_FUNC(sub_83154EA8);
PPC_FUNC_IMPL(__imp__sub_83154EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r7,r8,0,31,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// ori r5,r6,4
	ctx.r5.u64 = ctx.r6.u64 | 4;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83154EE0"))) PPC_WEAK_FUNC(sub_83154EE0);
PPC_FUNC_IMPL(__imp__sub_83154EE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83154EF8"))) PPC_WEAK_FUNC(sub_83154EF8);
PPC_FUNC_IMPL(__imp__sub_83154EF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bne cr6,0x83154f24
	if (!cr6.eq) goto loc_83154F24;
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r7,r8,0,28,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// blr 
	return;
loc_83154F24:
	// rlwinm r9,r10,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// ori r7,r8,16
	ctx.r7.u64 = ctx.r8.u64 | 16;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83154F40"))) PPC_WEAK_FUNC(sub_83154F40);
PPC_FUNC_IMPL(__imp__sub_83154F40) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,25088
	ctx.r5.s64 = r11.s64 + 25088;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83154f94
	if (cr6.eq) goto loc_83154F94;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831549d0
	sub_831549D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83154fb4
	if (!cr6.eq) goto loc_83154FB4;
loc_83154F94:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,25076
	ctx.r4.s64 = r11.s64 + 25076;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83154FB4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83154ff0
	if (!cr6.eq) goto loc_83154FF0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83154FF0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83155000"))) PPC_WEAK_FUNC(sub_83155000);
PPC_FUNC_IMPL(__imp__sub_83155000) {
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
	// li r28,0
	r28.s64 = 0;
	// addi r31,r30,48
	r31.s64 = r30.s64 + 48;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83155094
	if (cr6.eq) goto loc_83155094;
loc_83155024:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// mr r29,r11
	r29.u64 = r11.u64;
	// bne cr6,0x8315503c
	if (!cr6.eq) goto loc_8315503C;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8315503C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x83155050
	if (!cr6.eq) goto loc_83155050;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_83155050:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83155064
	if (cr6.eq) goto loc_83155064;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_83155064:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83155078
	if (cr6.eq) goto loc_83155078;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_83155078:
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x83155024
	if (!cr6.eq) goto loc_83155024;
loc_83155094:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831550d4
	if (cr6.eq) goto loc_831550D4;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// stw r28,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r28.u32);
loc_831550D4:
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831550e8
	if (cr6.eq) goto loc_831550E8;
	// bl 0x83168240
	sub_83168240(ctx, base);
	// stw r28,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r28.u32);
loc_831550E8:
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83155100
	if (cr6.eq) goto loc_83155100;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// stw r28,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r28.u32);
loc_83155100:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83155108"))) PPC_WEAK_FUNC(sub_83155108);
PPC_FUNC_IMPL(__imp__sub_83155108) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,23856
	ctx.r9.s64 = r11.s64 + 23856;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83155140
	if (cr6.eq) goto loc_83155140;
	// li r4,68
	ctx.r4.s64 = 68;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83155140:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83155158"))) PPC_WEAK_FUNC(sub_83155158);
PPC_FUNC_IMPL(__imp__sub_83155158) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83155210
	if (cr6.eq) goto loc_83155210;
loc_83155188:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83155188
	if (!cr6.eq) goto loc_83155188;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83155210
	if (cr6.eq) goto loc_83155210;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315521c
	if (cr6.eq) goto loc_8315521C;
	// addi r29,r11,-32
	r29.s64 = r11.s64 + -32;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83155220
	if (cr6.eq) goto loc_83155220;
	// addi r30,r29,32
	r30.s64 = r29.s64 + 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83148a80
	sub_83148A80(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x83153d40
	sub_83153D40(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x83159df8
	sub_83159DF8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83155220
	if (!cr6.eq) goto loc_83155220;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,25116
	ctx.r4.s64 = r11.s64 + 25116;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
loc_83155210:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_8315521C:
	// li r29,0
	r29.s64 = 0;
loc_83155220:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83155230"))) PPC_WEAK_FUNC(sub_83155230);
PPC_FUNC_IMPL(__imp__sub_83155230) {
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
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// bne cr6,0x83155258
	if (!cr6.eq) goto loc_83155258;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_83155258:
	// addi r3,r29,24
	ctx.r3.s64 = r29.s64 + 24;
	// bl 0x83148a80
	sub_83148A80(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// bne cr6,0x83155270
	if (!cr6.eq) goto loc_83155270;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_83155270:
	// addi r3,r29,16
	ctx.r3.s64 = r29.s64 + 16;
	// bl 0x83153d40
	sub_83153D40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83159ea0
	sub_83159EA0(ctx, base);
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r30,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r30.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,72(r8)
	PPC_STORE_U32(ctx.r8.u32 + 72, r11.u32);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,76(r7)
	PPC_STORE_U32(ctx.r7.u32 + 76, r11.u32);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r30,80(r6)
	PPC_STORE_U32(ctx.r6.u32 + 80, r30.u32);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r30,84(r5)
	PPC_STORE_U32(ctx.r5.u32 + 84, r30.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// ori r3,r4,128
	ctx.r3.u64 = ctx.r4.u64 | 128;
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831552F0"))) PPC_WEAK_FUNC(sub_831552F0);
PPC_FUNC_IMPL(__imp__sub_831552F0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// bne cr6,0x83155310
	if (!cr6.eq) goto loc_83155310;
	// li r11,0
	r11.s64 = 0;
loc_83155310:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83155344
	if (cr6.eq) goto loc_83155344;
loc_8315531C:
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// lwz r8,52(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bge cr6,0x83155330
	if (!cr6.lt) goto loc_83155330;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_83155330:
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83155344
	if (cr6.eq) goto loc_83155344;
	// addic. r11,r11,-32
	xer.ca = r11.u32 > 31;
	r11.s64 = r11.s64 + -32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8315531c
	if (!cr0.eq) goto loc_8315531C;
loc_83155344:
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315536c
	if (cr6.eq) goto loc_8315536C;
	// li r11,1
	r11.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x8315eca0
	sub_8315ECA0(ctx, base);
loc_8315536C:
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

__attribute__((alias("__imp__sub_83155380"))) PPC_WEAK_FUNC(sub_83155380);
PPC_FUNC_IMPL(__imp__sub_83155380) {
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
	// addi r29,r28,48
	r29.s64 = r28.s64 + 48;
	// lwz r31,48(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831553d4
	if (cr6.eq) goto loc_831553D4;
loc_831553A0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x831553c8
	if (!cr6.eq) goto loc_831553C8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83148a80
	sub_83148A80(ctx, base);
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83168618
	sub_83168618(ctx, base);
loc_831553C8:
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x831553a0
	if (!cr6.eq) goto loc_831553A0;
loc_831553D4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r11,56(r28)
	PPC_STORE_U32(r28.u32 + 56, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831553E8"))) PPC_WEAK_FUNC(sub_831553E8);
PPC_FUNC_IMPL(__imp__sub_831553E8) {
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
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315544c
	if (cr6.eq) goto loc_8315544C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r9,25144
	ctx.r5.s64 = ctx.r9.s64 + 25144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83167fd8
	sub_83167FD8(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83155458
	if (!cr6.eq) goto loc_83155458;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,25128
	ctx.r4.s64 = r11.s64 + 25128;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
loc_8315544C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83155458:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831681d0
	sub_831681D0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r3,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x831554c8
	if (!cr6.gt) goto loc_831554C8;
	// li r30,0
	r30.s64 = 0;
loc_83155478:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stwx r3,r30,r9
	PPC_STORE_U32(r30.u32 + ctx.r9.u32, ctx.r3.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwzx r8,r30,r11
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x831554d4
	if (cr6.eq) goto loc_831554D4;
	// rotlwi r11,r8,0
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// addi r4,r11,32
	ctx.r4.s64 = r11.s64 + 32;
	// bl 0x831489e0
	sub_831489E0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x83155478
	if (cr6.lt) goto loc_83155478;
loc_831554C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_831554D4:
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
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831554F8"))) PPC_WEAK_FUNC(sub_831554F8);
PPC_FUNC_IMPL(__imp__sub_831554F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// b 0x83154c68
	sub_83154C68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83155508"))) PPC_WEAK_FUNC(sub_83155508);
PPC_FUNC_IMPL(__imp__sub_83155508) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r6,r9,25168
	ctx.r6.s64 = ctx.r9.s64 + 25168;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x831685b0
	sub_831685B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831555bc
	if (cr6.eq) goto loc_831555BC;
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// lwz r30,60(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// beq cr6,0x8315557c
	if (cr6.eq) goto loc_8315557C;
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
loc_8315557C:
	// stw r10,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r10.u32);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// stw r30,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, r30.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, r11.u32);
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, r11.u32);
	// bl 0x83153d40
	sub_83153D40(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
loc_831555A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_831555BC:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,25156
	ctx.r4.s64 = r11.s64 + 25156;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831555a4
	goto loc_831555A4;
}

__attribute__((alias("__imp__sub_831555D8"))) PPC_WEAK_FUNC(sub_831555D8);
PPC_FUNC_IMPL(__imp__sub_831555D8) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r6,r9,25168
	ctx.r6.s64 = ctx.r9.s64 + 25168;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x831685b0
	sub_831685B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8315567c
	if (cr6.eq) goto loc_8315567C;
	// li r11,0
	r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// stw r30,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, r30.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, r11.u32);
	// bl 0x83153d40
	sub_83153D40(ctx, base);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
loc_83155664:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8315567C:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,25196
	ctx.r4.s64 = r11.s64 + 25196;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83155664
	goto loc_83155664;
}

__attribute__((alias("__imp__sub_83155698"))) PPC_WEAK_FUNC(sub_83155698);
PPC_FUNC_IMPL(__imp__sub_83155698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831b142c
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lfd f2,-21056(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(r11.u32 + -21056);
	// bl 0x831b32c0
	sub_831B32C0(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,-9180(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9180);
	f0.f64 = double(temp.f32);
	// lfs f27,-8920(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8920);
	f27.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x831556e0
	if (!cr6.lt) goto loc_831556E0;
	// fadds f31,f31,f27
	f31.f64 = double(float(f31.f64 + f27.f64));
loc_831556E0:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-9184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -9184);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x831556f4
	if (!cr6.gt) goto loc_831556F4;
	// fsubs f31,f31,f27
	f31.f64 = double(float(f31.f64 - f27.f64));
loc_831556F4:
	// mr r11,r26
	r11.u64 = r26.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83155704:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x83155704
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83155704;
	// lwz r31,36(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r29,r11,-1
	r29.s64 = r11.s64 + -1;
	// lfs f26,25220(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25220);
	f26.f64 = double(temp.f32);
	// lfs f29,32728(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32728);
	f29.f64 = double(temp.f32);
	// lfs f30,-24672(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24672);
	f30.f64 = double(temp.f32);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// lfs f28,-22120(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -22120);
	f28.f64 = double(temp.f32);
	// bge cr6,0x831557f8
	if (!cr6.lt) goto loc_831557F8;
	// addi r11,r31,2
	r11.s64 = r31.s64 + 2;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
loc_83155754:
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// blt cr6,0x8315576c
	if (cr6.lt) goto loc_8315576C;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// blt cr6,0x83155780
	if (cr6.lt) goto loc_83155780;
loc_8315576C:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// blt cr6,0x83155754
	if (cr6.lt) goto loc_83155754;
	// b 0x831557f4
	goto loc_831557F4;
loc_83155780:
	// rlwinm r30,r31,2,0,29
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r31,2
	r11.s64 = r31.s64 + 2;
	// add r10,r30,r28
	ctx.r10.u64 = r30.u64 + r28.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfsx f13,r9,r28
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + r28.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f31,f0
	ctx.f12.f64 = double(float(f31.f64 - f0.f64));
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fmuls f10,f11,f28
	ctx.f10.f64 = double(float(ctx.f11.f64 * f28.f64));
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fdivs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// fmuls f0,f8,f30
	f0.f64 = double(float(ctx.f8.f64 * f30.f64));
	// fcmpu cr6,f0,f29
	cr6.compare(f0.f64, f29.f64);
	// bge cr6,0x831557c0
	if (!cr6.lt) goto loc_831557C0;
	// fmr f0,f29
	f0.f64 = f29.f64;
	// b 0x831557cc
	goto loc_831557CC;
loc_831557C0:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f30.f64);
	// ble cr6,0x831557cc
	if (!cr6.gt) goto loc_831557CC;
	// fmr f0,f30
	f0.f64 = f30.f64;
loc_831557CC:
	// fadds f25,f0,f30
	ctx.fpscr.disableFlushMode();
	f25.f64 = double(float(f0.f64 + f30.f64));
	// add r27,r30,r26
	r27.u64 = r30.u64 + r26.u64;
	// fmuls f1,f25,f26
	ctx.f1.f64 = double(float(f25.f64 * f26.f64));
	// bl 0x831b1868
	sub_831B1868(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfsx f0,r30,r26
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + r26.u32, temp.u32);
	// fmuls f1,f25,f26
	ctx.f1.f64 = double(float(f25.f64 * f26.f64));
	// bl 0x831b1788
	sub_831B1788(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,4(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r27.u32 + 4, temp.u32);
loc_831557F4:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
loc_831557F8:
	// bne cr6,0x83155888
	if (!cr6.eq) goto loc_83155888;
	// rlwinm r31,r29,2,0,29
	r31.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// add r10,r31,r28
	ctx.r10.u64 = r31.u64 + r28.u64;
	// lfs f12,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f31,f13
	f0.f64 = double(float(f31.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// bge cr6,0x83155820
	if (!cr6.lt) goto loc_83155820;
	// fadds f0,f0,f27
	f0.f64 = double(float(f0.f64 + f27.f64));
loc_83155820:
	// lwz r11,36(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r30,r28
	ctx.r10.u64 = r30.u64 + r28.u64;
	// lfs f12,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fadds f10,f11,f27
	ctx.f10.f64 = double(float(ctx.f11.f64 + f27.f64));
	// fmuls f9,f10,f28
	ctx.f9.f64 = double(float(ctx.f10.f64 * f28.f64));
	// fsubs f8,f0,f9
	ctx.f8.f64 = double(float(f0.f64 - ctx.f9.f64));
	// fdivs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 / ctx.f9.f64));
	// fmuls f0,f7,f30
	f0.f64 = double(float(ctx.f7.f64 * f30.f64));
	// fcmpu cr6,f0,f29
	cr6.compare(f0.f64, f29.f64);
	// bge cr6,0x83155858
	if (!cr6.lt) goto loc_83155858;
	// fmr f0,f29
	f0.f64 = f29.f64;
	// b 0x83155864
	goto loc_83155864;
loc_83155858:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f30.f64);
	// ble cr6,0x83155864
	if (!cr6.gt) goto loc_83155864;
	// fmr f0,f30
	f0.f64 = f30.f64;
loc_83155864:
	// fadds f31,f0,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f0.f64 + f30.f64));
	// fmuls f1,f31,f26
	ctx.f1.f64 = double(float(f31.f64 * f26.f64));
	// bl 0x831b1868
	sub_831B1868(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfsx f0,r31,r26
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + r26.u32, temp.u32);
	// fmuls f1,f31,f26
	ctx.f1.f64 = double(float(f31.f64 * f26.f64));
	// bl 0x831b1788
	sub_831B1788(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfsx f13,r30,r26
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + r26.u32, temp.u32);
loc_83155888:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831b1478
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83155898"))) PPC_WEAK_FUNC(sub_83155898);
PPC_FUNC_IMPL(__imp__sub_83155898) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(f0.s64);
	// lfs f13,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f31,f13
	cr6.compare(f31.f64, ctx.f13.f64);
	// fdivs f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// fsqrts f30,f10
	f30.f64 = double(float(sqrt(ctx.f10.f64)));
	// ble cr6,0x831558f0
	if (!cr6.gt) goto loc_831558F0;
	// fmr f31,f13
	f31.f64 = ctx.f13.f64;
	// b 0x8315593c
	goto loc_8315593C;
loc_831558F0:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-24780(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24780);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x83155908
	if (!cr6.lt) goto loc_83155908;
	// fmr f31,f0
	f31.f64 = f0.f64;
	// b 0x83155918
	goto loc_83155918;
loc_83155908:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x8315593c
	if (!cr6.lt) goto loc_8315593C;
loc_83155918:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-9184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -9184);
	f0.f64 = double(temp.f32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + f0.f64));
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x83155938
	if (!cr6.gt) goto loc_83155938;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-8920(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8920);
	f0.f64 = double(temp.f32);
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - f0.f64));
loc_83155938:
	// fneg f31,f31
	ctx.fpscr.disableFlushMode();
	f31.u64 = f31.u64 ^ 0x8000000000000000;
loc_8315593C:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fsubs f29,f13,f31
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(ctx.f13.f64 - f31.f64));
	// bl 0x83155698
	sub_83155698(ctx, base);
	// fmuls f0,f29,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f29.f64 * f30.f64));
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f11,f13,f31,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * f31.f64 + f0.f64));
	// stfs f11,8(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// fmadds f9,f12,f31,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * f31.f64 + f0.f64));
	// stfs f9,12(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// fmadds f7,f10,f31,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * f31.f64 + f0.f64));
	// stfs f7,4(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// fmadds f5,f8,f31,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * f31.f64 + f0.f64));
	// stfs f5,16(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// fmadds f3,f6,f31,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * f31.f64 + f0.f64));
	// stfs f3,0(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fmadds f2,f4,f31,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * f31.f64 + f0.f64));
	// stfs f2,20(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_831559B8"))) PPC_WEAK_FUNC(sub_831559B8);
PPC_FUNC_IMPL(__imp__sub_831559B8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x83155898
	sub_83155898(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f10,24(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f9,28(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
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

__attribute__((alias("__imp__sub_83155A28"))) PPC_WEAK_FUNC(sub_83155A28);
PPC_FUNC_IMPL(__imp__sub_83155A28) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
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

__attribute__((alias("__imp__sub_83155A78"))) PPC_WEAK_FUNC(sub_83155A78);
PPC_FUNC_IMPL(__imp__sub_83155A78) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x83155ac4
	if (cr6.eq) goto loc_83155AC4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83155AC4:
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

__attribute__((alias("__imp__sub_83155AE0"))) PPC_WEAK_FUNC(sub_83155AE0);
PPC_FUNC_IMPL(__imp__sub_83155AE0) {
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
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83155b08
	if (cr6.eq) goto loc_83155B08;
	// bl 0x8315dee8
	sub_8315DEE8(ctx, base);
loc_83155B08:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83155b38
	if (cr6.eq) goto loc_83155B38;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// bl 0x83159af0
	sub_83159AF0(ctx, base);
loc_83155B38:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83155b78
	if (cr6.eq) goto loc_83155B78;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
loc_83155B78:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,56(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83155bc8
	if (cr6.eq) goto loc_83155BC8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
loc_83155BC8:
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r4,5
	cr6.compare<int32_t>(ctx.r4.s32, 5, xer);
	// beq cr6,0x83155bec
	if (cr6.eq) goto loc_83155BEC;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x83155bec
	if (cr6.eq) goto loc_83155BEC;
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// bl 0x831487d0
	sub_831487D0(ctx, base);
loc_83155BEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83155C08"))) PPC_WEAK_FUNC(sub_83155C08);
PPC_FUNC_IMPL(__imp__sub_83155C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831b142c
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bl 0x8315df08
	sub_8315DF08(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83155ebc
	if (cr6.eq) goto loc_83155EBC;
	// lwz r4,888(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 888);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bl 0x8315e0a0
	sub_8315E0A0(ctx, base);
	// lfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bl 0x8315df20
	sub_8315DF20(ctx, base);
	// lfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bl 0x8315df28
	sub_8315DF28(ctx, base);
	// lfs f1,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bl 0x8315df58
	sub_8315DF58(ctx, base);
	// lfs f6,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 76);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,72(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 72);
	ctx.f5.f64 = double(temp.f32);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lfs f4,68(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 68);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,64(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,60(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,56(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8315df30
	sub_8315DF30(ctx, base);
	// li r26,0
	r26.s64 = 0;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83155CB0:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x83155cb0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83155CB0;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lfs f2,872(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 872);
	ctx.f2.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f1,864(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 864);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r11,-30656
	ctx.r3.s64 = r11.s64 + -30656;
	// bl 0x831559b8
	sub_831559B8(ctx, base);
	// lfs f0,856(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 856);
	f0.f64 = double(temp.f32);
	// lfs f13,172(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f12,176(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lfs f11,180(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,184(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// lfs f5,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f1,f0,f5,f13
	ctx.f1.f64 = double(float(f0.f64 * ctx.f5.f64 + ctx.f13.f64));
	// lfs f3,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f31,f0,f4,f12
	f31.f64 = double(float(f0.f64 * ctx.f4.f64 + ctx.f12.f64));
	// lfs f2,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f30,f0,f3,f11
	f30.f64 = double(float(f0.f64 * ctx.f3.f64 + ctx.f11.f64));
	// fmadds f29,f0,f2,f10
	f29.f64 = double(float(f0.f64 * ctx.f2.f64 + ctx.f10.f64));
	// lfs f9,188(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 188);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,192(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 192);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,196(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 196);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,200(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 200);
	ctx.f6.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f28,f0,f13,f9
	f28.f64 = double(float(f0.f64 * ctx.f13.f64 + ctx.f9.f64));
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f27,f0,f12,f8
	f27.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f8.f64));
	// lfs f10,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f26,f0,f11,f7
	f26.f64 = double(float(f0.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fmadds f25,f0,f10,f6
	f25.f64 = double(float(f0.f64 * ctx.f10.f64 + ctx.f6.f64));
	// bl 0x8315df40
	sub_8315DF40(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8315df40
	sub_8315DF40(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x8315df40
	sub_8315DF40(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x8315df40
	sub_8315DF40(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// bl 0x8315df40
	sub_8315DF40(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// bl 0x8315df40
	sub_8315DF40(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f26.f64;
	// bl 0x8315df40
	sub_8315DF40(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f25.f64;
	// bl 0x8315df40
	sub_8315DF40(ctx, base);
	// mr r27,r26
	r27.u64 = r26.u64;
	// addi r28,r31,236
	r28.s64 = r31.s64 + 236;
loc_83155DBC:
	// mr r29,r26
	r29.u64 = r26.u64;
loc_83155DC0:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bl 0x8315df48
	sub_8315DF48(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplwi cr6,r29,8
	cr6.compare<uint32_t>(r29.u32, 8, xer);
	// blt cr6,0x83155dc0
	if (cr6.lt) goto loc_83155DC0;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmplwi cr6,r27,8
	cr6.compare<uint32_t>(r27.u32, 8, xer);
	// blt cr6,0x83155dbc
	if (cr6.lt) goto loc_83155DBC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,756(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 756);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bl 0x8315df50
	sub_8315DF50(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f1,760(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 760);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bl 0x8315df50
	sub_8315DF50(ctx, base);
	// lfs f2,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 124);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,116(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bl 0x8315df38
	sub_8315DF38(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x83155e44
	if (cr6.eq) goto loc_83155E44;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x83155e44
	if (cr6.eq) goto loc_83155E44;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x83155e44
	if (cr6.eq) goto loc_83155E44;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x83155e4c
	if (!cr6.eq) goto loc_83155E4C;
loc_83155E44:
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bl 0x8315e088
	sub_8315E088(ctx, base);
loc_83155E4C:
	// lwz r5,148(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83155eb8
	if (cr6.eq) goto loc_83155EB8;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
loc_83155E5C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83155e5c
	if (!cr6.eq) goto loc_83155E5C;
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// blt cr6,0x83155e94
	if (cr6.lt) goto loc_83155E94;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,25260
	ctx.r4.s64 = r11.s64 + 25260;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// stb r26,64(r30)
	PPC_STORE_U8(r30.u32 + 64, r26.u8);
loc_83155E94:
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r10,r30,64
	ctx.r10.s64 = r30.s64 + 64;
loc_83155E9C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x83155e9c
	if (!cr6.eq) goto loc_83155E9C;
	// b 0x83155ebc
	goto loc_83155EBC;
loc_83155EB8:
	// stb r26,64(r30)
	PPC_STORE_U8(r30.u32 + 64, r26.u8);
loc_83155EBC:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831b1478
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83155EE8"))) PPC_WEAK_FUNC(sub_83155EE8);
PPC_FUNC_IMPL(__imp__sub_83155EE8) {
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
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x8315df90
	sub_8315DF90(ctx, base);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r30,32(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// stw r8,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r8.u32);
	// lwz r3,56(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// bl 0x831487d0
	sub_831487D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83155F70"))) PPC_WEAK_FUNC(sub_83155F70);
PPC_FUNC_IMPL(__imp__sub_83155F70) {
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
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x8315e008
	sub_8315E008(ctx, base);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r8,3
	ctx.r8.s64 = 3;
	// lwz r30,32(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// stw r8,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r8.u32);
	// lwz r3,56(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// bl 0x831487d0
	sub_831487D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83155FF8"))) PPC_WEAK_FUNC(sub_83155FF8);
PPC_FUNC_IMPL(__imp__sub_83155FF8) {
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
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x8315e048
	sub_8315E048(ctx, base);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r30,32(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// stw r8,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r8.u32);
	// lwz r3,56(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// bl 0x831487d0
	sub_831487D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83156080"))) PPC_WEAK_FUNC(sub_83156080);
PPC_FUNC_IMPL(__imp__sub_83156080) {
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
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x8315e0a0
	sub_8315E0A0(ctx, base);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// lwz r3,56(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
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

__attribute__((alias("__imp__sub_831560F8"))) PPC_WEAK_FUNC(sub_831560F8);
PPC_FUNC_IMPL(__imp__sub_831560F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r21{};
	PPCRegister r24{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
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
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315616c
	if (cr6.eq) goto loc_8315616C;
	// bl 0x8315e278
	sub_8315E278(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8315616c
	if (!cr6.lt) goto loc_8315616C;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x8315df78
	sub_8315DF78(ctx, base);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// add r4,r3,r11
	ctx.r4.u64 = ctx.r3.u64 + r11.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x8315df60
	sub_8315DF60(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r3,60(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// bl 0x83159af0
	sub_83159AF0(ctx, base);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
loc_8315616C:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x8315e0e8
	sub_8315E0E8(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x8315e278
	sub_8315E278(ctx, base);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bgt cr6,0x8315621c
	if (cr6.gt) goto loc_8315621C;
	// lis r12,-31979
	r12.s64 = -2095775744;
	// addi r12,r12,24996
	r12.s64 = r12.s64 + 24996;
	// rlwinm r0,r3,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_831561E0;
	case 1:
		goto loc_8315621C;
	case 2:
		goto loc_831561B8;
	case 3:
		goto loc_831561CC;
	case 4:
		goto loc_831561F4;
	default:
		__builtin_unreachable();
	}
	// lwz r24,25056(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 25056);
	// lwz r24,25116(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 25116);
	// lwz r24,25016(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 25016);
	// lwz r24,25036(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 25036);
	// lwz r24,25076(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 25076);
loc_831561B8:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8315621c
	if (!cr6.eq) goto loc_8315621C;
	// li r11,2
	r11.s64 = 2;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// b 0x83156210
	goto loc_83156210;
loc_831561CC:
	// cmpwi cr6,r4,5
	cr6.compare<int32_t>(ctx.r4.s32, 5, xer);
	// beq cr6,0x831561d8
	if (cr6.eq) goto loc_831561D8;
	// li r11,1
	r11.s64 = 1;
loc_831561D8:
	// li r10,5
	ctx.r10.s64 = 5;
	// b 0x83156204
	goto loc_83156204;
loc_831561E0:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x831561ec
	if (cr6.eq) goto loc_831561EC;
	// li r11,1
	r11.s64 = 1;
loc_831561EC:
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// b 0x83156208
	goto loc_83156208;
loc_831561F4:
	// cmpwi cr6,r4,6
	cr6.compare<int32_t>(ctx.r4.s32, 6, xer);
	// beq cr6,0x83156200
	if (cr6.eq) goto loc_83156200;
	// li r11,1
	r11.s64 = 1;
loc_83156200:
	// li r10,6
	ctx.r10.s64 = 6;
loc_83156204:
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
loc_83156208:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8315621c
	if (cr6.eq) goto loc_8315621C;
loc_83156210:
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// bl 0x831487d0
	sub_831487D0(ctx, base);
loc_8315621C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83156238"))) PPC_WEAK_FUNC(sub_83156238);
PPC_FUNC_IMPL(__imp__sub_83156238) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83156240"))) PPC_WEAK_FUNC(sub_83156240);
PPC_FUNC_IMPL(__imp__sub_83156240) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// b 0x8315df78
	sub_8315DF78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83156248"))) PPC_WEAK_FUNC(sub_83156248);
PPC_FUNC_IMPL(__imp__sub_83156248) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83156250"))) PPC_WEAK_FUNC(sub_83156250);
PPC_FUNC_IMPL(__imp__sub_83156250) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83156258"))) PPC_WEAK_FUNC(sub_83156258);
PPC_FUNC_IMPL(__imp__sub_83156258) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x8315626c
	if (cr6.eq) goto loc_8315626C;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x8315629c
	if (!cr6.eq) goto loc_8315629C;
loc_8315626C:
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// beq cr6,0x83156280
	if (cr6.eq) goto loc_83156280;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x8315629c
	if (!cr6.eq) goto loc_8315629C;
loc_83156280:
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// beq cr6,0x83156294
	if (cr6.eq) goto loc_83156294;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// bne cr6,0x8315629c
	if (!cr6.eq) goto loc_8315629C;
loc_83156294:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8315629C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831562A8"))) PPC_WEAK_FUNC(sub_831562A8);
PPC_FUNC_IMPL(__imp__sub_831562A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// b 0x8315e280
	sub_8315E280(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831562B0"))) PPC_WEAK_FUNC(sub_831562B0);
PPC_FUNC_IMPL(__imp__sub_831562B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// b 0x8315e2b0
	sub_8315E2B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831562B8"))) PPC_WEAK_FUNC(sub_831562B8);
PPC_FUNC_IMPL(__imp__sub_831562B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83156340
	if (!cr6.eq) goto loc_83156340;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	f0.f64 = double(temp.f32);
	// ld r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// lwz r5,56(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r11,152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,900(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 900);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// bl 0x8315ea38
	sub_8315EA38(ctx, base);
	// b 0x831563f0
	goto loc_831563F0;
loc_83156340:
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x831563ec
	if (!cr6.eq) goto loc_831563EC;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	f0.f64 = double(temp.f32);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// lwz r7,152(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// stfs f0,156(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lwz r6,900(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 900);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lwz r30,892(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 892);
	// lfs f13,-24416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24416);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r11.u32);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// stw r7,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// stw r6,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r6.u32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f9,172(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r9,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
	// stw r8,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// bl 0x8315eb60
	sub_8315EB60(ctx, base);
	// b 0x831563f0
	goto loc_831563F0;
loc_831563EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831563F0:
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

__attribute__((alias("__imp__sub_83156408"))) PPC_WEAK_FUNC(sub_83156408);
PPC_FUNC_IMPL(__imp__sub_83156408) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83156510
	if (cr6.eq) goto loc_83156510;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r11,25320
	ctx.r6.s64 = r11.s64 + 25320;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,196
	ctx.r3.s64 = 196;
	// bl 0x831685b0
	sub_831685B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831564fc
	if (cr6.eq) goto loc_831564FC;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,25224
	ctx.r9.s64 = ctx.r10.s64 + 25224;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r28.u32);
	// lwz r8,896(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 896);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r8,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r8.u32);
	// stw r27,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r27.u32);
	// stw r26,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r26.u32);
	// stw r25,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r25.u32);
	// lwz r7,892(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 892);
	// stw r7,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r7.u32);
	// lbz r6,160(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 160);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// stb r11,64(r31)
	PPC_STORE_U8(r31.u32 + 64, r11.u8);
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r5,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r5.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8315651c
	if (!cr6.eq) goto loc_8315651C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
loc_831564FC:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,25308
	ctx.r4.s64 = r11.s64 + 25308;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
loc_83156510:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
loc_8315651C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83156528"))) PPC_WEAK_FUNC(sub_83156528);
PPC_FUNC_IMPL(__imp__sub_83156528) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,25224
	ctx.r9.s64 = r11.s64 + 25224;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83156560
	if (cr6.eq) goto loc_83156560;
	// li r4,196
	ctx.r4.s64 = 196;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83156560:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83156578"))) PPC_WEAK_FUNC(sub_83156578);
PPC_FUNC_IMPL(__imp__sub_83156578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831565f0
	if (cr6.eq) goto loc_831565F0;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lfs f0,2240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// beq cr6,0x83156618
	if (cr6.eq) goto loc_83156618;
	// bl 0x83159978
	sub_83159978(ctx, base);
	// stw r3,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831565f8
	if (!cr6.eq) goto loc_831565F8;
loc_831565DC:
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
loc_831565F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83156708
	goto loc_83156708;
loc_831565F8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f13,156(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,23368(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 23368);
	f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x831598e0
	sub_831598E0(ctx, base);
loc_83156618:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,56(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// beq cr6,0x83156690
	if (cr6.eq) goto loc_83156690;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x8315df60
	sub_8315DF60(ctx, base);
loc_83156690:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831566c0
	if (cr6.eq) goto loc_831566C0;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// bl 0x83159ad8
	sub_83159AD8(ctx, base);
loc_831566C0:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831565dc
	if (cr6.eq) goto loc_831565DC;
	// bl 0x8315de58
	sub_8315DE58(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831565dc
	if (cr6.eq) goto loc_831565DC;
	// lwz r4,880(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 880);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x8315e388
	sub_8315E388(ctx, base);
	// lwz r11,904(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 904);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r11.u32);
loc_83156708:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83156720"))) PPC_WEAK_FUNC(sub_83156720);
PPC_FUNC_IMPL(__imp__sub_83156720) {
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
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83156750
	if (cr6.eq) goto loc_83156750;
	// bl 0x83155ff8
	sub_83155FF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831560f8
	sub_831560F8(ctx, base);
loc_83156750:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83156780
	if (cr6.eq) goto loc_83156780;
	// bl 0x8315e5d8
	sub_8315E5D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83156778
	if (cr6.eq) goto loc_83156778;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x8315def8
	sub_8315DEF8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83156780
	if (!cr6.eq) goto loc_83156780;
loc_83156778:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83156868
	goto loc_83156868;
loc_83156780:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831567b0
	if (cr6.eq) goto loc_831567B0;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// bl 0x83159af0
	sub_83159AF0(ctx, base);
loc_831567B0:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831567f0
	if (cr6.eq) goto loc_831567F0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
loc_831567F0:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,56(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83156840
	if (cr6.eq) goto loc_83156840;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
loc_83156840:
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r4,5
	cr6.compare<int32_t>(ctx.r4.s32, 5, xer);
	// beq cr6,0x83156864
	if (cr6.eq) goto loc_83156864;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x83156864
	if (cr6.eq) goto loc_83156864;
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// bl 0x831487d0
	sub_831487D0(ctx, base);
loc_83156864:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83156868:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83156880"))) PPC_WEAK_FUNC(sub_83156880);
PPC_FUNC_IMPL(__imp__sub_83156880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f13,204(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 204);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,172(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 172);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f13,f12
	ctx.f11.f64 = double(float(f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f11,172(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 172, temp.u32);
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f9,204(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 204, temp.u32);
	// lfs f8,208(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 208);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,176(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 176);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f6,f8,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f8.f64 + ctx.f7.f64));
	// stfs f5,176(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r11.u32 + 176, temp.u32);
	// lfs f4,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f8
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// stfs f3,208(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r11.u32 + 208, temp.u32);
	// lfs f2,212(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 212);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,180(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 180);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// fmadds f13,f0,f2,f1
	ctx.f13.f64 = double(float(f0.f64 * ctx.f2.f64 + ctx.f1.f64));
	// stfs f13,180(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 180, temp.u32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f2
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// stfs f11,212(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 212, temp.u32);
	// lfs f10,216(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 216);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,184(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 184);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f8,f10,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f9.f64));
	// stfs f7,184(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 184, temp.u32);
	// lfs f6,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f10
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// stfs f5,216(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r11.u32 + 216, temp.u32);
	// lfs f4,220(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 220);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,188(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 188);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f2,f4,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f4.f64 + ctx.f3.f64));
	// stfs f1,188(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 188, temp.u32);
	// lfs f0,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	f0.f64 = double(temp.f32);
	// fmuls f13,f0,f4
	ctx.f13.f64 = double(float(f0.f64 * ctx.f4.f64));
	// lfs f12,224(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 224);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,220(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 220, temp.u32);
	// lfs f11,192(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 192);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f10,f12,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f9,192(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 192, temp.u32);
	// lfs f8,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfs f6,228(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 228);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,196(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 196);
	ctx.f5.f64 = double(temp.f32);
	// stfs f7,224(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 224, temp.u32);
	// lfs f4,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f4,f6,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 + ctx.f5.f64));
	// stfs f3,196(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r11.u32 + 196, temp.u32);
	// lfs f2,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f6
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f6.f64));
	// lfs f0,232(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 232);
	f0.f64 = double(temp.f32);
	// lfs f13,200(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// stfs f1,228(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 228, temp.u32);
	// lfs f12,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// stfs f11,200(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 200, temp.u32);
	// lfs f10,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * f0.f64));
	// stfs f9,232(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 232, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83156990"))) PPC_WEAK_FUNC(sub_83156990);
PPC_FUNC_IMPL(__imp__sub_83156990) {
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
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831569c4
	if (cr6.eq) goto loc_831569C4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x831569c8
	goto loc_831569C8;
loc_831569C4:
	// li r11,0
	r11.s64 = 0;
loc_831569C8:
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

__attribute__((alias("__imp__sub_831569E0"))) PPC_WEAK_FUNC(sub_831569E0);
PPC_FUNC_IMPL(__imp__sub_831569E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x831569f8
	if (cr6.gt) goto loc_831569F8;
	// lfs f1,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_831569F8:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r9,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blt cr6,0x83156a18
	if (cr6.lt) goto loc_83156A18;
	// lfs f1,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_83156A18:
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// li r11,1
	r11.s64 = 1;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x83156a70
	if (cr6.lt) goto loc_83156A70;
	// addi r10,r8,24
	ctx.r10.s64 = ctx.r8.s64 + 24;
loc_83156A2C:
	// lfs f0,-16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x83156ab4
	if (!cr6.gt) goto loc_83156AB4;
	// lfs f0,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x83156aa0
	if (!cr6.gt) goto loc_83156AA0;
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x83156aa8
	if (!cr6.gt) goto loc_83156AA8;
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x83156ab0
	if (!cr6.gt) goto loc_83156AB0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r7,r9,-3
	ctx.r7.s64 = ctx.r9.s64 + -3;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// blt cr6,0x83156a2c
	if (cr6.lt) goto loc_83156A2C;
loc_83156A70:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x83156ab4
	if (!cr6.lt) goto loc_83156AB4;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_83156A80:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x83156ab4
	if (!cr6.gt) goto loc_83156AB4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83156a80
	if (cr6.lt) goto loc_83156A80;
	// b 0x83156ab4
	goto loc_83156AB4;
loc_83156AA0:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// b 0x83156ab4
	goto loc_83156AB4;
loc_83156AA8:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// b 0x83156ab4
	goto loc_83156AB4;
loc_83156AB0:
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
loc_83156AB4:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - f0.f64));
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f10,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fdivs f7,f12,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fmadds f1,f7,f8,f10
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f10.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83156AE8"))) PPC_WEAK_FUNC(sub_83156AE8);
PPC_FUNC_IMPL(__imp__sub_83156AE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83156b08
	if (!cr6.eq) goto loc_83156B08;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
loc_83156B08:
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + r11.u64;
	// lfs f13,-8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// li r9,4
	ctx.r9.s64 = 4;
loc_83156B48:
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lfs f12,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + r11.u64;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -8);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// ble cr6,0x83156b78
	if (!cr6.gt) goto loc_83156B78;
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_83156B78:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x83156b88
	if (!cr6.lt) goto loc_83156B88;
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_83156B88:
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// blt cr6,0x83156b48
	if (cr6.lt) goto loc_83156B48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83156BA0"))) PPC_WEAK_FUNC(sub_83156BA0);
PPC_FUNC_IMPL(__imp__sub_83156BA0) {
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
loc_83156BAC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83156bac
	if (!cr6.eq) goto loc_83156BAC;
	// subf r10,r3,r11
	ctx.r10.s64 = r11.s64 - ctx.r3.s64;
	// li r31,0
	r31.s64 = 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r11,r31
	r11.u64 = r31.u64;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83156c08
	if (cr6.eq) goto loc_83156C08;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// subf r6,r3,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_83156BE4:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,58
	cr6.compare<uint32_t>(ctx.r7.u32, 58, xer);
	// beq cr6,0x83156c08
	if (cr6.eq) goto loc_83156C08;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stbx r7,r6,r10
	PPC_STORE_U8(ctx.r6.u32 + ctx.r10.u32, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83156be4
	if (cr6.lt) goto loc_83156BE4;
loc_83156C08:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// stbx r31,r8,r4
	PPC_STORE_U8(ctx.r8.u32 + ctx.r4.u32, r31.u8);
	// bge cr6,0x83156c2c
	if (!cr6.lt) goto loc_83156C2C;
loc_83156C14:
	// lbzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,58
	cr6.compare<uint32_t>(ctx.r10.u32, 58, xer);
	// bne cr6,0x83156c2c
	if (!cr6.eq) goto loc_83156C2C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83156c14
	if (cr6.lt) goto loc_83156C14;
loc_83156C2C:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x83156c58
	if (!cr6.lt) goto loc_83156C58;
loc_83156C38:
	// lbzx r8,r11,r3
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r8,58
	cr6.compare<uint32_t>(ctx.r8.u32, 58, xer);
	// beq cr6,0x83156c58
	if (cr6.eq) goto loc_83156C58;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stbx r8,r10,r5
	PPC_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83156c38
	if (cr6.lt) goto loc_83156C38;
loc_83156C58:
	// stbx r31,r10,r5
	PPC_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r31.u8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83156C68"))) PPC_WEAK_FUNC(sub_83156C68);
PPC_FUNC_IMPL(__imp__sub_83156C68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83156ce4
	if (cr6.eq) goto loc_83156CE4;
	// lbz r11,0(r9)
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83156ce4
	if (cr6.eq) goto loc_83156CE4;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_83156C84:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83156c84
	if (!cr6.eq) goto loc_83156C84;
	// subf r10,r9,r11
	ctx.r10.s64 = r11.s64 - ctx.r9.s64;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83156ccc
	if (cr6.eq) goto loc_83156CCC;
loc_83156CB0:
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,10
	cr6.compare<uint32_t>(ctx.r8.u32, 10, xer);
	// bne cr6,0x83156cc0
	if (!cr6.eq) goto loc_83156CC0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_83156CC0:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83156cb0
	if (cr6.lt) goto loc_83156CB0;
loc_83156CCC:
	// add r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// blr 
	return;
loc_83156CE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83156CF0"))) PPC_WEAK_FUNC(sub_83156CF0);
PPC_FUNC_IMPL(__imp__sub_83156CF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_83156CF4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83156cf4
	if (!cr6.eq) goto loc_83156CF4;
	// subf r10,r3,r11
	ctx.r10.s64 = r11.s64 - ctx.r3.s64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83156d48
	if (cr6.eq) goto loc_83156D48;
loc_83156D24:
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// beq cr6,0x83156d48
	if (cr6.eq) goto loc_83156D48;
	// lbzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// bne cr6,0x83156d3c
	if (!cr6.eq) goto loc_83156D3C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_83156D3C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x83156d24
	if (cr6.lt) goto loc_83156D24;
loc_83156D48:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x83156d74
	if (!cr6.lt) goto loc_83156D74;
loc_83156D54:
	// lbzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// beq cr6,0x83156d74
	if (cr6.eq) goto loc_83156D74;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stbx r9,r10,r5
	PPC_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x83156d54
	if (cr6.lt) goto loc_83156D54;
loc_83156D74:
	// stbx r7,r10,r5
	PPC_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r7.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83156D80"))) PPC_WEAK_FUNC(sub_83156D80);
PPC_FUNC_IMPL(__imp__sub_83156D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r21{};
	PPCRegister r24{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f1.f64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83156DA8:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x83156da8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83156DA8;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x83157088
	if (!cr6.gt) goto loc_83157088;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r31,0
	r31.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f6,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	ctx.f5.f64 = double(temp.f32);
loc_83156DE0:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// fmr f1,f4
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f4.f64;
	// lwzx r28,r31,r11
	r28.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831569e0
	sub_831569E0(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(r11.u32, 23, xer);
	// bgt cr6,0x83157040
	if (cr6.gt) goto loc_83157040;
	// lis r12,-31979
	r12.s64 = -2095775744;
	// addi r12,r12,28184
	r12.s64 = r12.s64 + 28184;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_83156E78;
	case 1:
		goto loc_83156E94;
	case 2:
		goto loc_83156EA8;
	case 3:
		goto loc_83156EDC;
	case 4:
		goto loc_83156EBC;
	case 5:
		goto loc_83156EF0;
	case 6:
		goto loc_83156EFC;
	case 7:
		goto loc_83156F08;
	case 8:
		goto loc_83156F14;
	case 9:
		goto loc_83156F20;
	case 10:
		goto loc_83156F2C;
	case 11:
		goto loc_83156F38;
	case 12:
		goto loc_83156F44;
	case 13:
		goto loc_83156F50;
	case 14:
		goto loc_83156F64;
	case 15:
		goto loc_83156F78;
	case 16:
		goto loc_83156F8C;
	case 17:
		goto loc_83156FA0;
	case 18:
		goto loc_83156FB4;
	case 19:
		goto loc_83156FC8;
	case 20:
		goto loc_83156FDC;
	case 21:
		goto loc_83156FF0;
	case 22:
		goto loc_83157004;
	case 23:
		goto loc_83157018;
	default:
		__builtin_unreachable();
	}
	// lwz r24,28280(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 28280);
	// lwz r24,28308(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 28308);
	// lwz r24,28328(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 28328);
	// lwz r24,28380(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 28380);
	// lwz r24,28348(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 28348);
	// lwz r24,28400(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 28400);
	// lwz r24,28412(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 28412);
	// lwz r24,28424(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 28424);
	// lwz r24,28436(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 28436);
	// lwz r24,28448(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 28448);
	// lwz r24,28460(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 28460);
	// lwz r24,28472(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 28472);
	// lwz r24,28484(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 28484);
	// lwz r24,28496(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 28496);
	// lwz r24,28516(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 28516);
	// lwz r24,28536(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 28536);
	// lwz r24,28556(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 28556);
	// lwz r24,28576(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 28576);
	// lwz r24,28596(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 28596);
	// lwz r24,28616(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 28616);
	// lwz r24,28636(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 28636);
	// lwz r24,28656(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 28656);
	// lwz r24,28676(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 28676);
	// lwz r24,28696(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 28696);
loc_83156E78:
	// lfs f0,36(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	f0.f64 = double(temp.f32);
	// lfs f13,32(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f1
	ctx.f12.f64 = double(float(f0.f64 * ctx.f1.f64));
	// fmadds f11,f0,f5,f13
	ctx.f11.f64 = double(float(f0.f64 * ctx.f5.f64 + ctx.f13.f64));
	// stfs f11,32(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 32, temp.u32);
	// stfs f12,36(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 36, temp.u32);
	// b 0x83157040
	goto loc_83157040;
loc_83156E94:
	// lfs f0,40(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	f0.f64 = double(temp.f32);
	// lfs f13,44(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f13,f1,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + f0.f64));
	// stfs f12,40(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 40, temp.u32);
	// b 0x83157040
	goto loc_83157040;
loc_83156EA8:
	// lfs f0,48(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	f0.f64 = double(temp.f32);
	// lfs f13,52(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f13,f1,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + f0.f64));
	// stfs f12,48(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 48, temp.u32);
	// b 0x83157040
	goto loc_83157040;
loc_83156EBC:
	// lfs f0,124(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 124);
	f0.f64 = double(temp.f32);
	// fsubs f13,f6,f1
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f1.f64));
	// fsubs f12,f6,f0
	ctx.f12.f64 = double(float(ctx.f6.f64 - f0.f64));
	// lfs f11,128(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f13,f11,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fsubs f9,f6,f10
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// stfs f9,124(r6)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + 124, temp.u32);
	// b 0x83157040
	goto loc_83157040;
loc_83156EDC:
	// lfs f0,116(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 116);
	f0.f64 = double(temp.f32);
	// lfs f13,120(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f13,f1,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + f0.f64));
	// stfs f12,116(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 116, temp.u32);
	// b 0x83157040
	goto loc_83157040;
loc_83156EF0:
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// b 0x83157040
	goto loc_83157040;
loc_83156EFC:
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// b 0x83157040
	goto loc_83157040;
loc_83156F08:
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// b 0x83157040
	goto loc_83157040;
loc_83156F14:
	// stfs f1,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// b 0x83157040
	goto loc_83157040;
loc_83156F20:
	// stfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// b 0x83157040
	goto loc_83157040;
loc_83156F2C:
	// stfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// b 0x83157040
	goto loc_83157040;
loc_83156F38:
	// stfs f1,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// b 0x83157040
	goto loc_83157040;
loc_83156F44:
	// stfs f1,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// b 0x83157040
	goto loc_83157040;
loc_83156F50:
	// lfs f0,756(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 756);
	f0.f64 = double(temp.f32);
	// lfs f13,788(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 788);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f13,f1,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + f0.f64));
	// stfs f12,756(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 756, temp.u32);
	// b 0x83157040
	goto loc_83157040;
loc_83156F64:
	// lfs f0,760(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 760);
	f0.f64 = double(temp.f32);
	// lfs f13,792(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 792);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f13,f1,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + f0.f64));
	// stfs f12,760(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 760, temp.u32);
	// b 0x83157040
	goto loc_83157040;
loc_83156F78:
	// lfs f0,764(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 764);
	f0.f64 = double(temp.f32);
	// lfs f13,796(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 796);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f13,f1,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + f0.f64));
	// stfs f12,764(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 764, temp.u32);
	// b 0x83157040
	goto loc_83157040;
loc_83156F8C:
	// lfs f0,768(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 768);
	f0.f64 = double(temp.f32);
	// lfs f13,800(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 800);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f13,f1,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + f0.f64));
	// stfs f12,768(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 768, temp.u32);
	// b 0x83157040
	goto loc_83157040;
loc_83156FA0:
	// lfs f0,772(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 772);
	f0.f64 = double(temp.f32);
	// lfs f13,804(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 804);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f13,f1,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + f0.f64));
	// stfs f12,772(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 772, temp.u32);
	// b 0x83157040
	goto loc_83157040;
loc_83156FB4:
	// lfs f0,776(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 776);
	f0.f64 = double(temp.f32);
	// lfs f13,808(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 808);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f13,f1,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + f0.f64));
	// stfs f12,776(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 776, temp.u32);
	// b 0x83157040
	goto loc_83157040;
loc_83156FC8:
	// lfs f0,780(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 780);
	f0.f64 = double(temp.f32);
	// lfs f13,812(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 812);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f13,f1,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + f0.f64));
	// stfs f12,780(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 780, temp.u32);
	// b 0x83157040
	goto loc_83157040;
loc_83156FDC:
	// lfs f0,784(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 784);
	f0.f64 = double(temp.f32);
	// lfs f13,816(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 816);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f13,f1,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + f0.f64));
	// stfs f12,784(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 784, temp.u32);
	// b 0x83157040
	goto loc_83157040;
loc_83156FF0:
	// lfs f0,864(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 864);
	f0.f64 = double(temp.f32);
	// lfs f13,868(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 868);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f13,f1,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + f0.f64));
	// stfs f12,864(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 864, temp.u32);
	// b 0x83157040
	goto loc_83157040;
loc_83157004:
	// lfs f0,872(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 872);
	f0.f64 = double(temp.f32);
	// lfs f13,876(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 876);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f13,f1,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + f0.f64));
	// stfs f12,872(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 872, temp.u32);
	// b 0x83157040
	goto loc_83157040;
loc_83157018:
	// lwz r11,912(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 912);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83157034
	if (!cr6.eq) goto loc_83157034;
	// oris r11,r11,8192
	r11.u64 = r11.u64 | 536870912;
	// stw r4,168(r6)
	PPC_STORE_U32(ctx.r6.u32 + 168, ctx.r4.u32);
	// stw r11,912(r6)
	PPC_STORE_U32(ctx.r6.u32 + 912, r11.u32);
loc_83157034:
	// lfs f0,884(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 884);
	f0.f64 = double(temp.f32);
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(f0.f64 + ctx.f1.f64));
	// stfs f13,884(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 884, temp.u32);
loc_83157040:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x83156de0
	if (cr6.lt) goto loc_83156DE0;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x83157088
	if (!cr6.eq) goto loc_83157088;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lis r10,16256
	ctx.r10.s64 = 1065353216;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8315706C:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8315706c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8315706C;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x83156880
	sub_83156880(ctx, base);
loc_83157088:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83157090"))) PPC_WEAK_FUNC(sub_83157090);
PPC_FUNC_IMPL(__imp__sub_83157090) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// bne cr6,0x831570a8
	if (!cr6.eq) goto loc_831570A8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
loc_831570A8:
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x831570e0
	if (cr6.eq) goto loc_831570E0;
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_831570C0:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r5,r6
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, xer);
	// beq cr6,0x831570e8
	if (cr6.eq) goto loc_831570E8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x831570c0
	if (cr6.lt) goto loc_831570C0;
loc_831570E0:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f0.f64;
	// blr 
	return;
loc_831570E8:
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r8
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// b 0x831569e0
	sub_831569E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831570F8"))) PPC_WEAK_FUNC(sub_831570F8);
PPC_FUNC_IMPL(__imp__sub_831570F8) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
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

__attribute__((alias("__imp__sub_83157148"))) PPC_WEAK_FUNC(sub_83157148);
PPC_FUNC_IMPL(__imp__sub_83157148) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157150"))) PPC_WEAK_FUNC(sub_83157150);
PPC_FUNC_IMPL(__imp__sub_83157150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83157168"))) PPC_WEAK_FUNC(sub_83157168);
PPC_FUNC_IMPL(__imp__sub_83157168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83157180"))) PPC_WEAK_FUNC(sub_83157180);
PPC_FUNC_IMPL(__imp__sub_83157180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157190"))) PPC_WEAK_FUNC(sub_83157190);
PPC_FUNC_IMPL(__imp__sub_83157190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f1,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831571A0"))) PPC_WEAK_FUNC(sub_831571A0);
PPC_FUNC_IMPL(__imp__sub_831571A0) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
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

__attribute__((alias("__imp__sub_831571F0"))) PPC_WEAK_FUNC(sub_831571F0);
PPC_FUNC_IMPL(__imp__sub_831571F0) {
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
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r5,r10,25480
	ctx.r5.s64 = ctx.r10.s64 + 25480;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83168098
	sub_83168098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// bne cr6,0x83157270
	if (!cr6.eq) goto loc_83157270;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,25468
	ctx.r4.s64 = r11.s64 + 25468;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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
loc_83157270:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x831572a4
	if (!cr6.gt) goto loc_831572A4;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_83157288:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x83157288
	if (cr6.lt) goto loc_83157288;
loc_831572A4:
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

__attribute__((alias("__imp__sub_831572C0"))) PPC_WEAK_FUNC(sub_831572C0);
PPC_FUNC_IMPL(__imp__sub_831572C0) {
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
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83157330
	if (cr6.eq) goto loc_83157330;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8315731c
	if (!cr6.gt) goto loc_8315731C;
loc_831572F4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, xer);
	// blt cr6,0x831572f4
	if (cr6.lt) goto loc_831572F4;
loc_8315731C:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_83157330:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157348"))) PPC_WEAK_FUNC(sub_83157348);
PPC_FUNC_IMPL(__imp__sub_83157348) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// blt cr6,0x83157384
	if (cr6.lt) goto loc_83157384;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,25496
	ctx.r4.s64 = r11.s64 + 25496;
	// bl 0x831684d0
	sub_831684D0(ctx, base);
	// b 0x831573bc
	goto loc_831573BC;
loc_83157384:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r30,r5,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831573bc
	if (cr6.eq) goto loc_831573BC;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r7,r30
	PPC_STORE_U32(ctx.r7.u32 + r30.u32, ctx.r8.u32);
loc_831573BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831573D8"))) PPC_WEAK_FUNC(sub_831573D8);
PPC_FUNC_IMPL(__imp__sub_831573D8) {
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
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// blt cr6,0x83157418
	if (cr6.lt) goto loc_83157418;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,25496
	ctx.r4.s64 = r11.s64 + 25496;
	// bl 0x831684d0
	sub_831684D0(ctx, base);
loc_83157404:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83157418:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r5,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83157404
	if (cr6.eq) goto loc_83157404;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157458"))) PPC_WEAK_FUNC(sub_83157458);
PPC_FUNC_IMPL(__imp__sub_83157458) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// li r27,0
	r27.s64 = 0;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r25,904(r26)
	r25.u64 = PPC_LOAD_U32(r26.u32 + 904);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x83157534
	if (!cr6.gt) goto loc_83157534;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r31,0
	r31.s64 = 0;
	// lfs f31,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
loc_83157490:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83157520
	if (cr6.eq) goto loc_83157520;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x83148930
	sub_83148930(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83157500
	if (cr6.eq) goto loc_83157500;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r28,0(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,52(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83157504
	goto loc_83157504;
loc_83157500:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_83157504:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83157520:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x83157490
	if (cr6.lt) goto loc_83157490;
loc_83157534:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83157540"))) PPC_WEAK_FUNC(sub_83157540);
PPC_FUNC_IMPL(__imp__sub_83157540) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// li r27,0
	r27.s64 = 0;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r25,904(r26)
	r25.u64 = PPC_LOAD_U32(r26.u32 + 904);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8315761c
	if (!cr6.gt) goto loc_8315761C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r31,0
	r31.s64 = 0;
	// lfs f31,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
loc_83157578:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83157608
	if (cr6.eq) goto loc_83157608;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x83148930
	sub_83148930(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x831575e8
	if (cr6.eq) goto loc_831575E8;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r28,0(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,56(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 56);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x831575ec
	goto loc_831575EC;
loc_831575E8:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_831575EC:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83157608:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x83157578
	if (cr6.lt) goto loc_83157578;
loc_8315761C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83157628"))) PPC_WEAK_FUNC(sub_83157628);
PPC_FUNC_IMPL(__imp__sub_83157628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_83157644:
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315768c
	if (cr6.eq) goto loc_8315768C;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
loc_83157660:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x83157684
	if (cr6.eq) goto loc_83157684;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83157660
	if (cr6.eq) goto loc_83157660;
loc_83157684:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x831576a0
	if (cr6.eq) goto loc_831576A0;
loc_8315768C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// blt cr6,0x83157644
	if (cr6.lt) goto loc_83157644;
	// blr 
	return;
loc_831576A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831576A8"))) PPC_WEAK_FUNC(sub_831576A8);
PPC_FUNC_IMPL(__imp__sub_831576A8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// lfs f31,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// fmr f30,f31
	f30.f64 = f31.f64;
	// beq cr6,0x831576f8
	if (cr6.eq) goto loc_831576F8;
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
loc_831576F8:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x83157708
	if (!cr6.eq) goto loc_83157708;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f31.f64 = double(temp.f32);
loc_83157708:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x831577e0
	if (!cr6.gt) goto loc_831577E0;
	// li r31,0
	r31.s64 = 0;
	// li r26,1
	r26.s64 = 1;
loc_83157720:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831577cc
	if (cr6.eq) goto loc_831577CC;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r11,r27
	r11.u64 = r27.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
loc_83157740:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x83157764
	if (cr6.eq) goto loc_83157764;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83157740
	if (cr6.eq) goto loc_83157740;
loc_83157764:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x831577cc
	if (!cr6.eq) goto loc_831577CC;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// stw r26,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r26.u32);
	// beq cr6,0x831577a8
	if (cr6.eq) goto loc_831577A8;
	// cmpwi cr6,r29,23
	cr6.compare<int32_t>(r29.s32, 23, xer);
	// beq cr6,0x831577a8
	if (cr6.eq) goto loc_831577A8;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fadds f31,f1,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64 + f31.f64));
	// b 0x831577cc
	goto loc_831577CC;
loc_831577A8:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fmuls f31,f1,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64 * f31.f64));
loc_831577CC:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x83157720
	if (cr6.lt) goto loc_83157720;
loc_831577E0:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-80(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_831577F8"))) PPC_WEAK_FUNC(sub_831577F8);
PPC_FUNC_IMPL(__imp__sub_831577F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_83157814:
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83157860
	if (cr6.eq) goto loc_83157860;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
loc_83157830:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x83157854
	if (cr6.eq) goto loc_83157854;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83157830
	if (cr6.eq) goto loc_83157830;
loc_83157854:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x83157860
	if (!cr6.eq) goto loc_83157860;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_83157860:
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x83157814
	if (!cr0.eq) goto loc_83157814;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157870"))) PPC_WEAK_FUNC(sub_83157870);
PPC_FUNC_IMPL(__imp__sub_83157870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x831578dc
	if (cr6.eq) goto loc_831578DC;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_83157884:
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831578cc
	if (cr6.eq) goto loc_831578CC;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
loc_831578A0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x831578c4
	if (cr6.eq) goto loc_831578C4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x831578a0
	if (cr6.eq) goto loc_831578A0;
loc_831578C4:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x831578e4
	if (cr6.eq) goto loc_831578E4;
loc_831578CC:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// blt cr6,0x83157884
	if (cr6.lt) goto loc_83157884;
loc_831578DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831578E4:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83157900"))) PPC_WEAK_FUNC(sub_83157900);
PPC_FUNC_IMPL(__imp__sub_83157900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8315791C"))) PPC_WEAK_FUNC(sub_8315791C);
PPC_FUNC_IMPL(__imp__sub_8315791C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157920"))) PPC_WEAK_FUNC(sub_83157920);
PPC_FUNC_IMPL(__imp__sub_83157920) {
	PPC_FUNC_PROLOGUE();
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157928"))) PPC_WEAK_FUNC(sub_83157928);
PPC_FUNC_IMPL(__imp__sub_83157928) {
	PPC_FUNC_PROLOGUE();
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157930"))) PPC_WEAK_FUNC(sub_83157930);
PPC_FUNC_IMPL(__imp__sub_83157930) {
	PPC_FUNC_PROLOGUE();
	// stw r4,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157938"))) PPC_WEAK_FUNC(sub_83157938);
PPC_FUNC_IMPL(__imp__sub_83157938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157940"))) PPC_WEAK_FUNC(sub_83157940);
PPC_FUNC_IMPL(__imp__sub_83157940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157948"))) PPC_WEAK_FUNC(sub_83157948);
PPC_FUNC_IMPL(__imp__sub_83157948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f2,28(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157958"))) PPC_WEAK_FUNC(sub_83157958);
PPC_FUNC_IMPL(__imp__sub_83157958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157960"))) PPC_WEAK_FUNC(sub_83157960);
PPC_FUNC_IMPL(__imp__sub_83157960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157968"))) PPC_WEAK_FUNC(sub_83157968);
PPC_FUNC_IMPL(__imp__sub_83157968) {
	PPC_FUNC_PROLOGUE();
	// stw r4,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157970"))) PPC_WEAK_FUNC(sub_83157970);
PPC_FUNC_IMPL(__imp__sub_83157970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	f0.f64 = double(temp.f32);
	// fmadds f0,f0,f1,f13
	f0.f64 = double(float(f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// lfs f12,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// ble cr6,0x83157a30
	if (!cr6.gt) goto loc_83157A30;
	// fsubs f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fadds f30,f13,f0
	f30.f64 = double(float(ctx.f13.f64 + f0.f64));
	// fcmpu cr6,f31,f12
	cr6.compare(f31.f64, ctx.f12.f64);
	// bgt cr6,0x831579c8
	if (cr6.gt) goto loc_831579C8;
	// fmr f31,f12
	f31.f64 = ctx.f12.f64;
loc_831579C8:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// blt cr6,0x831579dc
	if (cr6.lt) goto loc_831579DC;
	// fmr f30,f0
	f30.f64 = f0.f64;
loc_831579DC:
	// bl 0x8315ecc8
	sub_8315ECC8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// fsubs f0,f30,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f30.f64 - f31.f64));
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fdivs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 / ctx.f8.f64));
	// fmadds f6,f7,f0,f31
	ctx.f6.f64 = double(float(ctx.f7.f64 * f0.f64 + f31.f64));
	// stfs f6,36(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
loc_83157A30:
	// lfs f1,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
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

__attribute__((alias("__imp__sub_83157A58"))) PPC_WEAK_FUNC(sub_83157A58);
PPC_FUNC_IMPL(__imp__sub_83157A58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83157a8c
	if (cr6.eq) goto loc_83157A8C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stfs f1,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
loc_83157A8C:
	// lfs f1,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157AA8"))) PPC_WEAK_FUNC(sub_83157AA8);
PPC_FUNC_IMPL(__imp__sub_83157AA8) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x831699e0
	sub_831699E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83157b20
	if (!cr6.eq) goto loc_83157B20;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,25680
	ctx.r4.s64 = r11.s64 + 25680;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83157b0c
	if (cr6.eq) goto loc_83157B0C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// stw r28,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r28.u32);
loc_83157B0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831b0b70
	return;
loc_83157B20:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83168938
	sub_83168938(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83169308
	sub_83169308(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r5,r11,25656
	ctx.r5.s64 = r11.s64 + 25656;
	// li r6,4
	ctx.r6.s64 = 4;
	// rlwinm r4,r10,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x83168098
	sub_83168098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// bne cr6,0x83157b8c
	if (!cr6.eq) goto loc_83157B8C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,25644
	ctx.r4.s64 = r11.s64 + 25644;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83156990
	sub_83156990(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831b0b70
	return;
loc_83157B8C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x831699e0
	sub_831699E0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x83157bd4
	if (!cr6.eq) goto loc_83157BD4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,25632
	ctx.r4.s64 = r11.s64 + 25632;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83156990
	sub_83156990(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831b0b70
	return;
loc_83157BD4:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r28,0
	r28.s64 = 0;
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x83157c8c
	if (!cr6.gt) goto loc_83157C8C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f31,-10412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -10412);
	f31.f64 = double(temp.f32);
loc_83157BF0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83168a48
	sub_83168A48(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83168a48
	sub_83168A48(ctx, base);
	// clrlwi r9,r26,16
	ctx.r9.u64 = r26.u32 & 0xFFFF;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// lfs f0,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 16);
	f0.f64 = double(temp.f32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfd f8,88(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfs f13,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// fmuls f7,f9,f31
	ctx.f7.f64 = double(float(ctx.f9.f64 * f31.f64));
	// fmadds f6,f7,f12,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + f0.f64));
	// stfsx f6,r28,r7
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r28.u32 + ctx.r7.u32, temp.u32);
	// lfs f5,24(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lfs f4,20(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// add r6,r28,r11
	ctx.r6.u64 = r28.u64 + r11.u64;
	// fcfid f3,f8
	ctx.f3.f64 = double(ctx.f8.s64);
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// fsubs f2,f4,f5
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// frsp f1,f3
	ctx.f1.f64 = double(float(ctx.f3.f64));
	// fmuls f0,f1,f31
	f0.f64 = double(float(ctx.f1.f64 * f31.f64));
	// fmadds f13,f2,f0,f5
	ctx.f13.f64 = double(float(ctx.f2.f64 * f0.f64 + ctx.f5.f64));
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r5
	cr6.compare<uint32_t>(r30.u32, ctx.r5.u32, xer);
	// blt cr6,0x83157bf0
	if (cr6.lt) goto loc_83157BF0;
loc_83157C8C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83169308
	sub_83169308(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83157CA8"))) PPC_WEAK_FUNC(sub_83157CA8);
PPC_FUNC_IMPL(__imp__sub_83157CA8) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,25336
	ctx.r9.s64 = r11.s64 + 25336;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83157ce0
	if (cr6.eq) goto loc_83157CE0;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83157CE0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157CF8"))) PPC_WEAK_FUNC(sub_83157CF8);
PPC_FUNC_IMPL(__imp__sub_83157CF8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83157d98
	if (cr6.eq) goto loc_83157D98;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// li r27,0
	r27.s64 = 0;
	// mr r28,r27
	r28.u64 = r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x83157d7c
	if (!cr6.gt) goto loc_83157D7C;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_83157D2C:
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83157d68
	if (cr6.eq) goto loc_83157D68;
	// rotlwi r31,r10,0
	r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83157d58
	if (cr6.eq) goto loc_83157D58;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// stw r27,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r27.u32);
loc_83157D58:
	// stw r27,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r27.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83168618
	sub_83168618(ctx, base);
loc_83157D68:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x83157d2c
	if (cr6.lt) goto loc_83157D2C;
loc_83157D7C:
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// stw r27,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r27.u32);
	// stw r27,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_83157D98:
	// li r11,0
	r11.s64 = 0;
	// stw r11,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83157DA8"))) PPC_WEAK_FUNC(sub_83157DA8);
PPC_FUNC_IMPL(__imp__sub_83157DA8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r11,25704
	ctx.r6.s64 = r11.s64 + 25704;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x831685b0
	sub_831685B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83157e64
	if (cr6.eq) goto loc_83157E64;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r9,r11,25336
	ctx.r9.s64 = r11.s64 + 25336;
	// li r11,0
	r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r8,r10,25360
	ctx.r8.s64 = ctx.r10.s64 + 25360;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r6,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r6.u32);
	// lfs f0,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	f0.f64 = double(temp.f32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// rotlwi r11,r8,0
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83157e84
	if (!cr6.eq) goto loc_83157E84;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83157E64:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,25692
	ctx.r4.s64 = r11.s64 + 25692;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83157E84:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83157E90"))) PPC_WEAK_FUNC(sub_83157E90);
PPC_FUNC_IMPL(__imp__sub_83157E90) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r11,25732
	ctx.r6.s64 = r11.s64 + 25732;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x831685b0
	sub_831685B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83157f18
	if (cr6.eq) goto loc_83157F18;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r10,r11,25384
	ctx.r10.s64 = r11.s64 + 25384;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83157f34
	if (!cr6.eq) goto loc_83157F34;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83157f38
	goto loc_83157F38;
loc_83157F18:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,25720
	ctx.r4.s64 = r11.s64 + 25720;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83157f38
	goto loc_83157F38;
loc_83157F34:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83157F38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157F50"))) PPC_WEAK_FUNC(sub_83157F50);
PPC_FUNC_IMPL(__imp__sub_83157F50) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,25384
	ctx.r9.s64 = r11.s64 + 25384;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83157f88
	if (cr6.eq) goto loc_83157F88;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83157F88:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83157FA0"))) PPC_WEAK_FUNC(sub_83157FA0);
PPC_FUNC_IMPL(__imp__sub_83157FA0) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r11,25752
	ctx.r6.s64 = r11.s64 + 25752;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x831685b0
	sub_831685B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83158034
	if (cr6.eq) goto loc_83158034;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// addi r9,r11,25416
	ctx.r9.s64 = r11.s64 + 25416;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83158054
	if (!cr6.eq) goto loc_83158054;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83158034:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,25740
	ctx.r4.s64 = r11.s64 + 25740;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83158054:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83158060"))) PPC_WEAK_FUNC(sub_83158060);
PPC_FUNC_IMPL(__imp__sub_83158060) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,25416
	ctx.r9.s64 = r11.s64 + 25416;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83158098
	if (cr6.eq) goto loc_83158098;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83158098:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831580B0"))) PPC_WEAK_FUNC(sub_831580B0);
PPC_FUNC_IMPL(__imp__sub_831580B0) {
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
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// blt cr6,0x831580ec
	if (cr6.lt) goto loc_831580EC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,25872
	ctx.r4.s64 = r11.s64 + 25872;
	// bl 0x831684d0
	sub_831684D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_831580EC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r30,r5,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8315811c
	if (cr6.eq) goto loc_8315811C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,25812
	ctx.r4.s64 = r11.s64 + 25812;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8315811C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x83157e90
	sub_83157E90(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stwx r3,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r3.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83158160
	if (!cr6.eq) goto loc_83158160;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,25768
	ctx.r4.s64 = r11.s64 + 25768;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83158160:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83158170"))) PPC_WEAK_FUNC(sub_83158170);
PPC_FUNC_IMPL(__imp__sub_83158170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r11,25960
	ctx.r6.s64 = r11.s64 + 25960;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x831685b0
	sub_831685B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83158208
	if (cr6.eq) goto loc_83158208;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r8,25568
	ctx.r7.s64 = ctx.r8.s64 + 25568;
	// li r6,1
	ctx.r6.s64 = 1;
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
	// lfs f13,2244(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stfs f31,32(r3)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stfs f31,36(r3)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stw r6,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r6.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-16(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83158208:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,25944
	ctx.r4.s64 = r11.s64 + 25944;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158238"))) PPC_WEAK_FUNC(sub_83158238);
PPC_FUNC_IMPL(__imp__sub_83158238) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,25568
	ctx.r9.s64 = r11.s64 + 25568;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83158270
	if (cr6.eq) goto loc_83158270;
	// li r4,48
	ctx.r4.s64 = 48;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83158270:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158288"))) PPC_WEAK_FUNC(sub_83158288);
PPC_FUNC_IMPL(__imp__sub_83158288) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r11,25988
	ctx.r6.s64 = r11.s64 + 25988;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x831685b0
	sub_831685B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83158304
	if (cr6.eq) goto loc_83158304;
	// li r11,0
	r11.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bl 0x83157aa8
	sub_83157AA8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x831582fc
	if (!cr6.eq) goto loc_831582FC;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_831582FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83158304:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,25976
	ctx.r4.s64 = r11.s64 + 25976;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83158328"))) PPC_WEAK_FUNC(sub_83158328);
PPC_FUNC_IMPL(__imp__sub_83158328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,16(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x831699e0
	sub_831699E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8315838c
	if (!cr6.eq) goto loc_8315838C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,26064
	ctx.r4.s64 = r11.s64 + 26064;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b78
	return;
loc_8315838C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83168938
	sub_83168938(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83169308
	sub_83169308(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83158568
	if (cr6.eq) goto loc_83158568;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r5,r10,26040
	ctx.r5.s64 = ctx.r10.s64 + 26040;
	// li r6,4
	ctx.r6.s64 = 4;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83168098
	sub_83168098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// bne cr6,0x83158408
	if (!cr6.eq) goto loc_83158408;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,26028
	ctx.r4.s64 = r11.s64 + 26028;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b78
	return;
loc_83158408:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r30,0
	r30.s64 = 0;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8315843c
	if (!cr6.gt) goto loc_8315843C;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_83158420:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r30,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, r30.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x83158420
	if (cr6.lt) goto loc_83158420;
loc_8315843C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,16(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x831699e0
	sub_831699E0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8315848c
	if (!cr6.eq) goto loc_8315848C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,26016
	ctx.r4.s64 = r11.s64 + 26016;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b78
	return;
loc_8315848C:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x83158560
	if (!cr6.gt) goto loc_83158560;
	// mr r28,r30
	r28.u64 = r30.u64;
loc_8315849C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83168940
	sub_83168940(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83168d58
	sub_83168D58(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stfs f1,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83168d58
	sub_83168D58(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83168d58
	sub_83168D58(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83168d58
	sub_83168D58(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,5
	ctx.r5.s64 = 5;
	// stfs f1,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83169378
	sub_83169378(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x83158288
	sub_83158288(ctx, base);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stwx r3,r28,r8
	PPC_STORE_U32(r28.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwzx r6,r28,r7
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83158574
	if (cr6.eq) goto loc_83158574;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8315849c
	if (cr6.lt) goto loc_8315849C;
loc_83158560:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83169308
	sub_83169308(ctx, base);
loc_83158568:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b78
	return;
loc_83158574:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,26004
	ctx.r4.s64 = r11.s64 + 26004;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83169308
	sub_83169308(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831585B0"))) PPC_WEAK_FUNC(sub_831585B0);
PPC_FUNC_IMPL(__imp__sub_831585B0) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,26096
	ctx.r5.s64 = r11.s64 + 26096;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x83168690
	sub_83168690(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8315860c
	if (cr6.eq) goto loc_8315860C;
	// li r30,0
	r30.s64 = 0;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// bl 0x8315ed50
	sub_8315ED50(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8315860C:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,26084
	ctx.r4.s64 = r11.s64 + 26084;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83158630"))) PPC_WEAK_FUNC(sub_83158630);
PPC_FUNC_IMPL(__imp__sub_83158630) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r30,904(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 904);
	// beq cr6,0x831586bc
	if (cr6.eq) goto loc_831586BC;
	// addi r31,r11,-4
	r31.s64 = r11.s64 + -4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831586bc
	if (cr6.eq) goto loc_831586BC;
loc_83158660:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831488b0
	sub_831488B0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831488a8
	sub_831488A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x83156258
	sub_83156258(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831586a8
	if (cr6.eq) goto loc_831586A8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831586A8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831586bc
	if (cr6.eq) goto loc_831586BC;
	// addic. r31,r11,-4
	xer.ca = r11.u32 > 3;
	r31.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x83158660
	if (!cr0.eq) goto loc_83158660;
loc_831586BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_831586C8"))) PPC_WEAK_FUNC(sub_831586C8);
PPC_FUNC_IMPL(__imp__sub_831586C8) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,-4
	r31.s64 = r11.s64 + -4;
	// bne cr6,0x831586ec
	if (!cr6.eq) goto loc_831586EC;
	// li r31,0
	r31.s64 = 0;
loc_831586EC:
	// lwz r29,904(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 904);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83158750
	if (cr6.eq) goto loc_83158750;
loc_831586F8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r30,r11,-4
	r30.s64 = r11.s64 + -4;
	// bne cr6,0x8315870c
	if (!cr6.eq) goto loc_8315870C;
	// li r30,0
	r30.s64 = 0;
loc_8315870C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831488b0
	sub_831488B0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831488a8
	sub_831488A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x83156258
	sub_83156258(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83158744
	if (cr6.eq) goto loc_83158744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83155ff8
	sub_83155FF8(ctx, base);
loc_83158744:
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x831586f8
	if (!cr6.eq) goto loc_831586F8;
loc_83158750:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83158758"))) PPC_WEAK_FUNC(sub_83158758);
PPC_FUNC_IMPL(__imp__sub_83158758) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831587c8
	if (cr6.eq) goto loc_831587C8;
	// addi r31,r11,-4
	r31.s64 = r11.s64 + -4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831587c8
	if (cr6.eq) goto loc_831587C8;
	// li r29,-1
	r29.s64 = -1;
loc_83158784:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r30,r11,-4
	r30.s64 = r11.s64 + -4;
	// bne cr6,0x83158798
	if (!cr6.eq) goto loc_83158798;
	// li r30,0
	r30.s64 = 0;
loc_83158798:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83156258
	sub_83156258(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831587bc
	if (cr6.eq) goto loc_831587BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83155ff8
	sub_83155FF8(ctx, base);
loc_831587BC:
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83158784
	if (!cr6.eq) goto loc_83158784;
loc_831587C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831587D0"))) PPC_WEAK_FUNC(sub_831587D0);
PPC_FUNC_IMPL(__imp__sub_831587D0) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,-4
	r31.s64 = r11.s64 + -4;
	// bne cr6,0x831587f4
	if (!cr6.eq) goto loc_831587F4;
	// li r31,0
	r31.s64 = 0;
loc_831587F4:
	// lwz r29,904(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 904);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83158858
	if (cr6.eq) goto loc_83158858;
loc_83158800:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r30,r11,-4
	r30.s64 = r11.s64 + -4;
	// bne cr6,0x83158814
	if (!cr6.eq) goto loc_83158814;
	// li r30,0
	r30.s64 = 0;
loc_83158814:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831488b0
	sub_831488B0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831488a8
	sub_831488A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x83156258
	sub_83156258(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8315884c
	if (cr6.eq) goto loc_8315884C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83155f70
	sub_83155F70(ctx, base);
loc_8315884C:
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83158800
	if (!cr6.eq) goto loc_83158800;
loc_83158858:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83158860"))) PPC_WEAK_FUNC(sub_83158860);
PPC_FUNC_IMPL(__imp__sub_83158860) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831588d0
	if (cr6.eq) goto loc_831588D0;
	// addi r31,r11,-4
	r31.s64 = r11.s64 + -4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831588d0
	if (cr6.eq) goto loc_831588D0;
	// li r29,-1
	r29.s64 = -1;
loc_8315888C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r30,r11,-4
	r30.s64 = r11.s64 + -4;
	// bne cr6,0x831588a0
	if (!cr6.eq) goto loc_831588A0;
	// li r30,0
	r30.s64 = 0;
loc_831588A0:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83156258
	sub_83156258(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831588c4
	if (cr6.eq) goto loc_831588C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83155f70
	sub_83155F70(ctx, base);
loc_831588C4:
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8315888c
	if (!cr6.eq) goto loc_8315888C;
loc_831588D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831588D8"))) PPC_WEAK_FUNC(sub_831588D8);
PPC_FUNC_IMPL(__imp__sub_831588D8) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,-4
	r31.s64 = r11.s64 + -4;
	// bne cr6,0x83158900
	if (!cr6.eq) goto loc_83158900;
	// li r31,0
	r31.s64 = 0;
loc_83158900:
	// lwz r30,904(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 904);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83158978
	if (cr6.eq) goto loc_83158978;
loc_8315890C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831488b0
	sub_831488B0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831488a8
	sub_831488A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x83156258
	sub_83156258(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83158964
	if (cr6.eq) goto loc_83158964;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83156238
	sub_83156238(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83158984
	if (cr6.eq) goto loc_83158984;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83158984
	if (cr6.eq) goto loc_83158984;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x83158984
	if (cr6.eq) goto loc_83158984;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x83158984
	if (cr6.eq) goto loc_83158984;
loc_83158964:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83158978
	if (cr6.eq) goto loc_83158978;
	// addic. r31,r11,-4
	xer.ca = r11.u32 > 3;
	r31.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x8315890c
	if (!cr0.eq) goto loc_8315890C;
loc_83158978:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_83158984:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83158990"))) PPC_WEAK_FUNC(sub_83158990);
PPC_FUNC_IMPL(__imp__sub_83158990) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83158a0c
	if (cr6.eq) goto loc_83158A0C;
	// addi r31,r11,-4
	r31.s64 = r11.s64 + -4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83158a0c
	if (cr6.eq) goto loc_83158A0C;
loc_831589C4:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r30,r11,-4
	r30.s64 = r11.s64 + -4;
	// bne cr6,0x831589d8
	if (!cr6.eq) goto loc_831589D8;
	// li r30,0
	r30.s64 = 0;
loc_831589D8:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83156258
	sub_83156258(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83158a00
	if (cr6.eq) goto loc_83158A00;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83156080
	sub_83156080(ctx, base);
loc_83158A00:
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x831589c4
	if (!cr6.eq) goto loc_831589C4;
loc_83158A0C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83158A18"))) PPC_WEAK_FUNC(sub_83158A18);
PPC_FUNC_IMPL(__imp__sub_83158A18) {
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
	// lwz r28,148(r4)
	r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x83158a48
	if (!cr6.eq) goto loc_83158A48;
loc_83158A3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
loc_83158A48:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r28
	r11.u64 = r28.u64;
	// addi r10,r10,-23007
	ctx.r10.s64 = ctx.r10.s64 + -23007;
loc_83158A54:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x83158a78
	if (cr6.eq) goto loc_83158A78;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83158a54
	if (cr6.eq) goto loc_83158A54;
loc_83158A78:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83158a3c
	if (cr6.eq) goto loc_83158A3C;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r30,r11,-4
	r30.s64 = r11.s64 + -4;
	// bne cr6,0x83158a94
	if (!cr6.eq) goto loc_83158A94;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_83158A94:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r29,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r29.u32);
	// beq cr6,0x83158b6c
	if (cr6.eq) goto loc_83158B6C;
loc_83158AA0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r28
	r31.u64 = r28.u64;
	// bl 0x83156248
	sub_83156248(ctx, base);
loc_83158AAC:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// beq cr6,0x83158ad0
	if (cr6.eq) goto loc_83158AD0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83158aac
	if (cr6.eq) goto loc_83158AAC;
loc_83158AD0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83158b58
	if (!cr6.eq) goto loc_83158B58;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83156238
	sub_83156238(ctx, base);
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83158b0c
	if (!cr6.eq) goto loc_83158B0C;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83158b24
	if (cr6.eq) goto loc_83158B24;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83158b24
	if (cr6.eq) goto loc_83158B24;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x83158b24
	if (cr6.eq) goto loc_83158B24;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// b 0x83158b20
	goto loc_83158B20;
loc_83158B0C:
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83158b24
	if (cr6.eq) goto loc_83158B24;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83158b24
	if (cr6.eq) goto loc_83158B24;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
loc_83158B20:
	// bne cr6,0x83158b58
	if (!cr6.eq) goto loc_83158B58;
loc_83158B24:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83158b48
	if (cr6.eq) goto loc_83158B48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83156240
	sub_83156240(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83156240
	sub_83156240(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(r31.s32, ctx.r3.s32, xer);
	// bge cr6,0x83158b4c
	if (!cr6.lt) goto loc_83158B4C;
loc_83158B48:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_83158B4C:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
loc_83158B58:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83158b6c
	if (cr6.eq) goto loc_83158B6C;
	// addic. r30,r11,-4
	xer.ca = r11.u32 > 3;
	r30.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x83158aa0
	if (!cr0.eq) goto loc_83158AA0;
loc_83158B6C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83158B78"))) PPC_WEAK_FUNC(sub_83158B78);
PPC_FUNC_IMPL(__imp__sub_83158B78) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,-4
	r31.s64 = r11.s64 + -4;
	// bne cr6,0x83158ba4
	if (!cr6.eq) goto loc_83158BA4;
	// li r31,0
	r31.s64 = 0;
loc_83158BA4:
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83158bf0
	if (cr6.eq) goto loc_83158BF0;
	// li r30,-1
	r30.s64 = -1;
loc_83158BB4:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83156258
	sub_83156258(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83158bdc
	if (cr6.eq) goto loc_83158BDC;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// beq cr6,0x83158bfc
	if (cr6.eq) goto loc_83158BFC;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_83158BDC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83158bf0
	if (cr6.eq) goto loc_83158BF0;
	// addic. r31,r11,-4
	xer.ca = r11.u32 > 3;
	r31.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x83158bb4
	if (!cr0.eq) goto loc_83158BB4;
loc_83158BF0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
loc_83158BFC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83158C08"))) PPC_WEAK_FUNC(sub_83158C08);
PPC_FUNC_IMPL(__imp__sub_83158C08) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83158c68
	if (cr6.eq) goto loc_83158C68;
	// addi r31,r11,-4
	r31.s64 = r11.s64 + -4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83158c68
	if (cr6.eq) goto loc_83158C68;
loc_83158C38:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83156258
	sub_83156258(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83158c74
	if (!cr6.eq) goto loc_83158C74;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83158c68
	if (cr6.eq) goto loc_83158C68;
	// addic. r31,r11,-4
	xer.ca = r11.u32 > 3;
	r31.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x83158c38
	if (!cr0.eq) goto loc_83158C38;
loc_83158C68:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_83158C74:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83158C80"))) PPC_WEAK_FUNC(sub_83158C80);
PPC_FUNC_IMPL(__imp__sub_83158C80) {
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
	// bl 0x83158b78
	sub_83158B78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83158cac
	if (cr6.eq) goto loc_83158CAC;
	// bl 0x831562a8
	sub_831562A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83158CAC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158CC8"))) PPC_WEAK_FUNC(sub_83158CC8);
PPC_FUNC_IMPL(__imp__sub_83158CC8) {
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
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x83158c08
	sub_83158C08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83158d0c
	if (cr6.eq) goto loc_83158D0C;
	// bl 0x831562b0
	sub_831562B0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
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
loc_83158D0C:
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_83158D30"))) PPC_WEAK_FUNC(sub_83158D30);
PPC_FUNC_IMPL(__imp__sub_83158D30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_83158D40:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83158d40
	if (!cr6.eq) goto loc_83158D40;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83158D58"))) PPC_WEAK_FUNC(sub_83158D58);
PPC_FUNC_IMPL(__imp__sub_83158D58) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r30,r28,4
	r30.s64 = r28.s64 + 4;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83158e18
	if (cr6.eq) goto loc_83158E18;
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83158e18
	if (cr6.eq) goto loc_83158E18;
	// li r29,0
	r29.s64 = 0;
loc_83158D88:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,-4
	r31.s64 = r11.s64 + -4;
	// bne cr6,0x83158d9c
	if (!cr6.eq) goto loc_83158D9C;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_83158D9C:
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83158e2c
	if (cr0.eq) goto loc_83158E2C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x83158db8
	if (!cr6.eq) goto loc_83158DB8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_83158DB8:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x83158dcc
	if (!cr6.eq) goto loc_83158DCC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
loc_83158DCC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83158de0
	if (cr6.eq) goto loc_83158DE0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_83158DE0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83158df4
	if (cr6.eq) goto loc_83158DF4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_83158DF4:
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83158d88
	if (!cr6.eq) goto loc_83158D88;
loc_83158E18:
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_83158E2C:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,19544
	ctx.r4.s64 = r11.s64 + 19544;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_83158E3C:
	// b 0x83158e3c
	goto loc_83158E3C;
}

__attribute__((alias("__imp__sub_83158E40"))) PPC_WEAK_FUNC(sub_83158E40);
PPC_FUNC_IMPL(__imp__sub_83158E40) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x83158a18
	sub_83158A18(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83158f34
	if (cr6.eq) goto loc_83158F34;
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x83158f34
	if (cr6.lt) goto loc_83158F34;
	// lwz r30,152(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// bl 0x83156240
	sub_83156240(ctx, base);
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, r30.s32, xer);
	// ble cr6,0x83158e90
	if (!cr6.gt) goto loc_83158E90;
	// li r30,0
	r30.s64 = 0;
	// b 0x83158eb8
	goto loc_83158EB8;
loc_83158E90:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r30,152(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// bl 0x83156240
	sub_83156240(ctx, base);
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, r30.s32, xer);
	// bne cr6,0x83158eb4
	if (!cr6.eq) goto loc_83158EB4;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r30,r10,27,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x83158eb8
	goto loc_83158EB8;
loc_83158EB4:
	// li r30,1
	r30.s64 = 1;
loc_83158EB8:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83158f00
	if (cr6.eq) goto loc_83158F00;
	// lwz r11,896(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 896);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bne cr6,0x83158ef0
	if (!cr6.eq) goto loc_83158EF0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83156250
	sub_83156250(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// b 0x83158ef4
	goto loc_83158EF4;
loc_83158EF0:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
loc_83158EF4:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// bl 0x8315eca0
	sub_8315ECA0(ctx, base);
loc_83158F00:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// bne cr6,0x83158f54
	if (!cr6.eq) goto loc_83158F54;
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83158f40
	if (!cr6.eq) goto loc_83158F40;
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// addi r3,r28,4
	ctx.r3.s64 = r28.s64 + 4;
	// bl 0x83148a80
	sub_83148A80(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83158F34:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
loc_83158F40:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83155ff8
	sub_83155FF8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
loc_83158F54:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83158F60"))) PPC_WEAK_FUNC(sub_83158F60);
PPC_FUNC_IMPL(__imp__sub_83158F60) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r29,904(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 904);
	// bl 0x83158e40
	sub_83158E40(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83158fe4
	if (cr6.eq) goto loc_83158FE4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831488b0
	sub_831488B0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831488a8
	sub_831488A8(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r11,26112
	ctx.r4.s64 = r11.s64 + 26112;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// bl 0x83156408
	sub_83156408(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83158fe4
	if (cr6.eq) goto loc_83158FE4;
	// bl 0x83155ee8
	sub_83155EE8(ctx, base);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x831489e0
	sub_831489E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_83158FE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83158FF0"))) PPC_WEAK_FUNC(sub_83158FF0);
PPC_FUNC_IMPL(__imp__sub_83158FF0) {
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
	// bl 0x83172358
	sub_83172358(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831590f0
	if (cr6.eq) goto loc_831590F0;
	// addi r30,r11,-4
	r30.s64 = r11.s64 + -4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x831590f0
	if (cr6.eq) goto loc_831590F0;
	// li r27,0
	r27.s64 = 0;
loc_83159024:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r28,r11,-4
	r28.s64 = r11.s64 + -4;
	// bne cr6,0x83159038
	if (!cr6.eq) goto loc_83159038;
	// mr r28,r27
	r28.u64 = r27.u64;
loc_83159038:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831560f8
	sub_831560F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83156238
	sub_83156238(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83159058
	if (cr6.eq) goto loc_83159058;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bne cr6,0x831590e4
	if (!cr6.eq) goto loc_831590E4;
loc_83159058:
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831590f8
	if (cr6.eq) goto loc_831590F8;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x83159078
	if (!cr6.eq) goto loc_83159078;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_83159078:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x8315908c
	if (!cr6.eq) goto loc_8315908C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_8315908C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831590a0
	if (cr6.eq) goto loc_831590A0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_831590A0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831590b4
	if (cr6.eq) goto loc_831590B4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_831590B4:
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831590e4
	if (!cr6.eq) goto loc_831590E4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83153d40
	sub_83153D40(ctx, base);
loc_831590E4:
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x83159024
	if (!cr6.eq) goto loc_83159024;
loc_831590F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_831590F8:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,19544
	ctx.r4.s64 = r11.s64 + 19544;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_83159108:
	// b 0x83159108
	goto loc_83159108;
}

__attribute__((alias("__imp__sub_83159110"))) PPC_WEAK_FUNC(sub_83159110);
PPC_FUNC_IMPL(__imp__sub_83159110) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83159208
	if (cr6.eq) goto loc_83159208;
	// addi r29,r11,-4
	r29.s64 = r11.s64 + -4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83159208
	if (cr6.eq) goto loc_83159208;
	// li r28,0
	r28.s64 = 0;
loc_83159140:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r27,r11,-4
	r27.s64 = r11.s64 + -4;
	// bne cr6,0x83159154
	if (!cr6.eq) goto loc_83159154;
	// mr r27,r28
	r27.u64 = r28.u64;
loc_83159154:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e76330
	sub_82E76330(ctx, base);
	// cmplw cr6,r3,r26
	cr6.compare<uint32_t>(ctx.r3.u32, r26.u32, xer);
	// bne cr6,0x831591fc
	if (!cr6.eq) goto loc_831591FC;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
loc_83159168:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83159210
	if (cr6.eq) goto loc_83159210;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x83159184
	if (!cr6.eq) goto loc_83159184;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_83159184:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x83159198
	if (!cr6.eq) goto loc_83159198;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_83159198:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831591ac
	if (cr6.eq) goto loc_831591AC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_831591AC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831591c0
	if (cr6.eq) goto loc_831591C0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_831591C0:
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831591f4
	if (!cr6.eq) goto loc_831591F4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83153d40
	sub_83153D40(ctx, base);
	// b 0x83159168
	goto loc_83159168;
loc_831591F4:
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83159168
	if (!cr6.eq) goto loc_83159168;
loc_831591FC:
	// mr r29,r27
	r29.u64 = r27.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x83159140
	if (!cr6.eq) goto loc_83159140;
loc_83159208:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
loc_83159210:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,19544
	ctx.r4.s64 = r11.s64 + 19544;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_83159220:
	// b 0x83159220
	goto loc_83159220;
}

__attribute__((alias("__imp__sub_83159228"))) PPC_WEAK_FUNC(sub_83159228);
PPC_FUNC_IMPL(__imp__sub_83159228) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r29,r3,4
	r29.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83159330
	if (cr6.eq) goto loc_83159330;
	// addi r30,r11,-4
	r30.s64 = r11.s64 + -4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83159330
	if (cr6.eq) goto loc_83159330;
	// li r28,0
	r28.s64 = 0;
	// li r26,-1
	r26.s64 = -1;
loc_8315925C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r27,r11,-4
	r27.s64 = r11.s64 + -4;
	// bne cr6,0x83159270
	if (!cr6.eq) goto loc_83159270;
	// mr r27,r28
	r27.u64 = r28.u64;
loc_83159270:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83156258
	sub_83156258(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83159324
	if (cr6.eq) goto loc_83159324;
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
loc_83159290:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83159338
	if (cr6.eq) goto loc_83159338;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x831592ac
	if (!cr6.eq) goto loc_831592AC;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_831592AC:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x831592c0
	if (!cr6.eq) goto loc_831592C0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_831592C0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831592d4
	if (cr6.eq) goto loc_831592D4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_831592D4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831592e8
	if (cr6.eq) goto loc_831592E8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_831592E8:
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8315931c
	if (!cr6.eq) goto loc_8315931C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83153d40
	sub_83153D40(ctx, base);
	// b 0x83159290
	goto loc_83159290;
loc_8315931C:
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83159290
	if (!cr6.eq) goto loc_83159290;
loc_83159324:
	// mr r30,r27
	r30.u64 = r27.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x8315925c
	if (!cr6.eq) goto loc_8315925C;
loc_83159330:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
loc_83159338:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,19544
	ctx.r4.s64 = r11.s64 + 19544;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_83159348:
	// b 0x83159348
	goto loc_83159348;
}

__attribute__((alias("__imp__sub_83159350"))) PPC_WEAK_FUNC(sub_83159350);
PPC_FUNC_IMPL(__imp__sub_83159350) {
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,-30616(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -30616);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831593cc
	if (cr6.eq) goto loc_831593CC;
	// addi r31,r11,-12
	r31.s64 = r11.s64 + -12;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831593cc
	if (cr6.eq) goto loc_831593CC;
	// li r30,0
	r30.s64 = 0;
loc_83159380:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, xer);
	// bne cr6,0x831593b8
	if (!cr6.eq) goto loc_831593B8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
loc_831593B8:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831593cc
	if (cr6.eq) goto loc_831593CC;
	// addic. r31,r11,-12
	xer.ca = r11.u32 > 11;
	r31.s64 = r11.s64 + -12;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x83159380
	if (!cr0.eq) goto loc_83159380;
loc_831593CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831593D8"))) PPC_WEAK_FUNC(sub_831593D8);
PPC_FUNC_IMPL(__imp__sub_831593D8) {
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
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83159408
	if (cr6.eq) goto loc_83159408;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83159408:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315942c
	if (cr6.eq) goto loc_8315942C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r9.u32);
loc_8315942C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159440"))) PPC_WEAK_FUNC(sub_83159440);
PPC_FUNC_IMPL(__imp__sub_83159440) {
	PPC_FUNC_PROLOGUE();
	// stw r4,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159448"))) PPC_WEAK_FUNC(sub_83159448);
PPC_FUNC_IMPL(__imp__sub_83159448) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159450"))) PPC_WEAK_FUNC(sub_83159450);
PPC_FUNC_IMPL(__imp__sub_83159450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// blr 
	return;
}

